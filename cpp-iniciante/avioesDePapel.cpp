#include <iostream>
using namespace std;

int main (){

    int c, p, f;

    cin >> c >> p >> f;

    if (p / f < c)
        cout << "N" << endl;

    else
        cout << "S" << endl;

    return 0;
}
