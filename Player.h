#include <string>
using std::string;
class Player
{
public:
	Player();
	Player(string name, string gender, int health);
	virtual ~Player();

	//Accessors
	inline const string& getName() const
	{
		return this->name; 
	};

	inline const int& getHealth() const
	{
		return this->health;
	};

	inline const string& getGender() const
	{
		return this->gender;
	};
	//Modifiers
	inline void setName(const string& name)
	{
		this->name = name;
	};

	inline void setGender(const string& gender) 
	{
		this->gender = gender;
	};

	inline void setHealth(const int& health)
	{
		this->health = health;
	}

private:
	string name; 
	string gender; 
	int health;

};
