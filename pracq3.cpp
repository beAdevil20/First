#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int mainn(){
    string line;
    ofstream file1;
    ifstream file2;
    file1.open("Original.txt",ios::in|ios::out|ios::app);
    if(!file1){
        cout<<"Error in creating file1!";
        return 0;;
    }
    cout<<"File1 created successfully!"<<endl;
    file2.open("Copy.txt",ios::in|ios::out|ios::app);
    if(!file2){
        cout<<"Error in creating file2!";
        return 0;;
    }
    cout<<"File2 created successfully!"<<endl;
    if(file1 && file2){
        while(getline(file2,line)){ 
            file1<<line<<endl;
        }
        cout<<"Copy Finished..."<<endl;
    }
    file1.close(); 
    file2.close();
}