#include "Animal.hpp"
#include <memory>

std::string Cat::speak() const {
  return std::string{"Meow!"};
}

std::string Dog::speak() const {
  return std::string{"Wow!"};
}

std::string Cow::speak() const {
  return std::string{"Muuu!"};
}

std::string Human::speak() const {
  return std::string{"Hello world!"};
}

/* Centralizes conditional logic inside a single method. */
std::shared_ptr<Speaker> SpeakerFactory::createSpeakerFrom(int input) {
  if (input <= 1) {
    return std::make_shared<Cat>();
  }
  else if (input > 1 && input < 3) {
    return std::make_shared<Dog>();
  }
  else if (input > 3 && input < 6) {
    return std::make_shared<Cow>();
  }
  else {
    return std::make_shared<Human>();
  }
}
