/*

< �⺻���� / �� �ҽ� >
- �ð� ����(2 �� / 92 MS)
- �޸� ����(128 MB / 1984 KB)
- ������ Ǭ ������ ���� ����(51.951 %)

< ���� >
�������� n���� ���� ���� �ִ�. ������ ���� x��ǥ�� �־����� ��, 
n^2���� ��� �ֿ� ���ؼ� �Ÿ��� ���̸� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
��, ��� i, j�� ���ؼ� |x[i] - x[j]|�� ���� ���ϴ� ���̴�.

< �Է� >
ù° �ٿ� n(1��n��10,000)�� �־�����. ���� �ٿ��� x[1], x[2], x[3], ��, x[n]�� �־�����. 
������ 0 �̻� 1,000,000,000 ������ �����̴�.

< ��� >
ù° �ٿ� ���� ����Ѵ�.

< �˰��� �з� >
- ����

*/

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	long long caseNum, sum = 0;
	long long location[10001];

	cin >> caseNum;

	for (long long i = 0; i < caseNum; i++)
		cin >> location[i];

	for (long long i = 0; i < caseNum; i++)
	{
		for (long long j = 0; j < caseNum; j++)
			sum += abs(location[i] - location[j]);
	}

	cout << sum << endl;
}