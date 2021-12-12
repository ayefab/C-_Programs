#include <iostream>
using namespace std;

void CountDown(int countInt) {
   if (countInt <= 0) {
      cout << "GO!\n";
   }
   else {
      cout << countInt << endl;
      CountDown(countInt - 1);
   }
}

int main() {
   CountDown(100000);
   return 0;
}
