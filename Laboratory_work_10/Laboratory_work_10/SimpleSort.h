#pragma once
#include <fstream>
#include <chrono>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
namespace Laboratorywork10 {
	// ���������� �� 2 �����. len - ���������� ��������� � ������������������
	void simpleSortSplit(long len, int& incount, int& compcount, int& outcount) {
		ofstream writeB("b.txt");		// ������� ���� ��� ������
		ofstream writeC("c.txt");		// ������� ���� ��� ������
		ifstream readA("a.txt");		// ������� ���� ��� ������
		long curLen = len;						// �������� ���������� ��������� � ������������������
		bool file = true;						// ���������� ���� ������: true - ���� b, false - ���� c
		while (!readA.eof()) {					// ���� ���� �� ����, ��������� �����
			compcount++;						// ���������� �������� ��������� (while)
			int number;							// ����� �����
			readA >> number;					// ���������� ������ �����
			incount++;							// ������������ ����������
			compcount++;						// ���������� �������� ���������
			if (curLen > 0)					    // ���� ������������������ �� ���������, �� ������ ���� ������
				curLen--;						// ��������� ������� ����� ������������������
			else {
				file = !file;					// ����� ������ ���� ������
				curLen = len - 1;				// ��������� ������� ����� ����� ������������������, �.�. ��� ������� � �� ������ �����
			}
			compcount++;						// ���������� �������� ���������
			if (file) writeB << " " << number;	// ���������� ����� �  ������ ����
			else writeC << " " << number;
			outcount++;							// ������������ ������
		}
		readA.close();							// ��������� ����� ������
		writeB.close();							// ��������� ����� ������
		writeB.close();							// ��������� ����� ������
	}

	// ����� ��� ����������� ������ �� ���� ������ � ����
	void simpleSortCombine(long len, int& incount, int& compcount, int& outcount) {
		ofstream writeA("a.txt");		// ������� ���� ��� ������
		ifstream readB("b.txt");			// ������� ���� ��� ������
		ifstream readC("c.txt");			// ������� ���� ��� ������
		//������ ������ ����� �� 2 ������
		int fileB, fileC;
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
		while (fileB != -1 || fileC != -1) {	// ���� ��� ����� �� ���������
			compcount++;						// ���������� �������� ��������� (while)
			long curB = len;					// �������� ���������� ��������� � ������������������ B
			long curC = len;					// �������� ���������� ��������� � ������������������ C
			// ���� �� ���������� ����� � ������������������ ��� ���� �� ��������� ����� �����
			while (curB != 0 && curC != 0 && fileB != -1 && fileC != -1) {
				compcount++;					// ���������� �������� ��������� (while)
				// ���������� 2 ����� �� 2 ������
				if (fileB < fileC) {
					writeA << " " << fileB;		// ���� ������ ������, �� ���������� ��� � ���� a
					outcount++;					// ���������� �������� ������
					curB--;						// ��������� ������� ����� ������������������ ��� ����� B
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
					curC--;						// ��������� ������� ����� ������������������ ��� ����� B
					// ������ ����� ����� �� ������� �����
					if (readC.eof()) fileC = -1;// ���� ���� ����, ������������� �������� -1
					else {
						readC >> fileC;			// ����� ��������� ����� �� �����
						incount++;				// ���������� �������� ������
					}
					compcount++;				// ���������� �������� ���������
				}
				compcount++;					// ���������� �������� ���������
			}
			// ���������� ������ �� ������� �����, ���� ������ ����������, ��� ��������� ����� ����� � ������������������ �� �������
			while (curB != 0 && fileB != -1) {
				compcount++;					// ���������� �������� ��������� (while)
				writeA << " " << fileB;
				outcount++;						// ���������� �������� ������
				curB--;							// ��������� ������� ����� ������������������ ��� ����� B
				// ������ ����� ����� �� ������� �����
				if (readB.eof()) fileB = -1;	// ���� ���� ����, ������������� �������� -1
				else {
					readB >> fileB;				// ����� ��������� ����� �� �����
					incount++;					// ���������� �������� ������
				}
				compcount++;					// ���������� �������� ���������
			}
			// ���������� ������ �� ������� �����, ���� ������ ����������, ��� ��������� ����� ����� � ������������������ �� �������
			while (curC != 0 && fileC != -1) {
				compcount++;					// ���������� �������� ��������� (while)
				writeA << " " << fileC;
				outcount++;						// ���������� �������� ������
				curC--;							// ��������� ������� ����� ������������������ ��� ����� B
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
	}

	// ���������� �� 2 �����
	void simpleSortSplit1(int& incount, int& compcount, int& outcount) {
		ifstream readA("a2.txt");			// ������� ���� ��� ������
		ofstream writeB("b.txt");		// ������� ���� ��� ������
		ofstream writeC("c.txt");		// ������� ���� ��� ������
		bool file = true;						// ���������� ���� ������: true - ���� b, false - ���� c
		while (!readA.eof()) {					// ���� ���� �� ����, ��������� �����
			compcount++;
			int number;							// ����� �����
			readA >> number;					// ���������� ������ �����
			incount++;
			if (file)							// � ����������� �� ����������� ����� � ���� �����
				writeB << " " << number;		// ���������� ����� � ���� b
			else
				writeC << " " << number;		// ���������� ����� � ���� c
			outcount++;
			compcount++;
			file = !file;						// ������ �����������
		}
		readA.close();							// ��������� ����� ������
		writeB.close();							// ��������� ����� ������
		writeB.close();							// ��������� ����� ������
	}

	// ����� ��� ����������� 2 ������ � ������ ����������� �������� �������
	void simpleSortCombine1(long len, string first, string second, int& incount, int& compcount, int& outcount) {
		ofstream writeA("a2.txt");						// ������� ���� ��� ������
		ifstream readFirst(first);								// ������� ���� ��� ������
		ifstream readSecond(second);								// ������� ���� ��� ������
		//������ ������ ����� �� 2 ������
		int fileFirst, fileSecond;
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
			long curFirst = len;									// �������� ���������� ��������� � ������ ������������������
			long curSecond = len;								// �������� ���������� ��������� �� ������ ������������������
			// ���� �� ���������� ����� � ������������������ ��� ���� �� ��������� ����� �����
			while (curFirst != 0 && curSecond != 0 && fileFirst != -1 && fileSecond != -1) {
				compcount++;										// while
				compcount++;										// if
				if (fileFirst < fileSecond) {					// ���������� 2 ����� �� 2 ������
					writeA << " " << fileFirst;					// ���� ������ ������, �� ���������� ��� � ���� a
					outcount++;									// ���������� �������� ������
					curFirst--;									// ��������� ������� ����� ������������������ ��� ������� �����
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
					curSecond--;									// ��������� ������� ����� ������������������ ��� ������� �����
					// ������ ����� ����� �� ������� �����
					if (readSecond.eof()) fileSecond = -1;		// ���� ���� ����, ������������� �������� -1
					else {
						readSecond >> fileSecond;				// ����� ��������� ����� �� �����
						incount++;
					}
					compcount++;
				}
			}
			// ���������� ������ �� ������� �����, ���� ������ ����������, ��� ��������� ����� ����� � ������������������ �� �������
			while (curFirst != 0 && fileFirst != -1) {
				compcount++;
				writeA << " " << fileFirst;
				outcount++;									// ���������� �������� ������
				curFirst--;										// ��������� ������� ����� ������������������ ��� ������� �����
				// ������ ����� ����� �� ������� �����
				if (readFirst.eof()) fileFirst = -1;			// ���� ���� ����, ������������� �������� -1
				else {
					readFirst >> fileFirst;					// ����� ��������� ����� �� �����
					incount++;
				}
				compcount++;
			}
			// ���������� ������ �� ������� �����, ���� ������ ����������, ��� ��������� ����� ����� � ������������������ �� �������
			while (curSecond != 0 && fileSecond != -1) {
				compcount++;
				writeA << " " << fileSecond;
				outcount++;									// ���������� �������� ������
				curSecond--;									// ��������� ������� ����� ������������������ ��� ������������
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

	// ���������� ������ � ������ � ������ �������� �������. ��������� ����� ������ ��� ������ � ������, � ����� ����� �������
	void betweenFiles(long len, string firstRead, string secondRead, string firstWrite, string secondWrite, int& incount, int& compcount, int& outcount) {
		ifstream readFirst(firstRead);							// ������� ���� ��� ������
		ifstream readSecond(secondRead);							// ������� ���� ��� ������
		ofstream writeFirst(firstWrite);							// ������� ���� ��� ������
		ofstream writeSecond(secondWrite);						// ������� ���� ��� ������
		bool file = true;										// ���������� ��� ����������� ������ ��� ������
		int fileFirst, fileSecond;
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
			//���������� ����� ��� �������
			long curFirst = len;
			long curSecond = len;
			// ���� �� ���������� ����� � ������������������ ��� ���� �� ��������� ����� �����
			while (curFirst != 0 && curSecond != 0 && fileFirst != -1 && fileSecond != -1) {
				compcount++;										// while
				compcount++;										// if
				if (fileFirst < fileSecond) {					// ���������� 2 ����� �� 2 ������
					// ���� ������ ������, �� ���������� ��� � ���� � ����������� �� �����������
					if (file) writeFirst << " " << fileFirst;
					else writeSecond << " " << fileFirst;
					outcount++;									// ���������� �������� ������
					compcount++;
					curFirst--;										// ��������� ������� ����� ������������������ ��� ������� �����
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
					curSecond--;										// ��������� ������� ����� ������������������ ��� ������� �����
					// ������ ����� ����� �� ������� �����
					if (readSecond.eof()) fileSecond = -1;			// ���� ���� ����, ������������� �������� -1
					else {
						readSecond >> fileSecond;					// ����� ��������� ����� �� �����
						incount++;									// ���������� �������� ������
					}
					compcount++;
				}
			}
			// ���������� ������ �� ������� �����, ���� ������ ����������, ��� ��������� ����� ����� � ������������������ �� �������
			while (curFirst != 0 && fileFirst != -1) {
				compcount++;
				if (file) writeFirst << " " << fileFirst;
				else writeSecond << " " << fileFirst;
				outcount++;									// ���������� �������� ������
				compcount++;
				curFirst--;										// ��������� ������� ����� ������������������ ��� ������� �����
				// ������ ����� ����� �� ������� �����
				if (readFirst.eof()) fileFirst = -1;			// ���� ���� ����, ������������� �������� -1
				else {
					readFirst >> fileFirst;					// ����� ��������� ����� �� �����
					incount++;									// ���������� �������� ������
				}
				compcount++;
			}
			// ���������� ������ �� ������� �����, ���� ������ ����������, ��� ��������� ����� ����� � ������������������ �� �������
			while (curSecond != 0 && fileSecond != -1) {
				compcount++;
				if (file) writeFirst << " " << fileSecond;
				else writeSecond << " " << fileSecond;
				outcount++;									// ���������� �������� ������
				compcount++;
				curSecond--;										// ��������� ������� ����� ������������������ ��� ������������
				// ������ ����� ����� �� ������� �����
				if (readSecond.eof()) fileSecond = -1;			// ���� ���� ����, ������������� �������� -1
				else {
					readSecond >> fileSecond;					// ����� ��������� ����� �� �����
					incount++;									// ���������� �������� ������
				}
				compcount++;
			}
			file = !file;										// ������ �����������
		}
		readFirst.close();										// ��������� ����� ������
		readSecond.close();										// ��������� ����� ������
		writeFirst.close();										// ��������� ����� ������
		writeSecond.close();										// ��������� ����� ������
	}

	
	// ---------------------------------------
	// ---------------------------------------
	// ---------���������� ����������---------
	// ---------------------------------------
	// ---------------------------------------
	void SimpleSortOnePhase(long size, int*& onePhase) {
		int incount = 0;									// ������� ���������� �� �����
		int compcount = 0;									// ������� ���������
		int outcount = 0;									// ������� ������� � ����
		auto startOnePhase = chrono::high_resolution_clock::now();
		simpleSortSplit1(incount, compcount, outcount);	// ��������� ���� a.txt �� ��� ����� b.txt � c.txt
		bool file = true; // ���������� ����� ������: true - ������ �� b c, ������ � d e, false - ���� ������ �� d e, ������ � b c
		// i - ���������� ���������, ������� ������ ���� ���������� � ������ ���� ������
		for (long i = 1; i < size / 2; i *= 2) {
			//� ����������� �� ����������� ������ ������� ����� ��� ������ � ������
			if (file)
				betweenFiles(i, "b.txt", "c.txt", "d.txt", "e.txt", incount, compcount, outcount);	// ������ �� b c, ������ � d e
			else
				betweenFiles(i, "d.txt", "e.txt", "b.txt", "c.txt", incount, compcount, outcount);	// ������ �� d e, ������ � b c
			file = !file;					// ������ �����������
		}
		if (file)							// ������ ���������� ������� � ���� a, ��������� ��������� ������������� �����
			simpleSortCombine1(size, "b.txt", "c.txt", incount, compcount, outcount);	// ������ �� b c
		else
			simpleSortCombine1(size, "d.txt", "e.txt", incount, compcount, outcount);	// ������ �� d e
		auto finishOnePhase = chrono::high_resolution_clock::now();
		auto timeOnePhase = chrono::duration_cast<chrono::duration < double>>(finishOnePhase - startOnePhase);
		// ����� ������������� ����������
		onePhase[0] = timeOnePhase.count() * 10000;
		onePhase[1] = incount;
		onePhase[2] = compcount;
		onePhase[3] = outcount;
		
	}

	// ---------------------------------------
	// ---------------------------------------
	// ---------���������� ����������---------
	// ---------------------------------------
	// ---------------------------------------
	void SimpleSortTwoPhase(long size, int*& twoPhase)
	{
		int incount = 0;						// ������� ���������� �� �����
		int compcount = 0;						// ������� ���������
		int outcount = 0;						// ������� ������� � ����
		auto startTwoPhase = chrono::high_resolution_clock::now();
		for (long i = 1; i < size; i *= 2) {
			simpleSortSplit(i, incount, compcount, outcount);		// ��������� ���� a.txt �� ��� ����� b.txt � c.txt
			simpleSortCombine(i, incount, compcount, outcount);	// ���������� ����� b.txt � c.txt � ���� a.txt
		}
		auto finishTwoPhase = chrono::high_resolution_clock::now();
		auto timeTwoPhase = chrono::duration_cast<chrono::duration < double>>(finishTwoPhase - startTwoPhase);
		// ����� ������������� ����������
		twoPhase[0] = timeTwoPhase.count() * 10000;
		twoPhase[1] = incount;
		twoPhase[2] = compcount;
		twoPhase[3] = outcount;
	}
}
