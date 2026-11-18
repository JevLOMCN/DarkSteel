// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// Finish @ 142040440

void __thiscall
UE::GC::
TThreadedGather<UE::GC::FRealtimeGC::FMarkClustersArrays,UE::GC::FRealtimeGC::FMarkClustersArrays>::
Finish(TThreadedGather<UE::GC::FRealtimeGC::FMarkClustersArrays,UE::GC::FRealtimeGC::FMarkClustersArrays>
       *this,FMarkClustersArrays *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_> FVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_> FVar5;
  int iVar6;
  FMarkClustersArrays *pFVar7;
  uchar *puVar8;
  TArray<FUObjectItem_*,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  int iVar11;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ThreadIterators).ArrayNum;
  if ((iVar2 == 1) &&
     ((param_1->ClustersToDissolve).ArrayNum + (param_1->KeepClusters).ArrayNum == 0)) {
    FVar3 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>)this
    ;
    if (FVar3 != (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>
                 )0x0) {
      FVar5 = FVar3;
    }
    pFVar7 = (FMarkClustersArrays *)((longlong)FVar5 + 0x10);
    if (param_1 != pFVar7) {
      pFVar4 = (param_1->KeepClusters).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (param_1->KeepClusters).AllocatorInstance.Data = (pFVar7->KeepClusters).AllocatorInstance.Data
      ;
      (pFVar7->KeepClusters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->KeepClusters).ArrayNum = *(int *)((longlong)FVar5 + 0x18);
      (param_1->KeepClusters).ArrayMax = *(int *)((longlong)FVar5 + 0x1c);
      puVar8 = (uchar *)((longlong)FVar5 + 0x18);
      puVar8[0] = '\0';
      puVar8[1] = '\0';
      puVar8[2] = '\0';
      puVar8[3] = '\0';
      puVar8[4] = '\0';
      puVar8[5] = '\0';
      puVar8[6] = '\0';
      puVar8[7] = '\0';
    }
    puVar8 = (uchar *)((longlong)FVar5 + 0x20);
    pTVar9 = &param_1->ClustersToDissolve;
    if (pTVar9 != (TArray<FUObjectItem_*,TSizedDefaultAllocator<32>_> *)puVar8) {
      pFVar4 = (pTVar9->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar9->AllocatorInstance).Data = *(FScriptContainerElement **)puVar8;
      puVar8[0] = '\0';
      puVar8[1] = '\0';
      puVar8[2] = '\0';
      puVar8[3] = '\0';
      puVar8[4] = '\0';
      puVar8[5] = '\0';
      puVar8[6] = '\0';
      puVar8[7] = '\0';
      (param_1->ClustersToDissolve).ArrayNum = *(int *)((longlong)FVar5 + 0x28);
      (param_1->ClustersToDissolve).ArrayMax = *(int *)((longlong)FVar5 + 0x2c);
      puVar8 = (uchar *)((longlong)FVar5 + 0x28);
      puVar8[0] = '\0';
      puVar8[1] = '\0';
      puVar8[2] = '\0';
      puVar8[3] = '\0';
      puVar8[4] = '\0';
      puVar8[5] = '\0';
      puVar8[6] = '\0';
      puVar8[7] = '\0';
    }
  }
  else {
    FVar3 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
    iVar6 = 0;
    FVar5 = (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>)this
    ;
    if (FVar3 != (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>
                 )0x0) {
      FVar5 = FVar3;
    }
    puVar8 = (uchar *)((longlong)FVar5 + 0x28);
    iVar11 = iVar6;
    while( true ) {
      if ((this->ThreadIterators).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_> *)
          (puVar8 + -0x28) ==
          (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_> *)
          ((longlong)iVar2 * 0x30 + (longlong)FVar5)) break;
      iVar6 = iVar6 + *(int *)(puVar8 + -0x10);
      iVar11 = iVar11 + *(int *)puVar8;
      puVar8 = puVar8 + 0x30;
    }
    iVar2 = (param_1->KeepClusters).ArrayNum;
    uVar10 = iVar2 + iVar6;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((param_1->KeepClusters).ArrayMax < (int)uVar10) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar10,(ForAnyElementType *)param_1,iVar2,&(param_1->KeepClusters).ArrayMax);
    }
    iVar2 = (param_1->ClustersToDissolve).ArrayNum;
    uVar10 = iVar2 + iVar11;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((param_1->ClustersToDissolve).ArrayMax < (int)uVar10) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar10,&(param_1->ClustersToDissolve).AllocatorInstance,iVar2,
                 &(param_1->ClustersToDissolve).ArrayMax);
    }
    if (0 < iVar11 + iVar6) {
      FVar3 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
      iVar2 = (this->ThreadIterators).ArrayNum;
      FVar5 = (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>)
              this;
      if (FVar3 != (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>
                    )0x0) {
        FVar5 = FVar3;
      }
      pTVar9 = (TArray<FUObjectItem_*,TSizedDefaultAllocator<32>_> *)((longlong)FVar5 + 0x10);
      while( true ) {
        if ((this->ThreadIterators).ArrayNum != iVar2) {
          `TCheckedPointerIterator<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pTVar9 + -1 ==
            (TArray<FUObjectItem_*,TSizedDefaultAllocator<32>_> *)
            ((longlong)iVar2 * 0x30 + (longlong)FVar5)) break;
        TArray<FUObjectItem_*,TSizedDefaultAllocator<32>_>::operator+=
                  (&param_1->KeepClusters,pTVar9);
        TArray<FUObjectItem_*,TSizedDefaultAllocator<32>_>::operator+=
                  (&param_1->ClustersToDissolve,pTVar9 + 1);
        pTVar9 = pTVar9 + 3;
      }
    }
  }
  iVar2 = (this->ThreadIterators).ArrayNum;
  piVar1 = &(this->ThreadIterators).ArrayMax;
  FVar3 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
  if (*piVar1 < 0) {
    FVar5 = (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>)this
    ;
    if (FVar3 != (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>
                 )0x0) {
      FVar5 = FVar3;
    }
    DestructItems<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>,int>
              ((TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays> *)FVar5,iVar2);
    (this->ThreadIterators).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>_>
                (0x30,8,0,(ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>
                           *)this,0,piVar1);
    }
  }
  else {
    FVar5 = (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>)this
    ;
    if (FVar3 != (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>
                 )0x0) {
      FVar5 = FVar3;
    }
    DestructItems<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>,int>
              ((TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays> *)FVar5,iVar2);
    (this->ThreadIterators).ArrayNum = 0;
  }
  this->bIsPending = false;
  return;
}

// Finish @ 1420406e0

void __thiscall
UE::GC::
TThreadedGather<TArray<int,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::Finish(TThreadedGather<TArray<int,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<int,TSizedDefaultAllocator<32>_>_>_>
         *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  uchar *puVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_> FVar10;
  uint uVar11;
  ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_> FVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  iVar3 = (this->ThreadIterators).ArrayNum;
  iVar8 = 0;
  if ((iVar3 == 1) && (param_1->ArrayNum == 0)) {
    FVar12 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>)
             this;
    if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   )0x0) {
      FVar10 = FVar12;
    }
    pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)FVar10 + 0x10);
    if (param_1 != pTVar9) {
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (param_1->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      param_1->ArrayNum = *(int *)((longlong)FVar10 + 0x18);
      param_1->ArrayMax = *(int *)((longlong)FVar10 + 0x1c);
      puVar1 = (uchar *)((longlong)FVar10 + 0x18);
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      puVar1[4] = '\0';
      puVar1[5] = '\0';
      puVar1[6] = '\0';
      puVar1[7] = '\0';
    }
  }
  else {
    FVar12 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>)
             this;
    if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   )0x0) {
      FVar10 = FVar12;
    }
    FVar12 = (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>)
             ((longlong)iVar3 * 0x20 + (longlong)FVar10);
    while( true ) {
      if ((this->ThreadIterators).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar10 == FVar12) break;
      iVar8 = iVar8 + *(int *)((longlong)FVar10 + 0x18);
      FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>)
               ((longlong)FVar10 + 0x20);
    }
    uVar11 = param_1->ArrayNum + iVar8;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (param_1->ArrayMax < (int)uVar11) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    if (0 < iVar8) {
      FVar12 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
      iVar3 = (this->ThreadIterators).ArrayNum;
      FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>)
               this;
      if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                     )0x0) {
        FVar10 = FVar12;
      }
      pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)FVar10 + 0x10);
      while( true ) {
        if ((this->ThreadIterators).ArrayNum != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if ((ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_> *)
            (pTVar9 + -1) ==
            (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_> *)
            ((longlong)iVar3 * 0x20 + (longlong)FVar10)) break;
        if ((param_1 == pTVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = pTVar9->ArrayNum;
        if (iVar8 != 0) {
          iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar8,&param_1->AllocatorInstance,&param_1->ArrayNum,
                             &param_1->ArrayMax);
          memcpy((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4,
                 (pTVar9->AllocatorInstance).Data,(longlong)iVar8 << 2);
        }
        pTVar9 = pTVar9 + 2;
      }
    }
  }
  iVar3 = (this->ThreadIterators).ArrayNum;
  piVar2 = &(this->ThreadIterators).ArrayMax;
  FVar12 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
  if (*piVar2 < 0) {
    FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>)
             this;
    if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   )0x0) {
      FVar10 = FVar12;
    }
    DestructItems<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>,int>
              ((TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_> *)FVar10,iVar3);
    (this->ThreadIterators).ArrayNum = 0;
    if (*piVar2 != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
                (0x20,8,0,(ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                           *)this,0,piVar2);
    }
  }
  else {
    FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>)
             this;
    if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   )0x0) {
      FVar10 = FVar12;
    }
    DestructItems<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>,int>
              ((TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_> *)FVar10,iVar3);
    (this->ThreadIterators).ArrayNum = 0;
  }
  this->bIsPending = false;
  return;
}

// Finish @ 142040940

void __thiscall
UE::GC::
TThreadedGather<TArray<UObject_*,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
::Finish(TThreadedGather<TArray<UObject_*,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
         *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uchar *puVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar9;
  ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_> FVar10;
  uint uVar11;
  ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_> FVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  iVar3 = (this->ThreadIterators).ArrayNum;
  iVar8 = 0;
  if ((iVar3 == 1) && (param_1->ArrayNum == 0)) {
    FVar12 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
              )this;
    if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
                   )0x0) {
      FVar10 = FVar12;
    }
    pTVar9 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)((longlong)FVar10 + 0x10);
    if (param_1 != pTVar9) {
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (param_1->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      param_1->ArrayNum = *(int *)((longlong)FVar10 + 0x18);
      param_1->ArrayMax = *(int *)((longlong)FVar10 + 0x1c);
      puVar1 = (uchar *)((longlong)FVar10 + 0x18);
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      puVar1[4] = '\0';
      puVar1[5] = '\0';
      puVar1[6] = '\0';
      puVar1[7] = '\0';
    }
  }
  else {
    FVar12 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
              )this;
    if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
                   )0x0) {
      FVar10 = FVar12;
    }
    FVar12 = (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
              )((longlong)iVar3 * 0x20 + (longlong)FVar10);
    while( true ) {
      if ((this->ThreadIterators).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar10 == FVar12) break;
      iVar8 = iVar8 + *(int *)((longlong)FVar10 + 0x18);
      FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
                )((longlong)FVar10 + 0x20);
    }
    uVar11 = param_1->ArrayNum + iVar8;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (param_1->ArrayMax < (int)uVar11) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    if (0 < iVar8) {
      FVar12 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
      iVar3 = (this->ThreadIterators).ArrayNum;
      FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
                )this;
      if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
                     )0x0) {
        FVar10 = FVar12;
      }
      pTVar9 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)((longlong)FVar10 + 0x10);
      while( true ) {
        if ((this->ThreadIterators).ArrayNum != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if ((ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
             *)(pTVar9 + -1) ==
            (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
             *)((longlong)iVar3 * 0x20 + (longlong)FVar10)) break;
        if ((param_1 == pTVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = pTVar9->ArrayNum;
        if (iVar8 != 0) {
          iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar8,&param_1->AllocatorInstance,&param_1->ArrayNum,
                             &param_1->ArrayMax);
          memcpy((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8,
                 (pTVar9->AllocatorInstance).Data,(longlong)iVar8 << 3);
        }
        pTVar9 = pTVar9 + 2;
      }
    }
  }
  iVar3 = (this->ThreadIterators).ArrayNum;
  piVar2 = &(this->ThreadIterators).ArrayMax;
  FVar12 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
  if (*piVar2 < 0) {
    FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
              )this;
    if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
                   )0x0) {
      FVar10 = FVar12;
    }
    DestructItems<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>,int>
              ((TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_> *)FVar10,iVar3);
    (this->ThreadIterators).ArrayNum = 0;
    if (*piVar2 != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>_>
                (0x20,8,0,(ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
                           *)this,0,piVar2);
    }
  }
  else {
    FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
              )this;
    if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
                   )0x0) {
      FVar10 = FVar12;
    }
    DestructItems<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>,int>
              ((TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_> *)FVar10,iVar3);
    (this->ThreadIterators).ArrayNum = 0;
  }
  this->bIsPending = false;
  return;
}

// Finish @ 142040ba0

void __thiscall
UE::GC::
TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
::Finish(TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
         *this,TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_> *param_1)

{
  uchar *puVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_> *pTVar9;
  ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
  FVar10;
  uint uVar11;
  ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
  FVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  iVar3 = (this->ThreadIterators).ArrayNum;
  iVar8 = 0;
  if ((iVar3 == 1) && (param_1->ArrayNum == 0)) {
    FVar12 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
              )this;
    if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
                   )0x0) {
      FVar10 = FVar12;
    }
    pTVar9 = (TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_> *)
             ((longlong)FVar10 + 0x10);
    if (param_1 != pTVar9) {
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (param_1->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      param_1->ArrayNum = *(int *)((longlong)FVar10 + 0x18);
      param_1->ArrayMax = *(int *)((longlong)FVar10 + 0x1c);
      puVar1 = (uchar *)((longlong)FVar10 + 0x18);
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      puVar1[4] = '\0';
      puVar1[5] = '\0';
      puVar1[6] = '\0';
      puVar1[7] = '\0';
    }
  }
  else {
    FVar12 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
              )this;
    if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
                   )0x0) {
      FVar10 = FVar12;
    }
    FVar12 = (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
              )((longlong)iVar3 * 0x20 + (longlong)FVar10);
    while( true ) {
      if ((this->ThreadIterators).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar10 == FVar12) break;
      iVar8 = iVar8 + *(int *)((longlong)FVar10 + 0x18);
      FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
                )((longlong)FVar10 + 0x20);
    }
    uVar11 = param_1->ArrayNum + iVar8;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (param_1->ArrayMax < (int)uVar11) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    if (0 < iVar8) {
      FVar12 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
      iVar3 = (this->ThreadIterators).ArrayNum;
      FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
                )this;
      if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
                     )0x0) {
        FVar10 = FVar12;
      }
      pTVar9 = (TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_> *)
               ((longlong)FVar10 + 0x10);
      while( true ) {
        if ((this->ThreadIterators).ArrayNum != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if ((ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
             *)(pTVar9 + -1) ==
            (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
             *)((longlong)iVar3 * 0x20 + (longlong)FVar10)) break;
        if ((param_1 == pTVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = pTVar9->ArrayNum;
        if (iVar8 != 0) {
          iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar8,&param_1->AllocatorInstance,&param_1->ArrayNum,
                             &param_1->ArrayMax);
          memcpy((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8,
                 (pTVar9->AllocatorInstance).Data,(longlong)iVar8 << 3);
        }
        pTVar9 = pTVar9 + 2;
      }
    }
  }
  iVar3 = (this->ThreadIterators).ArrayNum;
  piVar2 = &(this->ThreadIterators).ArrayMax;
  FVar12 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
  if (*piVar2 < 0) {
    FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
              )this;
    if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
                   )0x0) {
      FVar10 = FVar12;
    }
    DestructItems<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>,int>
              ((TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_> *)
               FVar10,iVar3);
    (this->ThreadIterators).ArrayNum = 0;
    if (*piVar2 != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>_>
                (0x20,8,0,(ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
                           *)this,0,piVar2);
    }
  }
  else {
    FVar10 = (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
              )this;
    if (FVar12 != (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
                   )0x0) {
      FVar10 = FVar12;
    }
    DestructItems<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>,int>
              ((TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_> *)
               FVar10,iVar3);
    (this->ThreadIterators).ArrayNum = 0;
  }
  this->bIsPending = false;
  return;
}

// Finish @ 142040e00

void __thiscall
UE::GC::
TThreadedGather<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,UE::GC::TDefaultPayloadOps<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
::Finish(TThreadedGather<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,UE::GC::TDefaultPayloadOps<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
         *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *_Dst;
  int *piVar1;
  ulonglong uVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar17;
  uchar *puVar18;
  ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
  FVar19;
  ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
  FVar20;
  undefined1 local_res8 [8];
  
  iVar15 = 0;
  iVar14 = (this->ThreadIterators).ArrayNum;
  if ((iVar14 == 1) &&
     (*(int *)&(param_1->Elements).field_0x8 == *(int *)&(param_1->Elements).field_0x34)) {
    FVar20 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
    FVar19 = (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
              )this;
    if (FVar20 != (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
                   )0x0) {
      FVar19 = FVar20;
    }
    pTVar17 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)((longlong)FVar19 + 0x10);
    if (param_1 != pTVar17) {
      if (*(void **)&param_1->Elements != (void *)0x0) {
        FMemory::Free(*(void **)&param_1->Elements);
      }
      *(undefined8 *)&param_1->Elements = *(undefined8 *)&pTVar17->Elements;
      _Dst = &(param_1->Elements).field_0x10;
      *(undefined8 *)&pTVar17->Elements = 0;
      puVar18 = (uchar *)((longlong)FVar19 + 0x18);
      uVar6 = puVar18[1];
      uVar7 = puVar18[2];
      uVar8 = puVar18[3];
      (param_1->Elements).field_0x8 = puVar18[0];
      (param_1->Elements).field_0x9 = uVar6;
      (param_1->Elements).field_0xa = uVar7;
      (param_1->Elements).field_0xb = uVar8;
      puVar18 = (uchar *)((longlong)FVar19 + 0x1c);
      uVar6 = puVar18[1];
      uVar7 = puVar18[2];
      uVar8 = puVar18[3];
      (param_1->Elements).field_0xc = puVar18[0];
      (param_1->Elements).field_0xd = uVar6;
      (param_1->Elements).field_0xe = uVar7;
      (param_1->Elements).field_0xf = uVar8;
      puVar18 = (uchar *)((longlong)FVar19 + 0x18);
      puVar18[0] = '\0';
      puVar18[1] = '\0';
      puVar18[2] = '\0';
      puVar18[3] = '\0';
      puVar18[4] = '\0';
      puVar18[5] = '\0';
      puVar18[6] = '\0';
      puVar18[7] = '\0';
      if (_Dst != (uchar *)((longlong)FVar19 + 0x20)) {
        if (*(longlong *)((longlong)FVar19 + 0x30) == 0) {
          memmove(_Dst,(uchar *)((longlong)FVar19 + 0x20),0x10);
        }
        pvVar3 = *(void **)&(param_1->Elements).field_0x20;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        puVar18 = (uchar *)((longlong)FVar19 + 0x30);
        uVar6 = puVar18[1];
        uVar7 = puVar18[2];
        uVar8 = puVar18[3];
        uVar9 = puVar18[4];
        uVar10 = puVar18[5];
        uVar11 = puVar18[6];
        uVar12 = puVar18[7];
        (param_1->Elements).field_0x20 = puVar18[0];
        (param_1->Elements).field_0x21 = uVar6;
        (param_1->Elements).field_0x22 = uVar7;
        (param_1->Elements).field_0x23 = uVar8;
        (param_1->Elements).field_0x24 = uVar9;
        (param_1->Elements).field_0x25 = uVar10;
        (param_1->Elements).field_0x26 = uVar11;
        (param_1->Elements).field_0x27 = uVar12;
        puVar18 = (uchar *)((longlong)FVar19 + 0x30);
        puVar18[0] = '\0';
        puVar18[1] = '\0';
        puVar18[2] = '\0';
        puVar18[3] = '\0';
        puVar18[4] = '\0';
        puVar18[5] = '\0';
        puVar18[6] = '\0';
        puVar18[7] = '\0';
        puVar18 = (uchar *)((longlong)FVar19 + 0x38);
        uVar6 = puVar18[1];
        uVar7 = puVar18[2];
        uVar8 = puVar18[3];
        (param_1->Elements).field_0x28 = puVar18[0];
        (param_1->Elements).field_0x29 = uVar6;
        (param_1->Elements).field_0x2a = uVar7;
        (param_1->Elements).field_0x2b = uVar8;
        puVar18 = (uchar *)((longlong)FVar19 + 0x3c);
        uVar6 = puVar18[1];
        uVar7 = puVar18[2];
        uVar8 = puVar18[3];
        (param_1->Elements).field_0x2c = puVar18[0];
        (param_1->Elements).field_0x2d = uVar6;
        (param_1->Elements).field_0x2e = uVar7;
        (param_1->Elements).field_0x2f = uVar8;
        puVar18 = (uchar *)((longlong)FVar19 + 0x38);
        puVar18[0] = '\0';
        puVar18[1] = '\0';
        puVar18[2] = '\0';
        puVar18[3] = '\0';
        puVar18[4] = '\0';
        puVar18[5] = '\0';
        puVar18[6] = '\0';
        puVar18[7] = '\0';
      }
      puVar18 = (uchar *)((longlong)FVar19 + 0x40);
      uVar6 = puVar18[1];
      uVar7 = puVar18[2];
      uVar8 = puVar18[3];
      (param_1->Elements).field_0x30 = puVar18[0];
      (param_1->Elements).field_0x31 = uVar6;
      (param_1->Elements).field_0x32 = uVar7;
      (param_1->Elements).field_0x33 = uVar8;
      puVar18 = (uchar *)((longlong)FVar19 + 0x44);
      uVar6 = puVar18[1];
      uVar7 = puVar18[2];
      uVar8 = puVar18[3];
      (param_1->Elements).field_0x34 = puVar18[0];
      (param_1->Elements).field_0x35 = uVar6;
      (param_1->Elements).field_0x36 = uVar7;
      (param_1->Elements).field_0x37 = uVar8;
      puVar18 = (uchar *)((longlong)FVar19 + 0x40);
      puVar18[0] = 0xff;
      puVar18[1] = 0xff;
      puVar18[2] = 0xff;
      puVar18[3] = 0xff;
      puVar18 = (uchar *)((longlong)FVar19 + 0x44);
      puVar18[0] = '\0';
      puVar18[1] = '\0';
      puVar18[2] = '\0';
      puVar18[3] = '\0';
      if (*(longlong *)((longlong)FVar19 + 0x50) == 0) {
        *(undefined4 *)(param_1->Hash).InlineData = *(undefined4 *)((longlong)FVar19 + 0x48);
      }
      FVar4 = (param_1->Hash).SecondaryData;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar4);
      }
      (param_1->Hash).SecondaryData = *(ForElementType<FSetElementId> *)((longlong)FVar19 + 0x50);
      puVar18 = (uchar *)((longlong)FVar19 + 0x50);
      puVar18[0] = '\0';
      puVar18[1] = '\0';
      puVar18[2] = '\0';
      puVar18[3] = '\0';
      puVar18[4] = '\0';
      puVar18[5] = '\0';
      puVar18[6] = '\0';
      puVar18[7] = '\0';
      param_1->HashSize = *(int *)((longlong)FVar19 + 0x58);
      puVar18 = (uchar *)((longlong)FVar19 + 0x58);
      puVar18[0] = '\0';
      puVar18[1] = '\0';
      puVar18[2] = '\0';
      puVar18[3] = '\0';
    }
  }
  else {
    FVar20 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
    FVar19 = (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
              )this;
    if (FVar20 != (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
                   )0x0) {
      FVar19 = FVar20;
    }
    puVar18 = (uchar *)((longlong)FVar19 + 0x18);
    while( true ) {
      if ((this->ThreadIterators).ArrayNum != iVar14) {
        `TCheckedPointerIterator<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
           *)(puVar18 + -0x18) ==
          (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
           *)((longlong)iVar14 * 0x60 + (longlong)FVar19)) break;
      iVar15 = iVar15 + (*(int *)puVar18 - *(int *)(puVar18 + 0x2c));
      puVar18 = puVar18 + 0x60;
    }
    uVar13 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uVar16 = uVar13 + iVar15;
    if (uVar13 < uVar16) {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_1,uVar16);
      if (uVar16 < 4) {
        iVar14 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar14 = 1 << ((byte)lVar5 & 0x1f);
      }
      if ((param_1->HashSize == 0) || (param_1->HashSize < iVar14)) {
        param_1->HashSize = iVar14;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(param_1);
      }
    }
    if (0 < iVar15) {
      FVar20 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
      iVar14 = (this->ThreadIterators).ArrayNum;
      FVar19 = (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
                )this;
      if (FVar20 != (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
                     )0x0) {
        FVar19 = FVar20;
      }
      FVar20 = (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
                )((longlong)iVar14 * 0x60 + (longlong)FVar19);
      while( true ) {
        if ((this->ThreadIterators).ArrayNum != iVar14) {
          `TCheckedPointerIterator<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (FVar19 == FVar20) break;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                  (param_1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                           ((longlong)FVar19 + 0x10));
        FVar19 = (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
                  )((longlong)FVar19 + 0x60);
      }
    }
  }
  iVar14 = (this->ThreadIterators).ArrayNum;
  piVar1 = &(this->ThreadIterators).ArrayMax;
  FVar20 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
  if (*piVar1 < 0) {
    FVar19 = (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
              )this;
    if (FVar20 != (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
                   )0x0) {
      FVar19 = FVar20;
    }
    DestructItems<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,int>
              ((TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)FVar19,
               iVar14);
    (this->ThreadIterators).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>_>
                (0x60,8,0,(ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
                           *)this,0,piVar1);
    }
  }
  else {
    FVar19 = (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
              )this;
    if (FVar20 != (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
                   )0x0) {
      FVar19 = FVar20;
    }
    DestructItems<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,int>
              ((TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)FVar19,
               iVar14);
    (this->ThreadIterators).ArrayNum = 0;
  }
  this->bIsPending = false;
  return;
}

// Start @ 14208f5a0

void __thiscall
UE::GC::
TThreadedGather<UE::GC::FRealtimeGC::FMarkClustersArrays,UE::GC::FRealtimeGC::FMarkClustersArrays>::
Start(TThreadedGather<UE::GC::FRealtimeGC::FMarkClustersArrays,UE::GC::FRealtimeGC::FMarkClustersArrays>
      *this,EGatherOptions param_1,int param_2,int param_3,int param_4)

{
  ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_> FVar9;
  
  if (param_4 < 1) {
    param_4 = GetNumThreadsForGather(param_1,param_2 - param_3);
  }
  uVar4 = (param_2 - param_3) / param_4;
  iVar11 = uVar4 + 1;
  iVar5 = Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>_>
                    (0x30,8,param_4,
                     (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>
                      *)this,&(this->ThreadIterators).ArrayNum,&(this->ThreadIterators).ArrayMax);
  FVar1 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>)this;
  if (FVar1 != (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>)
               0x0) {
    FVar9 = FVar1;
  }
  DefaultConstructItems<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>,int>
            ((void *)((longlong)iVar5 * 0x30 + (longlong)FVar9),param_4);
  uVar10 = 0;
  lVar12 = (longlong)param_4;
  if (0 < param_4) {
    lVar13 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->ThreadIterators).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>)
              this;
      if (FVar1 != (ForElementType<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>_>
                    )0x0) {
        FVar9 = FVar1;
      }
      piVar8 = (int *)((longlong)FVar9 + lVar13);
      *piVar8 = param_3;
      piVar8[1] = param_3;
      iVar5 = iVar11;
      if (param_4 + -1 <= (int)uVar10) {
        iVar5 = ~uVar4 * (param_4 + -1) + param_2;
      }
      piVar8[2] = iVar5;
      iVar7 = param_3 + iVar5;
      if (param_2 + -1 < param_3 + iVar5 + -1) {
        iVar7 = param_2;
      }
      uVar10 = uVar10 + 1;
      param_3 = param_3 + iVar11;
      lVar13 = lVar13 + 0x30;
      piVar8[3] = iVar7 + -1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

// Start @ 14208f730

void __thiscall
UE::GC::
TThreadedGather<TArray<int,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::Start(TThreadedGather<TArray<int,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<int,TSizedDefaultAllocator<32>_>_>_>
        *this,EGatherOptions param_1,int param_2,int param_3,int param_4)

{
  ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_> FVar9;
  
  if (param_4 < 1) {
    param_4 = GetNumThreadsForGather(param_1,param_2 - param_3);
  }
  uVar4 = (param_2 - param_3) / param_4;
  iVar12 = uVar4 + 1;
  iVar5 = Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
                    (0x20,8,param_4,
                     (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                      *)this,&(this->ThreadIterators).ArrayNum,&(this->ThreadIterators).ArrayMax);
  FVar1 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>)this;
  if (FVar1 != (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>)
               0x0) {
    FVar9 = FVar1;
  }
  DefaultConstructItems<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>,int>
            ((void *)((longlong)iVar5 * 0x20 + (longlong)FVar9),param_4);
  uVar10 = 0;
  lVar13 = (longlong)param_4;
  if (0 < param_4) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->ThreadIterators).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>)
              this;
      if (FVar1 != (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                    )0x0) {
        FVar9 = FVar1;
      }
      piVar8 = (int *)((longlong)FVar9 + lVar11);
      *piVar8 = param_3;
      piVar8[1] = param_3;
      iVar5 = iVar12;
      if (param_4 + -1 <= (int)uVar10) {
        iVar5 = ~uVar4 * (param_4 + -1) + param_2;
      }
      piVar8[2] = iVar5;
      iVar7 = param_3 + iVar5;
      if (param_2 + -1 < param_3 + iVar5 + -1) {
        iVar7 = param_2;
      }
      uVar10 = uVar10 + 1;
      param_3 = param_3 + iVar12;
      lVar11 = lVar11 + 0x20;
      piVar8[3] = iVar7 + -1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

// Start @ 14208f8c0

void __thiscall
UE::GC::
TThreadedGather<TArray<UObject_*,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
::Start(TThreadedGather<TArray<UObject_*,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
        *this,EGatherOptions param_1,int param_2,int param_3,int param_4)

{
  ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_> FVar9;
  
  if (param_4 < 1) {
    param_4 = GetNumThreadsForGather(param_1,param_2 - param_3);
  }
  uVar4 = (param_2 - param_3) / param_4;
  iVar12 = uVar4 + 1;
  iVar5 = Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>_>
                    (0x20,8,param_4,
                     (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
                      *)this,&(this->ThreadIterators).ArrayNum,&(this->ThreadIterators).ArrayMax);
  FVar1 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>)
          this;
  if (FVar1 != (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
                )0x0) {
    FVar9 = FVar1;
  }
  DefaultConstructItems<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>,int>
            ((void *)((longlong)iVar5 * 0x20 + (longlong)FVar9),param_4);
  uVar10 = 0;
  lVar13 = (longlong)param_4;
  if (0 < param_4) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->ThreadIterators).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
               )this;
      if (FVar1 != (ForElementType<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>
                    )0x0) {
        FVar9 = FVar1;
      }
      piVar8 = (int *)((longlong)FVar9 + lVar11);
      *piVar8 = param_3;
      piVar8[1] = param_3;
      iVar5 = iVar12;
      if (param_4 + -1 <= (int)uVar10) {
        iVar5 = ~uVar4 * (param_4 + -1) + param_2;
      }
      piVar8[2] = iVar5;
      iVar7 = param_3 + iVar5;
      if (param_2 + -1 < param_3 + iVar5 + -1) {
        iVar7 = param_2;
      }
      uVar10 = uVar10 + 1;
      param_3 = param_3 + iVar12;
      lVar11 = lVar11 + 0x20;
      piVar8[3] = iVar7 + -1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

// Start @ 14208fa50

void __thiscall
UE::GC::
TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
::Start(TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
        *this,EGatherOptions param_1,int param_2,int param_3,int param_4)

{
  ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
  FVar9;
  
  if (param_4 < 1) {
    param_4 = GetNumThreadsForGather(param_1,param_2 - param_3);
  }
  uVar4 = (param_2 - param_3) / param_4;
  iVar12 = uVar4 + 1;
  iVar5 = Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>_>
                    (0x20,8,param_4,
                     (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
                      *)this,&(this->ThreadIterators).ArrayNum,&(this->ThreadIterators).ArrayMax);
  FVar1 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
           )this;
  if (FVar1 != (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
                )0x0) {
    FVar9 = FVar1;
  }
  DefaultConstructItems<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>,int>
            ((void *)((longlong)iVar5 * 0x20 + (longlong)FVar9),param_4);
  uVar10 = 0;
  lVar13 = (longlong)param_4;
  if (0 < param_4) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->ThreadIterators).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
               )this;
      if (FVar1 != (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
                    )0x0) {
        FVar9 = FVar1;
      }
      piVar8 = (int *)((longlong)FVar9 + lVar11);
      *piVar8 = param_3;
      piVar8[1] = param_3;
      iVar5 = iVar12;
      if (param_4 + -1 <= (int)uVar10) {
        iVar5 = ~uVar4 * (param_4 + -1) + param_2;
      }
      piVar8[2] = iVar5;
      iVar7 = param_3 + iVar5;
      if (param_2 + -1 < param_3 + iVar5 + -1) {
        iVar7 = param_2;
      }
      uVar10 = uVar10 + 1;
      param_3 = param_3 + iVar12;
      lVar11 = lVar11 + 0x20;
      piVar8[3] = iVar7 + -1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

// Start @ 14208fbe0

void __thiscall
UE::GC::
TThreadedGather<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,UE::GC::TDefaultPayloadOps<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
::Start(TThreadedGather<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,UE::GC::TDefaultPayloadOps<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
        *this,EGatherOptions param_1,int param_2,int param_3,int param_4)

{
  ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
  FVar9;
  
  if (param_4 < 1) {
    param_4 = GetNumThreadsForGather(param_1,param_2 - param_3);
  }
  uVar4 = (param_2 - param_3) / param_4;
  iVar11 = uVar4 + 1;
  iVar5 = Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>_>
                    (0x60,8,param_4,
                     (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
                      *)this,&(this->ThreadIterators).ArrayNum,&(this->ThreadIterators).ArrayMax);
  FVar1 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
           )this;
  if (FVar1 != (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
                )0x0) {
    FVar9 = FVar1;
  }
  DefaultConstructItems<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,int>
            ((void *)((longlong)iVar5 * 0x60 + (longlong)FVar9),param_4);
  uVar10 = 0;
  lVar12 = (longlong)param_4;
  if (0 < param_4) {
    lVar13 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->ThreadIterators).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (this->ThreadIterators).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
               )this;
      if (FVar1 != (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
                    )0x0) {
        FVar9 = FVar1;
      }
      piVar8 = (int *)((longlong)FVar9 + lVar13);
      *piVar8 = param_3;
      piVar8[1] = param_3;
      iVar5 = iVar11;
      if (param_4 + -1 <= (int)uVar10) {
        iVar5 = ~uVar4 * (param_4 + -1) + param_2;
      }
      piVar8[2] = iVar5;
      iVar7 = param_3 + iVar5;
      if (param_2 + -1 < param_3 + iVar5 + -1) {
        iVar7 = param_2;
      }
      uVar10 = uVar10 + 1;
      param_3 = param_3 + iVar11;
      lVar13 = lVar13 + 0x60;
      piVar8[3] = iVar7 + -1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

