#ifndef LIST_H
#define LIST_H

#include <iostream>

using namespace std;

class List {
public:
  int* index;
  double* data;
  int start;
  int len;

  List(int n);
  ~List();

  void next();
  void add(double a);
  void del();
  void print();
  friend ostream& operator <<(ostream& o, List& l);
  double& operator *();

private:
  int add1(int i, int free);
  int del1(int i);
};

#endif // LIST_H
