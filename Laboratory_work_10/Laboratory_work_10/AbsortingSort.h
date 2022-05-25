#pragma once
#include <chrono>
#include <fstream>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
namespace Laboratorywork10 {

	   // ��������� ����� � ������� position � ����� path
	   int getNumber(long position, const char* path, long size) {
		   if (position < 0 || position >= size) return 10000;
		   FILE* f = fopen(path, "rb");						// �������� �����
		   fseek(f, position * sizeof(int), SEEK_SET);		// ����������� ���������
		   int number;
		   if (!feof(f))
			   fread(&number, sizeof(int), 1, f);	// ���������� �����
		   else
			   return 10000;
		   fclose(f);														// ������� ��������
		   return number;
	   }

	   // ������ ����� �� ������� position � ����� path
	   void setNumber(int number, long position, const char* path, long size) {
		   if (position < 0 || position >= size) return;
		   FILE* f = fopen(path, "rb+");
		   fseek(f, position * sizeof(int), SEEK_SET);		// ����������� ���������
		   int count = 0;
		   count = fwrite(&number, sizeof(int), 1, f);		// ������ ����� � ����
		   fclose(f);														// ������� ��������
	   }

	   // C��������� ����� � ������� �������������
	   void shell(int* num, int size, int& comparisons) {
		   //int increment = log2(size) - 1;			// ��������� ���������� ����������
		   int increment = size / 2;
		   while (increment > 0) {						// ���� ���������� ����������
			   for (int i = 0; i < size; i++) {		// ��� ���� ��������� �������
				   int j = i;							// ��������� ������ � �������
				   int temp = num[i];
				   // ������������� ��������� �������� �������, ��������� �� j-���
				   // �� �������� ����������
				   while ((j >= increment) && (num[j - increment] > temp)) {
					   // ���� ��������� ������� ������ ��������
					   num[j] = num[j - increment];	// ���������� ��� �� ������� �������
					   j = j - increment;				// ��������� � ���������� ���������� ��������
					   comparisons++;
				   }
				   num[j] = temp;						// �� ���������� ����� �������� ���������� �������
			   }
			   increment = increment / 2;				// ����� ���������� �� 2
		   }
	   }
	   
	   // ����� ����������
	   void absorptionSort(long lengthBuf, long size, const char* path, int& incount, int& compcount, int& outcount) {
		   int* buffer = new int[lengthBuf];					// �������� �������-�������
		   for (int i = 0; i < lengthBuf; i++)					// ��������� ������� ��������� ������� ����� �� �����
			   buffer[i] = getNumber(size - 1 - i, path, size);
		   compcount += lengthBuf;
		   incount += lengthBuf;
		   shell(buffer, lengthBuf, compcount);// ���������� �������
		   //��������� �� �������� �� ������ ������� ������ �����
		   if (lengthBuf > size) {
			   compcount++;
			   // ���� ������ ������� ������, �� ���������� ��� � ���� � ��������� ����������
			   // ���������� ������ ���������� �����, ������� ���������� ���� � �����
			   for (int i = 0; i < size; i++)
				   setNumber(buffer[i], i, path, size);
			   compcount += size;
			   outcount += size;
			   delete[] buffer;							// ����������� �������
			   return;
		   }
		   // ���� ������ ������ ������� �����, �� ���������� ��� �� ������� �����, ������ � ��������������� ����
		   for (int i = 0; i < lengthBuf; i++)
			   setNumber(buffer[i], size - lengthBuf + i, path, size);
		   outcount += lengthBuf;
		   compcount += lengthBuf;
		   // ���������� ��������� ���������� ������ � ����� � ���������� ��� ����������� ��������� ������ � ������
		   int iterations = 1;
		   // ���� ���������� ����������� �������� ������ ���� ����� ����� ����������� ��������
		   while (iterations <= size / lengthBuf - 1) {
			   compcount++;
			   // ��������� ������
			   for (int i = 0; i < lengthBuf; i++)
				   /* ����� ��������� size
				   ����� ��������� � 0, ������� ��������� ������ ����� � ����� size -1
				   lengthBuf - ������ ������, iterations - ���������� ��������.
				   ��� ������������ ���� ���������� �����, ������� ��� ���� �������������
				   i - ��������� ������� � �������*/
				   buffer[i] = getNumber(size - 1 - lengthBuf * iterations - i, path, size);
			   compcount += lengthBuf;
			   incount += lengthBuf;
			   shell(buffer, lengthBuf, compcount);			// ���������� �������
			   int kBuffer = 0;						// ���������� �����, ��� ���������� �� �������
			   int kFiles = 0;						// ���������� �����, ��� ���������� �� �����
			   // ��������� ���� ������� ���, ������� ��������������� ��������� � ��� ��� ���� + ������ �������
			   for (int i = 0; i < lengthBuf + lengthBuf * iterations; i++) {
				   compcount++;
				   incount++;
				   outcount++;
				   int numberFromFile = getNumber(size - lengthBuf * iterations + kFiles, path, size);
				   compcount++;
				   // ���� ������� ������� ������ �������� �����, �� ����� �� �������,  ����� �� �����
				   if (buffer[kBuffer] <= numberFromFile) {
					   setNumber(buffer[kBuffer], size - lengthBuf * (iterations + 1) + i, path, size);
					   kBuffer++;					// ���������� �������� �����, ����������� �� �������
					   //���� ��� ����� �� ������� ��������� � ����, �� ������, ��� ��������� ����� ������������� � ����� ��������� ����
					   /* ������ 1 2 3 - ������������
					   ���� 3 1 2 4 5 6, ��� 4 5 6 - ��������������� ����� �����
					   ������� �� ����� �������� � ����� 3 �� 1, 1 �� 2, 2 �� 3. 4 5 6 � ������ �� ��������� - ������� �� ����� */
					   if (kBuffer == lengthBuf) {
						   compcount++;
						   break;
					   }
				   }
				   else {
					   /*��� �������� ����� � �������:
					   ����� ��������� count
					   -1 �� ����� �.�. ��������� ����� ������������� � ������� i
					   lengthBuf - ������ ������, iterations+1 - ���������� ��������. ��� ������������ ���� ���������� �����, ������� ��� ���� �������������
					   i - ����������� �������
					   */
					   setNumber(numberFromFile, size - lengthBuf * (iterations + 1) + i, path, size);
					   kFiles++;					// ����������� �������� �����, ����������� �� �����
				   }
			   }
			   iterations++;						// ����������� �������� ����� � ����������
		   }
		   // ���������� ���������, ������� ��������� ����� ����������, �� �� ������ ��������� ��������� ������
		   const int mod = static_cast<int>(size % lengthBuf);
		   for (int i = 0; i < mod; i++)
			   buffer[i] = getNumber(i, path, size);		// ��������� ������ ����� ����������
		   compcount += mod;
		   incount += mod;
		   // ��������� ������ "�������� �������", ����� ��� ���������� ��� ���� � ����� � �� ��������
		   for (int i = mod; i < lengthBuf; i++)
			   buffer[i] = 10000;
		   compcount += lengthBuf;
		   shell(buffer, lengthBuf, compcount);			// ���������� �������
		   int kBuffer = 0;						// ���������� �����, ��� ���������� �� �������
		   int kFiles = 0;						// ���������� �����, ��� ���������� �� �����
		   //�������� �� ����� �����
		   for (int i = 0; i < size - 1; i++) {
			   compcount++;
			   incount++;
			   outcount++;
			   int numberFromFile = getNumber(mod + kFiles, path, size);
			   compcount++;
			   // ���������� ����� �� ������� � ������� �� ����� � ����������
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
		   delete[] buffer;							// ����������� �������
	   }

	   // ---------------------------------------
	   // ---------------------------------------
	   // ---------------C���������--------------
	   // ---------------------------------------
	   // ---------------------------------------
	   void Absorting(long size, long buf, int* absorting) {
		   int incount = 0;									// ������� ���������� �� �����
		   int compcount = 0;								// ������� ���������
		   int outcount = 0;								// ������� ������� � ����
		   auto start = chrono::high_resolution_clock::now();
		   absorptionSort(buf, size, "a6.txt", incount, compcount, outcount);
		   auto finish = chrono::high_resolution_clock::now();
		   auto time = chrono::duration_cast<chrono::duration < double>>(finish - start);
		   // ����� ������������� ����������
		   absorting[0] = time.count() * 10000;
		   absorting[1] = incount;
		   absorting[2] = compcount;
		   absorting[3] = outcount;
	   }
		   
}
