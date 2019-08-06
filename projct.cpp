#include<cstdio>
#include<iostream>
using namespace std;
class veh_record
{
char date[20];
char veh_type[20];
char veh_number[20];
char veh_owner[20];

char entry_time[20];
char exit_time[20];
char park_place[20];
char goods[20];

public:void read_data()
{
FILE * fp;
fp=fopen("abc.txt","a+");
cout<<"enter date\n";
cin>>date;
cout<<"enter the type of vehicle(ex:car,bike,etc)\n";
cin>>veh_type;
cout<<"enter the vehicle number\n";
cin>>veh_number;
cout<<"enter the name of veh_owner\n";
cin>>veh_owner;
cout<<"enter the entry time\n";
cin>>entry_time;
cout<<"enter the exit time\n";
cin>>exit_time;
cout<<"place of parking\n";
cin>>park_place;
cout<<"enter the good carried in the vehicle\n";
cin>>goods;
fputs("vehicle details are:\n",fp);

fprintf(fp,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",date,veh_type,veh_number,veh_owner,entry_time,exit_time,park_place,goods);
fclose(fp);
}

void display_data()
{cout<<"\n";
cout<<"------------------xxx------------------"<<endl;
	cout<<"\n";
	cout<<"The vehicle details are:\n";
cout<<"Date entered is: "<<date<<endl;
cout<<"The vehicle entered is: "<<veh_type<<endl;
cout<<"Vehicle number: "<<veh_number<<endl;
cout<<"Owner of the vehicle is: "<<veh_owner<<endl;
cout<<"Vehicle at entered at: "<<entry_time<<endl;
cout<<"Vehicle Exited at: "<<exit_time<<endl;
cout<<"Vehicle to be parked at: "<<park_place<<endl;
cout<<"Goods carried by the owner: "<<goods<<endl;
cout<<"------------------xxx------------------"<<endl;

}
};
 main()
{

int n,i;
char choice;
veh_record e[n];

	while(1)
	{cout<<"enter the choice:"<<endl;
	 cout<<"press 1 to enter details"<<endl;
	 cout<<"press 2 to display entered data"<<endl;
	 cout<<"press 3 to view previous records\n";
	 cout<<"press 4 to exit"<<endl;
	 cin>>choice;
	switch(choice)
	{
		case '1':cout<<"enter the no of vehicles in queue\n";
	cin>>n;


	cout<<"enter the details of vehicle entry\n";
for(i=1;i<=n;i++){
	e[i].read_data();

	}break;

       case '2':	for(i=1;i<=n;i++)
	{
		e[i].display_data();
}break;

        default:cout<<"wrong option\n";
        break;

	}
}
}










