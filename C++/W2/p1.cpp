/*
Consider the program below which defines a type point and overloads operator + such that the x and y coordinates of a given point can be added with an integer.
Complete the program with the following instructions.
Fill in the blank at LINE-1 with the appropriate header of the function to overload operator +
Fill in the blank at LINE-2 to declare a new point.
Fill in the blank at LINE-3 to return the new point.
*/

#include <iostream>
using namespace std;

struct point {
    int x, y;
};

point operator+(int t) const{    //LINE-1
    point new_pt;      //LINE-2
    new_pt.x = pt.x + t;
    new_pt.y = pt.y + t;
    return new_pt;       //LINE-3
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    point p = {a, b};
    int t = c;
    point np = p + t;
    cout << "(" << np.x << ", " << np.y << ")";
    return 0;
}

/*
Input:
10 20 -5

Output:
(5, 15)
*/
