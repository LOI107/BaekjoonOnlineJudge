/*

< �⺻���� / �� �ҽ� >
- �ð� ����(2 �� / 0 MS)
- �޸� ����(128 MB / 1988 KB)
- ������ Ǭ ������ ���� ����(39.233 %)

< ���� >
���� ��ǰ���� ������ ����. ������ �� 3���� �̿��ؼ� �� ������ �� ������ ��Ÿ����.
ó�� �� 2���� ������ ���̰�, ������ ���� ���ؾ� �ϴ� ���̴�.
������ ���� ���� ǥ�� �̿��ؼ� ���Ѵ�.

��	    ��	��
black	0	1
brown	1	10
red	    2	100
orange	3	1000
yellow	4	10000
green	5	100000
blue	6	1000000
violet	7	10000000
grey	8	100000000
white	9	1000000000

���� ���, ���׿� ���� yellow, violet, red���ٸ� ������ ���� 4,700�� �ȴ�.

< �Է� >
ù° �ٿ� ù��° ��, ��° �ٿ� �ι�° ��, ��° �ٿ� ����° ���� �־�����. ���� ��� ���� ǥ�� �� �ִ� ���� �־�����.

< ��� >
ù° �ٿ� �Է��� �־��� ������ ���װ��� ����Ѵ�.

< �˰��� �з� >
- ����

*/

#include <iostream>
#include <string>

using namespace std;

long long colorToNum(string color, int i)
{
	if (color == "black")
	{
		if (i == 1 || i == 2)
			return 0;
		else return 1;
	}

	else if (color == "brown")
	{
		if (i == 1 || i == 2)
			return 1;
		else return 10;
	}

	else if (color == "red")
	{
		if (i == 1 || i == 2)
			return 2;
		else return 100;
	}

	else if (color == "orange")
	{
		if (i == 1 || i == 2)
			return 3;
		else return 1000;
	}

	else if (color == "yellow")
	{
		if (i == 1 || i == 2)
			return 4;
		else return 10000;
	}

	else if (color == "green")
	{
		if (i == 1 || i == 2)
			return 5;
		else return 100000;
	}

	else if (color == "blue")
	{
		if (i == 1 || i == 2)
			return 6;
		else return 1000000;
	}

	else if (color == "violet")
	{
		if (i == 1 || i == 2)
			return 7;
		else return 10000000;
	}

	else if (color == "grey")
	{
		if (i == 1 || i == 2)
			return 8;
		else return 100000000;
	}

	else if (color == "white")
	{
		if (i == 1 || i == 2)
			return 9;
		else return 1000000000;
	}
}

int main(void)
{
	long long num[3];
	string color;

	for (int i = 1; i <= 3; i++)
	{
		cin >> color;

		num[i - 1] = colorToNum(color, i);
	}

	cout << (num[0] * 10 + num[1]) * num[2] << endl;
}