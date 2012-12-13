/*
 * Cache1d declarations.
 *
 *  Written by Ryan C. Gordon. (icculus@clutteredmind.org)
 *
 * Please do NOT harrass Ken Silverman about any code modifications
 *  (including this file) to BUILD.
 */

/*
 * "Build Engine & Tools" Copyright (c) 1993-1997 Ken Silverman
 * Ken Silverman's official web site: "http://www.advsys.net/ken"
 * See the included license file "BUILDLIC.TXT" for license info.
 * This file has been modified from Ken Silverman's original release
 */

#ifndef _INCLUDE_CACHE1D_H_
#define _INCLUDE_CACHE1D_H_

#define MAXGROUPFILES 4     /* Warning: Fix groupfil if this is changed */
#define MAXOPENFILES 64     /* Warning: Fix filehan if this is changed  */

void initcache(int32_t dacachestart, int32_t dacachesize);
void allocache (int32_t *newhandle, int32_t newbytes, unsigned char *newlockptr);
void suckcache (int32_t *suckptr);
void agecache(void);
void reportandexit(char *errormessage);
int32_t initgroupfile(const char *filename);
void uninitgroupfile(void);
unsigned short crc16(char *data_p, unsigned short length);
unsigned int crc32_update(unsigned char *buf, unsigned int length, unsigned int crc_to_update);
int32_t kopen4load(const char *filename, int readfromGRP);
int32_t kread(int32_t handle, void *buffer, int32_t leng);
int kread8(int32_t handle, char *buffer);
int kread16(int32_t handle, short *buffer);
int kread32(int32_t handle, int32_t *buffer);
int32_t klseek(int32_t handle, int32_t offset, int32_t whence);
int32_t kfilelength(int32_t handle);
void kclose(int32_t handle);
void kdfread(void *buffer, size_t dasizeof, size_t count, int32_t fil);
void dfread(void *buffer, size_t dasizeof, size_t count, FILE *fil);
void dfwrite(void *buffer, size_t dasizeof, size_t count, FILE *fil);
int32_t compress(char *lzwinbuf, int32_t uncompleng, char *lzwoutbuf);
int32_t uncompress(char *lzwinbuf, int32_t compleng, char *lzwoutbuf);

extern char game_dir[512];
extern int32_t TCkopen4load(const char *filename, int readfromGRP);

#endif  /* !defined _INCLUDE_CACHE1D_H_ */

/* end of cache1d.h ... */



