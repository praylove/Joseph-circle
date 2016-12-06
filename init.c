//creat the joseph circle
#include "circle.h"
#include <stdio.h>
#include <malloc.h>

typedef struct joseph circle;

circle *initialization(void)
{
    int i, amount;
    circle *p1, *p2;
    circle *head = (circle *)malloc(sizeof(circle));
    if(!head)
        return NULL;
    head->order = 1;
    head->next = head;
    printf("请输入节点数\n");
    scanf("%d", &amount);
    p1 = head;
    for (i = 2; i <= amount; i++)
    {
        p2 = (circle *)malloc(sizeof(circle));
        if(!p2)
            return NULL;
        p2->order = i;
        p2->next = head;
        p1->next = p2;
        p1 = p2;
    }
    return head;
}