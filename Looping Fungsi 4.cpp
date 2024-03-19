#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma, nNB, nCompass, nNike
int hAdidas =300, Hnb = 250, hPuma = 150, hNike = 350; 

void input()
{
    cout << "Masukkan Jumlah Adidas =";
    cin >> nAdidas;

    cout << "Masukkan Jumlah Puma =";
    cin >> nPuma;

    cout << "Masukkan Jumlah New Balance =";
    cin >> nNB;

    cout << "Masukkan Jumlah Compass =";
    cin >> nCompass;

    cout << "Masukkan Jumlah Nike =";
    cin >> nNike;
}

int TotalHarga()
{
    return (nAdidas * hAdidas) + (nPuma * hPuma) + (nNB * hNB) + (nNike * hNike) + (nCompass * hCompass);
}

void Display()
{
    cout << endl;
    cout <<"==============="
    cout <<"Jumlah Puma =" << nPuma << endl;
    cout <<"Jumlah Adidas =" <<nAdidas << endl;
    cout <<endl;
    cout <<"Total Harga = Rp" << TotalHarga() << endl;


}



int main()
{
    input();
    Display();
}