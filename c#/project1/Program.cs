using System;
namespace project1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int bal = 10000,nd=0,nw=0,td=0,tw=0;
            while (true)
            {
                Console.Write("1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit");
                Console.Write("\nEnter your choice:");
                int n = Convert.ToInt32(Console.ReadLine());
                switch (n)
                {
                    case 1:
                        Console.WriteLine($"balance : {bal}");
                        break;
                    case 2:
                        while (true)
                        {
                            Console.Write("enter amount to be deposited:");
                            int amtd = Convert.ToInt32(Console.ReadLine());
                            if (amtd <= 0)
                            {
                                Console.WriteLine("cannot deposite non-positive amount");
                            }
                            else
                            {
                                nd++;
                                td += amtd;
                                bal = bal + amtd;
                                Console.WriteLine($"deposit successfull.\ncurrent balance:{bal}");
                                break;
                            }
                        }
                        break;
                    case 3:
                        while (true)
                        {
                            Console.Write("Enter amount to be withdrawn:");
                            int amtw = Convert.ToInt32(Console.ReadLine());
                            if (amtw > bal || amtw<=0)
                            {
                                Console.WriteLine("Amount cannot be withdrawn! please stay within balance");
                            }
                            else
                            {
                                nw++;
                                tw += amtw;
                                bal = bal - amtw;
                                Console.WriteLine($"Withdraw successfull.\ncurrent balance:{bal}");
                                break;
                            }
                        }
                        break;
                    case 4:
                        Console.WriteLine("ATM Summary");
                        Console.WriteLine($"Final Balance: {bal}");
                        Console.WriteLine($"deposits: {nd}");
                        Console.WriteLine($"Withdrawals: {nw}");
                        Console.WriteLine($"amount deposited: {td}");
                        Console.WriteLine($"amount Withdrawn: {tw}");
                        Console.WriteLine("Thank you!");
                        return;
                    default: 
                        Console.WriteLine("invalid! enter valid choice:");
                        break;
                }
            }
        }
    }
}