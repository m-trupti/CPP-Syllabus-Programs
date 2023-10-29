#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

// Template Declaration

template<class T>

// Template Class
class TClassMax {
    T x, y;
public:

    TClassMax() {

    }

    TClassMax(T first, T second) {
        x = first;
        y = second;
    }

    T getMaximun() {
        if (x > y)
            return x;
        else
            return y;
    }
};

int main() {
    TClassMax <int> iMax; // (100, 75);
    int a, b, i;
    TClassMax <float> fMax; // (90.78, 750.98);
    float c, d, j;

    cout << "Class Template Program To Get Maximum Number \n";
    cout << "Enter A,B values(integer):"<<endl;
    cin >> a>>b;
    iMax = TClassMax<int>(a, b);
    i = iMax.getMaximun();
    cout << "Result Max Int : " << i;

    cout << "\n\nEnter C,D values(float):"<<endl;
    cin >> c>>d;
    fMax = TClassMax<float>(c, d);
    j = fMax.getMaximun();
    cout << "Result Max Float : " << j;

    getch();
    return 0;
}
