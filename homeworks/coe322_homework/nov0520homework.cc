#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <memory>
using std::make_shared;
using std::shared_ptr;

class Node{
private:
  int datavalue{0};
  shared_ptr<Node> tail_ptr{nullptr};
public:
  Node() {} Node(int value) : datavalue(value) {};

  int value() {
    return datavalue;
  };

  bool has_next(){
    if(tail_ptr == nullptr){
      return false;
    }else{
      return true;
    }
  };

  void set_tail(shared_ptr<Node> number){
    tail_ptr = number;
  };

  void insert(shared_ptr<Node> number){
    if(!has_next()){                                      // if tail_ptr = nullptr, then tail_ptr = number
      set_tail(number);
    }else if(shared_ptr<Node> (number) < (tail_ptr)){     // if input datavalue < last datavalue
      auto
	temp = tail_ptr;
      tail_ptr = number;                                  // then switch the pointers and insert into list with recursion
      insert(temp);
    }else{
      tail_ptr->insert(number);                           // recursion of function
    }
  };

  void print (){
    cout << datavalue;
    if(!has_next()){
      cout << endl;
    }else{
      cout << ", ";
      tail_ptr->print();
    };
  };
};



int main(){
  auto
    head = make_shared<Node>(0);

  int data;
  cin >> data;

  while(data > 0){
    //make new node here
    auto
      newNode = make_shared<Node>(data);
    head->insert(newNode);
    head->print();
    cin >> data;
  }
  return 0;
}
