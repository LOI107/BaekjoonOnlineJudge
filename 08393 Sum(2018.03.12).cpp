/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(128 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(73.921 %)

< 문제 >
John got a bad mark in math. The teacher gave him another task. 
John is to write a program which computes the sum of integers from 1 to n. 
If he manages to present a correct program, the bad mark will be cancelled.

Write a program which:

- reads the number n from the standard input,
- computes the sum of integers from 1 to n,
- writes the answer to the standard output.

< 입력 >
The first and only line of the standard input contains one integer n (1 ≤ n ≤ 10000).

< 출력 >
One integer is to be written to the standard output. This integer should be the sum of integers from 1 to n.

< 출처 >
Contest > Algorithmic Engagements > PA 2006 0-1번

*/

#include <iostream>

using namespace std;

int main()
{	
	int n, sum;

	cin >> n;

	sum = n * (n + 1) / 2;

	cout << sum << endl;
} 