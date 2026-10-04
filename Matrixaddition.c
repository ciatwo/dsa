#include<stdio.h>

int main(){
    int a[10][10],b[10][10],c[10][10];
    int r,i,j,k;

    scanf("%d",&r);

    for(i=0;i<r;i++)
        for(j=0;j<r;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<r;j++)
            scanf("%d",&b[i][j]);

    printf("Addition:\n");
    for(i=0;i<r;i++){
        for(j=0;j<r;j++)
            printf("%d ",a[i][j]+b[i][j]);
        printf("\n");
    }

    printf("Multiplication:\n");
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            c[i][j]=0;
            for(k=0;k<r;k++)
                c[i][j]+=a[i][k]*b[k][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
