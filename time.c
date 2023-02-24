#include <stdio.h>
#include <time.h>

int main(void) {
  time_t currTime = time(NULL);
  if(currTime != (time_t)(-1)) {
    char buff[64];
    struct tm* tm = localtime(&currTime);
    if (strftime(buff, sizeof buff, "%F %R", tm))
      printf("The current local time is: %s\n", buff);  // "The current local time is: Saturday Sat Jan  8 16:30:49 2022".
  }
  return 0;
}