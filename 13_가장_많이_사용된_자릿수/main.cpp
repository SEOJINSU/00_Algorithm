#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * N자리의 자연수가 입력되면 입력된 자연수의 자릿수 중 가장 많이 사용된 숫자를 출력하는 프로그램을 만드시오.
 * 예를 들면, 1230565625라는 자연수가 입력되면 5가 3번 사용되어 가장 많이 사용한 수가 됨.
 * 단, 답이 여러개면 답중 가장 큰 값을 뽑으세영.
 *
 * a ~ z : 97 ~ 122
 * A ~ Z : 65 ~ 90
 * '0' ~ '9' : 48 ~ 57
 *
 * */

#define ON  1
#define OFF 0

#define MY_ANSWER OFF


int main(void)
{

#if MY_ANSWER == ON
    int i,j,max = -1, res = 0;
    char str_answer[101] = {0, };
    char res_num[10] = {0, };

    // fget(str_answer, sizeof(str_answer), stdin);
    scanf("%s", str_answer);

    for(i=0; str_answer[i]!='\0'; i++)
    {
	switch(str_answer[i])
	{
	    case '0':
		res_num[0]++;
		break;
	    case '1':
		res_num[1]++;
		break;
	    case '2':
		res_num[2]++;
		break;
	    case '3':
		res_num[3]++;
		break;
	    case '4':
		res_num[4]++;
		break;
	    case '5':
		res_num[5]++;
		break;
	    case '6':
		res_num[6]++;
		break;
	    case '7':
		res_num[7]++;
		break;
	    case '8':
		res_num[8]++;
		break;
	    case '9':
		res_num[9]++;
		break;
	}
    }
    for(i=0; i<10; i++)
    {
	if(max <= res_num[i])
	{
	    max = res_num[i];
	    res = i;
	}
    }
#else

    int i, num, max = -2147000000, res = 0;
    char input_arr[101];
    int ch[10] = {0,};

    scanf("%s", input_arr);
    
    for(i=0; input_arr[i]!='\n'; i++)
    {
	num = input_arr[i] - 48;
	ch[num]++;
    }
    for(i=0; i<10; i++)
    {
	if(ch[i] >= max)
	{
	    max = ch[i];
	    res = i;
	}
    }	

#endif
    printf("%d\n", res);

    return 0;
}



