#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int main()
{

    setlocale(LC_ALL,"Russian");
    double  x, y, r, phi; // задаем действительную часть к-ого ур-ния + переменные для рассчета формулы 
    cin >> x >> y;
    int z, x1, y1; // переменные для рассчета формулы 
    x1 = pow(x, 2);
    y1 = pow(y, 2);
    r = sqrt(x1 + y1);
    phi = atan(y / x);
    cout << "z=" << r << "(cos(" << phi << ") + i*sin(" << phi << "))"; // конечн
    return 0;




}