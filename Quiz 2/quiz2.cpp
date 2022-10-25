#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, num1, b=0, c = 0, d = 0, ans, num2, num3, divis = 0, rem;
    float g=0, m = 0;
    cout << "Input number: "; cin >> num;
    num1 = num;
    num2 = num;
    num3 = num;
    while (b >= 0)
    {
        b = num / 10;
        c++;
        cout << c << endl;
        if (b == 0)
        {
            break;
        }
        num = b;
    }
    cout << c << " digits has in " << num3 << endl;
    while (g >= 0)
    {
        g = num3 / 2;
        d++;
        num3 = g;
        if (num3 >= 0 and num3 == 0)
        {
            break;
        }
    }
    cout << "it has " << d << endl;
    

    if (num >= 0)
    {

        for (int z = 0; z <= d; z++)
        {
            divis = num1 / 2;
            cout << "Division " << divis << endl;
            rem = num1 % 2;
            cout << "Reminder: " << rem << endl;
            ans = rem * pow(10, z) + m;
            cout << "m=" << m << endl;
            cout << "d=" << d << endl;
            cout << "Answer " << ans << endl;
            if (divis == 0)
            {
                break;
            }
            num1 = divis;
            m = ans;
        }
        cout << ans << endl;
    }
    system("pause");
    return 0;
}