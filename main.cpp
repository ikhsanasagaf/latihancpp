#include <iostream>
#include <cmath>

using namespace std;


void kalkulator(){

    int menu;
    int x;
    int y;
    cout << "Program Kalkulator Sederhana\n\n";
    cout << "Masukkan Angka 1 = ";
    cin >> x;
    cout << "Masukkan Angka 2 = ";
    cin >> y;
    cout << "Pilih 1 jika ingin penjumlahan \nPilih 2 jika ingin pengurangan \nPilih 3 jika ingin pembagian \nPilih 4 jika ingin perkalian\n";
    cout << "Pilih Operasi yang ingin dilakukan = ";
    cin >> menu;
    if (menu == 1){
        int tambah = x + y;
        cout << "Hasil dari operasi pertamabahan diatas adalah = " << tambah;
    } else if (menu == 2){
        int kurang = x - y;
        cout << "Hasil dari operasi perkurangan diatas adalah = " << kurang;
    } else if (menu == 3){
        int bagi = x/y;
        cout << "Hasil dari operasi pembagian diatas adalah = " << bagi;
    } else if (menu == 4){
        int kali = x*y;
        cout << "Hasil dari operasi perkalian diatas adalah = " << kali;
    } else {
    cout << "Menu tidak ditemukan";
    }
}


int main()
{
    kalkulator();
    return 0;
}
