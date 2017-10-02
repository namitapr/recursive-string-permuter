#include <iostream>
#include <string>

void permutationsHelper(std::string curr, std::string remaining){
	if(remaining == ""){
		std::cout << curr << std::endl;
		return;
	}
	else {
		// for(int i=0; i<remaining.length(); i++){
		// 	string temp = remaining[i];
		// 	permutationsHelper(curr, remaining);
		// }

		for(int i=0; i<remaining.length(); i++){
			std::string temp = curr+remaining[i];
			std::string dump = remaining.substr(i+1) + remaining.substr(0, i);
			// std::cout << "curr:" << curr << std::endl;
			// std::cout << "remaining:" << remaining << std::endl;
			permutationsHelper(temp, dump);
		}
	}
}

void permutations (std::string in){
	//std::cout << "going to pH" << std::endl;
	permutationsHelper("", in);	
}