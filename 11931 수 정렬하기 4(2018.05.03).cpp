/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 288 MS)
- �޸� ����(128 MB / 8260 KB)
- ������ Ǭ ������ ���� ����(59.459 %)

< ���� >
N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
ù° �ٿ� ���� ���� N(1 �� N �� 1,000,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����. 
�� ���� ���밪�� 1,000,000���� �۰ų� ���� �����̴�. ���� �ߺ����� �ʴ´�.

< ��� >
ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(void)
{
	int caseNum, num;
	vector<int> v;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> caseNum;

	for (int i = 0; i < caseNum; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end(), greater<int>());

	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
		cout << *i << '\n';
}