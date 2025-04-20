#include <klibtest.h>

void (*entry)() = NULL;

int main(int argc, char *argv[]) {
  // TEST(test_memset);
  // TEST(test_strcpy);
  TEST(hello);
  return 0;
}