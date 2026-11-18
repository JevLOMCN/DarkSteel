// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FFreeBlockList @ 141677990

FFreeBlockList * __thiscall
FMallocBinnedCommonBase::FFreeBlockList::FFreeBlockList(FFreeBlockList *this)

{
  (this->PartialBundle).Head = (FBundleNode *)0x0;
  (this->PartialBundle).Count = 0;
  (this->FullBundle).Head = (FBundleNode *)0x0;
  (this->FullBundle).Count = 0;
  return this;
}

// ObtainPartial @ 1416b4ab0

bool __thiscall
FMallocBinnedGPU::FFreeBlockList::ObtainPartial
          (FFreeBlockList *this,FArenaParams *param_1,FGlobalRecycler *param_2,uint param_3)

{
  longlong lVar1;
  FBundleNode *pFVar2;
  byte bVar3;
  FBundleNode *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar10;
  ulonglong uVar9;
  
  if ((this->PartialBundle).Head != (FBundleNode *)0x0) {
    return true;
  }
  uVar9 = 0;
  (this->PartialBundle).Count = 0;
  bVar3 = param_1->MaxGlobalBundles;
  if (bVar3 != 0) {
    do {
      uVar8 = 0;
      if ((int)param_3 < (param_2->Bundles).ArrayNum) {
        uVar8 = ~param_3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      lVar1 = (uVar9 + (longlong)(int)param_3 * 8) * 8;
      pFVar4 = *(FBundleNode **)((param_2->Bundles).AllocatorInstance.Data + lVar1);
      if (pFVar4 != (FBundleNode *)0x0) {
        uVar8 = 0;
        if ((int)param_3 < (param_2->Bundles).ArrayNum) {
          uVar8 = ~param_3 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar10 = (param_2->Bundles).AllocatorInstance.Data + lVar1;
        if (((ulonglong)pFVar10 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchangePointer requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        pFVar2 = *(FBundleNode **)pFVar10;
        if (pFVar4 == pFVar2) {
          *(longlong *)pFVar10 = 0;
        }
        UNLOCK();
        if (pFVar4 == pFVar2) {
          (this->PartialBundle).Head = pFVar4;
          (this->PartialBundle).Count = (pFVar4->field1_0x8).Count;
          (pFVar4->field1_0x8).NextBundle = (FBundleNode *)0x0;
          return true;
        }
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((uVar8 < bVar3) && (uVar8 < 8));
  }
  (this->PartialBundle).Head = (FBundleNode *)0x0;
  return false;
}

// PopBundles @ 1416b65c0

FBundleNode * __thiscall
FMallocBinnedCommonBase::FFreeBlockList::PopBundles(FFreeBlockList *this,uint param_1)

{
  FBundleNode *pFVar1;
  FBundleNode *pFVar2;
  FBundleNode FVar3;
  FBundleNode *pFVar4;
  FBundleNode *pFVar5;
  
  pFVar1 = (this->PartialBundle).Head;
  if (pFVar1 != (FBundleNode *)0x0) {
    (this->PartialBundle).Head = (FBundleNode *)0x0;
    (this->PartialBundle).Count = 0;
  }
  pFVar2 = (this->FullBundle).Head;
  if (pFVar2 != (FBundleNode *)0x0) {
    (this->FullBundle).Head = (FBundleNode *)0x0;
    (this->FullBundle).Count = 0;
  }
  if (pFVar1 == (FBundleNode *)0x0) {
    return pFVar2;
  }
  FVar3 = *pFVar1;
  pFVar4 = pFVar1;
  while (pFVar5 = (FBundleNode *)((ulonglong)FVar3 & 0xffffffffffff), pFVar5 != (FBundleNode *)0x0)
  {
    pFVar4 = pFVar5;
    FVar3 = *pFVar5;
  }
  *pFVar4 = (FBundleNode)
            (((ulonglong)FVar3 ^ (ulonglong)pFVar2) & 0xffff000000000000 ^ (ulonglong)pFVar2);
  return pFVar1;
}

// PopBundles @ 1416b6640

FBundleNode * __thiscall
FMallocBinnedGPU::FFreeBlockList::PopBundles(FFreeBlockList *this,uint param_1)

{
  FBundleNode *pFVar1;
  FBundleNode *pFVar2;
  
  pFVar1 = (this->PartialBundle).Head;
  if (pFVar1 != (FBundleNode *)0x0) {
    (this->PartialBundle).Head = (FBundleNode *)0x0;
    (this->PartialBundle).Count = 0;
    (pFVar1->field1_0x8).NextBundle = (FBundleNode *)0x0;
  }
  pFVar2 = (this->FullBundle).Head;
  if (pFVar2 != (FBundleNode *)0x0) {
    (this->FullBundle).Head = (FBundleNode *)0x0;
    (this->FullBundle).Count = 0;
    (pFVar2->field1_0x8).NextBundle = (FBundleNode *)0x0;
  }
  if (pFVar1 != (FBundleNode *)0x0) {
    (pFVar1->field1_0x8).NextBundle = pFVar2;
    return pFVar1;
  }
  return pFVar2;
}

// PopFromFront @ 1416b6690

void * __thiscall
FMallocBinnedGPU::FFreeBlockList::PopFromFront
          (FFreeBlockList *this,FMallocBinnedGPU *param_1,uint param_2)

{
  uint *puVar1;
  FBundleNode *pFVar2;
  FBundleNode *pFVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  void *pvVar8;
  
  if ((this->FullBundle).Head != (FBundleNode *)0x0 &&
      (this->PartialBundle).Head == (FBundleNode *)0x0) {
    pFVar2 = (this->FullBundle).Head;
    uVar5 = (this->FullBundle).Count;
    uVar6 = *(undefined4 *)&(this->FullBundle).field_0xc;
    (this->FullBundle).Head = (FBundleNode *)0x0;
    (this->PartialBundle).Head = pFVar2;
    (this->PartialBundle).Count = uVar5;
    *(undefined4 *)&(this->PartialBundle).field_0xc = uVar6;
    (this->FullBundle).Count = 0;
  }
  pFVar2 = (this->PartialBundle).Head;
  if (pFVar2 != (FBundleNode *)0x0) {
    puVar1 = &(this->PartialBundle).Count;
    *puVar1 = *puVar1 - 1;
    (this->PartialBundle).Head = pFVar2->NextNodeInCurrentBundle;
    pFVar3 = pFVar2[1].field1_0x8.NextBundle;
    if (pFVar3 == (FBundleNode *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                         ,0x123,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar4)();
        return pvVar8;
      }
    }
    ::operator_delete(pFVar2,0x20);
    LOCK();
    param_1->GPUProxyMemory = (TAtomic<__int64>)((longlong)param_1->GPUProxyMemory + -0x20);
    UNLOCK();
    return pFVar3;
  }
  return (void *)0x0;
}

// RecyleFull @ 1416bb190

FBundleNode * __thiscall
FMallocBinnedGPU::FFreeBlockList::RecyleFull
          (FFreeBlockList *this,FArenaParams *param_1,FGlobalRecycler *param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FBundleNode *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  FBundleNode *pFVar9;
  
  pFVar5 = (this->FullBundle).Head;
  pFVar9 = (FBundleNode *)0x0;
  if (pFVar5 != (FBundleNode *)0x0) {
    uVar7 = 0;
    (pFVar5->field1_0x8).Count = (this->FullBundle).Count;
    bVar2 = param_1->MaxGlobalBundles;
    pFVar5 = (this->FullBundle).Head;
    if (bVar2 != 0) {
      do {
        uVar6 = 0;
        if ((int)param_3 < (param_2->Bundles).ArrayNum) {
          uVar6 = ~param_3 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FBundleNode *)(*pcVar3)();
          return pFVar5;
        }
        lVar1 = (uVar7 + (longlong)(int)param_3 * 8) * 8;
        if (*(longlong *)((param_2->Bundles).AllocatorInstance.Data + lVar1) == 0) {
          uVar6 = 0;
          if ((int)param_3 < (param_2->Bundles).ArrayNum) {
            uVar6 = ~param_3 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FBundleNode *)(*pcVar3)();
            return pFVar5;
          }
          pFVar8 = (param_2->Bundles).AllocatorInstance.Data + lVar1;
          if (((ulonglong)pFVar8 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          lVar1 = *(longlong *)pFVar8;
          if (lVar1 == 0) {
            *(FBundleNode **)pFVar8 = pFVar5;
          }
          UNLOCK();
          if (lVar1 == 0) goto LAB_1416bb2ea;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while ((uVar6 < bVar2) && (uVar6 < 8));
    }
    pFVar9 = (this->FullBundle).Head;
    (pFVar9->field1_0x8).NextBundle = (FBundleNode *)0x0;
LAB_1416bb2ea:
    (this->FullBundle).Head = (FBundleNode *)0x0;
    (this->FullBundle).Count = 0;
  }
  return pFVar9;
}

