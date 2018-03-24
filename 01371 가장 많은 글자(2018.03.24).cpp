/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(40.456 %)

< 문제 >
영어에서는 어떤 글자가 다른 글자보다 많이 쓰인다. 에를 들어, 긴 글에서 약 12.31% 글자는 e이다.
어떤 글이 주어졌을 때, 가장 많이 나온 글자를 출력하는 프로그램을 작성하시오.

< 입력 >
첫째 줄부터 글의 문장이 주어진다. 글은 최대 5000글자로 구성되어 있고, 공백, 알파벳 소문자, 엔터로만 이루어져 있다. 
그리고 적어도 하나의 알파벳이 있다.

< 출력 >
첫째 줄에 가장 많이 나온 문자를 출력한다. 여러 개일 경우에는 알파벳 순으로 앞서는 것부터 모두 공백없이 출력한다.

< 알고리즘 분류 >
- 문자열 처리

*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	char ch;
	int max = 0;
	int alphabet[26]{ 0, };

	while (scanf("%c", &ch) != -1) // 한 글자씩 입력받아서 해당하는 알파벳의 수를 count하는 배열을 증가
	{
		if (ch >= 'a' && ch <= 'z')
			alphabet[ch - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (max < alphabet[i])
			max = alphabet[i];
	}

	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] == max)
			cout << (char)('a' + i);
	}

	cout << endl;
}