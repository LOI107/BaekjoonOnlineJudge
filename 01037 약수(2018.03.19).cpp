/*

< �⺻���� / �� �ҽ� >
- �ð� ����(2 �� / 0 MS)
- �޸� ����(128 MB / 1988 KB)
- ������ Ǭ ������ ���� ����(46.292 %)

< ���� >
��� A�� N�� ��¥ ����� �Ƿ���, N�� A�� ����̰�, A�� 1�� N�� �ƴ� ���̴�. 
� �� N�� ��¥ ����� ��� �־��� ��, N�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
ù° �ٿ� N�� ��¥ ����� ������ �־�����. �� ������ 50���� �۰ų� ���� �ڿ����̴�. ��° �ٿ��� N�� ��¥ ����� �־�����. 
1,000,000���� �۰ų� ����, 2���� ũ�ų� ���� �ڿ����̰�, �ߺ����� �ʴ´�.

< ��� >
ù° �ٿ� N�� ����Ѵ�. N�� �׻� 32��Ʈ ��ȣ�ִ� ������ ǥ���� �� �ִ�.

< �˰��� �з� >
- ����

*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{	
	int real_divisor_num; // ��¥ ����� ����
	int real_divisor[50];

	cin >> real_divisor_num;

	for (int i = 0; i < real_divisor_num; i++)
		cin >> real_divisor[i];

	sort(real_divisor, real_divisor + real_divisor_num); // ��¥ ����� �迭�� ������������ ����
	
	if (real_divisor_num == 1) // ��¥ ����� �ϳ��� ���
		cout << real_divisor[0] * real_divisor[0] << endl;

	else cout << real_divisor[0] * real_divisor[real_divisor_num - 1] << endl; // ��¥ ����� ���� ���� ���
}