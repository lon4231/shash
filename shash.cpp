#include "shash.h"

constexpr unsigned int shash(const char*str)
{
unsigned int output=0;
unsigned int index=0;
while (*str!='\0')
{
output+=(*str)*(index+1);
index++;
str++;
}
return output;
}