

/*
Задание 4: Zadanie 4: Gruzovoy samolet dolzhen proletet' s gruzom iz punkta A v punkt S cherez punkt V. Emkost' baka dlya topliva u samoleta – 300litrov. Potreblenie topliva na 1 km v zavisimosti ot vesa gruza u samoleta sleduyushchee:

- do 500 kg: 1 litrov / km

- do 1000 kg: 4 litrov / km

- do 1500 kg: 7 litrov / km

- do 2000 kg: 9 litrov / km.

- bolee 2000 kg – samolet ne podnimaet.

Pol'zovatel' vvodit rasstoyanie mezhdu punktami A i V, i rasstoyanie mezhdu punktami
 V i S, a takzhe ves gruza. Programma dolzhna rasschitat' kakoe minimal'noe kolichestvo 
 topliva neobkhodimo dlya dozapravki samoletu v punkte V, chtoby doletet' iz punkta A v
  punkt S. V sluchae nevozmozhnosti preodolet' lyuboe iz rasstoyaniy – programma dolzhna
   vyvesti soobshchenie o nevozmozhnosti poleta po vvedennomu marshrutu. 
   
   */

#include <iostream> 
using namespace std; 



   
   
int main() { 
setlocale(LC_ALL, "Russian"); 
 float weight, ras, Smax=0, S1, S2;
    float const max_capacity = 300;
 
    cout << "\t\tВведите вес пересылаемого груза(в кг) :\n\n";
    cin >> weight; 
    if (weight > 2000) { cout << "\n\n\n\t\tПревышен максимальный порог веса!\n\n\n"; return 0; }     
    if (weight >= 0 && weight <= 500) { ras = 1; Smax = max_capacity / ras; }                      
    if (weight >= 501 && weight <= 1000) { ras = 4; Smax = max_capacity / ras; }                  
    if (weight >= 1001 && weight <= 1500) { ras = 7; Smax = max_capacity / ras; }                
    if (weight >= 1501 && weight <= 2000) { ras = 9; Smax = max_capacity / ras; }
 	
  
    cout<< "\n\n\tВведите расстояние от (A) до (B) (км.) :\n\n";                                                   //В этом акте запрашиваем растояние от A до B (км). 
    cin >> S1;                                                                                                     //
    if (Smax <= S1) { cout << "\n\n\n\tПолёт невозможен! Топлива не хватит до точки (B)!\n\n\n"; return 0; }        //проверяем достаточно ли топлива.
    if (Smax > S1) { S1 = Smax - S1; }    

    cout << "\n\n\tВведите расстояние от (B) до (C) (км.) :\n\n";                                                   //В этом акте запрашиваем растояние от В до С (км).
    cin >> S2;                                                                                                     //
    if (Smax <= S2) { cout << "\n\n\n\tПолёт невозможен! Топлива не хватит до точки (C)!\n\n\n"; return 0; }        //проверяем достаточно ли топлива, если достаточно сообщаем
    if (Smax > S2) {                                                                                             //пользователю, если нет возможности долететь - сообщаем   
    S2 = (S2 - S1) * ras; {                                                                                 //пользователю, если есть - сообщаем ск-ко дозаправить  
    if (S2 < 0) { cout << "\n\nНет необходимости доливать топливо, в баке достаточно топлива.\n\n\n\n\n"; return 0; }}
    cout << "\n\nВ точке (B) необходимо долить " << S2 << " литров топлива для полёта до точки (C).\n\n\n";
    }

return 0;
}

