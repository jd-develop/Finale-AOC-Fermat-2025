#include "../instruction.h"
bool test_inst_create_list(phrase_t* phrase, function_t* function) {
    if (phrase->phraseId != -1) {
        return false;
    }

    char** result_str = cut_a_b(phrase->text, 5, 16);
    strcat(result_str[0], result_str[2]);

    if (!strcmp(result_str[0], CREATION_LISTE_S)) {
        printf("création de la liste %s\n", result_str[1]);
        phrase->phraseId = CREATION_LISTE;
        phrase->liste_call = result_str[1];

    } else {
        free(result_str[1]);
    }

    free_pointers(result_str);

    // renvoie true si l'expression est une create list
    return phrase->phraseId != -1;
}
