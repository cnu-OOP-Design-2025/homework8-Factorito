#include "game.h"

 
   int Knight::getAttack() const {
        return 70;
    }
    int Knight::getSpeed() const{
        return 40;
    }
   int Knight::getDefense() const{
        return 80;
    
    }




  
    int Wizard:: getAttack() const{
        return 50;
    } 
    int Wizard::getSpeed() const{
        return 50;
    }
    int Wizard:: getDefense() const{
        return 30;
    }


    int Archer ::getAttack() const {
        return 60;
    }
    int Archer ::getSpeed() const {
        return 70;
    } 
    int Archer ::getDefense() const {
        return 40;
    }


int Armor::getSpeed() const{
        return character->getSpeed()-5;
}
int Armor ::getDefense() const{
        return character->getDefense()+30;
}
int Armor:: getAttack() const{
    return character->getAttack();
}
string Armor:: getDescription() const{
    return character->getDescription() + ", Armor";
}

int Boots:: getDefense() const{
    return character->getDefense();
}
int Boots:: getSpeed()  const{
    return character->getSpeed()+15;
}
int Boots:: getAttack() const{
    return character->getAttack();
}
string Boots:: getDescription() const{
    return character->getDescription() + ", Boots";
}
 

int Staff::getAttack() const {
        return character->getAttack()+20;
    }
int Staff:: getSpeed() const{
        return character->getSpeed();
}
int Staff:: getDefense() const{
        return character->getDefense();
}
string Staff:: getDescription() const{
    return character->getDescription() + ", Staff";
}


int Sword:: getAttack() const{
    return character->getAttack()+30;
    }
int Sword:: getSpeed() const{
        return character->getSpeed();
}
int Sword:: getDefense() const{
        return character->getDefense();
}
string Sword:: getDescription() const{
    return character->getDescription() + ", Sword";
}

int Bow:: getAttack() const{
    return character->getAttack()+25;
    }

int Bow:: getSpeed() const{
        return character->getSpeed();
}
int Bow:: getDefense() const{
        return character->getDefense();
}
string Bow:: getDescription() const{
    return character->getDescription() + ", Bow";
}

