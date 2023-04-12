//	Buatlah Program yang memiliki Fungsi dengan nama jarak untuk menghitung jarak antara dua titik (x1,y1) dan (x2,y2). Fungsi tersebut memiliki satu parameter bertipe Float, dimana rumus menghitung jarak adalah D = [( x2 – x1 )^2 + (y2 – y1)^2 ]^1/2
//	
//	For example:
//	Input	Result
//	0 0 3 4
//	5
//	23 24 21 28
//	5.83095


#include <iostream>
#include <cmath>

using namespace std;

float jarak(float x1, float y1, float y2, float x2) {
    float d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return d;
}

int main() {
    float x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    float distance = jarak(x1, y1, x2, y2);
    cout << distance;
    return 0;
}
