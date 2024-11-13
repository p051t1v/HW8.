#pragma once
#include "Wire.h"

#Define AND = 1;
#Define OR = 2;
#Define NOT = 3;
#Define X = -1;


using namespace std;

class Gate {
	Gate(int type, int delay, vector<Wire*> inputs, Wire* output);
	int getDelay(int delay) const;
	Wire* getInput(int input) const;
	Wire* getOutput() const;
	int evaluate() const;

private:
	int type;
	int delay;
	vector<Wire*> inputs;
	Wire* output;

};