#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s;
    int a, b, result;
    cin >> a >> s >> b;
    if (s == '+')
    {
        result = a + b;
        cout << result;
    }
    else if (s == '-')
    {
        result = a - b;
        cout << result;
    }
    else if (s == '*')
    {
        result = a * b;
        cout << result;
    }
    else if (s == '/')
    {
        result = a / b;
        cout << result;
    }
    return 0;
}