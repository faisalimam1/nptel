/*
Consider the program below.
Fill in the blank at LINE-1 to include appropriate header file to utilize sqrt() function.
Fill in the blank at LINE-2 to compute the length between two points p1 and p2 as √(pl.y-p2.y)+(pl.z-p2.x).
*/

#include <iostream>
#include <cmath>      //LINE-1 
using namespace std;
struct point{
    int x, y;
};
 
double get_len(point p1, point p2)
{
    return sqrt((p1.y - p2.y) * (p1.y - p2.y) + (p1.x - p2.x) * (p1.x - p2.x));    //LINE-2
}
int main() { 
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    point p1, p2;
    p1.x = x1;
    p1.y = y1;
    p2.x = x2;
    p2.y = y2;
    cout << get_len(p1, p2);
    return 0;
}
