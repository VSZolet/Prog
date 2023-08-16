#include <stdio.h>
#include <string.h>

int main()
{
        char haystack =
        "Is this the real life-\n"
        "Is this just fantasy-\n"
        "Caught in a landslide-\n"
        "No escape from reality-\n"
        "Open your eyes\n"
        "Look up to the skies and see-\n"
        "I.m just a poor boy,i need no sympathy-\n"
        "Because I.m easy come,easy go,\n"
        "A little high,little low,\n"
        "Anyway the wind blows,doesn.t really matter to me,\n"
        "To me\n"
        "Mama,just killed a man,\n"
        "Put a gun against his head,\n"
        "Pulled my trigger,now he.s dead,\n"
        "Mama,life had just begun,\n"
        "But now I.ve gone and thrown it all away-\n"
        "Mama ooo,\n"
        "Didn.t mean to make you cry-\n"
        "If I.m not back again this time tomorrow-\n"
        "Carry on,carry on,as if nothing really matters-\n"
        "Too late,my time has come,\n"
        "Sends shivers down my spine-\n"
        "Body.s aching all the time,\n"
        "Goodbye everybody-I.ve got to go-\n"
        "Gotta leave you all behind and face the truth-\n"
        "Mama ooo- (any way the wind blows)\n"
        "I don.t want to die,\n"
        "I sometimes wish I.d never been born at all-\n"
        "I see a little silhouetto of a man,\n"
        "Scaramouche,scaramouche will you do the fandango-\n"
        "Thunderbolt and lightning-very very frightening me-\n"
        "Galileo,galileo,\n"
        "Galileo galileo\n"
        "Galileo figaro-magnifico-\n"
        "But I.m just a poor boy and nobody loves me-\n"
        "He.s just a poor boy from a poor family-\n"
        "Spare him his life from this monstrosity-\n"
        "Easy come easy go-,will you let me go-\n"
        "Bismillah! no-,we will not let you go-let him go-\n"
        "Bismillah! we will not let you go-let him go\n"
        "Bismillah! we will not let you go-let me go\n"
        "Will not let you go-let me go\n"
        "Will not let you go let me go\n"
        "No,no,no,no,no,no,no-\n"
        "Mama mia,mama mia,mama mia let me go-\n"
        "Beelzebub has a devil put aside for me,for me,for me-\n"
        "So you think you can stone me and spit in my eye-\n"
        "So you think you can love me and leave me to die-\n"
        "Oh baby-can.t do this to me baby-\n"
        "Just gotta get out-just gotta get right outta here-\n"
        "Nothing really matters,\n"
        "Anyone can see,\n"
        "Nothing really matters-,nothing really matters to me,\n"
        "Any way the wind blows....";
        char needle = "poor";
        unsigned total = 0;
        char p = haystack;
        while ( (p=strstr(p,needle)) != NULL ) {
                p += strlen(needle);
                total++;
        }
        printf("%u occurences of %s\n", total, needle);
        return 0;
}
