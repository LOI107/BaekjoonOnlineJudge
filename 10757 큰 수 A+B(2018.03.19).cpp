/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 4 MS)
- �޸� ����(256 MB / 1992 KB)
- ������ Ǭ ������ ���� ����(41.929 %)

< ���� >
A+B�� ����Ͻÿ�.

< �Է� >
ù° �ٿ� A�� B�� �־�����. (0 < A,B < 10^10000)

< ��� >
ù° �ٿ� A+B�� ����Ѵ�.

< �˰��� �з� >
- ��Ģ����
- ū ��

*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{	
	bool over_10 = false; // �� ���� Ư�� �ڸ��� ���� 10�� ���� ��� �ø� ���� �����Ƿ� true
	string a, b, sum = "";
	string temp;

	cin >> a >> b;

	temp = b;

	if (b.length() > a.length()) // b�� �ڸ����� �� �� ��� b�� a�� �ٲ�
	{
		temp = a;
		a = b;
		b = temp;
	}

	for (int i = 0; i < a.length() - temp.length(); i++) // b�� �տ� 0�� �ٿ��� �ڸ����� ������
		b = '0' + b;

	for (int i = a.length() - 1; i >= 0; i--) // ��� ������ �ϵ��� �ں��� ���ذ�
	{
		if (a[i] - '0' + b[i] - '0' >= 10) // �� ���� Ư�� �ڸ��� ���� 10�� ���� ���
		{
			if (over_10 == true) // �̹� ���� �ڸ��� ���� 10�� �Ѿ� �ö�� ���� ���� ���
				sum = (char)((a[i] - '0' + b[i] - '0') % 10 + '1') + sum;

			else sum = (char)((a[i] - '0' + b[i] - '0') % 10 + '0') + sum; // �ö�� ���� ���� ���

			over_10 = true;
		}

		else // �� ���� Ư�� �ڸ��� ���� 10�� �� ���� ���
		{
			if (over_10 == true) // �ö�� ���� ���� ���
			{
				sum = (char)((a[i] - '0' + b[i] - '0' + 1) % 10 + '0') + sum;
				
				if (a[i] - '0' + b[i] - '0' == 9) // �� ���� Ư�� �ڸ��� ���� 9�ε� �ö�� ���� ������ �ö� ���� ����
					over_10 = true;

				else over_10 = false;
			}

			else
			{
				sum = (char)((a[i] - '0' + b[i] - '0') % 10 + '0') + sum;
				over_10 = false;
			}
		}
	}

	if (over_10 == true) // a�� b�� �� �� �ڸ����� ���� 10�� �Ѿ��� ���
		sum = '1' + sum;

	cout << sum << endl;
}