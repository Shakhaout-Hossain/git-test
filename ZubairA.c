#include<stdio.h>

int main()
{
    int row,p;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    p=row;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=p; j++){
            printf("%d ",j);
        }
        p--;
        printf("\n");
    }
    return 0;
}
