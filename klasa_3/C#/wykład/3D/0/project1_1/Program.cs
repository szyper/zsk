// See https://aka.ms/new-console-template for more information
/*
Random r = new Random();
int day = r.Next(8); // 0-7
string content = "";
switch (day)
{
    case 1: content = "poniedziałek"; break;
    case 2: content = "wtorek"; break;
    case 3: content = "środa"; break;
    case 4: content = "czwartek"; break;
    case 5: content = "piątek"; break;
    case 6: content = "sobota"; break;
    case 7: content = "niedziela"; break;
    default: content = "Error!"; break;
}

Console.WriteLine("Dzień tygodnia: {0}", content);
*/

Random r = new Random();
int day = r.Next(8); // 0-7
string content = day switch
{
    1 => "poniedziałek",
    2 => "wtorek",
    3 => "środa",
    4 => "czwartek",
    5 => "piątek",
    6 => "sobota",
    7 => "niedziela",
    _ => "Error!"
};

Console.WriteLine("Dzień tygodnia: {0}", content);
