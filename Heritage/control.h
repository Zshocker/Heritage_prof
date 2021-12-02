#pragma once
 #include<iostream>
 using namespace std;
 class Legume {
	 Legume& operator=(const Legume& P) = delete;
	 Legume(const Legume& P) = delete;
	 Legume(int i = 0) : i(300) { }
	 int i;
 public:
	 Legume& operator()(int s);
	 void show() { cout << "i: " << i; }

	 Legume& operator()(int s) {
		 i = s;
		 return *this;
	 }
 public:  static Legume* clone(Legume& pt) {
		 Legume* p = new Legume();
		 p->i = pt.i;
		 return p;
	 }

 public:  static Legume& creator(int a) {
	 Legume* p = new Legume(a);
	 return *p;
 }
 };

 int main()
 {
	 Legume *pt=&Legume::creator(500), * A;
	 Legume* B = Legume:: clone(*pt);
	 A = B;
	 (*A).show();
	 return 0;
 }
