#include <iostream>
//Kare,dikdörtgen ve dairenin çevresini ve alanını hesaplayan program
using namespace std;

class Sekil
{
public:

float cevre;
float alan;
string birim1;
string birim2;
string sekilturu;


Sekil()
{
    birim1 = "cm";
    birim2 = "cm2";
}

void Sekilyazdir()
{
    cout << "" << sekilturu << endl;
}

void Cevreyazdir()
{
    cout << "Cevre = " << cevre << " " << birim1 << endl;
}

void Alanyazdir()
{
    cout << "Alan = " << alan << " " << birim2 << endl;
}

};

class Kare : public Sekil 
{
public:

int kenar;

Kare()
{
    sekilturu = "Kare";
}

};

class Dikdortgen : public Sekil
{
public:
int en,boy;
Dikdortgen()
{
    sekilturu = "Dikdortgen";
}

};

class Daire : public Sekil
{
public:

int yaricap;
Daire ()
{
    sekilturu = "Daire";
} 

};

int main()
{
    int kenar,en,boy,yaricap;

    cout << "Karenin kenarini giriniz : ";
    cin >> kenar;
    
    cout << "Dikdortgenin enini ve boyunu giriniz : ";
    cin >> en >> boy;

    cout << "Dairenin yaricapini giriniz : ";
    cin >> yaricap;

    Kare kare;
    kare.kenar = kenar;
    kare.cevre = 4* kare.kenar ;
    kare.alan = kare.kenar * kare.kenar;
    kare.Sekilyazdir();
    kare.Cevreyazdir();
    kare.Alanyazdir();

    cout << endl;

    Dikdortgen dikdortgen;
    dikdortgen.en = en;
    dikdortgen.boy = boy;
    dikdortgen.cevre = 2 * ( dikdortgen.en + dikdortgen.boy );
    dikdortgen.alan = dikdortgen.en * dikdortgen.boy;
    dikdortgen.Sekilyazdir();
    dikdortgen.Cevreyazdir();
    dikdortgen.Alanyazdir();

    cout << endl;

    Daire daire;
    daire.yaricap = yaricap;
    daire.cevre = 2 * 3.14 * daire.yaricap;
    daire.alan = 3.14 * daire.yaricap * daire.yaricap;
    daire.Sekilyazdir();
    daire.Cevreyazdir();
    daire.Alanyazdir();









}


