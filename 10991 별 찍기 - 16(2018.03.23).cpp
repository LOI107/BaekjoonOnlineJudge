/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 4 MS)
- �޸� ����(256 MB / 1988 KB)
- ������ Ǭ ������ ���� ����(80.078 %)

< ���� >
������ ���� ����� ��Ģ�� ������ �ڿ� ���� ��� ������.

< �Է� >
ù° �ٿ� N (1<=N<=100)�� �־�����.

< ��� >
ù° �ٺ��� N��° �� ���� ���ʴ�� ���� ����Ѵ�.

*/

#include <iostream>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < n - i + 1; j++)
			cout << " ";

		for (int j = 1; j < 2 * i; j++)
		{
			if (j % 2 == 1)
				cout << '*';

			else cout << " ";
		}

		cout << endl;
	}
}