#include <stdio.h>
#include <conio.h>

int count(int i);

main(void){
    do {
        count(0)
    } while (!kbhit());

    printf("count called %d times", count(1));
    return 0;
}

count(int i){
    static int c = 0;

    if(i) return c;
    else c++;
    return 0;
}
