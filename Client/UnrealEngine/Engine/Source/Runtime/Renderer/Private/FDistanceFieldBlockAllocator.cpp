// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// Allocate @ 1448671d0

void __thiscall
FDistanceFieldBlockAllocator::Allocate
          (FDistanceFieldBlockAllocator *this,int param_1,
          TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int *piVar1;
  void *_Dst;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<int> FVar8;
  ForElementType<int> FVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &param_2->ArrayMax;
  uVar12 = 0;
  param_2->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,param_1,&param_2->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
            (4,4,param_1,&param_2->AllocatorInstance,&param_2->ArrayNum,piVar1);
  uVar2 = (this->FreeBlocks).ArrayNum;
  if (param_1 < (int)uVar2) {
    uVar2 = param_1;
  }
  if (0 < (int)uVar2) {
    uVar16 = uVar12;
    do {
      iVar7 = (this->FreeBlocks).ArrayNum;
      uVar10 = (uint)uVar12;
      uVar13 = iVar7 + ~uVar10;
      uVar11 = 0;
      if ((int)uVar13 < iVar7) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar9 = (this->FreeBlocks).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<int>)&this->FreeBlocks;
      if (FVar9 != (ForElementType<int>)0x0) {
        FVar8 = FVar9;
      }
      uVar3 = *(undefined4 *)((longlong)FVar8 + (longlong)(int)uVar13 * 4);
      uVar11 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar9 = (param_2->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<int>)param_2;
      if (FVar9 != (ForElementType<int>)0x0) {
        FVar8 = FVar9;
      }
      uVar12 = (ulonglong)(uVar10 + 1);
      *(undefined4 *)((longlong)FVar8 + uVar16 * 4) = uVar3;
      uVar16 = uVar16 + 1;
    } while ((longlong)uVar16 < (longlong)(int)uVar2);
    uVar11 = (this->FreeBlocks).ArrayNum - uVar2;
    if (((int)(uVar11 | uVar2) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar9 = (this->FreeBlocks).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<int>)0x0) {
      FVar9 = (ForElementType<int>)&this->FreeBlocks;
    }
    _Dst = (void *)((longlong)FVar9 + (longlong)(int)uVar11 * 4);
    iVar7 = ((this->FreeBlocks).ArrayNum - uVar11) - uVar2;
    if (iVar7 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar2 * 4),(longlong)iVar7 << 2);
    }
    piVar1 = &(this->FreeBlocks).ArrayNum;
    *piVar1 = *piVar1 - uVar2;
  }
  iVar7 = param_1 - uVar2;
  lVar14 = (longlong)iVar7;
  if (0 < iVar7) {
    lVar17 = (longlong)(int)uVar2 * 4;
    uVar11 = uVar2;
    do {
      iVar15 = uVar11 - uVar2;
      iVar4 = this->MaxNumBlocks;
      uVar10 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar9 = (param_2->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<int>)param_2;
      if (FVar9 != (ForElementType<int>)0x0) {
        FVar8 = FVar9;
      }
      uVar11 = uVar11 + 1;
      *(int *)(lVar17 + (longlong)FVar8) = iVar15 + iVar4;
      lVar17 = lVar17 + 4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  this->MaxNumBlocks = this->MaxNumBlocks + iVar7;
  return;
}

// Free @ 144879bd0

void __thiscall
FDistanceFieldBlockAllocator::Free
          (FDistanceFieldBlockAllocator *this,
          TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<int> FVar6;
  
  pTVar1 = &this->FreeBlocks;
  if (pTVar1 == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,iVar2,&pTVar1->AllocatorInstance,&(this->FreeBlocks).ArrayNum,
                       &(this->FreeBlocks).ArrayMax);
    FVar6 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar6 != (ForElementType<int>)0x0) {
      param_1 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar6;
    }
    FVar6 = (this->FreeBlocks).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<int>)0x0) {
      FVar6 = (ForElementType<int>)pTVar1;
    }
    memcpy((void *)((longlong)FVar6 + (longlong)iVar5 * 4),param_1,(longlong)iVar2 << 2);
  }
  return;
}

