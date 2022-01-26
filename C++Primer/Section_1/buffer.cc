/* The aim of this program is to indicate how buffer works in C++ */
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main()
{
   for (int i = 1; i <= 5; ++i)
   {
/* We can also make use of std::endl to flush the buffer by inserting
 * a newline character as the ostream is line buffered */
      cout << i << " " << flush;
      this_thread::sleep_for(chrono::seconds(1));
   }
   return 0;
}
