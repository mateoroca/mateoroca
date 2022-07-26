#include<iostream>
#include<vector>
#include <tuple> 
using namespace std;





enum class Relationship { parent, child, sibling };
///////////////////////////////////////////////////////////////////////////////////////
class Person
{
private:
    string name;
public:
    Person(string _name):name(_name){}
    string getName(){return name;}
};


/////////////////////////////////////////////////////////////////////////////////////////
class Relationships 
{
    private:  
       vector<tuple<Person, Relationship, Person>> m_relations;
    public:
       Relationships();

     void add_parent_and_child(Person* p1,Relationship relation,Person* p2)
        {
         m_relations.push_back({p1, relation,p2});
         m_relations.push_back({p2, relation, p1});
        }
         vector<tuple<Person, Relationship, Person>> getRelations(){return m_relations;}
};
/////////////////////////////////////////////////////////////////////////////////////////
class Research 
{ 
   public:

       Research() ;

  void searchRelations(Relationships* relations, string name, Relationship relation)
	{
    	for (auto &&[first, rel, second] : relations->getRelations()) // Need C++17 here 
        {
            if (first->getName() == name && rel == relation)

                cout << name << " has a child called: " << second->getName() << endl;
        }
	}
};
//////////////////////////////////////////////////////////////////////////////////////////


int main() 
{
Person* parent = new Person("John");
Person* child1 = new Person("Chris");
Person* child2 = new Person("Matt");

Relationships*  relationships = new Relationships();

relationships->add_parent_and_child(parent,Relationship::parent, child1);
relationships->add_parent_and_child(parent,Relationship::child, child2);

Research* researche = new Research();

researche->searchRelations(relationships,"john",Relationship::child);


delete parent;
delete child1;
delete child2;
delete relationships;
delete researche;

return 0;

};