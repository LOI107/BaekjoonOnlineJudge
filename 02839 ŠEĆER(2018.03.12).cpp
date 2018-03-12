/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(128 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(26.754 %)

< 문제 >
Mirko works in a sugar factory as a delivery boy. He has just received an order: 
he has to deliver exactly N kilograms of sugar to a candy store on the Adriatic coast. 
Mirko can use two types of packages, the ones that contain 3 kilograms, and the ones with 5 kilograms of sugar.
Mirko would like to take as few packages as possible. 
For example, if he has to deliver 18 kilograms of sugar, he could use six 3-kilogram packages. 
But, it would be better to use three 5-kilogram packages, and one 3-kilogram package, resulting in the total of four packages.
Help Mirko by finding the minimum number of packages required to transport exactly N kilograms of sugar.

< 입력 >
The first and only line of input contains one integer N (3 ≤ N ≤ 5000).

< 출력 >
The first and only line of output should contain the minimum number of packages Mirko has to use. 
If it is impossible to deliver exactly N kilograms, output -1.

< 출처 >
Contest > Croatian Open Competition in Informatics > COCI 2010/2011 > Contest #7 1번

< 알고리즘 분류 >
- 수학
- 구현

*/

#include <iostream>

using namespace std;

int main()
{	
	bool not_div = 1; // 나뉘어지느냐 안 나뉘어지느냐를 나타냄(현재는 안 나눠짐)
	int sugar_kilo, package_3, package_5, min_package;

	cin >> sugar_kilo;

	for (package_3 = 0; package_3 < 2000; package_3++)
	{
		for (package_5 = 0; package_5 <= 1000; package_5++) // 5킬로가 많을수록 package 숫자가 줄어드므로 5킬로를 먼저 확인
		{
			if (5 * package_5 + 3 * package_3 == sugar_kilo) // 5킬로가 최대이고 나머지가 3킬로로 나뉘어질 때
			{
				min_package = package_3 + package_5;
				not_div = 0;
				break;
			}
		}

		if (not_div == 0) // 5킬로가 최대이며 나머지가 3킬로로 나누어질 경우 더 이상 검증이 필요없다
			break;
	}
	
	if (not_div == 1) // 나누어지지 않았을 경우
		min_package = -1;

	cout << min_package << endl;
} 