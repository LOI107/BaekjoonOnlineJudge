/*

< �⺻���� / �� �ҽ� >
- �ð� ����(2 �� / 0 MS)
- �޸� ����(128 MB / 1988 KB)
- ������ Ǭ ������ ���� ����(60.435 %)

< ���� >
�迭�� �����ϴ� ���� ����. ���� �־�����, �� ���� �� �ڸ����� ������������ �����غ���.

< �Է� >
ù° �ٿ� �����ϰ����ϴ� �� N�� �־�����. N�� 1,000,000,000���� �۰ų� ���� �ڿ����̴�.

< ��� >
ù° �ٿ� �ڸ����� ������������ ������ ���� ����Ѵ�.

< �˰��� �з� >
- ����

*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <functional>

using namespace std;

int main(void)
{
	int i = 0;
	char num[20];

	while (((num[i++] = getchar()) != EOF) && (num[i - 1] != '\n')); // getchar�� ���� �� ���ھ� �Է¹޾� �迭�� ����

	sort(num, num + i - 1, greater<char>()); // �������� ����

	for (int j = 0; j < i - 1 ; j++)
		cout << num[j];

	cout << endl;
}