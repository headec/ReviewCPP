#include "Seq.h"
#include <iostream>
using namespace std;

int main() {
//sequence of integers  
   Seq<int> s;     
 cout<<endl<<"ADD SOME NUMBERS TO THE LIST"<<endl<<endl;
	   s.add(5);
	   s.add(9);
	   s.add(10);
	   s.add(20);
	   s.display();
 cout<<endl<<endl<<"REMOVE 10"<<endl<<endl;
	   s.remove(10);
	   s.display();
 cout<<endl<<endl<<"INSERT 30 AT POSITION 2"<<endl<<endl;
   	   s.insertAt(30,2);
  	   s.display();
  	cout<<endl<<endl<<endl;
//sequence of strings
   Seq<string> y;
 cout<<"ADD SOME STRINGS TO A DIFFERENT LIST"<<endl<<endl;
	   y.add("Hello World!");
	   y.add("Hi");
	   y.add("My name is Billy!");
	   y.display();
 cout<<endl<<endl<<"REMOVE ( Hi )"<<endl<<endl;

	   y.remove("Hi");
           y.display();
 cout<<endl<<endl<<"INSERT ( Hi Billy ) AT POSITION 2"<<endl<<endl;
	   y.insertAt("Hi Billy",2);
	   y.display();
 cout<<endl<<endl<<endl;

//sequence of floats
   Seq<float> z;
 cout<<"ADD SOME FLOATING NUMBERS TO A DIFFERENT LIST"<<endl;
	   z.add(1.9889);
	   z.add(3.9909);
	   z.add(4.2030);
 cout<<endl<<endl<<"REMOVE 3.9909"<<endl<<endl;
	
           z.remove(3.9909);
           z.display();

 cout<<endl<<endl<<"INSERT 6.9901 AT POSITION 2"<<endl<<endl;
	   z.insertAt(6.9901,2);
	   z.display();

 cout<<endl<<endl<<endl;


  cout<<endl;
   return 0;
}

