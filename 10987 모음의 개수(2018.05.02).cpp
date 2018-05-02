/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(256 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(78.037 %)

< 문제 >
알파벳 소문자로만 이루어진 단어가 주어진다. 이 때, 모음(a, e, i, o, u)의 개수를 출력하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 단어가 주어진다. 단어의 길이는 1보다 크거나 같고, 100보다 작거나 같으며, 알파벳 소문자로만 이루어져 있다.

< 출력 >
첫째 줄에 모음의 개수를 출력한다.

< 알고리즘 분류 >
- 문자열 처리

*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int vowelCount = 0; // 모음의 개수
	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			vowelCount++;
	}

	cout << vowelCount << endl;
}