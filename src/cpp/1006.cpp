#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A, B, C, MEDIA;

    cin >> A >> B >> C;

    if ((A >= 0 && A <= 10) && (B >=0 && B <= 10 ) && (C >= 0 && C <= 10)){

      MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10;

      cout << fixed << setprecision(1) << "MEDIA = " << MEDIA << endl;

      return 0;
    }
}