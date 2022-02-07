/*

 This file is part of the Brother MFC/DCP backend for SANE.

 This program is free software; you can redistribute it and/or modify it
 under the terms of the GNU General Public License as published by the Free
 Software Foundation; either version 2 of the License, or (at your option)
 any later version.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 more details.

 You should have received a copy of the GNU General Public License along with
 this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 Place, Suite 330, Boston, MA  02111-1307  USA

*/
#ifndef	STRIDE_BUGCHK_H_INCLUDED
#define	STRIDE_BUGCHK_H_INCLUDED

extern	void *	bugchk_malloc(size_t size, int line, const char *file) ;
extern	void	bugchk_free(void *ptr , int line, const char *file) ;

#ifndef	NDEBUG
 #define MALLOC(size)	bugchk_malloc((size), __LINE__, __FILE__)
 #define FREE(ptr)	do { bugchk_free((ptr), __LINE__, __FILE__); (ptr)=NULL; } while (0)
#else
 #define MALLOC(size)	malloc((size))
 #define FREE(ptr)	free((ptr))
#endif

#endif /*--  #ifndef STRIDE_BUGCHK_H_INCLUDED  --*/
