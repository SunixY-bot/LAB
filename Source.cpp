#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string S, K;
	int count;
	cout << "Напишите письмо: ";
	cin >> S;
	for (int i = 0; S[i] != '\0'; i++)
	{
		int j = i;
		count = 0;
		if ((S[i] == S[i + 1] && S[i] == S[i + 2]) && (i + 1 != '\0' && i + 2 != '\0' && i + 3 != '\0'))
		{
			for (j; S[j] == S[i]; j++)
			{
				count += 1;
			}
			K += to_string(count) + S[i];
			i += count - 1;
		}
		else
		{
			K+= S[i];
		}
		
	}
	cout << "Новое письмо: " << K << endl;
	system("pause");
}