#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

            int n1,n2,n3;
            char humor[3];

            scanf("%d %d %d", &n1,&n2,&n3);

            if(n2<n1){

                if(n3<n2){
                    if(abs(n3-n2)>=abs(n1-n2)){
                    strcpy(humor,":(");
                    } else {
                    strcpy(humor,":)");
                    }
                } else {
                    strcpy(humor, ":)");
                }
                
            } else if(n1==n2){

                if(n3>n2){
                    strcpy(humor, ":)");
                } else{
                    strcpy(humor, ":(");
                }

            } else if(n2>n1){

                if(n3>n2){
                    if(abs(n3-n2)<abs(n1-n2)){
                    strcpy(humor,":(");
                    } else {
                    strcpy(humor,":)");
                    }
                } else {
                    strcpy(humor, ":(");
                }

            }

            printf("%s\n", humor);

            return 0;

}
                