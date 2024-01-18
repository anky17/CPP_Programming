#include<iostream>
#include<fstream>
using namespace std;

int main(){
  fstream file("ankit.txt", ios::in | ios::out | ios::app);
  if(!file.is_open()){
    cout<<"Error in the file openeing."<<endl;
  }
  else{
    cout<<"File opened successfully."<<endl;
    cout<<"Writing to the file."<<endl;
    file<<"Ankit is learning file handling."<<endl;
  }
  file.seekg(0);
  string ch;
  while(file.good()){
    getline(file,ch);
    cout<<ch<<endl;
  }

}