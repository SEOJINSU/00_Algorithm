#include <stdio.h>
#include <math.h>

#define ON  1
#define OFF 0
#define WRONG_ANSWER OFF

/*
 * N개의 자연수가 입력되면, 각 자연수의 자릿수의 합을 구하고, 그 합이 최대인
 * 자연수를 출력하는 프로그램을 작성하라.
 * ex)
 * 5
 * 125 15232 79 1325 97
 *
 * */


#if WRONG_ANSWER == ON
unsigned int my_pow(unsigned int a, unsigned int b)
{
    int i=0;

    if(b > 0)
    {
	for(i=0; i<b; i++)
	{
	    a *= a;
	}
    }
    else if(b == 0)
    {
	a = 1;
    }
    else
    { 
	a = -1;
    }
    return a;
}

int main(void)
{
    unsigned int i,j,max=0;
    unsigned int input_number = 0;

    // 입력 부
    scanf("%d", &input_number);

    unsigned int res[input_number + 1] = {0,};
    unsigned int sum[input_number + 1] = {0,};
    unsigned int res_copy[input_number + 1] = {0,};

    for(i=0; i<input_number; i++)
    {
	scanf("%d", &res[i]);
    }
    
    // 출력 부
    for(i=0; i<input_number; i++)
    {
	for(j=0; j<8; j++)
	{
	    res_copy[i] = res[i];
	    sum[i] = sum[i] + (int)(res[i] / my_pow(10, 7-j));
	    res[i] %= my_pow(10,7-j);
	}

	if(sum[i] > sum[i+1])
	{
	    max = res_copy[i];
	}
    }
    printf("%d\n", max);

    return 0;
}

#else

unsigned int digit_sum(int x)
{
    unsigned int sum = 0;

    while(x > 0)
    {
	sum = sum + (x % 10);
	x /= 10;
    }
    return sum;
}

int main(void)
{
    unsigned int i, n ,num, res ,sum, max = 0;
    
    scanf("%u", &n);

    for(i = 0; i < n; i++)
    {
	scanf("%u", &num);
	
	sum = digit_sum(num);

	if(sum > max)
	{
	    max = sum;
	    res = num;
	}
	else if(sum==max)
	{
	    if(num > res)  
	    { 
		res = num;
	    }
	}
    }
    printf("%u\n", res);

    return 0;
}

#endif

