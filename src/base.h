#ifndef BASE_H
#define BASE_H

typedef struct {
  int id, duree, nb_vote, note, annee;
  char titre[100], genre[30], pays[15], real[60], acteurs[255];
} Film;


void menu();
int init_bdd(FILE * f, int *n, Film *film);
int nb_ligne(FILE *f);
void chercher_film(Film *film, char *nom, int *i);
int chercher_id_film(Film *film, char *nom, int *i);
void lister_film(Film *film, int arg, int *i);
void ajouter_film(FILE *f, Film *film, Film *new_film, int *i);
void creer_film(Film *new_film, int *id);
void ls_genre();
void ls_pays();
void bonus(); //???????????

#endif // ne rien mettre après !