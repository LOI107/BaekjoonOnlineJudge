/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 0 MS)
- �޸� ����(128 MB / 1984 KB)
- ������ Ǭ ������ ���� ����(85.766 %)

< ���� >
The number S is called the mean of two numbers R1 and R2 if S is equal to (R1+R2)/2. 
Mirko's birthday present for Slavko was two integers R1 and R2. 
Slavko promptly calculated their mean which also happened to be an integer but then lost R2! Help Slavko restore R2.

< �Է� >
The first and only line of input contains two integers R1 and S, both between -1000 and 1000.

< ��� >
Output R2 on a single line.

< ��ó >
Contest > Croatian Open Competition in Informatics > COCI 2006/2007 > Contest #2 1��

< �˰��� �з� >
- ����

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