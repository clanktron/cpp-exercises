//
//  main.cpp
//  project-2
//
//  Created by Clayton Castro on 11/10/21.
//
#include <sstream>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//basic stack template class
template <typename E>
class stack {
    enum { DEF_CAPACITY = 100 };
private:
    E* data;
    int capacity;
    int index;
public:
    stack(int cap = DEF_CAPACITY);
    int size() const;
    bool empty() const;
    const E& top();
    void push(const E& e);
    void pop();
    };

template <typename E> stack<E>::stack(int cap)
: data(new E[cap]), capacity(cap), index(-1) { }

template <typename E> int stack<E>::size() const{
    return (index + 1);
}

template <typename E> bool stack<E>::empty() const{
    return (index < 0);
}

template <typename E> const E& stack<E>::top(){
    return data[index];
}

template <typename E> void stack<E>::push(const E& e){
    data[++index] = e;
}

template <typename E> void stack<E>::pop(){
    --index;
}


class calculator{
private:
    stack<int> operands;
    stack<char> operators;
    string in;
    string post;
    int precedence(char c);
public:
    calculator(string inForm);
    string postfix();
    int eval();
    void setExpr(string infix);
    string getExpr();
};
//constructor
calculator::calculator(string inForm){
    //call initialization function
    setExpr(inForm);
}

int calculator::precedence(char c){
    //private utility function for determining priority of evaluation (PEMDAS)
        if(c == '^')
            return 3;
        else if(c == '/' || c=='*' || c=='%')
            return 2;
        else if(c == '+' || c == '-')
            return 1;
        else
            return -1;
}

string calculator::postfix(){
    //initialize variable for storing output
    string result;
    //evaluate each character one by one, arrange in postfix form
    for(int i = 0; i < in.length(); i++) {
        char c = in[i];
        //add operands to output
        if((c >= '0' && c <= '9' )|| c==' ')
            result += c;
        //use the operator stack to adjust position of the operators
        else if(c == '(')
            operators.push('(');
     
        else if(c == ')') {
            while(operators.top() != '(')
            {
                result += operators.top();
                operators.pop();
            }
            operators.pop();
        }
     
        else {
            while(!operators.empty() && precedence(in[i]) < precedence(operators.top())) {
                result += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }
    
        while(!operators.empty()) {
            result += operators.top();
            operators.pop();
        }
    //store answer with spaces for arithmetic purposes (multi-digit numbers need to stay separated/tokenized)
    post = result;
    //erase spaces for output purposes
    result.erase(remove(result.begin(), result.end(), ' '), result.end());
    return result;
}

int calculator::eval(){
      for (int i = 0; post[i]; ++i)
      {
          //use spacing as delimiter/indicator for each value
          if(post[i] == ' ') continue;
          else if (isdigit(post[i])){
              int num=0;
           
              while(isdigit(post[i])){
                  num = num * 10 + (int)(post[i] - '0');
                  i++;
              }
              i--;
              operands.push(num);
          }

          //merge values with proper math operators
          else
          {
              int val1 = operands.top();
              operands.pop();
              int val2 = operands.top();
              operands.pop();
              switch (post[i]){
                  case '+': operands.push(val2 + val1);
                      break;
                  case '-': operands.push(val2 - val1);
                      break;
                  case '*': operands.push(val2 * val1);
                      break;
                  case '/': operands.push(val2/val1);
                      break;
                  case '^': operands.push(pow(val2, val1));
                      break;
                  case '%': operands.push(val2%val1);
                      break;
              }
          }
      }
      return operands.top();
}
//basic initialization function
void calculator::setExpr(string infix){
    in = infix;
}
//basic getter function
string calculator::getExpr(){
    return in;
}


int main(int argc, const char * argv[]) {

    cout << "Clayton's Calculator Enter 0 to exit the program.\n";
    string input;
    while(input!="0"){
        cout << "Enter an expression: ";
        getline(cin, input);
        calculator x(input);
        cout << "Postfix expression: " << x.postfix() << endl;
        cout << "Result: " << x.eval() << endl;
    }
    cout << "Thanks for using my calculator." << endl;
    
    return 0;
}
