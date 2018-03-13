/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(256 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(83.397 %)

< 문제 >
알파벳 소문자, 대문자, 숫자 0-9중 하나가 주어졌을 때, 주어진 글자의 아스키 코드값을 출력하는 프로그램을 작성하시오.

< 입력 >
알파벳 소문자, 대문자 숫자 0-9 중 하나가 첫째 줄에 주어진다.

< 출력 >
입력으로 주어진 글자의 아스키 코드 값을 출력한다.

< 알고리즘 분류 >
- 문자열 처리

*/

#include <iostream>

using namespace std;

int main()
{
	char input;

	cin >> input;

	cout << (int)input << endl; // char형을 int형으로 형변환
}