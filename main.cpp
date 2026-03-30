//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
#include <iomanip>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    int n = 10;
    int h,pt;
    string na;
    monster* a[10];
    for(int i = 0;i<n;i++){
        cout << "Enter Monster " << i+1 << " (Name HP Potion): ";
        cin>>na>>h>>pt;
        a[i] = new monster(na, h, pt);
    }
    
    for(int i = 0; i < n; i++){
        delete a[i];
    }
    return 0;
}
