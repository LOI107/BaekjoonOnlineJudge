/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 0 MS)
- �޸� ����(256 MB / 1988 KB)
- ������ Ǭ ������ ���� ����(78.037 %)

< ���� >
���ĺ� �ҹ��ڷθ� �̷���� �ܾ �־�����. �� ��, ����(a, e, i, o, u)�� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
ù° �ٿ� �ܾ �־�����. �ܾ��� ���̴� 1���� ũ�ų� ����, 100���� �۰ų� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

< ��� >
ù° �ٿ� ������ ������ ����Ѵ�.

< �˰��� �з� >
- ���ڿ� ó��

*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int vowelCount = 0; // ������ ����
	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			vowelCount++;
	}

	cout << vowelCount << endl;
}