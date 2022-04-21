#include <iostream>
#include <iomanip>
using namespace std;
class Food{
	private:
		string name;
		double cookingTime;
		
		string DoubleToString(double val)
		{
			stringstream ss;
			ss << val;
			return ss.str();
		}

	public:
		Food(string name, double cookingTime){
			this->name = name;
			this->cookingTime = cookingTime;
		}
		Food(){
			this->name = "";
			this->cookingTime = 0;
		}
		string getFood(){
			return name + " " + DoubleToString(cookingTime);
		}
};
class Salad{
	private:
		string name;
	
	public:
		Salad(string name){
			this->name = name;
		}
		Salad(){
			this->name = "";
		}
		string getSalad(){
			return name;
		}
};
class Oven{
	public:
		void cook(Food& food){
			cout<<food.getFood()<<" hours remain to ready to eat."<<endl;
		}
};
class Shredder{
	public:
		void shred(Salad& salad){
			cout<<salad.getSalad()<<" will be shredded"<<endl;
		}
};
class Greens : public Food, public Salad{
	public:
		Greens(string name,double cookingTime):Food(name,cookingTime), Salad(name){
		}
};
int main(){
	Greens *chard = new Greens("Chard",2);
	
	Oven *oven = new Oven();
	oven->cook(*chard);
	
	Shredder *shredder = new Shredder();
	shredder->shred(*chard);
	
	delete chard;
	delete oven;
	delete shredder;	
	return 0;
}
