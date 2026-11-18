// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// Add @ 143899360

FPendingSpatialData * __thiscall
Chaos::FPendingSpatialInternalDataQueue::Add
          (FPendingSpatialInternalDataQueue *this,int param_1,FUniqueIdx param_2,
          EPendingSpatialDataOperation param_3)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FPendingSpatialData *pFVar10;
  uint *puVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  FUniqueIdx local_res18 [2];
  EPendingSpatialDataOperation local_res20;
  FScriptContainerElement local_58 [8];
  longlong local_50;
  
  piVar1 = &(this->PendingDataArrays).ArrayNum;
  local_res18[0].Idx = param_2.Idx;
  local_res20 = param_3;
  if ((this->PendingDataArrays).ArrayNum == 0) {
    if ((param_1 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BatchIndex == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PendingSpatialData.h"
                           ,0x67,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPendingSpatialData *)(*pcVar4)();
      return pFVar10;
    }
    iVar9 = *piVar1;
    if (iVar9 < 1) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1 - iVar9,(ForAnyElementType *)this,piVar1,
                         &(this->PendingDataArrays).ArrayMax);
      memset((this->PendingDataArrays).AllocatorInstance.Data + (longlong)iVar6 * 0x10,0,
             (longlong)(1 - iVar9) << 4);
    }
    else if (1 < iVar9) {
      iVar9 = iVar9 + -1;
      if (iVar9 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPendingSpatialData *)(*pcVar4)();
          return pFVar10;
        }
      }
      else if (iVar9 == 0) goto LAB_143899479;
      TArray<TArray<Chaos::FPendingSpatialData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(&this->PendingDataArrays,1,iVar9);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(ForAnyElementType *)this,*piVar1,&(this->PendingDataArrays).ArrayMax);
    }
  }
LAB_143899479:
  iVar9 = (this->Duplicated).ArrayNum;
  if ((*piVar1 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FPendingSpatialData *)(*pcVar4)();
    return pFVar10;
  }
  if ((*(int *)((this->PendingDataArrays).AllocatorInstance.Data + 8) != iVar9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingDataArrays[0].Num() == Duplicated.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PendingSpatialData.h"
                         ,0x6b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FPendingSpatialData *)(*pcVar4)();
    return pFVar10;
  }
  puVar11 = (uint *)TArrayAsMap<Chaos::FUniqueIdx,int>::Find
                              (&this->ParticleToPendingData,local_res18);
  uVar8 = 0;
  uVar15 = 0;
  if (param_1 == 0) {
    if (puVar11 != (uint *)0x0) {
      if ((*piVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FPendingSpatialData *)(*pcVar4)();
        return pFVar10;
      }
      if ((*(int *)((this->PendingDataArrays).AllocatorInstance.Data + 8) !=
           (this->Duplicated).ArrayNum) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingDataArrays[0].Num() == Duplicated.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PendingSpatialData.h"
                             ,0x7c,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FPendingSpatialData *)(*pcVar4)();
        return pFVar10;
      }
      if ((*piVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FPendingSpatialData *)(*pcVar4)();
        return pFVar10;
      }
      uVar8 = *puVar11;
      pFVar13 = (this->PendingDataArrays).AllocatorInstance.Data;
      if ((int)uVar8 < *(int *)(pFVar13 + 8)) {
        uVar15 = ~uVar8 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FPendingSpatialData *)(*pcVar4)();
        return pFVar10;
      }
      return (FPendingSpatialData *)(*(longlong *)pFVar13 + (longlong)(int)uVar8 * 0x48);
    }
    if ((*piVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPendingSpatialData *)(*pcVar4)();
      return pFVar10;
    }
    uVar8 = TArray<Chaos::FPendingSpatialData,TSizedDefaultAllocator<32>_>::AddDefaulted
                      ((TArray<Chaos::FPendingSpatialData,TSizedDefaultAllocator<32>_> *)
                       (this->PendingDataArrays).AllocatorInstance.Data,1);
    puVar11 = (uint *)TArrayAsMap<Chaos::FUniqueIdx,int>::Add
                                (&this->ParticleToPendingData,local_res18);
    *puVar11 = uVar8;
    if ((*piVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPendingSpatialData *)(*pcVar4)();
      return pFVar10;
    }
    pFVar13 = (this->PendingDataArrays).AllocatorInstance.Data;
    uVar7 = uVar15;
    if ((int)uVar8 < *(int *)(pFVar13 + 8)) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPendingSpatialData *)(*pcVar4)();
      return pFVar10;
    }
    local_58[0] = (FScriptContainerElement)0x0;
    lVar3 = (longlong)(int)uVar8 * 0x48;
    *(EPendingSpatialDataOperation *)(*(longlong *)pFVar13 + 0x40 + lVar3) = local_res20;
    pFVar13 = (this->Duplicated).AllocatorInstance.Data;
    if (((pFVar13 <= local_58) && (local_58 < pFVar13 + (this->Duplicated).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPendingSpatialData *)(*pcVar4)();
      return pFVar10;
    }
    iVar9 = (this->Duplicated).ArrayNum;
    piVar2 = &(this->Duplicated).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->Duplicated).AllocatorInstance,piVar2);
    }
    (this->Duplicated).ArrayNum = iVar9 + 1;
    (this->Duplicated).AllocatorInstance.Data[iVar9] = local_58[0];
    if ((*piVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPendingSpatialData *)(*pcVar4)();
      return pFVar10;
    }
    if ((*(int *)((this->PendingDataArrays).AllocatorInstance.Data + 8) !=
         (this->Duplicated).ArrayNum) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingDataArrays[0].Num() == Duplicated.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PendingSpatialData.h"
                           ,0x83,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPendingSpatialData *)(*pcVar4)();
      return pFVar10;
    }
    if ((*piVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPendingSpatialData *)(*pcVar4)();
      return pFVar10;
    }
    pFVar13 = (this->PendingDataArrays).AllocatorInstance.Data;
    if ((int)uVar8 < *(int *)(pFVar13 + 8)) {
      uVar15 = ~uVar8 >> 0x1f;
    }
  }
  else {
    if (puVar11 != (uint *)0x0) {
      uVar7 = *puVar11;
      uVar14 = uVar8;
      if ((int)uVar7 < (this->Duplicated).ArrayNum) {
        uVar14 = ~uVar7 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FPendingSpatialData *)(*pcVar4)();
        return pFVar10;
      }
      (this->Duplicated).AllocatorInstance.Data[(int)uVar7] = (FScriptContainerElement)0x1;
    }
    uVar14 = (uint)~param_1 >> 0x1f;
    uVar7 = uVar8;
    if (param_1 < *piVar1) {
      uVar7 = uVar14;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPendingSpatialData *)(*pcVar4)();
      return pFVar10;
    }
    lVar12 = (longlong)param_1 * 0x10;
    pFVar13 = (this->PendingDataArrays).AllocatorInstance.Data + lVar12;
    uVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 8),
                       (int *)(pFVar13 + 0xc));
    local_50 = (longlong)(int)uVar7;
    lVar3 = local_50 * 0x48;
    DefaultConstructItems<Chaos::FPendingSpatialData,int>
              ((void *)(*(longlong *)&pFVar13->field_0x0 + lVar3),1);
    if (param_1 < *piVar1) {
      uVar8 = uVar14;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPendingSpatialData *)(*pcVar4)();
      return pFVar10;
    }
    pFVar13 = (this->PendingDataArrays).AllocatorInstance.Data + lVar12;
    uVar8 = uVar15;
    if ((int)uVar7 < *(int *)(pFVar13 + 8)) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPendingSpatialData *)(*pcVar4)();
      return pFVar10;
    }
    *(EPendingSpatialDataOperation *)(*(longlong *)pFVar13 + 0x40 + lVar3) = local_res20;
    if ((*piVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPendingSpatialData *)(*pcVar4)();
      return pFVar10;
    }
    if ((*(int *)((this->PendingDataArrays).AllocatorInstance.Data + 8) !=
         (this->Duplicated).ArrayNum) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingDataArrays[0].Num() == Duplicated.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PendingSpatialData.h"
                           ,0x75,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPendingSpatialData *)(*pcVar4)();
      return pFVar10;
    }
    uVar8 = uVar15;
    if (param_1 < *piVar1) {
      uVar8 = uVar14;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPendingSpatialData *)(*pcVar4)();
      return pFVar10;
    }
    pFVar13 = (this->PendingDataArrays).AllocatorInstance.Data + lVar12;
    if ((int)uVar7 < *(int *)(pFVar13 + 8)) {
      uVar15 = ~uVar7 >> 0x1f;
    }
  }
  if ((uVar15 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FPendingSpatialData *)(*pcVar4)();
    return pFVar10;
  }
  return (FPendingSpatialData *)(*(longlong *)pFVar13 + lVar3);
}

// Remove @ 1438cae60

void __thiscall
Chaos::FPendingSpatialInternalDataQueue::Remove
          (FPendingSpatialInternalDataQueue *this,FUniqueIdx param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FUniqueIdx FVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FUniqueIdx local_res10 [2];
  
  iVar12 = (this->PendingDataArrays).ArrayNum;
  if (iVar12 != 0) {
    local_res10[0].Idx = param_1.Idx;
    if ((iVar12 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(int *)((this->PendingDataArrays).AllocatorInstance.Data + 8) !=
         (this->Duplicated).ArrayNum) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingDataArrays[0].Num() == Duplicated.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PendingSpatialData.h"
                           ,0x8c,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((this->PendingDataArrays).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->PendingDataArrays).AllocatorInstance.Data;
    puVar10 = (uint *)TArrayAsMap<Chaos::FUniqueIdx,int>::Find
                                (&this->ParticleToPendingData,local_res10);
    if (puVar10 != (uint *)0x0) {
      iVar12 = *(int *)&pFVar3[8].field_0x0;
      uVar9 = *puVar10;
      if ((int)(uVar9 + 1) < iVar12) {
        uVar8 = 0;
        if ((int)(iVar12 - 1U) < iVar12) {
          uVar8 = ~(iVar12 - 1U) >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = *(uint *)(*(FScriptContainerElement **)&pFVar3->field_0x0 +
                         (longlong)*(int *)&pFVar3[8].field_0x0 * 0x48 + -0x38);
        if ((uVar8 == 0xffffffff) &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7431867033672745179>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                               ,0xdb,"Payload.IsValid()"), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar13 = 0;
        if ((int)uVar8 < (this->ParticleToPendingData).Entries.ArrayNum) {
          uVar13 = ~uVar8 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)((this->ParticleToPendingData).Entries.AllocatorInstance.Data +
                 (longlong)(int)uVar8 * 8) = uVar9;
      }
      uVar13 = ~uVar9;
      uVar8 = 0;
      if ((int)uVar9 < (this->Duplicated).ArrayNum) {
        uVar8 = uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar2 = (this->Duplicated).ArrayNum;
      pFVar4 = (this->Duplicated).AllocatorInstance.Data;
      iVar12 = iVar2 + uVar13;
      if (1 < iVar12) {
        iVar12 = 1;
      }
      if (iVar12 != 0) {
        memmove(pFVar4 + (int)uVar9,pFVar4 + (iVar2 - iVar12),(longlong)iVar12);
      }
      piVar1 = &(this->Duplicated).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,&(this->Duplicated).AllocatorInstance,(this->Duplicated).ArrayNum,
                 &(this->Duplicated).ArrayMax);
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&pFVar3[8].field_0x0) {
        uVar8 = uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = *(int *)&pFVar3[8].field_0x0 + uVar13;
      if (1 < iVar12) {
        iVar12 = 1;
      }
      if (iVar12 != 0) {
        memmove(*(FScriptContainerElement **)&pFVar3->field_0x0 + (longlong)(int)uVar9 * 0x48,
                *(FScriptContainerElement **)&pFVar3->field_0x0 +
                (longlong)(*(int *)&pFVar3[8].field_0x0 - iVar12) * 0x48,(longlong)iVar12 * 0x48);
      }
      iVar12 = *(int *)&pFVar3[8].field_0x0 + -1;
      *(int *)&pFVar3[8].field_0x0 = iVar12;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,(ForAnyElementType *)pFVar3,iVar12,(int *)(pFVar3 + 0xc));
      FVar6.Idx = local_res10[0].Idx;
      lVar11 = (longlong)local_res10[0].Idx;
      if ((local_res10[0].Idx == 0xffffffff) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7431867033672745179>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                             ,0xdb,"Payload.IsValid()"), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = 0;
      if (FVar6.Idx < (this->ParticleToPendingData).Entries.ArrayNum) {
        uVar9 = (uint)~FVar6.Idx >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(ulonglong *)((this->ParticleToPendingData).Entries.AllocatorInstance.Data + lVar11 * 8) =
           CONCAT44(uStackX_c,local_res8) & 0xffffff00ffffffff;
    }
    if (((this->PendingDataArrays).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(int *)((this->PendingDataArrays).AllocatorInstance.Data + 8) !=
         (this->Duplicated).ArrayNum) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingDataArrays[0].Num() == Duplicated.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PendingSpatialData.h"
                           ,0x9b,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// CleanUpDuplicated @ 143d470a0

void __thiscall
Chaos::FPendingSpatialInternalDataQueue::CleanUpDuplicated(FPendingSpatialInternalDataQueue *this)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  bool local_res8 [8];
  FUniqueIdx local_res10 [2];
  ForAnyElementType local_48;
  int local_40;
  int iStack_3c;
  
  iVar1 = (this->PendingDataArrays).ArrayNum;
  if (iVar1 != 0) {
    uVar8 = 0;
    if ((iVar1 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(int *)((this->PendingDataArrays).AllocatorInstance.Data + 8) !=
         (this->Duplicated).ArrayNum) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingDataArrays[0].Num() == Duplicated.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PendingSpatialData.h"
                           ,0xa3,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = (this->ParticleToPendingData).Entries.ArrayMax;
    (this->ParticleToPendingData).Entries.ArrayNum = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)&this->ParticleToPendingData,0,
                 &(this->ParticleToPendingData).Entries.ArrayMax);
    }
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    iStack_3c = 0;
    uVar11 = uVar8;
    uVar13 = uVar8;
    if (0 < (this->Duplicated).ArrayNum) {
      do {
        uVar10 = (uint)uVar8;
        uVar12 = ~uVar10 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar10 < (this->Duplicated).ArrayNum) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((this->Duplicated).AllocatorInstance.Data[uVar13] == (FScriptContainerElement)0x0) {
          if (((this->PendingDataArrays).ArrayNum < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar9 = (this->PendingDataArrays).AllocatorInstance.Data;
          uVar5 = 0;
          if ((int)uVar10 < *(int *)(pFVar9 + 8)) {
            uVar5 = uVar12;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar9 = (FScriptContainerElement *)(*(longlong *)pFVar9 + uVar11);
          if (((local_48.Data <= pFVar9) && (pFVar9 < local_48.Data + (longlong)iStack_3c * 0x48))
             && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_40 == iStack_3c) {
            local_40 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x848,&local_48,&iStack_3c);
          }
          lVar7 = (longlong)local_40;
          local_40 = local_40 + 1;
          uVar3 = *(undefined8 *)(pFVar9 + 8);
          *(undefined8 *)(local_48.Data + lVar7 * 0x48) = *(undefined8 *)pFVar9;
          *(undefined8 *)(local_48.Data + lVar7 * 0x48 + 8) = uVar3;
          uVar3 = *(undefined8 *)(pFVar9 + 0x18);
          *(undefined8 *)(local_48.Data + lVar7 * 0x48 + 0x10) = *(undefined8 *)(pFVar9 + 0x10);
          *(undefined8 *)(local_48.Data + lVar7 * 0x48 + 0x10 + 8) = uVar3;
          uVar3 = *(undefined8 *)(pFVar9 + 0x28);
          *(undefined8 *)(local_48.Data + lVar7 * 0x48 + 0x20) = *(undefined8 *)(pFVar9 + 0x20);
          *(undefined8 *)(local_48.Data + lVar7 * 0x48 + 0x20 + 8) = uVar3;
          uVar3 = *(undefined8 *)(pFVar9 + 0x38);
          *(undefined8 *)(local_48.Data + lVar7 * 0x48 + 0x30) = *(undefined8 *)(pFVar9 + 0x30);
          *(undefined8 *)(local_48.Data + lVar7 * 0x48 + 0x30 + 8) = uVar3;
          *(undefined8 *)(local_48.Data + lVar7 * 0x48 + 0x40) = *(undefined8 *)(pFVar9 + 0x40);
          if (((this->PendingDataArrays).ArrayNum < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar9 = (this->PendingDataArrays).AllocatorInstance.Data;
          uVar5 = 0;
          if ((int)uVar10 < *(int *)(pFVar9 + 8)) {
            uVar5 = uVar12;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_res10[0].Idx = *(int *)(uVar11 + 0x10 + *(longlong *)pFVar9);
          puVar6 = (uint *)TArrayAsMap<Chaos::FUniqueIdx,int>::Add
                                     (&this->ParticleToPendingData,local_res10);
          *puVar6 = uVar10;
        }
        uVar8 = (ulonglong)(uVar10 + 1);
        uVar11 = uVar11 + 0x48;
        uVar13 = uVar13 + 1;
      } while ((int)(uVar10 + 1) < (this->Duplicated).ArrayNum);
    }
    local_res8[0] = false;
    TArray<bool,TSizedDefaultAllocator<32>_>::Init(&this->Duplicated,local_res8,local_40);
    if (((this->PendingDataArrays).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = (this->PendingDataArrays).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)&local_48) {
      if (*(void **)&pFVar9->field_0x0 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar9->field_0x0);
      }
      *(FScriptContainerElement **)&pFVar9->field_0x0 = local_48.Data;
      local_48.Data = (FScriptContainerElement *)0x0;
      *(int *)&pFVar9[8].field_0x0 = local_40;
      *(int *)(pFVar9 + 0xc) = iStack_3c;
      local_40 = 0;
      iStack_3c = 0;
    }
    if (((this->PendingDataArrays).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(int *)((this->PendingDataArrays).AllocatorInstance.Data + 8) !=
         (this->Duplicated).ArrayNum) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingDataArrays[0].Num() == Duplicated.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PendingSpatialData.h"
                           ,0xb1,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// Reset @ 143d68e10

void __thiscall
Chaos::FPendingSpatialInternalDataQueue::Reset(FPendingSpatialInternalDataQueue *this)

{
  int *piVar1;
  int iVar2;
  TArray<Chaos::FPendingSpatialData,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  this->KinematicBatchStartIndex = 0;
  iVar2 = (this->PendingDataArrays).ArrayNum;
  pFVar4 = (this->PendingDataArrays).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->PendingDataArrays).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TArray<Chaos::FPendingSpatialData,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    *(undefined4 *)&pFVar4[8].field_0x0 = 0;
    if (*(int *)(pFVar4 + 0xc) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)pFVar4,0,(int *)(pFVar4 + 0xc));
    }
    pFVar4 = pFVar4 + 0x10;
  }
  piVar1 = &(this->PendingDataArrays).ArrayMax;
  pTVar3 = (TArray<Chaos::FPendingSpatialData,TSizedDefaultAllocator<32>_> *)
           (this->PendingDataArrays).AllocatorInstance.Data;
  iVar2 = (this->PendingDataArrays).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<Chaos::FPendingSpatialData,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->PendingDataArrays).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<Chaos::FPendingSpatialData,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->PendingDataArrays).ArrayNum = 0;
  }
  iVar2 = (this->ParticleToPendingData).Entries.ArrayMax;
  (this->ParticleToPendingData).Entries.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->ParticleToPendingData,0,
               &(this->ParticleToPendingData).Entries.ArrayMax);
  }
  (this->Duplicated).ArrayNum = 0;
  if ((this->Duplicated).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Duplicated).AllocatorInstance,0,&(this->Duplicated).ArrayMax);
  }
  return;
}

