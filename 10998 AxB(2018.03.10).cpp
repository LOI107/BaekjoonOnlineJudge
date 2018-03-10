/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(256 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(78.760 %)

< 문제 >
두 정수 A와 B를 입력받은 다음, A*B를 출력하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 A와 B가 주어진다. (0 < A,B < 10)

< 출력 >
첫째 줄에 A*B를 출력한다.

< 알고리즘 분류 >
- 사칙연산

*/

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;
	cout << a * b << endl;
}