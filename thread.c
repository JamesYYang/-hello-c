#include <threads.h>
#include <stdio.h>

int run(void *arg) {
  thrd_t id = thrd_current();  // 返回该函数运行所在线程的标识符；
  printf((const char*) arg, id);
  return thrd_success;
}

int main(void) {
#ifndef __STDC_NO_THREADS__
  thrd_t thread;
  int result;
  // 创建一个线程；
  thrd_create(&thread, run, "Hello C11 thread with id: %lu.\n");
  if (thrd_join(thread, &result) == thrd_success) {
    // 等待其他线程退出；
    printf("Thread returns %d at the end.\n", result);  
  }  
#endif
  return 0;
}