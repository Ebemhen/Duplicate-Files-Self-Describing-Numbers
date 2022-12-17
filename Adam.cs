using System;


namespace AdamStepsApp
{
    class CheckSteps
    {   
        public int count;
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
        public static int testcases; public static string stepsInput;
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the number of test cases");
            testcases = int.Parse(Console.ReadLine());
            for(int j = 0; j < testcases; j++)
            {
               Console.WriteLine("Enter steps:");
               stepsInput = Console.ReadLine();
               CheckSteps StepCase = new CheckSteps();
               StepCase.checkStep(stepsInput);
            }
        }
    }
}
