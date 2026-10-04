#include<stdio.h>

int main(){
    int a[50],b[50],c[50],n,i,j,t,key,min;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=c[i]=a[i];
    }

    /* Bubble */
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]){
                t=a[j]; a[j]=a[j+1]; a[j+1]=t;
            }

    /* Insertion */
    for(i=1;i<n;i++){
        key=b[i]; j=i-1;
        while(j>=0 && b[j]>key){
            b[j+1]=b[j]; j--;
        }
        b[j+1]=key;
    }

    /* Selection */
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++)
            if(c[j]<c[min]) min=j;
        t=c[i]; c[i]=c[min]; c[min]=t;
    }

    printf("Bubble: ");
    for(i=0;i<n;i++) printf("%d ",a[i]);

    printf("\nInsertion: ");
    for(i=0;i<n;i++) printf("%d ",b[i]);

    printf("\nSelection: ");
    for(i=0;i<n;i++) printf("%d ",c[i]);

    return 0;
}
