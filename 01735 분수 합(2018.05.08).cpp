/*

< �⺻���� / �� �ҽ� >
- �ð� ����(2 �� / 0 MS)
- �޸� ����(128 MB / 1984 KB)
- ������ Ǭ ������ ���� ����(41.812 %)

< ���� >
�м� A/B�� ���ڰ� A, �и� B�� �м��� �ǹ��Ѵ�. A�� B�� ��� �ڿ������ ����.
�� �м��� �� ���� �м��� ǥ���� �� �ִ�. �� �м��� �־����� ��, �� ���� ���м��� ���·� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
���м��� �� �̻� ��е��� �ʴ� �м��� �ǹ��Ѵ�.

< �Է� >
ù° �ٰ� ��° �ٿ�, �� �м��� ���ڿ� �и� ���ϴ� �� ���� �ڿ����� ������� �־�����. �ԷµǴ� �� �ڿ����� ��� 30,000 �����̴�.

< ��� >
ù° �ٿ� ���ϰ��� �ϴ� ���м��� ���ڿ� �и� ���ϴ� �� ���� �ڿ����� �� ĭ�� ���̿� �ΰ� ������� ����Ѵ�.

*/

#include <iostream>

using namespace std;

int main(void)
{
	long long int numerator, denominator, numerator1, numerator2, denominator1, denominator2;
	long long int temp1, temp2, bigger, GCD = 1;

	cin >> numerator1 >> denominator1 >> numerator2 >> denominator2;

	denominator = denominator1 * denominator2; // ���� ����� �и�
	numerator = numerator1 * denominator2 + numerator2 * denominator1; // ���� ����� ����

	temp1 = numerator;
	temp2 = denominator;

	while (1) // ��Ŭ���� ȣ������ ���
	{
		if (temp1 > temp2)
		{
			temp1 = temp1 % temp2;

			if (temp1 == 0)
			{
				GCD = temp2;
				break;
			}
		}

		else
		{
			temp2 = temp2 % temp1;

			if (temp2 == 0)
			{
				GCD = temp1;
				break;
			}
		}
	}

	cout << numerator / GCD << " " << denominator / GCD << endl;
}