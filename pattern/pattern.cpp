#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num, digit,j=0,ans,ans1,num1,m;
	cout << "Enter number: "; cin >> num;
	if (num<0)
	{
		num = abs(num);
	}
	digit = num;
	num1 = num;
	while (digit>=0)
	{
		
		digit /= 10;
		j++;
		if (digit==0)
		{
			break;
		}
	}
	if (j==10)
	{
		cout << endl;
		cout << "Your number is too large, the program might work wrongly" << endl;
	}
	cout << endl;
	cout << num << " has " << j << " digits" << endl;
	cout << " " << endl;
	for (int k = pow(10,j); k >=0 ; k/=10)
	{
		ans1 = num1 % k;
		if (ans1 == 0)
		{
			break;
		}
		cout << ans1 << endl;
		
	}
	m = j-1;
	while (m>=0)
	{
		m--;
		cout << "-";
	}
	cout << " " << endl;
	for (int i = pow(10, j-1); i >= 0; i /= 10)
	{
		ans = num / i;
		cout << ans << endl;
		if (ans==0)
		{
			break;
		}
	}



	system("Pause");
	return 0;
}
