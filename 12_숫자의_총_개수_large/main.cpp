#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * 시간때문에, 규칙을 찾아서 최대한 빠르게 푸는게 중요함.
 * 1 ~ 9 : 9 개
 * 10 ~ 99 : 90 개
 * 100 ~ 999 : 900 개
 *
 *
 * 가령, 256 라면?
 * 256 > 9
 * 1 * 9 = 9
 * 256 > 99
 * 2 * 90 = 180
 * 256 > 999
 * 3 * 900 = 안됨.
 *  
 * ==> 256 - 99 = 157
 * 157 * 3 = 571
 *
 * */


int main(void)
{
    int i, n, sum=0, c=1, d=9, res=0;

    scanf("%d", &n);

    // 자릿수에 따라서 최종값을 구함.
    while(sum + d < n)
    {
	// c는 cnt 갯수, d는 자릿수
	res = res + (c * d);
	sum = sum + d;
	c++;
	d = d * 10;
    }	

    // 나머지 계산
    res = res + (n - sum) * c;
    printf("%d\n", res);

    /*
     * n = 256
     * sum = 0   d = 9    res = 9    c = 1
     * sum = 9   d = 9    res = 9    c = 2
     * sum = 9   d = 90   res = 9    c = 2  -> sum + d = 99
     * sum = 9   d = 90   res = 189  c = 2 
     * sum = 99  d = 90   res = 189  c = 3
     * sum = 99  d = 900  res = 189  c = 3  -> sum + d = 999 X 
     *
     * res = 189 + ((256-99) * 3)
     * res = 189 + 157 * 3
     * res = 189 + 471
     * res = 660
     *
     * */

    return 0;
}
