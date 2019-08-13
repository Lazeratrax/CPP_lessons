/*1
 задание ¬ывести на экран один куплет любимого стихотворени€ или песни, 
с указанием автора или исполнител€. »спользуйте escape-последовательности дл€ форматировани€.*/
#include <iostream>
using namespace std;


int main() {
 setlocale(LC_ALL, "Russian");

 cout << "\n\tтиги ди ги ди ди дон ди дон рельсы тарахтели,\n\tкроны окровавленных берез стыли на снегу.\n";
 cout << "\tза кордон баранов вез ’арон в голые метели\n\tв глубину —ибирских горьких слез.\n\t\tв лютую тайгу...\n\n\t\t\t\tЅранимир\n\n";

/*2 
Vivesti na ekran stih ЂEvery hunter wantsЕї takim obrazom_ chtobi kajdii Ђcvetї nachinalsya s novoi stroki
 i sootvetstvuyuschim kolichestvom tabulyacii..
*/

 cout << "\n каждый\n";
 cout << "\tохотник\n";
 cout << "\t\tжелает\n";
 cout << "\t\t\tзнать\n";
 cout << "\t\t\t\tгде\n";
 cout << "\t\t\t\t\tсидит\n";
 cout << "\t\t\t\t\t\t фазан\n";

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

 cout << "\n\t\t\t ѕродам смартфон недорого \n\n";
 cout << "\tAndroid, экран 4.7\" (480x854), ќперативна€ пам€ть 1√б, флеш-пам€ть 8√б,\n\t камера 5ћп, аккумул€тор 2100мјч, односимочный.";
 cout << "\tѕродам за 39р, звоните +375(44)761-05-53\n\n";

 /*3Zadanie 4_ 
Zadani tri soprotivlenii R1_ R2_ R3 . Vichislit znachenie soprotivleniya R0 po formule_ 1/R0 = 1/R1+1/R2+1/R3.
Kontrolnii primer_ R1=2_ R2=4_ R3=8 R0 = 1.142857.*/
  double r1,r2,r3,r;
    cout<< "¬ведите сопротивление R1 ";cin>>r1;
    cout<< "¬ведите сопротивление R2 ";cin>>r2;
    cout<< "¬ведите сопротивление R3 ";cin>>r3;
    cout<< "—умма сопротивлений "<<1/(1/r1+1/r2+1/r3)<<endl;
 
 
/*3Zadanie 5_ 
Zadanie 5_ Po zadannoi dline okrujnosti naiti ploschad kruga po formule S = pi*Rad2_ radius vichislit
 iz formuli dlini okrujnosti_ L=2*pi *R
Primechanie pi = 3.14
.*/
double L;
float pi;
pi=3.14;

    cout<< "\n\n¬ведите длину окружности ";cin>>L;
    
    cout<< "–адиус "<<L/(2*pi)<<endl;
    cout<< "ѕлощадь круга "<<pi*L*L/(2*pi*2*pi)<<endl; 
 
 
 
 /*3Zadanie 6_ 
Zadanie 6_ Vichislit proidennoe rasstoyanie pri pryamolineinom ravnouskorennom dvijenii po formule
 S = v*t + _a*t2, / 2_ gde v Ц skorost_ t Ц vremya_ a Ц uskorenie.

.*/

double v,t,a;

 
 cout<< "\n\n¬ведите скорость движени€ v ";cin>>v;
 cout<< "¬ведите врем€ движени€ t ";cin>>t;
 cout<< "¬ведите ускорение движени€ a ";cin>>a;
 
 cout<< "ѕройденное рассто€ние: "<<v*t + a*t*t<<endl; 
 
 
 /*3Zadanie 7_ 
Polzovatel vvodit s klaviaturi rasstoyanie do aeroporta i vremya_ za kotoroe nujno doehat.
 Vichislit skorost_ s kotoroi emu nujno ehat.

.*/

double L_airport,t_airport;

 cout<< "\n\n¬ведите рассто€ние до аэропорта L ";cin>>L_airport;
 cout<< "¬ведите врем€ движени€ до аэропорта t ";cin>>t_airport;
 
 cout<< "—корость, с которой необоходимо ехать: "<<L_airport/t_airport<<endl; 
 
 
 /*3Zadanie 8_ 
Polzovatel vvodit s klaviaturi vremya nachala i vremya zaversheniya telefonnogo razgovora
 _chasi_ minuti i sekundi,.
 Poschitat stoimost razgovora_ esli stoimost minuti Ц 30 kopeek.

.*/

    float hh, mm, ss; 
    float hh1, mm1, ss1; 
    cout << "\n\n¬ведите врем€ начала разговора: "; 
     cin >> hh >> mm >> ss;
    cout << "¬ведите врем€ окончани€ разговора: "; 
    cin >> hh1 >> mm1 >> ss1;
    cout << endl;
    float diff_hh, diff_mm, diff_ss; 
    float cost, res; 
    diff_hh = (hh1-hh)*3600;
    diff_mm = (mm1-mm)*60;
    diff_ss = (ss1-ss);
    cost = 30/100/60; 
    res = cost*(diff_hh+diff_mm+diff_ss);
    cout << "—тоимость звонка составл€ет: " << res << endl<< endl;
 
 
 
/*3Zadanie 9_ 
Polzovatel vvodit s klaviaturi rasstoyanie_ rashod benzina na 100 km i stoimost treh vidov benzina.
 Vivesti na ekran sravnitelnuyu tablicu so stoimostyu poezdki na raznih vidah benzina.

.*/

double L9, cost1, cost2, cost3, expense;

    cout<< "¬ведите рассто€ние ";cin>>L9;
    cout<< "¬ведите расход на 100 км ";cin>>expense;
    cout<< "¬ведите цену бензина 1 ";cin>>cost1;
    cout<< "¬ведите цену бензина 2 ";cin>>cost2;
    cout<< "¬ведите цену бензина 3 ";cin>>cost3;
    cout<< "—равнительна€ таблица стоимости поездки:/n/t"<<L9*expense/100*cost1<<L9*expense/100*cost2<<L9*expense/100*cost3<<endl;
 
 
 
 system("pause");

 return 0;
}











