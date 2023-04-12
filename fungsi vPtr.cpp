//	Buatlah sebuah fungsi dengan nama vPtr. Fungsi ini memiliki 2 parameter:
//	1. Parameter pertama berupa void pointer yang nantinya akan diisi nilai integer ataupun char.
//	2. Parameter kedua adalah sebuah variabel char yang akan diisi dengan tipe perintah.
//	
//	Ketentuan:
//	1. Parameter char pada fungsi ini hanya akan diisi dengan huruf i atau c
//	2. Jika char berisi huruf "i" maka pointer akan berisi sebuah integer, maka tampilkan 'ing' sebanyak nilai dalam pointer.
//	3. Jika char berisi hurf "c" maka pointer akan berisi sebuah char, maka tampilkan 'ceng' diikuti karakter yang ada pada pointer dipisahkan dengan spasi
//	



#include <stdio.h>

void vPtr(void *ptr, char cmd) {
    if (cmd == 'i') {
        int *intPtr = (int*) ptr;
        printf("ing ");
        for (int i = 1; i < *intPtr; i++) {
            printf("ing ");
        }
        printf("\n");
    } else if (cmd == 'c') {
        char *charPtr = (char*) ptr;
        printf("ceng %c\n", *charPtr);
    }
}

int main() {
    char b = 'k';
    void *x = &b;
    vPtr(x, 'c');

    int c = 3;
    void *y = &c;
    vPtr(y, 'i');

    return 0;
}

