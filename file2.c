#include <stdio.h>

void temperature()
{
    int temp;
    printf("Qual è la temperatura in gradi °C: \n1 x sotto zero \n2 x 0-10 \n3 x 10-20 \n4 x 20-30 \n5 x oltre 30 \n");
    scanf("%d", &temp);
}



int main()
{
int genere;
int temp;
int occasione;
printf ("Ciao! Scegli il tuo genere:\n1 x uomo \n2 x donna \n");
scanf ("%d", &genere);
while( genere == 1)
{
    printf ("Scegli l'occasione: \n1 x scuola, università e ufficio \n2 x tempo libero (pranzo fuori, uscite con amici...) \n3 x appuntamento e/o cena fuori \n");
    scanf("%d", &occasione);
    if(occasione == 1)
    {
        temperature(temp);
        if(temp == 1)
        {
            printf ("Potresti indossare un maglione in lana o pile, pantaloni termici, stivali impermeabili e un cappotto pesante.\n ");
            printf ("Ricorda di usare accessori come dei guanti, una sciarpa e un cappello per proteggerti dal freddo\n");
            printf ("Porta con te l'ombrello in caso di pioggia\n");
        }
        else if(temp == 2)
        {
          printf ("Potresti indossare una maglietta a maniche lunghe come primo strato, seguita da un maglione o da una felpa, un paio di jeans e una giacca come strato esterno.\n");
          printf ("Ricorda di indossare scarponi resistenti, un cappello, una sciarpa e dei guanti per proteggerti dal freddo\n");
          printf ("Porta con te l'ombrello in caso di pioggia\n");
        }
        else if(temp == 3)
        {
            printf ("Potresti indossare una maglietta a maniche lunghe o una camicia leggera, abbinata a un maglione o una giacca a vento. Indossa pantaloni o jeans e sneakers comode.\n");
            printf ("Porta con te l'ombrello in caso di pioggia e una sciarpa leggera nel caso in cui la temperatura scenda\n");
        }
        else if(temp == 4)
        {
           printf ("Potresti indossare una maglietta a maniche corte, una camicia leggera o una polo, abbinata a pantaloni traspiranti. Indossa scarpe da ginnastica. \n");
           printf ("Ricorda di applicare la crema solare");
        }
        else if(temp == 5)
        {
            printf("Potresti indossare una maglietta a maniche corte di cotone o di lino oppure una polo, abbinata a pantaloni leggeri.\n");
        }
        else
        {
            printf("errore\n");
        }
    }
    else if(occasione == 2)
    {
        temperature(temp);
        if(temp == 1)
        {
            printf ("Potresti indossare un maglione in lana, pantaloni termici e un cappotto pesante \n");
            printf ("Ricorda di usare accessori come un cappello, ua sciarpa e dei guanti se il tuo appuntamento è all'aperto o se pensi di percorrere un tratto a piedi");
            printf ("Porta con te l'ombrello in caso di pioggia\n");
        }
        else if(temp == 2)
        {
           printf ("Potresti indossare una maglietta a maniche lunghe come primo strato, seguita da una felpa, un paio di jeans e una giacca come strato esterno.\n");
           printf ("Ricorda di indossare accessori come un cappello, una sciarpa e dei guanti per proteggerti dal freddo\n");
           printf ("Porta con te l'ombrello in caso di pioggia\n");
        }
        else if(temp == 3)
        {
            printf ("Potresti indossare una maglietta a maniche lunghe, abbinata a un maglione o una giacca a vento. Indossa un paio di jeans e sneakers comode.\n");
            printf ("Porta con te l'ombrello in caso di pioggia e una sciarpa leggera nel caso in cui la temperatura scenda\n");
        }
        else if(temp == 4)
        {
           printf ("Potresti indossare una maglietta a maniche corte o una polo, abbinata a pantaloni traspiranti. Indossa scarpe da ginnastica o sandali. \n");
           printf ("Ricorda di scegliere colori chiari che riflettano la luce solare, di applicare la crema solare e usare accessori come berretti e occhiali da sole\n"); 
        }
        else if(temp == 5)
        {
           printf("Potresti indossare una maglietta a maniche corte di cotone o di lino, abbinata a pantaloni leggeri e scarpe da ginnastica.\n");
           printf ("Ricorda di scegliere colori chiari che riflettano la luce solare, di applicare la crema solare e usare accessori come berretti e occhiali da sole\n"); 
        }
        else
        {
            printf("errore\n");
        }
    }
    else if(occasione == 3)
    {
        temperature(temp);
        if(temp == 1)
        {
            printf("Potresti indossare una camicia come primo strato, abbinata ad un maglione in cachemire, pantaloni in lana, un cappotto elegante e degli stivaletti in pelle assicurandoti che siano impermeabili in caso di pioggia\n");
            printf ("Ricorda di indossare accessori come guanti e sciarpa per proteggerti dal freddo durante il tragitto verso il luogo dell'appuntamento"));
            printf ("Porta con te l'ombrello in caso di pioggia");
        }
        else if(temp == 2)
        {
            printf("Potresti indossare una camicia come primo strato, abbinata a un maglione di lana e un cappotto leggero\n");
            printf ("Ricorda di indossare accessori come una cintura in pelle, un orologio e una sciarpa per proteggerti dal freddo durante il tragitto verso il luogo dell'appuntamento");
            printf ("Porta con te l'ombrello in caso di pioggia");
        }
        else if(temp == 3)
        {
            printf("Potresti indossare  \n");
            printf ("Porta con te l'ombrello in caso di pioggia");
        }
        else if(temp == 4)
        {
            printf("Potresti indossare  \n");
        }
        else if(temp == 5)
        {
            printf("Potresti indossare  \n");
        }
        else
        {
            printf("errore\n");
        }
    }
    else
    {
        printf("errore\n");
    }
}
while(genere == 2)
{
    int occasione;
    printf ("Scegli l'occasione: \n1 x scuola, università e ufficio \n2 x tempo libero (pranzo fuori, uscite con amici...) \n3 x appuntamento e/o cena fuori \n");
    scanf("%d", &occasione);
    if(occasione == 1)
    {
       temperature(temp);
            if(temp == 1)
            {
                printf ("Potresti indossare un maglione in lana o pile, pantaloni termici oppure una gonna di lana con calze pesanti, stivali impermeabili e un cappotto pesante.\n ");
                printf ("Ricorda di usare accessori come dei guanti, una sciarpa e un cappello per proteggerti dal freddo\n");
                printf ("Porta con te l'ombrello in caso di pioggia");
            }
            else if(temp == 2)
            {   
                printf ("Potresti indossare una maglietta a maniche lunghe come primo strato, seguita da un maglione o da una felpa, un paio di jeans o pantaloni palazzo con sotto calze pesanti e una giacca come strato esterno.\n");
                printf ("Ricorda di indossare scarponi resistenti, un cappello, una sciarpa e dei guanti per proteggerti dal freddo\n");
                printf ("Porta con te l'ombrello in caso di pioggia");
            }
            else if(temp == 3)
            {
                printf ("Potresti indossare una maglietta a maniche lunghe o una camicia leggera, abbinata a un maglione o una giacca a vento. Indossa pantaloni o jeans, oppure una gonna lunga  e sneakers comode.\n");
                printf("Altrimenti potresti indossare un vestito lungo, con maniche lunghe e collo alto, potresti indossare una sciarpa e comme scarpe delle sneakeres\n");
                printf ("Porta con te l'ombrello in caso di pioggia");
            }
            else if(temp == 4)
            {
                printf ("Potresti indossare una maglietta a maniche corte, una camicia leggera o una polo, abbinata a dei pantaloni lunghi (in materiale leggero). Indossa scarpe da ginnastica. \n");
                printf("Altrimenti potresti indossare u" crop top con dei jeans a vita alta e come scarpe sempre delle sneakers ");
            }
            else if(temp == 5)
            {   
                printf("Potresti indossare  \n");
            }
            else
            {
            printf("errore\n");
            }
    }
    else if(occasione == 2)
    {
        temperature(temp);
        if(temp == 1)
        {
            printf("Potresti indossare  \n");
            printf ("Porta con te l'ombrello in caso di pioggia");
        }
        else if(temp == 2)
        {
            printf("Potresti indossare  \n");
            printf ("Porta con te l'ombrello in caso di pioggia");
        }
        else if(temp == 3)
        {
            printf("Potresti indossare  \n");
            printf ("Porta con te l'ombrello in caso di pioggia");
        }
        else if(temp == 4)
        {
           printf("Potresti indossare  \n");
        }
        else if(temp == 5)
        {
            printf("Potresti indossare  \n");
        }
        else 
        {
            printf("errore\n");
        }
    }
    else if(occasione == 3)
    {
        temperature(temp);
        if(temp == 1)
        {
            printf("Potresti indossare  \n");
            printf ("Porta con te l'ombrello in caso di pioggia");
        }
        else if(temp == 2)
        {
            printf("Potresti indossare  \n");
            printf ("Porta con te l'ombrello in caso di pioggia");
        }
        else if(temp == 3)
        {
            printf("Potresti indossare  \n");
            printf ("Porta con te l'ombrello in caso di pioggia");
        }
        else if(temp == 4)
        {
            printf("Potresti indossare  \n");
        }
        else if(temp == 5)
        {
            printf("Potresti indossare  \n");
        }
        else 
        {
            printf("errore\n");
        }
    }
    else
    {
        printf("errore\n");
    }
}
return(0);
}
