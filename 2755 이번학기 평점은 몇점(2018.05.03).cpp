/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(32.602 %)

< 문제 >
최백준이 이번 학기에 들은 과목과 학점 그리고 성적이 주어졌을 때, 평균 평점을 계산하는 프로그램을 작성하시오.
성적은 A+~F까지 총 13개가 있다.

A+: 4.3, A0: 4.0, A-: 3.7
B+: 3.3, B0: 3.0, B-: 2.7
C+: 2.3, C0: 2.0, C-: 1.7
D+: 1.3, D0: 1.0, D-: 0.7
F: 0.0

평균 평점은 각 과목의 학점*성적을 모두 더한 뒤에, 총 학점으로 나누면 된다.

< 입력 >
첫째 줄에, 백준이가 이번 학기에 들은 과목 수가 주어진다. 둘째 줄부터 N개의 줄에 각 과목의 과목명, 학점, 성적이 주어진다. 
과목명은 알파벳 소문자와 숫자, 그리고 밑줄 (_)로만 이루어져 있으며, 최대 100글자이고, 학점은 1보다 크거나 같고, 
3보다 작거나 같은 자연수이다. 성적은 문제에 설명한 13가지 중 하나이다.

< 출력 >
첫째 줄에 평균 평점을 소수점 셋째 자리에서 반올림해서 둘째 자리까지 출력한다. (평균 평점이 1.5이면 1.50을 출력한다.)

*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

float return_score(string gradeChar)
{
	float grade = 0.0;

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

	return grade;
}

int main(void)
{
	int subject_num;
	int score;
	string subject;
	string gradeChar;
	float all_subject_score = 0;
	float all_score = 0;

	cin >> subject_num;

	for (int i = 0; i < subject_num; i++)
	{
		cin >> subject >> score >> gradeChar;
		all_subject_score += score;
		all_score += score * return_score(gradeChar);
	}

	cout << fixed;
	cout << setprecision(2) << all_score / all_subject_score << endl;
}