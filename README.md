# Mario - single

## **Introduction**

The second project of CS50 by Harvard is to print a pyramid like the game Mario, again in C language.  

![Mario's pyramid](https://supermario-game.com/static/images/gp1-2.jpg)


## **Note**

Include standard C library
```
<stdio.h>
```

In first time, prompt the user how many rows in height he wants with this command :  

Initialize the variable of height
```
int n;
```  
  
Then ask the user with (printf for the text, scanf for enter a value in command line tool) 

- *%i says to the program "It's an integer"*
- *&n are the height variable*

```
printf("Height: ");  
scanf("%i", &n);
```

Now it's time to enter a value but before, let me explain the condition ->  

- *Only numbers*  
- *A value between 0 and 9 or if you prefer, 1 to 8*  

**IF** this condition is not met, an error message appears and prompt the user to enter a value again   

- *(printf)* print the message in the console  
- (/n) says to the program "make a new line in the console"

```
printf("Please enter a number between 0 and 9 \n");
```  

**ELSE** if the value meets the condition, the program return a pyramid

For example, with 6 :

```
     #
    ##
   ###     
  ####
 #####
######   
```
Or 2 :
```
 #
## 
```    
**Congratulations, you have created your first pyramid in C language !**  
  
### **Conclusion**

It reminds me of my childhood, when I played this game GBA :smile:  
On the way to the next step :soon:
