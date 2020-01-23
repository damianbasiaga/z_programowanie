#include "tstring.h"
#include <iostream>

TString fun(const char* c){
    return TString(c);
}

using namespace std;
using namespace MojeOperatory;
int main(){
   TString s1=("inicjalizacja slowem");
    //s1.insert(0," na poczatek ");
    //s1.erase(0, (s1.size()/2));
    TString s2("inicjalizacja slowem 123");
    //TString s3 (s2);
    //s3=s2;
    //s3="alfa beta";
    //TString s4 = std::move(s2);
    //TString s3 = std::move(s1);
   // TString s4 ("test");
    //TString s5 = fun("konstruktor przenoszący");
    //TString s6 = s4;
    //cout<<s1[3]<<endl;
    //for(auto n : s1) {++n;} endl(cout);
    //for(const auto& n : s1) cout<< n << " - ";cout<<endl;
    //cout<<"zawartosc s5: "<< s5 << endl;
    cout << s1+s2<<endl;
    s1=s1 + "ten argument niedopasowany, a dziala";
    s1+=s1;
    
    }; 