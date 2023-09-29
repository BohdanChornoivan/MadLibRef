#include <iostream>
#include <string>

using namespace std;
int askNumber(string prompt);
string askText(string prompt);
void tellStory(string& name, string& noun, int& number, string& bodyPart, string& verb);
int main()
{
	cout << "Welcome to MAD LIB REF\n" << endl;
	string name = askText("Please enter a name: ");
	string noun = askText("Please enter a plural noun: ");
	int number = askNumber("Please enter a number: ");
	string bodyPart = askText("Please enter a body part: ");
	string verb = askText("Please enter a verb: ");
	tellStory(name, noun, number, bodyPart, verb);
	return 0;
}

int askNumber(string prompt)
{
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

string askText(string prompt)
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

void tellStory(string& name, string& noun, int& number, string& bodyPart, string& verb)
{
	cout << "\nHere's your story:\n";
	cout << "The famous explorer ";
	cout << name;
	cout << " had nearly given up a life-long quest to find\n";
	cout << "The Lost City of ";
	cout << noun;
	cout << " when one day, the ";
	cout << noun;
	cout << " found the explorer.\n";
	cout << "Surrounded by ";
	cout << number;
	cout << " " << noun;
	cout << ". a tear came to ";
	cout << name << "'s ";
	cout << bodyPart << "\n";
	cout << "After all this time, the quest was finally over. ";
	cout << "And then, the ";
	cout << noun << "\n";
	cout << "promptly devoured ";
	cout << name << ". ";
	cout << "The moral of the story? Be careful what you ";
	cout << verb;
	cout << " for.";
}