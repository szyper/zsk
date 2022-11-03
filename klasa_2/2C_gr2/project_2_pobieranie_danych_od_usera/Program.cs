Console.Write("Podaj imię: ");
string name = Console.ReadLine();

Console.WriteLine($"Imię: {name}");

name = name.ToLower();
Console.WriteLine("małe litery imienia: {0}", name);

name = name.Substring(0, 1).ToUpper() + name.Substring(1).ToLower();
Console.WriteLine(name);

string surname;
surname = Console.ReadLine();

name = "Janusz";
// var data = name.Contains(surname);
bool data = name.Contains(surname);
Console.WriteLine(data);