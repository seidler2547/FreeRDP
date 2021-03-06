/**
 * WinPR: Windows Portable Runtime
 * Memory Allocation
 *
 * Copyright 2012 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WINPR_CRT_MEMORY_H
#define WINPR_CRT_MEMORY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winpr/winpr.h>
#include <winpr/wtypes.h>

#ifndef _WIN32

#define CopyMemory(Destination, Source, Length)		memcpy((Destination), (Source), (Length))
#define MoveMemory(Destination, Source, Length)		memmove((Destination), (Source), (Length))
#define	FillMemory(Destination, Length, Fill)		memset((Destination), (Fill), (Length))
#define ZeroMemory(Destination, Length)			memset((Destination), 0, (Length))

WINPR_API PVOID SecureZeroMemory(PVOID ptr, SIZE_T cnt);

#endif

#include <winpr/heap.h>

#endif /* WINPR_CRT_MEMORY_H */

