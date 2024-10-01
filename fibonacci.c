#include <stdio.h>

long long int fibonacci(int);

int main() {
    int n, i;
    scanf("%d",&n);
    printf("%lld\n",fibonacci(n));
}

long long int fibonacci(int n){
    int i;
    long long int f=0, x, y=0;
    for(i=1;i<=n;i++){
        if(i==1)f+=1;
        else {
            x=f;
            f=f+y;
            y=x;
        }
    }
    return f;
}
