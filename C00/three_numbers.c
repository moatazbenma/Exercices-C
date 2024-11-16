#include <stdio.h>

void num(){
    for(int i = 0; i <= 7; i++){
        for(int j = i + 1; j <= 8; j++){
            for(int c = j + 1; c <= 9;c++){
                    
                    printf("%d%d%d", i, j, c);
                    
                    
                    if(i != 7 || j != 8 || c != 9){
                        printf(",");
                    }
                    
            }
            }
            }
}

int main(){
    
    num();
}
