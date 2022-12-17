using System;


namespace AdamStepsApp
{
    class CheckSteps
    {   
        //declaring member variable
        public int count;
        //method to check for number of steps in the string
        public void checkStep( string steps){
            foreach(char ch in steps)
                {
                    if(ch == 'U'){
                        count++;
                    }
                }
             Console.WriteLine(count) ;
        }
    }

     class Program
     {
        //declaring member variables
        public static int testcases; public static string stepsInput;
        
        //entry point of program
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the number of test cases");
            testcases = int.Parse(Console.ReadLine());
            for(int j = 0; j < testcases; j++)
            {
               Console.WriteLine("Enter steps:");
               stepsInput = Console.ReadLine();
               //instantiating an object from the class CheckSteps
               CheckSteps StepCase = new CheckSteps();
               StepCase.checkStep(stepsInput);
            }
        }
    }
}
