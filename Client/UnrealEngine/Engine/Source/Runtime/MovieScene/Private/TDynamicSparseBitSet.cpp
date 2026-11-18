// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// operator|= @ 1461896f0

TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
* __thiscall
UE::MovieScene::
TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
::operator|=(TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
             *this,TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                   *param_1)

{
  int *piVar1;
  int *piVar2;
  FEntry *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
  *pTVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  FEntry *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong local_res10;
  
  iVar8 = (param_1->Entries).ArrayNum;
  if (iVar8 == 0) {
    return this;
  }
  if ((this->Entries).ArrayNum == 0) {
    if (this == param_1) {
      return this;
    }
    DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
              ((FEntry *)(this->Entries).AllocatorInstance.Data,0);
    iVar8 = (param_1->Entries).ArrayNum;
    piVar1 = &(this->Entries).ArrayMax;
    pFVar3 = (FEntry *)(param_1->Entries).AllocatorInstance.Data;
    (this->Entries).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar8,*piVar1,(ForAnyElementType *)this,iVar8,piVar1);
    ConstructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
              ((this->Entries).AllocatorInstance.Data,pFVar3,iVar8);
    return this;
  }
  uVar17 = 0;
  uVar6 = 0;
  uVar13 = uVar17;
  uVar15 = uVar17;
  if (0 < iVar8) {
    do {
      if (((this->Entries).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                  *)(*pcVar4)();
        return pTVar9;
      }
      uVar11 = (uint)uVar13;
      pFVar10 = (this->Entries).AllocatorInstance.Data;
      uVar18 = uVar6;
      if ((int)uVar11 < (param_1->Entries).ArrayNum) {
        uVar18 = ~uVar11 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                  *)(*pcVar4)();
        return pTVar9;
      }
      pFVar3 = (FEntry *)(param_1->Entries).AllocatorInstance.Data;
      if (*(uint *)(pFVar10 + 0x18) <= *(uint *)((longlong)&pFVar3->Offset + uVar15)) break;
      uVar13 = (ulonglong)(uVar11 + 1);
      uVar15 = uVar15 + 0x20;
    } while ((int)(uVar11 + 1) < (param_1->Entries).ArrayNum);
    iVar8 = (int)uVar13;
    if (0 < iVar8) {
      if ((pFVar3 == (FEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x793,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                  *)(*pcVar4)();
        return pTVar9;
      }
      iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,iVar8,(ForAnyElementType *)this,&(this->Entries).ArrayNum,
                         &(this->Entries).ArrayMax);
      pFVar10 = (this->Entries).AllocatorInstance.Data;
      local_res10 = (longlong)iVar8;
      memmove(pFVar10 + local_res10 * 0x20,pFVar10,(longlong)iVar7 << 5);
      ConstructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
                ((this->Entries).AllocatorInstance.Data,pFVar3,iVar8);
      goto LAB_1461898f1;
    }
  }
  local_res10 = (longlong)(int)uVar13;
LAB_1461898f1:
  if ((int)uVar13 < (param_1->Entries).ArrayNum) {
    local_res10 = local_res10 << 5;
    uVar15 = uVar17;
    do {
      uVar18 = (uint)uVar15;
      if ((this->Entries).ArrayNum <= (int)uVar18) {
        return this;
      }
      if (((int)uVar18 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                  *)(*pcVar4)();
        return pTVar9;
      }
      pFVar10 = (this->Entries).AllocatorInstance.Data;
      uVar12 = (uint)uVar13;
      uVar14 = ~uVar12 >> 0x1f;
      uVar11 = uVar6;
      if ((int)uVar12 < (param_1->Entries).ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                  *)(*pcVar4)();
        return pTVar9;
      }
      if (*(uint *)((param_1->Entries).AllocatorInstance.Data + local_res10 + 0x18) <
          *(uint *)(pFVar10 + uVar17 + 0x18)) {
        uVar11 = uVar6;
        if ((int)uVar12 < (param_1->Entries).ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                    *)(*pcVar4)();
          return pTVar9;
        }
        pFVar3 = (FEntry *)(this->Entries).AllocatorInstance.Data;
        piVar1 = &(this->Entries).ArrayNum;
        pFVar16 = (FEntry *)
                  ((param_1->Entries).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20);
        if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (this->Entries).ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                    *)(*pcVar4)();
          return pTVar9;
        }
        iVar8 = *piVar1;
        piVar2 = &(this->Entries).ArrayMax;
        if (iVar8 == *piVar2) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,(ForAnyElementType *)this,piVar2);
        }
        pFVar10 = (this->Entries).AllocatorInstance.Data + uVar17;
        *piVar1 = iVar8 + 1;
        memmove(pFVar10 + 0x20,pFVar10,(longlong)(int)(iVar8 - uVar18) << 5);
        FEntry::FEntry((FEntry *)((this->Entries).AllocatorInstance.Data + uVar17),pFVar16);
        uVar13 = (ulonglong)(uVar12 + 1);
        local_res10 = local_res10 + 0x20;
      }
      else {
        uVar11 = uVar6;
        if ((int)uVar18 < (this->Entries).ArrayNum) {
          uVar11 = ~uVar18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                    *)(*pcVar4)();
          return pTVar9;
        }
        pFVar10 = (this->Entries).AllocatorInstance.Data;
        uVar11 = uVar6;
        if ((int)uVar12 < (param_1->Entries).ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                    *)(*pcVar4)();
          return pTVar9;
        }
        if (*(int *)((param_1->Entries).AllocatorInstance.Data + local_res10 + 0x18) ==
            *(int *)(pFVar10 + uVar17 + 0x18)) {
          uVar11 = uVar6;
          if ((int)uVar12 < (param_1->Entries).ArrayNum) {
            uVar11 = uVar14;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                      *)(*pcVar4)();
            return pTVar9;
          }
          pFVar10 = (param_1->Entries).AllocatorInstance.Data;
          uVar11 = uVar6;
          if ((int)uVar18 < (this->Entries).ArrayNum) {
            uVar11 = ~uVar18 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                      *)(*pcVar4)();
            return pTVar9;
          }
          TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
          ::operator|=((TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                        *)((this->Entries).AllocatorInstance.Data + uVar17),
                       (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                        *)(pFVar10 + (longlong)(int)uVar12 * 0x20));
          uVar13 = (ulonglong)(uVar12 + 1);
          local_res10 = local_res10 + 0x20;
        }
        uVar15 = (ulonglong)(uVar18 + 1);
        uVar17 = uVar17 + 0x20;
      }
    } while ((int)uVar13 < (param_1->Entries).ArrayNum);
  }
  return this;
}

// CountSetBits @ 14619a460

uint __thiscall
UE::MovieScene::
TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
::CountSetBits(TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
               *this)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  
  local_res20 = (this->Entries).ArrayNum;
  uVar11 = (ulonglong)(int)local_res20;
  uVar5 = 0;
  pFVar10 = (this->Entries).AllocatorInstance.Data;
  pFVar12 = pFVar10 + uVar11 * 0x20;
  do {
    local_res18 = uVar5;
    if ((this->Entries).ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar12) {
      return uVar5;
    }
    iVar9 = 0;
    uVar8 = 0;
    uVar6 = (ulonglong)*(uint *)(pFVar10 + 0x10) -
            ((ulonglong)(*(uint *)(pFVar10 + 0x10) >> 1) & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    bVar3 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
    if (bVar3 != 0) {
      do {
        uVar5 = 0;
        if ((int)uVar8 < *(int *)(pFVar10 + 8)) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
        lVar7 = (longlong)(int)uVar8;
        uVar8 = uVar8 + 1;
        uVar1 = *(ushort *)(*(longlong *)pFVar10 + lVar7 * 2);
        uVar11 = (ulonglong)uVar1 - ((ulonglong)(uVar1 >> 1) & 0x5555555555555555);
        uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
        iVar9 = iVar9 + (uint)(byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) *
                                     0x101010101010101 >> 0x38);
      } while (uVar8 < bVar3);
      uVar11 = (ulonglong)local_res20;
      uVar5 = local_res18;
    }
    uVar5 = uVar5 + iVar9;
    pFVar10 = pFVar10 + 0x20;
  } while( true );
}

// IsBitSet @ 1461bb920

bool __thiscall
UE::MovieScene::
TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
::IsBitSet(TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
           *this,uint param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(this->Entries).ArrayNum;
  pFVar7 = (this->Entries).AllocatorInstance.Data;
  uVar5 = 0;
  if (0 < lVar8) {
    pFVar4 = pFVar7 + 0x18;
    uVar6 = uVar5;
    do {
      if (*(uint *)pFVar4 == param_1 >> 9) {
        pFVar7 = pFVar7 + (longlong)(int)uVar6 * 0x20;
        uVar3 = 1 << ((byte)(param_1 >> 4) & 0x1f);
        uVar1 = *(uint *)&pFVar7[0x10].field_0x0;
        if ((uVar3 & uVar1) == 0) {
          return false;
        }
        uVar1 = uVar3 - 1 & uVar1;
        uVar5 = (ulonglong)uVar1 - ((ulonglong)(uVar1 >> 1) & 0x5555555555555555);
        uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
        uVar2 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                          ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)pFVar7,
                           (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) *
                                        0x101010101010101 >> 0x38));
        return (uVar2 >> ((ushort)param_1 & 0xf) & 1) != 0;
      }
      if (param_1 >> 9 <= *(uint *)pFVar4) {
        return false;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar5 = uVar5 + 1;
      pFVar4 = pFVar4 + 0x20;
    } while ((longlong)uVar5 < lVar8);
  }
  return false;
}

// SetBit @ 1461d1b90

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
::SetBit(TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
         *this,uint param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ESparseBitSetBitResult EVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
  *pTVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  
  iVar4 = (this->Entries).ArrayNum;
  uVar8 = 0;
  pFVar10 = (this->Entries).AllocatorInstance.Data;
  uVar14 = param_1 >> 9;
  uVar11 = uVar14 * -0x200 + param_1;
  if (0 < iVar4) {
    pFVar7 = pFVar10 + 0x18;
    uVar13 = uVar8;
    do {
      uVar12 = (uint)uVar13;
      if (*(uint *)pFVar7 == uVar14) {
        EVar6 = TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                ::SetBit((TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                          *)(pFVar10 + (longlong)(int)uVar12 * 0x20),uVar11);
        return EVar6;
      }
      if (uVar14 <= *(uint *)pFVar7) {
        piVar1 = &(this->Entries).ArrayMax;
        if (iVar4 == *piVar1) {
          iVar4 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,(ForAnyElementType *)this,piVar1);
          (this->Entries).ArrayNum = iVar4;
        }
        iVar4 = (this->Entries).ArrayNum;
        pFVar10 = (this->Entries).AllocatorInstance.Data;
        (this->Entries).ArrayNum = iVar4 + 1;
        pFVar10 = pFVar10 + (longlong)(int)uVar12 * 0x20;
        memmove(pFVar10 + 0x20,pFVar10,(longlong)(int)(iVar4 - uVar12) << 5);
        uVar5 = 0;
        if ((int)uVar12 < (this->Entries).ArrayNum) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar6 = (*pcVar2)();
          return EVar6;
        }
        pTVar9 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                  *)((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20);
        (pTVar9->Buckets).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar9->Buckets).Storage.ArrayNum = 0;
        (pTVar9->Buckets).Storage.ArrayMax = 0;
        pTVar9->BucketHash = 0;
        *(uint *)&pTVar9[1].Buckets.Storage.AllocatorInstance.Data = uVar14;
        TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
        ::SetBit(pTVar9,uVar11);
        return NewlySet;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar8 = uVar8 + 1;
      pFVar7 = pFVar7 + 0x20;
    } while ((longlong)uVar8 < (longlong)iVar4);
  }
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
    (this->Entries).ArrayNum = iVar4;
  }
  (this->Entries).ArrayNum = iVar4 + 1;
  pTVar9 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
            *)((this->Entries).AllocatorInstance.Data + (longlong)iVar4 * 0x20);
  (pTVar9->Buckets).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pTVar9->Buckets).Storage.ArrayNum = 0;
  (pTVar9->Buckets).Storage.ArrayMax = 0;
  pTVar9->BucketHash = 0;
  *(uint *)&pTVar9[1].Buckets.Storage.AllocatorInstance.Data = uVar14;
  TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
  ::SetBit(pTVar9,uVar11);
  return NewlySet;
}

// CountSetBits @ 1462a8e30

uint __thiscall
UE::MovieScene::
TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::CountSetBits(TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
               *this)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  
  local_res20 = (this->Entries).ArrayNum;
  uVar11 = (ulonglong)(int)local_res20;
  uVar4 = 0;
  pFVar10 = (this->Entries).AllocatorInstance.Data;
  pFVar12 = pFVar10 + uVar11 * 0x30;
  do {
    local_res18 = uVar4;
    if ((this->Entries).ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>::FEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar12) {
      return uVar4;
    }
    iVar9 = 0;
    uVar8 = 0;
    uVar6 = (ulonglong)(byte)pFVar10[0x20] -
            ((ulonglong)((byte)pFVar10[0x20] >> 1) & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    bVar2 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
    if (bVar2 != 0) {
      do {
        uVar4 = 0;
        if ((int)uVar8 < *(int *)(pFVar10 + 0x18)) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        pFVar7 = pFVar10;
        if (*(FScriptContainerElement **)(pFVar10 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar7 = *(FScriptContainerElement **)(pFVar10 + 0x10);
        }
        lVar5 = (longlong)(int)uVar8;
        uVar8 = uVar8 + 1;
        uVar11 = (ulonglong)*(uint *)(pFVar7 + lVar5 * 4) -
                 ((ulonglong)(*(uint *)(pFVar7 + lVar5 * 4) >> 1) & 0x5555555555555555);
        uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
        iVar9 = iVar9 + (uint)(byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) *
                                     0x101010101010101 >> 0x38);
      } while (uVar8 < bVar2);
      uVar11 = (ulonglong)local_res20;
      uVar4 = local_res18;
    }
    uVar4 = uVar4 + iVar9;
    pFVar10 = pFVar10 + 0x30;
  } while( true );
}

// CountSetBits @ 1462a9050

uint __thiscall
UE::MovieScene::
TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::CountSetBits(TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
               *this)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  
  local_res20 = (this->Entries).ArrayNum;
  uVar11 = (ulonglong)(int)local_res20;
  uVar4 = 0;
  pFVar10 = (this->Entries).AllocatorInstance.Data;
  pFVar12 = pFVar10 + uVar11 * 0x30;
  do {
    local_res18 = uVar4;
    if ((this->Entries).ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>::FEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar12) {
      return uVar4;
    }
    iVar9 = 0;
    uVar8 = 0;
    uVar6 = (ulonglong)*(ushort *)(pFVar10 + 0x20) -
            ((ulonglong)(*(ushort *)(pFVar10 + 0x20) >> 1) & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    bVar2 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
    if (bVar2 != 0) {
      do {
        uVar4 = 0;
        if ((int)uVar8 < *(int *)(pFVar10 + 0x18)) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        pFVar7 = pFVar10;
        if (*(FScriptContainerElement **)(pFVar10 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar7 = *(FScriptContainerElement **)(pFVar10 + 0x10);
        }
        lVar5 = (longlong)(int)uVar8;
        uVar8 = uVar8 + 1;
        uVar11 = (ulonglong)*(uint *)(pFVar7 + lVar5 * 4) -
                 ((ulonglong)(*(uint *)(pFVar7 + lVar5 * 4) >> 1) & 0x5555555555555555);
        uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
        iVar9 = iVar9 + (uint)(byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) *
                                     0x101010101010101 >> 0x38);
      } while (uVar8 < bVar2);
      uVar11 = (ulonglong)local_res20;
      uVar4 = local_res18;
    }
    uVar4 = uVar4 + iVar9;
    pFVar10 = pFVar10 + 0x30;
  } while( true );
}

// CountSetBits @ 1462a9270

uint __thiscall
UE::MovieScene::
TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::CountSetBits(TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
               *this)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  
  local_res20 = (this->Entries).ArrayNum;
  uVar11 = (ulonglong)(int)local_res20;
  uVar4 = 0;
  pFVar10 = (this->Entries).AllocatorInstance.Data;
  pFVar12 = pFVar10 + uVar11 * 0x30;
  do {
    local_res18 = uVar4;
    if ((this->Entries).ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>::FEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar12) {
      return uVar4;
    }
    iVar9 = 0;
    uVar8 = 0;
    uVar6 = (ulonglong)*(uint *)(pFVar10 + 0x20) -
            ((ulonglong)(*(uint *)(pFVar10 + 0x20) >> 1) & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    bVar2 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
    if (bVar2 != 0) {
      do {
        uVar4 = 0;
        if ((int)uVar8 < *(int *)(pFVar10 + 0x18)) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        pFVar7 = pFVar10;
        if (*(FScriptContainerElement **)(pFVar10 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar7 = *(FScriptContainerElement **)(pFVar10 + 0x10);
        }
        lVar5 = (longlong)(int)uVar8;
        uVar8 = uVar8 + 1;
        uVar11 = (ulonglong)*(uint *)(pFVar7 + lVar5 * 4) -
                 ((ulonglong)(*(uint *)(pFVar7 + lVar5 * 4) >> 1) & 0x5555555555555555);
        uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
        iVar9 = iVar9 + (uint)(byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) *
                                     0x101010101010101 >> 0x38);
      } while (uVar8 < bVar2);
      uVar11 = (ulonglong)local_res20;
      uVar4 = local_res18;
    }
    uVar4 = uVar4 + iVar9;
    pFVar10 = pFVar10 + 0x30;
  } while( true );
}

// CountSetBits @ 1462a9490

uint __thiscall
UE::MovieScene::
TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::CountSetBits(TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
               *this)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  
  local_res20 = (this->Entries).ArrayNum;
  uVar11 = (ulonglong)(int)local_res20;
  uVar4 = 0;
  pFVar10 = (this->Entries).AllocatorInstance.Data;
  pFVar12 = pFVar10 + uVar11 * 0x30;
  do {
    local_res18 = uVar4;
    if ((this->Entries).ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>::FEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar12) {
      return uVar4;
    }
    iVar9 = 0;
    uVar8 = 0;
    uVar6 = *(ulonglong *)(pFVar10 + 0x20) -
            (*(ulonglong *)(pFVar10 + 0x20) >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    bVar2 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
    if (bVar2 != 0) {
      do {
        uVar4 = 0;
        if ((int)uVar8 < *(int *)(pFVar10 + 0x18)) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        pFVar7 = pFVar10;
        if (*(FScriptContainerElement **)(pFVar10 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar7 = *(FScriptContainerElement **)(pFVar10 + 0x10);
        }
        lVar5 = (longlong)(int)uVar8;
        uVar8 = uVar8 + 1;
        uVar11 = (ulonglong)*(uint *)(pFVar7 + lVar5 * 4) -
                 ((ulonglong)(*(uint *)(pFVar7 + lVar5 * 4) >> 1) & 0x5555555555555555);
        uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
        iVar9 = iVar9 + (uint)(byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) *
                                     0x101010101010101 >> 0x38);
      } while (uVar8 < bVar2);
      uVar11 = (ulonglong)local_res20;
      uVar4 = local_res18;
    }
    uVar4 = uVar4 + iVar9;
    pFVar10 = pFVar10 + 0x30;
  } while( true );
}

