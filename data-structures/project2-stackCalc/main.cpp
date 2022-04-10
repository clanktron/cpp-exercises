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

//#include "stack.hpp"

template <typename E>
class stack {
    enum { DEF_CAPACITY = 100 };
private:
    E* data;
    int capacity;
    int index;

public:
    // default stack capacity
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
  //  if (empty()) throw StackEmpty("Topofemptystack");
    return data[index];
}

template <typename E> void stack<E>::push(const E& e){
   // if (size() == capacity) throw StackFull("Pushtofullstack");
    data[++index] = e;
}

template <typename E> void stack<E>::pop(){
   // if (empty()) throw StackEmpty("Popfromemptystack");
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

calculator::calculator(string inForm){
    setExpr(inForm);
}

int calculator::precedence(char c){
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
    string result;
    for(int i = 0; i < in.length(); i++) {
        char c = in[i];

        if((c >= '0' && c <= '9' )|| c==' ')
            result += c;
     
            
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
    post = result;
    result.erase(remove(result.begin(), result.end(), ' '), result.end());
    return result;
}

int calculator::eval(){
      for (int i = 0; post[i]; ++i)
      {
          
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

void calculator::setExpr(string infix){
    in = infix;
}

string calculator::getExpr(){
    return in;
}

using namespace std;

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
