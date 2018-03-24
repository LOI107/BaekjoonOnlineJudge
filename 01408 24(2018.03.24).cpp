/*

< �⺻���� / �� �ҽ� >
- �ð� ����(2 �� / 0 MS)
- �޸� ����(128 MB / 1988 KB)
- ������ Ǭ ������ ���� ����(47.589 %)

< ���� >
�����̴� Counter Terror Unit (CTU)���� ���ϴ� Ư������̴�. �����̴� ��� ����� ��Ȯ�ϰ� 24�ð��� �Ǵ� ���� �ذ��ϴ� ������ �����ϴ�. 
�����̴� 1�ð� ���� ������ ���� �� �־ ���� �ʴ´�. ��Ȯ�ϰ� 24�ð��� �Ǵ� ������ �ƴϸ� ���� �ʴ� CTU Ư������̴�.
2008�� 3�� 3�� ������, CTU�� ���б⿡ ���� ����ź�� �����ڴٴ� �׷� ������ �Լ��ߴ�. CTU������ Ư����� �����̿��� �� �ӹ��� �ð��. 
CTU�� ���α׷��� �رԴ� �� ����� ���İ� �輱���̶� ���� ��ŷ�� ���� ����������.
�����̴� �����̸� �ӹ��� �������� ��Ȯ�ϰ� 24�ð��� �Ǵ� ������ �������� �Ѵ�.
���� ���� �ð��� 13:52:30�̰�, �ӹ��� ������ �ð��� 14:00:00 �̶�� �����̿��� �����ð��� 00:07:30 �̴�.
��� �ð��� 00:00:00 ~ 23:59:59�� ǥ���� �� �ִ�. 
�Է°� ��¿� �־����� ��� �ð��� XX:XX:XX �����̸�, ���ڰ� 2�ڸ��� �ƴ� ��쿡�� 0���� ä���.
�����̰� �ӹ��� ������ �ð���, ���� �ð��� �־����� ��, �����̿��� ���� �ð��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
ù° �ٿ��� ���� �ð���, ��° �ٿ��� �����̰� �ӹ��� ������ �ð��� �־�����. 
�ӹ��� ������ �ð��� ���� �ð��� ���� ���� �־����� �ʴ´�.

< ��� >
ù° �ٿ� �� �ٿ� �ϳ��� �����̰� �ӹ��� �����ϴµ� ���� �ð��� �������� �־����� �ð��� ���� (XX:XX:XX)�� ���� ����Ѵ�.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int nowHour, nowMin, nowSec, nowSum; // ���� �ð� �� �ʷ� ȯ���� ���
	int missionHour, missionMin, missionSec, missionSum; // �ӹ� ���� �ð� �� �ʷ� ȯ���� ���
	int remainHour, remainMin, remainSec, remainSum; // �ӹ� ������� ���� �ð� �� �ʷ� ȯ���� ���

	scanf("%d:%d:%d", &nowHour, &nowMin, &nowSec);
	scanf("%d:%d:%d", &missionHour, &missionMin, &missionSec);

	nowSum = nowHour * 3600 + nowMin * 60 + nowSec; // ���� �ð��� �ʷ� ��ȯ
	missionSum = missionHour * 3600 + missionMin * 60 + missionSec; // �ӹ� ���� �ð��� �ʷ� ��ȯ

	remainSum = missionSum - nowSum;

	if (remainSum > 0) // �ӹ� ���� �ð��� ���� �ð����� �������� Ŭ ���
	{
		remainHour = remainSum / 3600;
		remainMin = (remainSum % 3600) / 60;
		remainSec = (remainSum % 3600) % 60;
	}

	else // �ӹ� ���� �ð��� ���� �ð����� �������� ���� ���
	{
		remainSum = 24 * 3600 + remainSum;
		remainHour = remainSum / 3600;
		remainMin = (remainSum % 3600) / 60;
		remainSec = (remainSum % 3600) % 60;
	}

	printf("%02d:%02d:%02d\n", remainHour, remainMin, remainSec);
}