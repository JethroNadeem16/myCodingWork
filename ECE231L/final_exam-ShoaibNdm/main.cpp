#include <iostream>

#include <vector>
#include <queue>
#include <stack> 
#include <string> 

#include <fstream> 

// This function opens a file and copies its contents to a vector
template <typename T>
void load_temps(std::vector<T> &v, std::string filename) {
	std::ifstream infile(filename);
	// Checks if file is open
	if (infile.is_open()) {
		T temp;
		// Read in all data and push it to the input vector 'v'
		while (infile >> temp) {
			v.push_back(temp);
		}
		infile.close();
	}
	else {
		std::cout << "Could not open " << filename << '\n';
	}
}

// Print functions
template <typename T>
void print_vector(const std::vector<T> &v) {
	for (const auto &i : v) {
		std::cout << i << ' ';
	}
	std::cout << '\n';
}

// Notice that the input 'q' is a COPY not a REFERENCE
// 	This is so that we and access front(), then pop() to access the next
// 	front()
template <typename T>
void print_queue(std::queue<T> q) {
	while(!q.empty()) {
		std::cout << q.front() << ' ';
		q.pop();
	}
	std::cout << '\n';
}

// Same methodology as print_queue
template <typename T>
void print_stack(std::stack<T> s) {
	while(!s.empty()) {
		std::cout << s.top() << ' ';
		s.pop();
	}
	std::cout << '\n';
}

// -- I started from here with some functions
template <typename T>
void vector_to_queue(std::queue<T> &q, std::vector<T> &v) {
	for(const auto &i : v) {
		q.push(i);
	}
}

template <typename T>
void split(std::queue<T> &temps, std::stack<T> &group_a, std::stack<T> &group_b) {
	while(!temps.empty()) {
		T temp = temps.front();
		if(temp < 99) {
			group_a.push(temp);
		}
		else {
			group_b.push(temp);
		}
		temps.pop();
	}
	std::cout << "Size of Group A: %d" << group_a.size() << ' ' << "Size of Group B: %d\n" << group_b.size();
}

template<typename T>
T Minimum(std::stack<T> s) {
	T temp = 120;
	while(!s.empty()) {
		if(s.top() < temp)
			temp = s.top();
		s.pop();
	}
	return temp;
}

template<typename T>
T Maximum(std::stack<T> s) {
	T temp = -120;
	while(!s.empty()) {
		if(s.top() > temp)
			temp = s.top();
		s.pop();
	}
	return temp;
}

template<typename T>
T Mean(std::stack<T> s) {
	//assert(s.size() != 0);
	//return (std::accumulate(s.begin(), s.end(), 0.0) / s.size());
	T average = 0.0;
	int n = s.size();
	
	for(int i = 0; i < n; ++i) {
		average += s[i];
	}

	return (average / s.size());
}

int main() {
	std::string albuquerque("albuquerque_temperatures.txt");
	std::string santa_fe("santa_fe_temperatures.txt");
	std::string san_antonio("san_antonio_temperatures.txt");

	// Three vectors that are going to contain temperatures
	std::vector<float> albuquerque_temps;
	std::vector<float> santa_fe_temps;
	std::vector<float> san_antonio_temps;

	// Loading temperatures
	load_temps(albuquerque_temps, albuquerque);
	load_temps(santa_fe_temps, santa_fe);
	load_temps(san_antonio_temps, san_antonio);

	// Start here
	// -- tried to implement my functions in main but nothing really worked and I got stumped on how to implement them.

//	Dataset int t = vector_to_queue(albuquerque_temps, "Albuquerque");
//	Dataset(santa_fe_temps, "Santa Fe");
//	Dataset(san_antonio_temps, "San Antonio");

//	std::cout << std::vector_to_queue(q, v);

//	vector_to_queue = albuquerque_temps;
//	vector_to_queue(santa_fe_temps);
//	vector_to_queue(san_antonio_temps);

	return 0;
}
