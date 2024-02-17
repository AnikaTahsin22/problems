#define _USE_MATH_DEFINES
#include <cmath>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    double area, x, pi = 3.141592653;
    cin >> x;

    area = pi * x * x;

    cout << fixed << setprecision(9) << area;

    return 0;
}