/*
������� 3: ������������ ������ � ���������� 7 ����� �����. �������� ���������, ,
 ������������� ������������ �����.. 
*/
 
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int number, Xy;
	for (int i=0;i<7; i++){
		cout << "������� �����:\t";cin >> number;
		if (number > Xy) Xy = number;
	}
	cout << "������������ �����:" << Xy << endl;
	return 0;
}


