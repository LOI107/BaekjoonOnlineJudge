/*

< �⺻���� / �� �ҽ� >
- �ð� ����(1 �� / 0 MS)
- �޸� ����(128 MB / 1984 KB)
- ������ Ǭ ������ ���� ����(38.469 %)

< ���� >
The 19th century German mathematician Hermann Minkowski investigated a non-Euclidian geometry, called the taxicab geometry. 
In taxicab geometry the distance between two points T1(x1, y1) and T2(x2, y2) is defined as:

D(T1,T2) = |x1 - x2| + |y1 - y2|

All other definitions are the same as in Euclidian geometry, including that of a circle:
A circle is the set of all points in a plane at a fixed distance (the radius) from a fixed point (the centre of the circle).
We are interested in the difference of the areas of two circles with radius R, one of which is in normal (Euclidian) geometry, 
and the other in taxicab geometry. The burden of solving this difficult problem has fallen onto you.

< �Է� >
The first and only line of input will contain the radius R, an integer smaller than or equal to 10000.

< ��� >
On the first line you should output the area of a circle with radius R in normal (Euclidian) geometry. 
On the second line you should output the area of a circle with radius R in taxicab geometry.

Note: Outputs within ��0.0001 of the official solution will be accepted.

< ��ó >
Contest > Croatian Open Competition in Informatics > COCI 2006/2007 > Contest #1 2��

< �˰��� �з� >
- ���� �˰���
- ����

*/

#include <iostream>
#include <iomanip>

#define PI 3.141592653589793238462643383279502884197

using namespace std;

int main()
{
	double rad;

	cin >> rad;
	
	cout << fixed; // ������ �Ҽ������� fix
	cout << setprecision(6) << PI * rad * rad << endl; // �Ϲ����� ���� ����
	cout << setprecision(6) << (2 * rad) * (2 * rad) / 2 << endl; // �ý� �����п����� ��(�Ϲ����� ������ ���)�� ����
}