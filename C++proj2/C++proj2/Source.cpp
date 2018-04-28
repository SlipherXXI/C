//Ryan Slipher
//project 2

#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
	int weeks = 0;
	int episodesRemaining = 3;
	int podcastListenRate = 2;
	int weeksUntilNewEpisode = 1;
	int addEpisodes = 1;

	int weekOne = 0;
	int episodesRemainingTwo = 6;
	int podcastListenRateTwo = 2;
	int weeksUntilNewEpisodeTwo = 2;
	

	while (weeks <= 10) {
		if (episodesRemaining > 0) {
			episodesRemaining = (addEpisodes + episodesRemaining - podcastListenRate);
			cout << episodesRemaining << endl;
			weeks = weeks + 1;
			cout << weeks << endl;
		}
		else {
			cout << "Caught up in " << weeks << "weeks " << endl;
			break;
		}
	}
	while (weekOne <= 10) {
		if (weekOne % 3 == 0) {
			cout << weekOne << endl;
			addEpisodes = 0;
		}
		else {
			addEpisodes = 1;
		}
		if (episodesRemainingTwo > 0) {

			episodesRemainingTwo = (addEpisodes + episodesRemainingTwo - podcastListenRateTwo);
			cout << episodesRemainingTwo << endl;
			weekOne = weekOne + 1;
			cout << weekOne << endl;
		}
		else {
			cout << "Caught up in " << weekOne << "weeks " << endl;
			break;
		}
	}
	cin.get();
	return 0;
}