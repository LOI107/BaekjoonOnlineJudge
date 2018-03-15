/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(60.024 %)

< 문제 >
C major scale consists of 8 tones: c d e f g a b C. For this task we number the notes using numbers 1 through 8. 
The scale can be played ascending, from 1 to 8, descending, from 8 to 1, or mixed. 
Write a program that, given the sequence of notes, determines wether the scale was played ascending, descending or mixed.

< 입력 >
First and only line of input will contain 8 integers, from 1 to 8 inclusive. Each integer will appear exactley once in the input.

< 출력 >
In the first and only line of input print "descending" if the scale was played descending, 
"ascending" if the scale was played ascending and "mixed" if the scale was played mixed.

< 출처 >
Contest > Croatian Open Competition in Informatics > COCI 2009/2010 > Contest #1 1번

< 알고리즘 분류 >
- 배열

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool keeping; // 오름차순이나 내림차순을 그대로 유지하고 있는지를 확인
	int arr[8];
	string result;

	for (int i = 0; i < 8; i++)
		cin >> arr[i];

	for (int i = 0; i < 8; i++) // 오름차순인지를 확인
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

	if (keeping == false) // 내림차순인지를 확인
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

	if (keeping == false) // 오름차순도 내림차순도 아닐 경우
		result = "mixed";

	cout << result << endl;
}