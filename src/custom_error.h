#if !defined(CUSTOM_ERROR_H)
#define CUSTOM_ERROR_H

#include <stdbool.h>
#include "phrase.h"

// afficher le message d'erreur dans la console d'erreur puis arrête le programme
void custom_error(char* err_message, phrase_t* p);

#endif  // CUSTOM_ERROR_H
