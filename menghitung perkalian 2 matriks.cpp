//	Buatlah sebuah Program menghitung perkalian 2 matriks. Program harus bisa mengkalikan 2 matriks dengan kondisi kolom matriks ke-1 harus sama dengan baris matriks ke-2. Apabila kondisi tersebut tidak memenuhi maka akan mengeluarkan “Perkalian matriks tidak dapat dilakukan”.
//	Input: • Bilangan Integer apa saja 
//	Output: • Menampilkan hasil perkalian 2 matriks




#include<iostream>
using namespace std;

int main()
{
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
    int baris1, kolom1, baris2, kolom2;
    int i, j, k;

   
    cin >> baris1;
   
    cin >> kolom1;

   
    for(i=0; i<baris1; i++)
    {
        for(j=0; j<kolom1; j++)
        {
            cin >> matriks1[i][j];
        }
    }
}
    
