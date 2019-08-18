/*
Задание 3: Пользователь вводит с клавиатуры 7 целых чисел. Написать программу, ,
 определеяющую максимальное число.. 
*/
 
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int number, Xy;
	for (int i=0;i<7; i++){
		cout << "Введите число:\t";cin >> number;
		if (number > Xy) Xy = number;
	}
	cout << "Максимальное число:" << Xy << endl;
	return 0;
}


