#include <iostream>
using namespace::std;
double input(string text){
double n;
cout<<"input Nilai "<<text<<" : "; cin>>n;
return n;
}

void grade (double n){
if     (n>81)
    {cout<<" (A)";}
else if(n>61)
    {cout<<" (B)";}
else if(n>41)
    {cout<<" (C)";}
else if(n>21)
    {cout<<" (D)";}
else
    {cout<<"(E)";}
}

struct wow{
double uts, uas, tug, k;};

main(){
float n;

wow ok;

ok.uts = input("UTS");
ok.uas = input("UAS");
ok.tug = input("TUGAS");
ok.k = input("KEHADIRAN");
n=(ok.uts*20/100)+(ok.uas*30/100)+(ok.tug*35/100)+(ok.k*15/100); cout<<"Nilai Akhir : " <<n;
grade(n);
}



