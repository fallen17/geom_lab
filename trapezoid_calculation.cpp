#include <iostream>
#include <locale>
#include <cmath>
using namespace std;
int main()
{
setlocale(LC_ALL, "ru");
float verkh_st, niz_st, lev_st, prav_st, perimetr;
float sred_lin, visota, ploschad;
cout<<"Введите верхнюю сторону"<<endl;
cin>>verkh_st;
	
cout<<endl<<"Введите нижнюю сторону"<<endl;
cin>>niz_st;
cout<<endl<<"Введите левую сторону"<<endl;
cin>>lev_st;
cout<<endl<<"Введите правую сторону"<<endl;
cin>>prav_st;
cout<<"Результаты: "<<endl;
if ( verkh_st <= 0.0f || niz_st <= 0.0f || lev_st <= 0.0f || prav_st <= 0.0f )
	{ cout<<"Неверные велечины сторон"<<endl; exit(0);}
perimetr = verkh_st + niz_st + lev_st + prav_st;
sred_lin = (verkh_st + niz_st) / 2;
visota = sqrt( pow(lev_st, 2 ) - pow( ( ( pow( verkh_st - niz_st, 2 ) + (lev_st * lev_st) - (prav_st * prav_st) ) / (2*(abs(verkh_st - niz_st))) ) , 2 ));
ploschad = visota * sred_lin;

cout<<"Длина средней линии: "<<sred_lin<<endl;
cout<<"Периметр: "<<perimetr<<endl;
cout<<"Площадь: "<<ploschad<<endl;

return 0;
}
