/*
** EPITECH PROJECT, 2020
** Code_cd
** File description:
** main
*/

#include "my_cd.h"

/*
La fonction 'my_cd' permet de mettre à jour le répertoire de travail.
Pour la réaliser, vous aurez besoin des fonctions suivantes :
- getcwd()
- chdir()
Quatre cas sont possibles lors de l'indication de 
la commande cd, exemple :
- cd (permet de revenir au 'home', chemin présent dans l'env : "HOME=/home/user")
- cd - (permet de revenir à l'emplacement précédent)
- cd /home/ (chemin direct)
- cd Downloads/ (chemin indirect)
La variable 'static char last_pwd[1024];' sera utile pour garder
en mémoire le dernier répertoire de travail.
Il ne faudra pas oublier de mettre à jour dans votre env la variable "PWD=".
*/

void my_cd(const char *path)
{
    static char last_pwd[1024];

    if (path == NULL) {
        // cd
    } else if (strcmp(path, "-") == 0) {
        // cd -
    } else if (path[0] == '/') {
        // cd <chemin direct>
    } else {
        // cd <chemin indirect>
    }
}

/*
Ne pas toucher au main
*/
int main(void)
{
    char *line = NULL;
    size_t len = 0;
    char pwd[1024];

    while (getline(&line, &len, stdin) != -1) {
        if (line != NULL) {
            line[strlen(line) - 1] = '\0';
            my_cd(line);
        }
        getcwd(pwd, sizeof(pwd));
        printf("[PWD actuel : %s]\n", pwd);
    }
    free(line);
    return (0);
}