/*1
 ������� ������� �� ����� ���� ������ �������� ������������� ��� �����, 
� ��������� ������ ��� �����������. ����������� escape-������������������ ��� ��������������.*/
#include <iostream>
using namespace std;


int main() {
 setlocale(LC_ALL, "Russian");

 cout << "\n\t���� �� �� �� �� ��� �� ��� ������ ���������,\n\t����� ������������� ����� ����� �� �����.\n";
 cout << "\t�� ������ ������� ��� ����� � ����� ������\n\t� ������� ��������� ������� ����.\n\t\t� ����� �����...\n\n\t\t\t\t��������\n\n";

/*2 
Vivesti na ekran stih �Every hunter wants�� takim obrazom_ chtobi kajdii �cvet� nachinalsya s novoi stroki
 i sootvetstvuyuschim kolichestvom tabulyacii..
*/

 cout << "\n ������\n";
 cout << "\t�������\n";
 cout << "\t\t������\n";
 cout << "\t\t\t�����\n";
 cout << "\t\t\t\t���\n";
 cout << "\t\t\t\t\t�����\n";
 cout << "\t\t\t\t\t\t �����\n";

/*3Zadanie 3_ Napishite obyavlenie o prodaje 
chego_nibud i vivedite ego na ekran_ v tom vide kak ono doljno bilo bi bit napechatano.
Naprimer_
Prodam schenkov.
Poroda_ rotveiler.
Tel._ 222_22_22
222 | 222 |
22 | 22 |
22 | 22 |
i t.d.*/

 cout << "\n\t\t\t ������ �������� �������� \n\n";
 cout << "\tAndroid, ����� 4.7\" (480x854), ����������� ������ 1��, ����-������ 8��,\n\t ������ 5��, ����������� 2100���, ������������.";
 cout << "\t������ �� 39�, ������� +375(44)761-05-53\n\n";

 /*3Zadanie 4_ 
Zadani tri soprotivlenii R1_ R2_ R3 . Vichislit znachenie soprotivleniya R0 po formule_ 1/R0 = 1/R1+1/R2+1/R3.
Kontrolnii primer_ R1=2_ R2=4_ R3=8 R0 = 1.142857.*/
  double r1,r2,r3,r;
    cout<< "������� ������������� R1 ";cin>>r1;
    cout<< "������� ������������� R2 ";cin>>r2;
    cout<< "������� ������������� R3 ";cin>>r3;
    cout<< "����� ������������� "<<1/(1/r1+1/r2+1/r3)<<endl;
 
 
/*3Zadanie 5_ 
Zadanie 5_ Po zadannoi dline okrujnosti naiti ploschad kruga po formule S = pi*Rad2_ radius vichislit
 iz formuli dlini okrujnosti_ L=2*pi *R
Primechanie pi = 3.14
.*/
double L;
float pi;
pi=3.14;

    cout<< "\n\n������� ����� ���������� ";cin>>L;
    
    cout<< "������ "<<L/(2*pi)<<endl;
    cout<< "������� ����� "<<pi*L*L/(2*pi*2*pi)<<endl; 
 
 
 
 /*3Zadanie 6_ 
Zadanie 6_ Vichislit proidennoe rasstoyanie pri pryamolineinom ravnouskorennom dvijenii po formule
 S = v*t + _a*t2, / 2_ gde v � skorost_ t � vremya_ a � uskorenie.

.*/

double v,t,a;

 
 cout<< "\n\n������� �������� �������� v ";cin>>v;
 cout<< "������� ����� �������� t ";cin>>t;
 cout<< "������� ��������� �������� a ";cin>>a;
 
 cout<< "���������� ����������: "<<v*t + a*t*t<<endl; 
 
 
 /*3Zadanie 7_ 
Polzovatel vvodit s klaviaturi rasstoyanie do aeroporta i vremya_ za kotoroe nujno doehat.
 Vichislit skorost_ s kotoroi emu nujno ehat.

.*/

double L_airport,t_airport;

 cout<< "\n\n������� ���������� �� ��������� L ";cin>>L_airport;
 cout<< "������� ����� �������� �� ��������� t ";cin>>t_airport;
 
 cout<< "��������, � ������� ����������� �����: "<<L_airport/t_airport<<endl; 
 
 
 /*3Zadanie 8_ 
Polzovatel vvodit s klaviaturi vremya nachala i vremya zaversheniya telefonnogo razgovora
 _chasi_ minuti i sekundi,.
 Poschitat stoimost razgovora_ esli stoimost minuti � 30 kopeek.

.*/

    float hh, mm, ss; 
    float hh1, mm1, ss1; 
    cout << "\n\n������� ����� ������ ���������: "; 
     cin >> hh >> mm >> ss;
    cout << "������� ����� ��������� ���������: "; 
    cin >> hh1 >> mm1 >> ss1;
    cout << endl;
    float diff_hh, diff_mm, diff_ss; 
    float cost, res; 
    diff_hh = (hh1-hh)*3600;
    diff_mm = (mm1-mm)*60;
    diff_ss = (ss1-ss);
    cost = 30/100/60; 
    res = cost*(diff_hh+diff_mm+diff_ss);
    cout << "��������� ������ ����������: " << res << endl<< endl;
 
 
 
/*3Zadanie 9_ 
Polzovatel vvodit s klaviaturi rasstoyanie_ rashod benzina na 100 km i stoimost treh vidov benzina.
 Vivesti na ekran sravnitelnuyu tablicu so stoimostyu poezdki na raznih vidah benzina.

.*/

double L9, cost1, cost2, cost3, expense;

    cout<< "������� ���������� ";cin>>L9;
    cout<< "������� ������ �� 100 �� ";cin>>expense;
    cout<< "������� ���� ������� 1 ";cin>>cost1;
    cout<< "������� ���� ������� 2 ";cin>>cost2;
    cout<< "������� ���� ������� 3 ";cin>>cost3;
    cout<< "������������� ������� ��������� �������:/n/t"<<L9*expense/100*cost1<<L9*expense/100*cost2<<L9*expense/100*cost3<<endl;
 
 
 
 system("pause");

 return 0;
}











