#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // creating a file 
    ofstream Myfile("filehandling.txt");
    Myfile<<"File handling: \nthere are classes involved in fstream"<<endl;
    Myfile<<"ifstream : helps in reads the files"<<endl;
    Myfile<<"ofstream : helps in creating files and writing them"<<endl;
    Myfile<<"fstream : combination of ifstream and ofstream"<<endl;
    Myfile.close();
    // reading the file
    string myText;
    ifstream MyReadFile("filehandling.txt");
    while(getline(MyReadFile,myText))
    {
        cout<<myText<<endl;
    }
    MyReadFile.close();
}