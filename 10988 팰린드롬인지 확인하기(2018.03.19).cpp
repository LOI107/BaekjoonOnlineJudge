/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(256 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(68.612 %)

< 문제 >
알파벳 소문자로만 이루어진 단어가 주어진다. 이 때, 이 단어가 팰린드롬인지 아닌지 확인하는 프로그램을 작성하시오.
팰린드롬이란 앞으로 읽을 때와 거꾸로 읽을 때 똑같은 단어를 말한다.
level, noon은 팰린드롬이고, baekjoon, online, judge는 팰린드롬이 아니다.

< 입력 >
첫째 줄에 단어가 주어진다. 단어의 길이는 1보다 크거나 같고, 100보다 작거나 같으며, 알파벳 소문자로만 이루어져 있다.

< 출력 >
첫째 줄에 팰린드롬이면 1, 아니면 0을 출력한다.

< 알고리즘 분류 >
- 문자열 처리

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{	
	string word, reverse_word;

	cin >> word;

	reverse_word = word;

	reverse(reverse_word.begin(), reverse_word.end());

	if (word == reverse_word) // 원래의 단어와 뒤집은 단어가 같다면 원래 단어는 팰린드롬
		cout << "1" << endl;

	else cout << "0" << endl;
}