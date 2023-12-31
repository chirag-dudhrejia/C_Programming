#include <stdio.h>
#include <conio.h>

int main()
{
    int num;

    printf("1  : Aries\n2  : Taurus\n3  : Gemini\n4  : Cancer\n5  : Leo\n6  : Virgo\n7  : Libra\n8  : Scorpius\n9  : Sagittarius\n10 : Capricornus\n11 : Aquarius\n12 : Pisces\n\n");
    printf("Enter Number From Given TO Know About That Zodiac Sing : ");
    scanf("%d", &num);

    printf("\n");

    switch (num)
    {
    case 1:
        printf("The first sign of the zodiac, Aries loves to be number one. Naturally, this dynamic fire sign is no stranger to competition. Bold and ambitious, Aries dives headfirst into even the most challenging situations-and they'll make sure they always come out on top!\n\n");
        break;
    case 2:
        printf("What sign is more likely to take a six-hour bath, followed by a luxurious Swedish massage and decadent dessert spread? Why Taurus, of course! Taurus is an earth sign represented by the bull. Like their celestial spirit animal, Taureans enjoy relaxing in serene, bucolic environments surrounded by soft sounds, soothing aromas, and succulent flavors.\n\n");
        break;
    case 3:
        printf("Have you ever been so busy that you wished you could clone yourself just to get everything done? That's the Gemini experience in a nutshell. Spontaneous, playful, and adorably erratic, Gemini is driven by its insatiable curiosity. Appropriately symbolized by the celestial twins, this air sign was interested in so many pursuits that it had to double itself. You know, NBD!\n\n");
        break;
    case 4:
        printf("Represented by the crab, Cancer seamlessly weaves between the sea and shore representing Cancer's ability to exist in both emotional and material realms. Cancers are highly intuitive and their psychic abilities manifest in tangible spaces. But-just like the hard-shelled crustaceans-this water sign is willing to do whatever it takes to protect itself emotionally. In order to get to know this sign, you're going to need to establish trust!\n\n");
        break;
    case 5:
        printf("Roll out the red carpet because Leo has arrived. Passionate, loyal, and infamously dramatic, Leo is represented by the lion and these spirited fire signs are the kings and queens of the celestial jungle. They're delighted to embrace their royal status: Vivacious, theatrical, and fiery, Leos love to bask in the spotlight and celebrate… well, themselves.\n\n");
        break;
    case 6:
        printf("You know the expression, \"if you want something done, give it to a busy person?\" Well, that definitely is the Virgo anthem. Virgos are logical, practical, and systematic in their approach to life. Virgo is an earth sign historically represented by the goddess of wheat and agriculture, an association that speaks to Virgo's deep-rooted presence in the material world. This earth sign is a perfectionist at heart and isn't afraid to improve skills through diligent and consistent practice.\n\n");
        break;
    case 7:
        printf("Balance, harmony, and justice define Libra energy. As a cardinal air sign, Libra is represented by the scales (interestingly, the only inanimate object of the zodiac), an association that reflects Libra's fixation on establishing equilibrium. Libra is obsessed with symmetry and strives to create equilibrium in all areas of life - especially when it comes to matters of the heart.\n\n");
        break;
    case 8:
        printf("Elusive and mysterious, Scorpio is one of the most misunderstood signs of the zodiac. Scorpio is a water sign that uses emotional energy as fuel, cultivating powerful wisdom through both the physical and unseen realms. In fact, Scorpio derives its extraordinary courage from its psychic abilities, which is what makes this sign one of the most complicated, dynamic signs of the zodiac.\n\n");
        break;
    case 9:
        printf("Oh, the places Sagittarius goes! But… actually. This fire sign knows no bounds. Represented by the archer, Sagittarians are always on a quest for knowledge. The last fire sign of the zodiac, Sagittarius launches its many pursuits like blazing arrows, chasing after geographical, intellectual, and spiritual adventures.\n\n");
        break;
    case 10:
        printf("What is the most valuable resource? For Capricorn, the answer is clear: Time. Capricorn is climbing the mountain straight to the top and knows that patience, perseverance, and dedication is the only way to scale. The last earth sign of the zodiac, Capricorn, is represented by the sea-goat, a mythological creature with the body of a goat and the tail of a fish. Accordingly, Capricorns are skilled at navigating both the material and emotional realms.\n\n");
        break;
    case 11:
        printf("Despite the \"aqua\" in its name, Aquarius is actually the last air sign of the zodiac. Innovative, progressive, and shamelessly revolutionary, Aquarius is represented by the water bearer, the mystical healer who bestows water, or life, upon the land. Accordingly, Aquarius is the most humanitarian astrological sign. At the end of the day, Aquarius is dedicated to making the world a better place.\n\n");
        break;
    case 12:
        printf("If you looked up the word \"psychic\" in the dictionary, there would definitely be a picture of Pisces next to it. Pisces is the most intuitive, sensitive, and empathetic sign of the entire zodiac - and that's because it's the last of the last. As the final sign, Pisces has absorbed every lesson - the joys and the pain, the hopes and the fears - learned by all of the other signs. It's symbolized by two fish swimming in opposite directions, representing the constant division of Pisces' attention between fantasy and reality.\n\n");
        break;
    
    default:
        printf("Invalid Input.");
        break;
    }

}