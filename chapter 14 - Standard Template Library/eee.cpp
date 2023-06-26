#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
   int val = 5;
   vector<int> v = {1, 2, 3, 4, 5};

   auto result = find(v.begin(), v.end(), val);

   if (result != end(v))
      cout << "Vector contains element " << val << endl;

   val = 15;

   result = find(v.begin(), v.end(), val);

   if (result == end(v))
      cout << "Vector doesn't contain element " << val << endl;

   return 0;
}