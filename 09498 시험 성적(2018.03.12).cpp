/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(128 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(64.288 %)

< 문제 >
시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 자연수이다.

< 출력 >
시험 성적을 출력한다.

< 알고리즘 분류 >
- 구현

*/

#include <iostream>

using namespace std;

int main()
{	
	int score;
	char grade;

	cin >> score;

	switch (score / 10)
	{
	case 10: // 100점일 경우
		grade = 'A';
		break;
	case 9: // 90점대일 경우
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default: // 60점 미만일 경우
		grade = 'F';
		break;
	}
	
	cout << grade << endl;
} 