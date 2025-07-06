#include <stdio.h>

int main (){

    int pum,rep1,rep2,num=1;

    scanf("%d", &pum);

    for(rep1=1; rep1 <= pum; rep1++){

        for(rep2=1; rep2 <= 3; rep2++){
            printf("%d ",num);
            num++;

            if(rep2 == 3){
                printf("PUM\n");
                num++;
            }
        }

    }
    return 0;
}