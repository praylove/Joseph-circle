#include "circle.h"
#include <stdio.h>
#include <malloc.h>
typedef struct joseph circle;

void printOrder(circle *head)
{
    int n = 1;
    int i = 0;
    circle *p = head;
    circle *temp = NULL;
    while(head->next != head) 
    {
        for( n = 1; n < 3; n++ )
        {
            temp = p;
            p = p->next;
        }
         printf("%5d",p->order);
         if(p->next == p)
         {
             putchar('\n');
             return;
         }
         temp->next = p->next;
         free(p);
         p = temp->next;
         i++;
         if(i % 10 == 0)
            putchar('\n');
    }
    putchar('\n');
}