#include <stdio.h>
//������Ȥ�������ͤ�100
#define MAX_COUNT 10000

int main(void)
{
    int i = 0;
    int j = 0;
    int residue_count = 0;
    int prime_count = 1;
    int prime[MAX_COUNT] = {};    //¿����Ѱ�

    /*�ǿ�Ƚ����*/
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
    /*������*/
    for(i = 0; i < prime_count-1; i++)
    {
        printf("prime[%d] = %d\n",i,prime[i]);    
    }
    
    return 0;
}
