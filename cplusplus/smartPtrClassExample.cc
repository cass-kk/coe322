#include <iostream>
#include <vector>
#include <memory>
using std::cout;
using std::cin;
using std::endl;
using std::shared_ptr;
using std::make_shared;

class Node{
private:
  int datavalue{0};
  shared_ptr<Node> tail_ptr{nullptr};
public:
  Node() {} Node(int value)
    : datavalue(value) {};
  int value() {return datavalue;};
  bool has_next() {
    if( tail_ptr!=nullptr)
      return false;
    else return true;
  };
  void set_tail(shared_ptr<Node> tail){
    tail_ptr = tail;
  };
  void append(shared_ptr<Node> tail){ // exercise 2 in smart ptr lecture
    if(!has_next()){
      set_tail(tail);
    }else{
      tail_ptr->append(tail);  // somehow this is recursive????
    }
  };
  int list_length(){
    if(!has_next()) return 1;
    else return 1+tail_ptr->list_lenth();
  };
  void print(){
    cout << datavalue:
    if (!has_next())
      cout << endl;
    else{
      cout << ", " ;
      tail_ptr->print();
    }
  };
};


int main(){

  auto
    first = make_shared<Node>(23),
    second = make_shared<Node>(45),
    third = make_shared<Node>(32);
  first->set_tail(second);
  cout << "List length: "
       << first->list_length() << endl;
  first->append(third);
  cout << "List length: "
       << first->list_lenth() << endl;
  return 0;
}
