/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(38.352 %)

< 문제 >
N으로 나누었을 때 나머지와 몫이 같은 모든 자연수의 합을 구하는 프로그램을 작성하시오. 
예를 들어 N=3일 때, 나머지와 몫이 모두 같은 자연수는 4와 8 두 개가 있으므로, 그 합은 12이다.

< 입력 >
첫째 줄에 2,000,000 이하의 자연수 N이 주어진다.

< 출력 >
첫 줄에 구하고자 하는 수를 출력한다.

< 알고리즘 분류 >
- 수학

*/

#include <iostream>

using namespace std;

int main(void)
{
	long long num, sum = 0;

	cin >> num;

	for (long long i = 1; i < num; i++)
		sum += num * i + i;

	cout << sum << endl;
}