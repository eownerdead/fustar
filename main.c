#include <stdio.h>

typedef struct {
	char name[100];
	char mode[8];
	char uid[8];
	char gid[8];
	char size[12];
	char mtime[12];
	char chksum[8];
	char typeflag;
	char linkname[100];
	char magic[6];
	char version[2];
	char uname[32];
	char gname[32];
	char devmajor[8];
	char devminor[8];
	char prefix[155];
} ustar;

int main(int argc, char **argv) {
	ustar f;
	fread(&f, sizeof(ustar), 1, stdin);
	printf("%s", f.magic);
}
