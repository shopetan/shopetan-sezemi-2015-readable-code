#include <stdio.h>
#include <stdlib.h>
/*����4:�ǡ����ե������3�ĤΥǡ�������¸�Ǥ��뤳��*/

int main(void)
{
    FILE *fp;
    char *fname = "recipe-data.txt";
    
    /*file open*/
    fp = fopen(fname,"w");

    /*���顼���ˤϰ۾ｪλ*/
    if(fp == NULL){
        printf("%s file can't open",fname);
        exit(EXIT_FAILURE);
    }
    
    fprintf(fp,"����饤��\n");
    fprintf(fp,"�ƻ�Ч\n");
    fprintf(fp,"�ɿ�Ʀ��\n");
    
    /*file close*/
    fclose(fp);
    
    return 0;
    
}
