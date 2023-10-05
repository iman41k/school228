#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define USE МАТН DEFINES // Необходимо использовать константу М _ PI 
#include <math.h>
using namespace std;

int main(int argc, char* argv[])
{
    double sum = 0, e, sl; // объявление вещественный переменных
    int k = 1, znak = 1; // объявление целых переменных (знаменатель и знак)
    printf_s("E="); 
    scanf_s("%lf", &e); // ввод точности
    int n = 0; //счетчик количества повторений цикла
    do
    {
        sl = 4. / k; // вычисление очередного слагаемого
        sum += sl * znak; // расчет суммы
        k += 2;
        znak *= -1; //изменение знака слагаемоего
        n++; // увелечение счетчика 
    } while (sl >= e);
    printf_s("sum= %.10f  n =%d PI = %.10f\n", sum,  n, M_PI);

    double sum2 = 0, sl2, s= 0; // объявление вещественный переменных
    int k2 = 1; // объявление целых переменных (знаменатель и знак)
    printf_s("E="); 
    scanf_s("%lf", &e); // ввод точности
    int n2 = 0; //счетчик количества повторений цикла
    do 
    {
        sl2 = 6. / (k2*k2);
        s += sl2;
        sum2 = sqrt(s);
        k2++;
        n2++;
    } while(sl2 >= e);
    printf_s("sum2 = %.10f n2 = %d PI = %.10f\n", sum2 , n2, M_PI);

    if (n > n2)
    {
        cout<< "VTOROE KRUCHE";
    }
    else {
        cout<< "PERVOE KRUCHE";

    }
    return 0;  

}