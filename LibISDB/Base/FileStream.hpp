/*
  LibISDB
  Copyright(c) 2017-2020 DBCTRADO

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

/**
 @file   FileStream.hpp
 @brief  ファイルストリーム
 @author DBCTRADO
*/


#ifndef LIBISDB_FILE_STREAM_H
#define LIBISDB_FILE_STREAM_H


#include "Stream.hpp"
#include "FileStreamGeneric.hpp"
#include "FileStreamGenericC.hpp"
#ifdef LIBISDB_WINDOWS
#include "FileStreamWindows.hpp"
#else
#include "FileStreamPOSIX.hpp"
#endif


namespace LibISDB
{

#ifdef LIBISDB_WINDOWS
	typedef FileStreamWindows FileStreamNative;
#else
	typedef FileStreamPOSIX FileStreamNative;
#endif
	typedef FileStreamNative FileStream;
	typedef FileStreamGenericC BufferedFileStream;

}	// namespace LibISDB


#endif	// ifndef LIBISDB_FILE_STREAM_H
