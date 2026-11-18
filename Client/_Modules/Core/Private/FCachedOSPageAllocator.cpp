// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// AllocateImpl @ 141628b70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FCachedOSPageAllocator::AllocateImpl
          (FCachedOSPageAllocator *this,ulong64 param_1,uint param_2,FFreePageBlock *param_3,
          FFreePageBlock *param_4,uint *param_5,ulong64 *param_6,FWindowsRecursiveMutex *param_7)

{
  void *pvVar1;
  FFreePageBlock *_Dst;
  FLLMScope local_18 [5];
  
  if ((param_1 <= param_2 >> 2) && (_Dst = param_3, param_3 != param_4)) {
    do {
      if (_Dst->ByteSize == param_1) {
        pvVar1 = _Dst->Ptr;
        if (pvVar1 == (void *)0x0) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
        }
        *param_6 = *param_6 - _Dst->ByteSize;
        if (_Dst + 1 != param_4) {
          memmove(_Dst,_Dst + 1,(((longlong)param_4 - (longlong)_Dst >> 4) + -1) * 0x10);
        }
        *param_5 = *param_5 - 1;
        return pvVar1;
      }
      _Dst = _Dst + 1;
    } while (_Dst != param_4);
    FLLMScope::FLLMScope(local_18,FMalloc,false,None,Platform,true);
    pvVar1 = FWindowsPlatformMemory::BinnedAllocFromOS(param_1);
    if (pvVar1 != (void *)0x0) {
      FLLMScope::~FLLMScope(local_18);
      return pvVar1;
    }
    FLLMScope::~FLLMScope(local_18);
    do {
      FWindowsPlatformMemory::BinnedFreeToOS(param_3->Ptr,param_3->ByteSize);
      param_3->Ptr = (void *)0x0;
      param_3->ByteSize = 0;
      param_3 = param_3 + 1;
    } while (param_3 != param_4);
    *param_5 = 0;
    *param_6 = 0;
  }
  FLLMScope::FLLMScope(local_18,FMalloc,false,None,Platform,true);
  pvVar1 = FWindowsPlatformMemory::BinnedAllocFromOS(param_1);
  FLLMScope::~FLLMScope(local_18);
  return pvVar1;
}

// FreeAllImpl @ 14163cf60

void __thiscall
FCachedOSPageAllocator::FreeAllImpl
          (FCachedOSPageAllocator *this,FFreePageBlock *param_1,uint *param_2,ulong64 *param_3,
          FWindowsRecursiveMutex *param_4)

{
  ulong64 uVar1;
  void *pvVar2;
  uint uVar3;
  
  uVar3 = *param_2;
  while (uVar3 != 0) {
    uVar1 = param_1->ByteSize;
    pvVar2 = param_1->Ptr;
    *param_3 = *param_3 - uVar1;
    uVar3 = *param_2 - 1;
    *param_2 = uVar3;
    if (uVar3 != 0) {
      memmove(param_1,param_1 + 1,(ulonglong)uVar3 << 4);
    }
    FWindowsPlatformMemory::BinnedFreeToOS(pvVar2,uVar1);
    uVar3 = *param_2;
  }
  return;
}

// FreeImpl @ 14163d010

void __thiscall
FCachedOSPageAllocator::FreeImpl
          (FCachedOSPageAllocator *this,void *param_1,ulong64 param_2,uint param_3,uint param_4,
          FFreePageBlock *param_5,uint *param_6,ulong64 *param_7,FWindowsRecursiveMutex *param_8,
          bool param_9)

{
  ulong64 uVar1;
  void *pvVar2;
  uint uVar3;
  
  if (param_2 <= param_4 >> 2) {
    uVar3 = *param_6;
    while ((uVar3 != 0 && ((param_3 <= uVar3 || ((ulonglong)param_4 < *param_7 + param_2))))) {
      uVar1 = param_5->ByteSize;
      pvVar2 = param_5->Ptr;
      *param_7 = *param_7 - uVar1;
      uVar3 = *param_6 - 1;
      *param_6 = uVar3;
      if (uVar3 != 0) {
        memmove(param_5,param_5 + 1,(ulonglong)uVar3 << 4);
      }
      FWindowsPlatformMemory::BinnedFreeToOS(pvVar2,uVar1);
      uVar3 = *param_6;
    }
    param_5[uVar3].Ptr = param_1;
    param_5[*param_6].ByteSize = param_2;
    *param_7 = *param_7 + param_2;
    *param_6 = *param_6 + 1;
    return;
  }
  FWindowsPlatformMemory::BinnedFreeToOS(param_1,param_2);
  return;
}

