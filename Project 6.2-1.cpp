// Lab_06_2.cpp
// < Кузів Назар >
// Лабораторна робота № 6.2-1
// Опрацювання одновимірних масивів ітераційним способoм
// Варіант 6

#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

 void Create(int* a, const int size, const int Low, const  int High)
{
	 for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
		
}

 void Cout(int* a, const int size)
 {
	 for (int i = 0; i < size; i++)
	 {
		 cout << " a[" << i << "]=" << a[i]<<endl;
		 
	 }
 } 
 void Cout2(int* a, const int size,int min)
 {
	 for (int i = 0; i < size; i++)
	 {	
		 if(a[i]==min)
		 cout << "Min a[" << i << "]=" << a[i] << endl;

	 }
 }
	 
 int Search(int *a, const int size)
 {
	 int min; 
	 int imin = -1; 
	 for (int i = 0; i < size; i++)
		 if (a[i]%2==0)
		 {
			 min = a[i]; 
			 imin = i; 

			 break; 
		 }
	 if (imin == -1)
	 {
		 cerr << "Error" << endl;
		 return 0; 
	 }

	 for (int i = imin + 1; i < size; i++)
		 if (a[i] < min && a[i] % 2 == 0)
			 min = a[i];
	 return min;
 }

 void Castling(int* a, const int size, int min)
 {
	 int first = a[0];
	 int imin = min;

	 for (int i = 0; i < size; i++)
	 {
		 if (a[i] == min)
			 a[i] = first;
		 a[0] = imin;
	 }
 }

 int main()
 {
	 srand((unsigned)time(NULL));


	 int Low, High,Min;
	 const int n = 6;
	 int a[n];

	 cout << "Low ="; cin >> Low;
	 cout << "High ="; cin >> High;
	 cout << endl;

	 Create(a, n, Low, High);
	 Cout(a, n);
	 Min = Search(a, n);

	 cout << endl;
	 Cout2(a, n, Min);
	 cout << endl;

	 Castling(a, n, Min);
	 Cout(a, n);

	 return 0;
 }
