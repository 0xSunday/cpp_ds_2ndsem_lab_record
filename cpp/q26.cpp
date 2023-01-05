// Create the Person class. Create some objects of this class (by taking information from
// the user). Inherit the class Person to create two classes Teacher and Student class.
// Maintain the respective information in the classes and create, display and delete
// objects of these two classes (Use Runtime Polymorphism). 


#include <iostream>
#include <string>

class Person {
 private:
  std::string name;
  int age;

 public:
  Person(const std::string& n, int a) : name(n), age(a) {}
  virtual ~Person() {}

  std::string getName() const { return name; }
  int getAge() const { return age; }
};

class Teacher : public Person {
 private:
  std::string subject;

 public:
  Teacher(const std::string& n, int a, const std::string& s)
      : Person(n, a), subject(s) {}
  ~Teacher() {}

  std::string getSubject() const { return subject; }
};

class Student : public Person {
 private:
  std::string major;

 public:
  Student(const std::string& n, int a, const std::string& m)
      : Person(n, a), major(m) {}
  ~Student() {}

  std::string getMajor() const { return major; }
};

int main() {
  Person* people[4];

  people[0] = new Person("Sunil", 20);
  people[1] = new Teacher("vitalik", 30, "Math");
  people[2] = new Student("satoshi", 22, "Computer Science");
  people[3] = new Student("sam bankman-fried", 21, "Physics");

  for (int i = 0; i < 4; i++) {
    std::cout << "Name: " << people[i]->getName() << std::endl;
    std::cout << "Age: " << people[i]->getAge() << std::endl;

    Teacher* t = dynamic_cast<Teacher*>(people[i]);
    if (t) {
      std::cout << "Subject: " << t->getSubject() << std::endl;
    }
    Student* s = dynamic_cast<Student*>(people[i]);
    if (s) {
      std::cout << "Major: " << s->getMajor() << std::endl;
    }
  }


  for (int i = 0; i < 4; i++) {
    delete people[i];
  }

  return 0;
}
