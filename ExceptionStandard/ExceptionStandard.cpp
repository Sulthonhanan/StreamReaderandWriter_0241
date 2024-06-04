// ExceptionStandard.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <exception>
// untuk obyek exception yg akan digunakan
#include <array>
// untuk obyek array yang akan kita gunakan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; // penanda 1:...
	try
	{
		array<int, 3> data = { 1, 2, 3 };
		// pesan array integer 3 elemen
		// cout << data.at(5) << endl;
		// memanggil array elemen ke 5
	}
	catch (exception& e)
	{
		// penangkap menggynakan obyej exception
		cout << e.what() << endl;
		// akan dieksekusi karena array data hanya memiliki 3 elemen
	}
	cout << "Baris Program Yang terakhir" << endl;
	// penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan
	return 0;
}

