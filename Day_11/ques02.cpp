#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  std::vector<int> vec = {2, 4, 6, 7, 8};
  int toSearch = 6;

  std::vector<int>::iterator iter = std::find(vec.begin(), vec.end(), toSearch);

  if (iter != vec.cend()) {
    std::cout << std::distance(vec.begin(),
                               iter + 1); // Workaround for 1 based indexing
  } else {
    std::cout << -1;
  }

  return EXIT_SUCCESS;
}
