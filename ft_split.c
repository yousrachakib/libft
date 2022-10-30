#include <stdio.h>
#include <stdlib.h>
int count_split(char *s, char c)
{
    int i;
    int count;
    i = 0;
    while (*s)
    {
        while(*s && s[i] != c)
            i++;
        if(c == 0)
        {
           count++;
            break; 
        }   
        while(*s && s[i] == c)
            i++;
        count++;
    }
    return (count);
}
int len_word(char *s, char c)
{
    int i;
    i = 0;
    while (*s && *s != c)
        i++;
        s++;
    return(i);
}
char *fill_word(char *s, char c, char **word)
{
    int i;
    int count;
    count = len_word(s,c);
    *word = malloc(sizeof(char *) * (count + 1));
    *word[count] = 0;
    if(!*word)
        return (0);
        i = 0;
    while(i < count)
        *word[i++] = *s++;
    while( c == *s)
        s++;
    return (s);
}
int _free(char *s, int n)
{
    while (n--)
        free(s[n]);
    free(s);
    return (0);
}
char **ft_split(char const *s, char c)
{
    int i;
    char **res;
    int count_split;

    if(s == 0)
        return (0);
    while( *s && c && *s == c)
        s++;
    count = count_split((char *) s,c);
    res = malloc(sizeof(char *) * (count + 1));
    res[count_split] = 0;
    if(!res)
        return (0);
    i = 0;
    while (i < count)
    {
      s = fill_word((char *) s, c, (res + i));
      if(!s)
      _free(res, i);
      i++;
    }
    return (res);
}
int main()
{
    char **res;
    char s[] = "11,22,33,,";
    res = ft_split(s,',');
    int i = 0;
    while (i < 4)
    {
        printf("%s\n",res[i]);
        i++;
    }
    return 0;
}