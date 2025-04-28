// CSC 134
// M7T1
// vinecal4701 (B. Vineyard)
// 4/28/2025


#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
using namespace std;


// Next time we'll put the class in a separate file
class Restaurant {
    private:
      string name;    // the name
      double rating;  // 0 to 5 stars
  
    public:
      // constructor 
      Restaurant(string n, double r) {
          name = n;
          rating = r;
      }
      Restaurant() {
        // default empty constructor
      }
      // getters and setters
      void setName(string n) {
          name = n; 
      }
      void setRating(double r) {
          rating = r;
      }
      string getName() const {
          return name;
      }
      double getRating() const {
          return rating;
      }
    void showinfo() {
        //Print out the restaurant info nicely
        cout << "Restaurant Name: ";
        cout << this->name << endl;
        cout << "Rating: ";
        // TODO: print the stars as "*"
        //string first_emoji = "🍀";
        //string second_emoji = "U+2BEA";
        /*for (int i = 0; i < this->rating; i++) {
            cout << first_emoji << second_emoji << " ";
        }*/        
        cout << this->rating << endl;
    }
  };

int main()
{
    cout << "M7T1 - Restaurant Reviews" << endl;

    // Create a sample restaurant or two
    Restaurant rest1 = Restaurant("Mi Casita", 3.5);
    Restaurant rest2 = Restaurant();
    cout << "Enter restaurant name: ";
    string name;
    // This trick lets us get names with spaces in them
    //cin.ignore(); //skip extra newline
    getline (cin, name); //read entire line


    rest2.setName(name);
    cout << "Enter restaurant rating: ";
    double rating;
    cin >> rating;
    rest2.setRating(rating);


    //print out the restaurant info
    rest1.showinfo();
    rest2.showinfo();
    
    
    
    
    cout << endl;
    
    return 0;
}