byte motor[2][3] = {
    {9, 8, 7},
    {3, 4, 5}};
byte c, i, g, f;
bool right = true;

void Direction()
{
    for (i = 1; i < 3; i++)
        for (c = 0; c < 2; c++)
            digitalWrite(motor[c][i], LOW);
    if (millis() % 5100 == 0)
        right = !right;
    if (right)
        for (c = 0; c < 2; c++)
            digitalWrite(motor[c][1], HIGH);
    else
        for (c = 0; c < 2; c++)
            digitalWrite(motor[c][2], HIGH);
}

void Speed()
{
    if (millis() % 20 == 0)
    {
        if (g == 255)
            f = -1;
        else if (g == 0)
            f = 1;
        g += f;
    }
    for (c = 0; c < 2; c++)
        analogWrite(motor[c][0], g);
}

void setup()
{
    for (i = 0; i < 2; i++)
        for (c = 0; c < 3; c++)
            pinMode(motor[i][c], OUTPUT);
}

void loop()
{
    Direction();
    Speed();
}