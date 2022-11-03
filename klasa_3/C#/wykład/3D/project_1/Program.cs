string name = "Janusz";
Console.WriteLine($"Witaj {name}, imię wynosi {name.Length}");


name = "       Anna";
Console.WriteLine($"Witaj {name}, imię wynosi {name.Length}");

string startTrimName = name.TrimStart();
Console.WriteLine($"Imię: {startTrimName}, długość: {startTrimName.Length}");


name = "abc    ";
// startTrimName = name.TrimStart();
// startTrimName = name.TrimEnd();
startTrimName = name.Trim();
Console.WriteLine($"Imię: {startTrimName}, długość: {startTrimName.Length}");
