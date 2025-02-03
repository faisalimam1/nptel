/*
Consider the following program. Fill in the blank at LINE-1 with an appropriate function header for the function update_and_sum() 
such that it satisfies the sample input and output.
*/

#include <iostream>
using namespace std;

void update_and_sum(int a, int b, int& c ){    //LINE-1
    a *= 10;
    b *= 10;
    c = a + b;
    cout << a << ", " << b << ", " << c << endl;
}
int main() {
    int i1, i2, i3 = 0;
    cin >> i1 >> i2;
    update_and_sum(i1, i2, i3);
    cout << i1 << ", " << i2 << ", " << i3 << endl;
    return 0;
}

/*
Input:
-10 300

Output:
-100, 3000, 2900\n
-10, 300, 2900
*/
