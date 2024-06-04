// ManualException.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
   try
   {
	   cout << "Selamat Belajar di Prodi TI UMY" << endl;
	   // throw 0.5; // melemparkan sebuah integer maka
	   cout << "Pernyataan tidak akan dieksekusi" << endl;
   }
   catch (int a)
   {
	   // blok ini akan dieksekusi
	   cout << "Pengecualian akan dieksekusi" << endl;
   }
   catch (...)
   {
	   // jika selain integer maka block ii akan dieksekusi 
	   cout << "Default Pengecualian dieksekusi" << endl;
   }
   return 0;
}

