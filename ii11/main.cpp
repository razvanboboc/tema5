int count(char Stringmessage[], char desiredChar)
{

for (int i = 0; i < strlen(Stringmessage); i++)
{
if (Stringmessage[i]==desiredChar)

return i;
}
return -1;
}
