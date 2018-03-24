/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(512 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(93.750 %)

< 문제 >
주어진 여러 개의 정수 중에서 양의 정수의 개수를 출력하는 프로그램을 작성하시오.

< 입력 >
첫 줄에 정수를 1개 이상 나열하고, 빈칸으로 구분한다.

< 출력 >
양의 정수의 개수를 출력

< 출처 >
University > 한양대 ERICA > 2017 ERICA Programming Contest League B (초보) A번

*/

#include <iostream>

using namespace std;

int main(void)
{
	int num, plus_num = 0;

	while (cin >> num)
	{
		if (num > 0)
			plus_num++;
	}

	cout << plus_num << endl;
}