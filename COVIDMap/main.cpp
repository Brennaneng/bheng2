#include "ReadFile.h"
#include "MapOutput.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;
using namespace functions;

struct AirPortNode{
        bool exists;
        string name;
        double x;
        double y;

        AirPortNode(const bool& exists_, const string& name_,const double& x_, const double& y_) : exists(exists_), name(name_),x(x_),y(y_)
        {}
        AirPortNode() : exists(NULL), name("n/a"), x(0), y(0)
        {}

    };

int main() {
        AirPortNode curr(true,"airport", 120, 1221);
        AirPortNode temp = curr;
        AVLTree<int,AirPortNode> tree;
        tree.insert(1,curr);
        cout<<curr.exists<< " "<<curr.name<<" "<<curr.x<<" "<<curr.y<<endl;
        curr.exists = false;
        curr.name = "land";
        tree.replace(1,curr);
        temp = tree.find(1);
        cout<<temp.exists<< " "<<temp.name<<" "<<temp.x<<" "<<temp.y<<endl;

        
        





    // vector<vector<string>> file = read_file();
    // vector<pair<int,int>> routeFile = read_routes();
    // Map test(file, routeFile);
    // vector<int> print = test.printTree();
    // for(unsigned i = 0; i < print.size(); i++){
    //     cout<< print[i] << " " << file[i][1] <<endl;
    // }
    // vector<pair<int,int>> routes = test.printRoutes();
    // for(unsigned i = 0; i < routes.size(); i++){
    //     cout<< test.getValue(routes[i].first)<< " goes to "<< test.getValue(routes[i].second)<<endl;
    // }


    // vector<int> solnTraversal;
    // solnTraversal.push_back(4);
    // solnTraversal.push_back(1);
    // solnTraversal.push_back(5);
    // std::vector<string> solnFuncCalls;
    // solnFuncCalls.push_back("rotateLeft");
    //
    // CSV reading;
    // vector<vector<string> >  dataVector = read_file();
    // for(unsigned int i = 0; i < dataVector.size(); i++){
    //     for(unsigned int j = 0; j < dataVector[0].size(); j++){
    //         cout<<dataVector[i][j] <<" ";
    //     }
    // }
    // if ((dataVector.back()).back() == "/n") {
    //     cout<< (dataVector.back()).back()<< "ok" << endl;
    // } 
    
    return 0;
}