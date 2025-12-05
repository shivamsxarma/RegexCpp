#include <iostream>
using namespace std;
void compareAndPrintGreater(int a, int b) {
    if (a > b) {
        cout << a << " is greater" << endl;
    } else if (b > a) {
        cout << b << " is greater" << endl;
    } else {
        cout << "Both numbers are equal" << endl;
    }
}

int main(){

    // Example usage
    compareAndPrintGreater(10, 20);
    compareAndPrintGreater(30, 5);
    compareAndPrintGreater(7, 7);

    return 0;
}
