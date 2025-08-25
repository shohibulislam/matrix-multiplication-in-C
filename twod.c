#include<stdio.h>

int main(){
    int row1, col1, row2, col2, i, j, k;
    printf("Enter 1st arrays rows and columns.\n");
    scanf("%d %d", &row1, &col1);
    printf("Enter 2nd arrays rows and columns.\n");
    scanf("%d %d", &row2, &col2);

    while(col1 != row2){
        printf("EError!\n1st matrix’s columns must match 2nd matrix’s rows.\n");

        printf("Enter 1st arrays rows and columns.\n");
        scanf("%d %d", &row1, &col1);
        printf("Enter 2nd arrays rows and columns.\n");
        scanf("%d %d", &row2, &col2);
    }

    int a[row1][col1], b[row2][col2];
    
    printf("Enter 1st array-\n");
    for(i=0; i<row1; i++){
        for(j=0; j<col1; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter 2nd array-\n");
    for(i=0; i<row2; i++){
        for(j=0; j<col2; j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    
    printf("1st array-\n");
    for(i=0; i<row1; i++){
        for(j=0; j<col1; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("2nd array-\n");
    for(i=0; i<row2; i++){
        for(j=0; j<col2; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    int result[row1][col2];
    int sum=0;
    for(i=0; i<row1; i++){
        for(j=0; j<col2; j++){
            for(k=0; k<col1; k++){
                sum = sum + a[i][k] * b[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }

    printf("Multiplication-\n");
    for(i=0; i<row1; i++){
        for(j=0; j<col2; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}