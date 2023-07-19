struct Stu
{
  int num;       //学号为整形
  char name[20]; //姓名为字符串
  char sex;      //性别为字符型
  int age;       //年龄为整形
  float score;   //成绩为实型
}
//定义结构体数组
struct Stu s[30];

//直接定义结构体数组
struct Stu
{
  int num;
  char name[20];
  char sex;
  int age;
  float score;
} s[30];
