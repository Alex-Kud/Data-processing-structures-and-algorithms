#pragma once
#include <chrono>
#include <fstream>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
namespace Laboratorywork10 {
	
   // ���������� �� 2 �����
   void split(const int bufLength, string fileRead, int& incount, int& compcount, int& outcount) {
	   int* buf = new int[bufLength];			// ������������� ������ ��� ���������� ����������
	   ifstream readA(fileRead);		// ������� ���� ��� ������
	   ofstream writeB("b.txt");		// ������� ���� ��� ������
	   ofstream writeC("c.txt");		// ������� ���� ��� ������
	   bool file = true;						// ���������� ���� ������: true - ���� b, false - ���� c
	   while (!readA.eof()) {					// ���� ���� �� ����, ��������� �����
		   compcount++;
		   for (int i = 0; i < bufLength; ++i) {
			   if (readA.eof()) buf[i] = -1;
			   else {
				   readA >> buf[i];				// ���������� ������ ����� � ������ ��� ����������
				   incount++;
			   }
			   compcount += 2;
		   }
		   shell(buf, bufLength, compcount);	// ���������� �������
		   if (file)							// � ����������� �� ����������� ����� � ���� �����
			   for (int i = 0; i < bufLength; ++i) {
				   compcount += 2;
				   if (buf[i] != -1) {
					   writeB << " " << buf[i];	// ���������� ����� � ���� b
					   outcount++;
				   }
			   }
		   else
			   for (int i = 0; i < bufLength; ++i) {
				   compcount += 2;
				   if (buf[i] != -1) {
					   writeC << " " << buf[i];	// ���������� ����� � ���� c
					   outcount++;
				   }
			   }
		   compcount++;
		   file = !file;						// ������ �����������
	   }
	   readA.close();							// ��������� ����� ������
	   writeB.close();							// ��������� ����� ������
	   writeC.close();							// ��������� ����� ������
	   delete[] buf;							// ������������ ������
   }

   void naturalSortCombine(string write, string first, string second, int& incount, int& compcount, int& outcount) {
	   ofstream writeA(write);						// ������� ���� ��� ������
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
   bool betweenNaturalInEx(string firstRead, string secondRead, string firstWrite, string secondWrite, int& incount, int& compcount, int& outcount) {
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
   // ---------------------------------------
   // ---------------C���������--------------
   // ---------------------------------------
   // ---------------------------------------
	void InternalExternal(long size, long buf, int* inexSort) {
		int incount = 0;									// ������� ���������� �� �����
		int compcount = 0;									// ������� ���������
		int outcount = 0;									// ������� ������� � ����
		string fileA = "a5.txt";
		auto start = chrono::high_resolution_clock::now();

		split(buf, fileA, incount, compcount, outcount);	// ��������� ���� a.txt �� ��� ����� b.txt � c.txt
		bool file = true; // ���������� ����� ������: true - ������ �� b c, ������ � d e, false - ���� ������ �� d e, ������ � b c
		// i - ���������� ���������, ������� ������ ���� ���������� � ������ ���� ������
		for (long i = 1; i < size / 2; i *= 2) {
			//� ����������� �� ����������� ������ ������� ����� ��� ������ � ������
			if (file)
				betweenNaturalInEx("b.txt", "c.txt", "d.txt", "e.txt", incount, compcount, outcount);	// ������ �� b c, ������ � d e
			else
				betweenNaturalInEx("d.txt", "e.txt", "b.txt", "c.txt", incount, compcount, outcount);	// ������ �� d e, ������ � b c
			file = !file;					// ������ �����������
		}

		if (file)							// ������ ���������� ������� � ���� a, ��������� ��������� ������������� �����
			naturalSortCombine(fileA, "b.txt", "c.txt", incount, compcount, outcount);	// ������ �� b c
		else
			naturalSortCombine(fileA, "d.txt", "e.txt", incount, compcount, outcount);	// ������ �� d e
		auto finish = chrono::high_resolution_clock::now();
		auto time = chrono::duration_cast<chrono::duration < double>>(finish - start);
		// ����� ������������� ����������
		inexSort[0] = time.count() * 10000;
		inexSort[1] = incount;
		inexSort[2] = compcount;
		inexSort[3] = outcount;
	}
}
