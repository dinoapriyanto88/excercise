//	Buat fungsi void dengan nama findMax tanpa parameter, fungsi membaca input dari keyboard berupa integer N, dan N data.  Lalu fungsi akan mencetak nilai terbesar dari data yang diinputkan.
//	Format Input
//	
//	Baris pertama berupa integer N
//	N Baris berikutnya merupakan data dengan tipe integer
//	Format Output
//	
//	Output berupa nilai terbesar data yang diinputkan
//	For example:
//	
//	Test	Input	Result
//	findMax();
//	4
//	3 2 1 12
//	12





#include <iostream>
using namespace std;

void findMax(){
    int N;
    cin >> N;

    int maxVal = -1000000000; //inisialisasi nilai maksimal dengan angka yang sangat kecil
    for(int i=0; i<N; i++){
        int data;
        cin >> data;
        if(data > maxVal){
            maxVal = data;
        }
    }

    cout << maxVal << endl;
}

// kalau kemarin cuma sampai sini

int main(){
    findMax();
    return 0;
}

