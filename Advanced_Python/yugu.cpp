
#include <bits/stdc++.h>

using namespace std;

enum vehicleCategory { PASSENGER, PERSONAL, GOODS_CARRIER };
enum bikeCategory { SPORTS, COMMUTE, OFFROAD };
enum CarCategory { SEDAN, HATCHBACK, SUV };

// vehicle class
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
  enum bikeCategory bikecat;
  void SetMode(bikeCategory bikecat) { this->bikecat = bikecat; }

  void calculateMileage(float speed) { float mileage = speed / 4; }
};

// car class inheriting parent vehicle
class Car : public Vehicle {
public:
  int CarEngineCC;
  float vehicleTopSpeed;
  enum CarCategory carcat;

  void calculateMileage(float speed) { float mileage = speed / 8; }

  void SetMode(CarCategory carcat) { this->carcat = carcat; }
};

void AverageTopSpeed(Bike bikeobjArr[], int n) {
  int totaltopspeed = 0;
  for (int i = 0; i < n; i++) {
    totaltopspeed += bikeobjArr[i].vehicleTopSpeed;
  }
  int AverageTopSpeed = totaltopspeed / n;
  cout << "Average Top Speed of bikes: " << AverageTopSpeed << endl;
}

void AverageTopSpeed(Car carobjArr[], int n) {
  int totaltopspeed = 0;
  for (int i = 0; i < n; i++) {
    totaltopspeed += carobjArr[i].vehicleTopSpeed;
  }
  int AverageTopSpeed = totaltopspeed / n;

  cout << "Average Top Speed of cars: " << AverageTopSpeed << endl;
}

// main function
int main() {

  int n;
  cout << "No.of car objects to be created: ";
  cin >> n;

  Car carobjArr[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter the car weight";
    cin >> carobjArr[i].vechicleWeight;
    cout << "Enter the car LicensePlate: ";
    cin >> carobjArr[i].vehicleLicensePlate;
    cout << "Enter the car engineCC: ";
    cin >> carobjArr[i].CarEngineCC;
    cout << "Enter the vehicleTopspeed: ";
    cin >> carobjArr[i].vehicleTopSpeed;
    cout << "Enter the car category: ";
    int carcat;
    cin >> carcat;
    CarCategory cat = (CarCategory)carcat;
    carobjArr[i].SetMode(cat);
  }

  int m;
  cout << "No.of bike objects to be created: ";
  cin >> m;

  Bike bikeobjArr[n];
  for (int i = 0; i < m; i++) {

    cout << "Enter the bike weight";
    cin >> bikeobjArr[i].vechicleWeight;
    cout << "Enter the car LicensePlate: ";
    cin >> bikeobjArr[i].vehicleLicensePlate;
    cout << "Enter the bike engineCC: ";
    cin >> bikeobjArr[i].bikeEngineCC;
    cout << "Enter the vehicleTopspeed: ";
    cin >> bikeobjArr[i].vehicleTopSpeed;
    cout << "Enter the bike category: ";
    int bikecat;
    cin >> bikecat;
    bikeCategory cat = (bikeCategory)bikecat;
    bikeobjArr[i].SetMode(cat);
  }

  AverageTopSpeed(carobjArr, n);
  AverageTopSpeed(bikeobjArr, m);
}