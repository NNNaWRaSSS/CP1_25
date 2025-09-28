int *ptr;
__attribute__((noinline))
void functionthatescapeslocalobject() {
  int local[100];
  ptr = &local[0];
}

int main(int argc, char **argv) {
  functionthatescapeslocalobject();
  return ptr[argc];
}