/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(512 MB / 2172 KB)
- 문제를 푼 전원의 정답 비율(64.042 %)

< 문제 >
자연수 N이 주어졌을 때, 2의 제곱수면 1을 아니면 0을 출력하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 N(1 ≤ N ≤ 2^30)이 주어진다.

< 출력 >
N이 2의 제곱수면 1을 아니면 0을 출력하는 프로그램을 작성하시오.

*/

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int num, check = 0;

	cin >> num;

	for (int i = 0; i <= 30; i++)
	{
		if (num == (int)((pow(2, i) + 1e-6))) // 하나씩 넣어보며 2의 제곱수인지를 확인
			check = 1;
	}

	cout << check << endl;
}