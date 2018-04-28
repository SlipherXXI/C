//Ryan Slipher
//project 2

#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
	int episodesRemaining = 0;
	int podcastListenRate = 0;
	int weeksUntilNewEpisode = 0;
	int weeks = 0;
	cout << "episodes Remaining" << endl;
	cin >> episodesRemaining;
	cout << "podcast listen rate" << endl;
	cin >> podcastListenRate;
	cout << "weeks until new episode" << endl;
	cin >> weeksUntilNewEpisode;
	
	while (weeks <= 10)
		
		if (episodesRemaining >= 1) {
			int addEpisode = 0;
			cout << "episodes added this week" << endl;
			cin >> addEpisode;
			episodesRemaining = (episodesRemaining + addEpisode - podcastListenRate);
			cout << "Episodes Remaining " << episodesRemaining << endl;
			weeks = weeks + 1;
			cout << weeks << endl;
		}
		else {
			cout << "caught up in " << weeks << " weeks" << endl;
			break;
		}
		
	cin.ignore(10, 0);
	cin.get();
	return 0;
}
