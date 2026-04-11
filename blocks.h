#define SCRIPTS_HOME	"$HOME/uxm/sysutils"

static const Block blocks[] = {
	/* Icon - Command - Update Interval - Update Signal */
	{"| ", SCRIPTS_HOME "/network.sh", 5, 4},
	{"| ", SCRIPTS_HOME "/battery.sh", 5, 3},
	{"| ", SCRIPTS_HOME "/volume.sh", 0, 10},
	{"| ", SCRIPTS_HOME "/date.sh", 60, 0},
;

/* Sets delimeter between status commands. NULL character ('\0') means no delimeter. */
static char delim[] = " ";
static unsigned int delimLen = 5;
