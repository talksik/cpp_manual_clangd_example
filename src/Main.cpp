#include <iostream>

#include <fstream>
#include <string>

std::string read_line(std::string file_path) {
  // Create an ifstream object and associate it with the file "example.txt".
  std::ifstream infile(file_path);

  // If the file could not be opened, print an error message and exit the
  // program.
  if (!infile.is_open()) {
    std::cerr << "Error: Could not open file " << file_path << std::endl;
    return "";
  }

  // Read a line of text from the file.
  std::string line;
  std::getline(infile, line);

  // Print the line of text to the console.
  std::cout << "The first line of the file is:\n";
  std::cout << line << std::endl;

  // Close the file.
  infile.close();

  return line;
}

int main() {
  std::cout << "Hello World!" << std::endl;

  std::string line = read_line("../example.txt");

  return 0;
}
