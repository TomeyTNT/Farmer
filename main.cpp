#include <iostream>
#include "Farmer.h"
#include "AgricultureTools.h"
using namespace std;
int main() {

    AgricultureTools *agricultureTools = new AgricultureTools("bil" , "wheat");
    Farmer *farmer = new Farmer("AMIN" , "AHMADI " , 32,*agricultureTools);
    cout<<farmer->getName()<<"\n";
    cout<<farmer->getLastName()<<"\n";
    cout<<farmer->getAge()<<"\n";
    cout<<farmer->getAgricultureTools().getTools()<<"\n";
    cout<<farmer->getAgricultureTools().getBazr()<<"\n";


    return 0;

}
