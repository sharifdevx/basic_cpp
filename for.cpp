#include <iostream>

int main() {
   //for (declare; condition; increment =/-) {code}
   for(int i = 0; i <= 5; i+=1) {
    std::cout << i << '\n';
   }
   std::cout << "End\n";

   for(int n = 10; n >= 0; n -= 2) {
    std::cout << n << '\n';
   }
   return 0;
}