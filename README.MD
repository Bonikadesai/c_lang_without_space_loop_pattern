><u>**Aim**</u> : <b>Q.1 Write a Program to print the below pattern using nested for loop.<br>
1<br>
2 1<br>
3 2 1<br>
4 3 2 1<br>
5 4 3 2 1 <br></b>

><u>**Program**</u> : 

      #include <stdio.h>

        void main(){
            for(int i=1;i<=5;i++){
                for(int j=i;j>=1;j--){
                    printf("%d",j);
                }
                printf("\n");
            }
        }

<br>

><u>**Aim**</u> : <b>Q.2 Write a Program to print the below pattern using nested for loop.<br>
5<br>
4 5<br>
3 4 5<br>
2 3 4 5<br>
1 2 3 4 5<br></b>

><u>**Program**</u> : 

       #include <stdio.h>

        void main(){
            for(int i=5;i>=1;i--){
                for(int j=i;j<=5;j++){
                    printf("%d",j);
                }
                printf("\n");
            }
        }

<br>

><u>**Aim**</u> : <b>Q.3 Write a Program to print the below pattern using nested for loop.<br>
5<br>
4 4 <br>
3 3 3<br>
2 2 2 2<br>
1 1 1 1 1<br></b>

><u>**Program**</u> : 

      #include <stdio.h>

        void main(){
            for(int i=5;i>=1;i--){
                for(int j=i;j<=5;j++){
                    printf("%d",i);
                }
                printf("\n");
            }
        }

<br>

><u>**Aim**</u> : <b>Q.4 Write a Program to print the below pattern using nested for loop.<br>
1 2 3 4 5<br>
2 3 4 5<br>
3 4 5<br>
4 5<br>
5<br></b>

><u>**Program**</u> : 

       #include <stdio.h>

        void main(){
            for(int i=1;i<=5;i++){
                for(int j=i;j<=5;j++){
                    printf("%d",j);
                }
                printf("\n");
            }
        }

<br>

><u>**Aim**</u> : <b>Q.5 Write a Program to print the below pattern using nested for loop.<br>
1 1 1 1 1<br>
2 2 2 2<br>
3 3 3<br>
4 4<br>
5<br></b>

><u>**Program**</u> : 

        #include <stdio.h>

            void main(){
                for(int i=1;i<=5;i++){
                    for(int j=i;j<=5;j++){
                        printf("%d",i);
                    }
                    printf("\n");
                }
            }

<br>

><u>**Aim**</u> : <b>Q.6 Write a Program to print the below pattern using nested for loop.<br>
1 0 1 0 1<br>
1 0 1 0<br>
1 0 1<br>
1 0 <br>
1<br></b>

><u>**Program**</u> : 

       #include <stdio.h>

        void main(){
            for(int i=5;i>=1;i--){
                for(int j=1;j<=i;j++){
                    if(j%2==0){printf("0",j);}
                    else{printf("1",j);}
                }
                printf("\n");
            }
        }

<br>

><u>**Aim**</u> : <b>Q.7 Write a Program to print the below pattern using nested for loop.
A<br>
B A<br>
C B A<br>
D C B A<br>
E D C B A<br></b>

><u>**Program**</u> : 

        #include <stdio.h>

            void main(){
                for(char i='A';i<='E';i++){
                    for(char j=i;j>='A';j--){
                    printf("%c",j);
                    }
                    printf("\n");
                }
            }

<br>

><u>**Aim**</u> : <b>Q.8 Write a Program to print the below pattern using nested for loop.<br>
1<br>
2 3<br>
4 5 6<br>
7 8 9 10<br>
11 12 13 14 15<br></b>

><u>**Program**</u> : 

       #include <stdio.h>

        void main(){
            int n=1;
            for(int i=1;i<=5;i++){
                for(int j=i;j>=1;j--){
                    printf("%d",n);
                    n++;
                }
                printf("\n");
            }
        }

<br>