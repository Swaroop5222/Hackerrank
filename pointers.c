#include <stdio.h>

void update(int *,int *); 
    // Complete this function
        


int main() {
    int x, y;
    scanf("%d%d",&x,&y);
    update(&x, &y);

    return 0;
}
void update(int *a, int *b){
    
    printf("%d\n",*a+*b);
    if(*a>*b)
    printf("%d\n",*a-*b);
    else {
    printf("%d\n",*b-*a);
    }
}

