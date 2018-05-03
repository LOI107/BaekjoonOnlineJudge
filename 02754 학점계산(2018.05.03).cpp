/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(62.394 %)

< 문제 >
어떤 사람의 C언어 성적이 주어졌을 때, 평점은 몇 점인지 출력하는 프로그램을 작성하시오.

A+: 4.3, A0: 4.0, A-: 3.7
B+: 3.3, B0: 3.0, B-: 2.7
C+: 2.3, C0: 2.0, C-: 1.7
D+: 1.3, D0: 1.0, D-: 0.7
F: 0.0

< 입력 >
첫째 줄에 C언어 성적이 주어진다. 성적은 문제에서 설명한 13가지 중 하나이다.

< 출력 >
첫째 줄에 C언어 평점을 출력한다.

*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(void)
{
	string gradeChar;
	double grade = 0.0;
	
	cin >> gradeChar;

	switch (gradeChar[0]) // 큰 학점에 대한 학점 계산
	{
	case 'A':
		grade = grade + 4;
		break;
	case 'B':
		grade = grade + 3;
		break;
	case 'C':
		grade = grade + 2;
		break;
	case 'D':
		grade = grade + 1;
		break;
	}

	switch (gradeChar[1]) // 세부 학점에 대한 학점 계산
	{
	case '+':
		grade = grade + 0.3;
		break;
	case '-':
		grade = grade - 0.3;
		break;
	}

	cout << fixed;
	cout << setprecision(1) << grade << endl;
}