using System;

namespace AdamStepsApp
{
    class CheckSteps
    {   
        public int count;
        public string steps;
        public void checkStep(steps){
            foreach(int ch in steps)
                {
                    If(ch == 'U'){
                        count++;
                    }
                }
             Console.WriteLine(count) ;
        }
    }

     class Program
     {
        public int testcases; public string stepInput;
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
