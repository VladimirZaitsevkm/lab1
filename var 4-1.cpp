#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    setlocale(LC_ALL, "RU");
    double a = 5.54, b = 3.93, y = 1.45, T1 = 288, T2 = 675;
    
    double K = (y - 1) / y;
    double nu1 = 1 - pow((1/b), K);
    double nu2_above = T2 - T1;
    double nu2_below = T2 + ((T2 - T1) / ((y - 1) * log(a)));
    double nu2 = nu2_above / nu2_below;
    double nu3 = 1 - K * (log(b) / (pow(b, K) - 1));
    
    std::cout << std::fixed << std::setprecision(6) << "а) " << nu1 << '\n'
    << "б) " << nu2 << '\n' << "в) " << nu3;
    
    return 0;
}
