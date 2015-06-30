////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stddef.h>
#include <tinyhal.h>

////////////////////////////////////////////////////////////////////////////////


void *operator new( size_t n )
{
    return private_malloc( n );
}

void *operator new[]( size_t n )
{
    return private_malloc( n );
}

void operator delete( void* p )
{
    return private_free( p );
}

void operator delete[]( void* p )
{
    return private_free( p );
}

////////////////////////////////////////////////////////////////////////////////
