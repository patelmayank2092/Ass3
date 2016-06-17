
#include "readParaFile.h"

//constructor of ParameterRead class

ParameterRead::ParameterRead(){
;
}

// Read parameter from file
bool ParameterRead::readParameters(const std::string &filename){

 std::string key;
 real value;

 std::ifstream input;
 input.open(filename);

 input>>key>>key;

    while(!input.eof()){
      input>>key>>value;
      this->SetParameter(key,value);
    }
  input.close();

return true;
}

//return value of perticular key
real ParameterRead::GetParameter(const std::string &key){

    std::map<std::string,real>::iterator it;
    it = para.find(key);

return it->second;
}


// To find if key is present or not
bool ParameterRead::IsDefined(const std::string& key){

    std::map<std::string,real>::iterator it;

    it = para.find(key);
    if(it==para.end()) return false;
return true;
}


// to set key and value
template<typename Type>
void ParameterRead::SetParameter(const std::string& key,Type &value){
    para[key] = value;

}


//display key,value
void ParameterRead::display(void){

   for (auto it=para.begin(); it!=para.end(); ++it)
       std::cout << it->first << " => " << it->second << '\n';

}





