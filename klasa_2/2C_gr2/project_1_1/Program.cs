// See https://aka.ms/new-console-template for more information
string name = "Janusz";
Console.WriteLine("Imię: ");
Console.WriteLine("Imię: " + name);
Console.WriteLine($"Imię: {name}");
Console.WriteLine("Imię: {0}", name);

name = "Krystian";
Console.WriteLine($"Imię: {name} ma {name.Length} znaków");

name = "   Janusz";
Console.WriteLine($"Imię: {name}");

string startTrimName = name.TrimStart();
Console.WriteLine($"Długość imienia {startTrimName} wynosi {startTrimName.Length}");

name = "  Anna  ";
Console.WriteLine($"Długość imienia {name} wynosi {name.Length}");
Console.WriteLine($"Długość imienia {name.Trim()} wynosi {name.Trim().Length}");

name = "  Anna  ";
Console.WriteLine($"Długość imienia {name} wynosi {name.Length}");
Console.WriteLine($"Długość imienia {name.TrimEnd()} wynosi {name.TrimEnd().Length}");

string text = " *** ** ";
Console.WriteLine($"Długość zmiennej text {text.Trim()} wynosi {text.Trim().Length}");


