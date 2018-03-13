/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(79.347 %)

< 문제 >
알파벳으로만 이루어진 단어를 입력받아, 그 길이를 출력하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.

< 출력 >
첫째 줄에 입력으로 주어진 단어의 길이를 출력한다.

< 알고리즘 분류 >
- 문자열 처리

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;

	cin >> word;

	cout << word.length() << endl;
}