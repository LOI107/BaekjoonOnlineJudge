/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 4 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(41.805 %)

< 문제 >
It is said that 90% of frosh expect to be above average in their class. You are to provide a reality check.

< 입력 >
The first line of standard input contains an integer C, the number of test cases. C data sets follow. 
Each data set begins with an integer, N, the number of people in the class (1 <= N <= 1000). 
N integers follow, separated by spaces or newlines, 
each giving the final grade (an integer between 0 and 100) of a student in the class.

< 출력 >
For each case you are to output a line giving the percentage of students whose grade is above average, 
rounded to 3 decimal places.

< 출처 >
Contest > Waterloo's local Programming Contests > 28 September, 2002 D번

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int case_num, student_num;
	int score[1000]; // 학생들 점수를 저장

	cin >> case_num;

	for (int i = 0; i < case_num; i++)
	{
		cin >> student_num;

		int over_student = 0; // 평균을 넘는 학생수
		int sum = 0; // 점수 총합
		
		for (int j = 0; j < student_num; j++)
		{
			cin >> score[j];
			sum += score[j];
		}

		for (int j = 0; j < student_num; j++) // 평균을 넘는 학생 수를 계산
		{
			if (score[j] > (sum / student_num))
				over_student++;
		}

		cout << fixed;
		cout << setprecision(3) << (double)over_student / student_num * 100 << "%" << endl;
	}
}