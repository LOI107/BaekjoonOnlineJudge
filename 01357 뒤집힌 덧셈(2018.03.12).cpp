/*

< �⺻���� / �� �ҽ� >
- �ð� ����(2 �� / 0 MS)
- �޸� ����(128 MB / 2048 KB)
- ������ Ǭ ������ ���� ����(44.519 %)

< ���� >
� �� X�� �־����� ��, X�� ��� �ڸ����� ������ �� ���� ���� �� �ִ�. Rev(X)�� X�� ��� �ڸ����� �������� ����� �Լ���� ����. 
���� ���, X=123�� ��, Rev(X) = 321�̴�. �׸���, X=100�� ��, Rev(X) = 1�̴�.
�� ���� ���� X�� Y�� �־����� ��, Rev(Rev(X) + Rev(Y))�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�

< �Է� >
ù° �ٿ� �� X�� Y�� �־�����. X�� Y�� 1,000���� �۰ų� ���� �ڿ����̴�.

< ��� >
ù° �ٿ� ������ ������ ����Ѵ�.

< �˰��� �з� >
- ����

*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{	
	string x, y;

	cin >> x >> y;

	reverse(x.begin(), x.end()); // Rev�� �����ؼ� �ڸ��� �������� �����
	reverse(y.begin(), y.end());

	int sum;

	sum = atoi(x.c_str()) + atoi(y.c_str()); // string�� int������ �ٲ� �� ���ϱ�

	stringstream temp;

	temp << sum; // int���� stringstream���� �ٲپ ����

	string result;

	result = temp.str(); // stringstream�� string���� ����

	reverse(result.begin(), result.end()); // Rev�� �����ؼ� �ڸ��� �������� �����
	
	cout << atoi(result.c_str()) << endl; // string�� ��� �տ� 0�� ��µ� �� �����Ƿ� ���������� int�� �ٲٰ� ���
}