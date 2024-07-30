// Name - Siddhant Bedre
// PRN - 23070123037
// Aim - Performing Arithematic Operations using CPP Operators


#include <iostream>
using namespace std;

int main() {
    int a, b, sum, sub, prdt;
    float div;  
    
    cout << "Enter num 1: " << endl;
    cin >> a;
    cout << "Enter num 2: " << endl;
    cin >> b;

    sum = a + b;
    sub = a - b;
    prdt = a * b;
    div = a /b;
    

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << sub << endl;
    cout << "Product: " << prdt << endl;
    cout << "Division: " << div << endl;

    return 0;
}

/* Output :
Enter num 1: 
100
Enter num 2: 
10
Sum: 110
Difference: 90
Product: 1000
Division: 10
*/
