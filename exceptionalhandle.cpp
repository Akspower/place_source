#include <iostream>
using namespace std;

int main() {
   
        int a = 10;
        int b = 0;
try {
        
        if (b == 0) {
            throw "Division by zero error!";
        }

        int c = a / b;

        cout << "Result: " << c << endl;
}  
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}
