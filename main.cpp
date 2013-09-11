#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main () {
  string line;
  ifstream myfile ("graph1.txt");
  int numVertices;
  int numEdges;
  
  if (myfile.is_open())
  {
    getline (myfile, line);
    
    
    stringstream(line.substr(0, line.find(" ")-1)) >> numVertices;
    int location = line.find(" ");
    stringstream(line.substr(line.find(" ")+1)) >> numEdges;
    
    cout << "Number of Nodes:" << numVertices << endl;
    cout << "Number of Edges:" << numEdges << endl;
    
    
    
    while ( getline (myfile,line) )
    {
      cout << line << endl;
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  getchar();
  return 0;
}
