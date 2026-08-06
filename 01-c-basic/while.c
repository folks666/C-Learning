#include <stdio.h>
int main(void){
    int a;
    scanf("%d", &a);
    while(a-->10){
        printf("%d\n", a);
        getchar();           //每按一下就输出一次，虽然说很奇怪
    }
    return 0;
}