#include "stdio.h"
struct node
{
  int score;
  struct node *next;
};
int main()
{
  struct node s1, s2, s3, s4, s5;
  struct node *head;
  head = &s1;
  s1.score = 10;
  s1.next = &s2;
  s2.score = 20;
  s2.next = &s3;
  s3.score = 30;
  s3.next = &s4;
  s4.score = 40;
  s4.next = &s5;
  s5.score = 50;
  s5.next = NULL;
  display(head);
  return 0;
}
int display(struct node *head)
{
  struct node *p = head;
  while (p != NULL)
  {
    printf("³É¼¨Îª:%d\t", p->score);
    p = p->next;
  }
  return 0;
}