#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	double StockPrice = 0;
	double StrikePrice = 0;
	double DaysToExpiration = 0;
	double Volatility = 0.274; //%
	double RiskFreeRate = 0.015; //%

	double CallPrice = 0;

	printf("Enter a stock price: ");
	scanf("%lf", &StockPrice); 

	if (StockPrice < 0) {
		printf("Error: StockPrice must be positive\n");
		return 0;
	}

	printf("Enter a strike price: ");
	scanf("%lf", &StrikePrice); 

	if (StrikePrice < 0) {
		printf("Error: StrikePrice must be positive\n");
		return 0;
	}

	printf("Enter an expiration time in days: ");
	scanf("%lf", &DaysToExpiration);

	if (DaysToExpiration < 0) {
		printf("Error: ExpirationDays must be positive\n");
		return 0;
	}

	DaysToExpiration = DaysToExpiration / 365;

	double d1 = 0;
	double d2 = 0;
	double nd1 = 0;
	double nd2 = 0;
	
	d1 = (log(StockPrice / StrikePrice) + (RiskFreeRate + 0.5 * pow(Volatility, 2)) * DaysToExpiration)
      / (Volatility * sqrt(DaysToExpiration));

	nd1 = 1 - exp(-d1 * d1 / 2) / sqrt(2 * M_PI) * (0.319381530 * (1 / (1 + 0.2316419 * d1)) + -0.356563782 * pow((1 / (1 + 0.2316419 * d1)), 2) + 1.781477937 * pow((1 / (1 + 0.2316419 * d1)), 3) + -1.821255978 * pow((1 / (1 + 0.2316419 * d1)), 4) + 1.330274429 * pow((1 / (1 + 0.2316419 * d1)), 5));

	d2 = d1 - Volatility * sqrt(DaysToExpiration);

	nd2 = 1 - exp(-d2 * d2 / 2) / sqrt(2 * M_PI) * (0.319381530 * (1 / (1 + 0.2316419 * d2)) + -0.356563782 * pow((1 / (1 + 0.2316419 * d2)), 2) + 1.781477937 * pow((1 / (1 + 0.2316419 * d2)), 3) + -1.821255978 * pow((1 / (1 + 0.2316419 * d2)), 4) + 1.330274429 * pow((1 / (1 + 0.2316419 * d2)), 5));
	CallPrice = StockPrice * nd1 - StrikePrice * exp(-RiskFreeRate * DaysToExpiration) * nd2;

	printf("The call price is: %.9f\n", CallPrice);
}
