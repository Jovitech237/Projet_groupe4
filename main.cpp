#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int reste = 0;
    int resultat = 0;
    cout<<"entrer un nombre"<<endl;
    cin>>number;
    for(int i=1;i<=number - 1; i++) {
            reste = number % i;
            if(reste == 0) {
                resultat = i+resultat;
            }
    }
    if(resultat == number){
        cout<< number<<" : est un nombre parfait"<<endl;;
    }else{
        cout<<number<<" : est un nombre imparfait"<<endl;
    }

    return 0;
}
