#include <iostream>
int main(){
    int n[10]={1,2,3,4,5,6,7,8,9,0};
    for (int j = 1; j < 5; j++)
    {
    for (int i = 0; i < 10; i++){   
            do
            {
                printf("%d", n[i]);
                
            } while (i<j);
            
            
            if (i==j)
            {
                printf("\n");
                /* code */
            }
            
            
        }
    }
    
    
}