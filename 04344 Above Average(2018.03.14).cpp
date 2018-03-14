/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 4 MS)
- �޸� ����(128 MB / 1988 KB)
- ������ Ǭ ������ ���� ����(41.805 %)

< ���� >
It is said that 90% of frosh expect to be above average in their class. You are to provide a reality check.

< �Է� >
The first line of standard input contains an integer C, the number of test cases. C data sets follow. 
Each data set begins with an integer, N, the number of people in the class (1 <= N <= 1000). 
N integers follow, separated by spaces or newlines, 
each giving the final grade (an integer between 0 and 100) of a student in the class.

< ��� >
For each case you are to output a line giving the percentage of students whose grade is above average, 
rounded to 3 decimal places.

< ��ó >
Contest > Waterloo's local Programming Contests > 28 September, 2002 D��

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int case_num, student_num;
	int score[1000]; // �л��� ������ ����

	cin >> case_num;

	for (int i = 0; i < case_num; i++)
	{
		cin >> student_num;

		int over_student = 0; // ����� �Ѵ� �л���
		int sum = 0; // ���� ����
		
		for (int j = 0; j < student_num; j++)
		{
			cin >> score[j];
			sum += score[j];
		}

		for (int j = 0; j < student_num; j++) // ����� �Ѵ� �л� ���� ���
		{
			if (score[j] > (sum / student_num))
				over_student++;
		}

		cout << fixed;
		cout << setprecision(3) << (double)over_student / student_num * 100 << "%" << endl;
	}
}