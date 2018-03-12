/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(256 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(62.291 %)

< 문제 >
(A+B)%C는 (A%C + B%C)%C 와 같을까?
(A×B)%C는 (A%C × B%C)%C 와 같을까?
세 수 A, B, C가 주어졌을 때, 위의 네가지 값을 구하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000)

< 출력 >
첫째 줄에 (A+B)%C, 둘째 줄에 (A%C + B%C)%C, 셋째 줄에 (A×B)%C, 넷째 줄에 (A%C × B%C)%C를 출력한다.

< 알고리즘 분류 >
- 사칙연산
- 나머지 연산

*/

#include <iostream>

using namespace std;

int main()
{	
	int a, b, c;

	cin >> a >> b >> c;

	cout << (a + b) % c << endl;
	cout << (a % c + b % c) % c << endl;
	cout << (a * b) % c << endl;
	cout << (a % c * b % c) % c << endl;
} 