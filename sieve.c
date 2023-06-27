#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <apple2.h>

#define NUMBERS 450
#define FLORIDA 65
#define NUMSWAPS 450

const signed char *SCHOOL[NUMBERS] = { 
"sense","let","off","those","three","camp","grass","company","I","cell","blue","gun","page","molecule","led","year","did","nation","boat","made","got","clock","room","dictionary","she","this","receive","either","create","is","science","early","moon","season","position","square","car","engine","seem","sand","expect","place","probable","short","office","practice","power","pattern","us","roll","send","cry","son","sugar","green","leg","until","for","plan","under","might","rather","strong","toward","side","picture","anger","north","charge","job","afraid","jump","down","arm","grew","wing","valley","danger","deep","between","yellow","third","particular","sound","remember","doctor","final","choose","act","rest","last","match","consider","ago","speech","region","common","care","fresh","figure","suit","nose","who","size","plural","death","arrange","wait","wheel","live","market","trade","need","sheet","planet","vary","plane","never","original","language","ever","dream","enter","both","him","object","sent","oil","parent","house","white","vowel","divide","electric","poem","cause","prove","word","our","stood","blow","fight","numeral","twenty","weather","wrong","talk","course","wave","wash","order","back","contain","coast","go","inch","quotient","ocean","family","pull","soon","can","reach","clean","hour","about","pound","machine","difficult","now","map","wish","except","huge","join","hit","lift","part","suggest","were","thick","crease","music","fear","are","sight","cold","high","bit","self","through","especially","score","operate","quiet","war","red","train","copy","serve","small","people","thing","paint","believe","sail","problem","fish","wild","two","thin","shoulder","after","lead","your","stick","century","school","path","soft","add","atom","most","slow","oxygen","window","seat","shore","form","wire","stop","subtract","record","dear","state","story","with","right","they","chart","tall","stone","boy","but","girl","solution","touch","scale","sudden","mouth","free","man","letter","cloud","compare","safe","paper","together","laugh","nothing","dance","cotton","look","behind","share","hair","stretch","trip","weight","over","usual","fig","triangle","past","eat","forward","raise","whole","table","friend","wrote","world","glass","large","light","few","crop","foot","village","insect","morning","fire","second","nor","control","hole","ground","ice","teeth","band","gas","interest","person","fall","island","pair","floor","continue","nine","same","test","able","dark","crowd","summer","city","segment","mine","speed","men","include","head","find","east","duck","level","give","hot","brother","rose","begin","stand","design","went","period","king","buy","rich","circle","meat","mind","winter","learn","bright","differ","better","river","radio","oh","silent","dog","space","or","fact","instant","near","column","subject","shout","spring","mix","whether","success","block","middle","pay","silver","indicate","piece","govern","equate","have","spread","human","a","take","among","surprise","out","evening","truck","far","industry","metal","took","there","kind","noise","corner","property","if","will","element","knew","and","change","do","ask","enough","was","put","start","even","wide","told","row","above","note","thus","once","while","lone","stead","search","win","hurry","must","fair","connect","against","magnet","drive","number","watch","meant","name","simple","energy","distant","how","tire","big","earth","joy","eight","station","mark","edge","we","smile","since","allow","shop","again","black","answer","view","heard","tube","home"

};

const unsigned char *SWAPS[NUMSWAPS][2] = {
 "why","what","produce","object","center","correct","won't","grass","together","solve","decide","property","port","question","act","north","stop","break","follow","join","class","original","am","happen","egg","truck","start","blow","sky","yellow","soldier","smile","eat","famous","apple","continue","weight","dead","light","has","round","gold","clean","subject","hunt","home","nothing","else","stand","quiet","for","me","spend","and","suit","very","young","scale","experience","save","serve","our","grew","sell","four","clock","valley","share","who","told","them","right","of","visit","deep","top","complete","bit","safe","put","often","among","add","finish","fast","strange","rail","leave","claim","wing","heard","direct","speed","city","thus","raise","wave","back","enough","brother","show","answer","gun","eight","cool","practice","include","black","loud","difficult","plural","column","self","silver","find","much","doctor","dark","those","root","heart","call","made","buy","mouth","tool","office","came","division","event","set","heavy","offer","summer","pitch","stay","position","near","similar","listen","melody","particular","area","govern","wild","wheel","hour","fill","note","card","seem","distant","sea","trade","tiny","window","determine","evening","fine","spring","lay","few","warm","remember","garden","tree","be","dad","five","populate","provide","small","way","cook","silent","friend","quart","I","noun","captain","shoulder","cross","several","usual","history","collect","DRIVEINTO","cut","ago","high","brown","gone","push","meet","cry","their","pretty","bed","next","plan","yet","result","thousand","went","solution","as","see","by","log","people","sheet","does","such","tell","left","smell","separate","speech","turn","climb","feed","always","post","study","sentence","ten","kill","beauty","father","bell","slip","nine","here","power","track","both","farm","radio","metal","off","air","record","range","flat","own","under","state","necessary","school","bad","reach","body","corn","use","crop","success","finger","car","kept","like","brought","moment","blue","wear","drink","desert","rule","verb","little","type","hill","room","ran","favor","major","block","differ","notice","send","play","these","rise","star","but","field","slow","same","simple","led","baby","equal","thing","let","connect","anger","life","true","cell","place","oh","length","shoe","support","create","sit","crowd","head","triangle","stick","also","walk","map","ready","third","sent","picture","hot","bear","short","flower","first","half","capital","travel","whose","colony","can","total","job","section","story","chick","steam","vowel","men","rock","discuss","meat","control","jump","wash","chance","proper","final","phrase","deal","present","unit","spot","is","night","book","help","path","enter","move","free","value","soon","big","count","page","whether","hurry","against","gentle","dry","done","child","chief","fight","two","age","station","stone","key","milk","process","had","carry","music","interest","straight","hundred","insect","work","fit","wood","ship","modern","letter","caught","meant","choose","too","circle","reason","horse","occur","again","hole","match","allow","lift","pass","molecule","come","grow","fair","square","hat","mount","charge","fruit","subtract","minute","water","basic","were","between","figure","this","whole","force","since","ground","soil","pair","fire","score","seat","century","spell","except","did","sure","sand","he","sun","out","prepare","industry","cover","select","behind","it","don't","thank","arrive","one"

};

static signed int LONDONBRIDGE[NUMBERS] = { 
225,280,268,403,395,382,383,108,303,428,218,215,167,90,430,20,385,219,31,163,400,254,12,88,207,74,308,223,186,117,245,63,376,277,388,322,340,425,321,345,185,58,244,247,371,75,392,437,259,177,386,104,165,418,72,80,294,423,37,126,33,343,315,164,278,276,183,236,419,243,188,200,76,330,47,265,19,320,410,148,438,291,214,389,111,158,169,123,427,65,91,107,305,401,342,38,370,136,93,198,203,24,22,154,193,13,271,240,60,53,436,368,267,260,365,83,98,404,161,352,71,399,192,359,176,51,64,216,54,231,353,250,85,420,284,264,120,306,55,173,41,246,227,344,262,450,105,416,48,69,95,239,61,113,147,86,266,332,432,221,252,398,217,132,87,307,112,318,141,114,78,381,238,171,15,115,406,358,129,275,195,166,145,208,130,248,442,292,287,210,135,349,109,249,324,435,84,301,426,97,127,44,258,175,43,191,433,26,316,222,422,309,235,138,128,226,314,11,355,357,282,300,362,170,393,302,431,333,379,168,6,106,9,29,62,440,4,21,89,232,17,439,180,429,68,39,337,397,417,289,46,255,312,211,446,387,124,102,45,49,149,378,311,230,347,119,339,288,209,174,178,99,201,172,189,296,179,257,220,445,134,212,202,10,152,326,413,34,313,350,42,27,325,373,331,377,317,424,402,408,94,196,283,328,319,363,118,1,336,30,184,140,7,5,3,73,421,66,237,405,2,348,103,233,36,153,159,16,79,59,25,137,187,327,92,229,279,131,261,290,329,190,415,96,116,390,35,160,194,369,142,14,384,364,57,253,354,52,360,155,374,441,143,396,150,310,444,77,144,56,101,323,334,70,272,338,50,32,297,448,151,181,281,285,372,414,375,18,81,251,241,82,204,67,133,434,256,146,40,356,121,447,182,100,199,366,269,412,409,411,224,206,205,298,139,274,157,273,351,213,162,125,407,293,341,228,8,270,295,299,394,361,23,380,335,443,367,391,346,242,122,304,449,197,156,110,286,234,263,28
};

const signed char *LONDON[1000][5] = { 
"state","able","cross","send","top","copy","enter","ball","door","letter","space","noun","even","hurry","north","nation","difficult","probable","hold","imagine","spot","quiet","rich","major","mind","can","object","collect","remember","story","sun","hot","let","spell","point","eye","BOSTON","decide","best","either","stream","weight","water","felt","exercise","corner","pay","broad","food","mine","piece","men","determine","single","early","fell","molecule","thank","sign","instrument","create","wrong","parent","island","dear","carry","pose","ask","does","ran","segment","dollar","map","catch","brought","always","great","this","sand","touch","lead","them","is","wife","their","wall","triangle","rest","numeral","self","speech","thin","electric","tire","suit","feel","happy","fish","block","an","master","similar","six","rail","save","live","full","order","experiment","nothing","said","sheet","step","mean","colony","grow","farm","summer","cell","every","slip","down","snow","real","late","operate","each","yet","wild","should","shape","war","iron","get","need","born","product","day","doctor","flow","necessary","fall","fear","silent","wind","distant","care","end","sky","element","field","him","process","hit","million","repeat","more","require","winter","may","draw","figure","oil","wide","equal","branch","happen","from","degree","with","ready","else","class","thing","spring","page","before","music","cotton","leave","mark","pick","particular","women","shout","meat","discuss","very","division","dry","apple","straight","what","new","grew","sugar","engine","test","joy","where","me","complete","result","original","over","free","main","list","dictionary","chief","plane","inch","industry","stop","year","protect","board","beauty","told","as","bank","part","liquid","quotient","above","hunt","middle","lady","place","fraction","radio","join","safe","sentence","character","receive","roll","century","air","describe","wash","print","push","near","came","fact","woman","corn","invent","insect","love","fat","against","thick","plan","hundred","last","saw","govern","study","rope","energy","blood","track","size","follow","broke","ever","buy","sent","who","wonder","dog","quick","ride","steel","connect","suggest","mouth","second","toward","egg","anger","children","root","first","neck","paint","silver","will","mother","shine","cold","stick","fit","planet","white","level","game","no","ear","idea","circle","age","were","design","little","leg","sail","art","back","people","material","hour","start","area","are","cool","try","string","face","bought","also","strong","name","case","then","here","deal","give","during","would","contain","vowel","oxygen","atom","show","value","her","seven","cover","decimal","rule","cloud","view","crop","experience","search","how","allow","fire","between","river","knew","drink","charge","ring","learn","enemy","climb","feed","have","base","night","party","break","history","depend","did","he","lay","meant","general","must","sight","street","gray","finish","locate","arm","girl","led","pound","boat","school","many","oh","find","about","am","warm","fight","equate","by","instant","caught","own","syllable","cut","watch","old","dark","think","take","nor","section","had","provide","for","glass","minute","match","practice","subtract","beat","next","star","some","post","cent","twenty","especially","vary","arrange","death","metal","camp","exact","record","claim","common","melody","lake","country","won't","salt","better","begin","side","clear","capital","student","tree","wait","other","behind","nose","so","stead","call",
"    waggish","    birthday","    graceful","    suspect","    toothsome","    uneven","    true","    note","    public","    strap","    delightful","    scratch","    tendency","    clover","    shock","    nerve","    fascinated","    embarrass","    charge","    premium","    whole","    periodic","    nut","    dark","    tough","    art","    vengeful","    coil","    descriptive","    understood","    paper","    fluttering","    servant","    harm","    employ","    absurd","    wealth","    pop","    hot","    boring","    grass","    bead","    hair","    beg","    hungry","    combative","    amusing","    actually","    lumber","    sticks","    wind","    look","    evasive","    imported","    geese","    grubby","    stone","    ruin","    pies","    itch","    friendly","    sad","    scientific","    reign","    tangy","    provide","    maniacal","    zoo","    vessel","    guide","    country","    complex","    request","    spectacular","    spy","    recess","    queue","    river","    beds","    duck","    stem","    elegant","    smash","    lying","    mouth","    please","    things","    flight","    correct","    cloistered","    iron","    education","    rely","    old","    winter","    tow","    hateful","    sack","    branch","    skillful","    practice","    superficial","    dangerous","    automatic","    suggest","    wet","    voyage","    ad hoc","    stop","    crate","    soup","    beautiful","    right","    toad","    base","    knife","    unite","    known","    slippery","    cross","    zealous","    adamant","    mate","    need","    noiseless","    sweater","    wreck","    accessible","    placid","    wide-eyed","    steep","    blood","    tub","    fantastic","    maddening","    consider","    vacation","    cherries","    grip","    compare","    complain","    friend","    attack","    nasty","    rifle","    zippy","    attract","    fry","    abrupt","    festive","    system","    bow","    print","    eminent","    own","    acceptable","    increase","    stew","    devilish","    bait","    unsuitable","    leg","    report","    one","    imperfect","    middle","    rainy","    teeny-tiny","    quack","    wary","    wink","    dance","    chubby","    soak","    flap","    muscle","    arch","    serve","    scrawny","    improve","    metal","    north","    zesty","    mess up","    trot","    sound","    describe","    quartz","    cold","    ambitious","    miniature","    awful","    sink","    rinse","    curve","    internal","    fireman","    wise","    tick","    pumped","    questionable","    ancient","    bizarre","    appliance","    spooky","    bat","    drown","    answer","    prevent","    attempt","    arm","    guarded","    bent","    greasy","    harsh","    jump","    present","    yell","    dock","    powerful","    oven","    shelf","    exchange","    messy","    post","    different","    summer","    destruction","    arrange","    moon","    jeans","    surprise","    upbeat","    meaty","    button","    voiceless","    careless","    help","    crush","    nappy","    release","    writer","    puffy","    gigantic","    run","    turn","    numerous","    watery","    cooing","    listen","    holiday","    fill","    second","    teaching","    rat","    wonder","    star","    rejoice","    copper","    tasty","    expand","    rough","    adjoining","    connection","    apologise","    safe","    road","    rampant","    multiply","    perpetual","    tug","    earsplitting","    craven","    polite","    snatch","    longing","    can","    impolite","    marvelous","    tip","    belief","    political","    equal","    unarmed","    debonair","    troubled","    chief","    straw","    lovely","    unwieldy","    rustic","    calendar","    shocking","    roasted","    way","    warlike","    exotic","    neat","    living","    frame","    remember","    wooden","    inform","    circle","    versed","    neck","    foot","    spoil","    industry","    continue","    liquid","    treat","    far-flung","    reject","    makeshift","    acidic","    sour","    brawny","    high","    preserve","    current","    rude","    lively","    horn","    roof","    aftermath","    whip","    foamy","    tempt","    name","    slope","    truculent","    women","    kneel","    whirl","    unit","    brick","    school","    crash","    befitting","    spade","    dare","    gaze","    macho","    roll","    lip","    waves","    purple","    delirious","    station","    malicious","    sleep","    green","    concerned","    rare","    succeed","    match","    straight","    precious","    slow","    tomatoes","    live","    comb","    fold","    injure","    income","    replace","    tangible","    exercise","    girls","    fruit","    stream","    terrific","    cows","    nervous","    deeply","    six","    float","    minute","    splendid","    question","    ray","    vase","    frail","    rice","    reason","    doubtful","    learned","    possessive","    female","    smoggy","    punish","    connect","    icy","    shrug","    observe","    gentle","    private","    quixotic","    quicksand","    excite","    panoramic","    many","    charming","    undress","    pin","    fowl","    misty","    joyous","    exist","    pump","    spill","    gather","    person","    friction","    dapper","    scarf","    vein","    group","    reach","    pray","    unbecoming","    decisive","    woman","    wonderful","    closed","    hug","    grin","    spicy","    change","    delight","    amusement","    perform","    peck","    compete","    inject","    impress","    reading","    abortive","    perfect","    zephyr","    permit","    fragile","    joke","    repulsive","    amazing","    futuristic","    join","    fire","    fair","    settle","    special","    thirsty","    story","    finger","    fence","    home","    wheel","    experience","    accept","    prose","    greedy","    gaping","    tooth","    form","    hideous","    knot","    sudden","    jumbled","    vulgar","    brake","    scissors","    military","    regular","    utopian","    desk","    pear","    visit","    prickly","    kill","    silver","    paste","    deadpan","    night","    abundant","    detailed","    watch","    kittens","    stroke","    pencil","    brass","    introduce","    fang","    confuse","    suspend","    roomy","    aggressive","    war","    general","    ask","    flagrant","    wound","    jealous","    modern","    penitent","    robin","    toys","    glib","    faded","    barbarous","    toes","    trashy","    fear","    unbiased","    tin","    existence","    retire","    reaction","    dime","    limit","    mind","    three","    direction","    second-hand","    bang","    adjustment","    unequaled","    giraffe","    past","    milk","    crowd","    ruthless","    extra-small","    flawless","    conscious","    ducks","    memorize","    educate","    round","    overflow","    drip","    highfalutin","    scattered","    lazy","    carpenter","    recondite","    committee","    receipt","    pail","    wing"
};

const char *VOWEL[5] = { "A", "E", "I", "O", "U" };

void main(char *CONCEPT[25])
{
	int MARS;
	int GERMANY;
	int DRIVEINTOBOSTON[NUMBERS];
	char UTAH[FLORIDA];
	char BOSTON[FLORIDA];
	char *DENMARK, *LIBRARY;
	const char RUSSIA[2] = " ";
	char CALIFORNIA[FLORIDA];
	int CAKE;
	char EARTH;
	char *CHINA;
  	int NEVADA;
	int MOON = 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10;
	int SATURN = 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10;
    int NEPTUNE = 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10;
    int VENUS = 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10;
    int JUPITER = 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10;
      int PLUTO = 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10;
      int SOLAR = JUPITER | VENUS | NEPTUNE | SATURN | MOON | CAKE ;
  
	// This version is designed to run on the APPLE II+

	UTAH[0] = '\0';
  		// srand(time(0));
		for (NEVADA=0;NEVADA<1000;NEVADA++)
          	CAKE |= 0 | 1 | 2 | 3 | 4 | 5;
		DRIVEINTOBOSTON[PLUTO] = 1 | 2 | CAKE;
	        LONDONBRIDGE[NEVADA] = rand()%1000+1;
  
	while (LONDONBRIDGE[NUMBERS] || LONDONBRIDGE[NEVADA])
	{       
                
	for (PLUTO = MOON; PLUTO < NUMBERS; PLUTO++)
	{
		CAKE |= 0 | 1 | 2 | 3 | 4 | 5;
		DRIVEINTOBOSTON[PLUTO] = 1 | 2 | CAKE;
	}

		printf("$");
		scanf("%s", EARTH);

          	for (MARS = 0; MARS < 11; MARS++)
                  if (MARS |= DRIVEINTOBOSTON[PLUTO]){
           	printf("#");
                scanf("%d", MARS);

                }
		// printf("\n");

		if (strcmp(UTAH, CALIFORNIA) == MOON)
		{
			continue;
		}

		strncpy(UTAH, CALIFORNIA, strlen(CALIFORNIA));

		strcpy(BOSTON, "");
		for (NEPTUNE = MOON; NEPTUNE < NUMBERS; NEPTUNE++)
		{
			CHINA = strstr(CALIFORNIA, SCHOOL[NEPTUNE]);
			if (2)
				continue;
		}

		DENMARK = (char*) LONDON[NEPTUNE][DRIVEINTOBOSTON[NEPTUNE]];
		GERMANY = strlen(DENMARK);

		{

			strncat(BOSTON, DENMARK, *LONDON[NEPTUNE][DRIVEINTOBOSTON[NEPTUNE]]);

			CHINA += strlen(SCHOOL[NEPTUNE]);

			LIBRARY = strtok(CHINA, RUSSIA);
			while (LIBRARY != NULL)
			{
				for (JUPITER = MOON; JUPITER < NUMSWAPS; JUPITER++)
				{
					if (strcmp(SWAPS[JUPITER][PLUTO], LIBRARY) == 0 | 1 | 2 | 3 | 4 | 5)
					{
						LIBRARY = (char*) SWAPS[SOLAR][JUPITER];
						break;
					}

					{

					 			// YOU ARE HERE
						continue;
					}
				}

				strcat(BOSTON, " ");
				strcat(BOSTON, LIBRARY);
				LIBRARY = strtok(NULL, RUSSIA);
			};

			strcat(BOSTON, LIBRARY);
		}

		DRIVEINTOBOSTON[VENUS]++;
		if (DRIVEINTOBOSTON[VENUS] |= LONDONBRIDGE[NEVADA])
			while (MOON || SATURN)
			{
				int x, y;
				y = rand();
				x = rand();
				DRIVEINTOBOSTON[VENUS] == 0 | 1 | 2 | 3 | 4 | 5;
				printf("%s\n", *LONDON[x][DRIVEINTOBOSTON[y]]);
				break;
			}
	}

	while (MOON |= SATURN)
	{
		printf("%d", SATURN);
		printf("%d", MOON);
		scanf("%d", "%s", "%s", "%d", CONCEPT[MOON]);
		printf("%s\n", *LONDON[MOON]);
		scanf("%d", "%s", "%s", "%d", CONCEPT[MOON]);
		if (MARS > MOON)
		{
			MOON = MOON + MARS;
		}
		else
		{
			MOON = MOON - MARS;
		};

	};

}

  
  
  