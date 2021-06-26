#include <stdio.h>

/*
 *
 * 문자와 숫자가 섞여있는 문자열이 주어지면 그 중 숫자만 추출하여,
 * 그 순서대로 자연수를 만듭니다.
 * 만들어진 자연수의 약수 개수를 출력합니다.
 * 만약, "t0e0a1c2her" 에서 숫자만 추출하면 0 0 1 2 이고,
 * 이것을 자연수로 만들면 12가 됩니다.
 * 첫 자리 0은 무시하며, 만약 출력이 12라면 그 다음줄에
 * 12의 약수의 개수를 출력합니다.
 *
 * 첫 줄에 숫자가 섞인 문자열이 주어집니다. 문자열의 길이는 50을 넘지 않습니다.
 *
 * 첫 줄에 자연수를 출력하고, 두 번쨰줄에 약수의 개수를 출력합니다.
 *
 */

int main(void)
{
    int i;
    char input_arr[50] = {0,};
    unsigned int answer = 0;
    
    scanf("%s", (char *)&input_arr);
    
    // 문자 배열 받고.
    for(i=0; input_arr[i]!='\0'; i++)
    {
	if(input_arr[i] >= 48 && input_arr[i] <=57)
	{
	    printf("%c ", input_arr[i]);
	    answer = answer * 10 + (input_arr[i] - 48);
	}
    }
    printf("\n");
    
    for(i=1; i<=answer; i++)
    {
	if(answer % i == 0)
	{
	    printf("%d ", i);
	}
    }
    printf("\n");
    

    return 0;
}
