#pragma once
#include <chrono>
#include <fstream>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
namespace Laboratorywork10 {
	
   // Разделение на 2 файла
   void split(const int bufLength, string fileRead, int& incount, int& compcount, int& outcount) {
	   int* buf = new int[bufLength];			// Промежуточный массив для внутренней сортировки
	   ifstream readA(fileRead);		// Открыли файл для чтения
	   ofstream writeB("b.txt");		// Открыли файл для записи
	   ofstream writeC("c.txt");		// Открыли файл для записи
	   bool file = true;						// Определяем файл записи: true - файл b, false - файл c
	   while (!readA.eof()) {					// Пока файл не пуст, считываем числа
		   compcount++;
		   for (int i = 0; i < bufLength; ++i) {
			   if (readA.eof()) buf[i] = -1;
			   else {
				   readA >> buf[i];				// Считывание нового числа в массив для сортировки
				   incount++;
			   }
			   compcount += 2;
		   }
		   shell(buf, bufLength, compcount);	// Сортировка массива
		   if (file)							// В зависимости от направления пишем в файл число
			   for (int i = 0; i < bufLength; ++i) {
				   compcount += 2;
				   if (buf[i] != -1) {
					   writeB << " " << buf[i];	// Записываем число в файл b
					   outcount++;
				   }
			   }
		   else
			   for (int i = 0; i < bufLength; ++i) {
				   compcount += 2;
				   if (buf[i] != -1) {
					   writeC << " " << buf[i];	// Записываем число в файл c
					   outcount++;
				   }
			   }
		   compcount++;
		   file = !file;						// Меняем направление
	   }
	   readA.close();							// Закрываем поток чтения
	   writeB.close();							// Закрываем поток записи
	   writeC.close();							// Закрываем поток записи
	   delete[] buf;							// Освобождение памяти
   }

   void naturalSortCombine(string write, string first, string second, int& incount, int& compcount, int& outcount) {
	   ofstream writeA(write);						// Открыли файл для записи
	   ifstream readFirst(first);								// Открыли файл для чтения
	   ifstream readSecond(second);							// Открыли файл для чтения
	   //Читаем первые числа из 2 файлов
	   int fileFirst, fileSecond, tempFirst = -1, tempSecond = -1;
	   if (readFirst.eof()) fileFirst = -1;						// Если файл пуст, устанавливаем значение -1
	   else {
		   readFirst >> fileFirst;								// Иначе считываем число из файла
		   incount++;
	   }
	   if (readSecond.eof()) fileSecond = -1;					// Если файл пуст, устанавливаем значение -1
	   else {
		   readSecond >> fileSecond;							// Иначе считываем число из файла
		   incount++;
	   }
	   compcount += 2;
	   while (fileFirst != -1 || fileSecond != -1) {			// Пока оба файла не кончились
		   compcount++;
		   tempFirst = -1, tempSecond = -1;
		   //Пока не кончился хоть 1 файл или цепочка
		   while (fileFirst != -1 && fileSecond != -1 && tempFirst <= fileFirst && tempSecond <= fileSecond) {
			   compcount++;
			   if (fileFirst < fileSecond) {					// Сравниваем 2 числа из 2 файлов
				   writeA << " " << fileFirst;					// Если первое меньше, то записываем его в файл a
				   outcount++;									// Увеличение счетчика записи
				   tempFirst = fileFirst;
				   // Читаем новое число из первого файла
				   if (readFirst.eof()) fileFirst = -1;			// Если файл пуст, устанавливаем значение -1
				   else {
					   readFirst >> fileFirst;					// Иначе считываем число из файла
					   incount++;
				   }
				   compcount++;
			   }
			   else {
				   writeA << " " << fileSecond;					// Если второе меньше, то записываем его в файл a
				   outcount++;									// Увеличение счетчика записи
				   tempSecond = fileSecond;
				   // Читаем новое число из второго файла
				   if (readSecond.eof()) fileSecond = -1;		// Если файл пуст, устанавливаем значение -1
				   else {
					   readSecond >> fileSecond;				// Иначе считываем число из файла
					   incount++;
				   }
				   compcount++;
			   }
			   compcount++;
		   }
		   // Дописываем числа из первого файла, если они остались в цепочке после сравнения со вторым файлом
		   while (fileFirst != -1 && tempFirst <= fileFirst) {
			   compcount++;
			   writeA << " " << fileFirst;
			   tempFirst = fileFirst;
			   outcount++;									// Увеличение счетчика записи
			   // Читаем новое число из первого файла
			   if (readFirst.eof()) fileFirst = -1;			// Если файл пуст, устанавливаем значение -1
			   else {
				   readFirst >> fileFirst;					// Иначе считываем число из файла
				   incount++;
			   }
			   compcount++;
		   }
		   // Дописываем числа из второго файла, если они остались в цепочке после сравнения с числами из цепочки первого файла
		   while (fileSecond != -1 && tempSecond <= fileSecond) {
			   compcount++;
			   writeA << " " << fileSecond;
			   outcount++;									// Увеличение счетчика записи
			   tempSecond = fileSecond;
			   // Читаем новое число из второго файла
			   if (readSecond.eof()) fileSecond = -1;			// Если файл пуст, устанавливаем значение -1
			   else {
				   readSecond >> fileSecond;					// Иначе считываем число из файла
				   incount++;
			   }
			   compcount++;
		   }
	   }
	   writeA.close();											// Закрываем поток записи
	   readFirst.close();										// Закрываем поток чтения
	   readFirst.close();										// Закрываем поток чтения
   }

   // Перемещаем данные в файлах в методе естественного слияния. Принимает имена файлов для чтения и записи
   bool betweenNaturalInEx(string firstRead, string secondRead, string firstWrite, string secondWrite, int& incount, int& compcount, int& outcount) {
	   ifstream readFirst(firstRead);							// Открыли файл для чтения
	   ifstream readSecond(secondRead);						// Открыли файл для чтения
	   ofstream writeFirst(firstWrite);						// Открыли файл для записи
	   ofstream writeSecond(secondWrite);						// Открыли файл для записи
	   bool file = true;										// Переменная для определения файлов для записи
	   int fileFirst, fileSecond, tempFirst = -1, tempSecond = -1;
	   if (readFirst.eof()) fileFirst = -1;					// Если файл пуст, устанавливаем значение -1
	   else {
		   readFirst >> fileFirst;								// Иначе считываем число из файла
		   incount++;
	   }
	   if (readSecond.eof()) fileSecond = -1;					// Если файл пуст, устанавливаем значение -1
	   else {
		   readSecond >> fileSecond;							// Иначе считываем число из файла
		   incount++;
	   }
	   compcount += 2;
	   int counter = 0;										// Количество цепочек в файле после обновления
	   while (fileFirst != -1 || fileSecond != -1) {			// Пока оба файла не кончились
		   compcount++;
		   tempFirst = -1, tempSecond = -1;
		   //Пока в обоих файлах есть что читать и не достигли конца цепочек, то продолжаем крутиться в цикле
		   while (fileFirst != -1 && fileSecond != -1 && tempFirst <= fileFirst && tempSecond <= fileSecond) {
			   compcount++;
			   if (fileFirst < fileSecond) {					// Сравниваем 2 числа из разных файлов
				   // В зависимости от направления записываем в необходимый файл число из первого файла если оно меньше
				   if (file) writeFirst << " " << fileFirst;
				   else writeSecond << " " << fileFirst;
				   outcount++;									// Увеличение счетчика записи
				   compcount++;
				   tempFirst = fileFirst;
				   // Читаем новое число из первого файла
				   if (readFirst.eof()) fileFirst = -1;				// Если файл пуст, устанавливаем значение -1
				   else {
					   readFirst >> fileFirst;						// Иначе считываем число из файла
					   incount++;									// Увеличение счетчика чтений
				   }
				   compcount++;
			   }
			   else {
				   // Если второе меньше, то записываем его в файл в зависимости от направления
				   if (file) writeFirst << " " << fileSecond;
				   else writeSecond << " " << fileSecond;
				   outcount++;									// Увеличение счетчика записи
				   compcount++;
				   tempSecond = fileSecond;
				   // Читаем новое число из первого файла
				   if (readSecond.eof()) fileSecond = -1;			// Если файл пуст, устанавливаем значение -1
				   else {
					   readSecond >> fileSecond;					// Иначе считываем число из файла
					   incount++;									// Увеличение счетчика чтений
				   }
				   compcount++;
			   }
			   compcount++;
		   }
		   // Дописываем данные из первого файла, если они остались в цепочке после сравнения со вторым файлом
		   while (fileFirst != -1 && tempFirst <= fileFirst) {
			   compcount++;
			   if (file) writeFirst << " " << fileFirst;
			   else writeSecond << " " << fileFirst;
			   outcount++;									// Увеличение счетчика записи
			   compcount++;
			   tempFirst = fileFirst;
			   // Читаем новое число из первого файла
			   if (readFirst.eof()) fileFirst = -1;			// Если файл пуст, устанавливаем значение -1
			   else {
				   readFirst >> fileFirst;					// Иначе считываем число из файла
				   incount++;									// Увеличение счетчика чтений
			   }
			   compcount++;
		   }
		   //Дописываем числа из второго файла, если они остались в цепочке после сравнения с первым файлом
		   while (fileSecond != -1 && tempSecond <= fileSecond) {
			   compcount++;
			   if (file) writeFirst << " " << fileSecond;
			   else writeSecond << " " << fileSecond;
			   outcount++;									// Увеличение счетчика записи
			   compcount++;
			   tempSecond = fileSecond;
			   // Читаем новое число из второго файла
			   if (readSecond.eof()) fileSecond = -1;			// Если файл пуст, устанавливаем значение -1
			   else {
				   readSecond >> fileSecond;					// Иначе считываем число из файла
				   incount++;									// Увеличение счетчика чтений
			   }
			   compcount++;
		   }
		   file = !file;						// Меняем направление
		   counter++;							// Увеличение счетчика цепочек
	   }
	   readFirst.close();										// Закрываем поток чтения
	   readSecond.close();										// Закрываем поток чтения
	   writeFirst.close();
	   writeSecond.close();

	   //Если цепочек больше чем 2, то продолжаем сортировку
	   return counter > 2;
   }

   // ---------------------------------------
   // ---------------------------------------
   // ---------------Cортировка--------------
   // ---------------------------------------
   // ---------------------------------------
	void InternalExternal(long size, long buf, int* inexSort) {
		int incount = 0;									// Счётчик считываний из файла
		int compcount = 0;									// Счётчик сравнений
		int outcount = 0;									// Счетчик записей в файл
		string fileA = "a5.txt";
		auto start = chrono::high_resolution_clock::now();

		split(buf, fileA, incount, compcount, outcount);	// Разделяем файл a.txt на два файла b.txt и c.txt
		bool file = true; // Определяем файлы записи: true - читать из b c, писать в d e, false - файл читать из d e, писать в b c
		// i - количество элементов, которые должны быть переведены в другой файл вместе
		for (long i = 1; i < size / 2; i *= 2) {
			//В зависимости от направления записи передаём файлы для чтения и записи
			if (file)
				betweenNaturalInEx("b.txt", "c.txt", "d.txt", "e.txt", incount, compcount, outcount);	// Читать из b c, писать в d e
			else
				betweenNaturalInEx("d.txt", "e.txt", "b.txt", "c.txt", incount, compcount, outcount);	// Читать из d e, писать в b c
			file = !file;					// Меняем направление
		}

		if (file)							// Теперь объединяем обратно в файл a, используя последние редактируемые файлы
			naturalSortCombine(fileA, "b.txt", "c.txt", incount, compcount, outcount);	// Читать из b c
		else
			naturalSortCombine(fileA, "d.txt", "e.txt", incount, compcount, outcount);	// Читать из d e
		auto finish = chrono::high_resolution_clock::now();
		auto time = chrono::duration_cast<chrono::duration < double>>(finish - start);
		// Вывод характеристик сортировки
		inexSort[0] = time.count() * 10000;
		inexSort[1] = incount;
		inexSort[2] = compcount;
		inexSort[3] = outcount;
	}
}
