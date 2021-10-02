
#include <bits/stdc++.h>
using namespace std;

enum vehicleCategory { PASSENGER, PERSONAL, GOODS_CARRIER };
enum bikeCategory { SPORTS, COMMUTE, OFFROAD };
enum CarCategory { SEDAN, HATCHBACK, SUV };

// vehicle class (parent)
class Vehicle {

public:
  float vechicleWeight;
  string vehicleLicensePlate;
  virtual void calculateMileage(float topSpeed) = 0;
};

// bike class inheriting parent vehicle
class Bike : public Vehicle {
public:
  int bikeEngineCC;
  float vehicleTopSpeed;
  enum bikeCategory bike;
  void SetMode(bikeCategory bike) { this->bike = bike; }

  void calculateMileage(float speed) { float mileage = speed / 4; }
};

// car class inheriting parent vehicle
class Car : public Vehicle {
public:
  int CarEngineCC;
  float vehicleTopSpeed;
  enum CarCategory car;

  void calculateMileage(float speed) { float mileage = speed / 8; }

  void SetMode(CarCategory car) { this->car = car; }
};

void AverageTopSpeed(Bike bikeArr[], int n) {
  int totalspeed = 0;
  for (int i = 0; i < n; i++) {
    totalspeed += bikeArr[i].vehicleTopSpeed;
  }
  int AverageTopSpeed = totalspeed / n;
  cout << "Average Top Speed of bikes: " << AverageTopSpeed << endl;
}

void AverageTopSpeed(Car carArr[], int n) {
  int totalspeed = 0;
  for (int i = 0; i < n; i++) {
    totalspeed += carArr[i].vehicleTopSpeed;
  }
  int AverageTopSpeed = totalspeed / n;

  cout << "Average Top Speed of cars: " << AverageTopSpeed << endl;
}

// main function
int main() {

  int n;
  cout << "No.of car objects to be created: ";
  cin >> n;

  Car carArr[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter the car weight: ";
    cin >> carArr[i].vechicleWeight;
    cout << "Enter the car LicensePlate: ";
    cin >> carArr[i].vehicleLicensePlate;
    cout << "Enter the car engineCC: ";
    cin >> carArr[i].CarEngineCC;
    cout << "Enter the vehicleTopspeed: ";
    cin >> carArr[i].vehicleTopSpeed;
    cout << "Enter the car category: ";
    int carcategory;
    cin >> carcategory;
    CarCategory cat = (CarCategory)carcategory;
    carArr[i].SetMode(cat);
  }

  int m;
  cout << "No.of bike objects to be created: ";
  cin >> m;

  Bike bikeArr[n];
  for (int i = 0; i < m; i++) {

    cout << "Enter the bike weight";
    cin >> bikeArr[i].vechicleWeight;
    cout << "Enter the car LicensePlate: ";
    cin >> bikeArr[i].vehicleLicensePlate;
    cout << "Enter the bike engineCC: ";
    cin >> bikeArr[i].bikeEngineCC;
    cout << "Enter the vehicleTopspeed: ";
    cin >> bikeArr[i].vehicleTopSpeed;
    cout << "Enter the bike category: ";
    int bikecategory;
    cin >> bikecategory;
    bikeCategory cat = (bikeCategory)bikecategory;
    bikeArr[i].SetMode(cat);
  }

  AverageTopSpeed(carArr, n);
  AverageTopSpeed(bikeArr, m);
}
