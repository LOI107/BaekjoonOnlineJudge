/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(256 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(44.696 %)

< 문제 >
N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.

< 출력 >
입력으로 주어진 숫자 N개의 합을 출력한다.

< 알고리즘 분류 >
- 출력

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, sum = 0;
	string str;

	cin >> n >> str;

	for (int i = 0; i < n; i++) // 문자열 하나하나씩 확인하며 더하기
		sum += str[i] - '0';

	cout << sum << endl;
}