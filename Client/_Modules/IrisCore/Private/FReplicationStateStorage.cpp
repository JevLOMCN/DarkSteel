// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 25

// FReplicationStateStorage @ 1441f8e50

FReplicationStateStorage * __thiscall
UE::Net::FReplicationStateStorage::FReplicationStateStorage(FReplicationStateStorage *this)

{
  undefined1 *puVar1;
  
  *(undefined8 *)&this->BaselineStorageValidation = 0;
  *(undefined8 *)&(this->BaselineStorageValidation).field_0x8 = 0;
  *(undefined8 *)&(this->BaselineStorageValidation).field_0x20 = 0;
  *(undefined4 *)&(this->BaselineStorageValidation).field_0x28 = 0;
  *(undefined4 *)&(this->BaselineStorageValidation).field_0x2c = 0x80;
  *(undefined4 *)&(this->BaselineStorageValidation).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BaselineStorageValidation).field_0x34 = 0;
  *(undefined8 *)&(this->BaselineStorageValidation).field_0x40 = 0;
  *(undefined4 *)&(this->BaselineStorageValidation).field_0x48 = 0;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  FNetSerializationContext::FNetSerializationContext
            (&this->SerializationContext,(FNetBitStreamReader *)0x0,(FNetBitStreamWriter *)0x0);
  (this->InternalSerializationContext).bDowngradeAutonomousProxyRole = 0;
  (this->InternalSerializationContext).bSerializeObjectReferencesAsRemoteIds = 0;
  (this->InternalSerializationContext).bInlineObjectReferenceExports = 0;
  (this->InternalSerializationContext).ReplicationSystem = (UReplicationSystem *)0x0;
  (this->InternalSerializationContext).ObjectReferenceCache = (FObjectReferenceCache *)0x0;
  (this->InternalSerializationContext).ResolveContext.RemoteNetTokenStoreState =
       (FNetTokenStoreState *)0x0;
  (this->InternalSerializationContext).ResolveContext.ConnectionId = 0;
  (this->InternalSerializationContext).ResolveContext.AsyncLoadingPriority = -1;
  (this->InternalSerializationContext).ResolveContext.bForceSyncLoad = false;
  (this->InternalSerializationContext).PackageMap = (UIrisObjectReferencePackageMap *)0x0;
  (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedPerObjectInfos).Storage.ArrayNum = 0;
  (this->UsedPerObjectInfos).Storage.ArrayMax = 0;
  (this->UsedPerObjectInfos).BitCount = 0;
  (this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectIndexToObjectInfoIndex).ArrayNum = 0;
  (this->ObjectIndexToObjectInfoIndex).ArrayMax = 0;
  TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
  ::
  TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
            (&this->ObjectInfos,0);
  return this;
}

// ~FReplicationStateStorage @ 1441f9e40

void __thiscall
UE::Net::FReplicationStateStorage::~FReplicationStateStorage(FReplicationStateStorage *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  TIndirectArray<TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            (&(this->ObjectInfos).Chunks);
  pFVar1 = (this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->BaselineStorageValidation).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BaselineStorageValidation).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AllocBaseline @ 1441fb720

uchar * __thiscall
UE::Net::FReplicationStateStorage::AllocBaseline
          (FReplicationStateStorage *this,uint param_1,EReplicationStateType param_2)

{
  FReplicationProtocol *pFVar1;
  code *pcVar2;
  bool bVar3;
  FPerObjectInfo *pFVar4;
  uchar *puVar5;
  uint local_res10 [4];
  FLLMScope local_res20 [2];
  TPairInitializer<unsigned_int_const_&,void_const_*_&&> local_58;
  FReplicationStateStorage *local_48;
  uchar *local_40;
  FMemScope local_38;
  uint *local_30;
  uchar **local_28;
  
  local_res10[0] = param_1;
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_IrisState.UniqueName,false,None,Default,true);
  local_58._4_8_ = LLMTagDeclaration_IrisState.UniqueName;
  FMemScope::FMemScope(&local_38,(FName *)((longlong)&local_58.Key + 4),true);
  pFVar4 = GetOrCreatePerObjectInfoForObject(this,local_res10[0]);
  if ((pFVar4 != (FPerObjectInfo *)0x0) ||
     (local_48 = this,
     bVar3 = `UE::Net::FReplicationStateStorage::AllocBaseline'::__l3::<lambda_1>::operator()
                       (&local_48), bVar3)) {
    pFVar1 = pFVar4->Protocol;
    if (param_2 == UninitializedState) {
      puVar5 = FMemory::Malloc((ulonglong)pFVar1->InternalTotalSize,pFVar1->InternalTotalAlignment);
    }
    else if (param_2 == ZeroedState) {
      puVar5 = FMemory::MallocZeroed
                         ((ulonglong)pFVar1->InternalTotalSize,pFVar1->InternalTotalAlignment);
    }
    else if (param_2 == DefaultState) {
      puVar5 = FMemory::Malloc((ulonglong)pFVar1->InternalTotalSize,pFVar1->InternalTotalAlignment);
      CloneDefaultState(this,pFVar4->Protocol,puVar5);
    }
    else if (param_2 == CurrentSendState) {
      puVar5 = FMemory::Malloc((ulonglong)pFVar1->InternalTotalSize,pFVar1->InternalTotalAlignment);
      Net::Private::FReplicationProtocolOperationsInternal::CloneQuantizedState
                (&this->SerializationContext,puVar5,pFVar4->StateBuffers[0],pFVar1);
    }
    else {
      if (param_2 != CurrentRecvState) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateStorage.cpp"
                           ,0x98,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          puVar5 = (uchar *)(*pcVar2)();
          return puVar5;
        }
        goto LAB_1441fb7e6;
      }
      puVar5 = FMemory::Malloc((ulonglong)pFVar1->InternalTotalSize,pFVar1->InternalTotalAlignment);
      Net::Private::FReplicationProtocolOperationsInternal::CloneQuantizedState
                (&this->SerializationContext,puVar5,pFVar4->StateBuffers[1],pFVar1);
    }
    pFVar4->AllocationCount = pFVar4->AllocationCount + 1;
    if ((puVar5 == (uchar *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Storage != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateStorage.cpp"
                           ,0xa1,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar2)();
      return puVar5;
    }
    local_30 = local_res10;
    local_28 = &local_40;
    local_40 = puVar5;
    TSet<TTuple<unsigned_int,void_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,void_const_*,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,void_const_*_&&>_>
              ((TSet<TTuple<unsigned_int,void_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,void_const_*,1>,FDefaultSetAllocator>
                *)this,&local_58,(bool *)&local_30);
  }
  else {
LAB_1441fb7e6:
    puVar5 = (uchar *)0x0;
  }
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res20);
  return puVar5;
}

// AllocPerObjectInfo @ 1441fb900

ushort __thiscall
UE::Net::FReplicationStateStorage::AllocPerObjectInfo(FReplicationStateStorage *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  longlong lVar8;
  FPerObjectInfo *pFVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar10 = (this->UsedPerObjectInfos).Storage.ArrayNum;
  uVar1 = (this->UsedPerObjectInfos).BitCount;
  pFVar2 = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  uVar11 = 0;
  iVar12 = 0;
  if (uVar10 != 0) {
    lVar8 = 0;
    do {
      if (*(uint *)(pFVar2 + lVar8) != 0xffffffff) {
        uVar10 = ~*(uint *)(pFVar2 + lVar8);
        iVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        iVar7 = 0x20;
        if (uVar10 != 0) {
          iVar7 = iVar3;
        }
        uVar10 = 0xffffffff;
        if ((uint)(iVar7 + iVar12) < uVar1) {
          uVar10 = iVar7 + iVar12;
        }
        if (uVar10 == 0xffffffff) {
          return 0;
        }
        if ((uVar1 <= uVar10) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2a2,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
        *(uint *)(pFVar2 + (ulonglong)(uVar10 >> 5) * 4) =
             *(uint *)(pFVar2 + (ulonglong)(uVar10 >> 5) * 4) | 1 << (uVar10 & 0x1f);
        if ((uint)(this->ObjectInfos).NumElements <= uVar10) {
          TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
          ::Add(&this->ObjectInfos,0x100);
        }
        pFVar9 = TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
                 ::operator[](&this->ObjectInfos,uVar10);
        pFVar9->Protocol = (FReplicationProtocol *)0x0;
        pFVar9->StateBuffers[0] = (uchar *)0x0;
        pFVar9->StateBuffers[1] = (uchar *)0x0;
        *(undefined8 *)&pFVar9->AllocationCount = 0;
        return (ushort)uVar10;
      }
      uVar11 = uVar11 + 1;
      lVar8 = lVar8 + 4;
      iVar12 = iVar12 + 0x20;
    } while (uVar11 < uVar10);
  }
  return 0;
}

// CancelBaselineReservation @ 1442010a0

void __thiscall
UE::Net::FReplicationStateStorage::CancelBaselineReservation
          (FReplicationStateStorage *this,uint param_1,uchar *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPerObjectInfo *pFVar4;
  uint local_res10 [2];
  uchar *local_res18 [2];
  uchar **local_18;
  uint *local_10;
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  pFVar4 = GetPerObjectInfoForObject(this,param_1);
  if (pFVar4 == (FPerObjectInfo *)0x0) {
    local_18 = local_res18;
    local_10 = local_res10;
    bVar2 = `UE::Net::FReplicationStateStorage::CancelBaselineReservation'::__l3::<lambda_1>::
            operator()(&local_18);
    if (!bVar2) {
      return;
    }
  }
  iVar3 = TMultiMap<unsigned_int,void_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,void_const_*,1>_>
          ::RemoveSingle(&this->BaselineStorageValidation,local_res10[0],local_res18[0]);
  if ((iVar3 != 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RemovedCount == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateStorage.cpp"
                         ,0x103,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FMemory::Free(local_res18[0]);
  pFVar4->AllocationCount = pFVar4->AllocationCount - 1;
  if (pFVar4->AllocationCount == 0) {
    FreePerObjectInfoForObject(this,local_res10[0]);
  }
  return;
}

// CloneDefaultState @ 144201160

void __thiscall
UE::Net::FReplicationStateStorage::CloneDefaultState
          (FReplicationStateStorage *this,FReplicationProtocol *param_1,uchar *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  FReplicationProtocolOperations::InitializeFromDefaultState
            (&this->SerializationContext,param_2,param_1);
  if ((this->SerializationContext).ErrorContext.Error != (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!SerializationContext.HasError()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateStorage.cpp"
                       ,0x1a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// CloneState @ 1442011c0

void __thiscall
UE::Net::FReplicationStateStorage::CloneState
          (FReplicationStateStorage *this,FReplicationProtocol *param_1,uchar *param_2,
          uchar *param_3)

{
  Net::Private::FReplicationProtocolOperationsInternal::CloneQuantizedState
            (&this->SerializationContext,param_2,param_3,param_1);
  return;
}

// CommitBaselineReservation @ 1442015f0

void __thiscall
UE::Net::FReplicationStateStorage::CommitBaselineReservation
          (FReplicationStateStorage *this,uint param_1,uchar *param_2,EReplicationStateType param_3)

{
  longlong lVar1;
  longlong lVar2;
  FReplicationProtocol *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPerObjectInfo *pFVar7;
  int iVar8;
  undefined1 *puVar9;
  uint local_res10 [2];
  uchar *local_res18;
  uchar **local_18;
  uint *local_10;
  
  iVar6 = *(int *)&(this->BaselineStorageValidation).field_0x48;
  local_res10[0] = param_1;
  local_res18 = param_2;
  if (iVar6 != 0) {
    puVar9 = *(undefined1 **)&(this->BaselineStorageValidation).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->BaselineStorageValidation).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + ((longlong)iVar6 - 1U & (longlong)(int)param_1) * 4);
    iVar8 = iVar6;
    if (iVar6 != -1) {
      do {
        iVar6 = *(int *)(*(longlong *)&this->BaselineStorageValidation + 0x10 +
                        (longlong)iVar8 * 0x18);
        if (*(uint *)(*(longlong *)&this->BaselineStorageValidation + (longlong)iVar8 * 0x18) ==
            param_1) break;
        iVar8 = iVar6;
      } while (iVar6 != -1);
    }
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->BaselineStorageValidation;
      while (lVar1 = (longlong)iVar8 * 3 + 1, *(uchar **)(lVar2 + lVar1 * 8) != param_2) {
        do {
          iVar8 = iVar6;
          if (iVar8 == -1) goto LAB_1442016b0;
          iVar6 = *(int *)(lVar2 + 0x10 + (longlong)iVar8 * 0x18);
        } while (*(uint *)(lVar2 + (longlong)iVar8 * 0x18) != param_1);
      }
      if (lVar2 + lVar1 * 8 != 0) goto LAB_1442016db;
    }
  }
LAB_1442016b0:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("BaselineStorageValidation.FindPair(ObjectIndex, Storage) != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateStorage.cpp"
                     ,0x113,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1442016db:
  pFVar7 = GetPerObjectInfoForObject(this,local_res10[0]);
  if (pFVar7 == (FPerObjectInfo *)0x0) {
    local_18 = &local_res18;
    local_10 = local_res10;
    bVar5 = `UE::Net::FReplicationStateStorage::CommitBaselineReservation'::__l11::<lambda_1>::
            operator()(&local_18);
    if (!bVar5) {
      return;
    }
  }
  pFVar3 = pFVar7->Protocol;
  if (param_3 == ZeroedState) {
    memset(local_res18,0,(ulonglong)pFVar3->InternalTotalSize);
  }
  else {
    if (param_3 == DefaultState) {
      CloneDefaultState(this,pFVar3,local_res18);
      return;
    }
    if (param_3 == CurrentSendState) {
      Net::Private::FReplicationProtocolOperationsInternal::CloneQuantizedState
                (&this->SerializationContext,local_res18,pFVar7->StateBuffers[0],pFVar3);
      return;
    }
    if (param_3 == CurrentRecvState) {
      Net::Private::FReplicationProtocolOperationsInternal::CloneQuantizedState
                (&this->SerializationContext,local_res18,pFVar7->StateBuffers[1],pFVar3);
      return;
    }
  }
  return;
}

// Deinit @ 144206df0

void __thiscall UE::Net::FReplicationStateStorage::Deinit(FReplicationStateStorage *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(int *)&(this->BaselineStorageValidation).field_0x8 !=
      *(int *)&(this->BaselineStorageValidation).field_0x34) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaselineStorageValidation.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateStorage.cpp"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FreeBaseline @ 144209c40

void __thiscall
UE::Net::FReplicationStateStorage::FreeBaseline
          (FReplicationStateStorage *this,uint param_1,uchar *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPerObjectInfo *pFVar4;
  uint local_res10 [2];
  uchar *local_res18 [2];
  uchar **local_18;
  uint *local_10;
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  pFVar4 = GetPerObjectInfoForObject(this,param_1);
  if (pFVar4 == (FPerObjectInfo *)0x0) {
    local_18 = local_res18;
    local_10 = local_res10;
    bVar2 = `UE::Net::FReplicationStateStorage::FreeBaseline'::__l3::<lambda_1>::operator()
                      (&local_18);
    if (!bVar2) {
      return;
    }
  }
  iVar3 = TMultiMap<unsigned_int,void_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,void_const_*,1>_>
          ::RemoveSingle(&this->BaselineStorageValidation,local_res10[0],local_res18[0]);
  if ((iVar3 != 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RemovedCount == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateStorage.cpp"
                         ,0xb4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((((pFVar4->Protocol->ProtocolTraits & HasDynamicState) != None) &&
      (Net::Private::FReplicationProtocolOperationsInternal::FreeDynamicState
                 (&this->SerializationContext,local_res18[0],pFVar4->Protocol),
      (this->SerializationContext).ErrorContext.Error != (FName)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SerializationContext.HasError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateStorage.cpp"
                         ,0x1aa,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FMemory::Free(local_res18[0]);
  pFVar4->AllocationCount = pFVar4->AllocationCount - 1;
  if (pFVar4->AllocationCount == 0) {
    FreePerObjectInfoForObject(this,local_res10[0]);
  }
  return;
}

// FreePerObjectInfo @ 144209d50

void __thiscall
UE::Net::FReplicationStateStorage::FreePerObjectInfo(FReplicationStateStorage *this,ushort param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  if ((this->UsedPerObjectInfos).BitCount <= (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = pFVar1 + (ulonglong)(param_1 >> 5) * 4;
  *(uint *)pFVar1 = *(uint *)pFVar1 & ~(1 << (param_1 & 0x1f));
  return;
}

// FreePerObjectInfoForObject @ 144209dd0

void __thiscall
UE::Net::FReplicationStateStorage::FreePerObjectInfoForObject
          (FReplicationStateStorage *this,uint param_1)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((int)param_1 < (this->ObjectIndexToObjectInfoIndex).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data;
  uVar1 = *(ushort *)(pFVar2 + (longlong)(int)param_1 * 2);
  if (uVar1 != 0) {
    pFVar3 = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
    if ((this->UsedPerObjectInfos).BitCount <= (uint)uVar1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = pFVar3 + (ulonglong)(uVar1 >> 5) * 4;
    *(uint *)pFVar3 = *(uint *)pFVar3 & ~(1 << (uVar1 & 0x1f));
    *(undefined2 *)(pFVar2 + (longlong)(int)param_1 * 2) = 0;
  }
  return;
}

// FreeState @ 144209ec0

void __thiscall
UE::Net::FReplicationStateStorage::FreeState
          (FReplicationStateStorage *this,FReplicationProtocol *param_1,uchar *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1->ProtocolTraits & HasDynamicState) != None) {
    Net::Private::FReplicationProtocolOperationsInternal::FreeDynamicState
              (&this->SerializationContext,param_2,param_1);
    if ((this->SerializationContext).ErrorContext.Error != (FName)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SerializationContext.HasError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateStorage.cpp"
                         ,0x1aa,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// GetOrCreatePerObjectInfoForObject @ 14420b200

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FPerObjectInfo * __thiscall
UE::Net::FReplicationStateStorage::GetOrCreatePerObjectInfoForObject
          (FReplicationStateStorage *this,uint param_1)

{
  ushort uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FPerObjectInfo *pFVar9;
  ulonglong uVar10;
  FReplicatedObjectData *pFVar11;
  uchar **ppuVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  
  uVar10 = 0;
  uVar16 = 0;
  if ((int)param_1 < (this->ObjectIndexToObjectInfoIndex).ArrayNum) {
    uVar16 = ~param_1 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FPerObjectInfo *)(*pcVar6)();
    return pFVar9;
  }
  pFVar3 = (this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data;
  uVar1 = *(ushort *)(pFVar3 + (longlong)(int)param_1 * 2);
  if (uVar1 != 0) {
    pFVar9 = TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
             ::operator[](&this->ObjectInfos,(uint)uVar1);
    return pFVar9;
  }
  uVar16 = (this->UsedPerObjectInfos).Storage.ArrayNum;
  uVar2 = (this->UsedPerObjectInfos).BitCount;
  pFVar4 = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  uVar14 = uVar10;
  uVar15 = uVar10;
  if (uVar16 != 0) {
    do {
      if (*(uint *)(pFVar4 + uVar10) != 0xffffffff) {
        uVar16 = ~*(uint *)(pFVar4 + uVar10);
        iVar5 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
          }
        }
        iVar8 = 0x20;
        if (uVar16 != 0) {
          iVar8 = iVar5;
        }
        uVar13 = iVar8 + (int)uVar15;
        uVar16 = 0xffffffff;
        if (uVar13 < uVar2) {
          uVar16 = uVar13;
        }
        if (uVar16 == 0xffffffff) {
          return (FPerObjectInfo *)0x0;
        }
        if ((uVar2 <= uVar16) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2a2,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FPerObjectInfo *)(*pcVar6)();
          return pFVar9;
        }
        *(uint *)(pFVar4 + (ulonglong)(uVar16 >> 5) * 4) =
             *(uint *)(pFVar4 + (ulonglong)(uVar16 >> 5) * 4) | 1 << (uVar16 & 0x1f);
        if ((uint)(this->ObjectInfos).NumElements <= uVar16) {
          TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
          ::Add(&this->ObjectInfos,0x100);
        }
        pFVar9 = TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
                 ::operator[](&this->ObjectInfos,uVar16);
        pFVar9->Protocol = (FReplicationProtocol *)0x0;
        pFVar9->StateBuffers[0] = (uchar *)0x0;
        pFVar9->StateBuffers[1] = (uchar *)0x0;
        *(undefined8 *)&pFVar9->AllocationCount = 0;
        if ((short)uVar16 == 0) {
          return (FPerObjectInfo *)0x0;
        }
        *(short *)(pFVar3 + (longlong)(int)param_1 * 2) = (short)uVar16;
        pFVar9 = TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
                 ::operator[](&this->ObjectInfos,uVar16 & 0xffff);
        pFVar11 = Net::Private::FNetRefHandleManager::GetReplicatedObjectData
                            (this->NetRefHandleManager,param_1);
        pFVar9->Protocol = pFVar11->Protocol;
        ppuVar12 = TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
                             ((TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> *)
                              &this->NetRefHandleManager->ReplicatedObjectStateBuffers,param_1);
        pFVar9->StateBuffers[0] = *ppuVar12;
        pFVar9->StateBuffers[1] = pFVar11->ReceiveStateBuffer;
        return pFVar9;
      }
      uVar13 = (int)uVar14 + 1;
      uVar10 = uVar10 + 4;
      uVar14 = (ulonglong)uVar13;
      uVar15 = (ulonglong)((int)uVar15 + 0x20);
    } while (uVar13 < uVar16);
  }
  return (FPerObjectInfo *)0x0;
}

// GetPerObjectInfoForObject @ 14420b8a0

FPerObjectInfo * __thiscall
UE::Net::FReplicationStateStorage::GetPerObjectInfoForObject
          (FReplicationStateStorage *this,uint param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPerObjectInfo *pFVar5;
  
  uVar4 = 0;
  if ((int)param_1 < (this->ObjectIndexToObjectInfoIndex).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPerObjectInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar1 = *(ushort *)
           ((this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data + (longlong)(int)param_1 * 2
           );
  if (uVar1 == 0) {
    return (FPerObjectInfo *)0x0;
  }
  pFVar5 = TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
           ::operator[](&this->ObjectInfos,(uint)uVar1);
  return pFVar5;
}

// GetPerObjectInfoForObject @ 14420b940

FPerObjectInfo * __thiscall
UE::Net::FReplicationStateStorage::GetPerObjectInfoForObject
          (FReplicationStateStorage *this,uint param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  FPerObjectInfo *pFVar4;
  uint uVar5;
  
  uVar5 = 0;
  if ((int)param_1 < (this->ObjectIndexToObjectInfoIndex).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPerObjectInfo *)(*pcVar2)();
      return pFVar4;
    }
  }
  uVar1 = *(ushort *)
           ((this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data + (longlong)(int)param_1 * 2
           );
  if (uVar1 == 0) {
    return (FPerObjectInfo *)0x0;
  }
  if ((this->ObjectInfos).Chunks.Array.ArrayNum <= (int)(uint)(uVar1 >> 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPerObjectInfo *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FPerObjectInfo *)
         ((ulonglong)(uVar1 & 0xff) * 0x20 +
         *(longlong *)
          ((this->ObjectInfos).Chunks.Array.AllocatorInstance.Data +
          (ulonglong)(uint)(uVar1 >> 8) * 8));
}

// GetState @ 14420d870

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

uchar * __thiscall
UE::Net::FReplicationStateStorage::GetState
          (FReplicationStateStorage *this,uint param_1,EReplicationStateType param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  longlong lVar5;
  FReplicatedObjectData *pFVar6;
  uchar **ppuVar7;
  uint uVar8;
  int iVar9;
  
  if (1 < param_2 - CurrentSendState) {
    return (uchar *)0x0;
  }
  uVar8 = 0;
  if ((int)param_1 < (this->ObjectIndexToObjectInfoIndex).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar4 = (uchar *)(*pcVar2)();
    return puVar4;
  }
  uVar1 = *(ushort *)
           ((this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data + (longlong)(int)param_1 * 2
           );
  if (uVar1 != 0) {
    if (((this->ObjectInfos).Chunks.Array.ArrayNum <= (int)(uint)(uVar1 >> 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar2)();
      return puVar4;
    }
    lVar5 = *(longlong *)
             ((this->ObjectInfos).Chunks.Array.AllocatorInstance.Data +
             (ulonglong)(uint)(uVar1 >> 8) * 8) + (ulonglong)(uVar1 & 0xff) * 0x20;
    if (lVar5 != 0) {
      if (param_2 == CurrentSendState) {
        return *(uchar **)(lVar5 + 8);
      }
      if (param_2 == CurrentRecvState) {
        return *(uchar **)(lVar5 + 0x10);
      }
      iVar9 = 0x4c;
      goto LAB_14420d971;
    }
  }
  if (param_2 == CurrentSendState) {
    ppuVar7 = TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
                        ((TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> *)
                         &this->NetRefHandleManager->ReplicatedObjectStateBuffers,param_1);
    return *ppuVar7;
  }
  if (param_2 == CurrentRecvState) {
    pFVar6 = Net::Private::FNetRefHandleManager::GetReplicatedObjectData
                       (this->NetRefHandleManager,param_1);
    return pFVar6->ReceiveStateBuffer;
  }
  iVar9 = 0x60;
LAB_14420d971:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateStorage.cpp"
                     ,iVar9,L"Unknown EReplicationStateType");
  if (!bVar3) {
    return (uchar *)0x0;
  }
  pcVar2 = (code *)swi(3);
  puVar4 = (uchar *)(*pcVar2)();
  return puVar4;
}

// Init @ 14420f6a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::FReplicationStateStorage::Init
          (FReplicationStateStorage *this,FReplicationStateStorageInitParams *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FObjectReferenceCache *pFVar3;
  UIrisObjectReferencePackageMap *pUVar4;
  int iVar5;
  undefined7 uVar6;
  bool bVar7;
  FInternalNetSerializationContext *pFVar8;
  uint uVar9;
  FInternalNetSerializationContext local_48;
  
  uVar9 = param_1->MaxDeltaCompressedObjectCount;
  if (param_1->MaxObjectCount < param_1->MaxDeltaCompressedObjectCount) {
    uVar9 = param_1->MaxObjectCount;
  }
  this->NetRefHandleManager = param_1->NetRefHandleManager;
  if (0xffff < uVar9) {
    uVar9 = 0xffff;
  }
  FNetBitArray::Init(&this->UsedPerObjectInfos,uVar9 + 1);
  pFVar1 = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  if ((this->UsedPerObjectInfos).BitCount == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2a2,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)pFVar1 = *(uint *)pFVar1 | 1;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->ObjectIndexToObjectInfoIndex,param_1->MaxInternalNetRefIndex,Default);
  pFVar8 = Net::Private::FInternalNetSerializationContext::FInternalNetSerializationContext
                     (&local_48,param_1->ReplicationSystem);
  pFVar3 = pFVar8->ObjectReferenceCache;
  (this->InternalSerializationContext).ReplicationSystem = pFVar8->ReplicationSystem;
  (this->InternalSerializationContext).ObjectReferenceCache = pFVar3;
  uVar9 = (pFVar8->ResolveContext).ConnectionId;
  iVar5 = (pFVar8->ResolveContext).AsyncLoadingPriority;
  (this->InternalSerializationContext).ResolveContext.RemoteNetTokenStoreState =
       (pFVar8->ResolveContext).RemoteNetTokenStoreState;
  (this->InternalSerializationContext).ResolveContext.ConnectionId = uVar9;
  (this->InternalSerializationContext).ResolveContext.AsyncLoadingPriority = iVar5;
  uVar6 = *(undefined7 *)&(pFVar8->ResolveContext).field_0x11;
  pUVar4 = pFVar8->PackageMap;
  (this->InternalSerializationContext).ResolveContext.bForceSyncLoad =
       (pFVar8->ResolveContext).bForceSyncLoad;
  *(undefined7 *)&(this->InternalSerializationContext).ResolveContext.field_0x11 = uVar6;
  (this->InternalSerializationContext).PackageMap = pUVar4;
  *(undefined8 *)&(this->InternalSerializationContext).field_0x30 =
       *(undefined8 *)&pFVar8->field_0x30;
  (this->SerializationContext).InternalContext = &this->InternalSerializationContext;
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 144212f10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::FReplicationStateStorage::OnMaxInternalNetRefIndexIncreased
          (FReplicationStateStorage *this,uint param_1)

{
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->ObjectIndexToObjectInfoIndex,param_1,Default);
  return;
}

// ReserveBaseline @ 144218690

FBaselineReservation * __thiscall
UE::Net::FReplicationStateStorage::ReserveBaseline
          (FReplicationStateStorage *this,FBaselineReservation *__return_storage_ptr__,uint param_1,
          EReplicationStateType param_2)

{
  code *pcVar1;
  bool bVar2;
  FPerObjectInfo *pFVar3;
  FBaselineReservation *pFVar4;
  uchar *puVar5;
  atomic<unsigned_char> *paVar6;
  uchar *puVar7;
  int iVar8;
  uint local_res18 [4];
  FLLMScope local_68;
  undefined1 local_64 [12];
  FName local_58;
  FReplicationStateStorage *local_50;
  uchar *local_48;
  uint *local_40;
  uchar **local_38;
  
  local_res18[0] = param_1;
  FLLMScope::FLLMScope(&local_68,LLMTagDeclaration_IrisState.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_IrisState.UniqueName;
  FMemScope::FMemScope((FMemScope *)(local_64 + 4),&local_58,true);
  pFVar3 = GetOrCreatePerObjectInfoForObject(this,local_res18[0]);
  if ((pFVar3 == (FPerObjectInfo *)0x0) &&
     (local_50 = this,
     bVar2 = `UE::Net::FReplicationStateStorage::ReserveBaseline'::__l3::<lambda_1>::operator()
                       (&local_50), !bVar2)) {
    __return_storage_ptr__->ReservedStorage = (uchar *)0x0;
    __return_storage_ptr__->BaselineBaseStorage = (uchar *)0x0;
    FMemScope::~FMemScope((FMemScope *)(local_64 + 4));
    FLLMScope::~FLLMScope(&local_68);
    return __return_storage_ptr__;
  }
  puVar7 = (uchar *)0x0;
  if (param_2 == CurrentSendState) {
    puVar7 = pFVar3->StateBuffers[0];
    if (puVar7 != (uchar *)0x0) goto LAB_1442187a0;
    iVar8 = 0xd1;
    paVar6 = &bGEnsureHasExecuted<_6279363163095826223>;
LAB_144218757:
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (paVar6,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateStorage.cpp"
                       ,iVar8,"Reservation.BaselineBaseStorage != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBaselineReservation *)(*pcVar1)();
      return pFVar4;
    }
    __return_storage_ptr__->ReservedStorage = (uchar *)0x0;
  }
  else {
    if ((param_2 == CurrentRecvState) && (puVar7 = pFVar3->StateBuffers[1], puVar7 == (uchar *)0x0))
    {
      iVar8 = 0xdb;
      paVar6 = &bGEnsureHasExecuted<_6279363163095826213>;
      goto LAB_144218757;
    }
LAB_1442187a0:
    puVar5 = FMemory::Malloc((ulonglong)pFVar3->Protocol->InternalTotalSize,
                             pFVar3->Protocol->InternalTotalAlignment);
    if (puVar5 == (uchar *)0x0) {
      if (pFVar3->AllocationCount == 0) {
        FreePerObjectInfoForObject(this,local_res18[0]);
      }
      __return_storage_ptr__->ReservedStorage = (uchar *)0x0;
      __return_storage_ptr__->BaselineBaseStorage = (uchar *)0x0;
      goto LAB_14421880a;
    }
    local_40 = local_res18;
    pFVar3->AllocationCount = pFVar3->AllocationCount + 1;
    local_38 = &local_48;
    local_48 = puVar5;
    TSet<TTuple<unsigned_int,void_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,void_const_*,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,void_const_*_&&>_>
              ((TSet<TTuple<unsigned_int,void_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,void_const_*,1>,FDefaultSetAllocator>
                *)this,(TPairInitializer<unsigned_int_const_&,void_const_*_&&> *)local_64,
               (bool *)&local_40);
    __return_storage_ptr__->ReservedStorage = puVar5;
  }
  __return_storage_ptr__->BaselineBaseStorage = puVar7;
LAB_14421880a:
  FMemScope::~FMemScope((FMemScope *)(local_64 + 4));
  FLLMScope::~FLLMScope(&local_68);
  return __return_storage_ptr__;
}

// operator() @ 1504b2600

bool __thiscall
`UE::Net::FReplicationStateStorage::AllocBaseline'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6279363163095826325>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6279363163095826325>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b2650

bool __thiscall
`UE::Net::FReplicationStateStorage::CancelBaselineReservation'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6279363163095826181>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6279363163095826181>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b26f0

bool __thiscall
`UE::Net::FReplicationStateStorage::FreeBaseline'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6279363163095826260>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6279363163095826260>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b2740

bool __thiscall
`UE::Net::FReplicationStateStorage::ReserveBaseline'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6279363163095826232>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6279363163095826232>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b2c20

bool __thiscall
`UE::Net::FReplicationStateStorage::CommitBaselineReservation'::__l11::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6279363163095826152>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6279363163095826152>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

