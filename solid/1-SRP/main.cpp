#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

class Journal {

private:

string m_title;
vector<string> m_entries;

public:
 Journal(){};
 Journal(const string &title) : m_title{title} {}

void add_entries(const string &entry) {
      static uint32_t count = 1;
        m_entries.push_back(to_string(count++) + ": " + entry);
                                      }

auto get_entries() const { return m_entries; }

};

/////////////////////////////////////////////////////////////////////////////

class save
{
   
public:
	save(){}

	 void saveJournal(const string &filename,Journal day) {
      ofstream ofs(filename); 
		 for (auto &s : day.get_entries()) ofs << s << endl;
			ofs.close();
											  }
};

 


int main() {

Journal journal{"Dear XYZ"};
save guard;
journal.add_entries("I ate a bug");
journal.add_entries("I cried today");
guard.saveJournal("diary.txt",journal);

return 0;
}
