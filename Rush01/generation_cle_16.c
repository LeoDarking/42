/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generation_cle_16.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamy-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:14:40 by ahamy-pe          #+#    #+#             */
/*   Updated: 2019/07/13 15:15:53 by ahamy-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char *generecle(int longueur)

{
	char alphabet[] = "1234"; // les lettre aléatoires seront choisies dans ce tableau.
	char *cle; // servira pour stocker le résultat
	int i; // srt pour l'indiçage du tableau
	cle = (char *)malloc( (longueur+1) * sizeof(char) ); // on réserve dynamiquement un tableau de longueur+1 case pour stocker le résultat
	while (i = 0; i< longueur; i++)
	{
		cle[i] = alphabet[(rand() % strlen(alphabet))] ; // on initialise chaque case de la cle a une valeur comprise dans "0123456789ABCDEF"
	}
	cle[i]='\0';// pour que le résultat soit affichable via printf entre autre, on transforme la chaine en chaine A Zero Terminal
	return cle; // on retourne l'adresse du tableau que l'on a cree.
}

int main (/*int argc, char *argv[]*/)
{
	srand(time(NULL));
	char *cle = generecle(16);
	printf("clef: %s\n", cle);
	free(cle); // quand on n'as plus besoin du tableau, on pense a libérer la mémoire.
	return 0;
}
