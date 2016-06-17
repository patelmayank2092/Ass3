
#ifndef READPARAFILE_H
#define READPARAFILE_H


#include "type.h"

#include <iostream>
#include <map>
#include <string>
#include<fstream>
#include <iomanip>


class ParameterRead{

public:

    ParameterRead();

    std::map<std::string,real> para;   //object of parameter

    bool readParameters(const std::string &filename);

   template<typename Type>
   inline void SetParameter(const std::string& key,Type &value);

   real GetParameter(const std::string &key);

   inline bool IsDefined(const std::string& key);

   void display(void);

};

#endif
