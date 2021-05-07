#include <iostream>
using namespace std;
char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};
void Draw(){
    char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<"  ";}
        cout<<endl;}
    
}
int x( int &x){
    char cha='x';
    for(int i=0;i<1;i++){
    if(x==1){
        matrix[0][0]=cha;}
    if(x==2){
        matrix[0][1]=cha;}
    if(x==3){
        matrix[0][2]=cha;}
    if(x==4){
        matrix[1][0]=cha;}
    if(x==5){
        matrix[1][1]=cha;}
    if(x==6){
        matrix[1][2]=cha;}
    if(x==7){
        matrix[2][0]=cha;}
    if(x==8){
        matrix[2][1]=cha;}
    if(x==9){
        matrix[2][2]=cha;}
        }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<"  ";}
        cout<<endl;}
    return x;}

int o( int &x){
    char cha='o';
    for(int i=0;i<1;i++){
    if(x==1){
        matrix[0][0]=cha;}
    if(x==2){
        matrix[0][1]=cha;}
    if(x==3){
        matrix[0][2]=cha;}
    if(x==4){
        matrix[1][0]=cha;}
    if(x==5){
        matrix[1][1]=cha;}
    if(x==6){
        matrix[1][2]=cha;}
    if(x==7){
        matrix[2][0]=cha;}
    if(x==8){
        matrix[2][1]=cha;}
    if(x==9){
        matrix[2][2]=cha;}
        }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<"  ";}
        cout<<endl;}
    return x;
}
void enteringxo(){
    char xo;
    int num;
    cout<<"enter x or o";
    cin>>xo;
    if(xo=='x'|| xo=='X'){
        cout<<"enter the place of the x";
        cin>>num;
        x(num);}
    if(xo=='O'|| xo=='o'){
        cout<<"enter the place of the o";
        cin>>num;
        o(num);}
    }

int main() {
   Draw();

    bool done=false;
    if(done==false){
        for(;;){
        enteringxo();
            //all the posibiltiys for x and o winning
            if((matrix[0][0]=='x'||matrix[0][0]=='o')&& (matrix[1][1]=='x'||matrix[1][1]=='o')&& (matrix[2][2]=='x'||matrix[2][2]=='o')){
        cout<<"You won";
        done=true;
        break;}
        else if((matrix[0][0]=='x'||matrix[0][0]=='o')&&(matrix[0][1]=='x'||matrix[0][1]=='o')&&(matrix[0][2]=='x'|| matrix[0][2]=='o')){
                cout<<"You won";
                done=true;
                break;}
else if((matrix[1][0]=='x'||matrix[1][0]=='o')&&(matrix[1][1]=='x'||matrix[1][1]=='o')&&(matrix[2][2]=='x'||matrix[2][2]=='o')){
                cout<<"You won";
                done=true;
                break;}
else if((matrix[2][0]=='x'||matrix[2][0]=='o')&&(matrix[2][1]=='x'||matrix[2][1]=='o')&&(matrix[2][2]=='x'||matrix[2][2]=='o')){
                cout<<"You won";
                done=true;
                break;}
else if((matrix[0][0]=='x'||matrix[0][0]=='o')&&(matrix[1][0]=='x'||matrix[1][0]=='o')&&(matrix[2][0]=='x'||matrix[2][0]=='o')){
                cout<<"You won";
                done=true;
                break;}
        
else if((matrix[0][1]=='x'||matrix[0][1]=='o')&&(matrix[1][1]=='x'||matrix[1][1]=='o')&&(matrix[2][1]=='x'||matrix[2][1]=='o')){
                cout<<"You won";
                done=true;
                break;}
else if((matrix[0][2]=='x'||matrix[0][2]=='o')&&(matrix[1][2]=='x'||matrix[1][2]=='o')&&(matrix[2][2]=='x'||matrix[2][2]=='o')){
                cout<<"You won";
                done=true;
                break;}
else if((matrix[0][2]=='x'||matrix[0][2]=='o')&&(matrix[1][1]=='x'||matrix[1][1]=='o')&&(matrix[2][0]=='x'||matrix[2][0]=='o')){
                cout<<"You won";
                done=true;
                break;}
        }}
    return 0;
}
