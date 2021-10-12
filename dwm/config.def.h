/* appearance */
static const unsigned int borderpx       = 3;   /* border pixel of windows */
static const unsigned int snap           = 32;  /* snap pixel */
static const unsigned int gappih         = 18;  /* horiz inner gap between windows */
static const unsigned int gappiv         = 18;  /* vert inner gap between windows */
static const unsigned int gappoh         = 14;  /* horiz outer gap between windows and screen edge */
static const unsigned int gappov         = 18;  /* vert outer gap between windows and screen edge */
static const int smartgaps_fact          = 1;   /* gap factor when there is only one client; 0 = no gaps, 3 = 3x outer gaps */
static const char autostartblocksh[]     = "autostart_blocking.sh";
static const char autostartsh[]          = "autostart.sh";
static const char dwmdir[]               = "dwm";
static const char localshare[]           = ".config";
static const int showbar                 = 1;   /* 0 means no bar */
static const int topbar                  = 1;   /* 0 means bottom bar */
static const int bar_height              = 27;   /* 0 means derive from font, >= 1 explicit height */
static const int vertpad                 = 14;  /* vertical padding of bar */
static const int sidepad                 = 18;  /* horizontal padding of bar */
static const unsigned int systrayspacing = 2;   /* systray spacing */
static const int showsystray             = 1;   /* 0 means no systray */
/* Indicators: see patch/bar_indicators.h for options */
static int tagindicatortype              = INDICATOR_TOP_LEFT_SQUARE;
static int tiledindicatortype            = INDICATOR_NONE;
static int floatindicatortype            = INDICATOR_TOP_LEFT_SQUARE;
static const char *fonts[]               = { "Iosevka Nerd Font:size=10:style=bold:antialias=true:autohint=true",
                                             "Font Awesome 5 Free:size=20:style=bold:antialias=true:autohint=true",
                                             "NotoEmoji Nerd Font:size=12:antialias=true:autohint=true" };
static const char dmenufont[]            = "JetBrainsMono Nerd Font:size=10:style=bold:antialias=true:autohint=true";

static char c000000[]                    = "#A37ACC"; // placeholder value

static char normfgcolor[]                = "#CBE3E7";
static char normbgcolor[]                = "#1e222a";
static char normbordercolor[]            = "#282c34";
static char normfloatcolor[]             = "#1e222a";

static char selfgcolor[]                 = "#1e222a";
static char selbgcolor[]                 = "#1e222a";
static char selbordercolor[]             = "#1e222a";
static char selfloatcolor[]              = "#1e222a";

static char titlenormfgcolor[]           = "#CBE3E7";
static char titlenormbgcolor[]           = "#1e222a";
static char titlenormbordercolor[]       = "#282c34";
static char titlenormfloatcolor[]        = "#1e222a";

static char titleselfgcolor[]            = "#62D196";
static char titleselbgcolor[]            = "#1e222a";
static char titleselbordercolor[]        = "#1e222a";
static char titleselfloatcolor[]         = "#65B2FF";

static char tagsnormfgcolor[]            = "#CBE3E7";
static char tagsnormbgcolor[]            = "#1e222a";
static char tagsnormbordercolor[]        = "#282c34";
static char tagsnormfloatcolor[]         = "#1e222a";

static char tagsselfgcolor[]             = "#65B2FF";
static char tagsselbgcolor[]             = "#282c34";
static char tagsselbordercolor[]         = "#65B2FF";
static char tagsselfloatcolor[]          = "#65B2FF";

static char hidnormfgcolor[]             = "#e06c75";
static char hidselfgcolor[]              = "#65B2FF";
static char hidnormbgcolor[]             = "#1e222a";
static char hidselbgcolor[]              = "#1e222a";

static char urgfgcolor[]                 = "#CBE3E7";
static char urgbgcolor[]                 = "#1e222a";
static char urgbordercolor[]             = "#63F2F1";
static char urgfloatcolor[]              = "#1e222a";



static char *colors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { normfgcolor,      normbgcolor,      normbordercolor,      normfloatcolor },
	[SchemeSel]          = { selfgcolor,       selbgcolor,       selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { titlenormfgcolor, titlenormbgcolor, titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { titleselfgcolor,  titleselbgcolor,  titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { tagsnormfgcolor,  tagsnormbgcolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { tagsselfgcolor,   tagsselbgcolor,   tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { hidnormfgcolor,   hidnormbgcolor,   c000000,              c000000 },
	[SchemeHidSel]       = { hidselfgcolor,    hidselbgcolor,    c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,       urgbordercolor,       urgfloatcolor },
};

static char *statuscolors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { "#F48FB1",        normbordercolor,  normbordercolor,      normfloatcolor },
	[SchemeSel]          = { "#FFE6B3",        normbgcolor,      selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { "#65B2FF",        normbordercolor,  titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { "#63F2F1",        normbgcolor,      titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { "#ebcb8d",        normbordercolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { "#D4BFFF",        normbgcolor,      tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { "#71abeb",        normbordercolor,  c000000,              c000000 },
	[SchemeHidSel]       = { "#62D196",        normbgcolor,      c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,       urgbordercolor,       urgfloatcolor },
};



const char *spcmd1[] = {"st", "-n", "spterm", "-g", "144x41", NULL };
const char *spcmd2[] = {"st", "-n", "spfm", "-g", "144x41", "-e", "ranger", NULL };
const char *spcmd3[] = {"obs", NULL };
const char *spcmd4[] = {"transmission-gtk", NULL };
const char *spcmd5[] = {"Telegram", NULL };
const char *spcmd6[] = {"alacritty", "--class", "scratchpad", NULL};
const char *spcmd7[] = {"skype", NULL };
const char *spcmd8[] = {"discord", NULL };
const char *spcmd9[] = {"mpv", "--player-operation-mode=pseudo-gui", NULL };
static Sp scratchpads[] = {
   /* name          cmd  */
   {"spterm",            spcmd1},
   {"spfm",              spcmd2},
   {"obs",               spcmd3},
   {"transmission-gtk",  spcmd4},
   {"Telegram",          spcmd5},
   {"spterm2",           spcmd6},
   {"skype",             spcmd7},
   {"discord",           spcmd8},
   {"mpv",               spcmd9},
};

/* Tags
 * In a traditional dwm the number of tags in use can be changed simply by changing the number
 * of strings in the tags array. This build does things a bit different which has some added
 * benefits. If you need to change the number of tags here then change the NUMTAGS macro in dwm.c.
 *
 * Examples:
 *
 *  1) static char *tagicons[][NUMTAGS*2] = {
 *         [DEFAULT_TAGS] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I" },
 *     }
 *
 *  2) static char *tagicons[][1] = {
 *         [DEFAULT_TAGS] = { "•" },
 *     }
 *
 * The first example would result in the tags on the first monitor to be 1 through 9, while the
 * tags for the second monitor would be named A through I. A third monitor would start again at
 * 1 through 9 while the tags on a fourth monitor would also be named A through I. Note the tags
 * count of NUMTAGS*2 in the array initialiser which defines how many tag text / icon exists in
 * the array. This can be changed to *3 to add separate icons for a third monitor.
 *
 * For the second example each tag would be represented as a bullet point. Both cases work the
 * same from a technical standpoint - the icon index is derived from the tag index and the monitor
 * index. If the icon index is is greater than the number of tag icons then it will wrap around
 * until it an icon matches. Similarly if there are two tag icons then it would alternate between
 * them. This works seamlessly with alternative tags and alttagsdecoration patches.
 */
static char *tagicons[][NUMTAGS] = {
	[DEFAULT_TAGS]        = { "1", "2", "3", "4", "5", "6", "7", "8", "9" },
	[ALTERNATIVE_TAGS]    = { "A", "B", "C", "D", "E", "F", "G", "H", "I" },
	[ALT_TAGS_DECORATION] = { "<1>", "<2>", "<3>", "<4>", "<5>", "<6>", "<7>", "<8>", "<9>" },
};


/* There are two options when it comes to per-client rules:
 *  - a typical struct table or
 *  - using the RULE macro
 *
 * A traditional struct table looks like this:
 *    // class      instance  title  wintype  tags mask  isfloating  monitor
 *    { "Gimp",     NULL,     NULL,  NULL,    1 << 4,    0,          -1 },
 *    { "Firefox",  NULL,     NULL,  NULL,    1 << 7,    0,          -1 },
 *
 * The RULE macro has the default values set for each field allowing you to only
 * specify the values that are relevant for your rule, e.g.
 *
 *    RULE(.class = "Gimp", .tags = 1 << 4)
 *    RULE(.class = "Firefox", .tags = 1 << 7)
 *
 * Refer to the Rule struct definition for the list of available fields depending on
 * the patches you enable.
 */
static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 *	WM_WINDOW_ROLE(STRING) = role
	 *	_NET_WM_WINDOW_TYPE(ATOM) = wintype
	 */
      RULE(.wintype = WTYPE "DIALOG", .isfloating = 1)
      RULE(.wintype = WTYPE "UTILITY", .isfloating = 1)
      RULE(.wintype = WTYPE "TOOLBAR", .isfloating = 1)
      RULE(.wintype = WTYPE "SPLASH", .isfloating = 1)
      RULE(.title = "About Mozilla Firefox", .isfloating = 1)
      RULE(.class = "Glimpse", .isfloating = 1)
      RULE(.class = "Gimp", .isfloating = 1)
      RULE(.class = "gimp", .isfloating = 1)
      RULE(.class = "Gimp.bin", .isfloating = 1)
      RULE(.class = "gimp.bin", .isfloating = 1)
      RULE(.class = "Gcolor2", .isfloating = 1)
      RULE(.class = "Gcolor3", .isfloating = 1)
      RULE(.class = "gnome-calculator", .isfloating = 1)
      RULE(.class = "Gnome-calculator", .isfloating = 1)
      RULE(.class = "Lxappearance", .isfloating = 1)
      RULE(.instance = "spterm", .tags = SPTAG(0), .isfloating = 1)
      RULE(.instance = "spfm", .tags = SPTAG(1), .isfloating = 1)
      RULE(.class    = "obs", .tags = SPTAG(2), .isfloating = 1)
      RULE(.instance = "transmission-gtk", .tags = SPTAG(3), .isfloating = 1)
      RULE(.instance = "Telegram", .tags = SPTAG(4), .isfloating = 1)
      RULE(.instance = "scratchpad", .tags = SPTAG(5), .isfloating = 1)
      RULE(.instance = "skype", .tags = SPTAG(6), .isfloating = 1)
      RULE(.instance = "discord", .tags = SPTAG(7), .isfloating = 1)
      RULE(.class    = "mpv", .tags = SPTAG(8), .isfloating = 1)
};



/* Bar rules allow you to configure what is shown where on the bar, as well as
 * introducing your own bar modules.
 *
 *    monitor:
 *      -1  show on all monitors
 *       0  show on monitor 0
 *      'A' show on active monitor (i.e. focused / selected) (or just -1 for active?)
 *    bar - bar index, 0 is default, 1 is extrabar
 *    alignment - how the module is aligned compared to other modules
 *    widthfunc, drawfunc, clickfunc - providing bar module width, draw and click functions
 *    name - does nothing, intended for visual clue and for logging / debugging
 */
static const BarRule barrules[] = {
	/* monitor  bar    alignment         widthfunc                drawfunc                clickfunc                name */
	{ -1,       0,     BAR_ALIGN_LEFT,   width_tags,              draw_tags,              click_tags,              "tags" },
	{  0,       0,     BAR_ALIGN_RIGHT,  width_systray,           draw_systray,           click_systray,           "systray" },
	{ -1,       0,     BAR_ALIGN_LEFT,   width_ltsymbol,          draw_ltsymbol,          click_ltsymbol,          "layout" },
	{  0,       0,     BAR_ALIGN_RIGHT,  width_pwrl_status,       draw_pwrl_status,       click_pwrl_status,       "powerline_status" },
	{ -1,       0,     BAR_ALIGN_NONE,   width_wintitle,          draw_wintitle,          click_wintitle,          "wintitle" },
        /* if you want a titlebar like the awesomewm comment the "wintitle" and uncomment the "awesomebar" */ 
        //{ -1,       0,     BAR_ALIGN_NONE,   width_awesomebar,        draw_awesomebar,        click_awesomebar,        "awesomebar" },
};

/* layout(s) */
static const float mfact     = 0.50; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */



static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
	{ "TTT",      bstack },
	{ "===",      bstackhoriz },
	{ "|M|",      centeredmaster },
	{ ">M>",      centeredfloatingmaster },
	{ "|||",      col },
	{ "[D]",      deck },
	{ "(@)",      spiral },
	{ "HHH",      grid },
	{ NULL,       NULL },
};


/* key definitions */
#define PrintScreenDWM     0x0000ff61
#define M Mod4Mask
#define A Mod1Mask
#define S ShiftMask
#define C ControlMask
#define TAGKEYS(KEY,TAG) \
	{ M,     KEY,      view,           {.ui = 1 << TAG} }, \
	{ M|C,   KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ M|S,   KEY,      tag,            {.ui = 1 << TAG} }, \
	{ M|C|S, KEY,      toggletag,      {.ui = 1 << TAG} },



/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[]    = { "dmenu_run", "-p", "Run: ", NULL };
static const char *dmenucmd2[]   = { "rofi", "-show", "drun", NULL };
static const char *termcmd2[]    = { "alacritty", NULL };
static const char *termcmd[]     = { "kitty", NULL };
static const char *nvimcmd[]     = { "st", "-e", "lvim", NULL };
#include <X11/XF86keysym.h>



static Key keys[] = {
    /* modifier                     key            function                argument */
    {A,	     XK_h, 	    hidewin, 	            {0}},
    {A|S,    XK_h, 	    restorewin,             {0}},
    {A,      XK_n, 	    hideotherwins,          {0}},
    {A|S,    XK_n,          restoreotherwins,       {0}},
    { C,     XK_space,      spawn,                  {.v = dmenucmd2 } },
    { A,     XK_d,      spawn,                  {.v = dmenucmd } },
    { M,     XK_Return,     spawn,                  {.v = termcmd } },
    { A,     XK_Return,     spawn,                  {.v = termcmd2 } },
    { A,     XK_v,          spawn,                  {.v = nvimcmd } },
    { A,     XK_t,          togglescratch,          {.ui = 0 } },
    { A,     XK_r,          togglescratch,          {.ui = 1 } },
    { A,     XK_o,          togglescratch,          {.ui = 2 } },
    { A,     XK_p,          togglescratch,          {.ui = 3 } },
    { A|S,   XK_p,          togglescratch,          {.ui = 4 } },
    { A|S,   XK_t,          togglescratch,          {.ui = 5 } },
    { A|S,   XK_s,          togglescratch,          {.ui = 6 } },
    { A,     XK_d,          togglescratch,          {.ui = 7 } },
    { A,     XK_m,          togglescratch,          {.ui = 8 } },
    { M|A,   XK_u,          incrgaps,               {.i = +1 } },
    { M|A|S, XK_u,          incrgaps,               {.i = -1 } },
    { M|A,   XK_i,          incrigaps,              {.i = +1 } },
    { M|A|S, XK_i,          incrigaps,              {.i = -1 } },
    { M|A,   XK_o,          incrogaps,              {.i = +1 } },
    { M|A|S, XK_o,          incrogaps,              {.i = -1 } },
    { M|M,   XK_6,          incrihgaps,             {.i = +1 } },
    { M|A|S, XK_6,          incrihgaps,             {.i = -1 } },
    { M|A,   XK_7,          incrivgaps,             {.i = +1 } },
    { M|A|S, XK_7,          incrivgaps,             {.i = -1 } },
    { M|A,   XK_8,          incrohgaps,             {.i = +1 } },
    { M|A|S, XK_8,          incrohgaps,             {.i = -1 } },
    { M|A,   XK_9,          incrovgaps,             {.i = +1 } },
    { M|A|S, XK_9,          incrovgaps,             {.i = -1 } },
    { M|A,   XK_0,          togglegaps,             {0} },
    { M|A|S, XK_0,          defaultgaps,            {0} },
    { M|S,   XK_f,          togglefullscreen,       {0} },
    { M,     XK_b,          togglebar,              {0} },
    { M|S,   XK_j,          movestack,              {.i = +1 } },
    { M|S,   XK_k,          movestack,              {.i = -1 } },
    { M,     XK_j,          focusstack,             {.i = +1 } },
    { M,     XK_k,          focusstack,             {.i = -1 } },
    { M|S,   XK_d,          incnmaster,             {.i = +1 } },
    { M,     XK_d,          incnmaster,             {.i = -1 } },
    { M,     XK_h,          setmfact,               {.f = -0.01} },
    { M,     XK_l,          setmfact,               {.f = +0.01} },
    { M|S,   XK_h,          setcfact,               {.f = +0.05} },
    { M|S,   XK_l,          setcfact,               {.f = -0.05} },
    { M|S,   XK_o,          setcfact,               {0} },
    { M|C,   XK_j,          pushdown,               {0} },
    { M|C,   XK_k,          pushup,                 {0} },
    { M|S,   XK_Return,     zoom,                   {0} },
    { A,     XK_Tab,        view,                   {0} },
    { M,     XK_q,          killclient,             {0} },
    { M,     XK_t,          setlayout,              {.v = &layouts[0]} },
    { M,     XK_y,          setlayout,              {.v = &layouts[1]} },
    { M|S,   XK_u,          setlayout,              {.v = &layouts[2]} },
    { M,     XK_i,          setlayout,              {.v = &layouts[3]} },
    { M,     XK_o,          setlayout,              {.v = &layouts[4]} },
    { M,     XK_p,          setlayout,              {.v = &layouts[5]} },
    { M,     XK_g,          setlayout,              {.v = &layouts[6]} },
    { M,     XK_Tab,        cyclelayout,            {.i = -1 } },
    { M|S,   XK_Tab,        cyclelayout,            {.i = +1 } },
    { M,     XK_space,      setlayout,              {0} },
    { M|S,   XK_space,      togglefloating,         {0} },
    { M,     XK_0,          view,                   {.ui = ~0 } },
    { M|S,   XK_0,          tag,                    {.ui = ~0 } },
    { M,     XK_comma,      focusmon,               {.i = -1 } },
    { M,     XK_period,     focusmon,               {.i = +1 } },
    { M|S,   XK_comma,      tagmon,                 {.i = -1 } },
    { M|S,   XK_period,     tagmon,                 {.i = +1 } },
    TAGKEYS( XK_1,           0)
    TAGKEYS( XK_2,           1)
    TAGKEYS( XK_3,           2)
    TAGKEYS( XK_4,           3)
    TAGKEYS( XK_5,           4)
    TAGKEYS( XK_6,           5)
    TAGKEYS( XK_7,           6)
    TAGKEYS( XK_8,           7)
    TAGKEYS( XK_9,           8)
    { M|S,   XK_q,          quit,                   {0} },
    { M|S,   XK_r,          quit,                   {1} },

    /* Volume & Media Keys */

    { 0, XF86XK_AudioPrev,          spawn,         SHCMD("playerctl previous") },
    { 0, XF86XK_AudioNext,          spawn,         SHCMD("playerctl next") },
    { 0, XF86XK_AudioPlay,          spawn,         SHCMD("playerctl play-pause") },
    { 0, PrintScreenDWM,            spawn,         SHCMD("~/.local/bin/screenshot") },
    { 0, XF86XK_AudioLowerVolume,   spawn,         SHCMD("pactl set-sink-volume @DEFAULT_SINK@ -5%") },
    { 0, XF86XK_AudioRaiseVolume,   spawn,         SHCMD("pactl set-sink-volume @DEFAULT_SINK@ +5%") },
    { 0, XF86XK_AudioMute,          spawn,         SHCMD("pactl set-sink-mute @DEFAULT_SINK@ toggle")},
    { 0, XF86XK_MonBrightnessUp,    spawn,         SHCMD("brightnessctl -q s 5%+") },
    { 0, XF86XK_MonBrightnessDown,  spawn,         SHCMD("brightnessctl -q s 5%-") },

    /* Apps Launched with Alt + KEY */

    { A|S,   XK_b,       spawn,      SHCMD("firefox") },
    { A|S,   XK_d,       spawn,      SHCMD("gnome-disks") },
    { A|S,   XK_m,       spawn,      SHCMD("gnome-system-monitor") },
    { A,     XK_f,       spawn,      SHCMD("thunar") },
    { A,     XK_g,       spawn,      SHCMD("gthumb") },
    { A,     XK_e,       spawn,      SHCMD("emacsclient -c -a 'emacs'")},
};


/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask           button          function        argument */
	{ ClkLtSymbol,          0,                   Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,                   Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,                   Button1,        togglewin,      {0} },
	{ ClkWinTitle,          0,                   Button3,        showhideclient, {0} },
	{ ClkWinTitle,          0,                   Button2,        zoom,           {0} },
	{ ClkStatusText,        0,                   Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         M,                   Button1,        movemouse,      {0} },
	{ ClkClientWin,         M,                   Button2,        togglefloating, {0} },
	{ ClkClientWin,         M,                   Button3,        resizemouse,    {0} },
	{ ClkClientWin,         M|S,                 Button1,        dragmfact,      {0} },
	{ ClkTagBar,            0,                   Button1,        view,           {0} },
	{ ClkTagBar,            0,                   Button3,        toggleview,     {0} },
	{ ClkTagBar,            M,                   Button1,        tag,            {0} },
	{ ClkTagBar,            M,                   Button3,        toggletag,      {0} },
};



