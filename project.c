#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int a,o,z,f,h;
    int e,i,u;
    int ch=1 , df=1;
    printf("\n\n\n                                                         **********************************************************\n");
    printf("                                                          \n                                                                            LITERARY CONTEST SPOTTER\n                                                          \n                                                          ");
    printf("The aim of this engine is to reduce the amount of time\n                                                          and efforts consumed in the proces of searching for\n                                                          the right contest.\n");
    printf("\n                                                          Enter 1 for CONTESTS IN INDIAN SUBCONTINENT\n                                                          Enter 2 for INTERNATIONAL CONTESTS\n\n");
    printf("                                                        ***********************************************************\n\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("                                                                           Contests in Indian Sub-continent\n");
        printf("                                                                           ********************************\n");
        printf("                                                                           Enter the attribute of your choice\n                                                                           Press 1 for Poetry Contests\n                                                                           Press 2 for Essay Contests\n                                                                           Press 3 for Article Contests \n                                                                           Press 4 for Story Contests\n\n");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            printf("                                                                           POETRY CONTESTS\n");
            printf("                                                                           ***************\n");
            printf("                                                                           Press 1 for Free Contests\n                                                                           Press 2 for Paid Cotests\n\n");
            scanf("%d" , &z);
            switch (z)
            {
            case 1:
                printf("                                                                           FREE CONTESTS\n");
                printf("                                                                           *************\n");
                printf("                                                                           Press 1 for Free Publication as a Prize\n                                                                           Press 2 for Cash Prize\n");
                break;

            
            case 2:
                printf("                                                                           PAID CONTESTS\n");
                printf("                                                                           *************\n");
                while(ch==1){
                printf("                                                                           Press 3 for Free Publication + Gift Voucher as a Prize\n                                                                           Press 4 for Cash Prize\n\n");
                scanf("%d" , &f);
                
                switch (f)
                {
                case 3:
                    printf("\n                                                                           POETIC PALACE\n");
                    printf("                                                                           -------------\n");
                    printf("                                                                           Poetic Palace is a Writing Platform/Marketplace that connects the world to expert writers,\n                                                                           envisioned towards initiating the global impact of poetry in one central location.\n                                                                           We are fortified with experienced and distinctive poets with a demonstrated\n                                                                           history of working in the Writing and Editing industry\n");
                    printf("                                                                           Theme: No theme\n                                                                           Fees: Rs350 for one entry each\n                                                                           Eligibility: For people aged 21 and above\n                                                                           Date of Submission: 30th september, 2021\n");
                    printf("\n                                                                           *******\n");
                    printf("\n                                                                           THE WRITCO PRIZE\n");
                    printf("                                                                           ----------------\n");
                    printf("                                                                           The Writco creates an original platform for established &\n                                                                           non-established poets and provides the public with consistent\n                                                                           access to contemporary poetry.\n");
                    printf("                                                                           Fees: Rs 200 (ONLY ONE ENTRY PER PERSON)\n                                                                           Eligibility: For people aged 18 and above\n                                                                           Date of Submission: 28th Octobe, 2021\n");
                    break;
                
                case 4:
                    printf("\n                                                                           THE POETRY PALLETTE\n");
                    printf("                                                                           --------------------\n");
                    printf("                                                                           The Poetry Pallette runs a National poetry,\n                                                                           art, speech and song competition for young people aged 18 and above,\n                                                                           focusing on conflict and its impact.\n                                                                           We amplify the voices of young people all over the world.\n");
                    printf("                                                                           Theme: LOVE\n                                                                           Fees: Rs300 per entry (only 2 entries per person is allowed)\n                                                                           Eligibility: For people aged 15 and above\n                                                                           Date of Submission: 21 october, 2021\n");
                    printf("                                                                           Cash Prize: Rs5000 for winner, Rs 2000 for 1st runner up, Rs1000 for 2nd runner up\n\n");
                    printf("\n                                                                           *********\n");
                    printf("\n                                                                           THE WILLIAM GOLDING PRIZE\n");
                    printf("                                                                           --------------------------\n");
                    printf("                                                                           The William Goulding Prize is a not-for-profit organization;\n                                                                           all moneys raised from the competition benefits writers and writing.\n");
                    printf("                                                                           Fees: Rs200/entry\n                                                                           Eligibility: For age 18+\n                                                                           Date of Submission: 30th november, 2021\n");
                    printf("\n                                                                           press 1 to register into 'THE POETRY PALLETTE'\n                                                                           press 2 to register into 'THE WILLIAM GOLDING PRIZE'\n\n");
                    scanf("%d",&h);
                    switch (h)
                    {
                        case 1:
                           system("explorer file:///C:/Users/vidhi/Desktop/New%20folder/form.html");
                        break;
                
                        case 2:
                        printf("                                                                           Contest not available");
                        break;
                    }
                    break;
                }
                printf("\n                                                                           do you want to continue y/n\n");
                scanf("%d" , &ch);
                }
                break;
            }
            break;
        
        
        }
        break;
    case 2:
        printf("International Contests ");
        printf("********\n");
        printf("Enter the attribute of your choice\nPress 1 for Poetry Contests\nPress 2 for Essay Contests\nPress 3 for Article Contests \nPress 4 for Story Contests\n\n");
        scanf("%d",&e);
        switch (e)
        {
        case 1:
            printf("POETRY CONTESTS\n");
            printf("*****\n");
            printf("Press 1 for Free Contests\nPress 2 for Paid Cotests\n\n");
            scanf("%d" , &i);
            switch (i)
            {
            case 1:
                printf("FREE CONTESTS\n");
                printf("*****\n");
                printf("Press 1 for Free Publication as a Prize\nPress 2 for Cash Prize\n");
                break;

            
            case 2:
                printf("PAID CONTESTS\n");
                printf("*****\n");
                while(df==1)
                {
                printf("Press 3 for Free Publication + Gift Voucher as a Prize\nPress 4 for Cash Prize\n\n");
                scanf("%d" , &u);
                
                switch (u)
                {
                case 3:
                    printf("\nPOET'S PLACE\n");
                    printf("-------------\n");
                    printf("Poet's Place is a Writing Platform/Marketplace that connects the world to expert writers,\nenvisioned towards initiating the global impact of poetry in one central location.\nWe are fortified with experienced and distinctive poets with a demonstrated\nhistory of working in the Writing and Editing industry\n");
                    printf("Theme: No theme\nFees: Rs350 for one entry each\nEligibility: For people aged 21 and above\nDate of Submission: 30th september, 2021\n");
                    printf("\n***\n");
                    printf("\nWRITE IT DOWN\n");
                    printf("----------------\n");
                    printf("Write It Down creates an original platform for established &\nnon-established poets and provides the public with consistent\naccess to contemporary poetry.\n");
                    printf("Fees: Rs 200 (ONLY ONE ENTRY PER PERSON)\nEligibility: For people aged 18 and above\nDate of Submission: 28th Octobe, 2021\n");
                    break;
                
                case 4:
                    printf("\nTHE HERITAGE OF POETRY\n");
                    printf("-----------------------\n");
                    printf("The HERITAGE OF POETRY runs a National poetry,\nart, speech and song competition for young people aged 18 and above,\nfocusing on conflict and its impact.\nWe amplify the voices of young people all over the world.\n");
                    printf("Theme: LOVE\nFees: Rs300 per entry (only 2 entries per person is allowed)\nEligibility: For people aged 15 and above\nDate of Submission: 21 october, 2021\n");
                    printf("Cash Prize: Rs5000 for winner, Rs 2000 for 1st runner up, Rs1000 for 2nd runner up\n\n");
                    printf("\n***\n");
                    printf("\nTHE CROUSEL\n");
                    printf("--------------------------\n");
                    printf("The Crousel is a not-for-profit organization;\nall moneys raised from the competition benefits writers and writing.\n");
                    printf("Fees: Rs200/entry\nEligibility: For age 18+\nDate of Submission: 30th november, 2021\n");
                    break;
                }
                printf("\ndo you want to continue y/n\n");
                scanf("%d" , &df);
                }
                break;
            }
            break;
        
        
        }
        break;
    
    default:
        break;
    }
}
