int main() {
  std::vector<int> vec = {1, 2, 3, 4, 5};
  for (int i = 0; i < vec.size(); ++i) { // Corrected condition
    std::cout << vec[i] << " ";
  }
  return 0;
}