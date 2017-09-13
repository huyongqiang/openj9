/*******************************************************************************
 * Copyright (c) 1991, 2014 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
 *******************************************************************************/

#ifndef vrfyconvert_h
#define vrfyconvert_h

#include "argcount.h"

extern const U_32 decodeTable[];
extern const U_32 newArrayParamConversion[];
extern const U_32 baseTypeCharConversion[]; 
extern const U_32 argTypeCharConversion[]; 
extern const U_32 oneArgTypeCharConversion[]; 
extern const U_8  verificationBaseTokenEncode[];
extern const U_8  verificationBaseArrayTokenEncode[];
extern const U_32 verificationTokenDecode[];
#include "bcverify_api.h"

#endif     /* vrfyconvert_h */

