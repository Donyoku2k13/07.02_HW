#include <iostream>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <locale.h>
#include <stdlib.h>
#include <cstring>
#include <math.h>
using namespace std;


//1.�������� ������ �������, ������� ������������ ����� ������������� �������� � �������. ������� ���������� ������� �������� � ��� ��������. ������������: �������������� ��������� ���������� �� ������.
int arr[6] = { 3, 10, 9, 3, 8, 4 };
int maxel = 0; 
int maxvalue = 0; 

template<typename T>
void MaxElement(const T * arr, int &maxel, T &maxvalue) { 
	for (int i = 0; i < 6; i++) {
		if (arr[i] > maxvalue) {
			maxvalue = arr[i];
			maxel = i;
		}
	}
	cout << "Maxel: " << maxel << endl;
	cout << "Maxvalue: " << maxvalue<<endl;
}

void printArray(int a[], int n) {
	for (int *p = a; p < a + n; p++)
	{
		cout << *p << " ";
	}
	cout << endl;
}

void fillArray(int a[], int n) {
	for (int *p = a; p < a + n; p++)
	{
		*p = 1 + rand() % 10;
	}
}
int b=0;
//2.	**�������� ������ �������, ������� ��������� ������, � ������� �� ����� ������� ������� ��������� �������.
void Nullelement(int *arr, int n, int &b) {
	
	for (int i = 0; i <n; i++)
	{
		if (arr[i]==arr[0])
		{
			b = arr[i];
				
		}
	}
	cout <<"0 element: "<< b << endl;

}

//3.	**�������� ������ �������, ������� ��������� x � y � ��������� xy. Y � ����� �����.
int Pow(int x, int y) {

	return pow(x, y);
}

int main()
{
	//1.�������� ������ �������, ������� ������������ ����� ������������� �������� � �������. ������� ���������� ������� �������� � ��� ��������. ������������: �������������� ��������� ���������� �� ������.
	/*MaxElement(arr, maxel, maxvalue);*/
	
	//2.	**�������� ������ �������, ������� ��������� ������, � ������� �� ����� ������� ������� ��������� �������.
	/*int arr[6];
	
	fillArray(arr, 6);
	printArray(arr, 6);
	Nullelement(arr, 6, b);*/

	//3.	**�������� ������ �������, ������� ��������� x � y � ��������� xy. Y � ����� �����.
	int a, b;
	cin >> a >> b;
	cout << Pow(a, b) << endl;









	system("pause");
}
