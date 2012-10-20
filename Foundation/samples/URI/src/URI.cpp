//
// URI.cpp
//
// $Id: //poco/1.4/Foundation/samples/URI/src/URI.cpp#1 $
//
// This sample demonstrates the URI class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#include "Poco/URI.h"
#include <iostream>


using Poco::URI;


int main(int argc, char** argv)
{
	URI uri1("http://www.appinf.com:81/sample?example-query#somewhere");
	
	std::cout << "Scheme:    " << uri1.getScheme() << std::endl
	          << "Authority: " << uri1.getAuthority() << std::endl
	          << "Path:      " << uri1.getPath() << std::endl
	          << "Query:     " << uri1.getQuery() << std::endl
	          << "Fragment:  " << uri1.getFragment() << std::endl;
	          
	URI uri2;
	uri2.setScheme("https");
	uri2.setAuthority("www.appinf.com");
	uri2.setPath("/another sample");
	
	std::cout << uri2.toString() << std::endl;
	
	return 0;
}
