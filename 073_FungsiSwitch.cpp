#include <iostream>
using namespace std;

int bil1, bil2;
void input()
{
    cout << "Masukan Bilangan Pertama =";
    cin >> bil1;
    cout << "Masukan Bilangan Kedua = ";
    cin >> bil2;
}

float penjumblahan(float a,float b)
{
    return a + b;
}

float pembagian(float a,float b)
{
    return a / b;
}

float pengurangan(float a,float b)
{
    return a - b;
}

float perkalian(float a,float b)
{
    return a * b;
}


int main()
{
    int pilihan;

    do
    {
        cout << "===============================" << endl;
        cout << "MENU" << endl;
        cout << "1.Penjumlahan " << endl;
        cout << "2.Pmbagian " << endl;
        cout << "3.Pengurangan " << endl;
        cout << "4.Perkalian " << endl;
        cout << "5.Exit" << endl;
        cout << "Masukkan pilihan 1/2/3/4/5 = ";
        cin >> pilihan;     
    } while (pilihan !=5);
    
    switch (pilihan)
{

    case 1:
    input();
    cout << "Hasil Penjumblahan = " << penjumblahan(bil1,bil2) << endl;
    break;

    case 2:
    input();
    cout << "Hasil Penmbagian = " << pembagian(bil1,bil2) << endl;
    break;

    case 3:
    input();
    cout << "Hasil Pengurangan = " << pengurangan(bil1,bil2) << endl;
    break;

    case 4:
    input();
    cout << "Hasil Perkalian = " << perkalian(bil1,bil2) << endl;
    break;

    case 5:
    break;

}

}


