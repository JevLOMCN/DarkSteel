// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// FUpdateDirtyObjectsBatchHelper @ 144229ca0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FUpdateDirtyObjectsBatchHelper * __thiscall
UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::
FUpdateDirtyObjectsBatchHelper
          (FUpdateDirtyObjectsBatchHelper *this,FNetRefHandleManager *param_1,
          TArray<UE::Net::Private::FReplicationFiltering::FFilterInfo,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUpdateDirtyObjectsBatchHelper *pFVar6;
  void *_Dst;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
  FVar10;
  int iVar11;
  ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
  FVar12;
  undefined1 local_res8 [8];
  
  iVar11 = 0;
  piVar1 = &(this->PerFilterInfos).ArrayNum;
  (this->PerFilterInfos).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
        )0x0;
  piVar2 = &(this->PerFilterInfos).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0x10;
  (this->ObjectIndicesStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectIndicesStorage).ArrayNum = 0;
  (this->ObjectIndicesStorage).ArrayMax = 0;
  this->NetRefHandleManager = param_1;
  uVar8 = param_2->ArrayNum;
  iVar7 = *piVar1;
  if (iVar7 < (int)uVar8) {
    iVar5 = Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>_>
                      (0x10,8,uVar8 - iVar7,
                       (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
                        *)this,piVar1,piVar2);
    FVar12 = (this->PerFilterInfos).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
              )this;
    if (FVar12 != (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
                   )0x0) {
      FVar10 = FVar12;
    }
    DefaultConstructItems<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo,int>
              ((void *)((longlong)iVar5 * 0x10 + (longlong)FVar10),uVar8 - iVar7);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar7) {
      uVar9 = iVar7 - uVar8;
      if (((int)(uVar9 | uVar8) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FUpdateDirtyObjectsBatchHelper *)(*pcVar3)();
        return pFVar6;
      }
      if (uVar9 != 0) {
        FVar12 = (this->PerFilterInfos).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
                  )this;
        if (FVar12 != (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
                       )0x0) {
          FVar10 = FVar12;
        }
        _Dst = (void *)((longlong)(int)uVar8 * 0x10 + (longlong)FVar10);
        iVar7 = (*piVar1 - uVar8) - uVar9;
        if (iVar7 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar9 * 0x10 + (longlong)_Dst),(longlong)iVar7 << 4);
        }
        *piVar1 = *piVar1 - uVar9;
      }
    }
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->ObjectIndicesStorage,uVar8 << 9,Default);
  FVar12 = (this->PerFilterInfos).AllocatorInstance.SecondaryData;
  iVar7 = *piVar1;
  FVar10 = (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
            )this;
  if (FVar12 != (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
                 )0x0) {
    FVar10 = FVar12;
  }
  FVar12 = (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
            )((longlong)iVar7 * 0x10 + (longlong)FVar10);
  while( true ) {
    if (*piVar1 != iVar7) {
      `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar10 == FVar12) break;
    uVar8 = iVar11 << 9;
    iVar11 = iVar11 + 1;
    *(FScriptContainerElement **)FVar10 =
         (this->ObjectIndicesStorage).AllocatorInstance.Data + (ulonglong)uVar8 * 4;
    FVar10 = (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
              )((longlong)FVar10 + 0x10);
  }
  return this;
}

// PrepareBatch @ 144247e50

void __thiscall
UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::PrepareBatch
          (FUpdateDirtyObjectsBatchHelper *this,uint *param_1,uint param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  uchar *puVar1;
  int *piVar2;
  uint *puVar3;
  FScriptContainerElement FVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong *plVar10;
  ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
  FVar11;
  ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
  FVar12;
  undefined1 local_res18 [16];
  
  piVar2 = &(this->PerFilterInfos).ArrayNum;
  iVar5 = *piVar2;
  FVar12 = (this->PerFilterInfos).AllocatorInstance.SecondaryData;
  FVar11 = (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
            )this;
  if (FVar12 != (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
                 )0x0) {
    FVar11 = FVar12;
  }
  FVar12 = (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
            )((longlong)iVar5 * 0x10 + (longlong)FVar11);
  while( true ) {
    if (*piVar2 != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar11 == FVar12) break;
    puVar1 = (uchar *)((longlong)FVar11 + 8);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FVar11 = (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
              )((longlong)FVar11 + 0x10);
  }
  if (((int)param_2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar3 = param_1 + (int)param_2;
  while( true ) {
    if (param_1 == puVar3) {
      return;
    }
    uVar6 = *param_1;
    uVar9 = 0;
    if ((int)uVar6 < param_3->ArrayNum) {
      uVar9 = ~uVar6 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    FVar4 = (param_3->AllocatorInstance).Data[(int)uVar6];
    if (FVar4 != (FScriptContainerElement)0xff) {
      if ((*piVar2 <= (int)(uint)(byte)FVar4) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar12 = (this->PerFilterInfos).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
                )this;
      if (FVar12 != (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
                     )0x0) {
        FVar11 = FVar12;
      }
      plVar10 = (longlong *)((ulonglong)(byte)FVar4 * 0x10 + (longlong)FVar11);
      if (*plVar10 != 0) {
        *(uint *)(*plVar10 + (ulonglong)*(uint *)(plVar10 + 1) * 4) = uVar6;
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      }
    }
    param_1 = param_1 + 1;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// FUpdateDirtyObjectsBatchHelper @ 1442ae550

FUpdateDirtyObjectsBatchHelper * __thiscall
UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::
FUpdateDirtyObjectsBatchHelper
          (FUpdateDirtyObjectsBatchHelper *this,FNetRefHandleManager *param_1,uint param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Net::FReplicationInstanceProtocol_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  void *_Dst;
  FScriptContainerElement *pFVar4;
  int *piVar5;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
  FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FUpdateDirtyObjectsBatchHelper *pFVar10;
  int *piVar11;
  uint uVar12;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
  FVar13;
  uint uVar14;
  int iVar15;
  undefined1 local_res18 [8];
  
  iVar15 = 0;
  (this->PerPrioritizerInfos).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
        )0x0;
  pTVar1 = &this->ObjectIndicesStorage;
  pTVar2 = &this->InstanceProtocolsStorage;
  piVar3 = &(this->PerPrioritizerInfos).ArrayNum;
  *piVar3 = 0;
  piVar11 = &(this->PerPrioritizerInfos).ArrayMax;
  *piVar11 = 0x10;
  piVar5 = &(this->InstanceProtocolsStorage).ArrayNum;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ObjectIndicesStorage).ArrayNum = 0;
  (this->ObjectIndicesStorage).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar5 = 0;
  (this->InstanceProtocolsStorage).ArrayMax = 0;
  this->NetRefHandleManager = param_1;
  iVar9 = *piVar3;
  if (iVar9 < (int)param_2) {
    Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>_>
              (0x18,8,param_2 - iVar9,
               (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
                *)this,piVar3,piVar11);
  }
  else {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)param_2);
    }
    if ((int)param_2 < iVar9) {
      uVar12 = iVar9 - param_2;
      if (((int)(uVar12 | param_2) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FUpdateDirtyObjectsBatchHelper *)(*pcVar7)();
        return pFVar10;
      }
      if (uVar12 != 0) {
        FVar6 = (this->PerPrioritizerInfos).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
                  )this;
        if (FVar6 != (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
                      )0x0) {
          FVar13 = FVar6;
        }
        _Dst = (void *)((longlong)FVar13 + (longlong)(int)param_2 * 0x18);
        iVar9 = (*piVar3 - uVar12) - param_2;
        if (iVar9 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar12 * 0x18),
                  (longlong)iVar9 * 0x18);
        }
        *piVar3 = *piVar3 - uVar12;
        Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>_>
                  (0x18,8,(ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
                           *)this,*piVar3,&(this->PerPrioritizerInfos).ArrayMax);
      }
    }
  }
  iVar9 = (this->ObjectIndicesStorage).ArrayNum;
  uVar12 = param_2 * 0x200;
  if (iVar9 < (int)uVar12) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar12 - iVar9,&pTVar1->AllocatorInstance,&(this->ObjectIndicesStorage).ArrayNum,
               &(this->ObjectIndicesStorage).ArrayMax);
  }
  else {
    if ((int)uVar12 < 0) goto LAB_1442ae8f5;
    if ((int)uVar12 < iVar9) {
      uVar14 = iVar9 + param_2 * -0x200;
      if (((int)(uVar14 | uVar12) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FUpdateDirtyObjectsBatchHelper *)(*pcVar7)();
        return pFVar10;
      }
      if (uVar14 != 0) {
        pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar12 * 4;
        iVar9 = ((this->ObjectIndicesStorage).ArrayNum - uVar14) + param_2 * -0x200;
        if (iVar9 != 0) {
          memmove(pFVar4,pFVar4 + (longlong)(int)uVar14 * 4,(longlong)iVar9 << 2);
        }
        piVar11 = &(this->ObjectIndicesStorage).ArrayNum;
        *piVar11 = *piVar11 - uVar14;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar1->AllocatorInstance,*piVar11,&(this->ObjectIndicesStorage).ArrayMax);
      }
    }
  }
  iVar9 = *piVar5;
  if (iVar9 < (int)uVar12) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12 - iVar9,&pTVar2->AllocatorInstance,piVar5,
               &(this->InstanceProtocolsStorage).ArrayMax);
  }
  else {
    if ((int)uVar12 < 0) {
LAB_1442ae8f5:
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar9) {
      uVar14 = iVar9 + param_2 * -0x200;
      if (((int)(uVar14 | uVar12) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FUpdateDirtyObjectsBatchHelper *)(*pcVar7)();
        return pFVar10;
      }
      if (uVar14 != 0) {
        pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar12 * 8;
        iVar9 = (*piVar5 - uVar14) + param_2 * -0x200;
        if (iVar9 != 0) {
          memmove(pFVar4,pFVar4 + (longlong)(int)uVar14 * 8,(longlong)iVar9 << 3);
        }
        *piVar5 = *piVar5 - uVar14;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,*piVar5,&(this->InstanceProtocolsStorage).ArrayMax
                  );
      }
    }
  }
  FVar6 = (this->PerPrioritizerInfos).AllocatorInstance.SecondaryData;
  iVar9 = *piVar3;
  FVar13 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
            )this;
  if (FVar6 != (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
                )0x0) {
    FVar13 = FVar6;
  }
  FVar6 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
           )((longlong)FVar13 + (longlong)iVar9 * 0x18);
  while( true ) {
    if (*piVar3 != iVar9) {
      `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar13 == FVar6) break;
    uVar12 = iVar15 << 9;
    iVar15 = iVar15 + 1;
    *(FScriptContainerElement **)FVar13 = (pTVar1->AllocatorInstance).Data + (ulonglong)uVar12 * 4;
    *(FScriptContainerElement **)((longlong)FVar13 + 0x10) =
         (pTVar2->AllocatorInstance).Data + (ulonglong)uVar12 * 8;
    FVar13 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
              )((longlong)FVar13 + 0x18);
  }
  return this;
}

// PrepareBatch @ 1442cb250

void __thiscall
UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::PrepareBatch
          (FUpdateDirtyObjectsBatchHelper *this,uint *param_1,uint param_2,uchar *param_3)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
  FVar5;
  FNetRefHandleManager *pFVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  uchar *puVar12;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
  FVar13;
  ulonglong uVar14;
  undefined1 local_res18 [8];
  uchar *local_res20;
  
  iVar3 = (this->PerPrioritizerInfos).ArrayNum;
  FVar5 = (this->PerPrioritizerInfos).AllocatorInstance.SecondaryData;
  FVar13 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
            )this;
  if (FVar5 != (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
                )0x0) {
    FVar13 = FVar5;
  }
  FVar5 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
           )((longlong)FVar13 + (longlong)iVar3 * 0x18);
  local_res20 = param_3;
  while( true ) {
    if ((this->PerPrioritizerInfos).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar13 == FVar5) break;
    puVar12 = (uchar *)((longlong)FVar13 + 8);
    puVar12[0] = '\0';
    puVar12[1] = '\0';
    puVar12[2] = '\0';
    puVar12[3] = '\0';
    FVar13 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
              )((longlong)FVar13 + 0x18);
  }
  FVar5 = (this->PerPrioritizerInfos).AllocatorInstance.SecondaryData;
  FVar13 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
            )this;
  if (FVar5 != (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
                )0x0) {
    FVar13 = FVar5;
  }
  if (((int)param_2 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar1 = param_1 + (int)param_2;
  puVar12 = local_res20;
  do {
    if (param_1 == puVar1) {
      return;
    }
    uVar4 = *param_1;
    uVar14 = (ulonglong)puVar12[uVar4];
    if (puVar12[uVar4] != 0xff) {
      pFVar6 = this->NetRefHandleManager;
      uVar9 = (int)uVar4 / 100;
      uVar11 = 0;
      if ((int)uVar9 < (int)(pFVar6->ReplicatedObjectData)._padding_) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)
               ((longlong)((int)uVar4 % 100) * 0x38 + 0x18 +
               *(longlong *)((pFVar6->ReplicatedObjectData)._padding_ + (longlong)(int)uVar9 * 8));
      puVar12 = local_res20;
      if (lVar7 != 0) {
        lVar2 = (longlong)FVar13 + uVar14 * 0x18;
        *(uint *)(*(longlong *)((longlong)FVar13 + uVar14 * 0x18) +
                 (ulonglong)*(uint *)((uchar *)((longlong)FVar13 + 8) + uVar14 * 0x18) * 4) = uVar4;
        *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)*(uint *)(lVar2 + 8) * 8) = lVar7;
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

