#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int main()
{
    int num, b=0, c = 0, d = 0, pos_ans, pos_divis = 0, pos_rem, num2, g = 0;
    int neg_divis=0, neg_rem=0,j=0,n=0,neg_ans;
    float  m = 0;
    cout << "Input number: "; cin >> num;
    int num1 = abs(num);
    int num3 = abs(num);
    num2 = num;
    while (b >= 0)
    {
        int nump = abs(num);
        b = nump / 10;
        c++;
        cout << c << endl;
        if (b == 0)
        {
            break;
        }
        nump = b;
    }
    cout << c << " digits has in " << nump << endl;
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


    for (int z = 0; z <= d; z++)
    {
        pos_divis = num1 / 2;
        cout << "Division " << pos_divis << endl;
        pos_rem = num1 % 2;
        cout << "Reminder: " << pos_rem << endl;
        pos_ans = pos_rem * pow(10, z) + m;
        cout << "m=" << m << endl;
        cout << "d=" << d << endl;
        cout << "Answer " << pos_ans << endl;
        if (pos_divis == 0)
        {
            break;
        }
        num1 = pos_divis;
        m = pos_ans;
    }
    

    if (num >= 0)
    {
        cout << pos_ans << endl;
    }
    if (num<0)
    {
        if (pos_ans>=0111)
        {
            cout << "Sorry, Overflow Error" << endl;
        }
        else
        {
            /*
            for (int j = 0; j <= d; j++)
            {
                cout << "j= " << j << endl;
                neg_rem = num2 % pow(10, j);
                cout << "Negative Reminder: " << neg_rem << endl;
                if (neg_rem==0)
                {
                    neg_ans=
                }
            }
            */
            while (neg_rem==1)
            {
                neg_rem = num2 % pow(10, j);
                cout << "Negative Reminder: " << neg_rem << endl;
                neg_ans = neg_rem * pow(10, j) + n;
                cout << "Negative Answer: " << neg_ans << endl;
                cout << "j= " << j << endl;
                n = neg_ans;
                if (neg_rem==0)
                {
                    continue;
                }
                else if (neg_rem==1)
                {
                    break;
                }
                j++;
            }
        }
    }
    system("pause");
    return 0;
}