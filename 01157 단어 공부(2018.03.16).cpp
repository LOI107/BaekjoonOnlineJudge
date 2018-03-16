/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 40 MS)
- 메모리 제한(128 MB / 4884 KB)
- 문제를 푼 전원의 정답 비율(33.231 %)

< 문제 >
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 
단, 대문자와 소문자를 구분하지 않는다.

< 입력 >
첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

< 출력 >
첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 
단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.

< 알고리즘 분류 >
- 문자열 처리

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{	
	char max_alphabet; // 가장 많이 나오는 알파벳
	int alphabet[26], temp[26]; // 알파벳별로 개수를 저장하는 배열
	string word;

	cin >> word;

	for (int i = 0; i < 26; i++)
		alphabet[i] = 0;

	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z') // 모두 대문자로 변환
			word[i] -= 'a' - 'A';

		alphabet[word[i] - 'A']++;  // 해당하는 알파벳의 개수를 저장하는 배열의 수를 증가
	}

	for (int i = 0; i < 26; i++)
		temp[i] = alphabet[i];

	sort(temp, temp + 26); // 임시적인 배열을 오름차순으로 정렬

	if (temp[25] == temp[24]) // 최대로 많이 나온 알파벳이 두 개 이상일 경우
		max_alphabet = '?';

	else
	{
		for (int i = 0; i < 26; i++)
		{
			if (alphabet[i] == temp[25]) // 최대로 많이 나온 알파벳을 검색
				max_alphabet = 'A' + i;
		}
	}

	cout << max_alphabet << endl;
}