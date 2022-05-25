#pragma once
#include <chrono>
#include <fstream>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
namespace Laboratorywork10 {

	   // Получение числа с позиции position в файле path
	   int getNumber(long position, const char* path, long size) {
		   if (position < 0 || position >= size) return 10000;
		   FILE* f = fopen(path, "rb");						// Открытие файла
		   fseek(f, position * sizeof(int), SEEK_SET);		// Перемещение указателя
		   int number;
		   if (!feof(f))
			   fread(&number, sizeof(int), 1, f);	// Считывание число
		   else
			   return 10000;
		   fclose(f);														// Очистка ресурсов
		   return number;
	   }

	   // Замена числа на позиции position в файле path
	   void setNumber(int number, long position, const char* path, long size) {
		   if (position < 0 || position >= size) return;
		   FILE* f = fopen(path, "rb+");
		   fseek(f, position * sizeof(int), SEEK_SET);		// Перемещение указателя
		   int count = 0;
		   count = fwrite(&number, sizeof(int), 1, f);		// Запись числа в файл
		   fclose(f);														// Очистка ресурсов
	   }

	   // Cортировка Шелла с замером характеристик
	   void shell(int* num, int size, int& comparisons) {
		   //int increment = log2(size) - 1;			// начальное приращение сортировки
		   int increment = size / 2;
		   while (increment > 0) {						// пока существует приращение
			   for (int i = 0; i < size; i++) {		// для всех элементов массива
				   int j = i;							// сохраняем индекс и элемент
				   int temp = num[i];
				   // просматриваем остальные элементы массива, отстоящие от j-ого
				   // на величину приращения
				   while ((j >= increment) && (num[j - increment] > temp)) {
					   // пока отстоящий элемент больше текущего
					   num[j] = num[j - increment];	// перемещаем его на текущую позицию
					   j = j - increment;				// переходим к следующему отстоящему элементу
					   comparisons++;
				   }
				   num[j] = temp;						// на выявленное место помещаем сохранённый элемент
			   }
			   increment = increment / 2;				// делим приращение на 2
		   }
	   }
	   
	   // Метод поглощения
	   void absorptionSort(long lengthBuf, long size, const char* path, int& incount, int& compcount, int& outcount) {
		   int* buffer = new int[lengthBuf];					// Создание массива-буффера
		   for (int i = 0; i < lengthBuf; i++)					// Заполняем буффера последней тройкой чисел из файла
			   buffer[i] = getNumber(size - 1 - i, path, size);
		   compcount += lengthBuf;
		   incount += lengthBuf;
		   shell(buffer, lengthBuf, compcount);// Сортировка буффера
		   //Проверяем не превысил ли размер буффера размер файла
		   if (lengthBuf > size) {
			   compcount++;
			   // Если размер буффера больше, то записываем его в файл и завершаем сортировку
			   // Записываем только количество чисел, которое изначально было в файле
			   for (int i = 0; i < size; i++)
				   setNumber(buffer[i], i, path, size);
			   compcount += size;
			   outcount += size;
			   delete[] buffer;							// Освобождаем ресурсы
			   return;
		   }
		   // Если буффер меньше размера файла, то записываем его на прежнее место, только в отсортированном виде
		   for (int i = 0; i < lengthBuf; i++)
			   setNumber(buffer[i], size - lengthBuf + i, path, size);
		   outcount += lengthBuf;
		   compcount += lengthBuf;
		   // Количество прошедших повторений записи в буфер и сортировки для определения положения чтения и записи
		   int iterations = 1;
		   // Пока количество выполненных итераций меньше либо равно числу необходимых итераций
		   while (iterations <= size / lengthBuf - 1) {
			   compcount++;
			   // Заполняем буффер
			   for (int i = 0; i < lengthBuf; i++)
				   /* Число элементов size
				   Отчёт элементов с 0, поэтому последний индекс числа в файле size -1
				   lengthBuf - размер буфера, iterations - количество итераций.
				   При перемножении дают количество чисел, которые уже были отсортированы
				   i - вычитание индекса в буффере*/
				   buffer[i] = getNumber(size - 1 - lengthBuf * iterations - i, path, size);
			   compcount += lengthBuf;
			   incount += lengthBuf;
			   shell(buffer, lengthBuf, compcount);			// Сортировка буффера
			   int kBuffer = 0;						// Количество чисел, уже записанных из буффера
			   int kFiles = 0;						// Количество чисел, уже записанных из файла
			   // Повторяем цикл столько раз, сколько отсортированных элементов у нас уже есть + размер буффера
			   for (int i = 0; i < lengthBuf + lengthBuf * iterations; i++) {
				   compcount++;
				   incount++;
				   outcount++;
				   int numberFromFile = getNumber(size - lengthBuf * iterations + kFiles, path, size);
				   compcount++;
				   // Если элемент буффера меньше элемента файла, то пишем из буффера,  иначе из файла
				   if (buffer[kBuffer] <= numberFromFile) {
					   setNumber(buffer[kBuffer], size - lengthBuf * (iterations + 1) + i, path, size);
					   kBuffer++;					// Увеличение счетчика чисел, добавленных из буффера
					   //Если все числа из буффера добавлены в файл, то значит, что остальная часть отсортирована и можно завершать цикл
					   /* Буффер 1 2 3 - отсортирован
					   Файл 3 1 2 4 5 6, где 4 5 6 - отсортированная ранее часть
					   Проходя по циклу заменяем в файле 3 на 1, 1 на 2, 2 на 3. 4 5 6 в замене не нуждаются - выходим из цикла */
					   if (kBuffer == lengthBuf) {
						   compcount++;
						   break;
					   }
				   }
				   else {
					   /*Как получили число в скобках:
					   Число элементов count
					   -1 не нужен т.к. положение числа настраивается с помощью i
					   lengthBuf - размер буфера, iterations+1 - количество итераций. При перемножении дают количество чисел, которые уже были отсортированы
					   i - прибавление индекса
					   */
					   setNumber(numberFromFile, size - lengthBuf * (iterations + 1) + i, path, size);
					   kFiles++;					// Увеличесние счетчика чисел, добавленных из файла
				   }
			   }
			   iterations++;						// Увеличиваем итерацию после её завершения
		   }
		   // Количество элементов, которые останутся после сортировки, но не смогут полностью заполнить буффер
		   const int mod = static_cast<int>(size % lengthBuf);
		   for (int i = 0; i < mod; i++)
			   buffer[i] = getNumber(i, path, size);		// Заполняем буффер этими элементами
		   compcount += mod;
		   incount += mod;
		   // Заполняем буффер "большими числами", чтобы при сортировке они ушли в конец и не мешались
		   for (int i = mod; i < lengthBuf; i++)
			   buffer[i] = 10000;
		   compcount += lengthBuf;
		   shell(buffer, lengthBuf, compcount);			// Сортировка буффера
		   int kBuffer = 0;						// Количество чисел, уже записанных из буффера
		   int kFiles = 0;						// Количество чисел, уже записанных из файла
		   //Проходим по всему файлу
		   for (int i = 0; i < size - 1; i++) {
			   compcount++;
			   incount++;
			   outcount++;
			   int numberFromFile = getNumber(mod + kFiles, path, size);
			   compcount++;
			   // Сравниваем числа из буффера с числами из файла и записываем
			   if (buffer[kBuffer] <= numberFromFile) {
				   setNumber(buffer[kBuffer], i, path, size);
				   kBuffer++;
				   if (kBuffer == mod) break;
			   }
			   else {
				   setNumber(numberFromFile, i, path, size);
				   kFiles++;
			   }
		   }
		   delete[] buffer;							// Освобождаем ресурсы
	   }

	   // ---------------------------------------
	   // ---------------------------------------
	   // ---------------Cортировка--------------
	   // ---------------------------------------
	   // ---------------------------------------
	   void Absorting(long size, long buf, int* absorting) {
		   int incount = 0;									// Счётчик считываний из файла
		   int compcount = 0;								// Счётчик сравнений
		   int outcount = 0;								// Счетчик записей в файл
		   auto start = chrono::high_resolution_clock::now();
		   absorptionSort(buf, size, "a6.txt", incount, compcount, outcount);
		   auto finish = chrono::high_resolution_clock::now();
		   auto time = chrono::duration_cast<chrono::duration < double>>(finish - start);
		   // Вывод характеристик сортировки
		   absorting[0] = time.count() * 10000;
		   absorting[1] = incount;
		   absorting[2] = compcount;
		   absorting[3] = outcount;
	   }
		   
}
