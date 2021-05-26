#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

class Pascal_matrix{
private:
  vector<vector<int>>numbers;
  int num_rows;
public:
  Pascal_matrix(int n) {
    num_rows = n;
    numbers = vector<vector<int>> (n, vector<int>(n, -1)); //declaring array; using -1 to catch errors

    //calculate the array of coefficients
    bool finish = false;
    for(int row = 0; row < num_rows; row++){
      for(int col = 0; col <= row; col++){
	  if((col == 0) || (col == row)){
	    numbers.at(row).at(col) = 1;
	  }else{
	    numbers.at(row).at(col) = numbers.at(row-1).at(col-1) + numbers.at(row-1).at(col);
	  }
      }
      if(finish) break;
    }
  }

  //methods:
  int get(int i, int j) {  // coefficients at i,j 
    return (numbers.at(i).at(j));
  }

  void print_pascal() {   // print out pascal triangle
    for(int row = 0; row < num_rows; row++){
      cout << (row+1) << string(((num_rows - row)), ' ');  // spacing and labeling for the rows
      for (int col = 0; col <= row; col++){
        cout << get(row,col) << " ";
      }
      cout << endl;
    }
  }

  void print_star(int m){  // print out star triangle
    for(int row = 0; row < num_rows; row++){
      cout << (row+1) << string(((num_rows - row)), ' '); // spacing and labeling for the rows again
      for (int col = 0; col <= row; col++){
	int coeff = get(row,col);
        if (coeff % m != 0){
          cout << "* ";
        }else{
          cout << "  ";
        }
      }
      cout << endl;
    }
  };
};

int main(){
  int n, m;
  cin >> n;
  cin >> m;
  Pascal_matrix test(n);
  test.print_pascal();
  test.print_star(m);
  return 0;
}
