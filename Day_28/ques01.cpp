#include <cstdlib>
#include <iostream>
#include <string>

class Vehicle {
protected:
  std::string make;
  int year;
  float fuel;

public:
  Vehicle(const std::string &make, int year, float fuel)
      : make(make), year(year), fuel(fuel) {}

  void refuel(float amount) {
    fuel += amount;
    std::cout << "Refueled " << amount << " units. Current fuel: " << fuel
              << std::endl;
  }

  virtual void display() const {
    std::cout << "Make: " << make << ", Year: " << year << ", Fuel: " << fuel
              << std::endl;
  }
};

class Car : public Vehicle {
private:
  int doors;

public:
  Car(const std::string &make, int year, float fuel, int doors)
      : Vehicle(make, year, fuel), doors(doors) {}

  void display() const override {
    Vehicle::display();
    std::cout << "Doors: " << doors << std::endl;
  }

  void openDoors() const { std::cout << "Doors are opened." << std::endl; }
};

class Bike : public Vehicle {
private:
  bool hasCarrier;

public:
  Bike(const std::string &make, int year, float fuel, bool hasCarrier)
      : Vehicle(make, year, fuel), hasCarrier(hasCarrier) {}

  void display() const override {
    Vehicle::display();
    std::cout << "Has Carrier: " << (hasCarrier ? "Yes" : "No") << std::endl;
  }

  void kickStart() const { std::cout << "Bike kick-started." << std::endl; }
};

int main() {
  Car car("Toyota", 2021, 15.0f, 4);
  Bike bike("Yamaha", 2019, 5.5f, true);

  car.refuel(10.0f);
  car.display();
  car.openDoors();

  bike.refuel(3.0f);
  bike.display();
  bike.kickStart();

  return EXIT_SUCCESS;
}
