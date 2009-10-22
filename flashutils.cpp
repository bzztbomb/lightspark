/**************************************************************************
    Lightspark, a free flash player implementation

    Copyright (C) 2009  Alessandro Pignotti (a.pignotti@sssup.it)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
**************************************************************************/

#include "flashutils.h"

using namespace std;

ByteArray::ByteArray():ASObject("ByteArray"),bytes(NULL),len(0)
{
}

ASObject* getQualifiedClassName(ASObject* obj, arguments* args)
{
	int class_index=obj->class_index;
	abort();
	//cout << args->at(0)->getClassName() << endl;
	//return new ASString(args->at(0)->getClassName());
}