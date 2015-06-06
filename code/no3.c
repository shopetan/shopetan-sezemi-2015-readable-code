#include <stdio.h>
#include <stdlib.h>
/*仕様3:レシピデータを別ファイルに分離すること*/

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
    
    /*file close*/
    fclose(fp);
    
    return 0;
    
}
