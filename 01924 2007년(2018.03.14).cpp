/*

< �⺻���� / �� �ҽ� >
- �ð� ����(2 �� / 0 MS)
- �޸� ����(128 MB / 1988 KB)
- ������ Ǭ ������ ���� ����(43.031 %)

< ���� >
������ 2007�� 1�� 1�� �������̴�. �׷��ٸ� 2007�� x�� y���� ���� �����ϱ�? �̸� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
ù° �ٿ� �� ĭ�� ���̿� �ΰ� x(1��x��12)�� y(1��y��31)�� �־�����. 
����� 2007�⿡�� 1, 3, 5, 7, 8, 10, 12���� 31�ϱ���, 4, 6, 9, 11���� 30�ϱ���, 2���� 28�ϱ��� �ִ�.

< ��� >
ù° �ٿ� x�� y���� ���� ���������� ���� SUN, MON, TUE, WED, THU, FRI, SAT�� �ϳ��� ����Ѵ�.

< �˰��� �з� >
- ����

*/

#include <iostream>

using namespace std;

int main()
{
	int month, day;
	int days_from1 = 0; // 1�� 1�Ϻ��� �Է��� ��¥������ ����

	cin >> month >> day;

	switch (month) // �Է��� ���� ���ޱ����� ��¥���� �� �� ������ ��� ������
	{
	case 12:
		days_from1 += 30;
	case 11:
		days_from1 += 31;
	case 10:
		days_from1 += 30;
	case 9:
		days_from1 += 31;
	case 8:
		days_from1 += 31;
	case 7:
		days_from1 += 30;
	case 6:
		days_from1 += 31;
	case 5:
		days_from1 += 30;
	case 4:
		days_from1 += 31;
	case 3:
		days_from1 += 28;
	case 2:
		days_from1 += 31;
	case 1:
	
	default:
		break;
	}

	days_from1 += day;

	switch (days_from1 % 7) // ������ ����
	{
	case 0:
		cout << "SUN" << endl;
		break;
	case 1:
		cout << "MON" << endl;
		break;
	case 2:
		cout << "TUE" << endl;
		break;
	case 3:
		cout << "WED" << endl;
		break;
	case 4:
		cout << "THU" << endl;
		break;
	case 5:
		cout << "FRI" << endl;
		break;
	case 6:
		cout << "SAT" << endl;
		break;
	}
}