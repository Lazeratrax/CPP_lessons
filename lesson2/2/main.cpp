/*
������� 2: 4-������ ����� ��������. ����� �������� ������� 1 � 2, 3 � 4 �����.
 ���� ������� �� 4-������� ����� - ������� �� ������. */
#include <iostream>
using namespace std;

int main(){
	 setlocale(LC_ALL, "Russian");
int four;
int X=9999, Y=1000;

cout << "������� 4-������� �����:\n";
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
	cout << "������! �� ����� �������� �����!\n";
	return 0;
}

