// ioFileWithPath.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string NamaFile;

    cout << "Masukan Nama File : ";
    cin >> NamaFile;

    // membuka file dalam mode menulis
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menulis
    while (true)
    {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        // menulis dan memaskan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }


    // selesai dalam menulis sekarang tutup filenya
    outfile.close();

    // membuka file dalalm moode membaca
    ifstream infile;

    // menunjuk ke sebuah file 
    infile.open(NamaFile + ".txt", ios::in);

    cout << endl << ">=Membuka dan membaca file " << endl;
    // jika file ada maka
    if (infile.is_open())
    {
        // melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            // dan tampilkan di sini
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();
    }

    // jika tidak dtemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}

