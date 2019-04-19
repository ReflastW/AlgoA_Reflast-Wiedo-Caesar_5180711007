#include <iostream>
using namespace::std;

float x(float angk,float pang)
{
    if
        (pang==0)
        return 1;
    else if
        (pang>0)
        {return angk*x(angk,pang-1);}
    else
        return 1/angk*x(angk,pang+1);

}

main()

{
    float angk1,angk2;
cout<<"Masukan Bilangan : ";cin>>angk1;
cout<<"Masukan Pangkat  : ";cin>>angk2;
cout<<"Hasil dari Pangkat (" <<angk1 <<") adalah : " <<x(angk1,angk2);

}
