// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 3

// TIntervalTreeAllocator<FIntervalTreeNode> @ 142a50790

TIntervalTreeAllocator<FIntervalTreeNode> * __thiscall
TIntervalTreeAllocator<FIntervalTreeNode>::TIntervalTreeAllocator<FIntervalTreeNode>
          (TIntervalTreeAllocator<FIntervalTreeNode> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  TIntervalTreeAllocator<FIntervalTreeNode> *pTVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  piVar1 = &(this->FreeItems).ArrayMax;
  bVar8 = 3 < GNextSalt;
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  (this->FreeItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeItems).ArrayNum = 0;
  *piVar1 = 0;
  if (bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("GNextSalt < 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x2b,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TIntervalTreeAllocator<FIntervalTreeNode> *)(*pcVar3)();
      return pTVar5;
    }
  }
  this->SaltMask = 0xc0000000;
  uVar6 = GNextSalt << 0x1e;
  iVar7 = (this->FreeItems).ArrayNum;
  GNextSalt = GNextSalt + 1;
  this->Salt = uVar6;
  if (iVar7 == 0) {
    uVar6 = (this->Items).ArrayNum;
    uVar4 = uVar6;
    if (uVar6 == (this->Items).ArrayMax) {
      uVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)this,&(this->Items).ArrayMax);
    }
    (this->Items).ArrayNum = uVar4 + 1;
  }
  else {
    if (iVar7 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TIntervalTreeAllocator<FIntervalTreeNode> *)(*pcVar3)();
        return pTVar5;
      }
    }
    iVar7 = (this->FreeItems).ArrayNum;
    uVar6 = *(uint *)((this->FreeItems).AllocatorInstance.Data + (longlong)iVar7 * 4 + -4);
    iVar7 = iVar7 + -1;
    (this->FreeItems).ArrayNum = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeItems).AllocatorInstance,iVar7,piVar1);
  }
  uVar4 = 0;
  if ((int)uVar6 < (this->Items).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TIntervalTreeAllocator<FIntervalTreeNode> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Items).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar6 * 0xc) = 0;
  *(undefined4 *)(pFVar2 + (longlong)(int)uVar6 * 0xc + 8) = 0;
  if ((~this->SaltMask & (uVar6 | this->Salt)) != 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Alloc() & ~SaltMask) == IntervalTreeInvalidIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x2e,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TIntervalTreeAllocator<FIntervalTreeNode> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return this;
}

// Alloc @ 142a5f7d0

uint __thiscall
TIntervalTreeAllocator<FPakPrecacher::FCacheBlock>::Alloc
          (TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar2 = (this->FreeItems).ArrayNum;
  if (iVar2 == 0) {
    uVar6 = (this->Items).ArrayNum;
    piVar1 = &(this->Items).ArrayMax;
    uVar7 = uVar6;
    if (uVar6 == *piVar1) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,(ForAnyElementType *)this,piVar1);
    }
    (this->Items).ArrayNum = uVar7 + 1;
  }
  else {
    if (iVar2 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    iVar2 = (this->FreeItems).ArrayNum;
    iVar9 = iVar2 + -1;
    uVar6 = *(uint *)((this->FreeItems).AllocatorInstance.Data + (longlong)iVar2 * 4 + -4);
    (this->FreeItems).ArrayNum = iVar9;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeItems).AllocatorInstance,iVar9,&(this->FreeItems).ArrayMax);
  }
  uVar7 = 0;
  if ((int)uVar6 < (this->Items).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  lVar8 = (longlong)(int)uVar6;
  pFVar3 = (this->Items).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30) = 0;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 0x28) = 0;
  return uVar6 | this->Salt;
}

// Alloc @ 142a5f910

uint __thiscall
TIntervalTreeAllocator<FPakPrecacher::FPakInRequest>::Alloc
          (TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar2 = (this->FreeItems).ArrayNum;
  if (iVar2 == 0) {
    uVar6 = (this->Items).ArrayNum;
    piVar1 = &(this->Items).ArrayMax;
    uVar7 = uVar6;
    if (uVar6 == *piVar1) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,(ForAnyElementType *)this,piVar1);
    }
    (this->Items).ArrayNum = uVar7 + 1;
  }
  else {
    if (iVar2 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    iVar2 = (this->FreeItems).ArrayNum;
    iVar9 = iVar2 + -1;
    uVar6 = *(uint *)((this->FreeItems).AllocatorInstance.Data + (longlong)iVar2 * 4 + -4);
    (this->FreeItems).ArrayNum = iVar9;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeItems).AllocatorInstance,iVar9,&(this->FreeItems).ArrayMax);
  }
  uVar7 = 0;
  if ((int)uVar6 < (this->Items).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  lVar8 = (longlong)(int)uVar6;
  pFVar3 = (this->Items).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30) = 0;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 0x20) = 0;
  *(undefined4 *)(pFVar3 + lVar8 * 0x30 + 0x28) = 0;
  *(undefined4 *)(pFVar3 + lVar8 * 0x30 + 0x2c) = 1;
  return uVar6 | this->Salt;
}

