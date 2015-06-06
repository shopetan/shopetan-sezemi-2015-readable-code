#include <stdio.h>
#include <stdlib.h>
/*仕様4:データファイルに3つのデータを保存できること*/

int main(void)
{
    FILE *fp;
    char *fname = "recipe-data.txt";
    
    /*file open*/
    fp = fopen(fname,"w");

    /*エラー時には異常終了*/
    if(fp == NULL){
        printf("%s file can't open",fname);
        exit(EXIT_FAILURE);
    }
    
    fprintf(fp,"オムライス\n");
    fprintf(fp,"親子丼\n");
    fprintf(fp,"杏仁豆腐\n");
    
    /*file close*/
    fclose(fp);
    
    return 0;
    
}
