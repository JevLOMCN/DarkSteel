// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 19

// AddDefaulted @ 14e252d40

int __thiscall
TArray<FDataflowBoolArrayTypes,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FDataflowBoolArrayTypes,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<FDataflowBoolArrayTypes,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,1);
  return iVar1;
}

// AddDefaulted @ 14e252da0

int __thiscall
TArray<FDataflowBoolTypes,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FDataflowBoolTypes,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<FDataflowBoolTypes,int>((this->AllocatorInstance).Data + iVar1,1);
  return iVar1;
}

// AddDefaulted @ 14e252e00

int __thiscall
TArray<FDataflowNumericArrayTypes,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FDataflowNumericArrayTypes,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<FDataflowNumericArrayTypes,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,1);
  return iVar1;
}

// AddDefaulted @ 14e252e60

int __thiscall
TArray<FDataflowStringArrayTypes,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FDataflowStringArrayTypes,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<FDataflowStringArrayTypes,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,1);
  return iVar1;
}

// AddDefaulted @ 14e252ec0

int __thiscall
TArray<FDataflowStringTypes,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FDataflowStringTypes,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<FDataflowStringTypes,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,1);
  return iVar1;
}

// AddDefaulted @ 14e252f20

int __thiscall
TArray<FDataflowTransformArrayTypes,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FDataflowTransformArrayTypes,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<FDataflowTransformArrayTypes,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,1);
  return iVar1;
}

// AddDefaulted @ 14e252f80

int __thiscall
TArray<FDataflowTransformTypes,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FDataflowTransformTypes,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<FDataflowTransformTypes,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x60,1);
  return iVar1;
}

// AddDefaulted @ 14e252fe0

int __thiscall
TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<FDataflowVectorArrayTypes,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,1);
  return iVar1;
}

// AddDefaulted @ 14e253040

int __thiscall
TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1020,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<FDataflowVectorTypes,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x20,1);
  return iVar1;
}

// RemoveAt @ 14e254960

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDataflowBoolArrayTypes,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FDataflowBoolArrayTypes,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14e254a40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDataflowBoolTypes,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FDataflowBoolTypes,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + param_1;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 1,(longlong)iVar4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14e254b10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDataflowNumericArrayTypes,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FDataflowNumericArrayTypes,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14e254bf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14e254cc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDataflowStringArrayTypes,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FDataflowStringArrayTypes,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  DestructItems<FString,int>(*(FString **)_Dst,*(int *)(_Dst + 8));
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14e254db0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDataflowStringTypes,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FDataflowStringTypes,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14e254e90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDataflowTransformArrayTypes,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FDataflowTransformArrayTypes,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14e254f70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDataflowTransformTypes,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FDataflowTransformTypes,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x60;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x60,(longlong)iVar4 * 0x60);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14e255050

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14e255130

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x20,(longlong)iVar4 << 5);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

