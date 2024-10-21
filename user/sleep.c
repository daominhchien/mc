#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  if (argc <= 1) {
    fprintf(2, "Usage: sleep TIME\n");
    exit(1);
  }
  int time = atoi(argv[1]);
  if (time == 0) {
    fprintf(2, "Usage: sleep TIME\nTIME should be an integer larger than 0.\n");
    exit(1);
  }
  sleep(time);
  exit(0);
}

