#include <unistd.h>
#include <iostream>

using namespace std;


int main()
{
  int wait;
  cout << "How often would you like a break reminder? (in seconds):";
  cin >> wait;
    while (true)
    {
        cout << "Take a break\n";
        sleep(wait);
    }
}
