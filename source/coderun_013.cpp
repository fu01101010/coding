// symmetrical sequence :: симметричная последовательность

#include <iostream>
#include <vector>

int main() {

	int nSeq;
	std::cin >> nSeq;

	std::vector<int> seq(nSeq);

	int seqPiece;
	for (int i = 0; i < nSeq; ++i) {
		
		std::cin >> seqPiece;
		seq.at(i) = seqPiece;
	}

	// is symmetrical?
	bool isSym = false;	
	int helper = 0;

	while(!isSym) {

		isSym = true;
		for (int i = 0; i < (nSeq/2); ++i) {
		
			if (seq.at(i) != seq.at(nSeq - i - 1)) {

				isSym = false;
				break;
			}
		}

		if (helper >= 0) {
			
			if (helper > 0) {

				seq.insert(seq.begin() + nSeq - helper, seq.at(helper));
				++nSeq;
			} else {
				
				seq.push_back(seq.at(helper));
				++nSeq;
			}
		}
		
		if(isSym) {
			
			if(helper == 0) {
				
				std::cout << 0 << std::endl;
				return 0;
			}
			else --helper;
		}

		++helper;
	}

	std::cout << helper << std::endl;
	for(int i = (helper - 1); i >= 0; --i)
		std::cout << seq.at(i) << ' ';
	std::cout << std::endl;

	return 0;
}
