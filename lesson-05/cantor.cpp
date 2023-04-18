#include <iostream>
#include <map>

using namespace std;

class Cantor {
 public:
  Cantor() = default;
  virtual ~Cantor() = default;

  virtual double Rate(const string& abbreviation) const = 0;
};

class FakeUsdCantor : public Cantor {
 public:
  FakeUsdCantor() {
    // rates_ map with values for ten most popular currencies relative to USD
    rates_ = {
        {"EUR", 0.85},
        {"JPY", 110.66},
        {"GBP", 0.73},
        {"CHF", 0.91},
        {"CAD", 1.25},
        {"AUD", 1.34},
        {"CNY", 6.47},
        {"HKD", 7.78},
        {"NZD", 1.44},
        {"KRW", 1153.89}
    };
  }

  double Rate(const string& abbreviation) const override {
    auto it = rates_.find(abbreviation);
    if (it != rates_.end()) {
      return it->second;
    }
    // Handle error case when currency abbreviation is not found
    return 0.0;
  }

 private:
  map<string, double> rates_;
};

class Currency {
 public:
  Currency() = default;
  virtual ~Currency() = default;

  virtual double ConvertedToDollars(const Cantor& cantor) const = 0;
  virtual string Abbreviation() const = 0;
  virtual double Amount() const = 0;
};

class Euro : public Currency {
  double amount_;
 public:
  Euro(const double amount) : amount_(amount) {}

  double ConvertedToDollars(const Cantor& cantor) const override
  {
    double rate = cantor.Rate("EUR");
    return amount_ / rate;
  }

  string Abbreviation() const override {
    return "EUR";
  }

  double Amount() const override {
    return amount_;
  }

};

int main() {
  double value;
  string abb;

  cin >> value;
  cin >> abb;

  Euro euro(value);

  if(abb=="USD")
  {
    cout  << euro.Amount() << " " << euro.Abbreviation() << " is "<< euro.ConvertedToDollars(FakeUsdCantor()) << " USD" << endl;
  }
  
  return 0;
}
