#include <iostream>
#include <math.h>

using std::cout;

int main()
{
    int sum_sq = 0, sq_sum = 0, dif;
    for (int i = 1; i <= 100; i++) {
        sum_sq += pow(i, 2);
        sq_sum += i;
    }
    dif = pow(sq_sum, 2) - sum_sq;
    cout << "Output:\n" << dif;
    system ("pause");
}
