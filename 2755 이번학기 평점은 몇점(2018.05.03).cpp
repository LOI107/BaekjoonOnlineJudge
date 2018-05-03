/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 0 MS)
- �޸� ����(128 MB / 1988 KB)
- ������ Ǭ ������ ���� ����(32.602 %)

< ���� >
�ֹ����� �̹� �б⿡ ���� ����� ���� �׸��� ������ �־����� ��, ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
������ A+~F���� �� 13���� �ִ�.

A+: 4.3, A0: 4.0, A-: 3.7
B+: 3.3, B0: 3.0, B-: 2.7
C+: 2.3, C0: 2.0, C-: 1.7
D+: 1.3, D0: 1.0, D-: 0.7
F: 0.0

��� ������ �� ������ ����*������ ��� ���� �ڿ�, �� �������� ������ �ȴ�.

< �Է� >
ù° �ٿ�, �����̰� �̹� �б⿡ ���� ���� ���� �־�����. ��° �ٺ��� N���� �ٿ� �� ������ �����, ����, ������ �־�����. 
������� ���ĺ� �ҹ��ڿ� ����, �׸��� ���� (_)�θ� �̷���� ������, �ִ� 100�����̰�, ������ 1���� ũ�ų� ����, 
3���� �۰ų� ���� �ڿ����̴�. ������ ������ ������ 13���� �� �ϳ��̴�.

< ��� >
ù° �ٿ� ��� ������ �Ҽ��� ��° �ڸ����� �ݿø��ؼ� ��° �ڸ����� ����Ѵ�. (��� ������ 1.5�̸� 1.50�� ����Ѵ�.)

*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

float return_score(string gradeChar)
{
	float grade = 0.0;

	switch (gradeChar[0]) // ū ������ ���� ���� ���
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

	switch (gradeChar[1]) // ���� ������ ���� ���� ���
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