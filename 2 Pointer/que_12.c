#include<stdio.h>
struct novel
{
    int nid;
    char n_name[20];
    int price;
};
void display(struct novel *);
int main()
{
    struct novel n;

    printf("ENTER THE NOVEL DETAILS:");
    printf("enter the novel id;");
    scanf("%d",&n.nid);
    printf("enter the name of the novel:");
    scanf("%s",n.n_name);
    printf("enter the price of the novel:");
    scanf("%d",&n.price);
    printf("THE NOVEL DETAIL ARE:");
    display(&n);
    
}

    void display (struct novel *ptr)
    {
        printf("Novel_id =%d, Novel_name =%s, Novel_price =%d,ptr->nid,ptr->n_name,ptr->price");
   
}