struct Stu
{
  int num;
  char name[20];
  char sex;
  int age;
  float score;
};
int main()
{
  // struct Stu *p;//直接定义结构体指针，此时指针未初始化
  struct Stu S2; //定义结构体变量
  struct Stu *p = &S2;
  // 结构体指针访问结构体成员
  S2.num = 201701;
  (*p).num = 201702;
  p->num = 201703;
}
