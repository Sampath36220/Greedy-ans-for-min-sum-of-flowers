//Greedy ans for min sum of flowers

#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a, const void* b){
    return *(int*)b-*(int*)a;
}
int main(){
    int n,k,i,cost=0;
    printf("Enter the values of n and k: ");
    scanf("%d%d",&n,&k);
    int a[n];
     printf("Enter the values in n: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),cmp);
    
    for(i=0;i<n;i++){
        cost=cost+a[i]*(1+i/k);
    }
    printf("The min cost is: %d",cost);
    return 0;
}