/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 36 MS)
- 메모리 제한(128 MB / 4880 KB)
- 문제를 푼 전원의 정답 비율(22.092 %)

< 문제 >
영어 대소문자와 띄어쓰기만으로 이루어진 문장이 주어진다. 이 문장에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오.

< 입력 >
첫 줄에 영어 대소문자와 띄어쓰기로 이루어진 문장이 주어진다. 이 문장의 길이는 1,000,000을 넘지 않는다. 
단어는 띄어쓰기 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다.

< 출력 >
첫째 줄에 단어의 개수를 출력한다.

< 알고리즘 분류 >
- 문자열 처리

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int blank = 0;
	string str;

	getline(cin, str);

	for (int i = 0; i < str.length(); i++) // 모든 빈칸의 개수를 세고 +1하면 단어의 개수
	{
		if ((i == 0 || i == str.length() - 1) && str[i] == ' ') // 맨 앞이나 맨 끝에 나오는 빈칸은 생략
			blank--;

		if (str[i] == ' ') 
			blank++;
	}

	if (str.length() == 1 && str[0] == ' ') // 빈칸만 있을 경우
		blank = -1;

	cout << ++blank << endl;
}