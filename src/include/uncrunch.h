//	Uncrunch header

#ifndef	_uncrunch_h_
#define	_uncrunch_h_

#define scrnaddr ((char far *)0xB8000000)
extern void uncrunch (unsigned char far *sourceptr,char far *destptr,int length);

#endif // _uncrunch_h_