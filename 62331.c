#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MI2122 100
#define MIL2 3

//Les structeure
typedef struct
{
    char prenom[MI2122];
}String;
typedef enum
{
    false,true
}bool;

// Prototype des focntion
int controle_saisi(void);
bool mi_mpc_fonction(int *p1 , int *p2 , int *nbr);
bool mi_mpc_injective(int *p1 , int *p2 , int *nbr);
bool mi_mpc_supjective(int *p1 , int *p2 , int *nbr);
void saisi_ensemble(int *p , int *nbr);
void ecrire_ensemble(int *p , int *nbr);
void miL2AxmiL2B(int *p1 , int *p2 , int *nbr1 , int *nbr2);
void L2MIFAST(int *p1 , int *p2 , int *nbr1 , int *nbr2);
void dom_l2mifast(int *p1 , int *p2 , int *nbr1 , int *nbr2);
void img_L2MIFAST(int *p1 , int *p2 , int *nbr1 , int *nbr2);
void matriceAdjacenceStatiqueGraphe();
void matriceAdjacenceDynamiqueGraphe();
void mainMatriceAdjacenDynamiqueGraphe();
void inverseGraphe();
void unionDeuxGraphe();
void verificationTOTALITEGraphe();
void mainMatriceAdjanceDynamiqueGraphe2();
void Retour();
void getInt(int *nbr);
void clear();
void bar();
void s1exo1();
void s1exo2();
void s1exo3();
void s1exo4();
void s2exo1();
void s2exo2();
void s2exo3();
void s3exo1();
void s3exo2();

//La fonction principale(main)
int main()
{
    int menu,sous_menu,retour;
    debut:
    do
    {
        clear();
        bar();
        printf("\tTDs System Discrets : Structure et algorithme\n\n");
        printf("\t\tAnnee Academique : 2021-2022\n\n");
        printf("\t\tBachir Oussienie Abdoul Kader");
        bar();
        printf("\t\t1. Theorie des ensemble : Serie N*1");
        bar();
        printf("\t\t2. Fonction et relation : Serie N*2");
        bar();
        printf("\t\t3. Graphes : Serie N*3");
        bar();
        printf("\t\t4. QUITTER");
        bar();
        printf("\n\n\tChoix:");
        getInt(&menu);
        switch (menu)
        {
        case 1: 
            sous_menu1:;
            clear();
            bar();
            printf("\tTheorie des ensemble : Serie N*1");
            bar();
            printf("\t\t1. Excercice N*1");
            bar();
            printf("\t\t2. Excercice N*2");
            bar();
            printf("\t\t3. Excercice N*3");
            bar();
            printf("\t\t4. Excercice N*4");
            bar();
            printf("\t\t5.Retour AU Pricipale");
            bar();
            printf("\n\n\tChoix:");
            getInt(&sous_menu);
            switch(sous_menu)
            {
                case 1:
                    clear();
                    s1exo1();
                    break;
                case 2:
                    clear();
                    s1exo2();
                    break;
                case 3:
                    clear();
                    s1exo3();
                    break;
                case 4:
                    clear();
                    s1exo4();
                    break;
                case 5:
                    clear();
                    goto debut;
                default :
                    clear();
                    printf("OPTION INVALIDER");
                    break;
            }
            Retour();
            getInt(&retour);
            if(retour == 1)
                goto sous_menu1;
            else
                goto debut;
            break;
        case 2: 
            sous_menu2:;
            clear();
            bar();
            printf("\tFonction et relation : Serie N*2");
            bar();
            printf("\t\t1. Excercice N*1");
            bar();
            printf("\t\t2. Excercice N*2");
            bar();
            printf("\t\t3. Excercice N*3");
            bar();
            printf("\t\t4.Retour AU Pricipale");
            bar();
            printf("\n\n\tChoix:");
            getInt(&sous_menu);
            switch (sous_menu)
            {
                case 1:
                    clear();
                    s2exo1();
                    break;
                case 2:
                    clear();
                    s2exo2();
                    break;
                case 3:
                    clear();
                    goto debut;
                    break;
                case 4:
                    clear();
                    goto debut;
                default:
                    break;
            }
            Retour();
            getInt(&retour);
            if(retour == 1)
                goto sous_menu2;
            else
                goto debut;
            break;
        case 3:
            sous_menu3:; 
            clear();
            bar();
            printf("\tGraphes : Serie N*3");
            bar();
            printf("\t\t1. Excercice N*1");
            bar();
            printf("\t\t2. Excercice N*2");
            bar();
            printf("\t\t3.Retour AU Pricipale");
            bar();
            printf("\n\n\tChoix:");
            getInt(&sous_menu);
            switch (sous_menu)
            {
                case 1:
                    clear();
                    s3exo1();
                    break;
                case 2:
                    clear();
                    s3exo2();
                    break;
                case 3:
                    clear();
                    goto debut;
                    break;
                default:
                    clear();
                    printf("\nOPTION INVALIDE");
                    break;
            }
            Retour();
            getInt(&retour);
            if(retour == 1)
                goto sous_menu3;
            else
                goto debut;
            break;
        case 4:
            clear();
            printf("\t\tAU REVOIR\n\n\n");
            exit(1);
            break;  
        default:
            clear();
            printf("Option invalider");
            break;
        }
    } while (1);   
}

//LES SOURCE DE FONCTION
void getInt(int *nbr)
{
    int k,r;
    do
    {
        r=scanf("%d" , nbr);
        if(r == 0)
        {
                printf("\nERREUR!:\n\nSAISIR UN ENTIER:");
            do{
                k=getchar();
            }while(k != 10);
            
        }
    }while (r == 0);
    

}

void clear()
{
    if(system("cls") != 0)
        system("clear"); 
}
void bar()
{
   printf("\n----------------------------------------------------------------------\n"); 
}
void Retour()
{
    printf("\n\n\tChoisir -1- pour Retourner au sous menu");
    printf("\n\n\tChoisir -0- pour Retourner au menu principale");
    printf("\n\n\tChoix:");
}
void s1exo1()
{
    int i,j,nbr,L2mi[MI2122],L2miB[MI2122],L2miC[MI2122],L2miD[MI2122],k,element,iB=0,iC=0,iD=0;
    do
    {
        printf("SAISIR LE NOMBRE D'ELEMENT DE L2mi:\n");
        getInt(&nbr);
        if (nbr < 1 || nbr > MI2122)
            printf("SAISI INVALIDER !\n");
    }while (nbr < 1 || nbr > MI2122);
    printf("SAISIR L' ELEMENT 1:\n");
    getInt(L2mi);

    // RANPLISAGE DE L2mi

    for(i=1 ; i<nbr ; i++)
    {
        do
        {
            printf("SAISIR L' ELEMENT %d:\n" , i+1);
            getInt(&element);
            k=0;
            for(j=0 ; j<i ; j++)
            {
                if(*(L2mi + j) == element)
                {
                    printf("%d existe !\n" , element);
                    k++;
                }
            }
        } while (k != 0);
        *(L2mi + i) = element;
    }
    printf("}");
    
    //AFFICHAGE DE L2mi

    printf("\nL' ENSEMBLE L2mi EST {");
    for(i=0 ; i<nbr ; i++)
    {
        printf("%d" , L2mi[i]);
        if(i < nbr-1)
            printf(",");
    }
    printf("}");

    // ii) Recherche de L2miB,L2miC et L2miD

    for(i=0 ; i<nbr ; i++)
    {
        if(*(L2mi + i)%2 == 0)
        {
            *(L2miB + iB) = *(L2mi + i);
            iB++;
        }
        else
        {
            *(L2miC + iC) = *(L2mi + i);
            iC++;
        }
        if(*(L2mi + i)%3 == 0)
        {
            *(L2miD + iD) = *(L2mi + i);
            iD++;
        }
    }

    // Affichage de L2miB

    printf("\nL' ENSEMBLE L2miB est {");
    for(i=0 ; i<iB ; i++)
    {
        printf("%d" , *(L2miB + i));
        if(i < iB-1)
            printf(",");
    }
    printf("}");
    // Affichage de L2miC

    printf("\nL' ENSEMBLE L2miC est {");
    for(i=0 ; i<iC ; i++)
    {
        printf("%d" , *(L2miC + i));
        if(i < iC-1)
            printf(",");
    }
    printf("}");

    // Affichage de L2miD

    printf("\nL'ENSEMBLE L2miD est {");
    for(i=0 ; i<iD ; i++)
    {
        printf("%d" , *(L2miD + i));
        if(i < iD-1)
            printf(",");
    }
    printf("}");
}
void s1exo2()
{
    int i,j,L2MI2021[MI2122],L2MI2122[MI2122],Passant[MI2122],Redoublant[MI2122],k,nbr2021,nbr2122,iR=0,iP=0,element;

    // Saisi du nombre d' elemet de L2MI2021

    do
    {
        printf("SAISIR LE NOMBRE D' ELEMENT DE L2MI2021:\n");
        getInt(&nbr2021);
        if(nbr2021<1 || nbr2021>MI2122)
            printf("SAISI INVALIDER !\n");
    } while (nbr2021<1 || nbr2021>MI2122);

    // Saisi des element de L2MI2021

    printf("SAISIR L' ELEMENT 1 DE L2MI2021:\n");
    getInt(L2MI2021);
    for(i=1 ; i<nbr2021 ; i++)
    {
        do
        {
            printf("SAISIR L' ELEMENT %d DE L2MI2021:\n" , i+1);
            getInt(&element);
            k=0;
            for(j=0 ; j<i ; j++)
            {
                if(*(L2MI2021 + j) == element)
                {
                    printf("%d existe !\n" , element);
                    k++;
                }
            }
        } while (k != 0);
        *(L2MI2021 + i) = element;
    }

    // Saisi du nombre d' elemet de L2MI2122

    do
    {
        printf("SAISIR LE NOMBRE D' ELEMENT DE L2MI2122:\n");
        getInt(&nbr2122);
        if(nbr2122<1 || nbr2122>MI2122)
            printf("SAISI INVALIDER !\n");
    } while (nbr2122<1 || nbr2122>MI2122);

    // Saisi des element de L2MI2021

    printf("SAISIR L' ELEMENT 1 DE L2MI2122:\n");
    scanf("%d" , L2MI2122);
    for(i=1 ; i<nbr2122 ; i++)
    {
        do
        {
            printf("SAISIR L' ELEMENT %d DE L2MI2021:\n" , i+1);
            scanf("%d" , &element);
            k=0;
            for(j=0 ; j<i ; j++)
            {
                if(*(L2MI2122 + j) == element)
                {
                    printf("%d existe !\n" , element);
                    k++;
                }
            }
        } while (k != 0);
        *(L2MI2122 + i) = element;
    }   

    // Affichage de L2MI2021

    printf("\nL' ESEMBLE L2MI2021 EST {");
    for(i=0 ; i<nbr2021 ; i++)
    {
        printf("%d" , *(L2MI2021 + i));
        if(i < nbr2021-1)
            printf(",");
    }
    printf("}");

    // Affichage de L2MI2122

    printf("\nL' ESEMBLE L2MI2122 EST {");
    for(i=0 ; i<nbr2122 ; i++)
    {
        printf("%d" , *(L2MI2122 + i));
        if(i < nbr2122-1)
            printf(",");
    }
    printf("}");

    // Recherche de l' ensemble Passant et Redoublant

    for(i=0 ; i<nbr2021 ; i++)
    {
        k=0;
        for(j=0 ; j<nbr2122 ; j++)
        {
            if(*(L2MI2021 + i) == *(L2MI2122 + j))
            {
                *(Redoublant + iR) = *(L2MI2021 + i);
                iR++;
                k++;
            }
        }
        if(k == 0)
        {
            *(Passant + iP) = *(L2MI2021 + i);
            iP++; 
        }
    }

    for(i=0 ; i<nbr2122 ; i++)
    {
        k=0;
        for(j=0 ; j<nbr2021 ; j++)
        {
            if(*(L2MI2122 + i) == *(L2MI2021 + j))
                k++;
        }
        if(k == 0)
        {
            *(Passant + iP) = *(L2MI2122 + i);
            iP++; 
        }
    }

    // Affichage de Passant

    printf("\nL' ESEMBLE Passant EST {");
    for(i=0 ; i<iP ; i++)
    {
        printf("%d" , *(Passant + i));
        if(i < iP-1)
            printf(",");
    }
    printf("}");

    // Affichage de Redoublant

    printf("\nL' ESEMBLE Redoublant EST {");
    for(i=0 ; i<iR ; i++)
    {
        printf("%d" , *(Redoublant + i));
        if(i < iR-1)
            printf(",");
    }
    printf("}");
}
void s1exo3()
{
    int i,j,L2pv[MI2122],Admis[MI2122],Refuse[MI2122],element,nbrpv,iA=0,iR=0,k;
    do
    {
        printf("SAISIR LE NOMBRE D'ELEMENT DE L2pv:\n");
        getInt(&nbrpv);
        if(nbrpv<1 || nbrpv>MI2122)
            printf("SAISI INVALIDE !\n");
    }while(nbrpv<1 || nbrpv>MI2122);
    printf("SAISIR L'ELEMENT 1 DE L2pv:\n");
    getInt(L2pv);
    for(i=1 ; i<nbrpv ; i++)
    {
        do
        {
            printf("SAISIR L'ELEMET %d DE L2pv:\n" , i + 1);
            scanf("%d" , &element);
            k=0;
            for(j=0 ; j<i ; j++)
            {
                if(*(L2pv + j) == element)
                {
                    printf("%d EXISTE !\n" , element);
                    k++;
                }
                if(element < 0 || element > 20)
                {
                    printf("NOTE INVALIDER !\n");
                    k++;
                }
            }
        } while (k != 0);
        *(L2pv + i) = element;
    }

    // Affichage de L2pv

    printf("\nL'ENSEMBLE L2pv EST {");
    for(i = 0 ; i<nbrpv ; i++)
    {
        printf("%d" , *(L2pv + i));
        if(i < nbrpv-1)
            printf(",");
    }
    printf("}");

    // Recherge de Admis et Refuse

    for(i=0 ; i<nbrpv ; i++)
    {
        if(*(L2pv + i) >= 10)
        {
            *(Admis + iA) = *(L2pv + i);
            iA++;
        }
        else
        {
            *(Refuse + iR) = *(L2pv + i);
            iR++;
        }
    }

    // Affichage de Admis

    printf("\nL'ENSEMBLE Admis est {");
    for(i=0 ; i<iA ; i++)
    {
        printf("%d" , *(Admis + i));
        if(i < iA-1)
            printf(",");
    }
    printf("}");

    // Affichage de Refuse

    printf("\nL'ENSEMBLE Refuse est {");
    for(i=0 ; i<iR ; i++)
    {
        printf("%d" , *(Refuse + i));
        if(i < iR-1)
            printf(",");
    }
    printf("}");
}
void s1exo4()
{
    int i,j,iA=0,iR=0,iAR=0,iAOR=0,nalgo,nreseau,k;
    String Algorithme[MI2122],Reseau[MI2122],AlgorithmeUniq[MI2122],ReseauUniq[MI2122],AlgorithmeEtReseau[MI2122],AlgorithmeOuReseau[MI2122],element;

    // SAISI DE NOMBRE D'ELEMENT DE L'ENSEMBLE Reseau

    do
    {
        printf("SAISIR LE NOMBRE D' ELEMENT DE Algorithme:\n");
        getInt(&nalgo);
        if(nalgo < 1 || nalgo > MI2122)
            printf("SAISI INVALIDER !\n");
    } while (nalgo < 1 || nalgo > MI2122);

    // SAISI DES ELEMENT DE L' ENSEMBLE Algorithme

    printf("SAISIR L'ELEMENT 1 DE Algorithme:\n");
    scanf("%s" , Algorithme->prenom);
    for(i=1 ; i<nalgo ; i++)
    {
        do
        {
            printf("SAISIR L'ELEMENT %d DE Algorithme:\n" , i+1);
            scanf("%s" , element.prenom);
            k=0;
            for(j=0 ; j<i ; j++)
            {
                if(strcmp((Algorithme + j)->prenom , element.prenom) == 0)
                {
                    printf("%s EXISTE !\n" , element.prenom);
                    k++;
                }
            }
        } while (k != 0);
        strcpy((Algorithme + i)->prenom , element.prenom);
    }

    // SAISI DE NOMBRE D'ELEMENT DE L'ENSEMBLE Reseau

    do
    {
        printf("SAISIR LE NOMBRE D'ELEMENT DE L'ENSEMBLE Reseau:\n");
        getInt(&nreseau);
        if(nreseau<1 || nreseau>MI2122)
            printf("SAISI INVALIDER !\n");
    } while (nreseau<1 || nreseau>MI2122);

    // SAISI DES ELEMENT DE L' ENSEMBLE Reseau
    
    printf("SAISIR L'ELEMENT 1 DE L'ENSEMBLE Reseau:\n");
    scanf("%s" , Reseau->prenom);
    for(i=1 ; i<nreseau ; i++)
    {
        do
        {
            printf("SAISIR L'ELEMENT %d DE L'ENSEMBLE Reseau:\n" , i+1);
            scanf("%s" , element.prenom);
            k=0;
            for(j=0 ; j<i ; j++)
            {
                if(strcmp((Reseau + j)->prenom , element.prenom)==0)
                {
                    printf("%s EXISTE\n" , element.prenom);
                    k++;
                }
            }
        } while (k != 0);
        strcpy((Reseau + i)->prenom , element.prenom);   
    }

    // Affichage de l'ensemble Algorithme

    printf("\nL'ENSEMBLE Algorithme EST {");
    for(i=0 ; i<nalgo ; i++)
    {
        printf("%s" , (Algorithme + i)->prenom);
        if(i < nalgo-1)
            printf(",");
    }
    printf("}");

    // Affichage de l'ensemble Reseau

    printf("\nL'ENSEMBLE Reseau EST {");
    for(i=0 ; i<nreseau ; i++)
    {
        printf("%s" , (Reseau + i)->prenom);
        if(i < nreseau-1)
            printf(",");
    } 
    printf("}");

    // Recherche de l' ensemble AlgorithmeUniq

    for(i=0 ; i<nalgo ; i++)
    {
        k=0;
        for(j=0 ; j<nreseau ; j++)
            if(strcmp((Algorithme + i)->prenom , (Reseau + j)->prenom) == 0)
                k++;
        if(k == 0)
        {
            strcpy((AlgorithmeUniq + iA)->prenom , (Algorithme + i)->prenom);
            strcpy((AlgorithmeOuReseau + iAOR)->prenom , (Algorithme + i)->prenom);
            iA++;
            iAOR++;
        }
    }

    // Affichage de AlgorithmeUniq

    printf("\nL'ENSEMBLE AlgorithmeUniq EST {");
    for(i=0 ; i<nalgo ; i++)
    {
        printf("%s" , (AlgorithmeUniq + i)->prenom);
        if(i < iA-1)
            printf(",");
    }
    printf("}");

    // Recherche de l' ensemble ReseauUniq

    for(i = 0 ; i<nreseau ; i++)
    {
        k=0;
        for(j=0 ; j<nalgo ; j++)
            if(strcmp((Reseau + i)->prenom , (Algorithme + j)->prenom)==0)
                k++;
        if(k == 0)
        {
            strcpy((ReseauUniq + iR)->prenom , (Reseau + i)->prenom);
            strcpy((AlgorithmeOuReseau + iAOR)->prenom , (Reseau + i)->prenom);
            iR++;
            iAOR++;
        }
    }

    // Affichage de l'ensemble Reseau

    printf("\nL'ENSEMBLE ReseauUniq EST {");
    for(i=0 ; i<iR ; i++)
    {
        printf("%s" , (ReseauUniq + i)->prenom);
        if(i < iR-1)
        printf(",");
    }
    printf("}");
    
    // Recherche de l'ensemble AlgorthimeEtReseau

    for(i=0 ; i<nalgo ; i++)
    {
        for(j=0 ; j<nreseau ; j++)
        {
            if(strcmp((Algorithme + i)->prenom,(Reseau + j)->prenom)==0)
            {
                strcpy((AlgorithmeEtReseau + iAR)->prenom , (Algorithme + i)->prenom);
                strcpy((AlgorithmeOuReseau + iAOR)->prenom , (Algorithme + i)->prenom);
                iAR++;
                iAOR++;
            }
        }
    }

    // Affichage de l'ensemble AlgorithmeEtReseau

        printf("\nL'ENSEMBLE AlgorithmeEtReseau EST {");
        for(i=0 ; i<iAR ; i++)
        {
            printf("%s" , (AlgorithmeEtReseau + i)->prenom);
            if(i < iAR-1)
                printf(",");
        }
        printf("}");

    // Affichage de l'ensemble AlgorithmeOuReseaau

    printf("\nL'ENSEMBLE AlgorithmeOureseau EST {");
    for(i=0 ; i<iAOR ; i++)
    {
        printf("%s" , (AlgorithmeOuReseau + i)->prenom);
        if(i < iAOR-1)
            printf(",");
    }
    printf("}");
}
void s2exo1()
{
    int nbrA,nbrB,nbrd,miL2A[MI2122],miL2B[MI2122],dom_L2MIFAST[MI2122];
    printf("SAISIRR LE NOMBRE D' ELEMENT DE L'ENSEMBLE miL2A:\n");
    nbrA=controle_saisi();
    saisi_ensemble(miL2A , &nbrA);
    printf("SAISIRR LE NOMBRE D' ELEMENT DE L'ENSEMBLE miL2B:\n");
    nbrB=controle_saisi();
    saisi_ensemble(miL2B , &nbrB);
    printf("\nL'ENSEMBLE miL2A EST ");
    ecrire_ensemble(miL2A , &nbrA);
    printf("\nL'ENSEMBLE miL2B EST ");
    ecrire_ensemble(miL2B , &nbrB);
    printf("\nL'ENSEMBLE miL2AxmiL2B EST ");
    miL2AxmiL2B(miL2A , miL2B , &nbrA , &nbrB);
    printf("\nL' ENSEMBLE L2MIFAST EST ");
    L2MIFAST(miL2A , miL2B , &nbrA , &nbrB);
    printf("\nL'ENSEMBLE dom EST: ");
    dom_l2mifast(miL2A , miL2B , &nbrA , &nbrB);
    //printf("\nL'ENSEMBLE img EST: ");
    //img_L2MIFAST(miL2A , miL2B , &nbrA , &nbrB);
}
void s2exo2()
{
    int nbr,miFAST[MI2122],mpcFAST[MI2122];
    printf("NB: L'ENSEMBLE miFAST ET mpcFAST ON LE MEME ELEMENT\n\nSAISIR LE NOMBRE D'ELEMENT:\n");
    nbr = controle_saisi();
    printf("SAISIR LES ELEMENT DE L'ENSEMBLE miFAST\n\n");
    saisi_ensemble(miFAST , &nbr);
    printf("SAISIR LES ELEMENT DE L'ENSEMBLE mpcFASTFAST\n\n");
    saisi_ensemble(mpcFAST , &nbr);
    printf("\nL'ENSEMBLE miFAST EST :");
    ecrire_ensemble(miFAST , &nbr);
    printf("\nL' ENSEMBLE mpcFAST EST :");
    ecrire_ensemble(mpcFAST , &nbr);
    printf("\n------------------------------------------------------------\n");
    printf("\tPropriete\t\tResultat de la verification\n");
    printf("------------------------------------------------------------\n");
    if(!mi_mpc_fonction(miFAST , mpcFAST , &nbr))
    {
        printf("\tFonction\t\t\tnon\n");
        printf("------------------------------------------------------------\n");
        printf("\tinjective\t\t\tnon\n");
        printf("------------------------------------------------------------\n");
        printf("\tsurjective\t\t\tnon\n");
        printf("------------------------------------------------------------\n");
    }
    else
    {
        printf("\tFonction\t\t\toui\n");
        printf("------------------------------------------------------------\n");
        if(mi_mpc_injective(miFAST , mpcFAST , &nbr))
            printf("\tinjective\t\t\toui\n");
        else
            printf("\tinjective\t\t\tnon\n");
        printf("------------------------------------------------------------\n");
        if(mi_mpc_supjective(miFAST , mpcFAST , &nbr))
            printf("\tsurjective\t\t\toui\n");
        else
            printf("\tsurjective\t\t\tnon\n");
        printf("------------------------------------------------------------\n");
    }
}
void s2exo3()
{
    
}
int controle_saisi(void)
{
    int nbr;
    do
    {
        getInt(&nbr);
        if (nbr < 1 || nbr > MI2122)
            printf("ERRUR !: SAISIR UN ENTIER NATURELLE NON NULL:\n");
        
    } while (nbr < 1 || nbr > MI2122);
    return nbr;
}
void saisi_ensemble(int *p , int *nbr)
{
    int i,j,element,k;
    printf("SAISIR L'ELEMENT 1:\n");
    getInt(p);
    for(i=1 ; i<*nbr ; i++)
    {
        do
        {
            printf("SAISIR L'ELEMENT %d:\n",i+1);
            scanf("%d" , &element);
            k=0;
            for(j=0 ; j<i ; j++)
            {
                if(*(p + j) == element)
                {
                    printf("%d EXSITE !\n" , element);
                    k++;
                }
            }
        }while(k != 0);
        *(p + i) = element;
    }
}
void ecrire_ensemble(int *p , int *nbr)
{
    int i;
    printf("{");
    for(i=0 ; i<*nbr ; i++)
    {
        printf("%d" , *(p + i));
        if(i < *nbr-1)
            printf(",");
    }
    printf("}");
}
void miL2AxmiL2B(int *p1 , int *p2 , int *nbr1 , int *nbr2)
{
    int i,j;
    printf("{");
    for(i=0 ; i<*nbr1 ; i++)
    {
        for(j=0 ; j<*nbr2 ; j++)
        {
                printf("(%d,%d)" , *(p1 + i) , *(p2 + j));
                if(i < *nbr1-1 || j < *nbr2-1)
                    printf(",");
        }
    }
    printf("}");
}
void L2MIFAST(int *p1 , int *p2 , int *nbr1 , int *nbr2)
{
    int i,j;
    printf("{");
    for(i=0 ; i<*nbr1 ; i++)
    {
        for(j=0 ; j<*nbr2 ; j++)
        {
            if(*(p1 + i)!=0)
                if(*(p2 + j)%*(p1 + i) == 0)
                {
                    printf("(%d,%d)" , *(p1 + i) , *(p2 + j));
                }
        }
    }
    for(i=0 ; i<*nbr1 ; i++)
    {
        for(j=0 ; j<*nbr2 ; j++)
        {
            if(*(p2 + j)!=0 && *(p1 + i) !=0)
                if(*(p1 + i)%*(p2 + j) == 0 && *(p2 + j)%*(p1 + i) != 0)
                {
                    printf("(%d,%d)" , *(p2 + j) , *(p1 + i));
                    if(i < *nbr1-1 || j < *nbr2-1)
                    printf(",");
                }
        }
    }
    printf("}");
}
void dom_l2mifast(int *p1 , int *p2 , int *nbr1 , int *nbr2)
{
   int i,j;
    printf("{");
    for(i=0 ; i<*nbr1 ; i++)
    {
        for(j=0 ; j<*nbr2 ; j++)
        {
            if(*(p1 + i) != 0)
                if(*(p2 + j)%*(p1 + i) == 0)
                {
                    printf("%d" , *(p1 + i));
                    if(i < *nbr1-1)
                    printf(",");
                    break;
                }
        }
    }
    for(j=0 ; j<*nbr2 ; j++)
    {
        for(i=0 ; i<*nbr1 ; i++)
        {
            if(*(p2 + j) != 0 && *(p1 + i) != 0)
                if(*(p1 + i)%*(p2 + j) == 0 &&*(p2 + j)%*(p1 + i) != 0 && *(p2 + j)> *(p1 + i))
                {
                    printf("%d" , *(p2 + j));
                    if(i < *nbr1-1 || j < *nbr2-1)
                    printf(",");
                    break;
                }
        }
    }
    printf("}");
}
void img_L2MIFAST(int *p1 , int *p2 , int *nbr1 , int *nbr2)
{
    int i,j;
    printf("{");
    for(j=0 ; j<*nbr2 ; j++)
    {
        for(i=0 ; i<*nbr1 ; i++)
        {
            if(*(p2 + j) != 0)
                if(*(p1 + i)%*(p2 + j) == 0)
                {
                    printf("%d" , *(p2 + j));
                    if(j < *nbr2-1)
                    printf(",");
                    break;
                }
        }
    }
    for(i=0 ; i<*nbr1 ; i++)
    {
        for(j=0 ; j<*nbr2 ; j++)
        {
            if(*(p2 + j) != 0 && *(p1 + i) != 0)
            if(*(p2 + j)%*(p1 + i) == 0 && *(p1 + i)%*(p2 + j) != 0 && *(p1 + i) > *(p2 + j))
            {
                printf("%d" , *(p1 + i));
                if(i < *nbr1-1 || j < *nbr2-1)
                printf(",");
                break;
            }
        }
    }
    printf("}");
}
bool mi_mpc_fonction(int *p1 , int *p2 , int *nbr)
{
    int i,j,k,def=0;
    for(i=0 ; i<*nbr ; i++)
    {
        k=0;
        for(j=0 ; j<*nbr ; j++)
        {
            if(*(p1+i)%*(p2+j) == 0)
                k++;
        }
        if(k == 1)
            def++;
    }
    if(def == *nbr)
        return true;
    else
        return false;
}

bool mi_mpc_injective(int *p1 , int *p2 , int *nbr)
{
    int i,j,k;
    for(j=0 ; j<*nbr ; j++)
    {
      k=0;
        for(i=0 ; i<*nbr ; i++)
        {
            if(*(p1 + i)%*(p2 + j) == 0)
                k++;  
        }
        if(k >= 2)
            return false;
    }
    return true;
}

bool mi_mpc_supjective(int *p1 , int *p2 , int *nbr)
{
    int i,j,k;
    for(j=0 ; j<*nbr ; j++)
    {
      k=0;
        for(i=0 ; i<*nbr ; i++)
        {
            if(*(p1 + i)%*(p2 + j) == 0)
                k++;  
        }
        if(k == 0)
            return false;
    }
    return true;
}
void matriceAdjacenceStatiqueGraphe()
{
    int tab[MIL2][MIL2],i,j;
    for(i=0 ; i<MIL2 ; i++)
    {
        for(j=0 ; j<MIL2 ; j++)
        {
            do
            {
                printf("\nargc[%d]->[%d]:" , i , j);
                getInt(*(tab + i) + j);
                if(*(*(tab + i) + j) != 0 && *(*(tab + i) + j) != 1)
                    printf("\nERREUR! SAISIR 0 OU 1:\n");
            } while (*(*(tab + i) + j) != 0 && *(*(tab + i) + j) != 1); 
        }
    }
    for(i=0 ; i<MIL2 ; i++)
    {
        for(j=0 ; j<MIL2 ; j++)
        {
            printf("%d\t" , *(*(tab + i) + j));
        }
        printf("\n");
    }
}
void matriceAdjacenceDynamiqueGraphe()
{
    int **tab;
    int i,j;
    tab = (int**)malloc(MIL2*sizeof(int*));
    for(i=0 ; i<MIL2 ; i++)
        *(tab + i) = (int*)malloc(sizeof(int*)*MIL2);
    for(i=0 ; i<MIL2 ; i++)
    {
        for(j=0 ; j<MIL2 ; j++)
        {
            do
            {
                printf("\nargc[%d]->[%d]:" , i , j);
                getInt(*(tab + i) + j);
                if(*(*(tab + i) + j) != 0 && *(*(tab + i) + j) != 1)
                    printf("\nERREUR! SAISIR 0 OU 1:\n");    
            } while (*(*(tab + i) + j) != 0 && *(*(tab + i) + j) != 1); 
        }
    }
    for(i=0 ; i<MIL2 ; i++)
    {
        for(j=0 ; j<MIL2 ; j++)
        {
            printf("%d\t" , *(*(tab + i) + j));
        }
        printf("\n");
    }
    free(tab);
}
void mainMatriceAdjacenDynamiqueGraphe()
{
    int menu,retour;
    do
    {
        clear();
        printf("\t\tCours Systeme Discrets : partie 1 Graphe");
        bar();
        printf("Choisir 1 Pour saisir et Afficher un Graphe de maniere statique");
        bar();
        printf("Choisir 2 Pour saisir et Afficher un Graphe de maniere Dynamique");
        bar();
        printf("Choisir 3 pour quitter le menu de la fonction");
        bar();
        printf("\n\n\tChoisir:");
        getInt(&menu);
        switch (menu)
        {
        case 1:
            clear();
            matriceAdjacenceStatiqueGraphe();
            break;
        case 2:
            clear();
            matriceAdjacenceDynamiqueGraphe();
            break;
        case 3:
            clear();
            return;
        default:
            clear();
            printf("OPTION INVALIDER");
            break;
        }
        printf("\nRETOUR(0):");
        getInt(&retour);
    } while (retour == 0);
}
void s3exo1()
{
    mainMatriceAdjacenDynamiqueGraphe();
}
void inverseGraphe()
{
    int G[MIL2][MIL2],i,j;
    for(i=0 ; i<MIL2 ; i++)
    {
        for(j=0 ; j<MIL2 ; j++)
        {
            do
            {
                printf("\nargc[%d]->[%d]:" , i , j);
                getInt(*(G + i) + j);
                if(*(*(G + i) + j)!=0 && *(*(G + i) + j)!=1)
                    printf("\nERREUR! SAISIR 0 OU 1:\n");
            } while (*(*(G + i) + j)!=0 && *(*(G + i) + j)!=1);
        }
    }
    printf("\nLA MATRICE DU GRAPHE EST :\n");
    for(i=0 ; i<MIL2 ; i++)
    {
        for(j=0 ; j<MIL2 ; j++)
        {
            printf("\t%d" , *(*(G + i) + j));
        }
        printf("\n");
    }
    printf("\nLA MATRICE INVERSE DE G EST:\n");
    for(j=0 ; j<MIL2 ; j++)
    {
        for(i=0 ; i<MIL2 ; i++)
        {
            printf("\t%d" , *(*(G + i) + j));
        }
        printf("\n");
    }
}
void unionDeuxGraphe()
{
    int L2INFO[MIL2][MIL2],L2MATH[MIL2][MIL2],L2MI[MIL2][MIL2],i,j;
    printf("\nSAISIR LA MATRICE ADJACENT DE L2INFO\n\n");
    for(i=0 ; i<MIL2 ; i++)
    {
        for(j=0 ; j<MIL2 ; j++)
        {
            do
            {
                printf("\nargc_L2INFO[%d]->[%d]:" , i ,j);
                getInt(*(L2INFO + i) + j);
                if(*(*(L2INFO + i) + j) != 0 && *(*(L2INFO + i) + j) != 1)
                    printf("\nERREUR! SAISIR 0 OU 1:\n");
            } while (*(*(L2INFO + i) + j) != 0 && *(*(L2INFO + i) + j) != 1);
        }
    }
    printf("\n\nSAISIR LA MATRICE ADJACENT DE L2MATH\n\n");
    for(i=0 ; i<MIL2 ; i++)
    {
        for(j=0 ; j<MIL2 ; j++)
        {
            do
            {
                printf("argc_L2MATH[%d]->[%d]:" , i ,j);
                getInt(*(L2MATH + i) + j);
            } while (*(*(L2MATH + i) + j) !=0 && *(*(L2MATH + i) + j) != 1);
            
        }
    }
    printf("\n\nLA MATRICE ADJACEN DE L2INFO EST :\n\n");
    for(i=0 ; i<MIL2 ; i++)
    {
        for(j=0 ; j<MIL2 ; j++)
        {
            printf("\t%d" , *(*(L2INFO + i) + j));
        }
        printf("\n");
    }
    printf("\n\nLA MATRICE ADJACEN DE L2MATH EST :\n\n");
    for(i=0 ; i<MIL2 ; i++)
    {
        for(j=0 ; j<MIL2 ; j++)
        {
            printf("\t%d" , *(*(L2MATH + i) + j));
        }
        printf("\n");
    }

    // Recherche de L2MI

    for(i=0 ; i<MIL2 ; i++)
    {
        for(j=0 ; j<MIL2 ; j++)
        {
            if(*(*(L2INFO + i) + j) == *(*(L2MATH + i) + j))
                *(*(L2MI + i) + j) = *(*(L2INFO + i) + j);
            else
                *(*(L2MI + i) + j) = 1;
        }
    }
    printf("\n\nLA MATRICE ADJACEN DE L2MI EST:\n\n");
    for(i=0 ; i<MIL2 ; i++)
    {
        for(j=0 ; j<MIL2 ; j++)
            printf("\t%d" , *(*(L2MI + i) + j));
        printf("\n");
    }
}
void verificationTOTALITEGraphe()
{
    int **G,i,j,k,b;
    G = (int**)malloc(sizeof(int*)*MIL2);
    for(i=0 ; i<MIL2 ; i++)
        *(G + i) = (int*)malloc(sizeof(int*)*MIL2);
    for(i=0 ; i<MIL2 ; i++)
    {
        for(j=0 ; j<MIL2 ; j++)
        {
            do
            {
                printf("\nargc[%d]->[%d]:" , i , j);
                getInt(*(G + i) + j);
            } while (*(*(G + i) + j) != 0 && *(*(G + i) + j) != 1);
        }
    }
    printf("\n\nLE GRAPHE G EST :\n");
    for(i=0 ; i<MIL2 ; i++)
    {
        for(j=0 ; j<MIL2 ; j++)
        {
            printf("\t%d" , *(*(G + i) + j));
        }
        printf("\n");
    }
    b=0;
    for(i=0 ; i<MIL2 ; i++)
    {
        k=0;
        for(j=0 ; j<MIL2 ; j++)
        {
            if(*(*(G + i) + j) == 1)
                k++;
        }
        if(k != 0)
            b++;
    }
    if(b == MIL2)
        printf("\nLE GRAPHE G EST TOTALE");
    else
        printf("\nLE GRAPHE G N'EST PAS TOTALE\n\n");
}
void mainMatriceAdjanceDynamiqueGraphe2()
{
    int menu;
    printf("\t\tCours Systeme Discrets : Partie 2 Graphe\n");
    printf("------------------------------------------------------------\n");
    printf("Choisir -1- pour saisir et affiche un Graphe et son inverse\n");
    printf("------------------------------------------------------------\n");
    printf("Choisir -2- pour saisir et affiche deux Graphe puis leur union\n");
    printf("------------------------------------------------------------\n");
    printf("Choisir -3- pour verifier la propriete de totalite d' Graphe\n");
    printf("------------------------------------------------------------\n");
    printf("Choisir -4- pour quitter le menu de la fonction\n");
    printf("------------------------------------------------------------\n\n");
    printf("Choisir:");
    getInt(&menu);
    switch (menu)
    {
    case 1:
        clear();
        inverseGraphe();
        break;
    case 2:
        clear();
        unionDeuxGraphe();
        break;
    case 3:
        clear();
        verificationTOTALITEGraphe();
        break;
    case 4:
        clear();
        return;
    
    default:
        break;
    }
}
void s3exo2()
{
    mainMatriceAdjanceDynamiqueGraphe2();   
}