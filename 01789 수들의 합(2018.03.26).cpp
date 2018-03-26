/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(40.676 %)

< 문제 >
서로 다른 N개의 자연수의 합이 S라고 한다. S를 알 때, 자연수 N의 최대값은 얼마일까?

< 입력 >
첫째 줄에 자연수 S(1≤S≤4,294,967,295)가 주어진다.

< 출력 >
첫째 줄에 자연수 N의 최대값을 출력한다.

< 알고리즘 분류 >
- 수학
- 구현

*/

#include <iostream>

using namespace std;

int main(void)
{
	long long num, sum = 0;

	int count = 0;

	cin >> num;

	for (long long i = 1; ; i++) // 1부터 합을 더해서 num보다 작은 수의 합을 찾고 같거나 넘을 경우 종료
	{
		sum = sum + i;

		count++;

		if (sum > num)
		{
			count--;
			break;
		}
	}

	cout << count << endl;

	return 0;
}