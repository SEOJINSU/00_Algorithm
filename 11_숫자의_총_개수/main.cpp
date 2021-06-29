#include <iostream>
#include <stdio.h>

using namespace std;

#define ON  1
#define OFF 0
#define MY_ANSWER OFF

/*
 * 자연수 N이 입력되면 1부터 N까지의 자연수를 종이에 적을 때, 
 * 각 숫자는 몇개 쓰였을까요?
 * 예를들면, 1~15까지는 1,2,3,4,5,6,7,8,9,1,0,1,1,1,2,1,3,1,4,1,5
 * 으로 총 21개가 쓰였음을 알 수 있다.
 * 자연수 N이 입력되면 1부터 N까지의 각 숫자는 몇 개가 사용되었는지
 * 를 구하는 프로그램을 작성하세요.
 *
 * */


int main(void)
{
    int i,n,tmp,cnt = 0;

    scanf("%d",&n);

#if MY_ANSWER == ON
    for(i = 1; i <= n; i++)
    {
	if(i >= 1 && i < 10)
	{
	    cnt++;
	}
	else if(i >= 10 && i < 100)
	{
	    cnt += 2;
	}
	else if(i >= 100 && i < 1000)
	{
	    cnt += 3;
	}
	else if(i >= 1000 && i < 10000)
	{
	    cnt += 4;
	}
	else if(i >= 10000 && i < 100000)
	{
	    cnt += 5;
	}
	else if(i >= 100000 && i < 1000000)
	{
	    cnt += 6;
	}
    }
#else

    for(i = 1; i <= n; i++)
    {
	tmp = i;
	
	while(tmp > 0)
	{
	    tmp /= 10;
	    cnt++;
	}
    }
#endif
    printf("%d\n", cnt);

    return 0;
}
