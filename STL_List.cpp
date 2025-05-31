#include <iostream>
using namespace std;
#include <list>
// If we want faster access : we should use array .
// If we want to delete elements from between : we should use list .
void display(list<int> &lst){
    list<int> ::iterator iter;
    for(iter=lst.begin();iter!=lst.end();iter++){
        cout<<*iter<<' ';
    }
}
int main(){
    list<int> l1; // list of zero list ;
    l1.push_back(1);
    l1.push_back(6);
    l1.push_back(10);
    l1.push_back(3);
    l1.push_back(2);
    // list<int> ::iterator iter;
    // iter = l1.begin();
    // cout<<*iter;
    // iter++;
    // cout<<*iter;
    // iter++;
    // cout<<*iter;
    // iter++;
    // cout<<*iter;
    // iter++;
    // cout<<*iter;
    // iter++;
    // cout<<*l1.begin();
    // cout<<*--l1.end();
    // display(l1);
    
    // List 2:-
    list<int> l2(3); // empty list of length 5;(all elements zero)
    list<int> ::iterator iter = l2.begin();
    *iter=45;
    iter++;
    *iter=4;
    iter++;
    *iter=5;
    iter++;
    // l2.pop_back();
    // l2.pop_front();
    // l2.remove(45);
    // display(l2);
    
    // sorting a list :-
    // l2.sort();
    // l2.merge(l1);

    // Reversing the list :-
    l1.reverse();
    display(l1);
    return 0;
}