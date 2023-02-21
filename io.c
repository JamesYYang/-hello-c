#include <stdio.h>

int main(void) {
  printf("Enter some characters:\n");
  FILE* fp = fopen("./temp.txt", "w+");
  if (fp) {
    char ch;
    while (scanf("%c", &ch)) {
      if (ch == 'z') break;
      putc(ch, fp);
    }
  } else {
    perror("File open failed.");
  }
  fclose(fp);
  return 0;
}