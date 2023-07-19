// 无论是结构体、联合体、typedof
//它们都相当于在声明一个新的类型
//因此它们都相当于一中类型，即声明类型的关键字
union sample
{
  int i;
  char c;
  float f;
};
union sample ul;
//自定义类型初始化
union sample ul = {2};