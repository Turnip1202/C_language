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
  { //�ڴ治֪ʱ
    printf("error!");
    return 0;
  }
  head->next = NULL; //�������
  // head��data����û�д�����ݣ�
  r = head; //������ʱ�ṹ��,��head.nextָ��s,
  for (i = 0; i < n; i++)
  {
    if ((s = (struct node *)malloc(sizeof(struct node))) == NULL)
    { //�ڴ治��ʱ
      printf("error!");
      return 0;
    }
    scanf("%d", &s->data); //����������������,�൱��ÿ�ζ��ᴴ���µĽڵ�s
    r->next = s;           //��ʱ��r����һ�δ����Ľڵ㣬���ڵ��nextָ���½ڵ㣬
    r = s;                 //�ڽ���ʱ�ڵ�rָ���½ڵ㣬�´�ѭ��ʱ���ᴴ���µĽڵ�
  }
  r->next = NULL; //�����������󣬽���󴴽��Ľڵ�ָ��NULL
  return head;
}
int printList(struct node *L)
{
  struct node *p;
  p = L->next;
  while (p != NULL)
  {
    printf("%5d", p->data);
    p = p->next; //��������next��ָ��NULL��
  }
  printf("\n");
}
int main()
{
  int n = N;
  struct node *s;
  printf("������%d������������������\n", n);
  s = createList(n);
  printf("�����İ���%d��Ԫ�صĵ��������£�\n", n);
  printList(s);
  return 0;
}
