#include <Wire.h>
#include <Adafruit_MCP23X17.h>

Adafruit_MCP23X17 mcp;

// North
#define N_RED     0
#define N_YELLOW  1
#define N_GREEN   2

// East
#define E_RED     3
#define E_YELLOW  4
#define E_GREEN   5

// South
#define S_RED     6
#define S_YELLOW  7
#define S_GREEN   8

// West
#define W_RED     9
#define W_YELLOW  10
#define W_GREEN   11


void setup()
{
  Serial.begin(9600);

  if (!mcp.begin_I2C(0x27))
  {
    Serial.println("MCP23017 NOT FOUND!");
    while (1);
  }

  // Configure all 12 outputs
  for (int i = 0; i < 12; i++)
  {
    mcp.pinMode(i, OUTPUT);
    mcp.digitalWrite(i, LOW);
  }

  // Start with North/South green
  northSouthGreen();

  Serial.println("V01 READY");
}


void allOff()
{
  for (int i = 0; i < 12; i++)
  {
    mcp.digitalWrite(i, LOW);
  }
}


void northSouthGreen()
{
  allOff();

  mcp.digitalWrite(N_GREEN, HIGH);
  mcp.digitalWrite(S_GREEN, HIGH);

  mcp.digitalWrite(E_RED, HIGH);
  mcp.digitalWrite(W_RED, HIGH);
}


void northSouthYellow()
{
  allOff();

  mcp.digitalWrite(N_YELLOW, HIGH);
  mcp.digitalWrite(S_YELLOW, HIGH);

  mcp.digitalWrite(E_RED, HIGH);
  mcp.digitalWrite(W_RED, HIGH);
}


void eastWestGreen()
{
  allOff();

  mcp.digitalWrite(E_GREEN, HIGH);
  mcp.digitalWrite(W_GREEN, HIGH);

  mcp.digitalWrite(N_RED, HIGH);
  mcp.digitalWrite(S_RED, HIGH);
}


void eastWestYellow()
{
  allOff();

  mcp.digitalWrite(E_YELLOW, HIGH);
  mcp.digitalWrite(W_YELLOW, HIGH);

  mcp.digitalWrite(N_RED, HIGH);
  mcp.digitalWrite(S_RED, HIGH);
}


void allRed()
{
  allOff();

  mcp.digitalWrite(N_RED, HIGH);
  mcp.digitalWrite(E_RED, HIGH);
  mcp.digitalWrite(S_RED, HIGH);
  mcp.digitalWrite(W_RED, HIGH);
}


void loop()
{
  if (Serial.available() > 0)
  {
    String command = Serial.readStringUntil('\n');

    command.trim();

    if (command == "NS_GREEN")
    {
      northSouthGreen();
      Serial.println("NS_GREEN");
    }

    else if (command == "NS_YELLOW")
    {
      northSouthYellow();
      Serial.println("NS_YELLOW");
    }

    else if (command == "EW_GREEN")
    {
      eastWestGreen();
      Serial.println("EW_GREEN");
    }

    else if (command == "EW_YELLOW")
    {
      eastWestYellow();
      Serial.println("EW_YELLOW");
    }

    else if (command == "ALL_RED")
    {
      allRed();
      Serial.println("ALL_RED");
    }
  }
}
