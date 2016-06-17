
#include <iostream>
#include <map>
#include <string>
#include "type.h"
#include "readParaFile.h"
#include <iomanip>

#include "particle.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::setprecision;

int main(){

   const std::string s = "epsilon";
    ParameterRead pr;

    std::string filename = "blocks.par";

   bool done =  pr.readParameters(filename);
    std::cout<<pr.GetParameter(s)<<std::endl;

    Particle p;

    p.readDataFile("blocks-small.dat");






 return 0;
}


