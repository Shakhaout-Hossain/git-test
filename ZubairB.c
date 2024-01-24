#include<stdio.h>

int main()
{
    int row,p;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    p=row;
    for(int i=1; i<=row; i++){
            char ch = 'A';
        for(int j=0; j<p; j++){
            printf("%c ",ch+j);
        }
        p--;
        printf("\n");
    }
    return 0;
}
