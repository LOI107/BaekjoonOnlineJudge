/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(128 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(85.766 %)

< 문제 >
The number S is called the mean of two numbers R1 and R2 if S is equal to (R1+R2)/2. 
Mirko's birthday present for Slavko was two integers R1 and R2. 
Slavko promptly calculated their mean which also happened to be an integer but then lost R2! Help Slavko restore R2.

< 입력 >
The first and only line of input contains two integers R1 and S, both between -1000 and 1000.

< 출력 >
Output R2 on a single line.

< 출처 >
Contest > Croatian Open Competition in Informatics > COCI 2006/2007 > Contest #2 1번

< 알고리즘 분류 >
- 수학

*/

#include <iostream>

using namespace std;

int main()
{
	int r1, r2, avg;

	cin >> r1 >> avg;

	r2 = avg + (avg - r1);

	cout << r2 << endl;
}