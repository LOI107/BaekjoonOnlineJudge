/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 0 MS)
- �޸� ����(256 MB / 1984 KB)
- ������ Ǭ ������ ���� ����(75.352 %)

< ���� >
JOI �֪���Ǫ����洪˪��Գ?�䪬 X ��� Y ��� 2 �Ī��룮2 �Ī�?��� 1 ���Ū��Գ���Ѫϣ�1 ���Ū��Գ���������?�����Ϊ誦��̽�ު룮

- X �䣺 1 ��ëȫ� ������ A �������룮
- Y �䣺 �������Ѫ� B ���Ǫ��룮�����᪬ C ��ëȫ�����ʪ�У����Ѫ��������� B ���Ϊߪ������룮
�����᪬ C ��ëȫ����������������� B ����ʥ������ʥ���Ѫ������룮��ʥ���Ѫ������᪬ C ��ëȫ�� 1 ��ëȫ������몴�Ȫ� D ���Ǫ��룮

JOI �֪�ʫ�Ǫ� 1 ���Ū��Գ�������᪬ P ��ëȫ�Ǫ��룮
�Գ���Ѫ��Ǫ�������̪��ʪ�誦���Գ?����Ԫ֪Ȫ���JOI �֪�ʫ�� 1 ���Ū��Գ���Ѫ�ϴ��裮

< �Է� >
������ 5 ������ʪ꣬1 ���� 1 �Ī�����?��������ƪ��룮

- 1 ���ͪ˪� X ��� 1 ��ëȫ몢��������� A ��������ƪ��룮
- 2 ���ͪ˪� Y ����������� B ��������ƪ��룮
- 3 ���ͪ˪� Y ������Ѫ��������ѪΪߪ˪ʪ��������߾�� C ��������ƪ��룮
- 4 ���ͪ˪� Y ��� 1 ��ëȫ몢�������ʥ���� D ��������ƪ��룮
- 5 ���ͪ˪� JOI �֪�ʫ�� 1 ���Ū��Գ�������� P ��������ƪ��룮

������ƪ�����? A, B, C, D, P �Ϫ��٪� 1 �߾ 10000 ����Ǫ��룮

< ��� >
JOI �֪�ʫ�� 1 ���Ū��Գ���Ѫ�������?�� 1 �����������裮

< ��Ʈ >
�������� 1 �Ǫϣ�JOI �֪�ʫ�� 1 ���Ū��Գ��������� 10 ��ëȫ�Ǫ��룮

- X ����Գ���Ѫ� 9 �� 10 = 90 ���Ǫ��룮
- JOI �֪�ʫ�� 1 ���Ū��Գ��������� 20 ��ëȫ�����ʪΪǣ�Y ����Գ���Ѫ��������Ѫ� 100 ���Ǫ��룮

JOI �֪�ʫ���Գ���Ѫ�����̪� X ����Ԫ֣����ΪȪ��� JOI �֪�ʫ�� 1 ���Ū��Գ���Ѫ� 90 ���Ǫ��룮
�������� 2 �Ǫϣ�JOI �֪�ʫ�� 1 ���Ū��Գ��������� 250 ��ëȫ�Ǫ��룮

- X ����Գ���Ѫ� 8 �� 250 = 2000 ���Ǫ��룮
- JOI �֪�ʫ�� 1 ���Ū��Գ��������� 100 ��ëȫ��߾�ǣ���Φ��� 250 - 100 = 150 ��ëȫ�Ǫ��룮��êƣ�
Y ����Գ���Ѫ��������Ѫ� 300 ����ʥ���� 10 �� 150 = 1500 ������ʥ���Ѫ������꣬��ͪ���Գ���Ѫ� 300 + 1500 = 1800 ���Ǫ��룮

JOI �֪�ʫ���Գ���Ѫ�����̪� Y ����Ԫ֣����ΪȪ��� JOI �֪�ʫ�� 1 ���Ū��Գ���Ѫ� 1800 ���Ǫ��룮
�����������ǪΫ�?���ϣ��ӫ���ë����˪��ի������������������ʦ���Ǫ���

< ��ó >
Olympiad > �Ϻ������ø��ǾƵ� ���� > JOI 2015 ���� 1��

< �˰����� �з� >
- ����

*/

#include <iostream>

using namespace std;

int main(void)
{
	int baseCostX; // X���� 1���ʹ� ���
	int baseCostY, useLimit, addCost; // �⺻��ݰ� �⺻����� û���Ǵ� �ִ��뷮, 1���ʹ� �߰����
	int useWater; // ������ ����� �ݾ�
	int finalCostX, finalCostY; // ����� ������ �� ���� ȸ�簡 û���� �ݾ�

	cin >> baseCostX >> baseCostY >> useLimit >> addCost >> useWater;

	finalCostX = baseCostX * useWater;

	if (useWater > useLimit)
		finalCostY = baseCostY + (useWater - useLimit) * addCost;

	else finalCostY = baseCostY;

	if (finalCostX > finalCostY)
		cout << finalCostY << endl;

	else cout << finalCostX << endl;
}