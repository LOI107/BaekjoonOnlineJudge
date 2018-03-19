/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(57.310 %)

< 문제 >
왕비를 피해 일곱 난쟁이들과 함께 평화롭게 생활하고 있던 백설공주에게 위기가 찾아왔다. 
일과를 마치고 돌아온 난쟁이가 일곱 명이 아닌 아홉 명이었던 것이다.
아홉 명의 난쟁이는 모두 자신이 "백설 공주와 일곱 난쟁이"의 주인공이라고 주장했다. 
뛰어난 수학적 직관력을 가지고 있던 백설공주는, 다행스럽게도 일곱 난쟁이의 키의 합이 100이 됨을 기억해 냈다.
아홉 난쟁이의 키가 주어졌을 때, 백설공주를 도와 일곱 난쟁이를 찾는 프로그램을 작성하시오.

< 입력 >
아홉 개의 줄에 걸쳐 일곱 난쟁이의 키가 주어진다. 주어지는 키는 100을 넘지 않는 자연수이며, 아홉 난쟁이의 키는 모두 다르며, 
가능한 정답이 여러가지인 경우에는 아무거나 출력한다.

< 출력 >
일곱 난쟁이의 키를 오름차순으로 출력한다.

< 출처 >
Olympiad > 한국정보올림피아드시?도지역본선 > 지역본선 2004 > 초등부 1번

< 알고리즘 분류 >
- 브루트 포스

*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{	
	int dwarf[9];
	int dwarf_height_sum = 0;
	int not_dwarf1, not_dwarf2; // 일곱 난쟁이가 아닌 난쟁이의 번호

	for (int i = 0; i < 9; i++)
		cin >> dwarf[i];

	sort(dwarf, dwarf + 9); // 오름차순 정렬을 미리 해놓음

	for (int i = 0; i < 9; i++)
		dwarf_height_sum += dwarf[i];

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (i == j)
				break;

			if (dwarf_height_sum - dwarf[i] - dwarf[j] == 100) // 일곱 난쟁이가 아닌 난쟁이의 번호를 선별
			{
				not_dwarf1 = i;
				not_dwarf2 = j;
				break;
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (i != not_dwarf1 && i != not_dwarf2) // 일곱 난쟁이만 출력
			cout << dwarf[i] << endl;
	}
}