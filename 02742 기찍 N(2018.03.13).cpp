/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 12 MS)
- 메모리 제한(128 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(66.033 %)

< 문제 >
자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.

< 출력 >
첫째 줄부터 N번째 줄 까지 차례대로 출력한다.

< 알고리즘 분류 >
- 출력

*/

#include <iostream>

using namespace std;

int main()
{
	int input, n;

	cin >> input;

	n = input;

	for (int i = 0; i < n; i++)
		cout << input-- << '\n'; // 하나씩 줄여가기
}