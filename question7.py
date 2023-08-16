fatorial = 1
cont_fatorial = 1
x = 1
y = 10
while(y != 0):
   if(x % 2 != 0):
       while(cont_fatorial <=x):
           fatorial *= cont_fatorial
           cont_fatorial +=  1
       print(fatorial)
       x+= 1
       y = y - 1
   else: 
        x+= 1
        y = y - 1
    