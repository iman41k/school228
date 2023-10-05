#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
int main() {
int a = 10;
int const *p1=&a;
int *const p2=&a;
(*p2)++;
p1++;
std::cout<<a<<" "<<p1<<std::endl;
}