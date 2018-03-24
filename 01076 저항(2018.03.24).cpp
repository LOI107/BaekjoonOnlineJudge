/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(39.233 %)

< 문제 >
전자 제품에는 저항이 들어간다. 저항은 색 3개를 이용해서 그 저항이 몇 옴인지 나타낸다.
처음 색 2개는 저항의 값이고, 마지막 색은 곱해야 하는 값이다.
저항의 값은 다음 표를 이용해서 구한다.

색	    값	곱
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

예를 들어, 저항에 색이 yellow, violet, red였다면 저항의 값은 4,700이 된다.

< 입력 >
첫째 줄에 첫번째 색, 둘째 줄에 두번째 색, 셋째 줄에 세번째 색이 주어진다. 색은 모두 위의 표에 써 있는 색만 주어진다.

< 출력 >
첫째 줄에 입력을 주어진 저항의 저항값을 출력한다.

< 알고리즘 분류 >
- 수학

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