/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 0 MS)
- �޸� ����(256 MB / 1988 KB)
- ������ Ǭ ������ ���� ����(68.612 %)

< ���� >
���ĺ� �ҹ��ڷθ� �̷���� �ܾ �־�����. �� ��, �� �ܾ �Ӹ�������� �ƴ��� Ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Ӹ�����̶� ������ ���� ���� �Ųٷ� ���� �� �Ȱ��� �ܾ ���Ѵ�.
level, noon�� �Ӹ�����̰�, baekjoon, online, judge�� �Ӹ������ �ƴϴ�.

< �Է� >
ù° �ٿ� �ܾ �־�����. �ܾ��� ���̴� 1���� ũ�ų� ����, 100���� �۰ų� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

< ��� >
ù° �ٿ� �Ӹ�����̸� 1, �ƴϸ� 0�� ����Ѵ�.

< �˰��� �з� >
- ���ڿ� ó��

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{	
	string word, reverse_word;

	cin >> word;

	reverse_word = word;

	reverse(reverse_word.begin(), reverse_word.end());

	if (word == reverse_word) // ������ �ܾ�� ������ �ܾ ���ٸ� ���� �ܾ�� �Ӹ����
		cout << "1" << endl;

	else cout << "0" << endl;
}