/*
Consider the following program. Fill in the blanks at LINE-1 and LINE-2 with appropriate headers of overloaded function product. 
The program must satisfy the sample input and output. 
*/

#include <iostream>
using namespace std;

int product (int a,int b,int c) { //line 1
    return a * b * c;
}

int product (int a,int b) { //line 2
    return a * b;    
}

// additional part
int product (int a) {
    return a ;    
}

double product(double a, double b){
       return a*b;
}
int main() {
    int i1, i2, i3;
    double d1, d2;
    cin >> i1 >> i2 >> i3 >> d1 >> d2;
    cout << product(i1) << ", ";
    cout << product(i1, i2) << ", ";
    cout << product(i1, i2, i3) << ", ";
    cout << product(d1, d2);
    return 0;
}

/*
Input:
10 20 30 10.5 5.67

Output:
10, 200, 6000, 59.535
  */
