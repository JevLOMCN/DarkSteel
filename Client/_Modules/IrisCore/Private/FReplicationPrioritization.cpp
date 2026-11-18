// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 25

// <lambda_invoker_cdecl> @ 1442a14e0

void __cdecl
`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::__l2::
<lambda_2>::<lambda_invoker_cdecl>(uint param_1)

{
  return;
}

// FReplicationPrioritization @ 1442ae0c0

FReplicationPrioritization * __thiscall
UE::Net::Private::FReplicationPrioritization::FReplicationPrioritization
          (FReplicationPrioritization *this)

{
  this->HasNewObjectsWithStaticPriority = 0;
  (this->ReplicationSystem).field0_0x0.DebugPtr = (UReplicationSystem *)0x0;
  this->Connections = (FReplicationConnections *)0x0;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  (this->PrioritizerDefinitions).Object = (UObject *)0x0;
  (this->NetObjectPrioritizationInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetObjectPrioritizationInfos).ArrayNum = 0;
  (this->NetObjectPrioritizationInfos).ArrayMax = 0;
  (this->ObjectIndexToPrioritizer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectIndexToPrioritizer).ArrayNum = 0;
  (this->ObjectIndexToPrioritizer).ArrayMax = 0;
  (this->PrioritizerInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrioritizerInfos).ArrayNum = 0;
  (this->PrioritizerInfos).ArrayMax = 0;
  (this->ConnectionInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectionInfos).ArrayNum = 0;
  (this->ConnectionInfos).ArrayMax = 0;
  (this->DefaultPriorities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultPriorities).ArrayNum = 0;
  (this->DefaultPriorities).ArrayMax = 0;
  (this->ObjectsWithNewStaticPriority).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ObjectsWithNewStaticPriority).Storage.ArrayNum = 0;
  (this->ObjectsWithNewStaticPriority).Storage.ArrayMax = 0;
  (this->ObjectsWithNewStaticPriority).BitCount = 0;
  this->MaxInternalNetRefIndex = 0;
  this->ConnectionCount = 0;
  return this;
}

// operator() @ 1442b3cb0

void __thiscall
`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::__l2::
<lambda_3>::operator()(void *this,uint param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  uVar5 = local_res10[0];
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  *(uint *)(pFVar2->Data + (longlong)iVar7 * 4) = local_res10[0];
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x70);
  if (*(uint *)(*(longlong *)((longlong)this + 8) + 0x80) <= local_res10[0]) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar8 = (ulonglong)(uVar5 >> 5);
  *(uint *)(lVar3 + uVar8 * 4) = *(uint *)(lVar3 + uVar8 * 4) & ~(1 << (uVar5 & 0x1f));
  return;
}

// AddConnection @ 1442b4f60

void __thiscall
UE::Net::Private::FReplicationPrioritization::AddConnection
          (FReplicationPrioritization *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 local_res10 [8];
  
  uVar9 = (this->ConnectionInfos).ArrayNum;
  if (uVar9 <= param_1) {
    uVar7 = param_1 + 1;
    if ((int)uVar9 < (int)uVar7) {
      iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,uVar7 - uVar9,&(this->ConnectionInfos).AllocatorInstance,
                         &(this->ConnectionInfos).ArrayNum,&(this->ConnectionInfos).ArrayMax);
      DefaultConstructItems<UE::Net::Private::FReplicationPrioritization::FPerConnectionInfo,int>
                ((this->ConnectionInfos).AllocatorInstance.Data + (longlong)iVar6 * 0x18,
                 uVar7 - uVar9);
    }
    else {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if ((int)uVar7 < (int)uVar9) {
        uVar9 = uVar9 - uVar7;
        if ((int)(uVar9 | uVar7) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (uVar9 != 0) {
          TArray<UE::Net::Private::FReplicationPrioritization::FPerConnectionInfo,TSizedDefaultAllocator<32>_>
          ::RemoveAtImpl(&this->ConnectionInfos,uVar7,uVar9);
        }
      }
    }
  }
  this->ConnectionCount = this->ConnectionCount + 1;
  uVar9 = 0;
  if ((int)param_1 < (this->ConnectionInfos).ArrayNum) {
    uVar9 = ~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->ConnectionInfos).AllocatorInstance.Data + (longlong)(int)param_1 * 0x18;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)pFVar1 != &this->DefaultPriorities) {
    iVar6 = (this->DefaultPriorities).ArrayNum;
    pFVar4 = pFVar1 + 0xc;
    pFVar8 = (this->DefaultPriorities).AllocatorInstance.Data;
    iVar2 = *(int *)pFVar4;
    *(int *)&pFVar1[8].field_0x0 = iVar6;
    if ((iVar6 == 0) && (iVar2 == 0)) {
      *(int *)pFVar4 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar6,iVar2,(ForAnyElementType *)pFVar1,iVar6,(int *)pFVar4);
      if (iVar6 != 0) {
        memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,pFVar8,(longlong)iVar6 << 2);
      }
    }
  }
  *(uint *)(pFVar1 + 0x14) = *(uint *)(pFVar1 + 0x14) | 1;
  *(undefined4 *)&pFVar1[0x10].field_0x0 = 0;
  iVar6 = (this->PrioritizerInfos).ArrayNum;
  pFVar8 = (this->PrioritizerInfos).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar6 * 0x18;
  while( true ) {
    if ((this->PrioritizerInfos).ArrayNum != iVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FPrioritizerInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar1) break;
    if (*(longlong *)pFVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar8 + 0x2c8))(*(longlong **)pFVar8,param_1);
    pFVar8 = pFVar8 + 0x18;
  }
  return;
}

// BatchNotifyPrioritizersOfDirtyObjects @ 1442b63f0

void __thiscall
UE::Net::Private::FReplicationPrioritization::BatchNotifyPrioritizersOfDirtyObjects
          (FReplicationPrioritization *this,FUpdateDirtyObjectsBatchHelper *param_1,uint *param_2,
          uint param_3)

{
  int iVar1;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
  FVar2;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
  FVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
  FVar8;
  longlong lVar9;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
  FVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_> *local_40;
  FScriptContainerElement *local_38;
  
  FUpdateDirtyObjectsBatchHelper::PrepareBatch
            (param_1,param_2,param_3,
             (uchar *)(this->ObjectIndexToPrioritizer).AllocatorInstance.Data);
  FVar2 = (param_1->PerPrioritizerInfos).AllocatorInstance.SecondaryData;
  local_40 = &this->NetRefHandleManager->ReplicatedObjectStateBuffers;
  iVar1 = (param_1->PerPrioritizerInfos).ArrayNum;
  local_38 = (this->NetObjectPrioritizationInfos).AllocatorInstance.Data;
  FVar10 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
            )param_1;
  if (FVar2 != (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
                )0x0) {
    FVar10 = FVar2;
  }
  FVar2 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
           )((longlong)FVar10 + (longlong)iVar1 * 0x18);
  do {
    if ((param_1->PerPrioritizerInfos).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar10 == FVar2) {
      return;
    }
    if (*(int *)((longlong)FVar10 + 8) != 0) {
      local_58 = *(undefined8 *)FVar10;
      local_50 = *(undefined4 *)((longlong)FVar10 + 8);
      local_48 = *(undefined8 *)((longlong)FVar10 + 0x10);
      FVar3 = (param_1->PerPrioritizerInfos).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
               )param_1;
      if (FVar3 != (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
                    )0x0) {
        FVar8 = FVar3;
      }
      lVar9 = ((longlong)FVar10 - (longlong)FVar8) / 6 +
              ((longlong)FVar10 - (longlong)FVar8 >> 0x3f);
      uVar11 = (int)(lVar9 >> 2) - (int)(lVar9 >> 0x3f);
      uVar7 = 0;
      if ((int)uVar11 < (this->PrioritizerInfos).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar4 = *(longlong **)
                ((this->PrioritizerInfos).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x18);
      (**(code **)(*plVar4 + 0x2e8))(plVar4,&local_58);
    }
    FVar10 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
              )((longlong)FVar10 + 0x18);
  } while( true );
}

// Deinit @ 1442bad70

void __thiscall
UE::Net::Private::FReplicationPrioritization::Deinit(FReplicationPrioritization *this)

{
  TStrongObjectPtr<UNetObjectPrioritizerDefinitions,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FScriptContainerElement local_28 [8];
  undefined8 local_20;
  
  iVar4 = (this->PrioritizerInfos).ArrayNum;
  pFVar7 = (this->PrioritizerInfos).AllocatorInstance.Data;
  pFVar3 = pFVar7 + (longlong)iVar4 * 0x18;
  while( true ) {
    if ((this->PrioritizerInfos).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FPrioritizerInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar3) break;
    if (*(longlong *)pFVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar7 + 0x2b8))();
    if (pFVar7 != local_28) {
      if (*(UObject **)pFVar7 != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)pFVar7);
      }
      *(longlong *)pFVar7 = 0;
    }
    pFVar7 = pFVar7 + 0x18;
  }
  pTVar1 = &this->PrioritizerDefinitions;
  if (pTVar1 != (TStrongObjectPtr<UNetObjectPrioritizerDefinitions,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)&local_20) {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)0x0;
  }
  (this->ReplicationSystem).field0_0x0.DebugPtr = (UReplicationSystem *)0x0;
  this->Connections = (FReplicationConnections *)0x0;
  piVar2 = &(this->NetObjectPrioritizationInfos).ArrayMax;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  (this->NetObjectPrioritizationInfos).ArrayNum = 0;
  if (*piVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NetObjectPrioritizationInfos).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->ObjectIndexToPrioritizer).ArrayMax;
  (this->ObjectIndexToPrioritizer).ArrayNum = 0;
  if (*piVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->ObjectIndexToPrioritizer).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->DefaultPriorities).ArrayMax;
  (this->DefaultPriorities).ArrayNum = 0;
  if (*piVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DefaultPriorities).AllocatorInstance,0,piVar2);
  }
  (this->ObjectsWithNewStaticPriority).BitCount = 0;
  piVar2 = &(this->ObjectsWithNewStaticPriority).Storage.ArrayMax;
  (this->ObjectsWithNewStaticPriority).Storage.ArrayNum = 0;
  if (*piVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->ObjectsWithNewStaticPriority,0,piVar2);
  }
  return;
}

// GetPrioritizer @ 1442c2d90

UNetObjectPrioritizer * __thiscall
UE::Net::Private::FReplicationPrioritization::GetPrioritizer
          (FReplicationPrioritization *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->PrioritizerInfos).ArrayNum;
  pFVar3 = (this->PrioritizerInfos).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->PrioritizerInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FPrioritizerInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(FName *)(pFVar3 + 8) == param_1) {
      return *(UNetObjectPrioritizer **)pFVar3;
    }
    pFVar3 = pFVar3 + 0x18;
  }
  return (UNetObjectPrioritizer *)0x0;
}

// GetPrioritizerHandle @ 1442c2e70

uint __thiscall
UE::Net::Private::FReplicationPrioritization::GetPrioritizerHandle
          (FReplicationPrioritization *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->PrioritizerInfos).ArrayNum;
  pFVar4 = (this->PrioritizerInfos).AllocatorInstance.Data;
  uVar3 = 0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->PrioritizerInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FPrioritizerInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(FName *)(pFVar4 + 8) == param_1) {
      return uVar3;
    }
    uVar3 = uVar3 + 1;
    pFVar4 = pFVar4 + 0x18;
  }
  uVar3 = 0xffffffff;
  if (param_1 == NAME_DefaultPrioritizer) {
    uVar3 = 0;
  }
  return uVar3;
}

// Init @ 1442c42d0

void __thiscall
UE::Net::Private::FReplicationPrioritization::Init
          (FReplicationPrioritization *this,FReplicationPrioritizationInitParams *param_1)

{
  uint uVar1;
  UReplicationSystem *pUVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1->Connections == (FReplicationConnections *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.Connections != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\ReplicationPrioritization.cpp"
                       ,0x124,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->NetRefHandleManager == (FNetRefHandleManager *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.NetRefHandleManager != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\ReplicationPrioritization.cpp"
                       ,0x125,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->ReplicationSystem).field0_0x0.DebugPtr, pUVar2 != (UReplicationSystem *)0x0
     )) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ReplicationSystem).field0_0x0 = (param_1->ReplicationSystem).field0_0x0;
  this->Connections = param_1->Connections;
  this->NetRefHandleManager = param_1->NetRefHandleManager;
  uVar1 = param_1->MaxInternalNetRefIndex;
  this->MaxInternalNetRefIndex = uVar1;
  SetNetObjectListsSize(this,uVar1);
  uVar1 = (param_1->Connections->ValidConnections).BitCount;
  if (-1 < (int)uVar1) {
    if ((this->ConnectionInfos).ArrayMax < (int)uVar1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar1,&(this->ConnectionInfos).AllocatorInstance,
                 (this->ConnectionInfos).ArrayNum,&(this->ConnectionInfos).ArrayMax);
    }
    InitPrioritizers(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// InitPrioritizers @ 1442c4f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationPrioritization::InitPrioritizers(FReplicationPrioritization *this)

{
  TStrongObjectPtr<UNetObjectPrioritizerDefinitions,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  FNetObjectPrioritizerDefinition *pFVar2;
  UReplicationSystem *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  UObjectBase *pUVar12;
  FName FVar13;
  UPackage *pUVar14;
  UClass *pUVar15;
  longlong lVar16;
  longlong *plVar17;
  UObjectBase *pUVar18;
  FNetObjectPrioritizerDefinition *pFVar19;
  UObjectBase *pUVar20;
  ulonglong uVar21;
  int *piVar22;
  ForAnyElementType FVar23;
  undefined1 auStackY_268 [32];
  undefined1 local_218;
  undefined1 local_217 [7];
  ForAnyElementType local_210;
  uint local_208;
  uint local_204;
  uint local_200;
  FName local_1f8;
  TObjectPtr<UReplicationSystem_const_>_u_0 local_1f0;
  UObject *pUStack_1e8;
  undefined8 local_1e0;
  uint local_1d8;
  FNetObjectPrioritizerDefinition *local_1d0;
  longlong local_1c8;
  undefined1 local_1c0 [16];
  UPackage *local_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong local_168 [3];
  longlong *local_150;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pUVar10 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar10,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar11 = UNetObjectPrioritizerDefinitions::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar11);
  local_b8._8_8_ = pUVar10;
  pUVar12 = (UObjectBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar17 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  pUVar18 = (UObjectBase *)0x0;
  pUVar20 = pUVar18;
  if (pUVar12 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(pUVar12);
    pUVar20 = pUVar12;
  }
  pTVar1 = &this->PrioritizerDefinitions;
  if (pTVar1 == (TStrongObjectPtr<UNetObjectPrioritizerDefinitions,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)&local_1c8) {
    if (pUVar20 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar20);
    }
  }
  else {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)pUVar20;
  }
  local_210.Data = (FScriptContainerElement *)0x0;
  local_208 = 0;
  local_204 = 0;
  if (pTVar1->Object == (UObject *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar18 = (UObjectBase *)(ulonglong)local_208;
  }
  pUVar10 = pTVar1->Object;
  uVar8 = *(uint *)&pUVar10[1].field_0x8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if ((int)local_204 < (int)uVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar8,&local_210,(int)pUVar18,(int *)&local_204);
    pUVar18 = (UObjectBase *)(ulonglong)local_208;
  }
  iVar9 = *(int *)&pUVar10[1].field_0x8;
  pFVar19 = *(FNetObjectPrioritizerDefinition **)(pUVar10 + 1);
  pFVar2 = pFVar19 + iVar9;
  while( true ) {
    if (*(int *)&pUVar10[1].field_0x8 != iVar9) {
      local_218 = 0;
      `TCheckedPointerIterator<FNetObjectPrioritizerDefinition_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_218);
      pUVar18 = (UObjectBase *)(ulonglong)local_208;
    }
    uVar8 = (uint)pUVar18;
    if (pFVar19 == pFVar2) break;
    if (((pFVar19->Class).field0_0x0.DebugPtr != (UClass *)0x0) &&
       ((pFVar19->ConfigClassName == (FName)0x0 ||
        ((pFVar19->ConfigClass).field0_0x0.DebugPtr != (UClass *)0x0)))) {
      if ((local_210.Data <= pFVar19) &&
         ((pFVar19 < (FNetObjectPrioritizerDefinition *)
                     (local_210.Data + (longlong)(int)local_204 * 0x28) &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), uVar8 = local_208, bVar7)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar8 == local_204) {
        uVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&local_210,(int *)&local_204);
      }
      local_208 = uVar8 + 1;
      FNetObjectPrioritizerDefinition::FNetObjectPrioritizerDefinition
                ((FNetObjectPrioritizerDefinition *)(local_210.Data + (longlong)(int)uVar8 * 0x28),
                 pFVar19);
      pUVar18 = (UObjectBase *)(ulonglong)local_208;
    }
    pFVar19 = pFVar19 + 1;
  }
  if (0x100 < (int)uVar8) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definitions.Num() <= 256",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\ReplicationPrioritization.cpp"
                       ,0x385,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar18 = (UObjectBase *)(ulonglong)local_208;
  }
  iVar9 = (int)pUVar18;
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulong64)pUVar18);
  }
  piVar22 = &(this->PrioritizerInfos).ArrayMax;
  if (*piVar22 < iVar9) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar9,&(this->PrioritizerInfos).AllocatorInstance,
               (this->PrioritizerInfos).ArrayNum,piVar22);
    pUVar18 = (UObjectBase *)(ulonglong)local_208;
  }
  local_200 = (uint)pUVar18;
  uVar21 = (ulonglong)(int)local_200;
  local_1d0 = (FNetObjectPrioritizerDefinition *)(local_210.Data + uVar21 * 0x28);
  FVar23.Data = local_210.Data;
  while( true ) {
    pFVar2 = local_1d0;
    if ((int)pUVar18 != (int)uVar21) {
      local_217[0] = 0;
      `TCheckedPointerIterator<FNetObjectPrioritizerDefinition,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_217);
    }
    if ((FNetObjectPrioritizerDefinition *)FVar23.Data == pFVar2) {
      if ((2 < (byte)LogIris._0_1_) && ((this->PrioritizerInfos).ArrayNum == 0)) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      if ((FNetObjectPrioritizerDefinition *)local_210.Data !=
          (FNetObjectPrioritizerDefinition *)0x0) {
        FMemory::Free(local_210.Data);
      }
      return;
    }
    FVar13 = MakeUniqueObjectName
                       ((UObject *)local_1c0,(UClass *)0x0,
                        (FName)(((FNetObjectPrioritizerDefinition *)FVar23.Data)->Class).field0_0x0.
                               ObjectPtr.field0_0x0,
                        (((FNetObjectPrioritizerDefinition *)FVar23.Data)->PrioritizerName).
                        ComparisonIndex.Value);
    pUVar11 = (((FNetObjectPrioritizerDefinition *)FVar23.Data)->Class).field0_0x0.DebugPtr;
    lVar16 = *(longlong *)FVar13;
    pUVar14 = GetTransientPackage();
    if (lVar16 == 0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar14,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar15 = UNetObjectPrioritizer::StaticClass();
    CheckIsClassChildOf_Internal(pUVar15,pUVar11);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)(local_1c0 + 8),pUVar11);
    local_1a0 = 0;
    local_190 = 0;
    local_198 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_1b0 = pUVar14;
    local_1a8 = lVar16;
    pUVar12 = (UObjectBase *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_1c0 + 8));
    if (local_178 != 0) {
      plVar17 = local_168;
      if (local_150 != (longlong *)0x0) {
        plVar17 = local_150;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    pUVar20 = (UObjectBase *)0x0;
    if (pUVar12 != (UObjectBase *)0x0) {
      UObjectBase::AddRef(pUVar12);
      pUVar20 = pUVar12;
    }
    local_1f0.DebugPtr = (UReplicationSystem *)0x0;
    pUStack_1e8 = (UObject *)0x0;
    local_1e0 = 0;
    local_1d8 = 0;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (this->ReplicationSystem).field0_0x0.DebugPtr, pUVar3 != (UReplicationSystem *)0x0)
       ) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar11 = (((FNetObjectPrioritizerDefinition *)FVar23.Data)->ConfigClass).field0_0x0.DebugPtr;
    local_1f0 = (this->ReplicationSystem).field0_0x0;
    if (pUVar11 == (UClass *)0x0) {
      pUVar10 = (UObject *)0x0;
    }
    else {
      local_1f8.ComparisonIndex.Value = 0;
      local_1f8.Number = 0;
      pUVar14 = GetTransientPackage();
      FVar13 = local_1f8;
      if (local_1f8 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar14,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar15 = UNetObjectPrioritizerConfig::StaticClass();
      CheckIsClassChildOf_Internal(pUVar15,pUVar11);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_138,pUVar11);
      FVar6 = local_1f8;
      local_1f8.ComparisonIndex = FVar13.ComparisonIndex.Value;
      local_1f8.Number = FVar13.Number;
      local_138._16_4_ = local_1f8.ComparisonIndex.Value;
      local_138._20_4_ = local_1f8.Number;
      local_138._48_8_ = (FObjectInstancingGraph *)0x0;
      local_138._56_8_ = (UPackage *)0x0;
      local_138._24_4_ = RF_NoFlags;
      local_138._40_8_ = (UObject *)0x0;
      local_138[0x20] = false;
      local_1f8 = FVar6;
      local_138._8_8_ = pUVar14;
      pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
      if (local_138._64_8_ != 0) {
        plVar17 = (longlong *)(local_138 + 0x50);
        if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
          plVar17 = (longlong *)local_138._104_8_;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
    }
    pUStack_1e8 = pUVar10;
    piVar22 = &(this->PrioritizerInfos).ArrayMax;
    local_1e0 = CONCAT44(this->MaxInternalNetRefIndex,
                         this->NetRefHandleManager->MaxActiveObjectCount);
    local_1d8 = (this->Connections->ValidConnections).BitCount;
    if ((pUVar20 == (UObjectBase *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar7)) break;
    (**(code **)(pUVar20->_padding_ + 0x2b0))(pUVar20,&local_1f0);
    iVar9 = (this->PrioritizerInfos).ArrayNum;
    if (iVar9 == *piVar22) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->PrioritizerInfos).AllocatorInstance,piVar22);
    }
    lVar16 = (longlong)iVar9;
    (this->PrioritizerInfos).ArrayNum = iVar9 + 1;
    pFVar4 = (this->PrioritizerInfos).AllocatorInstance.Data;
    *(undefined8 *)(pFVar4 + lVar16 * 0x18 + 0x10) = 0;
    *(undefined8 *)(pFVar4 + lVar16 * 0x18) = 0;
    *(undefined8 *)(pFVar4 + lVar16 * 0x18 + 8) = 0;
    pFVar4 = pFVar4 + lVar16 * 0x18;
    UObjectBase::AddRef(pUVar20);
    *(UObjectBase **)pFVar4 = pUVar20;
    *(FName *)(pFVar4 + 8) = ((FNetObjectPrioritizerDefinition *)FVar23.Data)->PrioritizerName;
    *(undefined4 *)(pFVar4 + 0x10) = 0;
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar20);
    pUVar18 = (UObjectBase *)(ulonglong)local_208;
    FVar23.Data = FVar23.Data + 0x28;
    uVar21 = (ulonglong)local_200;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// NotifyPrioritizersOfDirtyObjects @ 1442c81c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FReplicationPrioritization::NotifyPrioritizersOfDirtyObjects
          (FReplicationPrioritization *this,FNetBitArrayView *param_1)

{
  ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
  FVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
  FVar8;
  longlong lVar9;
  uint uVar10;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
  FVar11;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
  FVar12;
  bool bVar13;
  undefined1 auStackY_a68 [32];
  undefined1 local_a37 [7];
  FNetBitArrayView *local_a30;
  undefined8 local_a28;
  undefined4 local_a20;
  undefined8 local_a18;
  TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_> *local_a10;
  FScriptContainerElement *local_a08;
  FUpdateDirtyObjectsBatchHelper local_a00;
  uint local_848 [512];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a68;
  bVar13 = -1 < CpuChannel->Enabled;
  local_a30 = param_1;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId840,
               "FReplicationPrioritization_NotifyPrioritizersOfDirtyObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\ReplicationPrioritization.cpp"
               ,0x348);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId840);
  }
  FUpdateDirtyObjectsBatchHelper::FUpdateDirtyObjectsBatchHelper
            (&local_a00,this->NetRefHandleManager,(this->PrioritizerInfos).ArrayNum);
  uVar6 = FNetBitArrayHelper::GetSetBitIndices
                    (param_1->Storage,param_1->BitCount,0,0xffffffff,local_848,0x200);
  FVar12 = local_a00.PerPrioritizerInfos.AllocatorInstance.SecondaryData;
  while (local_a00.PerPrioritizerInfos.AllocatorInstance.SecondaryData = FVar12, uVar6 != 0) {
    FUpdateDirtyObjectsBatchHelper::PrepareBatch
              (&local_a00,local_848,uVar6,
               (uchar *)(this->ObjectIndexToPrioritizer).AllocatorInstance.Data);
    iVar4 = local_a00.PerPrioritizerInfos.ArrayNum;
    local_a10 = &this->NetRefHandleManager->ReplicatedObjectStateBuffers;
    local_a08 = (this->NetObjectPrioritizationInfos).AllocatorInstance.Data;
    FVar11 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
              )&local_a00;
    if (local_a00.PerPrioritizerInfos.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
         )0x0) {
      FVar11 = local_a00.PerPrioritizerInfos.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
             )((longlong)FVar11 + (longlong)local_a00.PerPrioritizerInfos.ArrayNum * 0x18);
    FVar12 = local_a00.PerPrioritizerInfos.AllocatorInstance.SecondaryData;
    while( true ) {
      if (local_a00.PerPrioritizerInfos.ArrayNum != iVar4) {
        local_a37[0] = 0;
        `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_a37);
        FVar12 = local_a00.PerPrioritizerInfos.AllocatorInstance.SecondaryData;
      }
      if (FVar11 == FVar1) break;
      if (*(int *)((longlong)FVar11 + 8) != 0) {
        local_a28 = *(undefined8 *)FVar11;
        local_a20 = *(undefined4 *)((longlong)FVar11 + 8);
        local_a18 = *(undefined8 *)((longlong)FVar11 + 0x10);
        FVar8 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
                 )&local_a00;
        if (FVar12 != (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
                       )0x0) {
          FVar8 = FVar12;
        }
        lVar9 = ((longlong)FVar11 - (longlong)FVar8) / 6 +
                ((longlong)FVar11 - (longlong)FVar8 >> 0x3f);
        uVar10 = (int)(lVar9 >> 2) - (int)(lVar9 >> 0x3f);
        uVar7 = 0;
        if ((int)uVar10 < (this->PrioritizerInfos).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)
                  ((this->PrioritizerInfos).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18);
        (**(code **)(*plVar2 + 0x2e8))(plVar2,&local_a28);
        FVar12 = local_a00.PerPrioritizerInfos.AllocatorInstance.SecondaryData;
      }
      FVar11 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
                )((longlong)FVar11 + 0x18);
    }
    if (local_848[uVar6 - 1] + 1 == local_a30->BitCount || uVar6 < 0x200) break;
    uVar6 = FNetBitArrayHelper::GetSetBitIndices
                      (local_a30->Storage,local_a30->BitCount,local_848[uVar6 - 1] + 1,0xffffffff,
                       local_848,0x200);
    FVar12 = local_a00.PerPrioritizerInfos.AllocatorInstance.SecondaryData;
  }
  if (local_a00.InstanceProtocolsStorage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a00.InstanceProtocolsStorage.AllocatorInstance.Data);
    FVar12 = local_a00.PerPrioritizerInfos.AllocatorInstance.SecondaryData;
  }
  if (local_a00.ObjectIndicesStorage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a00.ObjectIndicesStorage.AllocatorInstance.Data);
    FVar12 = local_a00.PerPrioritizerInfos.AllocatorInstance.SecondaryData;
  }
  if (FVar12 != (ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
                 )0x0) {
    FMemory::Free((void *)FVar12);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 1442c88f0

void __thiscall
UE::Net::Private::FReplicationPrioritization::OnMaxInternalNetRefIndexIncreased
          (FReplicationPrioritization *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  this->MaxInternalNetRefIndex = param_1;
  SetNetObjectListsSize(this,param_1);
  iVar3 = (this->PrioritizerInfos).ArrayNum;
  pFVar6 = (this->PrioritizerInfos).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar3 * 0x18;
  while( true ) {
    if ((this->PrioritizerInfos).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FPrioritizerInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar1) break;
    if (*(longlong *)pFVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar6 + 0x2c0))(*(longlong **)pFVar6,param_1);
    pFVar6 = pFVar6 + 0x18;
  }
  iVar3 = (this->ConnectionInfos).ArrayNum;
  pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)
           (this->ConnectionInfos).AllocatorInstance.Data;
  pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)pTVar7 + (longlong)iVar3 * 0x18);
  while( true ) {
    if ((this->ConnectionInfos).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FPerConnectionInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar7 == pTVar2) break;
    if (((ulonglong)pTVar7[1].AllocatorInstance.Data & 0x100000000) != 0) {
      ResizePrioritiesList(this,pTVar7,param_1);
    }
    pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)&pTVar7[1].ArrayNum;
  }
  return;
}

// Prioritize @ 1442d1500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
UE::Net::Private::FReplicationPrioritization::Prioritize
          (FReplicationPrioritization *this,FNetBitArrayView *param_1,FNetBitArrayView *param_2)

{
  FReplicationConnections *pFVar1;
  FReplicationWriter *this_00;
  float *pfVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  FNetBitArray *pFVar11;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
  FVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  longlong lVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  undefined1 auStack_238 [48];
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205 [5];
  uint *local_200;
  FNetBitArrayView local_1f8;
  FNetBitArrayView local_1e8;
  FPrioritizerBatchHelper local_1d8;
  ulonglong local_40;
  
  puVar16 = auStack_238;
  local_40 = __security_cookie.value ^ (ulonglong)&local_208;
  UpdatePrioritiesForNewAndDeletedObjects(this);
  NotifyPrioritizersOfDirtyObjects(this,param_2);
  uVar10 = 0;
  puVar17 = auStack_238;
  if (param_1->WordCount != 0) {
    do {
      if (param_1->Storage[uVar10] != 0) {
        iVar9 = (this->PrioritizerInfos).ArrayNum;
        pFVar15 = (this->PrioritizerInfos).AllocatorInstance.Data;
        pFVar14 = pFVar15 + (longlong)iVar9 * 0x18;
        while( true ) {
          if ((this->PrioritizerInfos).ArrayNum != iVar9) {
            local_208 = 0;
            `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FPrioritizerInfo,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_208);
          }
          if (pFVar15 == pFVar14) break;
          if (*(int *)(pFVar15 + 0x10) != 0) {
            if ((*(longlong *)pFVar15 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                   ,0x67,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (**(code **)(**(longlong **)pFVar15 + 0x2f0))(*(longlong **)pFVar15,&local_206);
          }
          pFVar15 = pFVar15 + 0x18;
        }
        uVar20 = param_1->BitCount;
        iVar9 = uVar20 * 4;
        if (iVar9 == 0) {
          puVar19 = (uint *)0x0;
        }
        else {
          uVar7 = iVar9 + 0xf;
          uVar10 = (ulonglong)uVar7 + 0xf;
          if (uVar10 <= uVar7) {
            uVar10 = 0xffffffffffffff0;
          }
          puVar16 = auStack_238 + -(uVar10 & 0xfffffffffffffff0);
          puVar19 = (uint *)((longlong)&local_200 + -(uVar10 & 0xfffffffffffffff0));
        }
        uVar7 = param_1->WordCount;
        puVar22 = param_1->Storage;
        uVar10 = 0;
        uVar23 = 0;
        uVar21 = 0;
        if (uVar7 != 0) {
          do {
            uVar8 = 0xffffffff;
            if (uVar21 == uVar7 - 1) {
              uVar8 = 0xffffffff >> (-(char)uVar20 & 0x1fU);
            }
            uVar13 = uVar23;
            for (uVar8 = uVar8 & *puVar22; uVar8 != 0; uVar8 = uVar8 >> 1) {
              if ((uVar8 & 1) != 0) {
                puVar19[uVar10] = uVar13;
                uVar10 = (ulonglong)((int)uVar10 + 1);
              }
              uVar13 = uVar13 + 1;
            }
            uVar21 = uVar21 + 1;
            puVar22 = puVar22 + 1;
            uVar23 = uVar23 + 0x20;
          } while (uVar21 < uVar7);
        }
        uVar20 = (this->PrioritizerInfos).ArrayNum;
        local_1d8.PerPrioritizerInfos.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
              )0x0;
        local_1d8.PerPrioritizerInfos.ArrayNum = 0;
        local_1d8.PerPrioritizerInfos.ArrayMax = 0x10;
        local_1d8.BatchInfo.CurrentObjectIndex = 0;
        if ((int)uVar20 < 1) {
          if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar16 + -8) = &UNK_1442d19c1;
            Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
          }
        }
        else {
          *(int **)(puVar16 + 0x28) = &local_1d8.PerPrioritizerInfos.ArrayMax;
          *(int **)(puVar16 + 0x20) = &local_1d8.PerPrioritizerInfos.ArrayNum;
          *(undefined8 *)(puVar16 + -8) = 0x1442d16dc;
          iVar9 = Core::Private::
                  ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>_>
                            (0x18,8,uVar20,
                             (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                              *)&local_1d8,*(int **)(puVar16 + 0x20),*(int **)(puVar16 + 0x28));
          FVar12 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                    )&local_1d8;
          if (local_1d8.PerPrioritizerInfos.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
               )0x0) {
            FVar12 = local_1d8.PerPrioritizerInfos.AllocatorInstance.SecondaryData;
          }
          *(undefined8 *)(puVar16 + -8) = 0x1442d16ff;
          DefaultConstructItems<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo,int>
                    ((FPerPrioritizerInfo *)((longlong)FVar12 + (longlong)iVar9 * 0x18),uVar20);
        }
        if ((int)uVar10 < 0) {
          *(undefined8 *)(puVar16 + -8) = 0x1442d1723;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        local_200 = puVar19 + (int)uVar10;
        if (puVar19 != local_200) {
          do {
            uVar20 = *puVar19;
            pFVar1 = this->Connections;
            uVar21 = ~uVar20 >> 0x1f;
            iVar9 = (pFVar1->ReplicationViews).ArrayNum;
            uVar7 = 0;
            if ((int)uVar20 < iVar9) {
              uVar7 = uVar21;
            }
            if (uVar7 == 0) {
              *(longlong *)(puVar16 + 0x28) = (longlong)iVar9;
              *(longlong *)(puVar16 + 0x20) = (longlong)(int)uVar20;
              *(undefined8 *)(puVar16 + -8) = 0x1442d1790;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            lVar18 = (longlong)(int)uVar20;
            if (0 < *(int *)((pFVar1->ReplicationViews).AllocatorInstance.Data +
                            lVar18 * 0x130 + 0x128)) {
              pFVar1 = this->Connections;
              pFVar14 = (pFVar1->ValidConnections).Storage.AllocatorInstance.Data;
              if ((pFVar1->ValidConnections).BitCount <= uVar20) {
                *(undefined8 *)(puVar16 + -8) = 0x1442d17e0;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L"");
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              if ((*(uint *)(pFVar14 + (ulonglong)(uVar20 >> 5) * 4) >> (uVar20 & 0x1f) & 1) == 0) {
                pFVar14 = (FScriptContainerElement *)0x0;
              }
              else {
                iVar9 = (pFVar1->Connections).ArrayNum;
                uVar7 = 0;
                if ((int)uVar20 < iVar9) {
                  uVar7 = uVar21;
                }
                if (uVar7 == 0) {
                  *(longlong *)(puVar16 + 0x28) = (longlong)iVar9;
                  *(longlong *)(puVar16 + 0x20) = lVar18;
                  *(undefined8 *)(puVar16 + -8) = 0x1442d1835;
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar6) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                pFVar14 = (pFVar1->Connections).AllocatorInstance.Data + lVar18 * 0x28;
              }
              this_00 = *(FReplicationWriter **)pFVar14;
              *(undefined8 *)(puVar16 + -8) = 0x1442d1860;
              pFVar11 = FReplicationWriter::GetObjectsRequiringPriorityUpdate(this_00);
              uVar7 = pFVar11->BitCount;
              if (uVar7 != 0) {
                pFVar14 = (pFVar11->Storage).AllocatorInstance.Data;
                *(undefined8 *)(puVar16 + -8) = 0x1442d1875;
                FNetBitArrayView::FNetBitArrayView(&local_1f8,(uint *)pFVar14,uVar7);
                local_1e8.Storage = local_1f8.Storage;
                local_1e8.WordCount = local_1f8.WordCount;
                local_1e8.BitCount = local_1f8.BitCount;
                *(undefined8 *)(puVar16 + -8) = 0x1442d1890;
                PrioritizeForConnection(this,uVar20,&local_1d8,&local_1e8);
                iVar9 = (this->ConnectionInfos).ArrayNum;
                uVar7 = 0;
                if ((int)uVar20 < iVar9) {
                  uVar7 = uVar21;
                }
                if (uVar7 == 0) {
                  *(longlong *)(puVar16 + 0x28) = (longlong)iVar9;
                  *(longlong *)(puVar16 + 0x20) = lVar18;
                  *(undefined8 *)(puVar16 + -8) = 0x1442d18ca;
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar6) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                pfVar2 = *(float **)((this->ConnectionInfos).AllocatorInstance.Data + lVar18 * 0x18)
                ;
                *(undefined8 *)(puVar16 + -8) = 0x1442d18e4;
                FReplicationWriter::UpdatePriorities(this_00,pfVar2);
              }
            }
            puVar19 = puVar19 + 1;
          } while (puVar19 != local_200);
        }
        iVar9 = (this->PrioritizerInfos).ArrayNum;
        pFVar15 = (this->PrioritizerInfos).AllocatorInstance.Data;
        pFVar14 = pFVar15 + (longlong)iVar9 * 0x18;
        while( true ) {
          if ((this->PrioritizerInfos).ArrayNum != iVar9) {
            local_207 = 0;
            *(undefined8 *)(puVar16 + -8) = 0x1442d1915;
            `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FPrioritizerInfo,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_207);
          }
          iVar5 = local_1d8.PerPrioritizerInfos.ArrayNum;
          if (pFVar15 == pFVar14) break;
          if (*(int *)(pFVar15 + 0x10) != 0) {
            if (*(longlong *)pFVar15 == 0) {
              *(undefined8 *)(puVar16 + -8) = 0x1442d1946;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                 ,0x67,L"");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            plVar3 = *(longlong **)pFVar15;
            pcVar4 = *(code **)(*plVar3 + 0x300);
            *(undefined8 *)(puVar16 + -8) = 0x1442d195c;
            (*pcVar4)(plVar3,local_205);
          }
          pFVar15 = pFVar15 + 0x18;
        }
        FVar12 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                  )&local_1d8;
        if (local_1d8.PerPrioritizerInfos.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
             )0x0) {
          FVar12 = local_1d8.PerPrioritizerInfos.AllocatorInstance.SecondaryData;
        }
        *(undefined8 *)(puVar16 + -8) = 0x1442d197f;
        DestructItems<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo,int>
                  ((FPerPrioritizerInfo *)FVar12,iVar5);
        FVar12 = local_1d8.PerPrioritizerInfos.AllocatorInstance.SecondaryData;
        puVar17 = puVar16;
        if (local_1d8.PerPrioritizerInfos.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
             )0x0) {
          *(undefined8 *)(puVar16 + -8) = 0x1442d1990;
          FMemory::Free((void *)FVar12);
        }
        break;
      }
      uVar20 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar20;
      puVar17 = auStack_238;
    } while (uVar20 < param_1->WordCount);
  }
  *(undefined8 *)(puVar17 + -8) = 0x1442d199f;
  return;
}

// PrioritizeForConnection @ 1442d3ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FReplicationPrioritization::PrioritizeForConnection
          (FReplicationPrioritization *this,uint param_1,FPrioritizerBatchHelper *param_2,
          FNetBitArrayView *param_3)

{
  ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
  *pFVar1;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
  FVar2;
  int iVar3;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
  FVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  FReplicationPrioritization *this_00;
  bool bVar8;
  EBatchProcessStatus EVar9;
  ForElementType<UE::Net::FReplicationView::FView> FVar10;
  uint uVar11;
  ForElementType<UE::Net::FReplicationView::FView> FVar12;
  longlong lVar13;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
  FVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  FPerConnectionInfo *pFVar18;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
  FVar19;
  uchar *puVar20;
  bool bVar21;
  undefined1 auStackY_238 [32];
  undefined1 local_1f7;
  undefined1 local_1f6;
  undefined1 local_1f5 [5];
  int *local_1f0;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
  local_1e8;
  FPerConnectionInfo *local_1e0;
  FNetBitArrayView *local_1d8;
  FReplicationPrioritization *local_1d0;
  FNetBitArrayView local_1c8;
  TArrayView<float,int> local_1b8;
  undefined8 local_1a8;
  undefined4 local_1a0;
  FScriptContainerElement *local_198;
  FScriptContainerElement *local_190;
  uint local_188;
  FReplicationView local_180;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar21 = -1 < CpuChannel->Enabled;
  local_1e8 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
               )param_2;
  local_1d8 = param_3;
  local_1d0 = this;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId735,"FReplicationPrioritization_PrioritizeForConnection",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\ReplicationPrioritization.cpp"
               ,0x2df);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId735);
  }
  uVar11 = 0;
  if ((int)param_1 < (this->ConnectionInfos).ArrayNum) {
    uVar11 = ~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_180.Views.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FReplicationView::FView>)0x0;
  local_180.Views.ArrayNum = 0;
  local_180.Views.ArrayMax = 4;
  local_1e0 = (FPerConnectionInfo *)
              ((this->ConnectionInfos).AllocatorInstance.Data + (longlong)(int)param_1 * 0x18);
  local_198 = (local_1e0->Priorities).AllocatorInstance.Data;
  local_190 = (this->NetObjectPrioritizationInfos).AllocatorInstance.Data;
  local_188 = param_1;
  FVar10 = (ForElementType<UE::Net::FReplicationView::FView>)
           FReplicationConnections::GetReplicationView(this->Connections,param_1);
  if ((ForElementType<UE::Net::FReplicationView::FView>)&local_180 != FVar10) {
    iVar3 = *(int *)((longlong)FVar10 + 0x128);
    if (*(ForElementType<UE::Net::FReplicationView::FView> *)((longlong)FVar10 + 0x120) !=
        (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
      FVar10 = *(ForElementType<UE::Net::FReplicationView::FView> *)((longlong)FVar10 + 0x120);
    }
    local_180.Views.ArrayNum = iVar3;
    if ((iVar3 != 0) || (local_180.Views.ArrayMax != 0)) {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationView::FView>_>
                (0x48,8,iVar3,local_180.Views.ArrayMax,
                 (ForElementType<UE::Net::FReplicationView::FView> *)&local_180,iVar3,
                 &local_180.Views.ArrayMax);
      FVar12 = (ForElementType<UE::Net::FReplicationView::FView>)&local_180;
      if (local_180.Views.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
        FVar12 = local_180.Views.AllocatorInstance.SecondaryData;
      }
      ConstructItems<UE::Net::FReplicationView::FView,UE::Net::FReplicationView::FView,int>
                ((void *)FVar12,(FView *)FVar10,iVar3);
    }
  }
  (param_2->BatchInfo).CurrentObjectIndex = 0;
  piVar17 = &(param_2->PerPrioritizerInfos).ArrayNum;
  FVar4 = (param_2->PerPrioritizerInfos).AllocatorInstance.SecondaryData;
  iVar3 = *piVar17;
  if (FVar4 != (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                )0x0) {
    param_2 = (FPrioritizerBatchHelper *)FVar4;
  }
  puVar20 = (uchar *)((longlong)param_2 + 0xc);
  local_1f0 = piVar17;
  while( true ) {
    if (*piVar17 != iVar3) {
      local_1f7 = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_1f7);
    }
    this_00 = local_1d0;
    pFVar18 = local_1e0;
    pFVar1 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
              *)(puVar20 + -0xc);
    if (pFVar1 == (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                   *)((longlong)param_2 + (longlong)iVar3 * 0x18)) break;
    pFVar5 = *(FScriptContainerElement **)pFVar1->InlineData;
    for (iVar15 = *(int *)(puVar20 + -4); iVar15 != 0; iVar15 = iVar15 + -1) {
      ::operator_delete(*(void **)pFVar5,0x1000);
      pFVar5 = pFVar5 + 8;
    }
    puVar20[-4] = '\0';
    puVar20[-3] = '\0';
    puVar20[-2] = '\0';
    puVar20[-1] = '\0';
    if (*(int *)puVar20 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)pFVar1,0,(int *)puVar20);
    }
    puVar20[4] = '\0';
    puVar20[5] = '\0';
    puVar20[6] = '\0';
    puVar20[7] = '\0';
    puVar20 = puVar20 + 0x18;
  }
  local_1c8.Storage = local_1d8->Storage;
  local_1c8.WordCount = local_1d8->WordCount;
  local_1c8.BitCount = local_1d8->BitCount;
  EVar9 = FPrioritizerBatchHelper::PrepareBatch
                    ((FPrioritizerBatchHelper *)local_1e8,local_1e0,&local_1c8,
                     (uchar *)(local_1d0->ObjectIndexToPrioritizer).AllocatorInstance.Data,
                     (float *)(local_1d0->DefaultPriorities).AllocatorInstance.Data);
  piVar17 = local_1f0;
  FVar4 = local_1e8;
  while (local_1f0 = piVar17, local_1e8 = FVar4, EVar9 != ProcessAllBatchesAndStop) {
    if (EVar9 != ProcessFullBatchesAndContinue) goto LAB_1442d455f;
    iVar3 = *piVar17;
    FVar19 = FVar4;
    if (*(ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
          *)((longlong)FVar4 + 0x180) !=
        (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
         )0x0) {
      FVar19 = *(ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                 *)((longlong)FVar4 + 0x180);
    }
    FVar2 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
             )((longlong)FVar19 + (longlong)iVar3 * 0x18);
    while( true ) {
      if (*piVar17 != iVar3) {
        local_1f6 = 0;
        `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_1f6);
      }
      pFVar18 = local_1e0;
      if (FVar19 == FVar2) break;
      if (0x3ff < *(uint *)((longlong)FVar19 + 0x10)) {
        if (*(undefined8 **)FVar19 == (undefined8 *)0x0) {
          local_1a8 = 0;
        }
        else {
          local_1a8 = **(undefined8 **)FVar19;
        }
        local_1a0 = 0x400;
        if (*(int *)((longlong)FVar19 + 0x10) < 0x400) {
          local_1a0 = *(undefined4 *)((longlong)FVar19 + 0x10);
        }
        FVar14 = FVar4;
        if (*(ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
              *)((longlong)FVar4 + 0x180) !=
            (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
             )0x0) {
          FVar14 = *(ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                     *)((longlong)FVar4 + 0x180);
        }
        lVar13 = ((longlong)FVar19 - (longlong)FVar14) / 6 +
                 ((longlong)FVar19 - (longlong)FVar14 >> 0x3f);
        uVar16 = (int)(lVar13 >> 2) - (int)(lVar13 >> 0x3f);
        uVar11 = 0;
        if ((int)uVar16 < (this_00->PrioritizerInfos).ArrayNum) {
          uVar11 = ~uVar16 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar6 = *(longlong **)
                  ((this_00->PrioritizerInfos).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x18
                  );
        (**(code **)(*plVar6 + 0x2f8))(plVar6,&local_1a8);
        TChunkedArrayWithChunkManagement<unsigned_int,4096>::PopChunkSafe
                  ((TChunkedArrayWithChunkManagement<unsigned_int,4096> *)FVar19);
      }
      FVar19 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                )((longlong)FVar19 + 0x18);
    }
    local_1c8.Storage = local_1d8->Storage;
    local_1c8.WordCount = local_1d8->WordCount;
    local_1c8.BitCount = local_1d8->BitCount;
    EVar9 = FPrioritizerBatchHelper::PrepareBatch
                      ((FPrioritizerBatchHelper *)FVar4,local_1e0,&local_1c8,
                       (uchar *)(this_00->ObjectIndexToPrioritizer).AllocatorInstance.Data,
                       (float *)(this_00->DefaultPriorities).AllocatorInstance.Data);
    piVar17 = local_1f0;
    FVar4 = local_1e8;
  }
  iVar3 = *piVar17;
  FVar19 = FVar4;
  if (*(ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
        *)((longlong)FVar4 + 0x180) !=
      (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
       )0x0) {
    FVar19 = *(ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
               *)((longlong)FVar4 + 0x180);
  }
  FVar2 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
           )((longlong)FVar19 + (longlong)iVar3 * 0x18);
  while( true ) {
    if (*piVar17 != iVar3) {
      local_1f5[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_1f5);
    }
    pFVar18 = local_1e0;
    if (FVar19 == FVar2) break;
    iVar15 = *(int *)((longlong)FVar19 + 0x10);
    while (0 < iVar15) {
      if (*(undefined8 **)FVar19 == (undefined8 *)0x0) {
        local_1a8 = 0;
      }
      else {
        local_1a8 = **(undefined8 **)FVar19;
      }
      local_1a0 = 0x400;
      if (*(int *)((longlong)FVar19 + 0x10) < 0x400) {
        local_1a0 = *(undefined4 *)((longlong)FVar19 + 0x10);
      }
      FVar14 = FVar4;
      if (*(ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
            *)((longlong)FVar4 + 0x180) !=
          (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
           )0x0) {
        FVar14 = *(ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                   *)((longlong)FVar4 + 0x180);
      }
      lVar13 = ((longlong)FVar19 - (longlong)FVar14) / 6 +
               ((longlong)FVar19 - (longlong)FVar14 >> 0x3f);
      uVar16 = (int)(lVar13 >> 2) - (int)(lVar13 >> 0x3f);
      uVar11 = 0;
      if ((int)uVar16 < (this_00->PrioritizerInfos).ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar6 = *(longlong **)
                ((this_00->PrioritizerInfos).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x18);
      (**(code **)(*plVar6 + 0x2f8))(plVar6,&local_1a8);
      TChunkedArrayWithChunkManagement<unsigned_int,4096>::PopChunkSafe
                ((TChunkedArrayWithChunkManagement<unsigned_int,4096> *)FVar19);
      piVar17 = local_1f0;
      iVar15 = *(int *)((longlong)FVar19 + 0x10);
    }
    FVar19 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
              )((longlong)FVar19 + 0x18);
  }
LAB_1442d455f:
  if (0 < CVar_ForceConnectionViewerPriority) {
    local_1b8.DataPtr = (float *)(pFVar18->Priorities).AllocatorInstance.Data;
    iVar3 = (pFVar18->Priorities).ArrayNum;
    if ((iVar3 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_1b8.ArrayNum = iVar3;
    SetHighPriorityOnViewTargets(this_00,&local_1b8,&local_180);
  }
  if (local_180.Views.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FMemory::Free((void *)local_180.Views.AllocatorInstance.SecondaryData);
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RemoveConnection @ 1442dea20

void __thiscall
UE::Net::Private::FReplicationPrioritization::RemoveConnection
          (FReplicationPrioritization *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  
  this->ConnectionCount = this->ConnectionCount - 1;
  lVar7 = (longlong)(int)param_1;
  uVar5 = 0;
  if ((int)param_1 < (this->ConnectionInfos).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ConnectionInfos).AllocatorInstance.Data;
  *(uint *)(pFVar2 + lVar7 * 0x18 + 0x14) = *(uint *)(pFVar2 + lVar7 * 0x18 + 0x14) & 0xfffffffe;
  *(undefined4 *)(pFVar2 + lVar7 * 0x18 + 8) = 0;
  pFVar2 = pFVar2 + lVar7 * 0x18;
  if (*(int *)(pFVar2 + 0xc) != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)pFVar2,0,(int *)(pFVar2 + 0xc));
  }
  iVar1 = (this->PrioritizerInfos).ArrayNum;
  pFVar6 = (this->PrioritizerInfos).AllocatorInstance.Data;
  pFVar2 = pFVar6 + (longlong)iVar1 * 0x18;
  while( true ) {
    if ((this->PrioritizerInfos).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FPrioritizerInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar2) break;
    if (*(longlong *)pFVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar6 + 0x2d0))(*(longlong **)pFVar6,param_1);
    pFVar6 = pFVar6 + 0x18;
  }
  return;
}

// ResizePrioritiesList @ 1442e0ae0

void __thiscall
UE::Net::Private::FReplicationPrioritization::ResizePrioritiesList
          (FReplicationPrioritization *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          uint param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar2 = param_1->ArrayNum;
  uVar7 = (ulonglong)iVar2;
  piVar1 = &param_1->ArrayNum;
  if (iVar2 < (int)param_2) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_2 - iVar2,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
  }
  else {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)param_2);
    }
    if ((int)param_2 < iVar2) {
      uVar8 = iVar2 - param_2;
      if (((int)(uVar8 | param_2) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (param_1->AllocatorInstance).Data + (longlong)(int)param_2 * 4;
        iVar5 = (*piVar1 - uVar8) - param_2;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 4,(longlong)iVar5 << 2);
        }
        *piVar1 = *piVar1 - uVar8;
      }
    }
  }
  if (iVar2 < (int)param_2) {
    lVar9 = uVar7 * 4;
    do {
      uVar6 = (uint)uVar7;
      uVar8 = 0;
      if ((int)uVar6 < *piVar1) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      *(undefined4 *)((param_1->AllocatorInstance).Data + lVar9) = 0x3f800000;
      lVar9 = lVar9 + 4;
    } while ((int)(uVar6 + 1) < (int)param_2);
  }
  return;
}

// SetHighPriorityOnViewTargets @ 1442e4400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FReplicationPrioritization::SetHighPriorityOnViewTargets
          (FReplicationPrioritization *this,TArrayView<float,int> *param_1,FReplicationView *param_2
          )

{
  int *piVar1;
  uint uVar2;
  ForElementType<UE::Net::FReplicationView::FView> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ForElementType<UE::Net::FNetHandle> FVar9;
  ForElementType<UE::Net::FNetHandle> FVar10;
  uint *puVar11;
  ForElementType<UE::Net::FNetHandle> FVar12;
  ForElementType<UE::Net::FNetHandle> FVar13;
  int iVar14;
  undefined1 auStack_138 [32];
  ForElementType<UE::Net::FNetHandle> local_118;
  ForElementType<UE::Net::FNetHandle> local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined1 local_e7 [7];
  FNetHandle_u_0 local_e0;
  ForElementType<UE::Net::FNetHandle> local_d8;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  FVar3 = (param_2->Views).AllocatorInstance.SecondaryData;
  piVar1 = &(param_2->Views).ArrayNum;
  iVar14 = *piVar1;
  FVar13 = (ForElementType<UE::Net::FNetHandle>)0x0;
  iVar6 = 0;
  local_d8.SecondaryData = (ForElementType<UE::Net::FNetHandle>)0x0;
  local_50 = 0;
  local_4c = 0x10;
  if (FVar3 != (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    param_2 = (FReplicationView *)FVar3;
  }
  FVar12 = (ForElementType<UE::Net::FNetHandle>)((longlong)param_2 + 8);
  do {
    if (*piVar1 != iVar14) {
      local_e8 = 0;
      `TCheckedPointerIterator<UE::Net::FReplicationView::FView_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_e8);
      FVar13 = local_d8.SecondaryData;
      iVar6 = local_50;
    }
    FVar10 = (ForElementType<UE::Net::FNetHandle>)((longlong)FVar12 - 8);
    if (FVar10 == (ForElementType<UE::Net::FNetHandle>)((longlong)param_2 + (longlong)iVar14 * 0x48)
       ) {
      FVar12 = (ForElementType<UE::Net::FNetHandle>)&local_d8;
      if (FVar13 != (ForElementType<UE::Net::FNetHandle>)0x0) {
        FVar12 = FVar13;
      }
      FVar13 = (ForElementType<UE::Net::FNetHandle>)((longlong)FVar12 + (longlong)iVar6 * 8);
      iVar14 = iVar6;
      do {
        if (iVar14 != iVar6) {
          local_e7[0] = 0;
          `TCheckedPointerIterator<UE::Net::FNetHandle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_e7);
        }
        if (FVar12 == FVar13) {
          if (local_d8.SecondaryData != (ForElementType<UE::Net::FNetHandle>)0x0) {
            FMemory::Free((void *)local_d8.SecondaryData);
          }
          return;
        }
        local_e0 = *(FNetHandle_u_0 *)FVar12;
        puVar11 = TMapBase<UE::Net::FNetHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,unsigned_int,0>_>
                  ::Find((TMapBase<UE::Net::FNetHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,unsigned_int,0>_>
                          *)&this->NetRefHandleManager->NetHandleToInternalIndex,
                         (FNetHandle *)&local_e0.Value);
        if (puVar11 != (uint *)0x0) {
          uVar2 = *puVar11;
          if (uVar2 != 0) {
            uVar8 = 0;
            if ((int)uVar2 < param_1->ArrayNum) {
              uVar8 = ~uVar2 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (local_118 = (ForElementType<UE::Net::FNetHandle>)(longlong)(int)uVar2,
               local_110 = (ForElementType<UE::Net::FNetHandle>)(longlong)param_1->ArrayNum,
               bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            param_1->DataPtr[(int)uVar2] = 1e+07;
          }
        }
        FVar12 = (ForElementType<UE::Net::FNetHandle>)((longlong)FVar12 + 8);
        iVar14 = local_50;
      } while( true );
    }
    if ((*(int *)FVar10 != 0) || (*(int *)((longlong)FVar12 + -4) != 0)) {
      FVar9 = (ForElementType<UE::Net::FNetHandle>)&local_d8;
      if (FVar13 != (ForElementType<UE::Net::FNetHandle>)0x0) {
        FVar9 = FVar13;
      }
      if ((ulonglong)FVar9 <= (ulonglong)FVar10) {
        FVar9 = (ForElementType<UE::Net::FNetHandle>)&local_d8;
        if (FVar13 != (ForElementType<UE::Net::FNetHandle>)0x0) {
          FVar9 = FVar13;
        }
        if ((ulonglong)FVar10 < (ulonglong)((longlong)FVar9 + (longlong)local_4c * 8)) {
          local_f8 = 8;
          local_100 = (longlong)iVar6;
          local_110 = (ForElementType<UE::Net::FNetHandle>)&local_d8;
          if (FVar13 != (ForElementType<UE::Net::FNetHandle>)0x0) {
            local_110 = FVar13;
          }
          local_118 = FVar10;
          local_108 = (longlong)local_4c;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          FVar13 = local_d8.SecondaryData;
          iVar6 = local_50;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      if (iVar6 == local_4c) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetHandle>_>
                          (0x408,&local_d8,&local_4c);
        FVar13 = local_d8.SecondaryData;
      }
      local_50 = iVar6 + 1;
      FVar9 = (ForElementType<UE::Net::FNetHandle>)&local_d8;
      if (FVar13 != (ForElementType<UE::Net::FNetHandle>)0x0) {
        FVar9 = FVar13;
      }
      *(undefined8 *)((longlong)FVar9 + (longlong)iVar6 * 8) = *(undefined8 *)FVar10;
      FVar13 = local_d8.SecondaryData;
      iVar6 = local_50;
    }
    iVar7 = (int)*(undefined8 *)FVar12;
    if ((iVar7 != *(int *)FVar10) &&
       ((iVar7 != 0 || ((int)((ulonglong)*(undefined8 *)FVar12 >> 0x20) != 0)))) {
      FVar10 = (ForElementType<UE::Net::FNetHandle>)&local_d8;
      if (FVar13 != (ForElementType<UE::Net::FNetHandle>)0x0) {
        FVar10 = FVar13;
      }
      if ((ulonglong)FVar10 <= (ulonglong)FVar12) {
        FVar10 = (ForElementType<UE::Net::FNetHandle>)&local_d8;
        if (FVar13 != (ForElementType<UE::Net::FNetHandle>)0x0) {
          FVar10 = FVar13;
        }
        if ((ulonglong)FVar12 < (ulonglong)((longlong)FVar10 + (longlong)local_4c * 8)) {
          local_f8 = 8;
          local_100 = (longlong)iVar6;
          local_110 = (ForElementType<UE::Net::FNetHandle>)&local_d8;
          if (FVar13 != (ForElementType<UE::Net::FNetHandle>)0x0) {
            local_110 = FVar13;
          }
          local_118 = FVar12;
          local_108 = (longlong)local_4c;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          FVar13 = local_d8.SecondaryData;
          iVar6 = local_50;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      if (iVar6 == local_4c) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetHandle>_>
                          (0x408,&local_d8,&local_4c);
        FVar13 = local_d8.SecondaryData;
      }
      local_50 = iVar6 + 1;
      FVar10 = (ForElementType<UE::Net::FNetHandle>)&local_d8;
      if (FVar13 != (ForElementType<UE::Net::FNetHandle>)0x0) {
        FVar10 = FVar13;
      }
      *(undefined8 *)((longlong)FVar10 + (longlong)iVar6 * 8) = *(undefined8 *)FVar12;
      FVar13 = local_d8.SecondaryData;
      iVar6 = local_50;
    }
    FVar12 = (ForElementType<UE::Net::FNetHandle>)((longlong)FVar12 + 0x48);
  } while( true );
}

// SetNetObjectListsSize @ 1442e4840

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationPrioritization::SetNetObjectListsSize
          (FReplicationPrioritization *this,uint param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  piVar1 = &(this->NetObjectPrioritizationInfos).ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < (int)param_1) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1 - iVar4,&(this->NetObjectPrioritizationInfos).AllocatorInstance,piVar1,
               &(this->NetObjectPrioritizationInfos).ArrayMax);
  }
  else {
    if ((int)param_1 < 0) goto LAB_1442e4a80;
    if ((int)param_1 < iVar4) {
      uVar6 = iVar4 - param_1;
      if ((int)(uVar6 | param_1) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar6 != 0) {
        pFVar7 = (this->NetObjectPrioritizationInfos).AllocatorInstance.Data +
                 (longlong)(int)param_1 * 8;
        iVar4 = (*piVar1 - uVar6) - param_1;
        if (iVar4 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar6 * 8,(longlong)iVar4 << 3);
        }
        *piVar1 = *piVar1 - uVar6;
      }
    }
  }
  iVar4 = (this->ObjectIndexToPrioritizer).ArrayNum;
  if (iVar4 < (int)param_1) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_1 - iVar4,&(this->ObjectIndexToPrioritizer).AllocatorInstance,
               &(this->ObjectIndexToPrioritizer).ArrayNum,&(this->ObjectIndexToPrioritizer).ArrayMax
              );
    pFVar7 = (this->ObjectIndexToPrioritizer).AllocatorInstance.Data + iVar4;
    goto LAB_1442e4a07;
  }
  if ((int)param_1 < 0) {
LAB_1442e4a80:
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)param_1);
  }
  if ((int)param_1 < iVar4) {
    uVar6 = iVar4 - param_1;
    if ((int)(uVar6 | param_1) < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (uVar6 == 0) goto LAB_1442e49d6;
    pFVar7 = (this->ObjectIndexToPrioritizer).AllocatorInstance.Data + (int)param_1;
    iVar5 = ((this->ObjectIndexToPrioritizer).ArrayNum - uVar6) - param_1;
    if (iVar5 != 0) {
      memmove(pFVar7,pFVar7 + (int)uVar6,(longlong)iVar5);
    }
    piVar1 = &(this->ObjectIndexToPrioritizer).ArrayNum;
    *piVar1 = *piVar1 - uVar6;
    pFVar7 = (this->ObjectIndexToPrioritizer).AllocatorInstance.Data + iVar4;
  }
  else {
LAB_1442e49d6:
    pFVar7 = (this->ObjectIndexToPrioritizer).AllocatorInstance.Data + iVar4;
    if (iVar4 <= (int)param_1) goto LAB_1442e4a07;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("(int32)MaxInternalIndex >= PreviousSize",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\ReplicationPrioritization.cpp"
                     ,0x158,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1442e4a07:
  memset(pFVar7,0xff,(longlong)(int)(param_1 - iVar4));
  ResizePrioritiesList(this,&this->DefaultPriorities,param_1);
  (this->ObjectsWithNewStaticPriority).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->ObjectsWithNewStaticPriority).Storage,param_1 + 0x1f >> 5,No);
  uVar6 = (this->ObjectsWithNewStaticPriority).BitCount;
  if (uVar6 != 0) {
    pFVar7 = (this->ObjectsWithNewStaticPriority).Storage.AllocatorInstance.Data +
             (longlong)(this->ObjectsWithNewStaticPriority).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar7 = *(uint *)pFVar7 & 0xffffffffU >> (-(char)uVar6 & 0x1fU);
  }
  return;
}

// SetPrioritizer @ 1442e4bf0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FReplicationPrioritization::SetPrioritizer
          (FReplicationPrioritization *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  UNetObjectPrioritizer *pUVar12;
  FReplicatedObjectData *pFVar13;
  uchar **ppuVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  uint *local_80;
  FName local_78;
  FString local_70;
  FScriptContainerElement *local_60;
  FReplicationInstanceProtocol *local_58;
  FReplicationProtocol *local_50;
  uchar *local_48;
  
  lVar16 = (longlong)(int)param_1;
  local_res18[0] = param_2;
  if (param_2 == 0xffffffff) {
    local_res20[0] = 0;
    bVar7 = `UE::Net::Private::FReplicationPrioritization::SetPrioritizer'::__l3::<lambda_1>::
            operator()(local_res20);
    if (!bVar7) {
      return false;
    }
  }
  uVar10 = (this->PrioritizerInfos).ArrayNum;
  if (uVar10 != 0) {
    if (uVar10 <= local_res18[0]) {
      local_80 = local_res18;
      bVar7 = `UE::Net::Private::FReplicationPrioritization::SetPrioritizer'::__l6::<lambda_2>::
              operator()(&local_80);
      if (!bVar7) {
        return false;
      }
    }
    uVar15 = ~param_1 >> 0x1f;
    uVar10 = 0;
    if ((int)param_1 < (this->DefaultPriorities).ArrayNum) {
      uVar10 = uVar15;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    *(undefined4 *)((this->DefaultPriorities).AllocatorInstance.Data + lVar16 * 4) = 0;
    uVar11 = 0;
    uVar10 = uVar11;
    if ((int)param_1 < (this->ObjectIndexToPrioritizer).ArrayNum) {
      uVar10 = uVar15;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar4 = (this->ObjectIndexToPrioritizer).AllocatorInstance.Data;
    uVar10 = uVar11;
    if ((int)param_1 < (this->NetObjectPrioritizationInfos).ArrayNum) {
      uVar10 = uVar15;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    FVar3 = pFVar4[lVar16];
    pFVar1 = (this->NetObjectPrioritizationInfos).AllocatorInstance.Data + lVar16 * 8;
    if ((byte)FVar3 != 0xff) {
      if (((this->PrioritizerInfos).ArrayNum <= (int)(uint)(byte)FVar3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      pFVar5 = (this->PrioritizerInfos).AllocatorInstance.Data;
      pFVar2 = pFVar5 + (ulonglong)(byte)FVar3 * 0x18 + 0x10;
      *(int *)pFVar2 = *(int *)pFVar2 + -1;
      pUVar12 = TStrongObjectPtr<UNetObjectPrioritizer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                ::operator->((TStrongObjectPtr<UNetObjectPrioritizer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                              *)(pFVar5 + (ulonglong)(byte)FVar3 * 0x18));
      (**(code **)(*(longlong *)pUVar12 + 0x2e0))(pUVar12,param_1,pFVar1);
    }
    pFVar13 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                        (this->NetRefHandleManager,param_1);
    *(undefined8 *)pFVar1 = 0;
    local_58 = pFVar13->InstanceProtocol;
    local_50 = pFVar13->Protocol;
    local_60 = pFVar1;
    ppuVar14 = TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
                         ((TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> *)
                          &this->NetRefHandleManager->ReplicatedObjectStateBuffers,param_1);
    lVar17 = (longlong)(int)local_res18[0];
    local_48 = *ppuVar14;
    uVar10 = uVar11;
    if ((int)local_res18[0] < (this->PrioritizerInfos).ArrayNum) {
      uVar10 = ~local_res18[0] >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar1 = (this->PrioritizerInfos).AllocatorInstance.Data + lVar17 * 0x18;
    if ((*(UObject **)&pFVar1->field_0x0 == (UObject *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    cVar9 = (**(code **)(*(longlong *)*(UObject **)&pFVar1->field_0x0 + 0x2d8))
                      (*(UObject **)&pFVar1->field_0x0,param_1,&local_60);
    if (cVar9 != '\0') {
      pFVar4[lVar16] = local_res18[0]._0_1_;
      *(int *)&pFVar1[0x10].field_0x0 = *(int *)&pFVar1[0x10].field_0x0 + 1;
      return true;
    }
    if (5 < (byte)LogIris._0_1_) {
      pUVar12 = TStrongObjectPtr<UNetObjectPrioritizer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                ::operator->((TStrongObjectPtr<UNetObjectPrioritizer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                              *)pFVar1);
      local_78.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
      local_78.Number = *(uint *)&pUVar12->field_0x1c;
      ::FName::GetPlainNameString(&local_78,&local_70);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    if (FVar3 != (FScriptContainerElement)0xff) {
      if ((int)param_1 < (this->DefaultPriorities).ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      *(undefined4 *)((this->DefaultPriorities).AllocatorInstance.Data + lVar16 * 4) = 0x3f800000;
      pFVar4[lVar16] = (FScriptContainerElement)0xff;
      FNetBitArray::SetBit(&this->ObjectsWithNewStaticPriority,param_1);
    }
  }
  return false;
}

// SetStaticPriority @ 1442e5160

void __thiscall
UE::Net::Private::FReplicationPrioritization::SetStaticPriority
          (FReplicationPrioritization *this,uint param_1,float param_2)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float local_res18 [2];
  float *local_res20;
  
  local_res18[0] = param_2;
  if (param_2 < 0.0) {
    local_res20 = local_res18;
    bVar6 = `UE::Net::Private::FReplicationPrioritization::SetStaticPriority'::__l3::<lambda_1>::
            operator()(&local_res20);
    if (!bVar6) {
      return;
    }
  }
  uVar8 = ~param_1 >> 0x1f;
  uVar7 = 0;
  if ((int)param_1 < (this->ObjectIndexToPrioritizer).ArrayNum) {
    uVar7 = uVar8;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = (this->ObjectIndexToPrioritizer).AllocatorInstance.Data;
  lVar9 = (longlong)(int)param_1;
  uVar7 = 0;
  if ((int)param_1 < (this->DefaultPriorities).ArrayNum) {
    uVar7 = uVar8;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->DefaultPriorities).AllocatorInstance.Data;
  FVar1 = pFVar2[lVar9];
  if ((FVar1 != (FScriptContainerElement)0xff) || (local_res18[0] != *(float *)(pFVar3 + lVar9 * 4))
     ) {
    *(float *)(pFVar3 + lVar9 * 4) = local_res18[0];
    if (FVar1 != (FScriptContainerElement)0xff) {
      uVar10 = (ulonglong)(byte)pFVar2[lVar9];
      if (((this->PrioritizerInfos).ArrayNum <= (int)(uint)(byte)pFVar2[lVar9]) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->PrioritizerInfos).AllocatorInstance.Data;
      *(int *)(pFVar3 + uVar10 * 0x18 + 0x10) = *(int *)(pFVar3 + uVar10 * 0x18 + 0x10) + -1;
      if ((*(longlong *)(pFVar3 + uVar10 * 0x18) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar4 = *(longlong **)(pFVar3 + uVar10 * 0x18);
      pcVar5 = *(code **)(*plVar4 + 0x2e0);
      uVar7 = 0;
      if ((int)param_1 < (this->NetObjectPrioritizationInfos).ArrayNum) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (*pcVar5)(plVar4,param_1,
                (this->NetObjectPrioritizationInfos).AllocatorInstance.Data + lVar9 * 8);
      pFVar2[lVar9] = (FScriptContainerElement)0xff;
    }
    pFVar2 = (this->ObjectsWithNewStaticPriority).Storage.AllocatorInstance.Data;
    if (((this->ObjectsWithNewStaticPriority).BitCount <= param_1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(uint *)(pFVar2 + (ulonglong)(param_1 >> 5) * 4) =
         *(uint *)(pFVar2 + (ulonglong)(param_1 >> 5) * 4) | 1 << (param_1 & 0x1f);
  }
  return;
}

// UpdatePrioritiesForNewAndDeletedObjects @ 1442eae70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001442eb00a) */

void __thiscall
UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects
          (FReplicationPrioritization *this)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  FNetRefHandleManager *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  code **ppcVar7;
  undefined ***pppuVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStackY_198 [32];
  <lambda_1> local_147;
  undefined1 local_146 [6];
  uint local_140 [2];
  uint local_138;
  ForAnyElementType local_130;
  int local_128;
  int local_124;
  uint local_120;
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  FNetBitArrayView local_108;
  <lambda_1> local_f8;
  FNetBitArrayView local_f0;
  code *local_d8;
  undefined **local_c8;
  ForAnyElementType *local_c0;
  FReplicationPrioritization *local_b8;
  undefined ***local_b0;
  code *local_a8;
  undefined **local_98;
  code *local_90;
  undefined ***local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId658,
               "FReplicationPrioritization_UpdatePrioritiesForNewAndDeletedObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\ReplicationPrioritization.cpp"
               ,0x292);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId658);
  }
  pFVar3 = this->NetRefHandleManager;
  if (((pFVar3->ScopeFrameData).bIsValid == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScopeFrameData.bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                         ,0xf2,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNetBitArrayView::FNetBitArrayView
            (&local_f0,
             (uint *)(pFVar3->ScopeFrameData).PrevFrameScopableInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar3->ScopeFrameData).PrevFrameScopableInternalIndices.BitCount);
  pFVar3 = this->NetRefHandleManager;
  if (((pFVar3->ScopeFrameData).bIsValid == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScopeFrameData.bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                         ,0xef,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNetBitArrayView::FNetBitArrayView
            (&local_108,
             (uint *)(pFVar3->ScopeFrameData).CurrentFrameScopableInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar3->ScopeFrameData).CurrentFrameScopableInternalIndices.BitCount);
  uVar18 = 0;
  local_130.Data = (FScriptContainerElement *)0x0;
  local_c8 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_98 = &___7__TFunction_OwnedObject_P6AXI_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_c0 = &local_130;
  local_90 = `UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'
             ::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_78[0] = Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(unsigned_int),void,unsigned_int>::Call;
  local_80 = (undefined ***)0x0;
  local_a8 = Core::Private::Function::
             TFunctionRefCaller<void_(__cdecl*)(unsigned_int),void,unsigned_int>::Call;
  if (this->ConnectionCount != 0) {
    local_78[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::__l2::<lambda_3>,void,unsigned_int>
                  ::Call;
  }
  local_128 = 0;
  local_b0 = (undefined ***)0x0;
  local_124 = 0;
  local_b8 = this;
  local_d8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::__l2::<lambda_3>,void,unsigned_int>
             ::Call;
  local_50 = (code **)0x0;
  local_f8.__this = this;
  if (local_78[0] != (code *)0x0) {
    pppuVar8 = &local_c8;
    if (this->ConnectionCount == 0) {
      pppuVar8 = &local_98;
    }
    (*(code *)**pppuVar8)(pppuVar8,local_78 + 2);
  }
  if (this->ConnectionCount != 0) {
    uVar14 = this->MaxInternalNetRefIndex;
    if (0x400 < uVar14) {
      uVar14 = 0x400;
    }
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if (local_124 < (int)uVar14) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar14,&local_130,local_128,&local_124);
    }
  }
  if ((local_108.BitCount != local_f0.BitCount) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetNumBits() == B.GetNumBits()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x677,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_147 = (<lambda_1>)0x0;
  FNetBitArrayHelper::
  ForAllExclusiveBitsByPredicate<TFunction<void___cdecl(unsigned_int)>_&,_UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects_::__l2::<lambda_1>_&,_UE::Net::FNetBitArrayHelper::ForAllExclusiveBits<TFunction<void___cdecl(unsigned_int)>_&,_UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects_::__l2::<lambda_1>_&>_::__l2::<lambda_1>_const_&>
            (local_108.Storage,local_f0.Storage,local_108.WordCount,local_108.BitCount,
             (TFunction<void___cdecl(unsigned_int)> *)local_78,&local_f8,&local_147);
  if (ZPULL(*(undefined4 *)&this->field_0x90,0,1) != 0) {
    *(uint *)&this->field_0x90 = *(undefined4 *)&this->field_0x90 & 0xfffffffe;
    if (this->ConnectionCount != 0) {
      uVar14 = (this->ObjectsWithNewStaticPriority).Storage.ArrayNum;
      pFVar13 = (this->ObjectsWithNewStaticPriority).Storage.AllocatorInstance.Data;
      uVar9 = 0xffffffff >> (-(char)(this->ObjectsWithNewStaticPriority).BitCount & 0x1fU);
      local_120 = uVar14 - 1;
      local_118 = (FScriptContainerElement *)CONCAT44(local_118._4_4_,uVar9);
      local_138 = uVar14;
      uVar6 = local_120;
      uVar17 = uVar18;
      if (uVar14 != 0) {
        do {
          uVar12 = 0xffffffff;
          if (uVar18 == uVar6) {
            uVar12 = uVar9;
          }
          uVar12 = uVar12 & *(uint *)pFVar13;
          uVar10 = uVar17;
          if (uVar12 != 0) {
            do {
              if ((uVar12 & 1) != 0) {
                local_140[0] = uVar10;
                if (((local_130.Data <= (FScriptContainerElement *)local_140) &&
                    ((FScriptContainerElement *)local_140 < local_130.Data + (longlong)local_124 * 4
                    )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (local_128 == local_124) {
                  local_128 = Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&local_130,&local_124);
                }
                *(uint *)(local_130.Data + (longlong)local_128 * 4) = local_140[0];
                local_128 = local_128 + 1;
              }
              uVar12 = uVar12 >> 1;
              uVar10 = uVar10 + 1;
            } while (uVar12 != 0);
            uVar14 = local_138;
            uVar9 = (uint)local_118;
            uVar6 = local_120;
          }
          uVar18 = uVar18 + 1;
          pFVar13 = pFVar13 + 4;
          uVar17 = uVar17 + 0x20;
        } while (uVar18 < uVar14);
      }
    }
    memset((this->ObjectsWithNewStaticPriority).Storage.AllocatorInstance.Data,0,
           (longlong)(this->ObjectsWithNewStaticPriority).Storage.ArrayNum << 2);
  }
  local_138 = local_128;
  if ((0 < local_128) && (this->ConnectionCount != 0)) {
    local_118 = local_130.Data;
    local_120 = (this->ConnectionInfos).ArrayNum;
    uVar15 = (ulonglong)(int)local_120;
    pFVar16 = (this->ConnectionInfos).AllocatorInstance.Data;
    pFVar13 = pFVar16 + uVar15 * 0x18;
    local_110 = pFVar13;
    while( true ) {
      if ((this->ConnectionInfos).ArrayNum != (int)uVar15) {
        local_146[0] = 0;
        `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FPerConnectionInfo,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_146);
      }
      if (pFVar16 == pFVar13) break;
      if (((byte)pFVar16[0x14] & 1) != 0) {
        pFVar1 = local_118 + (longlong)(int)local_138 * 4;
        for (pFVar11 = local_118; pFVar11 != pFVar1; pFVar11 = pFVar11 + 4) {
          uVar18 = *(uint *)pFVar11;
          uVar14 = 0;
          if ((int)uVar18 < (this->DefaultPriorities).ArrayNum) {
            uVar14 = ~uVar18 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar2 = *(undefined4 *)
                   ((this->DefaultPriorities).AllocatorInstance.Data + (longlong)(int)uVar18 * 4);
          uVar14 = 0;
          if ((int)uVar18 < *(int *)(pFVar16 + 8)) {
            uVar14 = ~uVar18 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined4 *)(*(longlong *)pFVar16 + (longlong)(int)uVar18 * 4) = uVar2;
          pFVar13 = local_110;
        }
      }
      pFVar16 = pFVar16 + 0x18;
      uVar15 = (ulonglong)local_120;
    }
  }
  if (local_78[0] != (code *)0x0) {
    ppcVar7 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar7 = local_50;
    }
    (**(code **)(*ppcVar7 + 0x10))();
  }
  if (local_d8 != (code *)0x0) {
    pppuVar8 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar8 = local_b0;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar8 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar8 = local_80;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ~FReplicationPrioritization @ 1442f8d50

void __thiscall
UE::Net::Private::FReplicationPrioritization::~FReplicationPrioritization
          (FReplicationPrioritization *this)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = (this->ObjectsWithNewStaticPriority).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultPriorities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Net::Private::FReplicationPrioritization::FPerConnectionInfo,int>
            ((FPerConnectionInfo *)(this->ConnectionInfos).AllocatorInstance.Data,
             (this->ConnectionInfos).ArrayNum);
  pFVar1 = (this->ConnectionInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Net::Private::FReplicationPrioritization::FPrioritizerInfo,int>
            ((FPrioritizerInfo *)(this->PrioritizerInfos).AllocatorInstance.Data,
             (this->PrioritizerInfos).ArrayNum);
  pFVar1 = (this->PrioritizerInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectIndexToPrioritizer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NetObjectPrioritizationInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pUVar2 = (this->PrioritizerDefinitions).Object;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->PrioritizerDefinitions).Object = (UObject *)0x0;
  }
  return;
}

// operator() @ 1504b8520

bool __thiscall
`UE::Net::Private::FReplicationPrioritization::SetPrioritizer'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8551252196681843104>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8551252196681843104>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b8570

bool __thiscall
`UE::Net::Private::FReplicationPrioritization::SetStaticPriority'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8551252196681843077>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8551252196681843077>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504b8a50

bool __thiscall
`UE::Net::Private::FReplicationPrioritization::SetPrioritizer'::__l6::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8551252196681843109>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8551252196681843109>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

