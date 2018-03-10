/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(35.154 %)

< 문제 >
A/B를 계산하시오.

< 입력 >
첫째 줄에 A와 B가 주어진다. (0 < A,B < 10)

< 출력 >
첫째 줄에 A/B를 출력한다. 절대/상대 오차는 10^-9 까지 허용한다.

< 알고리즘 분류 >
- 사칙연산
- 수학

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