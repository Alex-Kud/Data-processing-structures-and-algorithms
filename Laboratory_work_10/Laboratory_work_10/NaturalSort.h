#pragma once
#include <fstream>
#include <chrono>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
namespace Laboratorywork10 {


		// ����� ��� ��������� ������ �� ��� ����� ��� ���������� ������������ ��������
		void naturalSortSplit(string firstRead, string firstWrite, string secondWrite, int& incount, int& compcount, int& outcount) {
			ofstream writeB(firstWrite);		// ������� ���� ��� ������
			ofstream writeC(secondWrite);		// ������� ���� ��� ������
			ifstream readA(firstRead);		// ������� ���� ��� ������
			int number;
			if (readA.eof()) number = -1;	// ���� ���� ����, ������������� �������� -1
			else {
				readA >> number;			// ����� ��������� ����� �� �����
				incount++;					// ������������ ����������
			}
			compcount++;
			bool file = true;						// ���������� ���� ������
			// ��������� ���������� �����. ������ -1 ����� ������ ����� ����� ���� � ������ ���� � �� ������� ������� ���������� �������.
			int last = -1;
			while (number != -1) {					// ���� ���� �� ����
				compcount++;
				// ���������� ������� ����� � ����������
				if (number < last) {
					// ���� ������� ������ �����������, �� ������� ��������������
					// ���� ���, �� ������� �� �������������, �����
					// �������� �� ����������� � ����� ���� ������
					compcount++;
					if (!file)
						writeC << " " << number;	// ���������� � ������ ���� ����� ����� �������
					else
						writeB << " " << number;	// ���������� � ������ ���� ����� ����� �������
					outcount++;
					file = !file;					// ����� �����������, �.�. ������� ��������������
				}
				else {
					// � ����������� �� ����������� ����� � ���� ����������� �����
					if (!file)
						writeB << " " << number;
					else
						writeC << " " << number;
					compcount++;
					outcount++;
				}
				compcount++;
				last = number;						// ������������� ���������� �����
				if (readA.eof()) number = -1;		// ���� ���� ����, ������������� �������� -1
				else {
					readA >> number;				// ����� ��������� ����� �� �����
					incount++;						// ������������ ����������
				}
				compcount++;
			}
			readA.close();							// ��������� ����� ������
			writeB.close();							// ��������� ����� ������
			writeC.close();							// ��������� ����� ������
		}
		// ����� ����������� ��� ������������� �������
		bool naturalSortCombine(int& incount, int& compcount, int& outcount) {
			ofstream writeA("a3.txt");			// ������� ���� ��� ������
			ifstream readB("b.txt");			// ������� ���� ��� ������
			ifstream readC("c.txt");			// ������� ���� ��� ������
			//������ ������ ����� �� 2 ������
			int fileB, fileC, tempB = -1, tempC = -1;
			if (readB.eof()) fileB = -1;			// ���� ���� ����, ������������� �������� -1
			else {
				readB >> fileB;						// ����� ��������� ����� �� �����
				incount++;							// ������������ ����������
			}
			if (readC.eof()) fileC = -1;			// ���� ���� ����, ������������� �������� -1
			else {
				readC >> fileC;						// ����� ��������� ����� �� �����
				incount++;							// ������������ ����������
			}
			compcount += 2;							// ���������� �������� ���������
			int counter = 0;						// ���������� ������� � ����� ����� ����������
			while (fileB != -1 || fileC != -1) {	// ���� ��� ����� �� ���������
				compcount++;
				tempB = -1, tempC = -1;
				// ���� ��� ����� �� ����� � �� ����������� ��������� ��������������� �������, �� ����������  (-2 - ���� ��������� �������)
				while (fileB != -1 && fileC != -1 && tempB <= fileB && tempC <= fileC) {
					compcount++;
					// ���������� 2 ����� �� ������ ������
					if (fileB < fileC) {
						writeA << " " << fileB;		// ���� ������ ������, �� ���������� ��� � ���� a
						outcount++;
						tempB = fileB;
						// ������ ����� ����� �� ������� �����
						if (readB.eof()) fileB = -1;// ���� ���� ����, ������������� �������� -1
						else {
							readB >> fileB;			// ����� ��������� ����� �� �����
							incount++;				// ���������� �������� ������
						}
						compcount++;				// ���������� �������� ���������
					}
					else {
						writeA << " " << fileC;		// ���� ������ ������, �� ���������� ��� � ���� a
						outcount++;					// ���������� �������� ������
						tempC = fileC;
						// ������ ����� ����� �� ������� �����
						if (readC.eof()) fileC = -1;// ���� ���� ����, ������������� �������� -1
						else {
							readC >> fileC;			// ����� ��������� ����� �� �����
							incount++;				// ���������� �������� ������
						}
						compcount++;				// ���������� �������� ��������
					}
					compcount++;
				}
				// ����� �� ����� - ����� ������� ��� �����. � a.txt ������������ �������
				counter++;
				//���������� ����� �� ������� �����, ���� ��� �������� � ������� ����� ��������� �� ������ ������
				while (fileB != -1 && tempB <= fileB) {
					compcount++;
					writeA << " " << fileB;
					outcount++;						// ���������� �������� ������
					tempB = fileB;
					// ������ ����� ����� �� ������� �����
					if (readB.eof()) fileB = -1;	// ���� ���� ����, ������������� �������� -1
					else {
						readB >> fileB;				// ����� ��������� ����� �� �����
						incount++;					// ���������� �������� ������
					}
					compcount++;					// ���������� �������� ���������
				}
				// ���������� ����� �� ������� �����, ���� ��� �������� � ������� ����� ��������� � ������� �� ������� ������� �����
				while (fileC != -1 && tempC <= fileC) {
					compcount++;					// ���������� �������� ��������� (while)
					writeA << " " << fileC;
					outcount++;						// ���������� �������� ������
					tempC = fileC;
					// ������ ����� ����� �� ������� �����
					if (readC.eof()) fileC = -1;	// ���� ���� ����, ������������� �������� -1
					else {
						readC >> fileC;				// ����� ��������� ����� �� �����
						incount++;					// ���������� �������� ������
					}
					compcount++;					// ���������� �������� ���������
				}
			}
			writeA.close();							// ��������� ����� ������
			readB.close();							// ��������� ����� ������
			readB.close();							// ��������� ����� ������
			return counter > 1;
		}

		void naturalSortCombine1(string first, string second, int& incount, int& compcount, int& outcount) {
			ofstream writeA("a4.txt");						// ������� ���� ��� ������
			ifstream readFirst(first);								// ������� ���� ��� ������
			ifstream readSecond(second);							// ������� ���� ��� ������
			//������ ������ ����� �� 2 ������
			int fileFirst, fileSecond, tempFirst = -1, tempSecond = -1;
			if (readFirst.eof()) fileFirst = -1;						// ���� ���� ����, ������������� �������� -1
			else {
				readFirst >> fileFirst;								// ����� ��������� ����� �� �����
				incount++;
			}
			if (readSecond.eof()) fileSecond = -1;					// ���� ���� ����, ������������� �������� -1
			else {
				readSecond >> fileSecond;							// ����� ��������� ����� �� �����
				incount++;
			}
			compcount += 2;
			while (fileFirst != -1 || fileSecond != -1) {			// ���� ��� ����� �� ���������
				compcount++;
				tempFirst = -1, tempSecond = -1;
				//���� �� �������� ���� 1 ���� ��� �������
				while (fileFirst != -1 && fileSecond != -1 && tempFirst <= fileFirst && tempSecond <= fileSecond) {
					compcount++;
					if (fileFirst < fileSecond) {					// ���������� 2 ����� �� 2 ������
						writeA << " " << fileFirst;					// ���� ������ ������, �� ���������� ��� � ���� a
						outcount++;									// ���������� �������� ������
						tempFirst = fileFirst;
						// ������ ����� ����� �� ������� �����
						if (readFirst.eof()) fileFirst = -1;			// ���� ���� ����, ������������� �������� -1
						else {
							readFirst >> fileFirst;					// ����� ��������� ����� �� �����
							incount++;
						}
						compcount++;
					}
					else {
						writeA << " " << fileSecond;					// ���� ������ ������, �� ���������� ��� � ���� a
						outcount++;									// ���������� �������� ������
						tempSecond = fileSecond;
						// ������ ����� ����� �� ������� �����
						if (readSecond.eof()) fileSecond = -1;		// ���� ���� ����, ������������� �������� -1
						else {
							readSecond >> fileSecond;				// ����� ��������� ����� �� �����
							incount++;
						}
						compcount++;
					}
					compcount++;
				}
				// ���������� ����� �� ������� �����, ���� ��� �������� � ������� ����� ��������� �� ������ ������
				while (fileFirst != -1 && tempFirst <= fileFirst) {
					compcount++;
					writeA << " " << fileFirst;
					tempFirst = fileFirst;
					outcount++;									// ���������� �������� ������
					// ������ ����� ����� �� ������� �����
					if (readFirst.eof()) fileFirst = -1;			// ���� ���� ����, ������������� �������� -1
					else {
						readFirst >> fileFirst;					// ����� ��������� ����� �� �����
						incount++;
					}
					compcount++;
				}
				// ���������� ����� �� ������� �����, ���� ��� �������� � ������� ����� ��������� � ������� �� ������� ������� �����
				while (fileSecond != -1 && tempSecond <= fileSecond) {
					compcount++;
					writeA << " " << fileSecond;
					outcount++;									// ���������� �������� ������
					tempSecond = fileSecond;
					// ������ ����� ����� �� ������� �����
					if (readSecond.eof()) fileSecond = -1;			// ���� ���� ����, ������������� �������� -1
					else {
						readSecond >> fileSecond;					// ����� ��������� ����� �� �����
						incount++;
					}
					compcount++;
				}
			}
			writeA.close();											// ��������� ����� ������
			readFirst.close();										// ��������� ����� ������
			readFirst.close();										// ��������� ����� ������
		}
		// ���������� ������ � ������ � ������ ������������� �������. ��������� ����� ������ ��� ������ � ������
		bool betweenNatural(string firstRead, string secondRead, string firstWrite, string secondWrite, int& incount, int& compcount, int& outcount) {
			ifstream readFirst(firstRead);							// ������� ���� ��� ������
			ifstream readSecond(secondRead);						// ������� ���� ��� ������
			ofstream writeFirst(firstWrite);						// ������� ���� ��� ������
			ofstream writeSecond(secondWrite);						// ������� ���� ��� ������
			bool file = true;										// ���������� ��� ����������� ������ ��� ������
			int fileFirst, fileSecond, tempFirst = -1, tempSecond = -1;
			if (readFirst.eof()) fileFirst = -1;					// ���� ���� ����, ������������� �������� -1
			else {
				readFirst >> fileFirst;								// ����� ��������� ����� �� �����
				incount++;
			}
			if (readSecond.eof()) fileSecond = -1;					// ���� ���� ����, ������������� �������� -1
			else {
				readSecond >> fileSecond;							// ����� ��������� ����� �� �����
				incount++;
			}
			compcount += 2;
			int counter = 0;										// ���������� ������� � ����� ����� ����������
			while (fileFirst != -1 || fileSecond != -1) {			// ���� ��� ����� �� ���������
				compcount++;
				tempFirst = -1, tempSecond = -1;
				//���� � ����� ������ ���� ��� ������ � �� �������� ����� �������, �� ���������� ��������� � �����
				while (fileFirst != -1 && fileSecond != -1 && tempFirst <= fileFirst && tempSecond <= fileSecond) {
					compcount++;
					if (fileFirst < fileSecond) {					// ���������� 2 ����� �� ������ ������
						// � ����������� �� ����������� ���������� � ����������� ���� ����� �� ������� ����� ���� ��� ������
						if (file) writeFirst << " " << fileFirst;
						else writeSecond << " " << fileFirst;
						outcount++;									// ���������� �������� ������
						compcount++;
						tempFirst = fileFirst;
						// ������ ����� ����� �� ������� �����
						if (readFirst.eof()) fileFirst = -1;				// ���� ���� ����, ������������� �������� -1
						else {
							readFirst >> fileFirst;						// ����� ��������� ����� �� �����
							incount++;									// ���������� �������� ������
						}
						compcount++;
					}
					else {
						// ���� ������ ������, �� ���������� ��� � ���� � ����������� �� �����������
						if (file) writeFirst << " " << fileSecond;
						else writeSecond << " " << fileSecond;
						outcount++;									// ���������� �������� ������
						compcount++;
						tempSecond = fileSecond;
						// ������ ����� ����� �� ������� �����
						if (readSecond.eof()) fileSecond = -1;			// ���� ���� ����, ������������� �������� -1
						else {
							readSecond >> fileSecond;					// ����� ��������� ����� �� �����
							incount++;									// ���������� �������� ������
						}
						compcount++;
					}
					compcount++;
				}
				// ���������� ������ �� ������� �����, ���� ��� �������� � ������� ����� ��������� �� ������ ������
				while (fileFirst != -1 && tempFirst <= fileFirst) {
					compcount++;
					if (file) writeFirst << " " << fileFirst;
					else writeSecond << " " << fileFirst;
					outcount++;									// ���������� �������� ������
					compcount++;
					tempFirst = fileFirst;
					// ������ ����� ����� �� ������� �����
					if (readFirst.eof()) fileFirst = -1;			// ���� ���� ����, ������������� �������� -1
					else {
						readFirst >> fileFirst;					// ����� ��������� ����� �� �����
						incount++;									// ���������� �������� ������
					}
					compcount++;
				}
				//���������� ����� �� ������� �����, ���� ��� �������� � ������� ����� ��������� � ������ ������
				while (fileSecond != -1 && tempSecond <= fileSecond) {
					compcount++;
					if (file) writeFirst << " " << fileSecond;
					else writeSecond << " " << fileSecond;
					outcount++;									// ���������� �������� ������
					compcount++;
					tempSecond = fileSecond;
					// ������ ����� ����� �� ������� �����
					if (readSecond.eof()) fileSecond = -1;			// ���� ���� ����, ������������� �������� -1
					else {
						readSecond >> fileSecond;					// ����� ��������� ����� �� �����
						incount++;									// ���������� �������� ������
					}
					compcount++;
				}
				file = !file;						// ������ �����������
				counter++;							// ���������� �������� �������
			}
			readFirst.close();										// ��������� ����� ������
			readSecond.close();										// ��������� ����� ������
			writeFirst.close();
			writeSecond.close();

			//���� ������� ������ ��� 2, �� ���������� ����������
			return counter > 2;
		}

		// ---------------------------------------
		// ---------���������� ����������---------
		// ---------------------------------------
		void NaturalSortTwoPhase(int*& twoPhase)
		{
			int incount = 0;						// ������� ���������� �� �����
			int compcount = 0;						// ������� ���������
			int outcount = 0;						// ������� ������� � ����
			auto startTwoPhase = chrono::high_resolution_clock::now();
			//����, � ������� ������� �������� ����������� �� ��� �����, � ����� ������� ���������, ��������� ����� �� ���������� ���������� ��� ���������
			do {
				naturalSortSplit("a3.txt", "b.txt", "c.txt", incount, compcount, outcount);				// ��������� ���� a.txt �� ��� ����� b.txt � c.txt
			} while (naturalSortCombine(incount, compcount, outcount));		// �������� ����� ������� � ���������� ������� � a.txt
			auto finishTwoPhase = chrono::high_resolution_clock::now();
			auto timeTwoPhase = chrono::duration_cast<chrono::duration < double>>(finishTwoPhase - startTwoPhase);
			// ����� ������������� ����������
			twoPhase[0] = timeTwoPhase.count() * 10000;
			twoPhase[1] = incount;
			twoPhase[2] = compcount;
			twoPhase[3] = outcount;
		}

		// ---------------------------------------
		// ---------���������� ����������---------
		// ---------------------------------------
		void NaturalSortOnePhase(int*& onePhase) {
			int incount = 0;									// ������� ���������� �� �����
			int compcount = 0;									// ������� ���������
			int outcount = 0;									// ������� ������� � ����
			auto startOnePhase = chrono::high_resolution_clock::now();

			bool file = true;				// ���������� ����� ������
			bool flag = true;					// ���� ��� ����������� ����� ����� �������� �� �����
			naturalSortSplit("a4.txt", "b.txt", "c.txt", incount, compcount, outcount);				// ��������� ���� a.txt �� ��� ����� b.txt � c.txt
			while (flag) {
				//� ����������� �� ����������� ������ ������� ����� ��� ������ � ������
				if (file)
					flag = betweenNatural("b.txt", "c.txt", "d.txt", "e.txt", incount, compcount, outcount);	//������ �� b c, ������ � d e
				else
					flag = betweenNatural("d.txt", "e.txt", "b.txt", "c.txt", incount, compcount, outcount);	//������ �� d e, ������ � b c
				file = !file;
			}
			// ���������� ������� � ���� a, ��������� ��������� ������������� �����
			if (file)
				naturalSortCombine1("b.txt", "c.txt", incount, compcount, outcount);		//������ �� b c
			else
				naturalSortCombine1("d.txt", "e.txt", incount, compcount, outcount);		//������ �� d e

			auto finishOnePhase = chrono::high_resolution_clock::now();
			auto timeOnePhase = chrono::duration_cast<chrono::duration < double>>(finishOnePhase - startOnePhase);
			// ����� ������������� ����������
			onePhase[0] = timeOnePhase.count() * 10000;
			onePhase[1] = incount;
			onePhase[2] = compcount;
			onePhase[3] = outcount;
		}
}
