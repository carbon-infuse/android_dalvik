/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _DALVIK_HEAPDEBUG
#define _DALVIK_HEAPDEBUG

typedef enum HeapDebugInfoType {
    kVirtualHeapSize = 0,
    kNativeHeapSize = 1,
    kVirtualHeapAllocated = 2,
    kNativeHeapAllocated = 3,
    kVirtualHeapMaximumSize = 4
} HeapDebugInfoType;

/* Return the specified value.
 * Returns -1 if the type is unknown.
 */
int dvmGetHeapDebugInfo(HeapDebugInfoType info);

#endif  // _DALVIK_HEAPDEBUG
