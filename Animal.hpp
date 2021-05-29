#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <string>
#include <memory>

/* Polymorophic Speaker
 *
 * How to add a new kind of Speaker:
 * 1. Define new derivative class implementing interface "Speaker".
 * 2. Delegate conditional creation logic to SpeakerFactory::createSpeakerFrom(int)"
 */

class Speaker {
  public:
  // We need to define a virtual function because we want the
  // concrete type of this speaker to be determined at runtime.
  virtual std::string speak() const = 0;
};

/* Behaviour is implemented on its own subclass. */
class Cat : public Speaker {
  public:
    Cat() = default;
    std::string speak() const;
};

class Dog : public Speaker {
  public:
    Dog() = default;
    std::string speak() const;
};

class Cow : public Speaker {
  public:
    Cow() = default;
    std::string speak() const;
};

class Human : public Speaker {
  public:
    Human() = default;
    std::string speak() const;
};

class SpeakerFactory {
  public:
    std::shared_ptr<Speaker> createSpeakerFrom(int i);
};


#endif
