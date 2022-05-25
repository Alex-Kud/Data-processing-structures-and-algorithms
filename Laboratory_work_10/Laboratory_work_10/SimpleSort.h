#pragma once
#include <fstream>
#include <chrono>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
namespace Laboratorywork10 {
	// Разделение на 2 файла. len - количество элементов в последовательности
	void simpleSortSplit(long len, int& incount, int& compcount, int& outcount) {
		ofstream writeB("b.txt");		// Открыли файл для записи
		ofstream writeC("c.txt");		// Открыли файл для записи
		ifstream readA("a.txt");		// Открыли файл для чтения
		long curLen = len;						// Осталось обработать элементов в последовательности
		bool file = true;						// Определяем файл записи: true - файл b, false - файл c
		while (!readA.eof()) {					// Пока файл не пуст, считываем числа
			compcount++;						// Увеличение счётчика сравнений (while)
			int number;							// Новое число
			readA >> number;					// Считывание нового числа
			incount++;							// Фиксирование считывания
			compcount++;						// Увеличение счётчика сравнений
			if (curLen > 0)					    // Если последовательность не завершена, не меняем файл записи
				curLen--;						// Уменьшаем остаток длины последовательности
			else {
				file = !file;					// Иначе меняем файл записи
				curLen = len - 1;				// Уменьшаем остаток длины новой последовательности, т.к. уже добавим в неё первое число
			}
			compcount++;						// Увеличение счётчика сравнений
			if (file) writeB << " " << number;	// Записываем число в  нужный файл
			else writeC << " " << number;
			outcount++;							// Фиксирование записи
		}
		readA.close();							// Закрываем поток чтения
		writeB.close();							// Закрываем поток записи
		writeB.close();							// Закрываем поток записи
	}

	// Метод для объединения данных из двух файлов в один
	void simpleSortCombine(long len, int& incount, int& compcount, int& outcount) {
		ofstream writeA("a.txt");		// открыли файл для записи
		ifstream readB("b.txt");			// открыли файл для чтения
		ifstream readC("c.txt");			// открыли файл для чтения
		//Читаем первые числа из 2 файлов
		int fileB, fileC;
		if (readB.eof()) fileB = -1;			// Если файл пуст, устанавливаем значение -1
		else {
			readB >> fileB;						// Иначе считываем число из файла
			incount++;							// Фиксирование считывания
		}
		if (readC.eof()) fileC = -1;			// Если файл пуст, устанавливаем значение -1
		else {
			readC >> fileC;						// Иначе считываем число из файла
			incount++;							// Фиксирование считывания
		}
		compcount += 2;							// Увеличение счётчика сравнений
		while (fileB != -1 || fileC != -1) {	// Пока оба файла не кончились
			compcount++;						// Увеличение счётчика сравнений (while)
			long curB = len;					// Осталось обработать элементов в последовательности B
			long curC = len;					// Осталось обработать элементов в последовательности C
			// Пока не закончится место в последовательности или пока не достигнут конец файла
			while (curB != 0 && curC != 0 && fileB != -1 && fileC != -1) {
				compcount++;					// Увеличение счётчика сравнений (while)
				// Сравниваем 2 числа из 2 файлов
				if (fileB < fileC) {
					writeA << " " << fileB;		// Если первое меньше, то записываем его в файл a
					outcount++;					// Увеличение счетчика записи
					curB--;						// Уменьшаем остаток длины последовательности для файла B
					// Читаем новое число из первого файла
					if (readB.eof()) fileB = -1;// Если файл пуст, устанавливаем значение -1
					else {
						readB >> fileB;			// Иначе считываем число из файла
						incount++;				// Увеличение счетчика чтения
					}
					compcount++;				// Увеличение счётчика сравнений
				}
				else {
					writeA << " " << fileC;		// Если второе меньше, то записываем его в файл a
					outcount++;					// Увеличение счетчика записи
					curC--;						// Уменьшаем остаток длины последовательности для файла B
					// Читаем новое число из второго файла
					if (readC.eof()) fileC = -1;// Если файл пуст, устанавливаем значение -1
					else {
						readC >> fileC;			// Иначе считываем число из файла
						incount++;				// Увеличение счетчика чтения
					}
					compcount++;				// Увеличение счётчика сравнений
				}
				compcount++;					// Увеличение счётчика сравнений
			}
			// Дописываем данные из первого файла, если второй закончился, или достигнут лимит чисел в последовательности из второго
			while (curB != 0 && fileB != -1) {
				compcount++;					// Увеличение счётчика сравнений (while)
				writeA << " " << fileB;
				outcount++;						// Увеличение счетчика записи
				curB--;							// Уменьшаем остаток длины последовательности для файла B
				// Читаем новое число из первого файла
				if (readB.eof()) fileB = -1;	// Если файл пуст, устанавливаем значение -1
				else {
					readB >> fileB;				// Иначе считываем число из файла
					incount++;					// Увеличение счетчика чтения
				}
				compcount++;					// Увеличение счётчика сравнений
			}
			// Дописываем данные из второго файла, если первый закончился, или достигнут лимит чисел в последовательности из первого
			while (curC != 0 && fileC != -1) {
				compcount++;					// Увеличение счётчика сравнений (while)
				writeA << " " << fileC;
				outcount++;						// Увеличение счетчика записи
				curC--;							// Уменьшаем остаток длины последовательности для файла B
				// Читаем новое число из второго файла
				if (readC.eof()) fileC = -1;	// Если файл пуст, устанавливаем значение -1
				else {
					readC >> fileC;				// Иначе считываем число из файла
					incount++;					// Увеличение счетчика чтения
				}
				compcount++;					// Увеличение счётчика сравнений
			}
		}
		writeA.close();							// Закрываем поток записи
		readB.close();							// Закрываем поток чтения
		readB.close();							// Закрываем поток чтения
	}

	// Разделение на 2 файла
	void simpleSortSplit1(int& incount, int& compcount, int& outcount) {
		ifstream readA("a2.txt");			// Открыли файл для чтения
		ofstream writeB("b.txt");		// Открыли файл для записи
		ofstream writeC("c.txt");		// Открыли файл для записи
		bool file = true;						// Определяем файл записи: true - файл b, false - файл c
		while (!readA.eof()) {					// Пока файл не пуст, считываем числа
			compcount++;
			int number;							// Новое число
			readA >> number;					// Считывание нового числа
			incount++;
			if (file)							// В зависимости от направления пишем в файл число
				writeB << " " << number;		// Записываем число в файл b
			else
				writeC << " " << number;		// Записываем число в файл c
			outcount++;
			compcount++;
			file = !file;						// Меняем направление
		}
		readA.close();							// Закрываем поток чтения
		writeB.close();							// Закрываем поток записи
		writeB.close();							// Закрываем поток записи
	}

	// Метод для объединения 2 файлов в методе однофазного простого слияния
	void simpleSortCombine1(long len, string first, string second, int& incount, int& compcount, int& outcount) {
		ofstream writeA("a2.txt");						// Открыли файл для записи
		ifstream readFirst(first);								// Открыли файл для чтения
		ifstream readSecond(second);								// Открыли файл для чтения
		//Читаем первые числа из 2 файлов
		int fileFirst, fileSecond;
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
			long curFirst = len;									// Осталось обработать элементов в первой последовательности
			long curSecond = len;								// Осталось обработать элементов во второй последовательности
			// Пока не закончится место в последовательности или пока не достигнут конец файла
			while (curFirst != 0 && curSecond != 0 && fileFirst != -1 && fileSecond != -1) {
				compcount++;										// while
				compcount++;										// if
				if (fileFirst < fileSecond) {					// Сравниваем 2 числа из 2 файлов
					writeA << " " << fileFirst;					// Если первое меньше, то записываем его в файл a
					outcount++;									// Увеличение счетчика записи
					curFirst--;									// Уменьшаем остаток длины последовательности для первого файла
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
					curSecond--;									// Уменьшаем остаток длины последовательности для второго файла
					// Читаем новое число из второго файла
					if (readSecond.eof()) fileSecond = -1;		// Если файл пуст, устанавливаем значение -1
					else {
						readSecond >> fileSecond;				// Иначе считываем число из файла
						incount++;
					}
					compcount++;
				}
			}
			// Дописываем данные из первого файла, если второй закончился, или достигнут лимит чисел в последовательности из второго
			while (curFirst != 0 && fileFirst != -1) {
				compcount++;
				writeA << " " << fileFirst;
				outcount++;									// Увеличение счетчика записи
				curFirst--;										// Уменьшаем остаток длины последовательности для первого файла
				// Читаем новое число из первого файла
				if (readFirst.eof()) fileFirst = -1;			// Если файл пуст, устанавливаем значение -1
				else {
					readFirst >> fileFirst;					// Иначе считываем число из файла
					incount++;
				}
				compcount++;
			}
			// Дописываем данные из второго файла, если первый закончился, или достигнут лимит чисел в последовательности из первого
			while (curSecond != 0 && fileSecond != -1) {
				compcount++;
				writeA << " " << fileSecond;
				outcount++;									// Увеличение счетчика записи
				curSecond--;									// Уменьшаем остаток длины последовательности для второгофайла
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

	// Перемещаем данные в файлах в методе простого слияния. Принимает имена файлов для чтения и записи, а также длину цепочки
	void betweenFiles(long len, string firstRead, string secondRead, string firstWrite, string secondWrite, int& incount, int& compcount, int& outcount) {
		ifstream readFirst(firstRead);							// Открыли файл для чтения
		ifstream readSecond(secondRead);							// Открыли файл для чтения
		ofstream writeFirst(firstWrite);							// Открыли файл для записи
		ofstream writeSecond(secondWrite);						// Открыли файл для записи
		bool file = true;										// Переменная для определения файлов для записи
		int fileFirst, fileSecond;
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
			//Выставляем длину для цепочек
			long curFirst = len;
			long curSecond = len;
			// Пока не закончится место в последовательности или пока не достигнут конец файла
			while (curFirst != 0 && curSecond != 0 && fileFirst != -1 && fileSecond != -1) {
				compcount++;										// while
				compcount++;										// if
				if (fileFirst < fileSecond) {					// Сравниваем 2 числа из 2 файлов
					// Если первое меньше, то записываем его в файл в зависимости от направления
					if (file) writeFirst << " " << fileFirst;
					else writeSecond << " " << fileFirst;
					outcount++;									// Увеличение счетчика записи
					compcount++;
					curFirst--;										// Уменьшаем остаток длины последовательности для первого файла
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
					curSecond--;										// Уменьшаем остаток длины последовательности для второго файла
					// Читаем новое число из первого файла
					if (readSecond.eof()) fileSecond = -1;			// Если файл пуст, устанавливаем значение -1
					else {
						readSecond >> fileSecond;					// Иначе считываем число из файла
						incount++;									// Увеличение счетчика чтений
					}
					compcount++;
				}
			}
			// Дописываем данные из первого файла, если второй закончился, или достигнут лимит чисел в последовательности из второго
			while (curFirst != 0 && fileFirst != -1) {
				compcount++;
				if (file) writeFirst << " " << fileFirst;
				else writeSecond << " " << fileFirst;
				outcount++;									// Увеличение счетчика записи
				compcount++;
				curFirst--;										// Уменьшаем остаток длины последовательности для первого файла
				// Читаем новое число из первого файла
				if (readFirst.eof()) fileFirst = -1;			// Если файл пуст, устанавливаем значение -1
				else {
					readFirst >> fileFirst;					// Иначе считываем число из файла
					incount++;									// Увеличение счетчика чтений
				}
				compcount++;
			}
			// Дописываем данные из второго файла, если первый закончился, или достигнут лимит чисел в последовательности из первого
			while (curSecond != 0 && fileSecond != -1) {
				compcount++;
				if (file) writeFirst << " " << fileSecond;
				else writeSecond << " " << fileSecond;
				outcount++;									// Увеличение счетчика записи
				compcount++;
				curSecond--;										// Уменьшаем остаток длины последовательности для второгофайла
				// Читаем новое число из второго файла
				if (readSecond.eof()) fileSecond = -1;			// Если файл пуст, устанавливаем значение -1
				else {
					readSecond >> fileSecond;					// Иначе считываем число из файла
					incount++;									// Увеличение счетчика чтений
				}
				compcount++;
			}
			file = !file;										// Меняем направление
		}
		readFirst.close();										// Закрываем поток чтения
		readSecond.close();										// Закрываем поток чтения
		writeFirst.close();										// Закрываем поток записи
		writeSecond.close();										// Закрываем поток записи
	}

	
	// ---------------------------------------
	// ---------------------------------------
	// ---------Однофазная сортировка---------
	// ---------------------------------------
	// ---------------------------------------
	void SimpleSortOnePhase(long size, int*& onePhase) {
		int incount = 0;									// Счётчик считываний из файла
		int compcount = 0;									// Счётчик сравнений
		int outcount = 0;									// Счетчик записей в файл
		auto startOnePhase = chrono::high_resolution_clock::now();
		simpleSortSplit1(incount, compcount, outcount);	// Разделяем файл a.txt на два файла b.txt и c.txt
		bool file = true; // Определяем файлы записи: true - читать из b c, писать в d e, false - файл читать из d e, писать в b c
		// i - количество элементов, которые должны быть переведены в другой файл вместе
		for (long i = 1; i < size / 2; i *= 2) {
			//В зависимости от направления записи передаём файлы для чтения и записи
			if (file)
				betweenFiles(i, "b.txt", "c.txt", "d.txt", "e.txt", incount, compcount, outcount);	// Читать из b c, писать в d e
			else
				betweenFiles(i, "d.txt", "e.txt", "b.txt", "c.txt", incount, compcount, outcount);	// Читать из d e, писать в b c
			file = !file;					// Меняем направление
		}
		if (file)							// Теперь объединяем обратно в файл a, используя последние редактируемые файлы
			simpleSortCombine1(size, "b.txt", "c.txt", incount, compcount, outcount);	// Читать из b c
		else
			simpleSortCombine1(size, "d.txt", "e.txt", incount, compcount, outcount);	// Читать из d e
		auto finishOnePhase = chrono::high_resolution_clock::now();
		auto timeOnePhase = chrono::duration_cast<chrono::duration < double>>(finishOnePhase - startOnePhase);
		// Вывод характеристик сортировки
		onePhase[0] = timeOnePhase.count() * 10000;
		onePhase[1] = incount;
		onePhase[2] = compcount;
		onePhase[3] = outcount;
		
	}

	// ---------------------------------------
	// ---------------------------------------
	// ---------Двухфазная сортировка---------
	// ---------------------------------------
	// ---------------------------------------
	void SimpleSortTwoPhase(long size, int*& twoPhase)
	{
		int incount = 0;						// Счётчик считываний из файла
		int compcount = 0;						// Счётчик сравнений
		int outcount = 0;						// Счетчик записей в файл
		auto startTwoPhase = chrono::high_resolution_clock::now();
		for (long i = 1; i < size; i *= 2) {
			simpleSortSplit(i, incount, compcount, outcount);		// Разделяем файл a.txt на два файла b.txt и c.txt
			simpleSortCombine(i, incount, compcount, outcount);	// Объединяем файлы b.txt и c.txt в файл a.txt
		}
		auto finishTwoPhase = chrono::high_resolution_clock::now();
		auto timeTwoPhase = chrono::duration_cast<chrono::duration < double>>(finishTwoPhase - startTwoPhase);
		// Вывод характеристик сортировки
		twoPhase[0] = timeTwoPhase.count() * 10000;
		twoPhase[1] = incount;
		twoPhase[2] = compcount;
		twoPhase[3] = outcount;
	}
}
