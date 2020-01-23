#include "tstring.h"
#include "operatory.h"

using namespace std;
ostream& MojeOperatory::operator<<(ostream& strumien, const TString& s){
    return strumien<<(s.ptr ? s.ptr :" pusty ");
  
}
TString MojeOperatory::operator+(const TString& a, const TString& b){
    TString tmp(a);
    tmp.insert(tmp.size(), b);
    return tmp; 
}
TString& MojeOperatory::operator+=(TString& a, const TString& b ) { 
    return a=a+b;
}

  