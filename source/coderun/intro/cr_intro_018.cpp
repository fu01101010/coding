// depth first search :: поиск в глубину

#include <iostream>
#include <utility>
#include <vector>
#include <map>

std::vector<int> componentData;

void checkThisOne (int vertice, std::map<int, std::vector<int> > *data) {
	
	std::cout << "i am here at vertice:" << vertice << std::endl;

	for (int i = 1; i <= 4; ++i) {
		
		auto search2 = *data->find(i);

		for (int j = 0; j < search2.second.size(); ++j) {
		
			std::cout << search2.second.at(j) << ' ';
		} std::cout << std::endl;
	}


	auto search = *data->find(vertice);

	for (int i = 0; i < search.second.size(); ++i) {
		
		if (std::find(componentData.begin(), componentData.end(), vertice) == componentData.end()) {

			std::cout << "i am now here at member: " << search.second.at(i) << std::endl;

			componentData.push_back(search.second.at(i));
			checkThisOne(search.second.at(i), data);
		} else
			search.second.erase(search.second.begin() + i);
	}
}

int main() {
	
	int n, m;
	std::cin >> n >> m;
	
	std::map<int, std::vector<int> > data;
	for (int i = 1; i <= n; ++i) {
		
		data.insert(std::pair<int, std::vector<int> >(i, std::vector<int>(0)));
	}
	
	int v1, v2;
	auto search = data.find(1);
	for (int i = 0; i < m; ++i) {
		
		std::cin >> v1 >> v2;

		if (v1 != v2) {
			search = data.find(v1);
			if (std::find(search->second.begin(), search->second.end(), v2) == search->second.end())
				search->second.push_back(v2);
			search = data.find(v2);
			if (std::find(search->second.begin(), search->second.end(), v1) == search->second.end())
				search->second.push_back(v1);	
		}
	}

	checkThisOne (1, &data);

	for (int i = 0; i < componentData.size(); ++i) {

			std::cout << componentData.at(i) << ' ';
	} std::cout << std::endl;


	return 0;
}
