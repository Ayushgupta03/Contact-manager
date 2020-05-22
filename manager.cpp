#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,long long int> contact;
    cout<<"Welcome to the contact manager-------------------------------------"<<endl;
    int n;    
    cout<<"Choose the operation-------"<<endl;    
    while(true){
    cout<<"type 1 for insertion,2 for searching,3 for displaying, 4 for ending the program,5 for editing the contact"<<endl;
    cin>>n;	
	switch(n)
    {
        case 1:
         {  
            long long int num;
			string name; 
            cout<<"Enter the name"<<endl;
            cin>>name;
            cout<<"Enter the number"<<endl;
            cin>>num;
            contact.insert(make_pair(name,num));
            break;
        }
        case 2:
        {	
        	cout<<"searching of an element"<<endl;
        	string name1;
        	cout<<" enter the name"<<endl;
        	cin>>name1;
        	map<string,long long int>::iterator it = contact.find(name1);
        	if(it== contact.end())
        		cout<<"not present"<<endl;
        	else
			{
				cout<<"the contact details are.."<<endl<<it->first<<" "<<it->second<<endl;
			}	
        	break; 
		}
		case 3:
		{
			cout<<"The contact list is:-"<<endl;
			map<string,long long int>::iterator it;
			for( it=contact.begin();it!=contact.end();it++)
			{
				cout<<it->first<<" "<<it->second<<endl;	
			}
			break;		
		}
		case 5:
		{
			cout<<"Editing of a contact"<<endl<<"type the name of contact you want to edit"<<endl;
			string name;
			cin>>name;
			map<string,long long int>::iterator it = contact.find(name);
        	if(it== contact.end())
        		cout<<"contact does not exist"<<endl;
        	else
			{
				cout<<"the contact details are.."<<endl<<it->first<<" "<<it->second<<endl;
				cout<<"Want to edit name or number,1 for name,2 for edit"<<endl;
				int temp;
				cin>>temp;
				if(temp==1)
				{
					cout<<"enter new name"<<endl;
					string s;
					cin>>s;
					long long int q = it->second;
					contact.erase(it);
					contact.insert(make_pair(s,q));
					cout<<"done!"<<endl;
				}
				else if(temp==2)
				{
					cout<<"enter new number"<<endl;
					long long int q;
					cin>>q;
					it->second = q;
					cout<<"done!"<<endl;
				}
				else
					break;
			}
			break;
		}	
    }
    if(n == 4)
    	break;
    }
    return 0;
}
