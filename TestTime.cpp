// Small class test in c++
// Compile with "g++ TestTime.cpp Time.cpp"

#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

int main() {
    Time t;
    cout << "Initial universal time: ";
    t.printUniversal();
    cout << "\nInitial standard time: ";
    t.printStandard();

    t.setTime(13, 27, 6);
    cout << "\nUniversal time after setTime: "; 
    t.printUniversal();
    cout << "\nStandard time after setTime:";
    t.printStandard();

    try {
        t.setTime(99, 99, 99); // Try invalid values
    } catch (invalid_argument &e) {
        cout << "\nException: " << e.what() << endl;
    }
    cout << "Time after attempting invalid values";
    cout << "\nUniversal: ";  
    t.printUniversal();
    cout << "\nStandard: ";
    t.printStandard();
}