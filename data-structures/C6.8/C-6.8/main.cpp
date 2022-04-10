//
//  main.cpp
//  C-6.8
//
//  Created by Clayton Castro on 11/10/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    bool NodeList::validPosition(const NodeList::Iterator& position, const NodeList::Iterator& start) {
     Node* v = start.v;
     Node* check = p.v;
     while(v != NULL){
            if(v->data == check->data) {
                if((v->prev == NULL && check->prev == NULL)||(check->prev->data == v->prev->data)) {
                    if((v->next == NULL && check->next == NULL)||(check->next->data == v->next->data)) {
                        return true;
                    }
                }
                v = v->next;
            }
            return false;
    }

    void NodeList::insert(const NodeList::Iterator& p, const Elem& e) {
        if validPosition(p, begin()) {
            //insert
        }
        else {
            cout << "Position is not in this list. Couldn't insert." << endl;
        }
    }
        
    void NodeList::insert(const NodeList::Iterator& p, const Elem& e) {
        if validPosition(p, begin()) {
            //erase
        }
        else {
            cout << "Position is not in this list. Couldn't erase." << endl;
        }
    }
        
       //elements will be individually checked for matching data, if any are not valid then the function will return false
        //functions with position arguments will be checked using new bool value
        
        
    
}
    return 0;

}
