/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 0 MS)
- �޸� ����(128 MB / 1984 KB)
- ������ Ǭ ������ ���� ����(64.288 %)

< ���� >
���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
ù° �ٿ� ���� ������ �־�����. ���� ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �ڿ����̴�.

< ��� >
���� ������ ����Ѵ�.

< �˰��� �з� >
- ����

*/

#include <iostream>

using namespace std;

int main()
{	
	int score;
	char grade;

	cin >> score;

	switch (score / 10)
	{
	case 10: // 100���� ���
		grade = 'A';
		break;
	case 9: // 90������ ���
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default: // 60�� �̸��� ���
		grade = 'F';
		break;
	}
	
	cout << grade << endl;
} 