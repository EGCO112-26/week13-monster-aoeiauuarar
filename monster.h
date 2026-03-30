//
//  monster.h
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#ifndef monster_h
#define monster_h
class monster{
private:
    string name;
    int hp,potion;
public:
    void Attack(monster &);
    void heal();
    monster(string="T", int=100,int=5);
    ~monster();
};

monster::monster(string na, int h,int p){
    name = na;
    h>200?hp=200:hp=h;
    p>10?potion=10:potion=p;

    cout<<setw(10)<<"Monster : "<<name<<endl<<setw(10)<<"HP : "<<hp<<endl<<setw(10)<<"Potion : "<<potion<<endl;
}

monster::~monster(){
    cout<<"Bye bye"<<" Monster : "<<name<<endl;
}

#endif /* monster_h */
