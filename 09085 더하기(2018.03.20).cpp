/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 0 MS)
- �޸� ����(128 MB / 1984 KB)
- ������ Ǭ ������ ���� ����(75.950 %)

< ���� >
�ڿ��� N���� �ָ� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
�Է��� ù �ٿ��� �׽�Ʈ ���̽��� ���� T(1 �� T �� 10)�� �־�����. 
�� �׽�Ʈ ���̽��� ù �ٿ� �ڿ����� ���� N(1 �� N �� 100)�� �־�����, �� ���� �ٿ���  N���� �ڿ����� �־�����. 
������ �ڿ��� ���̿��� �ϳ����� ������ �ִ�.

< ��� >
�� �׽�Ʈ ���̽��� ���ؼ� �־��� �ڿ����� ���� �� �ٿ� �ϳ��� ����Ѵ�.

< ��ó >
ACM-ICPC > Regionals > Asia > Korea > Nationwide Internet Competition > Asia Regional - Daejeon Nationalwide Internet Competition 2003 PA��

*/

#include <iostream>

using namespace std;

int main(void)
{
	int case_num, natural_num, num; // ���̽� ������ ���̽��� �ڿ��� ����, ������ �ڿ���

	cin >> case_num;

	for (int i = 0; i < case_num; i++)
	{
		int sum = 0;

		cin >> natural_num;

		for (int j = 0; j < natural_num; j++)
		{
			cin >> num;

			sum += num;
		}

		cout << sum << endl;
	}		
}