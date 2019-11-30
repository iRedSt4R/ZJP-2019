#include <string>

std::string PrintWin(int playerNumber) {
	return "Win for player" + std::to_string(playerNumber);
}

std::string PrintAdvantage(int playerNumber) {
	return "Advantage player" + std::to_string(playerNumber);
}

std::string CatResults(std::string score1, std::string score2){
	return score1 + "-" + score2;
}

std::string ScoreToName(int score){
	switch (score)
	{
	case 0:
		return "Love";
	case 1:
		return "Fifteen";
	case 2:
		return "Thirty";
	case 3:
		return "Forty";
	}
}

const std::string tennis_score(int p1Score, int p2Score) {
    // Przypadek, kiedy jest remis
	if(p1Score == p2Score)
		return (p1Score > 2) ? "Deuce" : CatResults(ScoreToName(p1Score), "All");

	// Wygrane / Przewaga
	int winningPlayerNumber = (p1Score > p2Score) ? 1 : 2;
	if(p1Score > 3 || p2Score > 3)
		return ((p1Score - p2Score) * (p1Score - p2Score) == 1) ? PrintAdvantage(winningPlayerNumber) : PrintWin(winningPlayerNumber);

	// Przypadek podstawowy
	return CatResults(ScoreToName(p1Score), ScoreToName(p2Score));
}
