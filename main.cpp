#include <iostream>
#include "Animal.hpp"

/* With conditionals. 
 * 
 * Adding a new animal involves mofifying all conditionals.
 *
 * */
void conditionalAnimalTalk(int input) {
  if (input <= 1) {
    std::cout << "Meow!" << std::endl;
  }
  else if (input > 1 && input < 3) {
    std::cout << "Wow!" << std::endl;
  }
  else if (input > 3 && input < 6) {
    std::cout << "Muuu!" << std::endl;
  }
  else {
    std::cout << "Hello world!" << std::endl;
  }
}

/* With polymorphism. */
void polymorphicAnimalTalk(int input) {
  SpeakerFactory factory;
  auto speaker_ptr = factory.createSpeakerFrom(input);
  std::string talk = speaker_ptr->speak();
  std::cout << talk << std::endl;
}

int main() {

  conditionalAnimalTalk(0);
  polymorphicAnimalTalk(0);

  conditionalAnimalTalk(2);
  polymorphicAnimalTalk(2);

  conditionalAnimalTalk(4);
  polymorphicAnimalTalk(4);

  conditionalAnimalTalk(10);
  polymorphicAnimalTalk(10);

}
