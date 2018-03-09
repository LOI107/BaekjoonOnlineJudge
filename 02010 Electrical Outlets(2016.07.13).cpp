/*

< 문제 >
Roy has just moved into a new apartment. Well, actually the apartment itself is not very new, 
even dating back to the days before people had electricity in their houses. 
Because of this, Roy’s apartment has only one single wall outlet, so Roy can only power one of his electrical appliances at a time.
Roy likes to watch TV as he works on his computer, and to listen to his HiFi system (on high volume) while he vacuums, 
so using just the single outlet is not an option. Actually, he wants to have all his appliances connected to a powered outlet, all the time. 
The answer, of course, is power strips, and Roy has some old ones that he used in his old apartment. 
However, that apartment had many more wall outlets, so he is not sure whether his power strips will provide him with enough outlets now.
Your task is to help Roy compute how many appliances he can provide with electricity, given a set of power strips. 
Note that without any power strips, Roy can power one single appliance through the wall outlet. 
Also, remember that a power strip has to be powered itself to be of any use.

< 입력 >
Input vill start with a single integer 1 ≤ N ≤ 20, indicating the number of test cases to follow. 
Then follow N lines, each describing a test case. Each test case starts with an integer 1 ≤ K ≤ 10, 
indicating the number of power strips in the test case. 
Then follow, on the same line, K integers separated by single spaces, O1 O2 . . . OK, where 2 ≤ Oi ≤ 10, indicating the number of outlets in each power strip.

< 출력 >
Output one line per test case, with the maximum number of appliances that can be powered.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int caseNum, stripNum; // 케이스 개수와 각 케이스별 연결할 수 있는 개수
	int maxNum = 1; // 최대로 연결할 수 있는 가전제품의 수인데 최초에는 벽에 있는 콘센트가 하나를 연결할 수 있으므로 1로 초기화

	cin >> caseNum;

	for (int i = 0; i < caseNum; i++)
	{
		cin >> stripNum;

		maxNum = maxNum + stripNum - 1; // 새로운 플러그를 연결하는데 콘센트는 하나 들고 꽂을 수 있는 가전제품의 수는 입력받은 수만큼 증가하므로
	}

	cout << maxNum << endl;
}


