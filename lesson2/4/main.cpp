

/*
������� 4: Zadanie 4: Gruzovoy samolet dolzhen proletet' s gruzom iz punkta A v punkt S cherez punkt V. Emkost' baka dlya topliva u samoleta � 300litrov. Potreblenie topliva na 1 km v zavisimosti ot vesa gruza u samoleta sleduyushchee:

- do 500 kg: 1 litrov / km

- do 1000 kg: 4 litrov / km

- do 1500 kg: 7 litrov / km

- do 2000 kg: 9 litrov / km.

- bolee 2000 kg � samolet ne podnimaet.

Pol'zovatel' vvodit rasstoyanie mezhdu punktami A i V, i rasstoyanie mezhdu punktami
 V i S, a takzhe ves gruza. Programma dolzhna rasschitat' kakoe minimal'noe kolichestvo 
 topliva neobkhodimo dlya dozapravki samoletu v punkte V, chtoby doletet' iz punkta A v
  punkt S. V sluchae nevozmozhnosti preodolet' lyuboe iz rasstoyaniy � programma dolzhna
   vyvesti soobshchenie o nevozmozhnosti poleta po vvedennomu marshrutu. 
   
   */

#include <iostream> 
using namespace std; 



   
   
int main() { 
setlocale(LC_ALL, "Russian"); 
 float weight, ras, Smax=0, S1, S2;
    float const max_capacity = 300;
 
    cout << "\t\t������� ��� ������������� �����(� ��) :\n\n";
    cin >> weight; 
    if (weight > 2000) { cout << "\n\n\n\t\t�������� ������������ ����� ����!\n\n\n"; return 0; }     
    if (weight >= 0 && weight <= 500) { ras = 1; Smax = max_capacity / ras; }                      
    if (weight >= 501 && weight <= 1000) { ras = 4; Smax = max_capacity / ras; }                  
    if (weight >= 1001 && weight <= 1500) { ras = 7; Smax = max_capacity / ras; }                
    if (weight >= 1501 && weight <= 2000) { ras = 9; Smax = max_capacity / ras; }
 	
  
    cout<< "\n\n\t������� ���������� �� (A) �� (B) (��.) :\n\n";                                                   //� ���� ���� ����������� ��������� �� A �� B (��). 
    cin >> S1;                                                                                                     //
    if (Smax <= S1) { cout << "\n\n\n\t���� ����������! ������� �� ������ �� ����� (B)!\n\n\n"; return 0; }        //��������� ���������� �� �������.
    if (Smax > S1) { S1 = Smax - S1; }    

    cout << "\n\n\t������� ���������� �� (B) �� (C) (��.) :\n\n";                                                   //� ���� ���� ����������� ��������� �� � �� � (��).
    cin >> S2;                                                                                                     //
    if (Smax <= S2) { cout << "\n\n\n\t���� ����������! ������� �� ������ �� ����� (C)!\n\n\n"; return 0; }        //��������� ���������� �� �������, ���� ���������� ��������
    if (Smax > S2) {                                                                                             //������������, ���� ��� ����������� �������� - ��������   
    S2 = (S2 - S1) * ras; {                                                                                 //������������, ���� ���� - �������� ��-�� �����������  
    if (S2 < 0) { cout << "\n\n��� ������������� �������� �������, � ���� ���������� �������.\n\n\n\n\n"; return 0; }}
    cout << "\n\n� ����� (B) ���������� ������ " << S2 << " ������ ������� ��� ����� �� ����� (C).\n\n\n";
    }

return 0;
}

