//a)
- charAt(s1,index);// obtains the character at position index in s1
- concat(s1,s1);// obtains the concatenation of s1 and s2
char *getLongestCommonPrefix(char *s1, char *s2)
{
char *prefix = "";
int index = 0;
while (charAt(s1,index)==charAt(s2,index){
prefix = prefix + charAt(s1,index);
prefix = concat(prefix, charAt(s1,index));
index++;
}
return prefix;
}
//b)
// A for loop runs for a pre-determined number of times,whereas a while loop will carry on until a pre-determined scenario takes place.
// In this case,using a while loop will build the prefix little by little until the condition stops being met.
