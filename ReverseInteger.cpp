
class Solution 
{
public:
    int reverse(int x) 
    {
        
        //step 1: Break up the numbers
        
        int temp;
        long number = x;
        string output;
        long finalNumber = 0;
        
        //checks if x is negative
        //number is a copy of x that we'll modify
        if(x < 0)
        {
            number = abs(number);
            
        }
        
        //cout << "The number is: " << number << endl;
        
        
        

        //loops through entire number 
        while (number != 0)
        {
            //stores last digit of number into temp variable
            // cuts last digit off and stores it in number variable
            temp = number % 10;
            number = number / 10;


            //stores numbers in reverse order in a string
            output = output + to_string(temp);



        }
        
        while (output[0] == '0')
        {
            
            //cout << "Before erasing -- Output: " << output << endl;
            
            //Erases first character
            output = output.substr(1);
            
            //cout << "After erasing -- Output: " << output << endl;
            
            
            
        }
        
        //cout << "output string is: " << output << endl;

        if(output[0] != '0' && x != 0)
        {
            
            //convert string to integer
            finalNumber = stol(output);
            
            //cout << "The reversed number is: " << finalNumber << endl;
            
            //check if reversed number is greater than max
            if(finalNumber > INT_MAX)
            {
                finalNumber = 0;
                //cout << "number is too big" << endl;
            }

            

        }
        
        
        
        
        //make reverse negative - if x is negative
        if(x < 0)
        {
            finalNumber = finalNumber * -1;
        }
        
        
        //cout << "The max value for an int is " << INT_MAX - 1534236469 << endl;
        
        
       //cout << endl;
       
        
        
        //returns reversed number
        return finalNumber;
        
    }
};