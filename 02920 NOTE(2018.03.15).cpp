/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 0 MS)
- �޸� ����(128 MB / 1988 KB)
- ������ Ǭ ������ ���� ����(60.024 %)

< ���� >
C major scale consists of 8 tones: c d e f g a b C. For this task we number the notes using numbers 1 through 8. 
The scale can be played ascending, from 1 to 8, descending, from 8 to 1, or mixed. 
Write a program that, given the sequence of notes, determines wether the scale was played ascending, descending or mixed.

< �Է� >
First and only line of input will contain 8 integers, from 1 to 8 inclusive. Each integer will appear exactley once in the input.

< ��� >
In the first and only line of input print "descending" if the scale was played descending, 
"ascending" if the scale was played ascending and "mixed" if the scale was played mixed.

< ��ó >
Contest > Croatian Open Competition in Informatics > COCI 2009/2010 > Contest #1 1��

< �˰��� �з� >
- �迭

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool keeping; // ���������̳� ���������� �״�� �����ϰ� �ִ����� Ȯ��
	int arr[8];
	string result;

	for (int i = 0; i < 8; i++)
		cin >> arr[i];

	for (int i = 0; i < 8; i++) // �������������� Ȯ��
	{
		if (arr[i] == i + 1)
		{
			result = "ascending";
			keeping = true;
		}

		else
		{
			keeping = false;
			break;
		}
	}

	if (keeping == false) // �������������� Ȯ��
	{
		for (int i = 0; i < 8; i++)
		{
			if (arr[i] == 8 - i)
			{
				result = "descending";
				keeping = true;
			}

			else
			{
				keeping = false;
				break;
			}
		}
	}

	if (keeping == false) // ���������� ���������� �ƴ� ���
		result = "mixed";

	cout << result << endl;
}