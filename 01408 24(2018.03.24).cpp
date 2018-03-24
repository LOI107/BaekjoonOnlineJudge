/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(47.589 %)

< 문제 >
도현이는 Counter Terror Unit (CTU)에서 일하는 특수요원이다. 도현이는 모든 사건을 정확하게 24시간이 되는 순간 해결하는 것으로 유명하다. 
도현이는 1시간 만에 범인을 잡을 수 있어도 잡지 않는다. 정확하게 24시간이 되는 순간이 아니면 잡지 않는 CTU 특수요원이다.
2008년 3월 3일 월요일, CTU는 새학기에 맞춰 핵폭탄을 날리겠다는 테러 정보를 입수했다. CTU에서는 특수요원 도현이에게 이 임무를 맡겼다. 
CTU의 프로그래머 준규는 이 사건의 배후가 김선영이란 것을 해킹을 통해 밝혀내었다.
도현이는 선영이를 임무를 시작한지 정확하게 24시간이 되는 순간에 잡으려고 한다.
만약 지금 시간이 13:52:30이고, 임무를 시작한 시간이 14:00:00 이라면 도현이에게 남은시간은 00:07:30 이다.
모든 시간은 00:00:00 ~ 23:59:59로 표현할 수 있다. 
입력과 출력에 주어지는 모든 시간은 XX:XX:XX 형태이며, 숫자가 2자리가 아닐 경우에는 0으로 채운다.
도현이가 임무를 시작한 시간과, 현재 시간이 주어졌을 때, 도현이에게 남은 시간을 구하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에는 현재 시간이, 둘째 줄에는 도현이가 임무를 시작한 시간이 주어진다. 
임무를 시작한 시간과 현재 시간이 같은 경우는 주어지지 않는다.

< 출력 >
첫째 줄에 한 줄에 하나씩 도현이가 임무를 수행하는데 남은 시간을 문제에서 주어지는 시간의 형태 (XX:XX:XX)에 맞춰 출력한다.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int nowHour, nowMin, nowSec, nowSum; // 현재 시각 및 초로 환산한 결과
	int missionHour, missionMin, missionSec, missionSum; // 임무 수행 시각 및 초로 환산한 결과
	int remainHour, remainMin, remainSec, remainSum; // 임무 수행까지 남은 시각 및 초로 환산한 결과

	scanf("%d:%d:%d", &nowHour, &nowMin, &nowSec);
	scanf("%d:%d:%d", &missionHour, &missionMin, &missionSec);

	nowSum = nowHour * 3600 + nowMin * 60 + nowSec; // 현재 시각을 초로 변환
	missionSum = missionHour * 3600 + missionMin * 60 + missionSec; // 임무 수행 시각을 초로 변환

	remainSum = missionSum - nowSum;

	if (remainSum > 0) // 임무 시작 시각이 현재 시각보다 수적으로 클 경우
	{
		remainHour = remainSum / 3600;
		remainMin = (remainSum % 3600) / 60;
		remainSec = (remainSum % 3600) % 60;
	}

	else // 임무 시작 시각이 현재 시각보다 수적으로 작을 경우
	{
		remainSum = 24 * 3600 + remainSum;
		remainHour = remainSum / 3600;
		remainMin = (remainSum % 3600) / 60;
		remainSec = (remainSum % 3600) % 60;
	}

	printf("%02d:%02d:%02d\n", remainHour, remainMin, remainSec);
}