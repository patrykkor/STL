#include "pch.h"
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int number;
	char s;
	queue<int> n;
	while (cin >> s) 
	{
		if(s == '+')
		{
			cin >> number;
			n.push(number);
		}
		else if (s == '-')
		{
			if(!n.empty())
			{
				n.pop();
			}
			else
			{
				cout << "Error" << endl;
			}
		}
		else
		{
			cout << "Que?" << endl;
		}
	}
	while (!n.empty())
	{
		cout << n.front() << " ";
		n.pop();
	}
	system("pause");
	return 0;
}