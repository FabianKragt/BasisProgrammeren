#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
#pragma region Intro
	//type name (=toekenning)
	/*
	int leeftijd;
	float lengte;
	
	printf("Voer leeftijd in: ");
	scanf("%d", &leeftijd);
	
	printf("Voer lengte in: ");
	scanf("%f", &lengte);

	printf("De leeftijd is %d jaar en lengte is %.2f m", leeftijd, lengte);
	*/
#pragma endregion
#pragma region NrGuess
	/*
	int het_getal = 5;
	int getal;
	printf("Raad het getal (1...10)\n");
	printf("Kies een getal:");
	scanf("%d", &getal);

	if (het_getal != getal)
	{
		printf("Het getal is onjuist!\n");
	}
	else
	{
		printf("Het ingevoerde antwoord is juist!\n");

	}
	*/
#pragma endregion

	int leeftijd = 34;
	//printf("Volgend jaar ben ik %d jaar:)\n", leeftijd + 1);

	//leeftijd = leeftijd + 1;
	//printf("Volgend jaar ben ik %d jaar:)\n", leeftijd);

	printf("Volgend jaar ben ik %d jaar :)\n", ++leeftijd);

}