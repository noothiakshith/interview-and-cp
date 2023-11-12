#include<iostream>
using namespace std;
class player{
    class Gun{
        public:
        int damage;
        int scope;
        int range;
    };
    public:
    int health;
    int kills;
    int medkit;
    Gun gun;
    public:
    void setgun(Gun gun){
        this->gun=gun;
    }
    Gun getgun(){
        return gun;
    }
    int gethealth(){
        return health;
    }
    void sethealth(int health){
        this->health=health;
    }
    int getkills(){
        return kills;
    }
    void setkills(int kills){
        this->kills=kills;
    }
    int getmedkit(){
        return medkit;
    }
    void setmedkit(int medkit){
        this->medkit=medkit;
    }
};
int main(){
    player akshith;
    akshith.sethealth(10);
    cout<<akshith.gethealth();
    akshith.setkills(100);
    cout<<akshith.getkills();
    akshith.setmedkit(2);
    cout<<akshith.getmedkit();

    player harsha;

    harsha.sethealth(10);
    cout<<harsha.gethealth();
    harsha.setkills(100);
    cout<<harsha.getkills();
    harsha.setmedkit(2);
    cout<<harsha.getmedkit()<<endl;

    player *urvi=new player;
    (urvi)->sethealth(100);
    cout<<(urvi)->gethealth();
    cout<<endl;
    player *sowjanyus = new player;
    sowjanyus->sethealth(200);
    cout<<sowjanyus->gethealth();
    cout<<endl;
    player *ramana= new player;
    ramana->sethealth(300);
    cout<<ramana->gethealth();
    cout<<endl;
    Gun akm;
    akm.setdamage(100);
    akm.setscope(2);
    akm.setrange(100);
    cout<<akm.getun();
    cout<<akm.getscope();
    cout<<akm.getrange();

}