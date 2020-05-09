
#include <iostream>
using namespace std;

class hashtable{
private:
    int arr[27]={0};
public:
    int hash(int x){
        return x%27;
    }
    void add(int newvalue){
        int y = hash(newvalue);
        while(true){
            if(arr[y] == 0){
                arr[y]=newvalue;
                break;
            }
            else{
                y++;
            }
        }
        
    }
    int search(int value){
        int y = hash(value);
        while (true){
            if(y>=27){
                return -1;
            }
            else if (arr[y]==value){
                return y;
            }
            else{
                y++;
            }
        }
    }
};

int main(){
    hashtable test;
    int x;
    while (true){
        cout<<endl<<endl<<endl<<"enter 0 to add, 1 to search hashtable, and -1 to quit:  ";
        cin>>x;
        if(x==0){
            cout<<endl<<endl<<"enter an int to be added to hashtable:  ";
            cin>>x;
            test.add(x);
        }
        else if(x==1){
            cout<<endl<<endl<<"enter an int to search in hashtable:  ";
            cin>>x;
            int z =test.search(x);
            if (z!=-1){
                cout<<endl<<endl<<"integer "<<x<<" at index "<<z;
            }
            else{
                cout<<endl<<endl<<"integer not in hashtable";
            }
        }
        else if (x==-1){
            break;
        }
        
    }
    
    
}
