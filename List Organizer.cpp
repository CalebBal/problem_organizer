#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
#include "ArgumentManager.h"

using namespace std;


struct node{
	
	
	string diff, name;
	int id;
	node* next;
	node* prev;
	
};




class Linked{
	
	
	private:
		node* head;
		node* tail;
		
	public:
		Linked(){
			head = NULL;
			tail = NULL;
		};
		//void remove(node*);
		void Add_node_end_in(string);
    
		//sort_nodes(node*);
		//void insert_node(node*,int);
		node* gethead();
	
};

void Linked::Add_node_end_in(string problem){
	//cout << problem << endl;

  
 	  
    
    string number, anotherN="", level, hold, name;
    number = problem;
    anotherN = number.erase(number.find(","));
    anotherN = number.substr(number.find(":") + 1);
    stringstream stream(anotherN);

    int id_data,count = 0;
    stream >> id_data;
    //cout << id_data << endl;
	number = problem;
	name = number.erase(number.find(", d"));
  name = number.substr(number.find("e:") + 2);
  number = problem;
 
  level = number.substr(number.find("y:") + 2);
  
	
		
  node* temp;
  temp = new node();
  temp -> name = name;
  temp -> id = id_data;
  temp -> diff = level;
  temp -> next = NULL;
  temp -> prev = NULL;
  
  //cout << temp -> name << endl << temp -> id << endl << temp->diff << endl;
  
  if(head == NULL) {
    head = temp;
  } else{
    node* current = head;
    while (current -> next != NULL) {
      current = current->next;
    }
    current->next = temp;
    temp->prev = current;
}

 


}

void node_C(string command, node* head, int &size){
  
 if(command.find("problem_id increasing")!=-1){
  //cout << "here....line98" << endl;
  node* temp = new node();
  temp -> id = 0;
  temp -> diff = "";
  temp -> name = "";
  temp -> next = NULL;
  temp -> prev = NULL; 
  
  node* cursor;
  node* firstCursor = new node();
  firstCursor = head;

  
   string tempString, tempStr;
   int tempInt;
 
  //cout << "FIND THE END OF THE LIST" << endl;
  while(firstCursor->next != NULL){
    //firstCursor -> Prev = firstCursor; 
    firstCursor = firstCursor -> next;
  }
  //cout << "here....line117" << endl;
  //cout << "HEAD CURSOR " << firstCursor -> Book << endl;
  //cout << "LOOP FIRST" << endl;
  while (firstCursor -> prev != NULL){
  
    cursor = head;

    //cout << "LOOP SECOND" << endl;
    while (cursor != firstCursor){
      
      temp = cursor -> next;
     
      if ((cursor -> id) > (temp -> id)) {
        //cout << "Cursor Before: " << cursor->id << endl;
        //cout << "Temp Before: " << temp -> id << endl;
       

        tempString = temp -> diff;
        //cout << "temp str: " << tempString << endl;
        temp -> diff = cursor -> diff;
        cursor -> diff = tempString;

        tempInt = temp -> id;
        //cout << "temp str: " << tempString << endl;
        temp -> id = cursor -> id;
        cursor -> id = tempInt;

        tempStr = temp -> name;
        //cout << "temp str: " << tempString << endl;
        temp -> name = cursor -> name;
        cursor -> name = tempStr;

      
      }
        
      cursor = cursor->next;
      //cout << "LOOP THIRD " << cursor->Book << endl;

    }
      
    firstCursor = firstCursor -> prev;
    
  }
  


 }

 if(command.find("problem_id decreasing")!= -1){

   //cout << "here....line98" << endl;
  node* temp = new node();
  temp -> id = 0;
  temp -> diff = "";
  temp -> name = "";
  temp -> next = NULL;
  temp -> prev = NULL; 
  
  node* cursor;
  node* firstCursor = new node();
  firstCursor = head;

  
   string tempString, tempStr;
   int tempInt;
 
  //cout << "FIND THE END OF THE LIST" << endl;
  while(firstCursor->next != NULL){
    //firstCursor -> Prev = firstCursor; 
    firstCursor = firstCursor -> next;
  }
  //cout << "here....line117" << endl;
  //cout << "HEAD CURSOR " << firstCursor -> Book << endl;
  //cout << "LOOP FIRST" << endl;
  while (firstCursor -> prev != NULL){
  
    cursor = head;

    //cout << "LOOP SECOND" << endl;
    while (cursor != firstCursor){
      
      temp = cursor -> next;
     
      if ((cursor -> id) < (temp -> id)) {
        //cout << "Cursor Before: " << cursor->id << endl;
        //cout << "Temp Before: " << temp -> id << endl;
       

        tempString = temp -> diff;
        //cout << "temp str: " << tempString << endl;
        temp -> diff = cursor -> diff;
        cursor -> diff = tempString;

        tempInt = temp -> id;
        //cout << "temp str: " << tempString << endl;
        temp -> id = cursor -> id;
        cursor -> id = tempInt;

        tempStr = temp -> name;
        //cout << "temp str: " << tempString << endl;
        temp -> name = cursor -> name;
        cursor -> name = tempStr;

      
      }
        
      cursor = cursor->next;
      //cout << "LOOP THIRD " << cursor->Book << endl;

    }
      
    firstCursor = firstCursor -> prev;
    
  }
  


 }

 if(command.find("problem_name increasing")!=-1){
  //cout << "here....line98" << endl;
  node* temp = new node();
  temp -> id = 0;
  temp -> diff = "";
  temp -> name = "";
  temp -> next = NULL;
  temp -> prev = NULL; 
  
  node* cursor;
  node* firstCursor = new node();
  firstCursor = head;

  
   string tempString, tempStr;
   int tempInt;
 
  //cout << "FIND THE END OF THE LIST" << endl;
  while(firstCursor->next != NULL){
    //firstCursor -> Prev = firstCursor; 
    firstCursor = firstCursor -> next;
  }
  //cout << "here....line117" << endl;
  //cout << "HEAD CURSOR " << firstCursor -> Book << endl;
  //cout << "LOOP FIRST" << endl;
  while (firstCursor -> prev != NULL){
  
    cursor = head;

    //cout << "LOOP SECOND" << endl;
    while (cursor != firstCursor){
      
      temp = cursor -> next;
     
      if ((cursor -> name) > (temp -> name)) {
        //cout << "Cursor Before: " << cursor->id << endl;
        //cout << "Temp Before: " << temp -> id << endl;
       

        tempString = temp -> diff;
        //cout << "temp str: " << tempString << endl;
        temp -> diff = cursor -> diff;
        cursor -> diff = tempString;

        tempInt = temp -> id;
        //cout << "temp str: " << tempString << endl;
        temp -> id = cursor -> id;
        cursor -> id = tempInt;

        tempStr = temp -> name;
        //cout << "temp str: " << tempString << endl;
        temp -> name = cursor -> name;
        cursor -> name = tempStr;

      
      }
        
      cursor = cursor->next;
      //cout << "LOOP THIRD " << cursor->Book << endl;

    }
      
    firstCursor = firstCursor -> prev;
    
  }
  


 }

if(command.find("problem_name decreasing")!=-1){
  //cout << "here....line98" << endl;
  node* temp = new node();
  temp -> id = 0;
  temp -> diff = "";
  temp -> name = "";
  temp -> next = NULL;
  temp -> prev = NULL; 
  
  node* cursor;
  node* firstCursor = new node();
  firstCursor = head;

  
   string tempString, tempStr;
   int tempInt;
 
  //cout << "FIND THE END OF THE LIST" << endl;
  while(firstCursor->next != NULL){
    //firstCursor -> Prev = firstCursor; 
    firstCursor = firstCursor -> next;
  }
  //cout << "here....line117" << endl;
  //cout << "HEAD CURSOR " << firstCursor -> Book << endl;
  //cout << "LOOP FIRST" << endl;
  while (firstCursor -> prev != NULL){
  
    cursor = head;

    //cout << "LOOP SECOND" << endl;
    while (cursor != firstCursor){
      
      temp = cursor -> next;
     
      if ((cursor -> name) < (temp -> name)) {
        //cout << "Cursor Before: " << cursor->id << endl;
        //cout << "Temp Before: " << temp -> id << endl;
       

        tempString = temp -> diff;
        //cout << "temp str: " << tempString << endl;
        temp -> diff = cursor -> diff;
        cursor -> diff = tempString;

        tempInt = temp -> id;
        //cout << "temp str: " << tempString << endl;
        temp -> id = cursor -> id;
        cursor -> id = tempInt;

        tempStr = temp -> name;
        //cout << "temp str: " << tempString << endl;
        temp -> name = cursor -> name;
        cursor -> name = tempStr;

      
      }
        
      cursor = cursor->next;
      //cout << "LOOP THIRD " << cursor->Book << endl;

    }
      
    firstCursor = firstCursor -> prev;
    
  }
  

 }

 if(command.find("difficulty increasing")!=-1){
 // cout << "here....line98" << endl;
  node* temp = new node();
  temp -> id = 0;
  temp -> diff = "";
  temp -> name = "";
  temp -> next = NULL;
  temp -> prev = NULL; 
  
  node* cursor;
  node* firstCursor = new node();
  firstCursor = head;

  
   string tempString, tempStr;
   int tempInt;
 
  //cout << "FIND THE END OF THE LIST" << endl;
  while(firstCursor->next != NULL){
    //firstCursor -> Prev = firstCursor; 
    firstCursor = firstCursor -> next;
  }
  //cout << "here....line117" << endl;
  //cout << "HEAD CURSOR " << firstCursor -> Book << endl;
  //cout << "LOOP FIRST" << endl;
  while (firstCursor -> prev != NULL){
  
    cursor = head;

    //cout << "LOOP SECOND" << endl;
    while (cursor != firstCursor){
      
      temp = cursor -> next;
     
      if ((cursor -> diff) > (temp -> diff)) {
        //cout << "Cursor Before: " << cursor->id << endl;
        //cout << "Temp Before: " << temp -> id << endl;
       

        tempString = temp -> diff;
        //cout << "temp str: " << tempString << endl;
        temp -> diff = cursor -> diff;
        cursor -> diff = tempString;

        tempInt = temp -> id;
        //cout << "temp str: " << tempString << endl;
        temp -> id = cursor -> id;
        cursor -> id = tempInt;

        tempStr = temp -> name;
        //cout << "temp str: " << tempString << endl;
        temp -> name = cursor -> name;
        cursor -> name = tempStr;

      
      }
        
      cursor = cursor->next;
      //cout << "LOOP THIRD " << cursor->Book << endl;

    }
      
    firstCursor = firstCursor -> prev;
    
  }
  


 }

 if(command.find("difficulty decreasing")!=-1){
  //cout << "here....line98" << endl;
  node* temp = new node();
  temp -> id = 0;
  temp -> diff = "";
  temp -> name = "";
  temp -> next = NULL;
  temp -> prev = NULL; 
  
  node* cursor;
  node* firstCursor = new node();
  firstCursor = head;

  
   string tempString, tempStr;
   int tempInt;
 
  //cout << "FIND THE END OF THE LIST" << endl;
  while(firstCursor->next != NULL){
    //firstCursor -> Prev = firstCursor; 
    firstCursor = firstCursor -> next;
  }
  //cout << "here....line117" << endl;
  //cout << "HEAD CURSOR " << firstCursor -> Book << endl;
  //cout << "LOOP FIRST" << endl;
  while (firstCursor -> prev != NULL){
  
    cursor = head;

    //cout << "LOOP SECOND" << endl;
    while (cursor != firstCursor){
      
      temp = cursor -> next;
     
      if ((cursor -> diff) < (temp -> diff)) {
        //cout << "Cursor Before: " << cursor->id << endl;
        //cout << "Temp Before: " << temp -> id << endl;
       

        tempString = temp -> diff;
        //cout << "temp str: " << tempString << endl;
        temp -> diff = cursor -> diff;
        cursor -> diff = tempString;

        tempInt = temp -> id;
        //cout << "temp str: " << tempString << endl;
        temp -> id = cursor -> id;
        cursor -> id = tempInt;

        tempStr = temp -> name;
        //cout << "temp str: " << tempString << endl;
        temp -> name = cursor -> name;
        cursor -> name = tempStr;

      
      }
        
      cursor = cursor->next;
      //cout << "LOOP THIRD " << cursor->Book << endl;

    }
      
    firstCursor = firstCursor -> prev;
    
  }
  

 }
 
 if(command.find("add pos") != -1){
  //cout << "here line...172" <<endl;
  string number, name;
  int position, flag = 0;
  number = command;
	name = number.erase(number.find(" problem_id"));
  name = number.substr(number.find(":") + 1);
  stringstream stream(name);
  stream >> position;
  //size -= size;
  //cout << position << endl << size << endl;

  if (position >= size){

    string number="", anotherN="", level="", hold="", name="";
    number = command.substr(command.find("problem_id"));
    anotherN = number.erase(number.find(","));
    anotherN = number.substr(number.find(":") + 1);
    stringstream stream(anotherN);

    int id_data,count = 0;
    stream >> id_data;
    node* n = head;
    while (n != NULL){
      if(n->id==id_data)
        flag = 1;
    //cout << n->id << endl;
    n = n->next;
    }
  if(flag != 1){
    //cout << id_data << endl;
	number = command;
	name = number.erase(number.find(", d"));
  name = number.substr(number.find("e:") + 2);
  number = command;
 
  level = number.substr(number.find("y:") + 2);
  
	
		
  node* temp;
  temp = new node();
  temp -> name = name;
  temp -> id = id_data;
  temp -> diff = level;
  temp -> next = NULL;
  temp -> prev = NULL;
  
  //cout << temp -> name << endl << temp -> id << endl << temp->diff << endl;
  
  if(head->next == NULL ) {
    
    head ->name = temp -> name;
    head -> id =temp -> id;
    head -> diff = temp -> diff;
    head -> next = temp -> next;
    head -> prev = temp -> prev;
    
  } else{
    node* current = head;
    while (current -> next != NULL) {
      current = current->next;
    }
    current->next = temp;
    temp->prev = current;
  }
  }
  else{
    size--;
  }
  size++;
}

  if (position <= 0){


    string number="", anotherN="", level="", hold="", name="";
    number = command.substr(command.find("problem_id"));
    anotherN = number.erase(number.find(","));
    anotherN = number.substr(number.find(":") + 1);
    stringstream stream(anotherN);

    int id_data,count = 0;
    stream >> id_data;
    node* n = head;
    while (n != NULL){
      if(n->id==id_data)
        flag = 1;
    //cout << n->id << endl;
    n = n->next;
    }
  if(flag != 1){
    //cout << id_data << endl;
	number = command;
	name = number.erase(number.find(", d"));
  name = number.substr(number.find("e:") + 2);
  number = command;
 
  level = number.substr(number.find("y:") + 2);
  
	
		
  node* temp;
  temp = new node();
  temp -> name = name;
  temp -> id = id_data;
  temp -> diff = level;
  temp -> next = NULL;
  temp -> prev = NULL;
  
  //cout << temp -> name << endl << temp -> id << endl << temp->diff << endl;
  
  if(head->next == NULL ) {
    
    head ->name = temp -> name;
    head -> id =temp -> id;
    head -> diff = temp -> diff;
    head -> next = temp -> next;
    head -> prev = temp -> prev;
    
  } else{
    head -> prev = temp;
    temp -> next = head;
    temp -> prev = NULL;
  }  
  }
  else{
      size--;
  }
    size++;
  }

  else{


    string number="", anotherN="", level="", hold="", name="";
    //cout << "here..line 356" << endl;
    number = command.substr(command.find("problem_id"));
    //cout << number << endl;

    anotherN = number.erase(number.find(","));
    anotherN = number.substr(number.find(":") + 1);
    stringstream stream(anotherN);

    int id_data,count = 0;
    stream >> id_data;
    node* n = head;
    while (n != NULL){
      if(n->id==id_data)
        flag = 1;
    //cout << "here..line370" << endl;
    n = n->next;
    }
  if(flag != 1){
    //cout << id_data << endl;
	number = command;
	name = number.erase(number.find(", d"));
  name = number.substr(number.find("e:") + 2);
  number = command;
 
  level = number.substr(number.find("y:") + 2);
  
	
		
  node* temp;
  temp = new node();
  temp -> name = name;
  temp -> id = id_data;
  temp -> diff = level;
  temp -> next = NULL;
  temp -> prev = NULL;
  
  //cout << temp -> name << endl << temp -> id << endl << temp->diff << endl;
  int counter = 0;
  if(head->next == NULL ) {
    
    head ->name = temp -> name;
    head -> id =temp -> id;
    head -> diff = temp -> diff;
    head -> next = temp -> next;
    head -> prev = temp -> prev;
    
  } else{
    node* current = head;
    while (counter < position) {
      current = current->next;
      counter++;
    }
    temp->prev = current->prev;
    current->prev->next = temp;
    current->prev = temp;
    temp ->next = current;
    
    }
    //cout << "here...line 381" << endl;
    node* n = head;
    while (n != NULL){

    //cout << n->id << endl;
    n = n->next;

  }

  }
  else{
    size--;
  }
    size++;
  }
//cout << "here line 781" << endl;
  
//cout << "size: " << size << endl;
 }
 
 if(command.find("remove")!= -1){
   //cout << "here...line425" << endl;
    if(command.find("problem_id")!= -1){
    string number="", anotherN="", level="", hold="", name="";
    //cout << "here..line 340" << endl;
    //number = command.substr(command.find("problem_id"));
    //cout << number << endl;
    number = command;
    //anotherN = number.erase(number.find(","));
    anotherN = number.substr(number.find(":") + 1);
    stringstream stream(anotherN);

    int id_data,count = 0, flag = 0;
    stream >> id_data;
    node* n = head;
    node* temp = head;
    //cout << n -> name << endl;
    while (n != NULL){
      //cout << "hereeeee" << endl << n->diff << endl;
      if(n->id==id_data){
        //cout << "hereeeee" << endl;
        if(n -> prev == NULL){
          temp = n -> next;
          temp -> prev = NULL;
          }
        // if node is last
        else if(n -> next == NULL){
          while (temp->next->next!=NULL){
            temp = temp->next;
          }
          temp = n->prev;
          temp->next = NULL;
          }
        else{
          n->prev->next = n -> next;
          n->next->prev = n -> prev;
          
           }
          delete(n);
       
        size--;
        //head = temp;
        flag = 1;
        n = head;
      }
     
    //cout << "here line883" << endl;
      
      if(flag != 1){
      n = n->next;
      }
      flag = 0;
    }
  
      
    }
  
  if(command.find("problem_name")!= -1){

    string number="", anotherN="", level="", hold="", name="";
    number = command;
    anotherN = number.substr(number.find(":") + 1);
    int flag = 0;
    node* n = head;
    node* temp = head;
    while (n != NULL){
      hold = n->name.substr(0, n->name.find(" "));
      //cout << "hereeeee" << endl << n->diff << endl;
      //cout << anotherN << " " << hold << endl;
      if(hold==anotherN){
        
        if(n -> prev == NULL){
          temp = n -> next;
          temp -> prev = NULL;
          }
        // if node is last
        else if(n -> next == NULL){
          while (temp->next->next!=NULL){
            temp = temp->next;
          }
          temp = n->prev;
          temp->next = NULL;
          }
        else{
          n->prev->next = n -> next;
          n->next->prev = n -> prev;
          
           }
          delete(n);
       
        size--;
        //head = temp;
        flag = 1;
        n = head;
        //cout << "hereeeee3" << endl;
      }
       
      if(flag != 1){
      n = n->next;
      }
      flag = 0;
    }
     
    //cout << "here line892" << endl;
  }
  if(command.find("difficulty")!= -1){

    string number="", anotherN="", level="", hold="", name="";
    //cout << "here..line 340" << endl;
    //number = command.substr(command.find("problem_id"));
    //cout << number << endl;
    number = command;
    anotherN = number.substr(number.find(":") + 1);
    
   // cout << anotherN << endl << endl;
    //int id_data,count = 0;
    //stream >> id_data;
    node* n = head;
    node* temp = head;
    int flag = 0;
    
    while (n != NULL){
     // cout << "hereeeee" << endl << n->diff << endl;
      if(n->diff==anotherN){
        //cout << "hereeeee" << endl;
        if(n -> prev == NULL){
          temp = n -> next;
          temp -> prev = NULL;
          }
        // if node is last
        else if(n -> next == NULL){
          while (temp->next->next!=NULL){
            temp = temp->next;
          }
          temp = n->prev;
          temp->next = NULL;
          }
        else{
          n->prev->next = n -> next;
          n->next->prev = n -> prev;
          
           }
          delete(n);
       
        size--;
        //head = temp;
        flag = 1;
        n = head;
      }
       
    //cout << "here line944" << endl;
      
     if(flag != 1){
      n = n->next;
      }
      flag = 0;
      
      
      
    }
     
  }
  if(command.find("pos:")!= -1){

     string number="", anotherN="", level="", hold="", name="";
    number = command;
    anotherN = number.substr(number.find(":") + 1);
    stringstream stream(anotherN);

    int id_data,count = 0;
    stream >> id_data;
    node* temp = head;
    node* n = head;
    //cout << size << " " << id_data << endl;
    if(id_data >= 0 && id_data <= size -1 && size > 0){
      //cout << "here...line968" << endl;
    while (count < id_data){
        n = n->next;
        count++;
    }
      if(size != 1){
        if(n -> prev == NULL){
          temp = n -> next;
          temp -> prev = NULL;
          }
        // if node is last
        else if(n -> next == NULL){
          while (temp->next->next!=NULL){
            temp = temp->next;
          }
          temp = n->prev;
          temp->next = NULL;
          }
        else{
          n->prev->next = n -> next;
          n->next->prev = n -> prev;
          
           }
          head = temp;
      
          delete(n);
      }
      else{
        head -> diff = "";
        head -> name = "";
        head -> id = 0;
        head -> prev = NULL;
        head -> next = NULL;
      }
      

      
     
    //cout << "here line1000" << endl;
      
      
      size--;
    }
    
    
    //cout << "here line1013" << endl;
    }
    
  }
 
  
}


node* Linked::gethead(){
  return head;
}

void Prints(node* a, ofstream& output){
	
	node* t = a;

  while (t != NULL){

    output << "problem_id:" << t -> id << ", problem_name:" << 
    t -> name << ", difficulty:" << t -> diff << endl;

    t = t -> next;

  }
	
	return;
	
}


int main(int argc, char* argv[]) {
  ArgumentManager am(argc, argv);
	
	string problems = am.get("input");
	string commands = am.get("command");
	string Output = am.get("output");
  
  
	
	ofstream output(Output.c_str());
	ifstream input(problems.c_str());
	ifstream command(commands.c_str());

  /*ifstream input("input23.txt");
  ifstream command("command23.txt");
  ofstream out("output.txt");
  ifstream file;
  file.open("input13.txt");
  ifstream file;
  file.open("input13.txt");
  */
  Linked Plist;
  Linked Clist;
  
  string problemLine = "";
  int problemLine_count = 0;
  int condition = 1;
  
  
  while(condition){
    
    getline(input, problemLine);
    while(problemLine.length() == 0)
    {
        problemLine = "";
         getline(input, problemLine);
         
    }
    Plist.Add_node_end_in(problemLine);
    problemLine = "";
    //cout << problemLine << endl;
     
    problemLine_count++;
    if(input.eof()){
      condition = 0;
      //break;
    }
  }
  condition = 1;
	while(condition){
	
    getline(command, problemLine);
    while(problemLine.length() == 0)
    {
        problemLine = "";
         getline(input, problemLine);
         
    }

    //cout << endl << problemLine << endl;
    node_C(problemLine, Plist.gethead(), problemLine_count); 
   // cout << endl << problemLine << endl;
    problemLine = "";

    if(command.eof()){
      condition = 0;
      //break;
    }
  }

  Prints(Plist.gethead(), output);
	
	input.close();
  command.close();
	output.close();
	return 0;
}