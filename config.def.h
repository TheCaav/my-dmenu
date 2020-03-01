/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#aaaaaa", "#110000" },
	[SchemeSel] = { "#eee8aa", "#005500" },
	[SchemeSelHighlight] = { "#ffc978", "#007700" },
	[SchemeNormHighlight] = { "#ffc978", "#660000" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeMid] = { "#ffc978", "#330000" },
   [SchemeBorder] = { "#dd0000", "#dd0000" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 13;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 1;
