#pragma once
#include <iostream>

class StdString : public String {       

public:
  StdString(const char *std_sz = "");
  StdString(const StdString &std_sz);
  ~StdString();

  const int getClassType() const;

  const StdString& operator =(const StdString &std_sz);

  const StdString& operator+=(const char *std_sz);
  operator const char*() const;
  operator StdString*() const;
  char& operator[](int index);
  const char operator[](int index) const;

  friend std::istream& operator>>(std::istream &in, StdString &std_sz);
  friend std::ostream& operator<<(std::ostream &out, const StdString &std_sz);

private:
  char *sz;
  int classType;
};
