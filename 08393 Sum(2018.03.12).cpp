/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 0 MS)
- �޸� ����(128 MB / 1984 KB)
- ������ Ǭ ������ ���� ����(73.921 %)

< ���� >
John got a bad mark in math. The teacher gave him another task. 
John is to write a program which computes the sum of integers from 1 to n. 
If he manages to present a correct program, the bad mark will be cancelled.

Write a program which:

- reads the number n from the standard input,
- computes the sum of integers from 1 to n,
- writes the answer to the standard output.

< �Է� >
The first and only line of the standard input contains one integer n (1 �� n �� 10000).

< ��� >
One integer is to be written to the standard output. This integer should be the sum of integers from 1 to n.

< ��ó >
Contest > Algorithmic Engagements > PA 2006 0-1��

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