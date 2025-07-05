#include <stdio.h>
 
int main() {
    
    int a,b,a1;
    int soma=0;
    
    scanf("%d%d", &a,&b);
    
    if(a < b){

        for(a++; a < b; a++){
            
            
            if(a%2 == 1){
                soma += a;
            }
            
        }   
        
    } else if(a > b) {
        
        for(a--; a > b; a--){
            
            if(a%2 == 1 || a%2 == -1){
                soma =soma + a;
            }
        }
        
    } else {
        printf("0\n");
        return 0;
    }
    
    printf("%d\n", soma);
 
    return 0;
}