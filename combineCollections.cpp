#include "combineCollections.h"

string combineCollections(const string &a, const string &b){
    string tmp;
    tmp=a+b;
    int charPos;
    for(int i=0; i<tmp.length(); i++){
        charPos=tmp.charPos(tmp[i]);
        while(charPos!=i){
            tmp.erase(charPos, charPos);
            charPos=tmp.charPos(tmp[i]);
        }
    }
    return tmp;
}