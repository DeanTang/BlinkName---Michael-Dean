//Digital pins used: D6 and D7
int led1 = D6;
int led2 = D7;

//My last name is Tang Pong (Apologies if I wrote it wrong in Morse Code)
//char lastName[29] = {'-', ' ', '.', '-', ' ', '-', '.', '-', '-', '.', ' ', ' ', '.', '-', '-', '.', ' ', '-', '-', '-', ' ', '-', '.', ' ', '-', '-', '.' };

//My first name is Michael Dean (Apologies if I wrote it wrong in Morse Code)
char firstName[49] = {'-', '-', ' ', '.', '.', ' ', '-', '.', '-', '.', ' ', '.', '.', '.', '.', ' ', '.', '-', ' ', '.', ' ', '.', '-', '.', '.', ' ', ' ', '-', '.', '.', ' ', '.', ' ', '.', '-', ' ', '-', '.'};

void setup() 
{
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
}

void loop()
{
    //Loop for traversing the firstName array
    for (int i = 0; i < 49; i++)
    {
        //Dot -> Light up for 0.5 seconds + Do not light for 1 second
        if (firstName[i] == '.')
        {
            digitalWrite(led1, HIGH);
            digitalWrite(led2, HIGH);
            
            delay(500);
            
            digitalWrite(led1, LOW);
            digitalWrite(led2, LOW);
            
            delay(1000);
        }
        //Bar -> Light up for 1.5 seconds + Do not light for 1 second
        if (firstName[i] == '-')
        {
            digitalWrite(led1, HIGH);
            digitalWrite(led2, HIGH);
            
            delay(1500);
            
            digitalWrite(led1, LOW);
            digitalWrite(led2, LOW);
            
            delay(1000);
        }
        //Space -> Do not light up for 1 second + Do not light for 1 second
        if (firstName[i] == ' ')
        {
            digitalWrite(led1, LOW);
            digitalWrite(led2, LOW);
            
            delay(1000);
            
            digitalWrite(led1, LOW);
            digitalWrite(led2, LOW);
            
            delay(1000);
        }
    }
}
