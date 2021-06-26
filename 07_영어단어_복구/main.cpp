#include <stdio.h>

/*
 * 영어 단어 복구
 * beautiful -> bE    au T I fu  L
 * 대문자없애고 공백 없애는 프로그램을 출력하시오.
 *
 * */

int main(void)
{
    int i, p=0;
    char input_arr[101]={0,};
    char buffer_arr[101] = {0,};
    
    fgets(input_arr, sizeof(input_arr), stdin);

    for(i=0; input_arr[i]!='\0'; i++)
    {   
        if(input_arr[i] == ' ') continue;

	if(input_arr[i]>=65 && input_arr[i]<=90)
	{
	    buffer_arr[p++] = input_arr[i] + 32;
	}
	else
	{
	    buffer_arr[p++] = input_arr[i];
	}
    }

    printf("%s\n", buffer_arr);

    return 0;
}
