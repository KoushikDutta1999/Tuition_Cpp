#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(char input[]) {
  static int s = -1, e = strlen(input);
  s++;
  e--;
  if (s < e) {
    if (input[s] != input[e]) {
      return false;
    }
    checkPalindrome(input);
  }
  return true;
}

int main() {
  char input[50];
  cin >> input;

  if (checkPalindrome(input)) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
}