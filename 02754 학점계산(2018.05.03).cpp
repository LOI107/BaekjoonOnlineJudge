/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 0 MS)
- �޸� ����(128 MB / 1988 KB)
- ������ Ǭ ������ ���� ����(62.394 %)

< ���� >
� ����� C��� ������ �־����� ��, ������ �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

A+: 4.3, A0: 4.0, A-: 3.7
B+: 3.3, B0: 3.0, B-: 2.7
C+: 2.3, C0: 2.0, C-: 1.7
D+: 1.3, D0: 1.0, D-: 0.7
F: 0.0

< �Է� >
ù° �ٿ� C��� ������ �־�����. ������ �������� ������ 13���� �� �ϳ��̴�.

< ��� >
ù° �ٿ� C��� ������ ����Ѵ�.

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

	cout << fixed;
	cout << setprecision(1) << grade << endl;
}