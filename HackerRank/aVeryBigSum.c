#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

//Problem: Similar to SimpleArraySum

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    //required long long int
    long long int sum = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
       sum = sum + arr[arr_i];
    }
    //%ll for long long
    printf("%lld", sum);
    return 0;
}