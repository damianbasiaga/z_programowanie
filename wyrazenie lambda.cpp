#include <iostream>
#include <cstdlib>

using namespace std;

auto pokaz =[](string x)->void {cout <<x <<endl; };

int main(){
	string napis="Programowanie";
	pokaz([](string x))->{return x.erase(5,14); }(napis));
	return 0;
}
