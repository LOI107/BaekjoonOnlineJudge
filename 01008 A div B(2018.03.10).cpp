/*

< �⺻���� / �� �ҽ� >
- �ð� ����(2 �� / 0 MS)
- �޸� ����(128 MB / 1984 KB)
- ������ Ǭ ������ ���� ����(35.154 %)

< ���� >
A/B�� ����Ͻÿ�.

< �Է� >
ù° �ٿ� A�� B�� �־�����. (0 < A,B < 10)

< ��� >
ù° �ٿ� A/B�� ����Ѵ�. ����/��� ������ 10^-9 ���� ����Ѵ�.

< �˰��� �з� >
- ��Ģ����
- ����

*/

#include <iostream>
#include <cfloat>

using namespace std;

int main()
{
	double a, b;

	cin >> a >> b;
	cout.precision(DBL_DIG);
	cout << fixed << a / b << endl;
}