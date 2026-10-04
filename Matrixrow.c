#include<stdio.h>

int main(){
    int a[10][10],r,c,i,j,s;

    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++){
        s=0;
        for(j=0;j<c;j++) s+=a[i][j];
        printf("Row %d=%d\n",i+1,s);
    }

    for(j=0;j<c;j++){
        s=0;
        for(i=0;i<r;i++) s+=a[i][j];
        printf("Col %d=%d\n",j+1,s);
    }

    if(r==c){
        s=0;
        for(i=0;i<r;i++) s+=a[i][i];
        printf("Trace=%d\n",s);
    }

    s=0;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++) s+=a[i][j];

    printf("Total=%d",s);
    return 0;
}
