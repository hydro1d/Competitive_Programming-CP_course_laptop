// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    int mA[n][n];
    int mB[n][n];
    
    scanf("%d",&n);
    
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mA[i][j]);
        }
    }
    
     for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mB[i][j]);
        }
    }
    
     for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",mA[i][j]+mB[i][j]);
        }
    }
    
    return 0;
}