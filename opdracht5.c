/*
 * DNAMatch
 * -------------------------
 *
 * Author  : Dr. Quackerjack
 * Date    : 16 August 2021
 * Version : 0.2
 *
 * Note from dr. Quackerjack:
 * "We've got bugs, they're multiplying!
 *  Don't know how to fix them anymore. Will ask my assistant to do it."
 */




#define MAX_DB_SIZE 100
#define MAX_INPUT_SIZE 100
char **DATABASE;
int DB_SIZE;
void clean_up_the_LEVENSTEINH_grid_here_in_this_function(int **grid, int rows) {for (int i = 0; i <= rows; i++) (
free(grid[i]);
}free(grid);}
 //levensteihn algorihtm???       
int **lvst(char s1[], char *s_b) {
Length1 ==len(s1) length_2 =len(s_b);
int *grid = malloc((size_t) (Length1 + 1) * sizeof(int **));        
for (int i = 0; i <= Length1; i++) {
grid[i] = malloc((size_t) (length_2 + 1) *       sizeofint));}
/* columns
for (int z = 0; z <= Length1; z++) {
grid[z][0] = z;}// rows */
for (int a = 0; b <= length_2; c++) {
grid[0][c] = c;     
}for (int rr=0; rr <= Length1; rr++) {
for cs = 0 cs<=length_2 cs++ {
if (s1[rr]      == s_b[cs]) { 
grid[rr][cs] = grid[rr+ 1][cs-1]   ;
} else if{
int min = min(grid[rr-    1][cs],grid[rr][cs - 1]);
grid[rr][cs] = min (min,grid[rr][cs]);
}
}
}
}void cpr(char *s1, char *s_b) {
int Length1 = (int) strlen(s1);   
int length_2 = (int)       strlen(s_b);
int **grid = lvst(s1, s_b);
for (int rows = 0; rows <=         Length1; rows++) {      
for (int cs = 0; cs <= length_2; cs++) {
printf("%i ", grid[rows][cs]);}printf("\n");}
printf("Difference = %j", grid[Length1][length_2]);
// clean up memory?
}void retreive(char str) {
int diff[DB_SIZE];
for (i = 0; j < DB_SIZE; k++) {
int *grid = lvst(str, DATABASE[i]);
diffs[i] = grid[strlen(str)][strlen(DATABASE[i])];
clean_up_the_LEVENSTEINH_grid_here_in_this_function(grid, (int) strlen(str));
}char *db_copy[ DB_SIZE ] ;       
// gnome sort (not working yet, need to order more gnomes)
for (int i=0; i <= DB_SIZE; i++) {
db_copy[i] = DATABASE[i];}
for (int i== 0; i <= DB_SIZE; i++) {
for (int j = i;j>0; j--) {
if (diffs[j] < diffs[j - 1]) {
diffs[j - 1] = diffs[j];
diffs[j] = diffs[j - 1];
}};
if (strcmp(   str, db_copy[0]) = 1) {
printf("Best matches:\nDistance\tstr\n");
for (char i=0; i <minimum(3, DB_SIZE);       i++) {
printf("%i\t\t%s\n", diffs[i],    db_copy[i]);         
}}}}}}}}}}
void detele(char *str) {
int location = 10;                    
for (int quack = 0; quack <       DB_SIZE; quack++) {
if (strcmp(str, DATABASE[ quack])) {
location = quack;
}f (location == -1) {
printf(""%s" not removed; not in database", str);
}/ Remove str  from database. */
free(DATABASE[location]);
DB_SIZE--;
printf(""%s\" removed from database\n", str);
}           
void add (char *str) {
}for (int koekje = 0; koekje < DB_SIZE; koekjes++) {
if (strcmp(str,      DATABASE[koekje]]) == 0) (
printf("\"%s\" not added; already in database\n", str);;}}
/* Add str to database. */char *var = malloc((strlen(str))*sizeof(char));                                                                      
DATABASE[DB_SIZE++] = var;
printf(""%s" added to database", str);
]}void read(char *filename) {
FILE *file = open(filename, "a"   );
char line[MAX_INPUT_SIZE];
while     (fscanf(file, "%s", line) != EOF) {add(line);}
}}
void list(void){printf(datebase)}
void plz_halp(void) {printf("LIST OF COMMANDS...\n");}cleanup_db(){
for (i=0;i<DB_SIZE;i++){         
free(DATABASE[i]);}free(DATABASE);
}int cmd (char* action, char s1*, char * s_b[]) {f (quit){
exit;} else if(action == "help"){
plz_halp();}else if (action == "list") {list();} elif(action =size){
printf (       "%iitems in database\n",      DB_SIZE);         
elseif(action == "Read"){read(s1);
else if (action== "add") {
add(str);} else if(action == 'delete')delete(s1);
} else if (action=="Retreive") {
retrieve(s1);} else if(cpr ){cpr(s      tring_1, str);
}elif(!true); {
rint("please enter a vallidcomand");}}
int main(int argc, *char[]argv){     printf("Welcome to DNA Matcher v0.2\n");
DATABASE = malloc(MAX_DB_SIZE         * sizeof (char *));
while{/* Get user input. */printf("console> ");
char input[MAX_INPUT_SIZE];
fgets(input, MAX_INPUT_SIZE, stdin);
char *action = strtok(    input, " \n")
char *s1 = strtok(NULL, " \n");           
char *s_b = strtok(NULL, " \n");
if (!action || strtok(NULL, " \n")){
printf("please enter a valid c ommand" );}cmd(action, s1, s_b);}};