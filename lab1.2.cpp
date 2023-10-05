#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    double x, y, z;
    cin >> x >> y >> z;
    int k;
    k = 0;
    if (x > 1 && x < 3)
    {
        cout << x << endl;
        k ++;
    }
    if (y > 1 && y < 3)
    {
        cout << y << endl;
        k ++;
    }
    if (z > 1 && z < 3)
    {
        cout << z << endl;
        k ++;
    }
    if (k == 0)
        cout <<"Takix 4isel net";
    return 0;


}