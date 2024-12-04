#pragma once
#include <vector>
#include <string>
class Wire;

using namespace std;

class Gate {
	//Default constructor
	Gate(int type, int delay, vector<Wire*> inputs, Wire* output);

	//Get everything
	int getDelay() const;
	Wire* getInput(int index) const;
	Wire* getOutput() const;
	int getType();
	
	//Evaluate the gate
    void evaluate() const;

private:
	int type;
	int delay;
	vector<Wire*> inputs;
	Wire* output;

};