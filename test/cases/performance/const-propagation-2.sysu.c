#include <sysy/sylib.h>

int loopCount = 0;
int CONST_NUM = 2;

int func()
{
  int result = 0;
  int i = 0;
  while(i<loopCount)
  {
    int sum = 0;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum + CONST_NUM;
    sum = sum / 3;
    result = result + sum;
    result = result % 1500000001;
    i = i + 1;
  }
  return result;
}

int main()
{
  loopCount = getint();
  starttime();
  int result = func();
  stoptime();
  putint(result);
  putch(10);
  return 0;
}
