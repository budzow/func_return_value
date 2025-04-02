// With nodiscard
[[nodiscard]] int someFunc1();


void badUse1() {
  someFunc1();  // Both S5277 and M23_007 are reported
}

// Without nodiscard
int someFunc2();

void badUse2() {
  someFunc2(); // M23_007 is reported
}

int goodUse() {
  return someFunc1();
}

