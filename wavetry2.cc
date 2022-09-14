#include <iostream>
#include <fstream>
#include </usr/local/include/nlohmann/json.hpp>
#include <random>
#include <sstream>
#include <vector>

using namespace std;
using json = nlohmann::json;std::ifstream jsonfile1("jsontest.json"); //change name here depending on file name
//parses file for block data
json blockdata = json::parse(jsonfile1);

//functions
auto tostring(auto input1) {
        stringstream ss;
        ss << input1;
        string s;
        ss >> s;        
        return s;
}
int random1(int number) {
        random_device dev;
        mt19937 rng(dev());
        uniform_int_distribution<std::mt19937::result_type> diceroll(1,number);        
        return diceroll(rng);
}
//selects a block from the json file at random
json givemeblock (int rand) {
	int something1 = random1(rand);
	string blocknum = tostring(something1);
	json block = blockdata["block" + blocknum];
	string returnblock = tostring(block);
	return block;
}
//these functions pull the faces of a selected block allowing for comparison 
json givemeface1 (json block1) {
	json face1 = block1["face1"];
	return face1;
} 
json givemeface2 (json block1) {
	json face2 = block1["face2"];
	return face2;
}
json givemeface3 (json block1) {
	json face3 = block1["face3"];
	return face3;
}
json givemeface4 (json block1) {
	json face4 = block1["face4"];
	return face4;
}
json givemeface5 (json block1) {
	json face5 = block1["face5"];
	return face5;
}
json givemeface6 (json block1) {
	json face6 = block1["face6"];
	return face6;
}
//the code that runs
int main () {
int size = blockdata.size(); //indexes entries in json so we dont get a parse error
bool collapsed = false; //this variable determins how long the collapse will run the number of blocks is defined in the if statement bellow
int placed = 0; //keeps track of # of blocks placed 
while (!collapsed) { // this is the function that loops over each block to find the next face 
//this function works but dosent store blocks found still need to impliment that and then have it take that into account 
// i can probably make a function that compares the faces and when it finds a match is returns which block and then use that info to render it
	json block1 = givemeblock(size); //selects a random block from json 
	json block2 = givemeblock(size); //selects a random block from json
	json selectedblock; //declares a variable for future use 
	// this block defines each face to a variable by calling a function so i can use it
	json block1face1 = givemeface1(block1);
	json block1face2 = givemeface2(block1);
	json block1face3 = givemeface3(block1);
	json block1face4 = givemeface4(block1);
	json block1face5 = givemeface5(block1);
	json block1face6 = givemeface6(block1);
	json block2face1 = givemeface1(block2);
	json block2face2 = givemeface2(block2);
	json block2face3 = givemeface3(block2);
	json block2face4 = givemeface4(block2);
	json block2face5 = givemeface5(block2);
	json block2face6 = givemeface6(block2);
	//this long block of text compares the faces of each selected block to each other 
	if (block1face1 == block2face1) {
		placed++;
		selectedblock = block2face1;
	}
	else if  (block1face2 == block2face2) {
		placed++;
		selectedblock = block2face2;
	}
	else if  (block1face3 == block2face3) {
		placed++;
		selectedblock = block2face3;
	}
	else if  (block1face4 == block2face4) {
		placed++;
		selectedblock = block2face4;
	}
	else if  (block1face5 == block2face5) {
		placed++;
		selectedblock = block2face5;
	}
	else if  (block1face6 == block2face6) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face1 == block2face2) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face1 == block2face3) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face1 == block2face4) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face1 == block2face5) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face1 == block2face6) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face2 == block2face2) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face2 == block2face3) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face2 == block2face4) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face2 == block2face5) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face2 == block2face6) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face3 == block2face2) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face3 == block2face3) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face3 == block2face4) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face3 == block2face5) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face3 == block2face6) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face4 == block2face2) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face4 == block2face3) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face4 == block2face4) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face4 == block2face5) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face4 == block2face6) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face5 == block2face2) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face5 == block2face3) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face5 == block2face4) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face5 == block2face5) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face5 == block2face6) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face6 == block2face2) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face6 == block2face3) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face6 == block2face4) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face6 == block2face5) {
		placed++;
		selectedblock = block2face6;
	}
	else if  (block1face6 == block2face6) {
		placed++;
		selectedblock = block2face6;
	}
	else { //if a blocks faces have no match it throws it out
		block2 = givemeblock(size);
		selectedblock = "null";
	}
	if (selectedblock != "null") { //this only prints blocks that have a matching face
	cout << "block " << placed << " face selected: " << selectedblock << endl;
	}
	if (placed == 10){ //this determins how many blocks to place before collapsing the function
		collapsed = true;
	}
	}
}
