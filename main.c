#include <stdio.h>
#include "circle.h"

int main()
{
    struct joseph *head;
    head = initialization();
    if(!head)
        printf("init error\n");
    printOrder(head);
    return 0;
}