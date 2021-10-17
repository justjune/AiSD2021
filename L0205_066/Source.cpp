/*
Пример из Скиены
Рекурсивное возведение в степень
*/
#include <iostream>
#include <cmath>
using namespace std;

long int power(long int x, unsigned int n) {
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else if (n % 2 == 0)
        return pow(x * x, n / 2);
    else
        return  pow(x * x, n / 2) * x;
}
int main() {
    unsigned int result = pow(11, 17);
    cout << result << endl;
    return 0;
}


