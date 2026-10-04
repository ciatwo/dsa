#include<stdio.h>

int main(){
    int a[50],n,x,i,l,h,m;

    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);

    for(i=0;i<n;i++)
        if(a[i]==x){
            printf("Sequential: Found");
            break;
        }

    l=0; h=n-1;

    while(l<=h){
        m=(l+h)/2;
        if(a[m]==x){
            printf("\nBinary: Found");
            return 0;
        }
        if(x<a[m]) h=m-1;
        else l=m+1;
    }

    printf("\nBinary: Not Found");
    return 0;
}
