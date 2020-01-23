#ifndef OPERATORY_H
#define OPERATORY_H
#include <iostream>
#include <fstream>

class TString;
namespace MojeOperatory{
    std::ostream& operator<<(std::ostream& strumien, const TString& s);
    TString operator+( const TString& a, const TString& b );
    TString& operator+=( TString& a, const TString& b ); 
}
#endif