//	Buatlah sebuah Fungsi menghitung baris dan deret aritmatika menggunakan Prosedur. Program memiliki dua buah prosedur dengan masing-masing memiliki tiga parameter yaitu nilai awal, selisih, dan jumlah suku. Bilangan dalam baris merupakan bilangan positif. Apabila terdapat bilangan negatif (kurang dari nol) dalam baris, program akan menampilkan “Not Found” lalu berhenti.
//	
//	Input : 
//	- Input dapat berupa bilangan integer bernilai apa saja 
//	
//	Output : 
//	- baris pertama menampilkan baris aritmatika dipisahkan spasi
//	- baris kedua menampilkan deret aritmatika

#include <iostream>
using namespace std;

void baris(int a, int d, int n) {
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        a += d;
        if (a < 0) {
            cout << "\nNot Found" << endl;
            return;
        }
    }
    cout << endl;
}

void deret(int a, int d, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a;
        a += d;
        if (a < 0) {
            cout << "\nNot Found" << endl;
            return;
        }
    }
    cout << sum << endl;
}

int main() {
    // Contoh penggunaan
    baris(4, 2, 8);
    deret(4, 2, 8);
    baris(0, 5, 6);
    deret(0, 5, 6);
    baris(-3, 4, 9);
    deret(-3, 4, 9);
    
    return 0;
}

