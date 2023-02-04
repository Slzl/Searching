#include <stdio.h>
int s(int a[],int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
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
    int r=s(a,n,x);
    (r==-1)
        ?printf("Element is not present in array")
        :printf("Element is present at index %d", r);
        return 0;
}
