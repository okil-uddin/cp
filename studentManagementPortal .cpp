#include<bits/stdc++.h>
using namespace std;
int main(){

    vector <int> studentID;
    int select,id;

    while(true){
        cout<<"*******Register Portal********\n";
        cout<<"1.Register New ID\n";
        cout<<"2.Search ID\n";
        cout<<"3.Delete ID\n";
        cout<<"4.Remove Duplicate\n";
        cout<<"5.Show Registered IDs\n";
        cout<<"6.Exit\n";
        cout<<"Select a oparator : ";
        cin>>select;

        if(select==1){
            cout<<"Enter New ID : ";
            cin>>id;

            studentID.push_back(id);
            cout<<"ID Registered\n\n";
        }
        else if(select==2){
            cout<<"Enter Student ID : ";
            cin>>id;

            bool found = false;
            for(int x: studentID){
                if(x==id){
                    found=true;
                    break;
                }
            }
            if(found){
                cout<<"ID Found\n\n";
            }
            else{
                cout<<"ID Not Found\n\n";
            }
        }
        else if(select==3){
            cout<<"Enter ID To Delete : ";
            cin>>id;

            auto it=find(studentID.begin(), studentID.end(), id);
            if(it!=studentID.end()){
                studentID.erase(it);
                cout<<"ID Deleted\n\n";
            }
            else{
                cout<<"ID Not Found!\n\n";
            }
        }
        else if(select==4){
            sort(studentID.begin(), studentID.end());

            studentID.erase(
                unique(studentID.begin(), studentID.end()),
                studentID.end()
            );
            cout<<"Duplicate Removed\n\n";
        }
        else if(select==5){
            cout<<"Registered IDs : ";

            for (int x : studentID){
            cout << x << " \n";
            }

            cout << endl;
        }
        else if(select==6){
            break;
        }
        else{
            cout<<"Invalid Oparation!";
        }
    }
    return 0;
}