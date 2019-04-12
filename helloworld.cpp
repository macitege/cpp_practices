#include <iostream> // include libraries(pre processor directive)

int main() // function
{

  std::cout << "Hello World!\n";

// character output stream “see out”
// << operator

  std::cout << "E E E E    G G G    E E E E \n";
  std::cout << "E         G         E       \n";
  std::cout << "E E E     G G G G   E E E   \n";
  std::cout << "E         G     G   E       \n";
  std::cout << "E E E E     G G     E E E E \n";

  return 0;
// return tells the OS that code is executed successfully

}


// $ g++ <cpp_file_name> ---- this will generate a compiled file called a.out

// $ g++ <cpp_file_name> -o <.out_file_name> ---- will generate compiled file with the provided name

// $ ./<.out_file_name> ---- executes the compiled machine code.
