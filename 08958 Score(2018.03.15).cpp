/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 4 MS)
- �޸� ����(128 MB / 1988 KB)
- ������ Ǭ ������ ���� ����(57.895 %)

< ���� >
There is an objective test result such as ��OOXXOXXOOO��. 
An ��O�� means a correct answer of a problem and an ��X�� means a wrong answer. 
The score of each problem of this test is calculated by itself 
and its just previous consecutive ��O��s only when the answer is correct. 
For example, the score of the 10th problem is 3 that is obtained by itself and its two previous consecutive ��O��s.
Therefore, the score of ��OOXXOXXOOO�� is 10 which is calculated by ��1+2+0+0+1+0+0+1+2+3��.
You are to write a program calculating the scores of test results.

< �Է� >
Your program is to read from standard input. The input consists of T test cases. 
The number of test cases T is given in the first line of the input. 
Each test case starts with a line containing a string composed by ��O�� and ��X�� and 
the length of the string is more than 0 and less than 80. There is no spaces between ��O�� and ��X��.

< ��� >
Your program is to write to standard output. 
Print exactly one line for each test case. The line is to contain the score of the test case.

< ��ó >
ACM-ICPC > Regionals > Asia > Korea > Asia Regional - Seoul 2005 A��

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int case_num;
	int index, accum_score; // �� ��°�� O�� �������� ��Ÿ���� ������ ������ �Ѱ��� ��Ÿ���� ����
	string quiz_result;

	cin >> case_num;

	for (int i = 0; i < case_num; i++)
	{
		cin >> quiz_result;

		accum_score = 0;
		index = 1;

		for (int j = 0; j < quiz_result.length(); j++)
		{
			if (quiz_result[j] == 'O')
			{
				if (j == 0 || quiz_result[j - 1] == 'O') // �� ���� O�̰ų� ���ӵ� O�� ���� ���
				{
					accum_score += index;
					index++;
				}

				else // O�� �տ� X�� ������ ���
				{
					index = 1;
					accum_score += index;
					index++;
				}
			}

			else index = 1; // X�� ��� index �ʱ�ȭ
		}

		cout << accum_score << endl;
	}
}