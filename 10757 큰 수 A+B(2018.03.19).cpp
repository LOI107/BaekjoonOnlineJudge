/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 4 MS)
- 메모리 제한(256 MB / 1992 KB)
- 문제를 푼 전원의 정답 비율(41.929 %)

< 문제 >
A+B를 계산하시오.

< 입력 >
첫째 줄에 A와 B가 주어진다. (0 < A,B < 10^10000)

< 출력 >
첫째 줄에 A+B를 출력한다.

< 알고리즘 분류 >
- 사칙연산
- 큰 수

*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{	
	bool over_10 = false; // 두 수의 특정 자리의 합이 10을 넘을 경우 올릴 수가 있으므로 true
	string a, b, sum = "";
	string temp;

	cin >> a >> b;

	temp = b;

	if (b.length() > a.length()) // b가 자리수가 더 길 경우 b를 a로 바꿈
	{
		temp = a;
		a = b;
		b = temp;
	}

	for (int i = 0; i < a.length() - temp.length(); i++) // b의 앞에 0을 붙여서 자리수를 맞춰줌
		b = '0' + b;

	for (int i = a.length() - 1; i >= 0; i--) // 평소 덧셈을 하듯이 뒤부터 더해감
	{
		if (a[i] - '0' + b[i] - '0' >= 10) // 두 수의 특정 자리의 합이 10을 넘을 경우
		{
			if (over_10 == true) // 이미 전의 자리의 합이 10을 넘어 올라온 수가 있을 경우
				sum = (char)((a[i] - '0' + b[i] - '0') % 10 + '1') + sum;

			else sum = (char)((a[i] - '0' + b[i] - '0') % 10 + '0') + sum; // 올라온 수가 없을 경우

			over_10 = true;
		}

		else // 두 수의 특정 자리의 합이 10을 못 넘을 경우
		{
			if (over_10 == true) // 올라온 수가 있을 경우
			{
				sum = (char)((a[i] - '0' + b[i] - '0' + 1) % 10 + '0') + sum;
				
				if (a[i] - '0' + b[i] - '0' == 9) // 두 수의 특정 자리의 합이 9인데 올라온 수가 있으면 올라갈 수가 생김
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

	if (over_10 == true) // a와 b의 맨 앞 자리수의 합이 10을 넘었을 경우
		sum = '1' + sum;

	cout << sum << endl;
}