#include <iostream>
#include <string>
using namespace std;
 

class Laptop {                          
protected:
string laptop;
double wartosc;
 
public:
Laptop(){
laptop = "Cena laptopa w wersji podstawowej";
wartosc=0;
}
 
virtual string about(){
return laptop;
}
 
virtual double cena(){
return wartosc;
}
};
 

class Dekorator : public Laptop {
 
public:
virtual string about(){
return "dodatek";
}
};
 
 
class Acer : public Laptop { /* przyk3adowe marki laptopów */
 
public: Acer():Laptop(){
laptop = "Acer";
wartosc=2000;
}
 
};
 
class Dell : public Laptop {
 
public: Dell():Laptop(){
laptop = "Dell";
wartosc=2300;
}
 
};
 

class Dysk : public Dekorator {
Laptop *com;
 
public: Dysk(Laptop *laptop):Dekorator(){
com = laptop;
}
 
string about(){
return com->about() + " z dyskiem SSD 1Tb";
}
 
double cena(){
return com->cena()+700;
}
};
 
class RAM : public Dekorator {
Laptop *com;
 
public: RAM(Laptop *laptop):Dekorator(){
com = laptop;
}
 
string about()
{
return com->about() + " z RAM 8Gb";
}
 

double cena()
{
return com->cena() + 300;
}
};
 
 
int main(){
 
Laptop *s1 = new Acer();
Laptop *s2 = new Dell();
 
cout<<"\nCena laptopa w wersji podstawowej"<<endl;
cout<<s1->about()<<" "<<s1->cena()<<endl;
cout<<s2->about()<<" "<<s2->cena()<<endl;
 

s1 = new Dysk(s1);
s2 = new Dysk(s2);
cout<<"\nZ Dyskiem SSD 1Tb"<<endl;
cout<<s1->about()<<" "<<s1->cena()<<endl;
cout<<s2->about()<<" "<<s2->cena()<<endl;
 

 
s1 = new RAM(s1);
s2 = new RAM(s2);
cout<<"\nZ RAM 8Gb"<<endl;
cout<<s1->about()<<" "<<s1->cena()<<endl;
cout<<s2->about()<<" "<<s2->cena()<<endl;
 

cout<<"\nCena pelnego wyposazenia laptopa"<<endl;
Laptop *s3 =  new RAM( new Dysk( new Acer()));
cout<<s3->about()<<" "<<s3->cena()<<endl;
Laptop *s4 =  new RAM( new Dysk( new Dell()));
cout<<s4->about()<<" "<<s4->cena()<<endl;
 
system("PAUSE");
return 0;
}
