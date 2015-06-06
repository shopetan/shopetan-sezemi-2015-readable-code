#include <stdio.h>
//カウントする最大値は100
#define MAX_COUNT 10000

int main(void)
{
    int i = 0;
    int j = 0;
    int residue_count = 0;
    int prime_count = 1;
    int prime[MAX_COUNT] = {};    //多めに用意

    /*素数判定部*/
    for(i = 1; i <= MAX_COUNT; i++)
    {
        for(j = 1;j <= i;j++)
        {
            if(i % j == 0)
                residue_count++;
        }
        if(residue_count == 2)
        {
            prime[prime_count-1] = i;
            prime_count++;
        }
        residue_count = 0;
    }
    /*出力部*/
    for(i = 0; i < prime_count-1; i++)
    {
        printf("prime[%d] = %d\n",i,prime[i]);    
    }
    
    return 0;
}
