/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 0 MS)
- �޸� ����(128 MB / 1984 KB)
- ������ Ǭ ������ ���� ����(26.754 %)

< ���� >
Mirko works in a sugar factory as a delivery boy. He has just received an order: 
he has to deliver exactly N kilograms of sugar to a candy store on the Adriatic coast. 
Mirko can use two types of packages, the ones that contain 3 kilograms, and the ones with 5 kilograms of sugar.
Mirko would like to take as few packages as possible. 
For example, if he has to deliver 18 kilograms of sugar, he could use six 3-kilogram packages. 
But, it would be better to use three 5-kilogram packages, and one 3-kilogram package, resulting in the total of four packages.
Help Mirko by finding the minimum number of packages required to transport exactly N kilograms of sugar.

< �Է� >
The first and only line of input contains one integer N (3 �� N �� 5000).

< ��� >
The first and only line of output should contain the minimum number of packages Mirko has to use. 
If it is impossible to deliver exactly N kilograms, output -1.

< ��ó >
Contest > Croatian Open Competition in Informatics > COCI 2010/2011 > Contest #7 1��

< �˰��� �з� >
- ����
- ����

*/

#include <iostream>

using namespace std;

int main()
{	
	bool not_div = 1; // ������������ �� �����������ĸ� ��Ÿ��(����� �� ������)
	int sugar_kilo, package_3, package_5, min_package;

	cin >> sugar_kilo;

	for (package_3 = 0; package_3 < 2000; package_3++)
	{
		for (package_5 = 0; package_5 <= 1000; package_5++) // 5ų�ΰ� �������� package ���ڰ� �پ��Ƿ� 5ų�θ� ���� Ȯ��
		{
			if (5 * package_5 + 3 * package_3 == sugar_kilo) // 5ų�ΰ� �ִ��̰� �������� 3ų�η� �������� ��
			{
				min_package = package_3 + package_5;
				not_div = 0;
				break;
			}
		}

		if (not_div == 0) // 5ų�ΰ� �ִ��̸� �������� 3ų�η� �������� ��� �� �̻� ������ �ʿ����
			break;
	}
	
	if (not_div == 1) // ���������� �ʾ��� ���
		min_package = -1;

	cout << min_package << endl;
} 