#pragma once
#include <fstream>
#include <chrono>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
namespace Laboratorywork10 {


		// Метод для разбиения данных на два файла для сортировки естественным слиянием
		void naturalSortSplit(string firstRead, string firstWrite, string secondWrite, int& incount, int& compcount, int& outcount) {
			ofstream writeB(firstWrite);		// Открыли файл для записи
			ofstream writeC(secondWrite);		// Открыли файл для записи
			ifstream readA(firstRead);		// Открыли файл для чтения
			int number;
			if (readA.eof()) number = -1;	// Если файл пуст, устанавливаем значение -1
			else {
				readA >> number;			// Иначе считываем число из файла
				incount++;					// Фиксирование считывания
			}
			compcount++;
			bool file = true;						// Определяем файл записи
			// Сохраняем предыдущее число. Ставим -1 чтобы первое число точно ушло в первый файл и не создало лишнего завершения цепочки.
			int last = -1;
			while (number != -1) {					// Пока файл не пуст
				compcount++;
				// Сравниваем текущее число с предыдущим
				if (number < last) {
					// Если текущее больше предыдущего, то цепочка отсортированна
					// Если нет, то цепочка не отсортирована, тогда
					// Выбираем из направления в какой файл писать
					compcount++;
					if (!file)
						writeC << " " << number;	// Записываем в другой файл число новой цепочки
					else
						writeB << " " << number;	// Записываем в другой файл число новой цепочки
					outcount++;
					file = !file;					// Смена направления, т.к. цепочка обрабатывается
				}
				else {
					// В зависимости от направления пишем в файл прочитанное число
					if (!file)
						writeB << " " << number;
					else
						writeC << " " << number;
					compcount++;
					outcount++;
				}
				compcount++;
				last = number;						// Устанавливаем предыдущее число
				if (readA.eof()) number = -1;		// Если файл пуст, устанавливаем значение -1
				else {
					readA >> number;				// Иначе считываем число из файла
					incount++;						// Фиксирование считывания
				}
				compcount++;
			}
			readA.close();							// Закрываем поток чтения
			writeB.close();							// Закрываем поток записи
			writeC.close();							// Закрываем поток записи
		}
		// Метод объединения для естественного слияния
		bool naturalSortCombine(int& incount, int& compcount, int& outcount) {
			ofstream writeA("a3.txt");			// открыли файл для записи
			ifstream readB("b.txt");			// открыли файл для чтения
			ifstream readC("c.txt");			// открыли файл для чтения
			//Читаем первые числа из 2 файлов
			int fileB, fileC, tempB = -1, tempC = -1;
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
			int counter = 0;						// Количество цепочек в файле после обновления
			while (fileB != -1 || fileC != -1) {	// Пока оба файла не кончились
				compcount++;
				tempB = -1, tempC = -1;
				// Пока оба файла не пусты и не встретилось окончание отсортированной цепочки, то продолжаем  (-2 - знак окончания цепочки)
				while (fileB != -1 && fileC != -1 && tempB <= fileB && tempC <= fileC) {
					compcount++;
					// Сравниваем 2 числа из разных файлов
					if (fileB < fileC) {
						writeA << " " << fileB;		// Если первое меньше, то записываем его в файл a
						outcount++;
						tempB = fileB;
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
						tempC = fileC;
						// Читаем новое число из второго файла
						if (readC.eof()) fileC = -1;// Если файл пуст, устанавливаем значение -1
						else {
							readC >> fileC;			// Иначе считываем число из файла
							incount++;				// Увеличение счетчика чтения
						}
						compcount++;				// Увеличение счётчика сравнени
					}
					compcount++;
				}
				// Выход из цикла - конец цепочки или файла. В a.txt сформирована цепочка
				counter++;
				//Дописываем числа из первого файла, если они остались в цепочке после сравнения со вторым файлом
				while (fileB != -1 && tempB <= fileB) {
					compcount++;
					writeA << " " << fileB;
					outcount++;						// Увеличение счетчика записи
					tempB = fileB;
					// Читаем новое число из первого файла
					if (readB.eof()) fileB = -1;	// Если файл пуст, устанавливаем значение -1
					else {
						readB >> fileB;				// Иначе считываем число из файла
						incount++;					// Увеличение счетчика чтения
					}
					compcount++;					// Увеличение счётчика сравнений
				}
				// Дописываем числа из второго файла, если они остались в цепочке после сравнения с числами из цепочки первого файла
				while (fileC != -1 && tempC <= fileC) {
					compcount++;					// Увеличение счётчика сравнений (while)
					writeA << " " << fileC;
					outcount++;						// Увеличение счетчика записи
					tempC = fileC;
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
			return counter > 1;
		}

		void naturalSortCombine1(string first, string second, int& incount, int& compcount, int& outcount) {
			ofstream writeA("a4.txt");						// Открыли файл для записи
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
		bool betweenNatural(string firstRead, string secondRead, string firstWrite, string secondWrite, int& incount, int& compcount, int& outcount) {
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
		// ---------Двухфазная сортировка---------
		// ---------------------------------------
		void NaturalSortTwoPhase(int*& twoPhase)
		{
			int incount = 0;						// Счётчик считываний из файла
			int compcount = 0;						// Счётчик сравнений
			int outcount = 0;						// Счетчик записей в файл
			auto startTwoPhase = chrono::high_resolution_clock::now();
			//Цикл, в котором сначала значения разделяются на два файла, а потом обратно соединяет, возвращая нужно ли продолжать сортировку или завершить
			do {
				naturalSortSplit("a3.txt", "b.txt", "c.txt", incount, compcount, outcount);				// Разделяем файл a.txt на два файла b.txt и c.txt
			} while (naturalSortCombine(incount, compcount, outcount));		// Проверка длины цепочки и соединение обратно в a.txt
			auto finishTwoPhase = chrono::high_resolution_clock::now();
			auto timeTwoPhase = chrono::duration_cast<chrono::duration < double>>(finishTwoPhase - startTwoPhase);
			// Вывод характеристик сортировки
			twoPhase[0] = timeTwoPhase.count() * 10000;
			twoPhase[1] = incount;
			twoPhase[2] = compcount;
			twoPhase[3] = outcount;
		}

		// ---------------------------------------
		// ---------Однофазная сортировка---------
		// ---------------------------------------
		void NaturalSortOnePhase(int*& onePhase) {
			int incount = 0;									// Счётчик считываний из файла
			int compcount = 0;									// Счётчик сравнений
			int outcount = 0;									// Счетчик записей в файл
			auto startOnePhase = chrono::high_resolution_clock::now();

			bool file = true;				// Определяем файлы записи
			bool flag = true;					// Флаг для определения когда нужно выходить из цикла
			naturalSortSplit("a4.txt", "b.txt", "c.txt", incount, compcount, outcount);				// Разделяем файл a.txt на два файла b.txt и c.txt
			while (flag) {
				//В зависимости от направления записи передаём файлы для чтения и записи
				if (file)
					flag = betweenNatural("b.txt", "c.txt", "d.txt", "e.txt", incount, compcount, outcount);	//Читать из b c, писать в d e
				else
					flag = betweenNatural("d.txt", "e.txt", "b.txt", "c.txt", incount, compcount, outcount);	//Читать из d e, писать в b c
				file = !file;
			}
			// Объединяем обратно в файл a, используя последние редактируемые файлы
			if (file)
				naturalSortCombine1("b.txt", "c.txt", incount, compcount, outcount);		//Читать из b c
			else
				naturalSortCombine1("d.txt", "e.txt", incount, compcount, outcount);		//Читать из d e

			auto finishOnePhase = chrono::high_resolution_clock::now();
			auto timeOnePhase = chrono::duration_cast<chrono::duration < double>>(finishOnePhase - startOnePhase);
			// Вывод характеристик сортировки
			onePhase[0] = timeOnePhase.count() * 10000;
			onePhase[1] = incount;
			onePhase[2] = compcount;
			onePhase[3] = outcount;
		}
}
