#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    ofstream file;
    string line;
    file.open("Text1.txt",ios::in|ios::out|ios::trunc);
    if(!file){
        cout<<"Error in creating file!";
        return 0;
    }
    cout<<"File created successfully!"<<endl;
    while(file){
        getline(cin,line);
        if(line=="\0"){
            break;
        }
        file<<line<<endl;
    }
    file.close();
    ifstream fin;
    fin.open("Text1.txt");
    fin.seekg(0,ios::beg);
    int i =1;
    string array[50];
    while(!fin.eof()){
        getline(fin,line);
        array[i]=line;
        cout<<"Array Index "<< i<<":"<<array[i]<<endl;
        ++i;
    }
    fin.close();
}