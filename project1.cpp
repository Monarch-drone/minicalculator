#include<iostream>
using namespace std;

void minicalc(){
    cout<< "welcome to my calculator"<<endl;
    int num1,num2;
    char choice;

    while(true){ 
        cout<<"enter <+> for addition"<<endl;
         cout<<"enter <-> for subtraction"<<endl;
          cout<<"enter <*> for multiply"<<endl;
           cout<<"enter </> for division"<<endl;
            cout<<"enter <%> for remainder"<<endl;
             cout<<"enter <E> for Exit..!"<<endl;
             cout<<"enter your choice"<<endl;
             cin>> choice;

             switch(choice){
                case '+':
                    cout<<"enter two numbers: ";
                    cin>>num1>>num2;
                    cout<<"sum of "<<num1<<"and"<<num2<<"is" <<num1+num2;

                    break;
                case '-':
                    cout<<"enter two numbers: ";
                    cin>>num1>>num2;
                    cout<<"diff of "<<num1<<"and"<<num2<<"is" <<num1-num2;
                    break;
                case '*':
                    cout<<"enter two numbers: ";
                    cin>>num1>>num2;
                    cout<<"prod of "<<num1<<"and"<<num2<<"is" <<num1*num2;
                    break;
                case '/':
            //bug fixed
                    cout<<"enter two numbers: ";
                    cin>>num1>>num2;
                    cout<<"div of "<<num1<<" and "<<num2<<"is" <<num1/num2;

                    break;
                case '%':
                    cout<<"enter two numbers: ";
                    cin>>num1>>num2;
                    cout<<"prod of "<<num1<<"and"<<num2<<"is" <<num1*num2;
                    break;
                case 'E':
                    cout<<"thank you "<<endl;
                    exit(0);
                default:
                    cout<<"enter valid choice"<<endl;
                

             }
             cout<<endl;

    }
    
}
int main() {
                minicalc();
                return 0;
             }
    