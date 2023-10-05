#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    double i, f1, y;
    int k =0, x = 9;
    const double PI = 3.14;
    y =  (4*(1 - (1/3.0) + (1/5.0) - (1/7.0) + (1/9.0) ));
    f1 = abs(PI - y);
    for (i = -2; i >= -6; i-- )
    {
        double e = pow(10, i);
        cout << f1<< endl;
        while (f1 >= e)
        {
            if (k % 2 == 0)
            {
                x = x + 2;
                y = y - (1.0/ (x) );
                f1 = abs(PI - y);
                k +=1;
                cout << f1 << endl;

            }
            else
            {
                x = x + 2;
                y = y + (1.0/ (x) );
                f1 = abs(PI - y);
                k +=1;
                cout << f1 << endl; 
            
            }


        }

    }
    cout<< k << endl;
}