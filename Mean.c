#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    float a[50],sum=0,mean,sd=0;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
        sum+=a[i];
    }

    mean=sum/n;

    for(i=0;i<n;i++)
        sd+=(a[i]-mean)*(a[i]-mean);

    sd=sqrt(sd/n);

    printf("Mean=%.2f\nSD=%.2f",mean,sd);
    return 0;
}
