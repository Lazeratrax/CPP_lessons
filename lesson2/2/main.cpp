/*
Задание 2: 4-начное число вводится. Нужно поменять местами 1 и 2, 3 и 4 цифры.
 Если введено не 4-значное число - собщеие об ошибке. */
#include <iostream>
using namespace std;

int main(){
	 setlocale(LC_ALL, "Russian");
int four;
int X=9999, Y=1000;

cout << "Введите 4-значное число:\n";
cin >> four;


if (four>=Y && four<=X ) {
	
	int newfour = 0;
	newfour += (four%10)*10;
    newfour += (four/10%10);
    newfour += (four/100%10)*1000;
    newfour += (four/1000)*100;
	cout << "Result number is:"<< newfour<< endl;
	
}
else 
	cout << "Ошибка! Вы ввели неверное число!\n";
	return 0;
}

