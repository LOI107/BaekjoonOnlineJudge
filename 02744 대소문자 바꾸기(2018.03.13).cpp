/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(78.197 %)

< 문제 >
영어 소문자와 대문자로 이루어진 단어를 입력받은 뒤, 대문자는 소문자로, 소문자는 대문자로 바꾸어 출력하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.

< 출력 >
첫째 줄에 입력으로 주어진 단어에서 대문자는 소문자로, 소문자는 대문자로 바꾼 단어를 출력한다.

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;

	cin >> word;

	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z') // 소문자일 경우
			word[i] -= 'a' - 'A';
		else word[i] += 'a' - 'A'; // 대문자일 경우
	}

	cout << word << endl;
}