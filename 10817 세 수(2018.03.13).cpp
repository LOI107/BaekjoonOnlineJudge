/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 0 MS)
- �޸� ����(256 MB / 1984 KB)
- ������ Ǭ ������ ���� ����(48.805 %)

< ���� >
�� ���� A, B, C�� �־�����. �� ��, �� ��°�� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
ù° �ٿ� �� ���� A, B, C�� �������� ���еǾ� �־�����. (1 �� A, B, C �� 100)

< ��� >
�� ��°�� ū ������ ����Ѵ�.

*/

#include <iostream>

using namespace std;

int main()
{
	int temp;
	int num[3];

	cin >> num[0] >> num[1] >> num[2];

	if (num[0] < num[1]) // �ݺ��ؼ� ���� ū ���� ���������� �ű�� �Ϲ����� ���� �˰����� ���
	{
		temp = num[0];
		num[0] = num[1];
		num[1] = temp;
	}

	if (num[1] < num[2])
	{
		temp = num[1];
		num[1] = num[2];
		num[2] = temp;
	}

	if (num[0] < num[1])
	{
		temp = num[0];
		num[0] = num[1];
		num[1] = temp;
	}

	cout << num[1] << endl;
}