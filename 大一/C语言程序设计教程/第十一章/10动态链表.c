#include "stdio.h"
#include "stdlib.h"
#define N 5
struct node
{
  int data;
  struct node *next;
};
struct node *createList(int n)
{
  struct node *head, *s, *r;
  int i = 0;
  if ((head = (struct node *)malloc(sizeof(struct node))) == NULL)
  { //内存不知时
    printf("error!");
    return 0;
  }
  head->next = NULL; //清空链表
  // head的data区并没有存放数据，
  r = head; //利用临时结构体,将head.next指向s,
  for (i = 0; i < n; i++)
  {
    if ((s = (struct node *)malloc(sizeof(struct node))) == NULL)
    { //内存不足时
      printf("error!");
      return 0;
    }
    scanf("%d", &s->data); //向链表内输入数据,相当于每次都会创建新的节点s
    r->next = s;           //此时的r是上一次创建的节点，将节点的next指向新节点，
    r = s;                 //在将临时节点r指向新节点，下次循环时，会创建新的节点
  }
  r->next = NULL; //链表创建结束后，将最后创建的节点指向NULL
  return head;
}
int printList(struct node *L)
{
  struct node *p;
  p = L->next;
  while (p != NULL)
  {
    printf("%5d", p->data);
    p = p->next; //链表最后的next是指向NULL的
  }
  printf("\n");
}
int main()
{
  int n = N;
  struct node *s;
  printf("请输入%d整型数，建立单链表：\n", n);
  s = createList(n);
  printf("建立的包含%d个元素的单链表如下：\n", n);
  printList(s);
  return 0;
}
