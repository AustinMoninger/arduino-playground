// GLOBAL VARIABLES //
// These can be used in 'setup' and 'loop'
int n;
float sum;
float factorial;
void setup()
{
 Serial.begin(9600); 
 delay(1000); //Wait for serial
 n = 2; // Declare the first value of n, factorial, and sum
 factorial = 1.0;
 sum = 2.0;
}
void loop()
{
 factorial = factorial * n;
 sum = sum + 1/factorial;
 Serial.print("n = "); 
 Serial.print(n);
 Serial.print(", factorial = "); 
 Serial.print(factorial); 
 Serial.print(", sum = "); 
 Serial.println(sum,10); //Display 10 digits of sum
if(n == 30) {
 while(1){} // Create an infinite loop here to keep table from growing forever
 } 
 n++;
}
