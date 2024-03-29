#include <iostream>
#include <cmath>
#include <string>
#include <stdexcept>

using namespace std;

class LogarithmException : public exception {
 public:
  LogarithmException(const string& message):message_(message){}
  const char* what() const noexcept override {
    return message_.c_str();
  }
 private:
  string message_;
};

class InvalidBaseException : public LogarithmException {
 public:
  explicit InvalidBaseException() : LogarithmException("Base must be greater than 0.") {}
};

class InvalidNumberException : public LogarithmException {
 public:
  explicit InvalidNumberException() : LogarithmException("Number must be greater than 0.") {}
};

class UndefinedResultException : public LogarithmException {
 public:
  explicit UndefinedResultException() : LogarithmException("Both base and number cant be 1 at once.") {}
};

class Logarithm {
 public:
  Logarithm(double base, double number) {
    base_ = base;
    number_ = number;
  }
  double Calculate() const {
    if (base_ <= 0)
    {
      throw InvalidBaseException();
    }
    if (number_ <= 0) {
      throw InvalidNumberException();
    }
    if (base_ == 1 && number_ == 1) {
      throw UndefinedResultException();
    }
    return log(number_) / log(base_);
  }
 private:
  double base_;
  double number_;
};

int main() {
float base,number;
cout<<"Give base of log: ";
  cin>>base;

cout<<"Give number: ";
  cin>>number;

  try{
    Logarithm log(base,number);
    cout<<"Solution: "<<log.Calculate()<<endl;
  }
 catch (const LogarithmException& e){
    cerr<<"Error: "<<e.what()<<endl;
  }
  return 0;
}
