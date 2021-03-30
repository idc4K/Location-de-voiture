#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    printf("=============================  GESTION DE LOCATION DE VOITURE  ===============================\n\n\n");

    int nb_tot_voiture=4, nb_voiture_dispo=4, nb_voiture_en_loc=0, y=0;
     int n, nbj, nbm, m, choix, validation, i;
    float prixinit, prix;
    char nom[10];
    char prenom[7];
    int tel[12] ;
    char ville[10];
    char matricule[10];



    do

    {


                   printf("_________________________________MENU______________________________\n\n");

printf("Nombre de voit disponible : %d\t Nombre de voit en loc : %d\t nb tot voit : %d\t", nb_voiture_dispo, nb_voiture_en_loc ,nb_tot_voiture);




    // ce menu presente les differente partie du pg

    menu:


    printf("\n\n1-Clients\n"
           "2-validation du vehicule\n"
           "3-Tarifs de location\n"
           "4-Controle technique\n"
           "5-validation de location\n"
           "6-sortir du programme\n");

   // faire le choix par rapport a ce qui est proposer au menu...

    printf("\nentrer votre choix:\n");
    scanf("\n%d",&n);
        system("cls");
     switch(n)
     {
     case 1:
        goto Client; break;

     case 2:
        goto Vehicule; break;

     case 3:
        goto Tarif; break;

     case 4:
        goto Control; break;

     case 5:
        goto Validation; break;

     default:
             exit(0); break;

    // lorsque Client est choisit

    Client:
        for(i=0; i<1; i++)
        {
printf("============================Infos Client==================================\n");

            printf("\nNom: \t");
            scanf("%s", &nom);
        // le prenom
            printf("\nprenom: \t");
            scanf("%s",& prenom);
        // le numerode telephone
            printf("\ntel: \t");
            scanf("%s", &tel);
        //la ville
            printf("\nville: \t");
            scanf("%s", &ville);
printf("==========================================================================\n");
        system("cls");
        goto Vehicule ;

        }

        // lorsque vehicule est choisit...

        Vehicule:
            for( i=0; i<1 ;i++)
            {
printf("==============================Validation du vehicule=======================\n\n");
                printf("  vehicule :    kilometrage:   couleur:   nombre de place :    matricule:\n"
                       "1-Range Rover    150km/h       rouge           6                   28119\n"
                       "2-Toyota         120km/h       bleu            4                   25053\n"
                       "3-Cheerokee      150km/h       jaune           8                   23077\n"
                       "4-Mercedes       150km/h       gris            5                   26119\n");
                printf("entrer le numero  du vehicule que vous souhaiter louer\n ");
                scanf("%d",&choix);
                // donc ici on ecrit le numero et la matricle. La matrucule c'est juste pour faire jolie jolie

                printf("Matricule :\n");
                scanf("%s",&matricule);
printf("==========================================================================\n\n");

            }
        goto Tarif;

            // lorsque Tarif est choisit ...

        Tarif:
            for(i=0; i<1; i++)
            {
                // on fait d'abord le choix du type de de location
printf("========================Tarif de location==================================\n");
                printf("entrer le type de location\n"
                       "1-par jours\n"
                       "2-par mois\n"
                       "votre choix : \t");
                    scanf("%d", &m);

       // soit m la variable qui stocke le choix de la location
                if(m==1)// prix par rapport au nombre de jour
                {
                    switch(choix)
                    {
                        case 1:
                         prixinit=500; break;
                        case 2:
                        prixinit=400; break;
                        case 3:
                        prixinit=800; break;
                        case 4:
                        prixinit=450; break;
                    }
                        // on demande le nombre de jours ...

                         printf("entrer le nombre de jour:\t");
                        scanf("%d",&nbj);

                        prix= prixinit*nbj;
                        printf("le prix a payer est:%f",prix);
                }

                else if(m==2)
                {
                     switch(choix)
                    {
                        case 1:
                        prixinit=500; break;
                        case 2:
                        prixinit=400; break;
                        case 3:
                        prixinit=800; break;
                        case 4:
                        prixinit=450; break;
                    }
                    // on demande le nb de mois
                    printf("entrer le nb de mois:\n");
                    scanf("%d",&nbm);

                    prix= prixinit*30*nbm;

                    printf("le prix a payer est:%f", prix);
printf("==========================================================================\n\n");
                }


                }



        goto Control;
                Control:

             if (m==1)
             {
                 printf("pas de controle technique\n\n\n");
             }


             if (m==2)
             {
                 if(nbm<3) printf("\ncontrole technique : pas de controle technique\n\n\n");
                 else if(nbm>3) printf("\ncontrole technique : obligatoire tout les 3 mois\n\n\n");
                 else if (nbm==3) printf("\ncontrole technique: pensez a faire une visite technique avant la fin de votre contract\n\n\n");

             }


            goto Validation ;

             Validation :
            printf("Acceptez-vous de louer ce vehicule?\n"
                   "Si oui                   <<taper 1>>\n"
                   "Si non                   <<taper 2>>\n");
            scanf("%d", &validation);

                        // affichage du contrat

printf("=========================================================================\n\n");
        printf("\n\nNom: %s\t Prenom: %s\n tel: %d\t Ville:%s\n", nom, prenom, tel, ville);
     }

                  if (validation==1)

                    nb_voiture_dispo --;
                     nb_voiture_en_loc ++;
                     y++;

    }
     while( y <= nb_voiture_dispo );


                return 0;
            }












