#include <iostream>
using namespace std;
int main()
{
    cout << "Mo\t" << "Tu\t" << "We\t" << "Th\t" << "Fr\t" << "St\t" << "Sn\t" << endl;
    for (int i = 1; i <= 31; i = i + 7)
    {
        for (int j = i; j <= i + 6; j++)
        {
            if (j == 32)
            {
                break;
            }
            cout << j << "\t";
        }
        cout << endl;


    }
    system("pause");
    return 0;
}