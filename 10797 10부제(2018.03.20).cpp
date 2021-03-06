/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(256 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(81.656 %)

< 문제 >
서울시는 6월 1일부터 교통 혼잡을 막기 위해서 자동차 10부제를 시행한다. 
자동차 10부제는 자동차 번호의 일의 자리 숫자와 날짜의 일의 자리 숫자가 일치하면 해당 자동차의 운행을 금지하는 것이다. 
예를 들어, 자동차 번호의 일의 자리 숫자가 7이면 7일, 17일, 27일에 운행하지 못한다. 
또한, 자동차 번호의 일의 자리 숫자가 0이면 10일, 20일, 30일에 운행하지 못한다.
여러분들은 일일 경찰관이 되어 10부제를 위반하는 자동차의 대수를 세는 봉사활동을 하려고 한다. 
날짜의 일의 자리 숫자가 주어지고 5대의 자동차 번호의 일의 자리 숫자가 주어졌을 때 위반하는 자동차의 대수를 출력하면 된다.

< 입력 >
첫 줄에는 날짜의 일의 자리 숫자가 주어지고 두 번째 줄에는 5대의 자동차 번호의 일의 자리 숫자가 주어진다. 
날짜와 자동차의 일의 자리 숫자는 모두 0에서 9까지의 정수 중 하나이다.

< 출력 >
주어진 날짜와 자동차의 일의 자리 숫자를 보고 10부제를 위반하는 차량의 대수를 출력한다.

< 출처 >
Olympiad > 한국정보올림피아드시?도지역본선 > 지역본선 2015 > 초등부 1번

< 알고리즘 분류 >
- 구현

*/

#include <iostream>

using namespace std;

int main(void)
{
	int ban_num, car_num;
	int count = 0;

	cin >> ban_num;

	for (int i = 0; i < 5; i++)
	{
		cin >> car_num;

		if (ban_num == car_num)
			count++;
	}

	cout << count << endl;
}