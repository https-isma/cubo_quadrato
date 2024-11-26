#include<studio.h>
#include"potenze.h"


int main(void){
    char operazione;
    int risultato, valore;
    print("[Q]uadrato\n")
    print("[C]ubo\n")
    scanf("%c", &operazione);
    printf("inserisci il valore da elaborare\n");
    scanf("%d", &valore);
    switch (operazione)
    {
    case "q":
        risultato = quadrato(valore);
        printf ("%d * %d = %d\n", valore, valore, risultato);
        break;
    case "c":
        risultato = cubo(valore);
        printf("%d * %d * %d= %d\n", valore, valore, valore, risultato);
        break;
    default:
      print("Operazione non riuscita\n");
    }
    return 0;
}