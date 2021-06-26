#include <stdio.h>

#define ON  1
#define OFF 0

#define WRONG_ANSWER OFF

/*
 * 자연수 N을 받아서 그 숫자들의 약수의 개수를 구하는 프로그램 작성.
 * 만약 8이면 1 2 2 3 2 4 2 4 가 출력됨.
 * 1 - 1 
 * 2 - 2
 * 3 - 2
 * 4 - 3
 * 5 - 2
 * 6 - 4
 * 7 - 2
 * 8 - 4
 *
 * */


//시간복잡도가 너무 큼
#if WRONG_ANSWER == ON    
int get_divisor(int num)
{
    int i, cnt=0;

    for(i=1; i<=num; i++)
    {
	if(num%i == 0)
	{
	    cnt++;
	}
    }

    return cnt;
}

int main(void)
{
    int i,j,k;
    int input_number;

    scanf("%d", &input_number);
    
    for(i=1; i <= input_number; i++)
    {
	printf("%d ", get_divisor(i));
    }

    return 0;
}

#else
int main(void)
{
    unsigned int i,j,k;
    unsigned int input_num = 0;

    scanf("%d", &input_num);
    unsigned int res[input_num] = {0,};
    
    for(i=1; i<=input_num; i++)
    {
	for(j=i; j<=input_num; j+=i)
	{
	    res[j-1]++;
	}
    }

    for(k=0; k<input_num; k++)
    {
	printf("%d ", res[k]);
    }
    printf("\n\r");
    return 0;
}
#endif



