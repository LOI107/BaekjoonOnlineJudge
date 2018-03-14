/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(43.031 %)

< 문제 >
오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 이를 알아내는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 빈 칸을 사이에 두고 x(1≤x≤12)와 y(1≤y≤31)이 주어진다. 
참고로 2007년에는 1, 3, 5, 7, 8, 10, 12월은 31일까지, 4, 6, 9, 11월은 30일까지, 2월은 28일까지 있다.

< 출력 >
첫째 줄에 x월 y일이 무슨 요일인지에 따라 SUN, MON, TUE, WED, THU, FRI, SAT중 하나를 출력한다.

< 알고리즘 분류 >
- 구현

*/

#include <iostream>

using namespace std;

int main()
{
	int month, day;
	int days_from1 = 0; // 1월 1일부터 입력한 날짜까지의 차이

	cin >> month >> day;

	switch (month) // 입력한 달의 전달까지의 날짜들을 한 달 단위로 모두 더해줌
	{
	case 12:
		days_from1 += 30;
	case 11:
		days_from1 += 31;
	case 10:
		days_from1 += 30;
	case 9:
		days_from1 += 31;
	case 8:
		days_from1 += 31;
	case 7:
		days_from1 += 30;
	case 6:
		days_from1 += 31;
	case 5:
		days_from1 += 30;
	case 4:
		days_from1 += 31;
	case 3:
		days_from1 += 28;
	case 2:
		days_from1 += 31;
	case 1:
	
	default:
		break;
	}

	days_from1 += day;

	switch (days_from1 % 7) // 요일을 결정
	{
	case 0:
		cout << "SUN" << endl;
		break;
	case 1:
		cout << "MON" << endl;
		break;
	case 2:
		cout << "TUE" << endl;
		break;
	case 3:
		cout << "WED" << endl;
		break;
	case 4:
		cout << "THU" << endl;
		break;
	case 5:
		cout << "FRI" << endl;
		break;
	case 6:
		cout << "SAT" << endl;
		break;
	}
}