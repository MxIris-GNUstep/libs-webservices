/** 
   Copyright (C) 2008 Free Software Foundation, Inc.
   
   Written by:  Richard Frith-Macdonald <rfm@gnu.org>
   Date:	January 2008
   
   This file is part of the WebServices Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 3 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.
   
   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA.


   $Date: 2007-09-14 13:54:55 +0100 (Fri, 14 Sep 2007) $ $Revision: 25485 $
   */ 

#ifndef	INCLUDED_GWSCONSTANTS_H
#define	INCLUDED_GWSCONSTANTS_H

#import	<Foundation/NSString.h>

#if     defined(__cplusplus)
extern "C" {
#endif

/** Key for a local error returned in a result dictionary.<br />
 * If an error occurred at the local end while producing the result
 * dictionary, the value for this key (and NSError, NSException, or NSString)
 * will describe the nature of the problem.
 */
extern NSString * const GWSErrorKey;

/** Key for a fault dictionary returned in a response dictionary.<br />
 * The value for this key is nil unless a wsdl <em>fault</em>
 * was decoded into the dictionary.
 */
extern NSString * const GWSFaultKey;

/** Key for the method name in a request dictionary.<br />
 * The value of this key is nil unless the dictionary was the result of
 * decoding a request, in which case it is the name of the method/operation
 * requested.
 */
extern NSString * const GWSMethodKey;

/** Key for an ordering array in a request or response dictionary.<br />
 * If present in a decoded object, the value of this key is an
 * NSMutableArray object containing the names of the parameters decoded.<br />
 * If present in a dictionary being encoded, this is an NSArray object
 * specifying the order in which the members of the dictionary are to be
 * encoded.
 */
extern NSString * const GWSOrderKey;

/** Key for a parameters dictionary in a request or response dictionary.<br />
 * If present, the value of this key is an NSMutableDictionary containing
 * the decoded parameters.
 */
extern NSString * const GWSParametersKey;

/** Key for the data sent to a remote system to perform a GWSService RPC
 * operation.<br />
 * This is present if debug was enabled for the service,
 * but is omitted otherwise.
 */
extern NSString * const GWSRequestDataKey;

/** Key for the data from a remote system returned in a result
 * of a GWSService RPC made to a web services server.<br />
 * This is present if and debug was enabled
 * for the service, but is omitted otherwise.
 */
extern NSString * const GWSResponseDataKey;


/** Key for the encoding style to be used for the SOAP body.
 */
extern NSString * const GWSSOAPBodyEncodingStyleKey;

/** SOAP body encoded in document style.  Setting this value for the
 * GWSSOAPBodyEncodingStyleKey in the parameters of a message being
 * encoded has the same effect as calling [GWSSOAPCoder-setOperationStyle:]
 * with an argument of GWSSOAPBodyEncodingStyleDocument.
 */
extern NSString * const GWSSOAPBodyEncodingStyleDocument;

/** SOAP body encoded in document style.  Setting this value for the
 * GWSSOAPBodyEncodingStyleKey in the parameters of a message being
 * encoded has the same effect as calling [GWSSOAPCoder-setOperationStyle:]
 * with an argument of GWSSOAPBodyEncodingStyleRPC.
 */
extern NSString * const GWSSOAPBodyEncodingStyleRPC;

/** SOAP body encoded in wrapped style.  Setting this value for the
 * GWSSOAPBodyEncodingStyleKey in the parameters of a message being
 * encoded has the same effect as calling [GWSSOAPCoder-setOperationStyle:]
 * with an argument of GWSSOAPBodyEncodingStyleWrapped.
 */
extern NSString * const GWSSOAPBodyEncodingStyleWrapped;

/** Key for the 'use' style to be used for the SOAP body.<br />
 * The value of this key may be 'literal' or 'encoded'.
 */
extern NSString * const GWSSOAPBodyUseKey;

/** Key for the 'use' style to be used for the SOAP header.<br />
 * The value of this key may be 'literal' or 'encoded'.
 */
extern NSString * const GWSSOAPHeaderUseKey;

/** Constant 'encoded' for body/header use.
 */
extern NSString * const GWSSOAPBodyUseEncoded;

/** Constant 'literal' for body/header use.
 */
extern NSString * const GWSSOAPBodyUseLiteral;

/** Key for the URI to be used as the namespace for the current element.
 * If the GWSSOAPNamespaceNameKey is not used, this namespace URI is set
 * as the default namespace for the current element.
 */
extern NSString * const GWSSOAPNamespaceURIKey;

/** Key for the name to be used for the namespace of the current element.<br />
 * If this is set in conjunction with GWSSOAPNamespaceURIKey then
 * the appropriate namespace mapping is set up in the SOAP envelope.
 * In any case this name is used to qualify the current element name.
 */
extern NSString * const GWSSOAPNamespaceNameKey;

/** Key for the header element for a soap message.<br />
 * An array of headers (specified as [GWSElement] instances) for
 * for the message may be provided by setting a value for this key
 * in the parameters dictionary.<br />
 * Alternatively, a dictionary of message parts (like the parameters
 * dictionary itsself) may be specified for the contents of the header.<br />
 * And finally, you may set an instance of [NSNull] rather than
 * an array or dictionary for this key, in which case the coder
 * will generate an empty header element which the coder's delegate
 * can then modify.<br />
 * If no value is set for this key, the header element is omitted.
 */
extern NSString * const GWSSOAPMessageHeadersKey;

#if	defined(__cplusplus)
}
#endif

#endif

