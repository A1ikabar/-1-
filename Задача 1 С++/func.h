#include <iostream>
#include <list>
#include <locale.h>
#include <vector>
#include <iomanip>

using namespace std;
int counter = 1, a, b, breaker = 1;
list <int> mass1, mass2;

void func(int c, list <int> massforcount) {
    //cout << c <<endl;
    if (c > 0) {
        if (c >= 2) {
            b = c - 2;
            mass2 = massforcount;
            mass2.push_back(2);
            func(b, mass2);
        }
        a = c - 1;
        mass1 = massforcount;
        mass1.push_back(1);
        func(a, mass1);
    }
    else {
        cout << counter << ") "; counter++;
        for (int N : massforcount) {
            cout << N << " " ;
        }
        cout  << "\t\t\tQuantity of numbers: "  << size(massforcount) << " " << endl;
    }
    
}
