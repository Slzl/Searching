#include<stdio.h>
int s(int a[],int l,int r,int x){
    if(r>=l){
        int m=l+(r-l)/2;
        if (a[m]==x){
            return m;
        }
        if (a[m]>x){
            return s(a,l,m-1,x);
        }
        return s(a,m+1,r,x);
    }
    return -1;
}
int main(void){
    int a[60],n,i,x;
    printf("Enter the no. of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the elemnent to be searched");
    scanf("%d",&x);
    int result=s(a,0,n-1,x);
    (result==-1)
        ?printf("Element is not present in array")
        :printf("Element is present at index %d", result);
    return 0;
}
