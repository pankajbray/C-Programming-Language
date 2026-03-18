/*In a town:Percentage of men = 52%
Total literacy = 48%
Literate men = 35% of total population

If the population is 80,000, find:
Number of illiterate men
Number of illiterate women*/

//Mathematical Logic (Population: 80000)
//Total Men:52% of 80000 = 41600
//Total Women: 80000 - 41600 = 38400
//Total Literate = 48 % of 80000 = 38400
//Literate Men: 35 % of 80000 = 28000
//Illeterate Men: Total Men - Literate Men = 41600 - 28000 = 13600
//Literate Women: Total Literate -  Literate Men = 38400- 28000 = 10400
//illeterate Women: Total Women - Literate Women = 358400 - 10400 = 28000

#include <stdio.h>
int main() {
    //Variables for large numbers use long int
    long int total_pop = 80000;
    long int total_men, total_women, total_lit, lit_men, lit_women, illit_men, illit_women;

    //Calculations
    total_men = total_pop * 52 / 100;
    total_women = total_pop - total_men;
    total_lit = total_pop * 48 / 100;
    lit_men = total_pop * 35 / 100;

    //Logic deductions
    illit_men = total_men - lit_men;
    lit_women = total_lit - lit_men;
    illit_women = total_women - lit_women;

    //Output

printf("--- Total Population Statistics ---\n");
printf("Total Population: %ld\n", total_pop);
printf("Number of Illiterate Men: %ld\n", illit_men);
printf("Number of Illiterate Women: %ld\n", illit_women);

return 0;
}