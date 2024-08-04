#include <"world.h">

#include <iostream>

using namespace std;

World::World() {
	cout << "The world has been spawned!" << endl;
}
World::~World() {
	cout << "The world " << name << " has been destroyed!" << endl;
}

World::setName(string s) {
	name = s;
}
