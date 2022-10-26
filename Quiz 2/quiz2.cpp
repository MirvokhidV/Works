#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int main()
{
    int num, b = 0, c = 0, d = 0, pos_ans, pos_divis = 0, neg_rem = 0, pos_rem, g = 0, num2, j, n = 0, neg_ans, y=0, neg_divis, t, neg_num, neg_rem1, neg_divis1, neg_ans1, x, gar, gar_1,gar_2;
    float  m = 0;
    cout << "Input number: "; cin >> num;
    int num1 = abs(num);
    int num3 = abs(num);
    int nump = abs(num);
    neg_num = num;
    num2 = abs(num);
    while (b >= 0)
    {
        b = nump / 10;
        c++;
        //cout << c << endl;
        if (b == 0)
        {
            break;
        }
        nump = b;
    }
    //cout << c << " digits has in " << nump << endl;
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
    //cout << "it has " << d << endl;


    for (int z = 0; z <= d; z++)
    {
        pos_divis = num1 / 2;
        //cout << "Division " << pos_divis << endl;
        pos_rem = num1 % 2;
        //cout << "Reminder: " << pos_rem << endl;
        pos_ans = pos_rem * pow(10, z) + m;
        //cout << "m=" << m << endl;
        cout << "d=" << d << endl;
        cout << "Answer sikl: " << pos_ans << endl;
        if (pos_divis == 0)
        {
            break;
        }
        num1 = pos_divis;
        m = pos_ans;
    }
    int ans = pos_ans;


    if (num > 0)
    {
        cout <<"Answe is: "<< pos_ans << endl;
    }
    else if (num < 0)
    {
        if (pos_ans >= 1111)
        {
            cout << "Sorry, Overflow Error" << endl;
            cout << "Because your number(" << neg_num << ") is equal to " << ans << " in binary" << endl;
            cout << "Please enter negative number less then 8" << endl;
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
            for ( t = 1; t <= d; t++)
            {
                neg_rem = ans % 10;
                neg_divis = ans / 10;
                cout << "Negative Reminder: " << neg_rem << endl;
                neg_ans = neg_rem * pow(10, t-1) + n;
                cout << "Negative Answer: " << neg_ans << endl;
                cout << "t= " << t << endl;
                if (neg_rem == 1)
                {
                    break;
                }
                ans = neg_divis;
                n = neg_ans;
            }
            cout << "Negative answer: " << neg_ans << endl;
            gar_1 = neg_ans;
            gar_2 = ans;
            gar = d;
            cout << "Garbage d-t: " << gar << endl;
            cout << "garbage: " << gar_1 << endl;
            for (x = t; x <= gar; x++)
            {
                neg_rem1 = gar_2 % 10;
                cout << "Negative reminder second loop: " << neg_rem1 << endl;
                if (neg_rem1==0)
                {
                    y = 1;
                }
                else if (neg_rem1==1)
                {
                    y = 0;
                }
                neg_divis1 = gar_2 / 10;
                cout << "Negative division second loop: " << neg_divis1 << endl;
                neg_ans1 = y * pow(10, x - 1) + gar_1;
                cout << "Negative answer second loop: " << neg_ans1 << endl;
                cout << endl;
                gar_2 = neg_divis1;
                gar_1 = neg_ans1;
            }

        }
    }
    
    system("pause");
    return 0;
}