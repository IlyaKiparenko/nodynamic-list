#include "List.h"

List::List(int n) {
	data = new double[n + 2];
	index = new int[n + 2];
	index[0] = 0;
	for (int i = 1; i < n + 1; i++) {
		index[i] = i + 1;
	}
	len = n + 2;
	for (int i = 0; i < len; i++){
		data[i] = 0;
	}	
	index[n + 1] = 1;
	start = 0;
}

List::~List() {
  delete[] data;
  delete[] index;
}

void List::next() {
	start = index[start];
	//if ((start == 0) && (index[0] != 0))
	//	start = index[start];
}
void List::add(double a) {
	if (index[1] != 1) {
		int u = del1(1);
		data[add1(start, u)] = a;
	}
}

void List::del() {
	if (index[start] != 0){
		int u = del1(start);
		add1(1, u);
	}
}

void List::print() {
	for (int i = 0; i < len; i++)
		cout << data[i] << ' ';
	cout <<endl;
	for (int i = 0; i < len; i++)
		cout << index[i] << ' ';
	cout << endl;
	cout << "Start is " << start;
	cout << endl;
}

ostream& operator <<(ostream& o, List& l) {
	int k = l.index[0];
	while (k != 0) {
		o << l.data[k] << ' ';
		k = l.index[k];
	}
	return o;
}

double& List::operator *() {
	if (index[start] != 0)
		return data[index[start]];
  else 
    throw exception();
}


int List::add1(int i, int free) {
	int u = index[i];
	index[i] = free;
	index[free] = u;
	return free;
}

int List::del1(int i) {
	int u = index[i];
	index[i] = index[u];
	return u;
}