/*

< �⺻���� / �� �ҽ� >
- �ð� ����(2 �� / 0 MS)
- �޸� ����(128 MB / 1984 KB)
- ������ Ǭ ������ ���� ����(40.676 %)

< ���� >
���� �ٸ� N���� �ڿ����� ���� S��� �Ѵ�. S�� �� ��, �ڿ��� N�� �ִ밪�� ���ϱ�?

< �Է� >
ù° �ٿ� �ڿ��� S(1��S��4,294,967,295)�� �־�����.

< ��� >
ù° �ٿ� �ڿ��� N�� �ִ밪�� ����Ѵ�.

< �˰��� �з� >
- ����
- ����

*/

#include <iostream>

using namespace std;

int main(void)
{
	long long num, sum = 0;

	int count = 0;

	cin >> num;

	for (long long i = 1; ; i++) // 1���� ���� ���ؼ� num���� ���� ���� ���� ã�� ���ų� ���� ��� ����
	{
		sum = sum + i;

		count++;

		if (sum > num)
		{
			count--;
			break;
		}
	}

	cout << count << endl;

	return 0;
}