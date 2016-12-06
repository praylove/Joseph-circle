struct joseph
{
    int order;
    struct joseph *next;
};
struct joseph *initialization(void);
void printOrder(struct joseph *head);