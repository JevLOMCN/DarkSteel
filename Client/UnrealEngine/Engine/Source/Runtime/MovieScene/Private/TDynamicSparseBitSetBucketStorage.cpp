// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 15

// Get @ 1461af920

ushort * __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
          (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Storage).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (ushort *)(*pcVar1)();
      return puVar4;
    }
  }
  return (ushort *)((this->Storage).AllocatorInstance.Data + (longlong)param_1 * 2);
}

// Get @ 1461af9a0

ushort __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
          (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->Storage).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(ushort *)((this->Storage).AllocatorInstance.Data + (longlong)param_1 * 2);
}

// Insert @ 1461b6700

void __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Insert
          (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *this,ushort param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ushort local_res10 [4];
  
  pFVar5 = (this->Storage).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar5 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar5 + (longlong)(this->Storage).ArrayMax * 2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->Storage).ArrayNum;
  piVar1 = &(this->Storage).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,(ForAnyElementType *)this,piVar1);
  }
  pFVar5 = (this->Storage).AllocatorInstance.Data;
  (this->Storage).ArrayNum = iVar4 + 1;
  pFVar5 = pFVar5 + (longlong)param_2 * 2;
  memmove(pFVar5 + 2,pFVar5,(longlong)(iVar4 - param_2) * 2);
  *(ushort *)((this->Storage).AllocatorInstance.Data + (longlong)param_2 * 2) = local_res10[0];
  return;
}

// Get @ 1462ae420

uchar * __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get
          (TDynamicSparseBitSetBucketStorage<unsigned_char,4> *this,int param_1)

{
  ForElementType<unsigned_char> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uchar *puVar5;
  
  uVar4 = 0;
  if (param_1 < (this->Storage).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar2)();
      return puVar5;
    }
  }
  FVar1 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_char>)0x0) {
    this = (TDynamicSparseBitSetBucketStorage<unsigned_char,4> *)FVar1;
  }
  return (uchar *)((longlong)this + (longlong)param_1);
}

// Get @ 1462ae4a0

uchar __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get
          (TDynamicSparseBitSetBucketStorage<unsigned_char,4> *this,int param_1)

{
  ForElementType<unsigned_char> FVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->Storage).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  FVar1 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_char>)0x0) {
    this = (TDynamicSparseBitSetBucketStorage<unsigned_char,4> *)FVar1;
  }
  return *(uchar *)((longlong)param_1 + (longlong)this);
}

// Get @ 1462ae520

ushort * __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get
          (TDynamicSparseBitSetBucketStorage<unsigned_short,4> *this,int param_1)

{
  ForElementType<unsigned_short> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar4 = 0;
  if (param_1 < (this->Storage).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar5 = (ushort *)(*pcVar2)();
      return puVar5;
    }
  }
  FVar1 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_short>)0x0) {
    this = (TDynamicSparseBitSetBucketStorage<unsigned_short,4> *)FVar1;
  }
  return (ushort *)((longlong)this + (longlong)param_1 * 2);
}

// Get @ 1462ae5a0

ushort __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get
          (TDynamicSparseBitSetBucketStorage<unsigned_short,4> *this,int param_1)

{
  ForElementType<unsigned_short> FVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->Storage).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  FVar1 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_short>)0x0) {
    this = (TDynamicSparseBitSetBucketStorage<unsigned_short,4> *)FVar1;
  }
  return *(ushort *)((longlong)this + (longlong)param_1 * 2);
}

// Get @ 1462ae620

uint * __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get
          (TDynamicSparseBitSetBucketStorage<unsigned_int,4> *this,int param_1)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = 0;
  if (param_1 < (this->Storage).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar2)();
      return puVar5;
    }
  }
  FVar1 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    this = (TDynamicSparseBitSetBucketStorage<unsigned_int,4> *)FVar1;
  }
  return (uint *)((longlong)this + (longlong)param_1 * 4);
}

// Get @ 1462ae6a0

uint __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get
          (TDynamicSparseBitSetBucketStorage<unsigned_int,4> *this,int param_1)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->Storage).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  FVar1 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    this = (TDynamicSparseBitSetBucketStorage<unsigned_int,4> *)FVar1;
  }
  return *(uint *)((longlong)this + (longlong)param_1 * 4);
}

// Get @ 1462ae720

ulong64 * __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get
          (TDynamicSparseBitSetBucketStorage<unsigned___int64,4> *this,int param_1)

{
  ForElementType<unsigned___int64> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 *puVar5;
  
  uVar4 = 0;
  if (param_1 < (this->Storage).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar5 = (ulong64 *)(*pcVar2)();
      return puVar5;
    }
  }
  FVar1 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
    this = (TDynamicSparseBitSetBucketStorage<unsigned___int64,4> *)FVar1;
  }
  return (ulong64 *)((longlong)this + (longlong)param_1 * 8);
}

// Get @ 1462ae7a0

ulong64 __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get
          (TDynamicSparseBitSetBucketStorage<unsigned___int64,4> *this,int param_1)

{
  ForElementType<unsigned___int64> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 uVar5;
  
  uVar4 = 0;
  if (param_1 < (this->Storage).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  FVar1 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
    this = (TDynamicSparseBitSetBucketStorage<unsigned___int64,4> *)FVar1;
  }
  return *(ulong64 *)((longlong)this + (longlong)param_1 * 8);
}

// Insert @ 1462b2fe0

void __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Insert
          (TDynamicSparseBitSetBucketStorage<unsigned_char,4> *this,uchar param_1,int param_2)

{
  int *piVar1;
  ForElementType<unsigned_char> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_char> FVar6;
  void *_Src;
  uchar local_res10 [8];
  
  FVar2 = (this->Storage).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<unsigned_char>)this;
  if (FVar2 != (ForElementType<unsigned_char>)0x0) {
    FVar6 = FVar2;
  }
  local_res10[0] = param_1;
  if ((ulonglong)FVar6 <= local_res10) {
    FVar6 = (ForElementType<unsigned_char>)this;
    if (FVar2 != (ForElementType<unsigned_char>)0x0) {
      FVar6 = FVar2;
    }
    if ((local_res10 < (uchar *)((longlong)FVar6 + (longlong)(this->Storage).ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Storage).ArrayNum;
  piVar1 = &(this->Storage).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                      (0x101,(ForElementType<unsigned_char> *)this,piVar1);
  }
  (this->Storage).ArrayNum = iVar5 + 1;
  FVar2 = (this->Storage).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<unsigned_char>)this;
  if (FVar2 != (ForElementType<unsigned_char>)0x0) {
    FVar6 = FVar2;
  }
  _Src = (void *)((longlong)FVar6 + (longlong)param_2);
  memmove((void *)((longlong)_Src + 1),_Src,(longlong)(iVar5 - param_2));
  FVar2 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_char>)0x0) {
    this = (TDynamicSparseBitSetBucketStorage<unsigned_char,4> *)FVar2;
  }
  *(uchar *)((longlong)param_2 + (longlong)this) = local_res10[0];
  return;
}

// Insert @ 1462b30f0

void __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Insert
          (TDynamicSparseBitSetBucketStorage<unsigned_short,4> *this,ushort param_1,int param_2)

{
  int *piVar1;
  ForElementType<unsigned_short> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_short> FVar6;
  void *_Src;
  ushort local_res10 [4];
  
  FVar2 = (this->Storage).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<unsigned_short>)this;
  if (FVar2 != (ForElementType<unsigned_short>)0x0) {
    FVar6 = FVar2;
  }
  local_res10[0] = param_1;
  if ((ulonglong)FVar6 <= local_res10) {
    FVar6 = (ForElementType<unsigned_short>)this;
    if (FVar2 != (ForElementType<unsigned_short>)0x0) {
      FVar6 = FVar2;
    }
    if ((local_res10 < (ushort *)((longlong)FVar6 + (longlong)(this->Storage).ArrayMax * 2)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Storage).ArrayNum;
  piVar1 = &(this->Storage).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                      (0x202,(ForElementType<unsigned_short> *)this,piVar1);
  }
  (this->Storage).ArrayNum = iVar5 + 1;
  FVar2 = (this->Storage).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<unsigned_short>)this;
  if (FVar2 != (ForElementType<unsigned_short>)0x0) {
    FVar6 = FVar2;
  }
  _Src = (void *)((longlong)FVar6 + (longlong)param_2 * 2);
  memmove((void *)((longlong)_Src + 2),_Src,(longlong)(iVar5 - param_2) * 2);
  FVar2 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_short>)0x0) {
    this = (TDynamicSparseBitSetBucketStorage<unsigned_short,4> *)FVar2;
  }
  *(ushort *)((longlong)param_2 * 2 + (longlong)this) = local_res10[0];
  return;
}

// Insert @ 1462b3200

void __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Insert
          (TDynamicSparseBitSetBucketStorage<unsigned_int,4> *this,uint param_1,int param_2)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  void *_Src;
  uint local_res10 [2];
  
  FVar2 = (this->Storage).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<unsigned_int>)this;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FVar6 = FVar2;
  }
  local_res10[0] = param_1;
  if ((ulonglong)FVar6 <= local_res10) {
    FVar6 = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar6 = FVar2;
    }
    if ((local_res10 < (uint *)((longlong)FVar6 + (longlong)(this->Storage).ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Storage).ArrayNum;
  piVar1 = &(this->Storage).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,(ForElementType<unsigned_int> *)this,piVar1);
  }
  (this->Storage).ArrayNum = iVar5 + 1;
  FVar2 = (this->Storage).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<unsigned_int>)this;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FVar6 = FVar2;
  }
  _Src = (void *)((longlong)FVar6 + (longlong)param_2 * 4);
  memmove((void *)((longlong)_Src + 4),_Src,(longlong)(iVar5 - param_2) << 2);
  FVar2 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    this = (TDynamicSparseBitSetBucketStorage<unsigned_int,4> *)FVar2;
  }
  *(uint *)((longlong)param_2 * 4 + (longlong)this) = local_res10[0];
  return;
}

// Insert @ 1462b3310

void __thiscall
UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Insert
          (TDynamicSparseBitSetBucketStorage<unsigned___int64,4> *this,ulong64 param_1,int param_2)

{
  int *piVar1;
  ForElementType<unsigned___int64> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned___int64> FVar6;
  void *_Src;
  ulong64 local_res10;
  
  FVar2 = (this->Storage).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<unsigned___int64>)this;
  if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
    FVar6 = FVar2;
  }
  local_res10 = param_1;
  if ((ulonglong)FVar6 <= &local_res10) {
    FVar6 = (ForElementType<unsigned___int64>)this;
    if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
      FVar6 = FVar2;
    }
    if ((&local_res10 < (ulong64 *)((longlong)FVar6 + (longlong)(this->Storage).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Storage).ArrayNum;
  piVar1 = &(this->Storage).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                      (0x808,(ForElementType<unsigned___int64> *)this,piVar1);
  }
  (this->Storage).ArrayNum = iVar5 + 1;
  FVar2 = (this->Storage).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<unsigned___int64>)this;
  if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
    FVar6 = FVar2;
  }
  _Src = (void *)((longlong)FVar6 + (longlong)param_2 * 8);
  memmove((void *)((longlong)_Src + 8),_Src,(longlong)(iVar5 - param_2) << 3);
  FVar2 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
    this = (TDynamicSparseBitSetBucketStorage<unsigned___int64,4> *)FVar2;
  }
  *(ulong64 *)((longlong)param_2 * 8 + (longlong)this) = local_res10;
  return;
}

