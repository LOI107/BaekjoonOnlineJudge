/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 4 MS)
- 메모리 제한(256 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(62.336 %)

< 문제 >
두 수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 테스트 케이스의 개수 T가 주어진다.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A,B < 10)

< 출력 >
각 테스트 케이스마다 A+B를 출력한다.

< 알고리즘 분류 >
- 사칙연산

*/

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int case_num;

	cin >> case_num;

	for (int i = 0; i < case_num; i++)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}
}