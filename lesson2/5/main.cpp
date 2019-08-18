/* 
Zadanie 5: ѕользователь вводит две даты (день, мес€ц и год в виде целых чисел).
 Ќайти количество дней между этими двум€ датами.ƒл€ расчетов неободимо учесть високосные даты и 
 количество дней в мес€цах.*/
 
  #include <iostream> 
using namespace std; 
int main() { 
setlocale(LC_ALL, "Russian"); 
int day, mon, year, day2, mon2, year2, x, y; 
cout << "¬ведите первую дату в формате \"д м г\":\t";cin >> day >> mon >> year; 
cout << "¬ведите первую дату в формате \"д м г\":\t";cin >> day2>> mon2 >> year2; 

int /*jan*/m1 = 31; 
int /*feb*/m2 = 28; 
int /*feb_vis*/m29 = 29; 
int /*mar*/m3 = 31; 
int /*apr*/m4 = 30; 
int /*may*/m5 = 31; 
int /*jun*/m6 = 30; 
int /*jul*/m7 = 31; 
int /*aug*/m8 = 31; 
int /*sep*/m9 = 30; 
int /*oct*/m10 = 31; 
int /*nov*/m11 = 30; 
int /*dec*/m12 = 31; 
if (year%4 == 0) { cout<<"\n ¬исокосный год!";
 m2 = m29;
}

/*case 1 */ if (mon == 1) { x = day; } 
/*case 2 */ else if (mon == 2) { x = m1 + day; } 
/*case 3 */ else if (mon == 3) { x = m1 + m2 + day; } 
/*case 4 */ else if (mon == 4) { x = m1 + m2 + m3 + day; } 
/*case 5 */ else if (mon == 5) { x = m1 + m2 + m3 + m4 + day; } 
/*case 6 */ else if (mon == 6) { x = m1 + m2 + m3 + m4 + m5 + day; } 
/*case 7 */ else if (mon == 7) { x = m1 + m2 + m3 + m4 + m5 + m6 + day; } 
/*case 8 */ else if (mon == 8) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + day; } 
/*case 9 */ else if (mon == 9) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + day; } 
/*case 10 */ else if (mon == 10) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + day; } 
/*case 11 */ else if (mon == 11) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + day; } 
/*case 12 */ else if (mon == 12) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + day; } 

/*case 1 */ if (mon2 == 1) { y = day2 + y; } 
/*case 2 */ else if (mon2 == 2) { y = m1 + day2 + y; } 
/*case 3 */ else if (mon2 == 3) { y = m1 + m2 + day2 + y; } 
/*case 4 */ else if (mon2 == 4) { y = m1 + m2 + m3 + day2 + y; } 
/*case 5 */ else if (mon2 == 5) { y = m1 + m2 + m3 + m4 + day2 + y; } 
/*case 6 */ else if (mon2 == 6) { y = m1 + m2 + m3 + m4 + m5 + day2 + y; } 
/*case 7 */ else if (mon2 == 7) { y = m1 + m2 + m3 + m4 + m5 + m6 + day2 + y; } 
/*case 8 */ else if (mon2 == 8) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + day2 + y; } 
/*case 9 */ else if (mon2 == 9) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + day2 + y; } 
/*case 10 */ else if (mon2 == 10) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + day2 + y; } 
/*case 11 */ else if (mon2 == 11) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + day2 + y; } 
/*case 12 */ else if (mon2 == 12) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + day2 + y; } 


if (year == year2) { cout<<"\n „исло дней между датами:"<<y - x; 
} 
else 
cout<<"\n „исло дней между датами:"<<(year2 - year) * 365 + (y - x); 

return 0; 
} 

