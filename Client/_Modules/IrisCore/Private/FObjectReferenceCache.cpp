// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 62

// FObjectReferenceCache @ 144267190

FObjectReferenceCache * __thiscall
UE::Net::Private::FObjectReferenceCache::FObjectReferenceCache(FObjectReferenceCache *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FObjectReferenceCache *pFVar4;
  longlong *plVar5;
  
  *(undefined8 *)&this->ObjectToNetReferenceHandle = 0;
  *(undefined8 *)&(this->ObjectToNetReferenceHandle).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToNetReferenceHandle).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectToNetReferenceHandle).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToNetReferenceHandle).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToNetReferenceHandle).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToNetReferenceHandle).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectToNetReferenceHandle).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToNetReferenceHandle).field_0x48 = 0;
  *(undefined8 *)&this->ReferenceHandleToCachedReference = 0;
  *(undefined8 *)&(this->ReferenceHandleToCachedReference).field_0x8 = 0;
  *(undefined8 *)&(this->ReferenceHandleToCachedReference).field_0x20 = 0;
  *(undefined4 *)&(this->ReferenceHandleToCachedReference).field_0x28 = 0;
  *(undefined4 *)&(this->ReferenceHandleToCachedReference).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferenceHandleToCachedReference).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferenceHandleToCachedReference).field_0x34 = 0;
  *(undefined8 *)&(this->ReferenceHandleToCachedReference).field_0x40 = 0;
  *(undefined4 *)&(this->ReferenceHandleToCachedReference).field_0x48 = 0;
  *(undefined8 *)&this->HandleToDynamicOuter = 0;
  *(undefined8 *)&(this->HandleToDynamicOuter).field_0x8 = 0;
  *(undefined8 *)&(this->HandleToDynamicOuter).field_0x20 = 0;
  *(undefined4 *)&(this->HandleToDynamicOuter).field_0x28 = 0;
  *(undefined4 *)&(this->HandleToDynamicOuter).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandleToDynamicOuter).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandleToDynamicOuter).field_0x34 = 0;
  *(undefined8 *)&(this->HandleToDynamicOuter).field_0x40 = 0;
  *(undefined4 *)&(this->HandleToDynamicOuter).field_0x48 = 0;
  this->bIsAuthority = 0;
  *(undefined8 *)&this->QueuedBatchObjectReferences = 0;
  *(undefined8 *)&(this->QueuedBatchObjectReferences).field_0x8 = 0;
  *(undefined8 *)&(this->QueuedBatchObjectReferences).field_0x20 = 0;
  this->ReplicationSystem = (UReplicationSystem *)0x0;
  this->ReplicationBridge = (UObjectReplicationBridge *)0x0;
  this->NetTokenStore = (FNetTokenStore *)0x0;
  this->StringTokenStore = (FStringTokenStore *)0x0;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  *(undefined4 *)&(this->QueuedBatchObjectReferences).field_0x28 = 0;
  *(undefined4 *)&(this->QueuedBatchObjectReferences).field_0x2c = 0x80;
  *(undefined4 *)&(this->QueuedBatchObjectReferences).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QueuedBatchObjectReferences).field_0x34 = 0;
  *(undefined8 *)&(this->QueuedBatchObjectReferences).field_0x40 = 0;
  *(undefined4 *)&(this->QueuedBatchObjectReferences).field_0x48 = 0;
  this->AsyncLoadMode = UseCVar;
  this->bCachedCVarAllowAsyncLoading = false;
  *(undefined8 *)&this->PendingAsyncLoadRequests = 0;
  *(undefined8 *)&(this->PendingAsyncLoadRequests).field_0x8 = 0;
  *(undefined8 *)&(this->PendingAsyncLoadRequests).field_0x20 = 0;
  *(undefined4 *)&(this->PendingAsyncLoadRequests).field_0x28 = 0;
  *(undefined4 *)&(this->PendingAsyncLoadRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingAsyncLoadRequests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingAsyncLoadRequests).field_0x34 = 0;
  *(undefined8 *)&(this->PendingAsyncLoadRequests).field_0x40 = 0;
  *(undefined4 *)&(this->PendingAsyncLoadRequests).field_0x48 = 0;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FObjectReferenceCache *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"net.AllowAsyncLoading",0);
  if (plVar5 != (longlong *)0x0) {
    iVar3 = (**(code **)(*plVar5 + 200))(plVar5);
    this->bCachedCVarAllowAsyncLoading = 0 < iVar3;
  }
  return this;
}

// AddPendingExport @ 14426bd00

void __thiscall
UE::Net::Private::FObjectReferenceCache::AddPendingExport
          (FObjectReferenceCache *this,FNetExportContext *param_1,FNetObjectReference *param_2)

{
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_18 [2];
  
  if ((((param_2->PathToken).field0_0x0.Value & 0xfffff) != 0) ||
     ((this->bIsAuthority != 0 && ((param_2->Traits & CanBeExported) != None)))) {
    FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
    local_res20 = LLMTagDeclaration_Iris.UniqueName;
    FMemScope::FMemScope(local_18,&local_res20,true);
    TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
    AddUniqueImpl<UE::Net::FNetObjectReference_const_&>
              (&param_1->BatchExports->ReferencesPendingExportInCurrentBatch,param_2);
    FMemScope::~FMemScope(local_18);
    FLLMScope::~FLLMScope(local_res18);
  }
  return;
}

// AddPendingExports @ 14426bdb0

void __thiscall
UE::Net::Private::FObjectReferenceCache::AddPendingExports
          (FObjectReferenceCache *this,FNetSerializationContext *param_1,
          TArrayView<UE::Net::FObjectNetSerializerQuantizedReferenceStorage_const_,int> *param_2)

{
  FNetObjectReference *pFVar1;
  FNetExportContext *pFVar2;
  FNetObjectReference *pFVar3;
  
  pFVar2 = param_1->ExportContext;
  if (pFVar2 != (FNetExportContext *)0x0) {
    pFVar3 = (FNetObjectReference *)param_2->DataPtr;
    pFVar1 = (FNetObjectReference *)((longlong)pFVar3 + (longlong)param_2->ArrayNum * 0x18);
    for (; pFVar3 != pFVar1; pFVar3 = (FNetObjectReference *)&pFVar3[1].PathToken) {
      if (pFVar3[1].RefHandle.field0_0x0.Value == 0) {
        AddPendingExport(this,pFVar2,pFVar3);
      }
    }
  }
  return;
}

// AddPendingExports @ 14426be20

void __thiscall
UE::Net::Private::FObjectReferenceCache::AddPendingExports
          (FObjectReferenceCache *this,FNetSerializationContext *param_1,
          TArrayView<UE::Net::FNetObjectReference_const_,int> *param_2)

{
  FNetExportContext *pFVar1;
  FNetObjectReference *pFVar2;
  FNetObjectReference *pFVar3;
  FLLMScope local_res10 [5];
  FName local_res20;
  FMemScope local_28 [2];
  
  pFVar1 = param_1->ExportContext;
  if (pFVar1 != (FNetExportContext *)0x0) {
    pFVar2 = param_2->DataPtr;
    pFVar3 = pFVar2 + param_2->ArrayNum;
    for (; pFVar2 != pFVar3; pFVar2 = pFVar2 + 1) {
      if ((((pFVar2->PathToken).field0_0x0.Value & 0xfffff) != 0) ||
         ((this->bIsAuthority != 0 && ((pFVar2->Traits & CanBeExported) != None)))) {
        FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
        local_res20 = LLMTagDeclaration_Iris.UniqueName;
        FMemScope::FMemScope(local_28,&local_res20,true);
        TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
        ::AddUniqueImpl<UE::Net::FNetObjectReference_const_&>
                  (&pFVar1->BatchExports->ReferencesPendingExportInCurrentBatch,pFVar2);
        FMemScope::~FMemScope(local_28);
        FLLMScope::~FLLMScope(local_res10);
      }
    }
  }
  return;
}

// AddPreRegisteredReference @ 14426bf10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectReferenceCache::AddPreRegisteredReference
          (FObjectReferenceCache *this,FNetRefHandle param_1,UObject *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  if (this->bIsAuthority == 0) {
    uVar8 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
    uVar1 = this->ReplicationSystem->Id;
    if ((0x3fe < uVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReplicationSystemId < FNetRefHandle::MaxReplicationSystemId",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                           ,0x48e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    BindRemoteReference(this,(FNetRefHandle)((ulonglong)(uVar1 + 1) << 0x36 | uVar8),param_2);
    if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
        *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
      puVar7 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->ReferenceHandleToCachedReference).field_0x38;
      }
      iVar4 = *(int *)(puVar7 + ((ulonglong)
                                 (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1)
                                & (uVar8 >> 0x20) * 0x17 + uVar8) * 4);
      if (iVar4 != -1) {
        do {
          puVar6 = (ulonglong *)
                   ((longlong)iVar4 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference);
          if ((*puVar6 & 0x3fffffffffffff) == uVar8) {
            puVar5 = puVar6 + 1;
            if (puVar6 == (ulonglong *)0x0) {
              puVar5 = (ulonglong *)0x0;
            }
            if (puVar5 == (ulonglong *)0x0) {
              return;
            }
            *(byte *)(puVar5 + 5) = (byte)puVar5[5] | 0x20;
            return;
          }
          iVar4 = (int)puVar6[7];
        } while (iVar4 != -1);
      }
    }
  }
  else {
    if (1 < (byte)LogIrisReferences._0_1_) {
      if ((param_2 == (UObject *)0x0) || (*(longlong *)&param_2->field_0x10 == 0)) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_28,(UObject *)0x0,None)
        ;
      }
      if ((param_1.field0_0x0 == 0) || ((ulonglong)param_1.field0_0x0 >> 0x36 == 0)) {
        ::FString::PrintfImpl(&local_38,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_38,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    `UE::Net::Private::FObjectReferenceCache::AddPreRegisteredReference'::__l10::<lambda_1>::
    operator()(local_res8);
  }
  return;
}

// AddReferencedObjects @ 14426c2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectReferenceCache::AddReferencedObjects
          (FObjectReferenceCache *this,FReferenceCollector *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  FString local_a8;
  TMap<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iStack_90 = 0;
  puVar1 = &(this->QueuedBatchObjectReferences).field_0x10;
  iVar3 = *(int *)&(this->QueuedBatchObjectReferences).field_0x28;
  local_98 = &this->QueuedBatchObjectReferences;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->QueuedBatchObjectReferences).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14426c36d;
      uVar11 = puVar14[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar8;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14426c36d:
  uVar11 = *(uint *)&(this->QueuedBatchObjectReferences).field_0x28;
  iStack_70 = *(int *)&(this->QueuedBatchObjectReferences).field_0x8 -
              *(int *)&(this->QueuedBatchObjectReferences).field_0x34;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = local_98;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->QueuedBatchObjectReferences).field_0x28;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&(this->QueuedBatchObjectReferences).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14426c469;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14426c469:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar6 == &this->QueuedBatchObjectReferences)) break;
    puVar12 = (ulonglong *)((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)pTVar6);
    if (((puVar12[1] != 0) &&
        ((**(code **)(param_1->_padding_ + 0x88))(param_1,puVar12 + 1,this->ReplicationSystem,0),
        puVar12[1] == 0)) && (2 < (byte)LogIrisReferences._0_1_)) {
      if ((*puVar12 == 0) || (*puVar12 < 0x40000000000000)) {
        ::FString::PrintfImpl(&local_a8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_a8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddTrackedQueuedBatchObjectReference @ 14426cc30

void __thiscall
UE::Net::Private::FObjectReferenceCache::AddTrackedQueuedBatchObjectReference
          (FObjectReferenceCache *this,FNetRefHandle param_1,UObject *param_2)

{
  FQueuedBatchObjectReference *pFVar1;
  FNetRefHandle_u_0 local_res10 [3];
  
  local_res10[0] = param_1.field0_0x0;
  pFVar1 = TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>_>
           ::FindOrAddImpl<UE::Net::FNetRefHandle_const_&>
                     ((TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>_>
                       *)&this->QueuedBatchObjectReferences,
                      (int)((ulonglong)param_1.field0_0x0 & 0x3fffffffffffff) +
                      (int)(((ulonglong)param_1.field0_0x0 & 0x3fffffffffffff) >> 0x20) * 0x17,
                      (FNetRefHandle *)&local_res10[0]._s_0);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_2);
  }
  (pFVar1->Object).field0_0x0.DebugPtr = param_2;
  pFVar1->RefCount = pFVar1->RefCount + 1;
  return;
}

// AsyncPackageCallback @ 14426dab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectReferenceCache::AsyncPackageCallback
          (FObjectReferenceCache *this,FName *param_1,UPackage *param_2,Type param_3)

{
  int iVar1;
  FNetRefHandle FVar2;
  undefined1 *puVar3;
  FName FVar4;
  code *pcVar5;
  FNetRefHandle_u_0 *pFVar6;
  TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest> *pTVar11;
  UObject *pUVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  FNetRefHandle_u_0 *pFVar16;
  FWeakObjectPtr *this_01;
  undefined1 local_res8 [8];
  FName *local_res10;
  UPackage *local_res18;
  FLLMScope local_e4;
  int *local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FName local_a8;
  FNetRefHandle_u_0 *local_a0;
  TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
  *local_98;
  FName local_90;
  FMemScope local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_res10 = param_1;
  local_res18 = param_2;
  FLLMScope::FLLMScope(&local_e4,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
  local_a8 = LLMTagDeclaration_Iris.UniqueName;
  FMemScope::FMemScope(&local_88,&local_a8,true);
  if (((param_2 != (UPackage *)0x0) && (bVar7 = UPackage::IsFullyLoaded(param_2), !bVar7)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package == nullptr || Package->IsFullyLoaded()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReferenceCache.cpp"
                         ,0x84f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_98 = (TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
              *)&this->PendingAsyncLoadRequests;
  pTVar11 = TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
            ::Find(local_98,*param_1);
  pFVar16 = (FNetRefHandle_u_0 *)&pTVar11->field_0x8;
  if (pTVar11 ==
      (TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest> *)0x0) {
    pFVar16 = (FNetRefHandle_u_0 *)0x0;
  }
  if (pFVar16 == (FNetRefHandle_u_0 *)0x0) {
    if (1 < (byte)LogIrisReferences._0_1_) {
      ::FName::ToString(param_1,&local_50);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_e0 = (int *)&pTVar11->field_0x30;
    if ((FNetRefHandle_u_0 *)pFVar16[4].Value != (FNetRefHandle_u_0 *)0x0) {
      pFVar16 = (FNetRefHandle_u_0 *)pFVar16[4].Value;
    }
    if (pTVar11 ==
        (TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest> *)0x0) {
      local_e0 = (int *)&DAT_00000028;
    }
    iVar1 = *local_e0;
    local_a0 = pFVar16 + iVar1;
    while( true ) {
      pFVar6 = local_a0;
      if (*local_e0 != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Net::FNetRefHandle_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      this_00 = local_98;
      if (pFVar16 == pFVar6) break;
      FVar2.field0_0x0 = (FNetRefHandle_u_0)pFVar16->Value;
      uVar14 = (ulonglong)FVar2.field0_0x0 & 0x3fffffffffffff;
      if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
          *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
        puVar3 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
        puVar15 = &(this->ReferenceHandleToCachedReference).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar15 = puVar3;
        }
        iVar9 = *(int *)(puVar15 +
                        ((uVar14 >> 0x20) * 0x17 + uVar14 &
                        (ulonglong)
                        (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1)) * 4);
        if (iVar9 != -1) {
          do {
            puVar13 = (ulonglong *)
                      ((longlong)iVar9 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference
                      );
            if ((*puVar13 & 0x3fffffffffffff) == uVar14) {
              this_01 = (FWeakObjectPtr *)(puVar13 + 1);
              if (puVar13 == (ulonglong *)0x0) {
                this_01 = (FWeakObjectPtr *)0x0;
              }
              if (this_01 != (FWeakObjectPtr *)0x0) {
                if (((this_01[5].ObjectIndex & 0x10) == 0) && (1 < (byte)LogIrisReferences._0_1_)) {
                  if ((ulonglong)FVar2.field0_0x0 < 0x40000000000000) {
                    ::FString::PrintfImpl(&local_d8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
                  }
                  else {
                    if (((ulonglong)FVar2.field0_0x0 >> 0x36 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("ReplicationSystemId != 0",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                                           ,0x2b,L""), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    ::FString::PrintfImpl(&local_d8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
                  }
                  ::FName::ToString(local_res10,&local_80);
                  Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
                  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_80.Data.AllocatorInstance.Data);
                  }
                  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                  }
                }
                bVar8 = (byte)this_01[5].ObjectIndex & 0xef;
                *(byte *)&this_01[5].ObjectIndex = bVar8;
                if ((local_res18 == (UPackage *)0x0) &&
                   (*(byte *)&this_01[5].ObjectIndex = bVar8 | 8, 1 < (byte)LogIrisReferences._0_1_)
                   ) {
                  if ((ulonglong)FVar2.field0_0x0 < 0x40000000000000) {
                    ::FString::PrintfImpl(&local_c8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
                  }
                  else {
                    if (((ulonglong)FVar2.field0_0x0 >> 0x36 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("ReplicationSystemId != 0",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                                           ,0x2b,L""), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    ::FString::PrintfImpl(&local_c8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
                  }
                  ::FName::ToString(local_res10,&local_70);
                  Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
                  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_70.Data.AllocatorInstance.Data);
                  }
                  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                  }
                }
                pUVar12 = FWeakObjectPtr::Get(this_01);
                param_1 = local_res10;
                if (pUVar12 != (UObject *)0x0) {
                  UpdateTrackedQueuedBatchObjectReference(this,FVar2,pUVar12);
                  param_1 = local_res10;
                }
                goto LAB_14426dece;
              }
              break;
            }
            iVar9 = (int)puVar13[7];
          } while (iVar9 != -1);
        }
      }
      if (1 < (byte)LogIrisReferences._0_1_) {
        if ((ulonglong)FVar2.field0_0x0 < 0x40000000000000) {
          ::FString::PrintfImpl(&local_b8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          if (((ulonglong)FVar2.field0_0x0 >> 0x36 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ReplicationSystemId != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                                 ,0x2b,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          ::FString::PrintfImpl(&local_b8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        ::FName::ToString(param_1,&local_60);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
LAB_14426dece:
      pFVar16 = pFVar16 + 1;
    }
    FVar4 = *param_1;
    local_90 = FVar4;
    if (*(int *)&(local_98->Elements).field_0x8 != *(int *)&(local_98->Elements).field_0x34) {
      uVar10 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>(this_00,FVar4.Number + uVar10,&local_90);
    }
  }
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(&local_e4);
  return;
}

// AsyncPackageForcedFailCallback @ 14426e000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectReferenceCache::AsyncPackageForcedFailCallback
          (FObjectReferenceCache *this,FName *param_1,UPackage *param_2,Type param_3)

{
  FNetRefHandle_u_0 *pFVar1;
  int iVar2;
  FNetRefHandle_u_0_s_0 FVar3;
  undefined1 *puVar4;
  FName FVar5;
  TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
  *this_00;
  int iVar6;
  uint uVar7;
  TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest> *pTVar8;
  ulonglong *puVar9;
  UObject *pUVar10;
  FWeakObjectPtr *this_01;
  undefined1 *puVar11;
  FNetRefHandle_u_0 *pFVar12;
  ulonglong uVar13;
  int *piVar14;
  FName local_res8;
  TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
  *local_res10;
  FString local_48;
  
  if (2 < (byte)LogIrisReferences._0_1_) {
    ::FName::ToString(param_1,&local_48);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  local_res10 = (TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
                 *)&this->PendingAsyncLoadRequests;
  pTVar8 = TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
           ::Find(local_res10,*param_1);
  pFVar12 = (FNetRefHandle_u_0 *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest> *)
                0x0) {
    pFVar12 = (FNetRefHandle_u_0 *)0x0;
  }
  if (pFVar12 != (FNetRefHandle_u_0 *)0x0) {
    piVar14 = (int *)&pTVar8->field_0x30;
    if ((FNetRefHandle_u_0 *)pFVar12[4].Value != (FNetRefHandle_u_0 *)0x0) {
      pFVar12 = (FNetRefHandle_u_0 *)pFVar12[4].Value;
    }
    if (pTVar8 == (TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest> *
                  )0x0) {
      piVar14 = (int *)&DAT_00000028;
    }
    iVar2 = *piVar14;
    pFVar1 = pFVar12 + iVar2;
    while( true ) {
      if (*piVar14 != iVar2) {
        `TCheckedPointerIterator<UE::Net::FNetRefHandle_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res8);
      }
      this_00 = local_res10;
      if (pFVar12 == pFVar1) break;
      FVar3 = pFVar12->_s_0;
      uVar13 = (pFVar12->_s_0).Id;
      if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 ==
          *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
LAB_14426e1b0:
        pFVar12 = pFVar12 + 1;
      }
      else {
        puVar4 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
        puVar11 = &(this->ReferenceHandleToCachedReference).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar11 = puVar4;
        }
        iVar6 = *(int *)(puVar11 +
                        ((ulonglong)
                         (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1) &
                        (uVar13 >> 0x20) * 0x17 + uVar13) * 4);
        if (iVar6 == -1) goto LAB_14426e1b0;
        do {
          puVar9 = (ulonglong *)
                   ((longlong)iVar6 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference);
          if ((*puVar9 & 0x3fffffffffffff) == uVar13) {
            this_01 = (FWeakObjectPtr *)(puVar9 + 1);
            if (puVar9 == (ulonglong *)0x0) {
              this_01 = (FWeakObjectPtr *)0x0;
            }
            if (this_01 != (FWeakObjectPtr *)0x0) {
              *(byte *)&this_01[5].ObjectIndex = (byte)this_01[5].ObjectIndex & 0xef;
              *(byte *)&this_01[5].ObjectIndex = (byte)this_01[5].ObjectIndex | 8;
              pUVar10 = FWeakObjectPtr::Get(this_01);
              if (pUVar10 != (UObject *)0x0) {
                UpdateTrackedQueuedBatchObjectReference(this,(FNetRefHandle)FVar3,pUVar10);
              }
            }
            goto LAB_14426e1b0;
          }
          iVar6 = (int)puVar9[7];
        } while (iVar6 != -1);
        pFVar12 = pFVar12 + 1;
      }
    }
    FVar5 = *param_1;
    if (*(int *)&(local_res10->Elements).field_0x8 != *(int *)&(local_res10->Elements).field_0x34) {
      local_res8 = FVar5;
      uVar7 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
      TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>(this_00,FVar5.Number + uVar7,&local_res8);
    }
  }
  return;
}

// BindRemoteReference @ 14426e3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectReferenceCache::BindRemoteReference
          (FObjectReferenceCache *this,FNetRefHandle param_1,UObject *param_2)

{
  code *pcVar1;
  FWeakObjectPtr FVar2;
  bool bVar3;
  int iVar4;
  ulonglong *puVar5;
  FWeakObjectPtr *pFVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  FLLMScope local_res8 [2];
  FNetRefHandle_u_0 local_res10;
  FWeakObjectPtr local_res18 [2];
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  undefined1 local_d8 [12];
  FName local_cc;
  FWeakObjectPtr local_c0;
  FName local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FMemScope local_a0;
  FNetRefHandle_u_0 *local_98;
  FWeakObjectPtr *local_90;
  FWeakObjectPtr *local_88;
  FNetRefHandle_u_0 *local_80;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  FNetRefHandle_u_0 local_68;
  undefined4 local_60;
  undefined8 local_58;
  byte local_50;
  
  local_res10 = param_1.field0_0x0;
  local_res18[0] = (FWeakObjectPtr)param_2;
  if ((this->bIsAuthority != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsAuthority()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReferenceCache.cpp"
                         ,0x209,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((local_res18[0] == (FWeakObjectPtr)0x0) ||
      ((*(uint *)((longlong)local_res18[0] + 8) >> 0x1e & 1) != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Object)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReferenceCache.cpp"
                         ,0x20a,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RefHandle.IsCompleteHandle()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReferenceCache.cpp"
                         ,0x20b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (5 < (byte)LogIrisReferences._0_1_) {
    if (local_res18[0] == (FWeakObjectPtr)0x0) {
      ::FString::FString(&local_128,L"None");
    }
    else {
      local_d8._4_8_ = *(undefined8 *)((longlong)local_res18[0] + 0x18);
      ::FName::ToString((FName *)(local_d8 + 4),&local_128);
    }
    if ((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) {
      ::FString::PrintfImpl(&local_138,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_138,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  uVar8 = local_res10.Value & 0x3fffffffffffff;
  if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
      *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ReferenceHandleToCachedReference).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + ((uVar8 >> 0x20) * 0x17 + uVar8 &
                              (ulonglong)
                              (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1)) *
                              4);
    if (iVar4 != -1) {
      do {
        puVar5 = (ulonglong *)
                 ((longlong)iVar4 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference);
        if ((*puVar5 & 0x3fffffffffffff) == uVar8) {
          pFVar6 = (FWeakObjectPtr *)(puVar5 + 1);
          if (puVar5 == (ulonglong *)0x0) {
            pFVar6 = (FWeakObjectPtr *)0x0;
          }
          if (pFVar6 != (FWeakObjectPtr *)0x0) {
            if (5 < (byte)LogIrisReferences._0_1_) {
              if (local_res18[0] == (FWeakObjectPtr)0x0) {
                ::FString::FString(&local_108,L"None");
              }
              else {
                local_cc = *(FName *)((longlong)local_res18[0] + 0x18);
                ::FName::ToString(&local_cc,&local_108);
              }
              if ((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) {
                ::FString::PrintfImpl(&local_118,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
              }
              else {
                ::FString::PrintfImpl(&local_118,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
              }
              Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
            }
            FVar2 = local_res18[0];
            if ((GC::GIsIncrementalReachabilityPending != false) &&
               (local_res18[0] != (FWeakObjectPtr)0x0)) {
              GC::MarkAsReachable((UObject *)local_res18[0]);
            }
            local_148.ObjectIndex = 0;
            local_148.ObjectSerialNumber = 0;
            local_c0 = FVar2;
            if ((GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0))
            {
              GC::MarkAsReachable((UObject *)FVar2);
            }
            FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_c0);
            *pFVar6 = local_148;
            pFVar6[1] = local_res18[0];
            goto LAB_14426e953;
          }
          break;
        }
        iVar4 = (int)puVar5[7];
      } while (iVar4 != -1);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
  local_b8 = LLMTagDeclaration_Iris.UniqueName;
  FMemScope::FMemScope(&local_a0,&local_b8,true);
  local_b0 = local_res18[0];
  local_50 = local_50 & 0xc0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  local_140.ObjectIndex = 0;
  local_140.ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_b0 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)local_b0);
  }
  FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_b0);
  local_78 = local_140;
  local_68._s_0 = local_res10._s_0;
  local_70 = local_res18[0];
  local_60 = 0;
  local_58 = 0;
  if (5 < (byte)LogIrisReferences._0_1_) {
    if (local_res18[0] == (FWeakObjectPtr)0x0) {
      ::FString::FString(&local_e8,L"None");
    }
    else {
      local_a8 = *(FName *)((longlong)local_res18[0] + 0x18);
      ::FName::ToString(&local_a8,&local_e8);
    }
    if ((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) {
      ::FString::PrintfImpl(&local_f8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_f8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  local_98 = &local_res10;
  local_90 = &local_78;
  TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Net::FNetRefHandle_const_&,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference_const_&>_>
            ((TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
              *)&this->ReferenceHandleToCachedReference,
             (TPairInitializer<UE::Net::FNetRefHandle_const_&,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference_const_&>
              *)(local_res18 + 1),(bool *)&local_98);
  FMemScope::~FMemScope(&local_a0);
  FLLMScope::~FLLMScope(local_res8);
LAB_14426e953:
  local_88 = local_res18;
  local_80 = &local_res10;
  TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_const_*_const_&,UE::Net::FNetRefHandle_const_&>_>
            ((TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<UObject_const_*_const_&,UE::Net::FNetRefHandle_const_&> *)
                     local_d8,(bool *)&local_88);
  return;
}

// CanClientLoadObjectInternal @ 144270d80

bool __thiscall
UE::Net::Private::FObjectReferenceCache::CanClientLoadObjectInternal
          (FObjectReferenceCache *this,UObject *param_1,bool param_2)

{
  UPackage *pUVar1;
  
  if (!param_2) {
    pUVar1 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    return (bool)(~(byte)((uint)pUVar1->PackageFlagsPrivate >> 0x11) & 1);
  }
  return false;
}

// CreateObjectReferenceHandle @ 144273a90

FNetRefHandle __thiscall
UE::Net::Private::FObjectReferenceCache::CreateObjectReferenceHandle
          (FObjectReferenceCache *this,UObject *param_1)

{
  UObject *in_R8;
  FNetRefHandle_u_0 local_18;
  undefined8 local_10;
  
  local_18.Value = 0;
  local_10 = 0;
  CreateObjectReferenceInternal(this,in_R8,(FNetObjectReference *)&local_18._s_0);
  *(FNetRefHandle_u_0 *)param_1 = local_18;
  return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
}

// CreateObjectReferenceInternal @ 144273ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FObjectReferenceCache::CreateObjectReferenceInternal
          (FObjectReferenceCache *this,UObject *param_1,FNetObjectReference *param_2)

{
  FNetRefHandle FVar1;
  FNetRefHandle_u_0_s_0 FVar2;
  code *pcVar3;
  UObject *this_00;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  FNetToken FVar10;
  FNetRefHandle_u_0 *pFVar11;
  UObject *pUVar12;
  FNetRefHandle_u_0_s_0 *pFVar13;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UPackage *pUVar14;
  UClass *pUVar15;
  size_t sVar16;
  FNetDebugName *pFVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  FWeakObjectPtr *this_01;
  FNetToken_u_0 FVar21;
  ENetObjectReferenceTraits EVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined1 auStackY_6d8 [32];
  UObject *local_698;
  FNetRefHandle_u_0 local_690;
  undefined1 local_688 [16];
  FString local_678;
  ulonglong local_668;
  FString local_660;
  FString local_650;
  FWeakObjectPtr local_640;
  FWeakObjectPtr local_638;
  FName local_630;
  FNetRefHandle_u_0 local_628;
  uint uStack_620;
  ENetObjectReferenceTraits EStack_61c;
  FWeakObjectPtr local_618;
  UObject *local_610;
  FNetRefHandle_u_0 local_608;
  FNetToken_u_0 local_600;
  FNetRefHandle_u_0 local_5f8;
  byte local_5f0;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FNetRefHandle_u_0 local_5a8;
  undefined8 local_5a0;
  FString local_598;
  FString local_588;
  FString local_578;
  undefined1 local_568 [8];
  undefined1 local_560 [8];
  FName local_558;
  FName local_550;
  UObject *local_548;
  FName local_540;
  FName local_538;
  FName local_530;
  FString local_528;
  FString local_518;
  FName local_508;
  FName local_500;
  FNetRefHandle_u_0 *local_4f8;
  FWeakObjectPtr *local_4f0;
  UObject **local_4e8;
  FNetRefHandle_u_0 *local_4e0;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_6d8;
  FVar21.Value = 0;
  local_688._0_4_ = 0;
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  if ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0) {
    return false;
  }
  local_698 = param_1;
  local_688._8_8_ = param_2;
  pFVar11 = &TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
             ::Find((TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
                     *)this,param_1)->field0_0x0;
  if (pFVar11 != (FNetRefHandle_u_0 *)0x0) {
    FVar1.field0_0x0 = (FNetRefHandle_u_0)pFVar11->Value;
    local_668 = (ulonglong)FVar1.field0_0x0 & 0x3fffffffffffff;
    local_688._0_4_ = (int)(local_668 >> 0x20) * 0x17 + (int)local_668;
    if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
        *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
      puVar18 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = &(this->ReferenceHandleToCachedReference).field_0x38;
      }
      iVar9 = *(int *)(puVar18 +
                      (ulonglong)
                      (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1U &
                      local_688._0_4_) * 4);
      if (iVar9 != -1) {
        lVar20 = *(longlong *)&this->ReferenceHandleToCachedReference;
        do {
          if ((*(ulonglong *)((longlong)iVar9 * 0x40 + lVar20) & 0x3fffffffffffff) == local_668) {
            if (((iVar9 != -1) && (lVar20 = (longlong)iVar9 * 0x40 + lVar20, lVar20 != 0)) &&
               (this_01 = (FWeakObjectPtr *)(lVar20 + 8), this_01 != (FWeakObjectPtr *)0x0)) {
              pUVar12 = FWeakObjectPtr::Get(this_01);
              if (pUVar12 == local_698) {
                if (6 < (byte)LogIrisReferences._0_1_) {
                  FNetRefHandle::ToString((FNetRefHandle *)(lVar20 + 0x28),&local_4b8);
                  if (local_698 == (UObject *)0x0) {
                    ::FString::FString(&local_578,L"None");
                  }
                  else {
                    local_630.ComparisonIndex.Value = *(uint *)&local_698->field_0x18;
                    local_630.Number = *(uint *)&local_698->field_0x1c;
                    ::FName::ToString(&local_630,&local_578);
                  }
                  UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)local_698,&local_4c8,(UObject *)0x0);
                  FNetRefHandle::ToString((FNetRefHandle *)(lVar20 + 0x18),&local_4d8);
                  Logging::Private::BasicLog<7>
                            (&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
                  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
                  }
                  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
                  }
                  if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_578.Data.AllocatorInstance.Data);
                  }
                  if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
                  }
                }
                uVar25 = *(uint *)(lVar20 + 0x20);
                ((FNetRefHandle *)local_688._8_8_)->field0_0x0 =
                     *(FNetRefHandle_u_0 *)(lVar20 + 0x18);
                *(ulonglong *)(local_688._8_8_ + 8) = (ulonglong)((uVar25 & 0xfffff) != 0) << 0x20;
                return true;
              }
              if (5 < (byte)LogIrisReferences._0_1_) {
                if (local_698 == (UObject *)0x0) {
                  ::FString::FString(&local_5e8,L"None");
                }
                else {
                  local_558.ComparisonIndex.Value = *(uint *)&local_698->field_0x18;
                  local_558.Number = *(uint *)&local_698->field_0x1c;
                  ::FName::ToString(&local_558,&local_5e8);
                }
                local_630 = *(FName *)(lVar20 + 0x10);
                FNetRefHandle::ToString((FNetRefHandle *)(lVar20 + 0x18),&local_4a8);
                Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
                if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
                }
                if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
                }
              }
              TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
              ::Remove((TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
                        *)this,*(UObject **)(lVar20 + 0x10));
              TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
              ::Remove((TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
                        *)this,local_698);
              if (((ulonglong)FVar1.field0_0x0 & 1) != 0) {
                if (5 < (byte)LogIrisReferences._0_1_) {
                  if (local_698 == (UObject *)0x0) {
                    ::FString::FString(&local_588,L"None");
                  }
                  else {
                    local_550.ComparisonIndex.Value = *(uint *)&local_698->field_0x18;
                    local_550.Number = *(uint *)&local_698->field_0x1c;
                    ::FName::ToString(&local_550,&local_588);
                  }
                  FNetRefHandle::ToString((FNetRefHandle *)(lVar20 + 0x18),&local_498);
                  Logging::Private::BasicLog<6>
                            (&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
                  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_498.Data.AllocatorInstance.Data);
                  }
                  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_588.Data.AllocatorInstance.Data);
                  }
                }
                *(undefined8 *)(lVar20 + 0x10) = 0;
                local_640.ObjectIndex = 0;
                local_640.ObjectSerialNumber = 0;
                local_668 = 0;
                FWeakObjectPtr::operator=(&local_640,(FObjectPtr)&local_668);
                *this_01 = local_640;
                goto LAB_1442740ed;
              }
              if (5 < (byte)LogIrisReferences._0_1_) {
                if (local_698 == (UObject *)0x0) {
                  ::FString::FString(&local_5c8,L"None");
                }
                else {
                  local_500.ComparisonIndex.Value = *(uint *)&local_698->field_0x18;
                  local_500.Number = *(uint *)&local_698->field_0x1c;
                  ::FName::ToString(&local_500,&local_5c8);
                }
                FNetRefHandle::ToString((FNetRefHandle *)(lVar20 + 0x18),&local_488);
                Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
                if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_488.Data.AllocatorInstance.Data);
                }
                if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
                }
              }
              if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 ==
                  *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) goto LAB_1442740ed;
              puVar18 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
              if (puVar18 == (undefined1 *)0x0) {
                puVar18 = &(this->ReferenceHandleToCachedReference).field_0x38;
              }
              iVar9 = *(int *)(puVar18 +
                              ((longlong)
                               *(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1U &
                              (longlong)(int)local_688._0_4_) * 4);
              if (iVar9 == -1) goto LAB_1442740ed;
              goto LAB_144274060;
            }
            break;
          }
          iVar9 = *(int *)((longlong)iVar9 * 0x40 + 0x38 + lVar20);
        } while (iVar9 != -1);
      }
    }
    if (2 < (byte)LogIrisReferences._0_1_) {
      local_508.ComparisonIndex.Value = *(uint *)&local_698->field_0x18;
      local_508.Number = *(uint *)&local_698->field_0x1c;
      ::FName::ToString(&local_508,(FString *)&local_628._s_0);
      if ((FVar1.field0_0x0 == 0) || ((ulonglong)FVar1.field0_0x0 >> 0x36 == 0)) {
        ::FString::PrintfImpl(&local_5b8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_5b8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
      }
      if (local_628.Value != 0) {
        FMemory::Free((void *)local_628);
      }
    }
    TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
    ::Remove((TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
              *)this,local_698);
  }
  goto LAB_1442740ed;
  while (iVar9 = *(int *)((longlong)iVar9 * 0x40 + 0x38 +
                         *(longlong *)&this->ReferenceHandleToCachedReference), iVar9 != -1) {
LAB_144274060:
    if ((*(ulonglong *)
          ((longlong)iVar9 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference) &
        0x3fffffffffffff) == local_668) {
      TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
                       *)&this->ReferenceHandleToCachedReference,iVar9);
      break;
    }
  }
LAB_1442740ed:
  cVar4 = (**(code **)(*(longlong *)local_698 + 0x208))();
  if ((cVar4 == '\0') &&
     (cVar5 = (**(code **)(*(longlong *)local_698 + 0x210))(local_698), cVar5 == '\0')) {
    return false;
  }
  this_00 = local_698;
  pUVar12 = local_698;
  if (this->bIsAuthority == 0) {
    do {
      if (pUVar12 == (UObject *)0x0) {
        if (cVar4 == '\0') {
          return false;
        }
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_528,(UObject *)0x0);
        iVar9 = GetPlayInEditorID();
        if (iVar9 != -1) {
          (**(code **)(this->ReplicationBridge->_padding_ + 0x348))
                    (this->ReplicationBridge,0,&local_528,0);
        }
        FVar10 = FStringTokenStore::GetOrCreateToken(this->StringTokenStore,(FString *)local_568);
        local_650.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar25 = *(uint *)CONCAT44(extraout_var,FVar10.field0_0x0);
        EVar22 = (ENetObjectReferenceTraits)((uVar25 & 0xfffff) != 0);
        local_650.Data.AllocatorInstance.Data._0_4_ = 0;
        local_650.Data.AllocatorInstance.Data._4_4_ = 0;
        uVar23 = local_650.Data.AllocatorInstance.Data._0_4_;
        uVar24 = local_650.Data.AllocatorInstance.Data._4_4_;
        local_650.Data.ArrayNum = uVar25;
        local_650.Data.ArrayMax = EVar22;
LAB_1442741da:
        *(undefined4 *)&((FNetRefHandle *)local_688._8_8_)->field0_0x0 = uVar23;
        *(undefined4 *)((longlong)&((FNetRefHandle *)local_688._8_8_)->field0_0x0 + 4) = uVar24;
        (((FNetToken *)(local_688._8_8_ + 8))->field0_0x0).Value = uVar25;
        *(ENetObjectReferenceTraits *)(local_688._8_8_ + 0xc) = EVar22;
        if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_528.Data.AllocatorInstance.Data);
        }
        return true;
      }
      pFVar13 = (FNetRefHandle_u_0_s_0 *)
                TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
                ::Find((TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
                        *)this,pUVar12);
      if (pFVar13 != (FNetRefHandle_u_0_s_0 *)0x0) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_650,pUVar12);
        iVar9 = GetPlayInEditorID();
        if (iVar9 != -1) {
          (**(code **)(this->ReplicationBridge->_padding_ + 0x348))
                    (this->ReplicationBridge,0,&local_650,0);
        }
        FVar10 = FStringTokenStore::GetOrCreateToken(this->StringTokenStore,(FString *)local_688);
        uVar25 = *(uint *)CONCAT44(extraout_var_00,FVar10.field0_0x0);
        FVar2 = *pFVar13;
        EVar22 = (ENetObjectReferenceTraits)((uVar25 & 0xfffff) != 0);
        local_628.Value._0_4_ = (undefined4)pFVar13->Id;
        local_628.Value._4_4_ = FVar2._4_4_;
        local_528.Data.AllocatorInstance.Data = local_650.Data.AllocatorInstance.Data;
        uVar23 = local_628.Value._0_4_;
        uVar24 = local_628.Value._4_4_;
        local_628._s_0 = FVar2;
        uStack_620 = uVar25;
        EStack_61c = EVar22;
        goto LAB_1442741da;
      }
      pUVar12 = *(UObject **)&pUVar12->field_0x20;
    } while( true );
  }
  FNetRefHandleManager::AllocateNetRefHandle(this->NetRefHandleManager,SUB81(&local_690,0));
  if ((local_690.Value == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetRefHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReferenceCache.cpp"
                         ,0x199,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if ((cVar4 != '\0') || (cVar5 = (**(code **)(*(longlong *)local_698 + 0x200))(), cVar5 != '\0')) {
    local_530 = *(FName *)&local_698->field_0x18;
    ::FName::ToString(&local_530,&local_518);
    iVar9 = GetPlayInEditorID();
    if (iVar9 != -1) {
      (**(code **)(this->ReplicationBridge->_padding_ + 0x348))
                (this->ReplicationBridge,0,&local_518);
    }
    FVar10 = FStringTokenStore::GetOrCreateToken(this->StringTokenStore,(FString *)(local_568 + 4));
    FVar21 = (FNetToken_u_0)
             *(FNetToken_u_0 *)&((FNetToken_u_0 *)CONCAT44(extraout_var_01,FVar10.field0_0x0))->_s_0
    ;
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
  }
  pUVar12 = local_698;
  local_5f0 = local_5f0 & 0xc0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_698 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_698);
  }
  local_638.ObjectIndex = 0;
  local_638.ObjectSerialNumber = 0;
  local_548 = pUVar12;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar12);
  }
  FWeakObjectPtr::operator=(&local_638,(FObjectPtr)&local_548);
  local_618 = local_638;
  local_608 = local_690;
  local_610 = local_698;
  local_5a8.Value = 0;
  local_5a0 = 0;
  local_600 = FVar21;
  CreateObjectReferenceInternal
            (this,*(UObject **)&local_698->field_0x20,(FNetObjectReference *)&local_5a8._s_0);
  local_5f8._s_0 = local_5a8._s_0;
  if ((cVar4 == '\0') || (*(longlong *)&local_698->field_0x20 != 0)) {
    local_5f0 = local_5f0 & 0xfb;
    if (cVar4 != '\0') goto LAB_1442743e0;
    bVar8 = 1;
  }
  else {
    local_5f0 = local_5f0 & 0xfb | 4;
LAB_1442743e0:
    pUVar14 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)local_698);
    bVar8 = (byte)((uint)pUVar14->PackageFlagsPrivate >> 0x11) & 1;
  }
  pUVar12 = local_698;
  local_5f0 = ~((local_5f0 & 0xfe | bVar8) * '\x02') & 2 | local_5f0 & 0xe4 | bVar8;
  if (local_698 != (UObject *)0x0) {
    pUVar15 = Z_Construct_UClass_UPackage_NoRegister();
    lVar20 = *(longlong *)&pUVar12->field_0x10;
    iVar9 = (int)pUVar15->_padding_;
    if ((iVar9 <= *(int *)(lVar20 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar9 * 8) ==
        &pUVar15->_padding_)) goto LAB_14427443a;
  }
  pUVar12 = (UObject *)(UObjectBaseUtility *)0x0;
LAB_14427443a:
  if (((bool)(local_5f0 >> 2 & 1) != (pUVar12 != (UObject *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedObject.bIsPackage == (Cast<UPackage>(Object) != nullptr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReferenceCache.cpp"
                         ,0x1bb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  local_4f8 = &local_690;
  local_4f0 = &local_618;
  TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Net::FNetRefHandle_const_&,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference_const_&>_>
            ((TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
              *)&this->ReferenceHandleToCachedReference,
             (TPairInitializer<UE::Net::FNetRefHandle_const_&,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference_const_&>
              *)local_560,(bool *)&local_4f8);
  local_4e8 = &local_698;
  local_4e0 = &local_690;
  TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_const_*_const_&,UE::Net::FNetRefHandle_const_&>_>
            ((TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<UObject_const_*_const_&,UE::Net::FNetRefHandle_const_&> *)
                     (local_560 + 4),(bool *)&local_4e8);
  if (local_690.Value != 0) {
    local_468.bIsDynamic = false;
    local_468.bIsExternal = false;
    local_468.Base = local_448;
    local_468.CurPos = local_448;
    local_468.End = (wchar_t *)local_48;
    if ((FVar21.Value & 0xfffff) == 0) {
      local_538 = *(FName *)&local_698->field_0x18;
      ::FName::ToString(&local_538,&local_660);
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_468,L"Ref_%s");
      if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_660.Data.AllocatorInstance.Data);
      }
    }
    else {
      FStringTokenStore::ResolveToken
                (this->StringTokenStore,(FNetToken)FVar21,(FNetTokenStoreState *)0x0);
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_468,L"Ref_%s");
    }
    if (local_468.End < local_468.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,1);
    }
    *local_468.CurPos = L'\0';
    sVar16 = wcslen(local_468.Base);
    pFVar17 = CreatePersistentNetDebugName(local_468.Base,(uint)sVar16);
    uVar19 = local_690.Value & 0x3fffffffffffff;
    if (((local_690.Value & 0xffc0000000000000) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReplicationSystemId != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                           ,0x2b,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    FNetTrace::TraceObjectCreated
              ((uint)((ulonglong)local_690 >> 0x36) - 1,uVar19,pFVar17,0,this->bIsAuthority);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
  }
  if (5 < (byte)LogIrisReferences._0_1_) {
    if ((local_5f8.Value == 0) || ((local_5f8.Value & 0xffc0000000000000) == 0)) {
      ::FString::PrintfImpl(&local_678,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_678,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    if (local_698 == (UObject *)0x0) {
      ::FString::FString(&local_5d8,L"None");
    }
    else {
      local_540 = *(FName *)&local_698->field_0x18;
      ::FName::ToString(&local_540,&local_5d8);
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_698,&local_478,(UObject *)0x0);
    if ((local_608.Value == 0) || ((local_608.Value & 0xffc0000000000000) == 0)) {
      ::FString::PrintfImpl(&local_598,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_598,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
    if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
    }
    if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_678.Data.AllocatorInstance.Data);
    }
  }
  ((FNetRefHandle *)local_688._8_8_)->field0_0x0 = local_608;
  *(ulonglong *)(local_688._8_8_ + 8) = (ulonglong)((local_600.Value & 0xfffff) != 0) << 0x20;
  return true;
}

// DescribeObjectReference @ 144274e40

FString * __thiscall
UE::Net::Private::FObjectReferenceCache::DescribeObjectReference
          (FObjectReferenceCache *this,FString *__return_storage_ptr__,FNetObjectReference *param_1,
          FNetObjectResolveContext *param_2)

{
  FNetToken_u_0_s_0 FVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  GenerateFullPath_r(this,(FNetRefHandle)*(FNetRefHandle_u_0 *)&(param_1->RefHandle).field0_0x0._s_0
                     ,param_2,__return_storage_ptr__);
  FVar1 = (param_1->PathToken).field0_0x0._s_0;
  if ((param_1->PathToken).field0_0x0.Index != 0) {
    pwVar4 = FStringTokenStore::ResolveToken
                       (this->StringTokenStore,(FNetToken)FVar1,param_2->RemoteNetTokenStoreState);
    if (pwVar4 != (wchar_t *)0x0) {
      if (1 < (__return_storage_ptr__->Data).ArrayNum) {
        ::FString::AppendChars(__return_storage_ptr__,L".",1);
      }
      ::FString::FString(&local_18,pwVar4);
      uVar2 = param_2->ConnectionId;
      iVar3 = GetPlayInEditorID();
      if (iVar3 != -1) {
        (**(code **)(this->ReplicationBridge->_padding_ + 0x348))
                  (this->ReplicationBridge,uVar2,&local_18,1);
      }
      ::FString::PrintfImpl(&local_28,L"%s");
      iVar3 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// FullPath @ 1442792d0

FString * __thiscall
UE::Net::Private::FObjectReferenceCache::FullPath
          (FObjectReferenceCache *this,FString *__return_storage_ptr__,FNetRefHandle param_1,
          FNetObjectResolveContext *param_2)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  GenerateFullPath_r(this,param_1,param_2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GenerateFullPath_r @ 144279310

void __thiscall
UE::Net::Private::FObjectReferenceCache::GenerateFullPath_r
          (FObjectReferenceCache *this,FNetRefHandle param_1,FNetObjectResolveContext *param_2,
          FString *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  ulonglong *puVar3;
  ForAnyElementType FVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr *this_00;
  ulonglong uVar6;
  int iVar7;
  undefined1 *puVar8;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_1.field0_0x0 != 0) {
    uVar6 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
    if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
        *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
      puVar8 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->ReferenceHandleToCachedReference).field_0x38;
      }
      iVar7 = *(int *)(puVar8 + ((uVar6 >> 0x20) * 0x17 + uVar6 &
                                (ulonglong)
                                (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1))
                                * 4);
      if (iVar7 != -1) {
        do {
          puVar3 = (ulonglong *)
                   ((longlong)iVar7 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference);
          if ((*puVar3 & 0x3fffffffffffff) == uVar6) {
            this_00 = (FWeakObjectPtr *)(puVar3 + 1);
            if (puVar3 == (ulonglong *)0x0) {
              this_00 = (FWeakObjectPtr *)0x0;
            }
            if (this_00 != (FWeakObjectPtr *)0x0) {
              GenerateFullPath_r(this,(FNetRefHandle)
                                      *(FNetRefHandle_u_0 *)
                                       &((FNetRefHandle_u_0 *)(this_00 + 4))->_s_0,param_2,param_3);
              if (1 < (param_3->Data).ArrayNum) {
                ::FString::AppendChars(param_3,L".",1);
              }
              bVar1 = FWeakObjectPtr::IsValid(this_00);
              if (!bVar1) {
                if (((FNetToken_u_0 *)this_00[3]).Index == 0) {
                  if ((ulonglong)param_1.field0_0x0 >> 0x36 == 0) {
                    ::FString::PrintfImpl(&local_58,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
                    pwVar5 = L"[%s](EMPTY)";
                  }
                  else {
                    ::FString::PrintfImpl(&local_58,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
                    pwVar5 = L"[%s](EMPTY)";
                  }
                  goto LAB_1442795b1;
                }
                FStringTokenStore::ResolveToken
                          (this->StringTokenStore,(FNetToken)((FNetToken_u_0 *)(this_00 + 3))->_s_0,
                           param_2->RemoteNetTokenStoreState);
                if ((ulonglong)param_1.field0_0x0 >> 0x36 == 0) {
                  ::FString::PrintfImpl(&local_58,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
                }
                else {
                  ::FString::PrintfImpl(&local_58,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
                }
                ::FString::PrintfImpl(&local_38,L"[%s](%s)");
                goto LAB_1442795ca;
              }
              pUVar2 = FWeakObjectPtr::Get(this_00);
              local_res10.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
              local_res10.Number = *(uint *)&pUVar2->field_0x1c;
              ::FName::ToString(&local_res10,&local_38);
              if ((ulonglong)param_1.field0_0x0 >> 0x36 == 0) {
                ::FString::PrintfImpl(&local_58,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
              }
              else {
                ::FString::PrintfImpl(&local_58,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
              }
              ::FString::PrintfImpl(&local_48,L"[%s](%s)");
              iVar7 = local_48.Data.ArrayNum + -1;
              if (local_48.Data.ArrayNum == 0) {
                iVar7 = 0;
              }
              ::FString::AppendChars(param_3,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar7);
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
              FVar4.Data = local_38.Data.AllocatorInstance.Data;
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
                FVar4.Data = local_38.Data.AllocatorInstance.Data;
              }
              goto LAB_1442795f6;
            }
            break;
          }
          iVar7 = (int)puVar3[7];
        } while (iVar7 != -1);
      }
    }
    if ((ulonglong)param_1.field0_0x0 >> 0x36 == 0) {
      ::FString::PrintfImpl(&local_58,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_58,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    pwVar5 = L"[%s](NOT_IN_CACHE)";
LAB_1442795b1:
    ::FString::PrintfImpl(&local_38,pwVar5);
LAB_1442795ca:
    iVar7 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(param_3,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar7);
    FVar4.Data = local_58.Data.AllocatorInstance.Data;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      FVar4.Data = local_58.Data.AllocatorInstance.Data;
    }
LAB_1442795f6:
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
  }
  return;
}

// GetDynamicRoot @ 14427a540

FNetRefHandle __thiscall
UE::Net::Private::FObjectReferenceCache::GetDynamicRoot
          (FObjectReferenceCache *this,FNetRefHandle param_1)

{
  int iVar1;
  FCachedNetObjectReference *pFVar2;
  ulonglong *puVar3;
  ulonglong in_R8;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  uVar4 = in_R8 & 0x3fffffffffffff;
  if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
      *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ReferenceHandleToCachedReference).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                              (ulonglong)
                              (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1)) *
                              4);
    if (iVar1 != -1) {
      do {
        puVar3 = (ulonglong *)
                 ((longlong)iVar1 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference);
        if ((*puVar3 & 0x3fffffffffffff) == uVar4) {
          pFVar2 = (FCachedNetObjectReference *)(puVar3 + 1);
          if (puVar3 == (ulonglong *)0x0) {
            pFVar2 = (FCachedNetObjectReference *)0x0;
          }
          goto joined_r0x00014427a5e1;
        }
        iVar1 = (int)puVar3[7];
      } while (iVar1 != -1);
    }
  }
LAB_14427a5bd:
  *(undefined8 *)param_1.field0_0x0 = 0;
  return (FNetRefHandle)param_1.field0_0x0.Value;
joined_r0x00014427a5e1:
  if (pFVar2 == (FCachedNetObjectReference *)0x0) goto LAB_14427a5bd;
  if ((pFVar2->OuterNetRefHandle).field0_0x0.Value == 0) {
    uVar4 = (pFVar2->NetRefHandle).field0_0x0.Value;
    if ((uVar4 != 0) && ((uVar4 & 1) == 0)) {
      *(ulonglong *)param_1.field0_0x0 = uVar4;
      return (FNetRefHandle)param_1.field0_0x0.Value;
    }
    goto LAB_14427a5bd;
  }
  pFVar2 = TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
           ::Find((TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
                   *)&this->ReferenceHandleToCachedReference,&pFVar2->OuterNetRefHandle);
  goto joined_r0x00014427a5e1;
}

// GetObjectFromReferenceHandle @ 14427adf0

UObject * __thiscall
UE::Net::Private::FObjectReferenceCache::GetObjectFromReferenceHandle
          (FObjectReferenceCache *this,FNetRefHandle param_1)

{
  int iVar1;
  FWeakObjectPtr *this_00;
  UObject *pUVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  uVar4 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
      *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ReferenceHandleToCachedReference).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                              (ulonglong)
                              (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1)) *
                              4);
    if (iVar1 != -1) {
      do {
        puVar3 = (ulonglong *)
                 ((longlong)iVar1 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference);
        if ((*puVar3 & 0x3fffffffffffff) == uVar4) {
          this_00 = (FWeakObjectPtr *)(puVar3 + 1);
          if (puVar3 == (ulonglong *)0x0) {
            this_00 = (FWeakObjectPtr *)0x0;
          }
          if (this_00 == (FWeakObjectPtr *)0x0) {
            return (UObject *)0x0;
          }
          pUVar2 = FWeakObjectPtr::Get(this_00);
          return pUVar2;
        }
        iVar1 = (int)puVar3[7];
      } while (iVar1 != -1);
    }
  }
  return (UObject *)0x0;
}

// GetObjectReferenceHandleFromObject @ 14427af50

/* WARNING: Enum "Type": Some values do not have unique names */

FNetRefHandle __thiscall
UE::Net::Private::FObjectReferenceCache::GetObjectReferenceHandleFromObject
          (FObjectReferenceCache *this,UObject *param_1,EGetRefHandleFlags param_2)

{
  FNetRefHandle_u_0 *this_00;
  FCachedNetObjectReference *this_01;
  UObject *pUVar1;
  undefined4 in_register_00000084;
  UObject *this_02;
  byte in_R9B;
  FName local_res18;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_02 = (UObject *)CONCAT44(in_register_00000084,param_2);
  if ((this_02 != (UObject *)0x0) &&
     (this_00 = &TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
                 ::Find((TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
                         *)this,this_02)->field0_0x0, this_00 != (FNetRefHandle_u_0 *)0x0)) {
    this_01 = TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
              ::Find((TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
                      *)&this->ReferenceHandleToCachedReference,(FNetRefHandle *)&this_00->_s_0);
    if (this_01 == (FCachedNetObjectReference *)0x0) {
      if (5 < (byte)LogIrisReferences._0_1_) {
        local_res18.ComparisonIndex.Value = *(uint *)&this_02->field_0x18;
        local_res18.Number = *(uint *)&this_02->field_0x1c;
        ::FName::ToString(&local_res18,&local_48);
        FNetRefHandle::ToString((FNetRefHandle *)this_00,&local_38);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
      ::Remove((TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
                *)this,this_02);
    }
    else {
      pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01,(bool)(in_R9B & 1));
      if (pUVar1 == this_02) {
        if (6 < (byte)LogIrisReferences._0_1_) {
          FNetRefHandle::ToString(&this_01->OuterNetRefHandle,&local_28);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_02,&local_48,(UObject *)0x0);
          FNetRefHandle::ToString(&this_01->NetRefHandle,&local_38);
          Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
        *(FNetRefHandle_u_0 *)param_1 = *this_00;
        return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
      }
      if (5 < (byte)LogIrisReferences._0_1_) {
        local_res18.ComparisonIndex.Value = *(uint *)&this_02->field_0x18;
        local_res18.Number = *(uint *)&this_02->field_0x1c;
        ::FName::ToString(&local_res18,&local_48);
        FNetRefHandle::ToString(&this_01->NetRefHandle,&local_28);
        FWeakObjectPtr::IsStale((FWeakObjectPtr *)this_01,true,false);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  *(undefined8 *)param_1 = 0;
  return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
}

// GetObjectRelativePath @ 14427b200

wchar_t * __thiscall
UE::Net::Private::FObjectReferenceCache::GetObjectRelativePath
          (FObjectReferenceCache *this,FNetRefHandle param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined1 *puVar6;
  
  uVar4 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
      *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ReferenceHandleToCachedReference).field_0x38;
    }
    iVar1 = *(int *)(puVar6 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                              (ulonglong)
                              (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1)) *
                              4);
    if (iVar1 != -1) {
      do {
        puVar3 = (ulonglong *)
                 ((longlong)iVar1 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference);
        if ((*puVar3 & 0x3fffffffffffff) == uVar4) {
          puVar5 = puVar3 + 1;
          if (puVar3 == (ulonglong *)0x0) {
            puVar5 = (ulonglong *)0x0;
          }
          if (puVar5 == (ulonglong *)0x0) {
            return (wchar_t *)0x0;
          }
          pwVar2 = FStringTokenStore::ResolveToken
                             (this->StringTokenStore,
                              (FNetToken)*(FNetToken_u_0 *)&((FNetToken_u_0 *)(puVar5 + 3))->_s_0,
                              (FNetTokenStoreState *)0x0);
          return pwVar2;
        }
        iVar1 = (int)puVar3[7];
      } while (iVar1 != -1);
    }
  }
  return (wchar_t *)0x0;
}

// GetOrCreateObjectReference @ 14427b6e0

/* WARNING: Enum "Type": Some values do not have unique names */

FNetObjectReference * __thiscall
UE::Net::Private::FObjectReferenceCache::GetOrCreateObjectReference
          (FObjectReferenceCache *this,FNetObjectReference *__return_storage_ptr__,FString *param_1,
          UObject *param_2)

{
  FNetToken FVar1;
  undefined4 extraout_var;
  FLLMScope local_res8 [2];
  FNetRefHandle_u_0 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  undefined8 local_98;
  undefined8 local_90;
  FNetRefHandle_u_0 local_88;
  undefined4 local_80;
  FCachedNetObjectReference *local_78;
  byte local_70;
  undefined1 local_68 [12];
  FName local_5c;
  FMemScope local_50;
  FNetRefHandle_u_0 *local_48;
  undefined8 *local_40;
  
  if (this->bIsAuthority == 0) {
    (__return_storage_ptr__->RefHandle).field0_0x0.Value = 0;
    __return_storage_ptr__->PathToken = (FNetToken_u_0)0x0;
    __return_storage_ptr__->Traits = None;
  }
  else {
    FNetRefHandleManager::AllocateNetRefHandle(this->NetRefHandleManager,SUB81(&local_e8,0));
    if (local_e8.Value != 0) {
      FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
      local_68._4_4_ = LLMTagDeclaration_Iris.UniqueName.ComparisonIndex.Value;
      local_68._8_4_ = LLMTagDeclaration_Iris.UniqueName.Number;
      FMemScope::FMemScope(&local_50,(FName *)(local_68 + 4),true);
      local_70 = local_70 & 0xc0;
      local_88._s_0 = local_e8._s_0;
      local_98 = 0;
      local_90 = 0;
      FVar1 = FStringTokenStore::GetOrCreateToken(this->StringTokenStore,(FString *)local_68);
      local_e0._8_8_ = (FCachedNetObjectReference *)0x0;
      local_d0 = 0;
      local_80 = *(undefined4 *)CONCAT44(extraout_var,FVar1.field0_0x0);
      CreateObjectReferenceInternal(this,param_2,(FNetObjectReference *)(local_e0 + 8));
      local_78 = (FCachedNetObjectReference *)local_e0._8_8_;
      local_70 = local_70 & 0xe3 | 3;
      local_48 = &local_e8;
      local_40 = &local_98;
      TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UE::Net::FNetRefHandle_const_&,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference_const_&>_>
                ((TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
                  *)&this->ReferenceHandleToCachedReference,
                 (TPairInitializer<UE::Net::FNetRefHandle_const_&,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference_const_&>
                  *)local_e0,(bool *)&local_48);
      if (5 < (byte)LogIrisReferences._0_1_) {
        if (param_2 == (UObject *)0x0) {
          ::FString::FString(&local_a8,L"None");
        }
        else {
          local_5c.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
          local_5c.Number = *(uint *)&param_2->field_0x1c;
          ::FName::ToString(&local_5c,&local_a8);
        }
        if ((local_78 == (FCachedNetObjectReference *)0x0) ||
           (((ulonglong)local_78 & 0xffc0000000000000) == 0)) {
          ::FString::PrintfImpl(&local_b8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_b8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        if ((param_1->Data).ArrayNum == 0) {
          local_e0._0_8_ = L"";
        }
        else {
          local_e0._0_8_ = (param_1->Data).AllocatorInstance.Data;
        }
        if ((local_88.Value == 0) || ((local_88.Value & 0xffc0000000000000) == 0)) {
          ::FString::PrintfImpl(&local_c8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_c8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      FMemScope::~FMemScope(&local_50);
      FLLMScope::~FLLMScope(local_res8);
    }
    (__return_storage_ptr__->RefHandle).field0_0x0.Value = (ulong64)local_e8;
    __return_storage_ptr__->PathToken = (FNetToken_u_0)0x0;
    __return_storage_ptr__->Traits = None;
  }
  return __return_storage_ptr__;
}

// GetOrCreateObjectReference @ 14427b9d0

FNetObjectReference * __thiscall
UE::Net::Private::FObjectReferenceCache::GetOrCreateObjectReference
          (FObjectReferenceCache *this,FNetObjectReference *__return_storage_ptr__,UObject *param_1)

{
  (__return_storage_ptr__->RefHandle).field0_0x0.Value = 0;
  __return_storage_ptr__->PathToken = (FNetToken_u_0)0x0;
  __return_storage_ptr__->Traits = None;
  CreateObjectReferenceInternal(this,param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPreRegisteredObjectFromReferenceHandle @ 14427bd50

UObject * __thiscall
UE::Net::Private::FObjectReferenceCache::GetPreRegisteredObjectFromReferenceHandle
          (FObjectReferenceCache *this,FNetRefHandle param_1)

{
  int iVar1;
  FWeakObjectPtr *this_00;
  UObject *pUVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  uVar4 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
      *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ReferenceHandleToCachedReference).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                              (ulonglong)
                              (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1)) *
                              4);
    if (iVar1 != -1) {
      do {
        puVar3 = (ulonglong *)
                 ((longlong)iVar1 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference);
        if ((*puVar3 & 0x3fffffffffffff) == uVar4) {
          this_00 = (FWeakObjectPtr *)(puVar3 + 1);
          if (puVar3 == (ulonglong *)0x0) {
            this_00 = (FWeakObjectPtr *)0x0;
          }
          if (this_00 == (FWeakObjectPtr *)0x0) {
            return (UObject *)0x0;
          }
          if ((this_00[5].ObjectIndex & 0x20) == 0) {
            return (UObject *)0x0;
          }
          pUVar2 = FWeakObjectPtr::Get(this_00);
          return pUVar2;
        }
        iVar1 = (int)puVar3[7];
      } while (iVar1 != -1);
    }
  }
  return (UObject *)0x0;
}

// GetReplicatedOuter @ 14427c8a0

FNetObjectReference * __thiscall
UE::Net::Private::FObjectReferenceCache::GetReplicatedOuter
          (FObjectReferenceCache *this,FNetObjectReference *__return_storage_ptr__,
          FNetObjectReference *param_1)

{
  longlong lVar1;
  FNetRefHandleManager *pFVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  
  uVar9 = (param_1->RefHandle).field0_0x0.Value;
  if ((uVar9 == 0) && (((param_1->PathToken).field0_0x0.Value & 0xfffff) == 0)) {
    (__return_storage_ptr__->RefHandle).field0_0x0.Value = 0;
    __return_storage_ptr__->PathToken = (FNetToken_u_0)0x0;
    __return_storage_ptr__->Traits = None;
    return __return_storage_ptr__;
  }
  puVar7 = (ulonglong *)0x0;
  uVar9 = uVar9 & 0x3fffffffffffff;
  if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
      *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ReferenceHandleToCachedReference).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + ((ulonglong)
                               (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1) &
                              (uVar9 >> 0x20) * 0x17 + uVar9) * 4);
    if (iVar3 != -1) {
      do {
        puVar5 = (ulonglong *)
                 ((longlong)iVar3 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference);
        if ((*puVar5 & 0x3fffffffffffff) == uVar9) {
          puVar4 = puVar5 + 1;
          if (puVar5 == (ulonglong *)0x0) {
            puVar4 = puVar7;
          }
          if ((puVar4 != (ulonglong *)0x0) && (uVar9 = puVar4[4], uVar9 != 0)) {
            pFVar2 = this->NetRefHandleManager;
            goto LAB_14427c9b0;
          }
          break;
        }
        iVar3 = (int)puVar5[7];
      } while (iVar3 != -1);
    }
  }
  goto LAB_14427c95d;
  while( true ) {
    while (puVar5 = (ulonglong *)
                    ((longlong)iVar3 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference),
          (*puVar5 & 0x3fffffffffffff) != uVar11) {
      iVar3 = (int)puVar5[7];
      if (iVar3 == -1) goto LAB_14427c95d;
    }
    puVar4 = puVar5 + 1;
    if (puVar5 == (ulonglong *)0x0) {
      puVar4 = puVar7;
    }
    if ((puVar4 == (ulonglong *)0x0) || (uVar9 = puVar4[4], uVar9 == 0)) break;
LAB_14427c9b0:
    uVar11 = uVar9 & 0x3fffffffffffff;
    iVar3 = (int)(uVar11 >> 0x20);
    if (*(int *)&(pFVar2->RefHandleToInternalIndex).field_0x8 !=
        *(int *)&(pFVar2->RefHandleToInternalIndex).field_0x34) {
      puVar6 = *(undefined1 **)&(pFVar2->RefHandleToInternalIndex).field_0x40;
      puVar8 = &(pFVar2->RefHandleToInternalIndex).field_0x38;
      if (puVar6 != (undefined1 *)0x0) {
        puVar8 = puVar6;
      }
      iVar10 = *(int *)(puVar8 + (ulonglong)
                                 (*(int *)&(pFVar2->RefHandleToInternalIndex).field_0x48 - 1U &
                                 iVar3 * 0x17 + (int)uVar11) * 4);
      if (iVar10 != -1) {
        do {
          lVar1 = *(longlong *)&pFVar2->RefHandleToInternalIndex + (longlong)iVar10 * 0x18;
          if ((*(ulonglong *)
                (*(longlong *)&pFVar2->RefHandleToInternalIndex + (longlong)iVar10 * 0x18) &
              0x3fffffffffffff) == uVar11) {
            if (iVar10 != -1) {
              puVar5 = (ulonglong *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar5 = puVar7;
              }
              if ((puVar5 != (ulonglong *)0x0) && ((int)*puVar5 != 0)) {
                (__return_storage_ptr__->RefHandle).field0_0x0.Value = uVar9;
                goto LAB_14427c960;
              }
            }
            break;
          }
          iVar10 = *(int *)(lVar1 + 0x10);
        } while (iVar10 != -1);
      }
    }
    puVar6 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
    puVar8 = &(this->ReferenceHandleToCachedReference).field_0x38;
    if (puVar6 != (undefined1 *)0x0) {
      puVar8 = puVar6;
    }
    iVar3 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1U &
                              (int)uVar11 + iVar3 * 0x17) * 4);
    if (iVar3 == -1) break;
  }
LAB_14427c95d:
  (__return_storage_ptr__->RefHandle).field0_0x0.Value = 0;
LAB_14427c960:
  __return_storage_ptr__->PathToken = (FNetToken_u_0)0x0;
  __return_storage_ptr__->Traits = None;
  return __return_storage_ptr__;
}

// Init @ 14427e050

void __thiscall
UE::Net::Private::FObjectReferenceCache::Init
          (FObjectReferenceCache *this,UReplicationSystem *param_1)

{
  UObjectReplicationBridge *pUVar1;
  FNetTokenStore *pFVar2;
  FName FVar3;
  FReplicationSystemInternal *pFVar4;
  FName *pFVar5;
  FName *pFVar6;
  
  this->ReplicationSystem = param_1;
  pUVar1 = UReplicationSystem::GetReplicationBridge(param_1);
  this->ReplicationBridge = pUVar1;
  pFVar2 = UReplicationSystem::GetNetTokenStore(param_1);
  this->NetTokenStore = pFVar2;
  pFVar6 = (FName *)(pFVar2->TokenDataStores).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)(pFVar2->TokenDataStores).ArrayNum * 2;
  do {
    if (pFVar6 == pFVar5) {
      FVar3.ComparisonIndex.Value = 0;
      FVar3.Number = 0;
LAB_14427e0b0:
      this->StringTokenStore = (FStringTokenStore *)FVar3;
      pFVar4 = UReplicationSystem::GetReplicationSystemInternal(param_1);
      this->NetRefHandleManager = &pFVar4->NetRefHandleManager;
      *(uint *)&this->field_0x118 =
           (param_1->bIsServer ^ ZPULL(*(undefined4 *)&this->field_0x118,0,1)) & 1 ^
           *(undefined4 *)&this->field_0x118;
      return;
    }
    if (FStringTokenStore::StringTokenStoreName == *pFVar6) {
      FVar3 = pFVar6[1];
      goto LAB_14427e0b0;
    }
    pFVar6 = pFVar6 + 2;
  } while( true );
}

// IsAuthority @ 144282830

bool __thiscall UE::Net::Private::FObjectReferenceCache::IsAuthority(FObjectReferenceCache *this)

{
  return this->bIsAuthority;
}

// IsDynamicInternal @ 1442829c0

bool __thiscall
UE::Net::Private::FObjectReferenceCache::IsDynamicInternal
          (FObjectReferenceCache *this,UObject *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x208))(param_1);
  return cVar1 == '\0';
}

// IsDynamicObject @ 1442829e0

bool __thiscall
UE::Net::Private::FObjectReferenceCache::IsDynamicObject
          (FObjectReferenceCache *this,UObject *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x208))(param_1);
  return cVar1 == '\0';
}

// IsNetRefHandleBroken @ 144282b90

bool __thiscall
UE::Net::Private::FObjectReferenceCache::IsNetRefHandleBroken
          (FObjectReferenceCache *this,FNetRefHandle param_1,bool param_2)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  uVar4 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
      *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ReferenceHandleToCachedReference).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                              (ulonglong)
                              (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1)) *
                              4);
    if (iVar1 != -1) {
      do {
        puVar3 = (ulonglong *)
                 ((longlong)iVar1 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference);
        if ((*puVar3 & 0x3fffffffffffff) == uVar4) {
          puVar2 = puVar3 + 1;
          if (puVar3 == (ulonglong *)0x0) {
            puVar2 = (ulonglong *)0x0;
          }
          if (puVar2 == (ulonglong *)0x0) {
            return param_2;
          }
          return (bool)((byte)puVar2[5] >> 3 & 1);
        }
        iVar1 = (int)puVar3[7];
      } while (iVar1 != -1);
    }
  }
  return param_2;
}

// IsNetRefHandlePending @ 144282c50

bool __thiscall
UE::Net::Private::FObjectReferenceCache::IsNetRefHandlePending
          (FObjectReferenceCache *this,FNetRefHandle param_1,FPendingBatchHolder *param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  if (param_1.field0_0x0 == 0) {
    return false;
  }
  do {
    uVar4 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
    iVar3 = (int)(uVar4 >> 0x20);
    if (*(int *)&(param_2->PendingBatches).field_0x8 !=
        *(int *)&(param_2->PendingBatches).field_0x34) {
      puVar1 = *(undefined1 **)&(param_2->PendingBatches).field_0x40;
      puVar6 = &(param_2->PendingBatches).field_0x38;
      if (puVar1 != (undefined1 *)0x0) {
        puVar6 = puVar1;
      }
      iVar7 = *(int *)(puVar6 + (ulonglong)
                                (iVar3 * 0x17 + (int)uVar4 &
                                *(int *)&(param_2->PendingBatches).field_0x48 - 1U) * 4);
      if (iVar7 != -1) {
        do {
          if ((*(ulonglong *)(*(longlong *)&param_2->PendingBatches + (longlong)iVar7 * 0x18) &
              0x3fffffffffffff) == uVar4) {
            if (iVar7 != -1) {
              return true;
            }
            break;
          }
          iVar7 = *(int *)(*(longlong *)&param_2->PendingBatches + 0x10 + (longlong)iVar7 * 0x18);
        } while (iVar7 != -1);
      }
    }
    if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 ==
        *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
      return false;
    }
    puVar1 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
    puVar6 = &(this->ReferenceHandleToCachedReference).field_0x38;
    if (puVar1 != (undefined1 *)0x0) {
      puVar6 = puVar1;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1U &
                              (int)uVar4 + iVar3 * 0x17) * 4);
    if (iVar3 == -1) {
      return false;
    }
    while (puVar2 = (ulonglong *)
                    ((longlong)iVar3 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference),
          (*puVar2 & 0x3fffffffffffff) != uVar4) {
      iVar3 = (int)puVar2[7];
      if (iVar3 == -1) {
        return false;
      }
    }
    puVar5 = puVar2 + 1;
    if (puVar2 == (ulonglong *)0x0) {
      puVar5 = (ulonglong *)0x0;
    }
    if (puVar5 == (ulonglong *)0x0) {
      return false;
    }
    if ((puVar5[5] & 0x10) != 0) {
      return true;
    }
    param_1.field0_0x0 = (FNetRefHandle_u_0)((FNetRefHandle_u_0 *)(puVar5 + 4))->Value;
    if (param_1.field0_0x0.Value == (FNetRefHandle_u_0)0x0) {
      return false;
    }
  } while( true );
}

// IsNetRefHandlePreRegistered @ 144282db0

bool __thiscall
UE::Net::Private::FObjectReferenceCache::IsNetRefHandlePreRegistered
          (FObjectReferenceCache *this,FNetRefHandle param_1)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  uVar4 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
      *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ReferenceHandleToCachedReference).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                              (ulonglong)
                              (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1)) *
                              4);
    if (iVar1 != -1) {
      do {
        puVar3 = (ulonglong *)
                 ((longlong)iVar1 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference);
        if ((*puVar3 & 0x3fffffffffffff) == uVar4) {
          puVar2 = puVar3 + 1;
          if (puVar3 == (ulonglong *)0x0) {
            puVar2 = (ulonglong *)0x0;
          }
          if (puVar2 == (ulonglong *)0x0) {
            return false;
          }
          return (bool)((byte)puVar2[5] >> 5 & 1);
        }
        iVar1 = (int)puVar3[7];
      } while (iVar1 != -1);
    }
  }
  return false;
}

// PreRegisterObjectReferenceHandle @ 144286670

/* WARNING: Enum "Type": Some values do not have unique names */

FNetRefHandle __thiscall
UE::Net::Private::FObjectReferenceCache::PreRegisterObjectReferenceHandle
          (FObjectReferenceCache *this,UObject *param_1)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  UObject *in_R8;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  FNetRefHandle_u_0 local_18;
  undefined8 local_10;
  
  if (this->bIsAuthority == 0) {
    if (1 < (byte)LogIrisReferences._0_1_) {
      if ((in_R8 == (UObject *)0x0) || (*(longlong *)&in_R8->field_0x10 == 0)) {
        ::FString::FString((FString *)&local_18._s_0,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)in_R8,(FString *)&local_18._s_0,(UObject *)0x0,None);
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      if ((void *)local_18.Value != (void *)0x0) {
        FMemory::Free((void *)local_18);
      }
    }
    `UE::Net::Private::FObjectReferenceCache::PreRegisterObjectReferenceHandle'::__l10::<lambda_1>::
    operator()(local_res8);
    *(undefined8 *)param_1 = 0;
    return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
  }
  local_18.Value = 0;
  local_10 = 0;
  CreateObjectReferenceInternal(this,in_R8,(FNetObjectReference *)&local_18._s_0);
  uVar5 = local_18.Value & 0x3fffffffffffff;
  if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
      *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ReferenceHandleToCachedReference).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + ((uVar5 >> 0x20) * 0x17 + uVar5 &
                              (ulonglong)
                              (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1)) *
                              4);
    if (iVar1 != -1) {
      while (puVar3 = (ulonglong *)
                      ((longlong)iVar1 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference
                      ), (*puVar3 & 0x3fffffffffffff) != uVar5) {
        iVar1 = (int)puVar3[7];
        if (iVar1 == -1) {
          *(FNetRefHandle_u_0 *)param_1 = local_18;
          return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
        }
      }
      puVar2 = puVar3 + 1;
      if (puVar3 == (ulonglong *)0x0) {
        puVar2 = (ulonglong *)0x0;
      }
      if (puVar2 != (ulonglong *)0x0) {
        *(byte *)(puVar2 + 5) = (byte)puVar2[5] | 0x20;
      }
    }
  }
  *(FNetRefHandle_u_0 *)param_1 = local_18;
  return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
}

// ReadExports @ 144288a50

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FObjectReferenceCache::ReadExports
          (FObjectReferenceCache *this,FNetRefHandle *param_1,FNetSerializationContext *param_2,
          TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *param_3,
          EIrisAsyncLoadingPriority *param_4)

{
  FNetBitStreamReader *this_00;
  FInternalNetSerializationContext *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  FNetRefHandle_u_0 FVar10;
  uint uVar11;
  FNetRefHandle_u_0 local_58;
  FNetObjectReference local_50;
  
  FVar3 = GNetError_InvalidValue;
  if (param_3 == (TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *)0x0) {
    FNetSerializationContext::SetBitStreamOverflow(param_2);
    FNetErrorContext::SetError(&param_2->ErrorContext,FVar3);
    if (1 < (byte)LogIrisReferences._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
    }
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6150983300673435898>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReferenceCache.cpp"
                       ,0x706,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  else {
    this_00 = param_2->BitStreamReader;
    uVar6 = FNetBitStreamReader::ReadBits(this_00,1);
    uVar11 = 0;
    uVar7 = 0xffffffff;
    FVar10.Value = 0;
    if (1 < GNetTraceRuntimeVerbosity) {
      FVar10 = (FNetRefHandle_u_0)param_2->TraceCollector;
    }
    if ((FNetTraceCollector *)FVar10.Value != (FNetTraceCollector *)0x0) {
      uVar7 = FNetTrace::BeginPacketContentEvent
                        ((FNetTraceCollector *)FVar10,NameId,this_00->BufferBitPosition);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        NetTokenExports = CreatePersistentNetDebugName(L"NetTokenExports",0xf);
        _Init_thread_footer(&::_TSS0);
      }
      uVar8 = FNetTrace::TraceName(NetTokenExports);
      FVar9 = *(ForElementType<FNetTracePacketContentEvent> *)(FVar10.Value + 0x1118);
      if (*(ForElementType<FNetTracePacketContentEvent> *)(FVar10.Value + 0x1118) ==
          (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar9 = (ForElementType<FNetTracePacketContentEvent>)(FVar10.Value + 0x118);
      }
      *(uint *)((longlong)FVar9 + (ulonglong)uVar7 * 0x10) = uVar8;
    }
    pFVar1 = param_2->InternalContext;
    uVar8 = uVar11;
    if (pFVar1 != (FInternalNetSerializationContext *)0x0) {
      uVar8 = *(uint *)&pFVar1->field_0x30;
      pFVar1->bInlineObjectReferenceExports = 1;
      uVar8 = uVar8 & 2;
    }
    while ((((uVar6 & 1) != 0 && ((param_2->ErrorContext).Error == (FName)0x0)) &&
           (bVar4 = FNetSerializationContext::IsBitStreamOverflown(param_2), !bVar4))) {
      FNetTokenStore::InternalReadNetToken((FNetSerializationContext *)&local_58._s_0,(uint)param_2)
      ;
      FNetTokenStore::ReadTokenData
                (this->NetTokenStore,param_2,(FNetToken)local_58.Value._0_4_,
                 (pFVar1->ResolveContext).RemoteNetTokenStoreState);
      uVar6 = FNetBitStreamReader::ReadBits(this_00,1);
    }
    if (pFVar1 != (FInternalNetSerializationContext *)0x0) {
      pFVar1->bInlineObjectReferenceExports = 0;
      *(uint *)&pFVar1->field_0x30 = *(uint *)&pFVar1->field_0x30 | uVar8;
    }
    if (uVar7 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent
                ((FNetTraceCollector *)FVar10,uVar7,this_00->BufferBitPosition);
    }
    uVar6 = FNetBitStreamReader::ReadBits(this_00,1);
    uVar7 = 0xffffffff;
    FVar10.Value = 0;
    if (1 < GNetTraceRuntimeVerbosity) {
      FVar10 = (FNetRefHandle_u_0)param_2->TraceCollector;
    }
    local_58 = FVar10;
    if ((FNetTraceCollector *)FVar10.Value != (FNetTraceCollector *)0x0) {
      uVar7 = FNetTrace::BeginPacketContentEvent
                        ((FNetTraceCollector *)FVar10,NameId,this_00->BufferBitPosition);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        NetObjectReferenceExports = CreatePersistentNetDebugName(L"NetObjectReferenceExports",0x19);
        _Init_thread_footer(&::_TSS0);
      }
      uVar8 = FNetTrace::TraceName(NetObjectReferenceExports);
      FVar9 = *(ForElementType<FNetTracePacketContentEvent> *)(FVar10.Value + 0x1118);
      if (*(ForElementType<FNetTracePacketContentEvent> *)(FVar10.Value + 0x1118) ==
          (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar9 = (ForElementType<FNetTracePacketContentEvent>)(FVar10.Value + 0x118);
      }
      *(uint *)((longlong)FVar9 + (ulonglong)uVar7 * 0x10) = uVar8;
    }
    pFVar1 = param_2->InternalContext;
    if (pFVar1 != (FInternalNetSerializationContext *)0x0) {
      uVar11 = *(uint *)&pFVar1->field_0x30;
      pFVar1->bInlineObjectReferenceExports = 1;
      uVar11 = uVar11 & 2;
    }
    while ((((uVar6 & 1) != 0 && (FVar10 = local_58, (param_2->ErrorContext).Error == (FName)0x0))
           && (bVar4 = FNetSerializationContext::IsBitStreamOverflown(param_2), FVar10 = local_58,
              !bVar4))) {
      ReadFullReference(this,param_2,&local_50);
      uVar6 = FNetBitStreamReader::ReadBits(this_00,1);
      FVar10 = local_58;
    }
    if (pFVar1 != (FInternalNetSerializationContext *)0x0) {
      pFVar1->bInlineObjectReferenceExports = 0;
      *(uint *)&pFVar1->field_0x30 = *(uint *)&pFVar1->field_0x30 | uVar11;
    }
    if (uVar7 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent
                ((FNetTraceCollector *)FVar10,uVar7,this_00->BufferBitPosition);
    }
    if ((param_2->ErrorContext).Error == (FName)0x0) {
      bVar4 = FNetSerializationContext::IsBitStreamOverflown(param_2);
      if (!bVar4) {
        ReadMustBeMappedExports(this,param_1,param_2,param_3,param_4);
      }
      if (((param_2->ErrorContext).Error == (FName)0x0) &&
         (bVar4 = FNetSerializationContext::IsBitStreamOverflown(param_2), !bVar4)) {
        return true;
      }
    }
  }
  return false;
}

// ReadFullReference @ 144288e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectReferenceCache::ReadFullReference
          (FObjectReferenceCache *this,FNetSerializationContext *param_1,
          FNetObjectReference *param_2)

{
  uint *puVar1;
  FName FVar2;
  undefined4 uVar3;
  FNetRefHandle_u_0 FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<FNetTracePacketContentEvent> FVar8;
  FNetTraceCollector *pFVar9;
  FNetBitStreamReader *this_00;
  FNetTraceCollector *pFVar10;
  ulonglong uVar11;
  FLLMScope local_res10 [5];
  uint local_res20;
  FNetRefHandle_u_0 local_68;
  FNetBitStreamReader *local_60;
  FNetRefHandle_u_0 local_58;
  undefined8 uStack_50;
  FMemScope local_48 [2];
  
  this_00 = param_1->BitStreamReader;
  pFVar10 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar10 = param_1->TraceCollector;
  }
  puVar1 = &this_00->BufferBitPosition;
  local_res20 = 0xffffffff;
  local_60 = this_00;
  if (pFVar10 != (FNetTraceCollector *)0x0) {
    local_res20 = FNetTrace::BeginPacketContentEvent(pFVar10,NameId,*puVar1);
    uVar11 = (ulonglong)local_res20;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FullNetObjectReference = CreatePersistentNetDebugName(L"FullNetObjectReference",0x16);
      _Init_thread_footer(&::_TSS0);
    }
    uVar6 = FNetTrace::TraceName(FullNetObjectReference);
    FVar8 = (pFVar10->Events).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar10->Events;
    }
    *(uint *)((longlong)FVar8 + uVar11 * 0x10) = uVar6;
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
  local_68._s_0 = (FNetRefHandle_u_0_s_0)LLMTagDeclaration_Iris.UniqueName;
  FMemScope::FMemScope(local_48,(FName *)&local_68._s_0,true);
  uVar6 = FNetBitStreamReader::ReadBits(this_00,1);
  if ((uVar6 & 1) == 0) {
    if (param_1->InternalContext->bInlineObjectReferenceExports == 0) {
      ReadReference(this,param_1,param_2);
    }
    else {
      local_58.Value = 0;
      pFVar9 = (FNetTraceCollector *)0x0;
      if (1 < GNetTraceRuntimeVerbosity) {
        pFVar9 = param_1->TraceCollector;
      }
      uStack_50 = 0;
      if (pFVar9 == (FNetTraceCollector *)0x0) {
        ReadFullReferenceInternal(this,param_1,(FNetObjectReference *)&local_58._s_0,0);
      }
      else {
        uVar6 = FNetTrace::BeginPacketContentEvent(pFVar9,Object,*puVar1);
        FVar8 = (pFVar9->Events).AllocatorInstance.SecondaryData;
        if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
        }
        *(undefined8 *)((longlong)FVar8 + (ulonglong)uVar6 * 0x10) = 0;
        ReadFullReferenceInternal(this,param_1,(FNetObjectReference *)&local_58._s_0,0);
        if (uVar6 != 0xffffffff) {
          FVar8 = (pFVar9->Events).AllocatorInstance.SecondaryData;
          if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
          }
          *(ulong64 *)((longlong)FVar8 + (ulonglong)uVar6 * 0x10) =
               local_58.Value & 0x3fffffffffffff;
          FNetTraceCollector::AddReferencedObjectId(pFVar9,local_58.Value & 0x3fffffffffffff);
          (param_2->RefHandle).field0_0x0.Value = (ulong64)local_58;
          param_2->PathToken = (FNetToken)(undefined4)uStack_50;
          param_2->Traits = uStack_50._4_4_;
          FNetTrace::EndPacketContentEvent(pFVar9,uVar6,this_00->BufferBitPosition);
          goto LAB_144289153;
        }
      }
      (param_2->RefHandle).field0_0x0.Value = (ulong64)local_58;
      param_2->PathToken = (FNetToken)(undefined4)uStack_50;
      param_2->Traits = uStack_50._4_4_;
    }
  }
  else {
    uVar6 = 0xffffffff;
    pFVar9 = (FNetTraceCollector *)0x0;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar9 = param_1->TraceCollector;
    }
    if (pFVar9 != (FNetTraceCollector *)0x0) {
      uVar6 = FNetTrace::BeginPacketContentEvent(pFVar9,NameId,*puVar1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ClientAssigned = CreatePersistentNetDebugName(L"ClientAssigned",0xe);
        _Init_thread_footer(&::_TSS0);
      }
      uVar7 = FNetTrace::TraceName(ClientAssigned);
      FVar8 = (pFVar9->Events).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
      }
      *(uint *)((longlong)FVar8 + (ulonglong)uVar6 * 0x10) = uVar7;
    }
    ReadNetRefHandle((FNetSerializationContext *)&local_58._s_0);
    FNetTokenStore::InternalReadNetToken((FNetSerializationContext *)&local_68._s_0,(uint)param_1);
    FVar4 = local_68;
    uVar3 = local_68.Value._0_4_;
    FNetTokenStore::ConditionalReadNetTokenData
              (this->NetTokenStore,param_1,(FNetToken)local_68.Value._0_4_);
    if ((FVar4.Value & 0xfffff) == 0) {
      if (1 < (byte)LogIrisReferences._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      }
      FVar2 = GNetError_InvalidValue;
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar2);
    }
    if (((param_1->ErrorContext).Error != (FName)0x0) ||
       (bVar5 = FNetSerializationContext::IsBitStreamOverflown(param_1), bVar5)) {
      (param_2->RefHandle).field0_0x0.Value = 0;
      param_2->PathToken = (FNetToken_u_0)0x0;
      param_2->Traits = None;
    }
    else {
      (param_2->RefHandle).field0_0x0 = local_58;
      (param_2->PathToken).field0_0x0._s_0 = (FNetToken_u_0_s_0)uVar3;
    }
    this_00 = local_60;
    if (uVar6 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar9,uVar6,local_60->BufferBitPosition);
      this_00 = local_60;
    }
  }
LAB_144289153:
  FMemScope::~FMemScope(local_48);
  FLLMScope::~FLLMScope(local_res10);
  if (local_res20 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar10,local_res20,this_00->BufferBitPosition);
  }
  return;
}

// ReadFullReferenceInternal @ 1442892b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectReferenceCache::ReadFullReferenceInternal
          (FObjectReferenceCache *this,FNetSerializationContext *param_1,
          FNetObjectReference *param_2,uint param_3)

{
  code *pcVar1;
  FName FVar2;
  FNetRefHandle_u_0 FVar3;
  undefined1 uVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  FCachedNetObjectReference *pFVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  ulonglong uVar10;
  FNetRefHandle_u_0 FVar11;
  undefined4 uVar12;
  FNetBitStreamReader *pFVar13;
  FNetTraceCollector *pFVar14;
  FNetRefHandle_u_0 local_res10;
  uint local_res20;
  FNetRefHandle_u_0 local_108;
  uint local_100;
  FNetBitStreamReader *local_f8;
  FNetTraceCollector *local_f0;
  FNetRefHandle_u_0 local_e8;
  ulonglong local_e0;
  FNetRefHandle_u_0 local_d8;
  undefined8 local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FNetRefHandle_u_0 local_88;
  undefined8 local_80;
  FNetRefHandle_u_0 local_78;
  FNetToken_u_0 local_70;
  FNetRefHandle_u_0 local_68;
  byte local_60;
  FNetRefHandle_u_0 local_58;
  FNetRefHandle_u_0 *local_50;
  FString local_48;
  
  pFVar13 = param_1->BitStreamReader;
  local_res20 = param_3;
  local_f8 = pFVar13;
  if (0x10 < param_3) {
    if (2 < (byte)LogIrisReferences._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
    }
    FVar2 = GNetError_InternalError;
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar2);
    (param_2->RefHandle).field0_0x0.Value = 0;
    param_2->PathToken = (FNetToken_u_0)0x0;
    param_2->Traits = None;
    return;
  }
  pFVar14 = (FNetTraceCollector *)0x0;
  if (1 < GNetTraceRuntimeVerbosity) {
    pFVar14 = param_1->TraceCollector;
  }
  local_e0 = CONCAT44(local_e0._4_4_,0xffffffff);
  local_f0 = pFVar14;
  if (pFVar14 != (FNetTraceCollector *)0x0) {
    uVar7 = FNetTrace::BeginPacketContentEvent(pFVar14,Object,pFVar13->BufferBitPosition);
    FVar9 = (pFVar14->Events).AllocatorInstance.SecondaryData;
    local_e0 = (ulonglong)uVar7;
    if (FVar9 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar14->Events;
    }
    *(undefined8 *)((longlong)FVar9 + local_e0 * 0x10) = 0;
  }
  ReadNetRefHandle((FNetSerializationContext *)&local_108._s_0);
  if (local_108.Value != 0) {
    uVar7 = FNetBitStreamReader::ReadBits(pFVar13,1);
    local_res10.Value = CONCAT44(local_res10.Value._4_4_,uVar7) & 0xffffffffffffff01;
    if (pFVar13->OverflowBitCount == 0) {
      uVar4 = (byte)uVar7 & 1;
      if (6 < (byte)LogIrisReferences._0_1_) {
        if ((local_108.Value == 0) || ((local_108.Value & 0xffc0000000000000) == 0)) {
          ::FString::PrintfImpl(&local_b8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_b8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        uVar4 = local_res10.Value._0_1_;
      }
      pFVar13 = local_f8;
      if (local_108.Value == 0) {
LAB_1442894ed:
        local_100 = local_100 & 0xffffff00;
      }
      else {
        local_100 = CONCAT31(local_100._1_3_,1);
        if ((local_108.Value & 1) != 0) goto LAB_1442894ed;
      }
      local_d8.Value = 0;
      local_d0 = 0;
      uVar12 = 0;
      if (uVar4 == 0) {
LAB_1442895ca:
        if (local_f8->OverflowBitCount == 0) {
          if ((int)local_e0 != -1) {
            FVar9 = (local_f0->Events).AllocatorInstance.SecondaryData;
            if (FVar9 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar9 = (ForElementType<FNetTracePacketContentEvent>)&local_f0->Events;
            }
            *(ulong64 *)((longlong)FVar9 + (local_e0 & 0xffffffff) * 0x10) =
                 local_108.Value & 0x3fffffffffffff;
            FNetTraceCollector::AddReferencedObjectId(local_f0,local_108.Value & 0x3fffffffffffff);
          }
          FVar3 = local_d8;
          FVar11 = local_108;
          pFVar8 = TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
                   ::Find((TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
                           *)&this->ReferenceHandleToCachedReference,
                          (FNetRefHandle *)&local_108._s_0);
          if (pFVar8 == (FCachedNetObjectReference *)0x0) {
            if ((local_res10.Value._0_1_ == '\0') &&
               ((FVar11.Value == 0 || ((FVar11.Value & 1) != 0)))) {
              if (1 < (byte)LogIrisReferences._0_1_) {
                if ((FVar11.Value == 0) || ((FVar11.Value & 0xffc0000000000000) == 0)) {
                  ::FString::PrintfImpl(&local_a8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
                }
                else {
                  ::FString::PrintfImpl(&local_a8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
                }
                Logging::Private::BasicLog<2>
                          ((FStaticBasicLogRecord *)&PTR_u_ObjectReference_150b935e8,
                           (FLogCategoryBase *)&LogIrisReferences);
                if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                }
              }
              FVar2 = GNetError_InvalidNetHandle;
              FNetSerializationContext::SetBitStreamOverflow(param_1);
              FNetErrorContext::SetError(&param_1->ErrorContext,FVar2);
              pFVar13 = local_f8;
              pFVar14 = local_f0;
              goto LAB_144289965;
            }
            if (this->bIsAuthority == 0) {
              local_88.Value = 0;
              local_80 = 0;
              if (((FVar11.Value & 1) == 0) || (FVar3.Value != 0)) {
                bVar6 = 0;
              }
              else {
                bVar6 = 2;
              }
              local_60 = (bVar6 | (byte)local_100) * '\x02' | local_60 & 0xc0 | (byte)local_100;
              local_58.Value = (ulong64)&local_108;
              local_50 = &local_88;
              local_78 = FVar11;
              local_70 = (FNetToken_u_0)uVar12;
              local_68 = FVar3;
              TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<UE::Net::FNetRefHandle_const_&,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference_const_&>_>
                        ((TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
                          *)&this->ReferenceHandleToCachedReference,
                         (TPairInitializer<UE::Net::FNetRefHandle_const_&,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference_const_&>
                          *)&local_res20,(bool *)&local_58);
              FVar11 = local_108;
              if (5 < (byte)LogIrisReferences._0_1_) {
                local_res10._s_0 = local_d8._s_0;
                FNetRefHandle::ToString((FNetRefHandle *)&local_res10._s_0,&local_48);
                ::FString::PrintfImpl(&local_c8,L"NetToken (Auth:%u TypeId=%u Index=%u)");
                if ((local_78.Value == 0) || ((local_78.Value & 0xffc0000000000000) == 0)) {
                  ::FString::PrintfImpl(&local_98,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
                }
                else {
                  ::FString::PrintfImpl(&local_98,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
                }
                Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
                if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_98.Data.AllocatorInstance.Data);
                }
                if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                }
                FVar11 = local_108;
                if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_48.Data.AllocatorInstance.Data);
                  FVar11 = local_108;
                }
              }
            }
          }
          else if (local_res10.Value._0_1_ != '\0') {
            uVar10 = (pFVar8->NetRefHandle).field0_0x0.Value & 0x3fffffffffffff;
            if (((((uVar10 != (FVar11.Value & 0x3fffffffffffff)) ||
                  ((pFVar8->RelativePath).field0_0x0.Value != uVar12)) ||
                 (((FVar3.Value ^ (pFVar8->OuterNetRefHandle).field0_0x0.Value) & 0x3fffffffffffff)
                  != 0)) &&
                (((FVar11.Value == 0 || ((FVar11.Value & 1) != 0)) ||
                 ((FVar11.Value & 0x3fffffffffffff) != uVar10)))) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!bIsExported || ((CachedObject->NetRefHandle == NetRefHandle && CachedObject->RelativePath == RelativePath && CachedObject->OuterNetRefHandle == OuterRef.GetRefHandle()) || (NetRefHandle.IsDynamic() && (NetRefHandle == CachedObject->NetRefHandle)))"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReferenceCache.cpp"
                                   ,0x58d,L""), FVar11 = local_108, bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          (param_2->RefHandle).field0_0x0.Value = (ulong64)FVar11;
        }
        else {
          if (1 < (byte)LogIrisReferences._0_1_) {
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
          }
          FVar2 = GNetError_BitStreamOverflow;
          FNetSerializationContext::SetBitStreamOverflow(param_1);
          FNetErrorContext::SetError(&param_1->ErrorContext,FVar2);
          (param_2->RefHandle).field0_0x0.Value = 0;
        }
      }
      else {
        local_100 = FNetBitStreamReader::ReadBits(local_f8,1);
        local_100 = local_100 & 0xffffff01;
        if (pFVar13->OverflowBitCount == 0) {
          uVar7 = FNetBitStreamReader::ReadBits(pFVar13,1);
          uVar12 = 0;
          if ((uVar7 & 1) != 0) {
            FNetTokenStore::InternalReadNetToken
                      ((FNetSerializationContext *)&local_e8._s_0,(uint)param_1);
            FNetTokenStore::ConditionalReadNetTokenData
                      (this->NetTokenStore,param_1,(FNetToken)local_e8.Value._0_4_);
            ReadFullReferenceInternal
                      (this,param_1,(FNetObjectReference *)&local_d8._s_0,local_res20 + 1);
            uVar12 = local_e8.Value._0_4_;
          }
          goto LAB_1442895ca;
        }
        if (1 < (byte)LogIrisReferences._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
        }
        FVar2 = GNetError_BitStreamOverflow;
        FNetSerializationContext::SetBitStreamOverflow(param_1);
        FNetErrorContext::SetError(&param_1->ErrorContext,FVar2);
        (param_2->RefHandle).field0_0x0.Value = 0;
      }
      param_2->PathToken = (FNetToken_u_0)0x0;
      param_2->Traits = None;
      pFVar13 = local_f8;
      pFVar14 = local_f0;
      goto LAB_144289965;
    }
    if (1 < (byte)LogIrisReferences._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
    }
    FVar2 = GNetError_BitStreamOverflow;
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar2);
  }
  (param_2->RefHandle).field0_0x0.Value = 0;
  (param_2->PathToken).field0_0x0.Value = 0;
  param_2->Traits = None;
LAB_144289965:
  if ((uint)local_e0 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar14,(uint)local_e0,pFVar13->BufferBitPosition);
  }
  return;
}

// ReadMustBeMappedExports @ 144289ab0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectReferenceCache::ReadMustBeMappedExports
          (FObjectReferenceCache *this,FNetRefHandle *param_1,FNetSerializationContext *param_2,
          TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *param_3,
          EIrisAsyncLoadingPriority *param_4)

{
  FNetBitStreamReader *pFVar1;
  FNetRefHandle_u_0 *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  ForElementType<FNetTracePacketContentEvent> FVar11;
  FNetBitStreamReader *this_00;
  FNetTraceCollector *pFVar12;
  uint local_res20;
  FNetRefHandle_u_0 local_80;
  FNetBitStreamReader *local_78;
  FNetTraceCollector *local_70;
  FNetRefHandle_u_0 local_68 [2];
  FString local_58;
  FString local_48;
  
  FVar5 = GNetError_InvalidValue;
  if (param_3 == (TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *)0x0) {
    FNetSerializationContext::SetBitStreamOverflow(param_2);
    FNetErrorContext::SetError(&param_2->ErrorContext,FVar5);
    if (1 < (byte)LogIrisReferences._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
    }
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6150983300673435783>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReferenceCache.cpp"
                       ,0x779,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    this_00 = param_2->BitStreamReader;
    local_78 = this_00;
    uVar7 = FNetBitStreamReader::ReadBits(this_00,1);
    local_res20 = 0xffffffff;
    pFVar12 = (FNetTraceCollector *)0x0;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar12 = param_2->TraceCollector;
    }
    local_70 = pFVar12;
    if (pFVar12 != (FNetTraceCollector *)0x0) {
      local_res20 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,this_00->BufferBitPosition);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        MustBeMappedExports = CreatePersistentNetDebugName(L"MustBeMappedExports",0x13);
        _Init_thread_footer(&::_TSS0);
      }
      uVar8 = FNetTrace::TraceName(MustBeMappedExports);
      FVar11 = (pFVar12->Events).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
      }
      *(uint *)((longlong)FVar11 + (ulonglong)local_res20 * 0x10) = uVar8;
    }
    if ((uVar7 & 1) != 0) {
      for (lVar3 = 0x3f; 5UL >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
      uVar7 = FNetBitStreamReader::ReadBits(this_00,(uint)lVar3);
      *param_4 = (EIrisAsyncLoadingPriority)uVar7;
      do {
        pFVar12 = local_70;
        if (((param_2->ErrorContext).Error != (FName)0x0) ||
           (bVar6 = FNetSerializationContext::IsBitStreamOverflown(param_2), pFVar12 = local_70,
           bVar6)) break;
        pFVar1 = param_2->BitStreamReader;
        uVar7 = 0xffffffff;
        pFVar12 = (FNetTraceCollector *)0x0;
        if (1 < GNetTraceRuntimeVerbosity) {
          pFVar12 = param_2->TraceCollector;
        }
        if (pFVar12 != (FNetTraceCollector *)0x0) {
          uVar7 = FNetTrace::BeginPacketContentEvent(pFVar12,Object,pFVar1->BufferBitPosition);
          FVar11 = (pFVar12->Events).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
          if (FVar11 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar10 = FVar11;
          }
          *(undefined8 *)((longlong)FVar10 + (ulonglong)uVar7 * 0x10) = 0;
        }
        ReadNetRefHandle((FNetSerializationContext *)&local_80._s_0);
        if (uVar7 != 0xffffffff) {
          FVar11 = (pFVar12->Events).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
          if (FVar11 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar10 = FVar11;
          }
          *(ulong64 *)((longlong)FVar10 + (ulonglong)uVar7 * 0x10) =
               local_80.Value & 0x3fffffffffffff;
          FNetTraceCollector::AddReferencedObjectId(pFVar12,local_80.Value & 0x3fffffffffffff);
        }
        uVar8 = FNetBitStreamReader::ReadBits(this_00,1);
        if (6 < (byte)LogIrisReferences._0_1_) {
          if ((local_80.Value == 0) || ((local_80.Value & 0xffc0000000000000) == 0)) {
            ::FString::PrintfImpl(&local_58,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
          }
          else {
            ::FString::PrintfImpl(&local_58,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
          }
          if (((param_1->field0_0x0).Value == 0) || ((param_1->field0_0x0).Value < 0x40000000000000)
             ) {
            ::FString::PrintfImpl
                      ((FString *)&local_68[0]._s_0,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
          }
          else {
            ::FString::PrintfImpl
                      ((FString *)&local_68[0]._s_0,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
          }
          Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
          if ((void *)local_68[0].Value != (void *)0x0) {
            FMemory::Free((void *)local_68[0]);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        pFVar2 = (FNetRefHandle_u_0 *)(param_3->AllocatorInstance).Data;
        if (((pFVar2 <= &local_80) && (&local_80 < pFVar2 + param_3->ArrayMax)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = param_3->ArrayNum;
        if (iVar9 == param_3->ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar9 + 1;
        ((FNetRefHandle_u_0 *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 8))->Value =
             (ulong64)local_80;
        if (uVar7 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar12,uVar7,pFVar1->BufferBitPosition);
        }
        this_00 = local_78;
        pFVar12 = local_70;
      } while ((uVar8 & 1) != 0);
    }
    if ((6 < (byte)LogIrisReferences._0_1_) && (0 < param_3->ArrayNum)) {
      ::LexToString(*param_4);
      if (((param_1->field0_0x0).Value == 0) || ((param_1->field0_0x0).Value < 0x40000000000000)) {
        ::FString::PrintfImpl(&local_48,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_48,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_res20 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar12,local_res20,this_00->BufferBitPosition);
    }
  }
  return;
}

// ReadReference @ 14428a180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectReferenceCache::ReadReference
          (FObjectReferenceCache *this,FNetSerializationContext *param_1,
          FNetObjectReference *param_2)

{
  FNetBitStreamReader *this_00;
  FName FVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FCachedNetObjectReference *pFVar5;
  ForElementType<FNetTracePacketContentEvent> FVar6;
  FNetRefHandle_u_0 FVar7;
  FNetTraceCollector *pFVar8;
  FNetTraceCollector *this_01;
  uint local_res10;
  FNetRefHandle_u_0 local_res20;
  FNetRefHandle_u_0 local_78;
  FNetRefHandle_u_0 local_70;
  FName local_68;
  FNetBitStreamReader *local_60;
  FNetBitStreamReader *local_58;
  FString local_50;
  
  local_58 = param_1->BitStreamReader;
  pFVar8 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar8 = param_1->TraceCollector;
  }
  local_res10 = 0xffffffff;
  if (pFVar8 != (FNetTraceCollector *)0x0) {
    local_res10 = FNetTrace::BeginPacketContentEvent(pFVar8,NameId,local_58->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      NetObjectReference = CreatePersistentNetDebugName(L"NetObjectReference",0x12);
      _Init_thread_footer(&::_TSS0);
    }
    uVar3 = FNetTrace::TraceName(NetObjectReference);
    FVar6 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar6 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar6 + (ulonglong)local_res10 * 0x10) = uVar3;
  }
  local_60 = param_1->BitStreamReader;
  uVar3 = 0xffffffff;
  this_01 = (FNetTraceCollector *)0x0;
  if (1 < GNetTraceRuntimeVerbosity) {
    this_01 = param_1->TraceCollector;
  }
  if (this_01 != (FNetTraceCollector *)0x0) {
    uVar3 = FNetTrace::BeginPacketContentEvent(this_01,Object,local_60->BufferBitPosition);
    FVar6 = (this_01->Events).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar6 = (ForElementType<FNetTracePacketContentEvent>)&this_01->Events;
    }
    *(undefined8 *)((longlong)FVar6 + (ulonglong)uVar3 * 0x10) = 0;
  }
  this_00 = param_1->BitStreamReader;
  uVar4 = FNetBitStreamReader::ReadBits(this_00,1);
  if ((uVar4 & 1) == 0) {
    ReadNetRefHandle((FNetSerializationContext *)&local_78._s_0);
    if (this_00->OverflowBitCount == 0) {
      if (local_78.Value == 0) goto LAB_14428a3a4;
      if (uVar3 != 0xffffffff) {
        FVar6 = (this_01->Events).AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar6 = (ForElementType<FNetTracePacketContentEvent>)&this_01->Events;
        }
        *(ulong64 *)((longlong)FVar6 + (ulonglong)uVar3 * 0x10) = local_78.Value & 0x3fffffffffffff;
        FNetTraceCollector::AddReferencedObjectId(this_01,local_78.Value & 0x3fffffffffffff);
      }
      FVar7 = local_78;
      if (((local_78.Value == 0) || ((local_78.Value & 1) != 0)) &&
         (pFVar5 = TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
                   ::Find((TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
                           *)&this->ReferenceHandleToCachedReference,(FNetRefHandle *)&local_78._s_0
                         ), pFVar5 == (FCachedNetObjectReference *)0x0)) {
        local_68 = (FName)&local_78;
        bVar2 = `UE::Net::Private::FObjectReferenceCache::ReadReference'::__l61::<lambda_2>::
                operator()(&local_68);
        FVar7 = local_78;
        if (!bVar2) {
          (param_2->RefHandle).field0_0x0.Value = 0;
          goto LAB_14428a4e4;
        }
      }
      if (6 < (byte)LogIrisReferences._0_1_) {
        if ((FVar7.Value == 0) || ((FVar7.Value & 0xffc0000000000000) == 0)) {
          ::FString::PrintfImpl(&local_50,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_50,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
        FVar7 = local_78;
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
          FVar7 = local_78;
        }
      }
      (param_2->RefHandle).field0_0x0.Value = (ulong64)FVar7;
    }
    else {
      if (1 < (byte)LogIrisReferences._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      }
      FVar1 = GNetError_BitStreamOverflow;
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar1);
      (param_2->RefHandle).field0_0x0.Value = 0;
    }
  }
  else {
    ReadNetRefHandle((FNetSerializationContext *)&local_70._s_0);
    FNetTokenStore::InternalReadNetToken
              ((FNetSerializationContext *)&local_res20._s_0,(uint)param_1);
    if ((local_res20.Value._0_4_ & 0xfffff) == 0) {
      if (1 < (byte)LogIrisReferences._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      }
      FVar1 = GNetError_InvalidValue;
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar1);
    }
    if (((param_1->ErrorContext).Error == (FName)0x0) &&
       (bVar2 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar2)) {
      (param_2->RefHandle).field0_0x0 = local_70;
      (param_2->PathToken).field0_0x0.Value = local_res20.Value._0_4_;
      goto LAB_14428a4e8;
    }
LAB_14428a3a4:
    (param_2->RefHandle).field0_0x0.Value = 0;
  }
LAB_14428a4e4:
  param_2->PathToken = (FNetToken_u_0)0x0;
  param_2->Traits = None;
LAB_14428a4e8:
  if (uVar3 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(this_01,uVar3,local_60->BufferBitPosition);
  }
  if (local_res10 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar8,local_res10,local_58->BufferBitPosition);
  }
  return;
}

// RemoveReference @ 14428f770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectReferenceCache::RemoveReference
          (FObjectReferenceCache *this,FNetRefHandle param_1,UObject *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  char cVar6;
  FNetRefHandle_u_0 FVar7;
  UObject *pUVar8;
  uint uVar9;
  undefined8 *puVar10;
  FNetRefHandle_u_0 local_res10;
  UObject *local_res18;
  FName local_res20;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  TBaseKeyIterator<0> local_158;
  longlong *local_138;
  undefined1 auStack_130 [16];
  uint uStack_120;
  uint uStack_11c;
  longlong local_118;
  TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
  *pTStack_110;
  FObjectReferenceCache *local_108;
  undefined2 local_100;
  FName local_f8;
  FName local_f0;
  FNetRefHandle_u_0 *local_e8;
  TBaseKeyIterator<0> local_e0;
  FNetRefHandle_u_0 *local_c8;
  UObject **local_c0;
  undefined8 *local_b8;
  FString local_b0;
  TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
  *local_a0;
  FNetRefHandle *pFStack_98;
  int local_90;
  TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
  *local_88;
  UObject *pUStack_80;
  int local_78;
  undefined1 local_70 [32];
  longlong local_50;
  TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
  *pTStack_48;
  
  if (param_1.field0_0x0 == 0) {
    return;
  }
  if (((ulonglong)param_1.field0_0x0 & 1) != 0) {
    return;
  }
  local_res10 = param_1.field0_0x0;
  local_res18 = param_2;
  if (5 < (byte)LogIrisReferences._0_1_) {
    if (param_2 == (UObject *)0x0) {
      ::FString::FString(&local_208,L"None");
    }
    else {
      local_res20.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
      local_res20.Number = *(uint *)&param_2->field_0x1c;
      ::FName::ToString(&local_res20,&local_208);
    }
    if ((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) {
      ::FString::PrintfImpl(&local_218,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_218,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
  }
  pUVar8 = local_res18;
  FVar7 = local_res10;
  TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_e0,
             (TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
              *)&this->ReferenceHandleToCachedReference,(FNetRefHandle *)&local_res10);
  local_90 = local_e0.Index;
  local_a0 = local_e0.Set;
  pFStack_98 = local_e0.Key;
  if (local_e0.Index != -1) {
    puVar10 = (undefined8 *)
              (*(longlong *)&(local_e0.Set)->Elements + 8 + (longlong)local_e0.Index * 0x40);
    if (pUVar8 == (UObject *)0x0) {
      local_res18 = (UObject *)puVar10[1];
    }
    else if (((UObject *)puVar10[1] != (UObject *)0x0) && (pUVar8 != (UObject *)puVar10[1])) {
      local_c8 = &local_res10;
      local_c0 = &local_res18;
      local_b8 = puVar10;
      `UE::Net::Private::FObjectReferenceCache::RemoveReference'::__l31::<lambda_2>::operator()
                (&local_c8);
      FVar7 = local_res10;
    }
    if ((*(uint *)(puVar10 + 3) & 0xfffff) == 0) {
      if (5 < (byte)LogIrisReferences._0_1_) {
        FNetToken::ToString((FNetToken *)(puVar10 + 3),&local_b0);
        if ((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) {
          ::FString::PrintfImpl(&local_1f8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_1f8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
      ::RemoveByIndex(local_e0.Set,local_90);
      pUVar8 = local_res18;
    }
    else {
      if (5 < (byte)LogIrisReferences._0_1_) {
        if ((FVar7.Value == 0) || ((FVar7.Value & 0xffc0000000000000) == 0)) {
          ::FString::PrintfImpl(&local_1e8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_1e8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
      }
      puVar10[1] = 0;
      *puVar10 = 0;
      pUVar8 = local_res18;
    }
  }
  if (pUVar8 == (UObject *)0x0) {
    if (bIrisEnableRemoveReferenceFallbackPath == false) {
      return;
    }
    bVar3 = false;
    TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_70,
               (TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
                *)this);
    local_100 = 0;
    stack0xfffffffffffffed8 = local_70._16_16_;
    local_138 = (longlong *)local_70._0_8_;
    auStack_130._0_8_ = local_70._8_8_;
    local_118 = local_50;
    pTStack_110 = pTStack_48;
    uVar5 = local_70._24_8_ >> 0x20;
    uVar9 = local_70._28_4_;
    local_108 = this;
    if ((int)uVar9 < *(int *)(local_70._16_8_ + 0x18)) {
      do {
        if (((local_res10.Value ^ *(ulonglong *)(*local_138 + 8 + (longlong)(int)uVar5 * 0x18)) &
            0x3fffffffffffff) == 0) {
          TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_110,uVar9);
          cVar6 = '\x01';
          bVar3 = true;
          if (1 < (byte)LogIrisReferences._0_1_) {
            if ((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) {
              ::FString::PrintfImpl(&local_178,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
            }
            else {
              ::FString::PrintfImpl(&local_178,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
            }
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
            if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.Data.AllocatorInstance.Data);
            }
          }
          local_e8 = &local_res10;
          `UE::Net::Private::FObjectReferenceCache::RemoveReference'::__l148::<lambda_3>::operator()
                    (&local_e8);
          goto LAB_14428ffb8;
        }
        uStack_120 = uStack_120 & ~auStack_130._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_130);
        uVar5 = (ulonglong)uStack_11c;
        uVar9 = uStack_11c;
      } while ((int)uStack_11c < *(int *)(auStack_130._8_8_ + 0x18));
      cVar6 = (char)local_100;
LAB_14428ffb8:
      if ((cVar6 != '\0') && (local_100._1_1_ != '\0')) {
        uVar9 = *(int *)&(local_108->ObjectToNetReferenceHandle).field_0x8 -
                *(int *)&(local_108->ObjectToNetReferenceHandle).field_0x34;
        if (uVar9 < 4) {
          iVar4 = 1;
        }
        else {
          uVar5 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar4 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar9) &&
            (*(int *)&(local_108->ObjectToNetReferenceHandle).field_0x48 < iVar4)) ||
           (iVar4 < *(int *)&(local_108->ObjectToNetReferenceHandle).field_0x48)) {
          *(int *)&(local_108->ObjectToNetReferenceHandle).field_0x48 = iVar4;
          TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
                    *)local_108);
        }
      }
    }
    if ((byte)LogIrisReferences._0_1_ < 6) {
      return;
    }
    if (bVar3) {
      return;
    }
    if ((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) {
      ::FString::PrintfImpl(&local_168,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_168,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
  }
  else {
    TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
    ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
              (&local_158,
               (TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
                *)this,pUVar8);
    local_88 = local_158.Set;
    pUStack_80 = local_158.Key;
    local_78 = local_158.Index;
    if (local_158.Index == -1) {
      if ((byte)LogIrisReferences._0_1_ < 6) {
        return;
      }
      if (local_res18 == (UObject *)0x0) {
        ::FString::FString(&local_188,L"None");
      }
      else {
        local_f0.ComparisonIndex.Value = *(uint *)&local_res18->field_0x18;
        local_f0.Number = *(uint *)&local_res18->field_0x1c;
        ::FName::ToString(&local_f0,&local_188);
      }
      if ((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) {
        ::FString::PrintfImpl(&local_198,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_198,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      local_168.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
        local_168.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
      }
    }
    else {
      uVar5 = *(ulonglong *)
               (*(longlong *)&(local_158.Set)->Elements + 8 + (longlong)local_158.Index * 0x18);
      if ((uVar5 & 0x3fffffffffffff) == (local_res10.Value & 0x3fffffffffffff)) {
        if (5 < (byte)LogIrisReferences._0_1_) {
          if ((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) {
            ::FString::PrintfImpl(&local_1d8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
          }
          else {
            ::FString::PrintfImpl(&local_1d8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
          }
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
        }
        TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
        ::RemoveByIndex(local_158.Set,local_78);
        return;
      }
      if ((byte)LogIrisReferences._0_1_ < 6) {
        return;
      }
      if (local_res18 == (UObject *)0x0) {
        ::FString::FString(&local_1a8,L"None");
      }
      else {
        local_f8.ComparisonIndex.Value = *(uint *)&local_res18->field_0x18;
        local_f8.Number = *(uint *)&local_res18->field_0x1c;
        ::FName::ToString(&local_f8,&local_1a8);
      }
      if ((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) {
        ::FString::PrintfImpl(&local_1b8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_1b8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      if (uVar5 < 0x40000000000000) {
        ::FString::PrintfImpl(&local_1c8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        if ((uVar5 >> 0x36 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ReplicationSystemId != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                               ,0x2b,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ::FString::PrintfImpl(&local_1c8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      local_168.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        local_168.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
      }
    }
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return;
}

// RemoveTrackedQueuedBatchObjectReference @ 144290120

void __thiscall
UE::Net::Private::FObjectReferenceCache::RemoveTrackedQueuedBatchObjectReference
          (FObjectReferenceCache *this,FNetRefHandle param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FNetRefHandle_u_0 local_res10;
  TBaseKeyIterator<0> local_38;
  TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>,FDefaultSetAllocator>
  *local_20;
  FNetRefHandle *pFStack_18;
  
  local_res10 = param_1.field0_0x0;
  TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_38,
             (TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>,FDefaultSetAllocator>
              *)&this->QueuedBatchObjectReferences,(FNetRefHandle *)&local_res10);
  local_20 = local_38.Set;
  pFStack_18 = local_38.Key;
  if (local_38.Index != -1) {
    lVar4 = (longlong)local_38.Index * 0x20 + *(longlong *)&(local_38.Set)->Elements;
    if (*(int *)(lVar4 + 0x10) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ref.RefCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReferenceCache.cpp"
                         ,0x8fa,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    piVar1 = (int *)(lVar4 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>,FDefaultSetAllocator>
      ::TKeyIterator::RemoveCurrent((TKeyIterator *)&local_20);
    }
  }
  return;
}

// RenamePathForPie @ 1442901c0

bool __thiscall
UE::Net::Private::FObjectReferenceCache::RenamePathForPie
          (FObjectReferenceCache *this,uint param_1,FString *param_2,bool param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = GetPlayInEditorID();
  if (iVar2 == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(this->ReplicationBridge->_padding_ + 0x348))
                      (this->ReplicationBridge,param_1,param_2,param_3);
  }
  return (bool)uVar1;
}

// ResolveObjectReference @ 144290ce0

/* WARNING: Enum "Type": Some values do not have unique names */

ENetObjectReferenceResolveResult __thiscall
UE::Net::Private::FObjectReferenceCache::ResolveObjectReference
          (FObjectReferenceCache *this,FNetObjectReference *param_1,
          FNetObjectResolveContext *param_2,UObject **param_3)

{
  FNetToken_u_0_s_0 FVar1;
  uint uVar2;
  FNetRefHandle_u_0_s_0 FVar3;
  FNetRefHandle_u_0 *pFVar4;
  int iVar5;
  int iVar6;
  ENetObjectReferenceResolveResult EVar7;
  wchar_t *pwVar8;
  UObject *pUVar9;
  size_t sVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  FName *pFVar13;
  UPackage *pUVar14;
  char cVar15;
  ENetObjectReferenceResolveResult EVar16;
  bool local_res10 [8];
  FPackagePath local_68;
  undefined4 uStack_5c;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  pUVar12 = (UObject *)0x0;
  cVar15 = '\0';
  local_res10[0] = false;
  FVar1 = (param_1->PathToken).field0_0x0._s_0;
  EVar16 = None;
  EVar7 = None;
  if ((param_1->PathToken).field0_0x0.Index == 0) {
    pUVar12 = ResolveObjectReferenceHandleInternal
                        (this,(FNetRefHandle)
                              *(FNetRefHandle_u_0 *)&(param_1->RefHandle).field0_0x0._s_0,param_2,
                         local_res10);
    cVar15 = local_res10[0];
    goto LAB_144290ffa;
  }
  pwVar8 = FStringTokenStore::ResolveToken
                     (this->StringTokenStore,(FNetToken)FVar1,param_2->RemoteNetTokenStoreState);
  iVar6 = 0;
  if (pwVar8 == (wchar_t *)0x0) {
    if (2 < (byte)LogIrisReferences._0_1_) {
      FNetObjectReference::ToString(param_1,(FString *)&local_38);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      pUVar12 = (UObject *)0x0;
      if ((FName)local_38.DataPtr != (FName)0x0) {
        FMemory::Free(local_38.DataPtr);
      }
    }
    goto LAB_144290ffa;
  }
  ::FString::FString(&local_58,pwVar8);
  uVar2 = param_2->ConnectionId;
  iVar5 = GetPlayInEditorID();
  if (iVar5 != -1) {
    (**(code **)(this->ReplicationBridge->_padding_ + 0x348))
              (this->ReplicationBridge,uVar2,&local_58);
  }
  pFVar4 = &(param_1->RefHandle).field0_0x0;
  FVar3 = pFVar4->_s_0;
  if ((pFVar4->_s_0).Id == 0 && pFVar4.ReplicationSystemId == 0) {
    if (local_58.Data.ArrayNum == 0) {
      local_68.PackageName = (FName)0x15060d16c;
LAB_144290e77:
      sVar10 = wcslen((wchar_t *)local_68.PackageName);
      local_68._8_4_ = SUB84(sVar10,0);
    }
    else {
      local_68.PackageName = (FName)local_58.Data.AllocatorInstance.Data;
      local_68._8_4_ = EVar7;
      if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) goto LAB_144290e77;
    }
    pUVar11 = Z_Construct_UClass_UObject_NoRegister();
    local_48._12_4_ = uStack_5c;
    local_48.Size = local_68._8_4_;
    local_48.DataPtr = (wchar_t *)local_68.PackageName;
    pUVar12 = StaticFindObject(pUVar11,(UObject *)0x0,&local_48,None);
    if (pUVar12 == (UObject *)0x0) {
      pFVar13 = (FName *)FPackageName::ObjectPathToPackageName((FString *)&local_38,&local_58);
      local_48.DataPtr = *(wchar_t **)pFVar13;
      uVar2 = pFVar13[1].ComparisonIndex.Value;
      EVar16 = uVar2 - HasUnresolvedReferences;
      if (uVar2 == 0) {
        EVar16 = EVar7;
      }
      local_48.Size = EVar16;
      FPackagePath::FromPackageNameChecked(&local_68,&local_48);
      if ((FName)local_38.DataPtr != (FName)0x0) {
        FMemory::Free(local_38.DataPtr);
      }
      pUVar14 = LoadPackage((UPackage *)0x0,&local_68,0,(FArchive *)0x0,
                            (FLinkerInstancingContext *)0x0,(FPackagePath *)0x0);
      if (pUVar14 != (UPackage *)0x0) {
        if (local_58.Data.ArrayNum == 0) {
          local_48.DataPtr = L"";
LAB_144290f33:
          sVar10 = wcslen(local_48.DataPtr);
          iVar6 = (int)sVar10;
        }
        else {
          local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
          if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) goto LAB_144290f33;
        }
        local_48.Size = iVar6;
        pUVar11 = Z_Construct_UClass_UObject_NoRegister();
        local_38.DataPtr = local_48.DataPtr;
        local_38.Size = local_48.Size;
        local_38._12_4_ = local_48._12_4_;
        pUVar12 = StaticFindObject(pUVar11,(UObject *)0x0,&local_38,None);
        if (pUVar12 != (UObject *)0x0) goto LAB_144290f8a;
      }
      if (2 < (byte)LogIrisReferences._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      }
    }
  }
  else {
    pUVar9 = ResolveObjectReferenceHandleInternal(this,(FNetRefHandle)FVar3,param_2,local_res10);
    if (pUVar9 != (UObject *)0x0) {
      if (local_58.Data.ArrayNum == 0) {
        local_68.PackageName = (FName)0x15060d16c;
LAB_144290dba:
        sVar10 = wcslen((wchar_t *)local_68.PackageName);
        EVar16 = (ENetObjectReferenceResolveResult)sVar10;
      }
      else {
        local_68.PackageName = (FName)local_58.Data.AllocatorInstance.Data;
        if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) goto LAB_144290dba;
      }
      local_68._8_4_ = EVar16;
      pUVar11 = Z_Construct_UClass_UObject_NoRegister();
      local_48._12_4_ = uStack_5c;
      local_48.Size = local_68._8_4_;
      local_48.DataPtr = (wchar_t *)local_68.PackageName;
      pUVar12 = StaticFindObject(pUVar11,pUVar9,&local_48,None);
      if (pUVar12 != (UObject *)0x0) goto LAB_144290f8a;
    }
    if (2 < (byte)LogIrisReferences._0_1_) {
      FNetObjectReference::ToString(param_1,(FString *)&local_48);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      if ((FName)local_48.DataPtr != (FName)0x0) {
        FMemory::Free(local_48.DataPtr);
      }
    }
  }
LAB_144290f8a:
  if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_144290ffa:
  if ((pUVar12 == (UObject *)0x0) &&
     ((((param_1->RefHandle).field0_0x0.Value != 0 ||
       (((param_1->PathToken).field0_0x0.Value & 0xfffff) != 0)) &&
      (EVar7 = HasUnresolvedReferences, cVar15 != '\0')))) {
    EVar7 = HasUnresolvedMustBeMappedReferences|HasUnresolvedReferences;
  }
  *param_3 = pUVar12;
  return EVar7;
}

// ResolveObjectReferenceHandleInternal @ 144291080

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
UE::Net::Private::FObjectReferenceCache::ResolveObjectReferenceHandleInternal
          (FObjectReferenceCache *this,FNetRefHandle param_1,FNetObjectResolveContext *param_2,
          bool *param_3)

{
  undefined1 uVar1;
  FName FVar2;
  code *pcVar3;
  FNetObjectResolveContext *pFVar4;
  UObjectBaseUtility *this_00;
  bool bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  UObject *pUVar10;
  FCachedNetObjectReference *pFVar11;
  UPackage *pUVar12;
  FName *pFVar13;
  UClass *pUVar14;
  FUObjectItem *pFVar15;
  FNetRefHandle_u_0 *this_01;
  size_t sVar16;
  FNetDebugName *pFVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  longlong lVar21;
  UPackage *this_02;
  int iVar22;
  UPackage *pUVar23;
  UPackage *local_res8;
  bool local_res10 [8];
  FNetObjectResolveContext *local_res18;
  UPackage *local_2c8;
  FString local_2c0;
  FNetRefHandle_u_0 local_2b0;
  FLLMScope local_2a8;
  FWeakObjectPtr local_2a4;
  FName local_298;
  int iStack_290;
  undefined4 uStack_28c;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  UObjectBaseUtility *local_218;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  TPairInitializer<UObject_const_*_const_&,UE::Net::FNetRefHandle_const_&> local_130;
  wchar_t *local_120;
  FName local_118;
  FName local_110;
  FMemScope local_108 [2];
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  UPackage **local_e8;
  FNetRefHandle_u_0 *local_e0;
  FName local_d8;
  FString local_d0;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined4 local_3c;
  UPackage *pUVar24;
  
  uVar19 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
      *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
    puVar20 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(this->ReferenceHandleToCachedReference).field_0x38;
    }
    iVar22 = *(int *)(puVar20 +
                     ((uVar19 >> 0x20) * 0x17 + uVar19 &
                     (ulonglong)(*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1))
                     * 4);
    if (iVar22 != -1) {
      lVar21 = *(longlong *)&this->ReferenceHandleToCachedReference;
      while ((*(ulonglong *)((longlong)iVar22 * 0x40 + lVar21) & 0x3fffffffffffff) != uVar19) {
        iVar22 = *(int *)((longlong)iVar22 * 0x40 + 0x38 + lVar21);
        if (iVar22 == -1) goto LAB_14429111f;
      }
      if (((iVar22 == -1) || (lVar21 = (longlong)iVar22 * 0x40 + lVar21, lVar21 == 0)) ||
         (this_02 = (UPackage *)(lVar21 + 8), this_02 == (UPackage *)0x0)) goto LAB_14429111f;
      local_res18 = param_2;
      local_2c8 = (UPackage *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_02);
      *param_3 = (bool)(~*(byte *)(lVar21 + 0x30) & 1);
      if (local_2c8 != (UPackage *)0x0) {
        if ((((uint)local_2c8->_padding_ >> 0x1e & 1) != 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid(Object)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReferenceCache.cpp"
                               ,799,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pUVar10 = (UObject *)(*pcVar3)();
          return pUVar10;
        }
        if ((byte)LogIrisReferences._0_1_ < 7) {
          return (UObject *)local_2c8;
        }
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_2c8,&local_d0,(UObject *)0x0);
        if ((param_1.field0_0x0 == 0) || ((ulonglong)param_1.field0_0x0 >> 0x36 == 0)) {
          ::FString::PrintfImpl(&local_1a0,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_1a0,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          return (UObject *)local_2c8;
        }
        return (UObject *)local_2c8;
      }
      if ((*(byte *)(lVar21 + 0x30) & 8) != 0) {
        return (UObject *)0x0;
      }
      if ((*(byte *)(lVar21 + 0x30) & 0x10) != 0) {
        return (UObject *)0x0;
      }
      if ((*(uint *)(lVar21 + 0x20) & 0xfffff) == 0) {
        if ((param_1.field0_0x0 != 0) && (((ulonglong)param_1.field0_0x0 & 1) == 0)) {
          return (UObject *)0x0;
        }
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6150983300673436873>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReferenceCache.cpp"
                           ,0x337,"RefHandle.IsDynamic()");
        if (!bVar5) {
          return (UObject *)0x0;
        }
        pcVar3 = (code *)swi(3);
        pUVar10 = (UObject *)(*pcVar3)();
        return pUVar10;
      }
      local_res8 = *(UPackage **)(lVar21 + 0x28);
      pUVar24 = (UPackage *)0x0;
      pUVar23 = (UPackage *)0x0;
      local_218 = (UObjectBaseUtility *)0x0;
      iVar22 = 0;
      if (local_res8 != (UPackage *)0x0) {
        pFVar11 = TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
                  ::Find((TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
                          *)&this->ReferenceHandleToCachedReference,(FNetRefHandle *)(lVar21 + 0x28)
                        );
        if (pFVar11 == (FCachedNetObjectReference *)0x0) {
          if (((ulonglong)local_res8 & 1) == 0) {
            return (UObject *)0x0;
          }
          if ((byte)LogIris._0_1_ < 2) goto LAB_1442913ae;
          local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_288.Data.ArrayNum = 0;
          local_288.Data.ArrayMax = 0;
          GenerateFullPath_r(this,param_1,local_res18,&local_288);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          FVar18.Data = local_288.Data.AllocatorInstance.Data;
        }
        else {
          if (pFVar11->bIsBroken == '\0') {
            local_218 = (UObjectBaseUtility *)
                        ResolveObjectReferenceHandleInternal
                                  (this,(FNetRefHandle)
                                        *(FNetRefHandle_u_0 *)
                                         &((FNetRefHandle_u_0 *)(lVar21 + 0x28))->_s_0,local_res18,
                                   local_res10);
            if (local_218 == (UObjectBaseUtility *)0x0) {
              return (UObject *)0x0;
            }
            goto LAB_1442913f5;
          }
          if ((byte)LogIris._0_1_ < 2) goto LAB_1442913ae;
          local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_278.Data.ArrayNum = 0;
          local_278.Data.ArrayMax = 0;
          GenerateFullPath_r(this,param_1,local_res18,&local_278);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          FVar18.Data = local_278.Data.AllocatorInstance.Data;
        }
        if (FVar18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar18.Data);
        }
LAB_1442913ae:
        *(byte *)(lVar21 + 0x30) = *(byte *)(lVar21 + 0x30) | 8;
        return (UObject *)0x0;
      }
LAB_1442913f5:
      this_00 = local_218;
      if (((*(byte *)(lVar21 + 0x30) & 0x10) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!CacheObjectPtr->bIsPending",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReferenceCache.cpp"
                             ,0x364,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pUVar10 = (UObject *)(*pcVar3)();
        return pUVar10;
      }
      if (this_00 != (UObjectBaseUtility *)0x0) {
        pUVar12 = UObjectBaseUtility::GetPackage(this_00);
        bVar5 = UPackage::IsFullyLoaded(pUVar12);
        if ((!bVar5) &&
           (pUVar12 = UObjectBaseUtility::GetPackage(this_00),
           ((uint)pUVar12->PackageFlagsPrivate & 0x100010) == 0)) {
          bVar5 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6150983300673436826>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReferenceCache.cpp"
                             ,0x366,
                             "ObjOuter == nullptr || ObjOuter->GetPackage()->IsFullyLoaded() || ObjOuter->GetPackage()->HasAnyPackageFlags(TreatAsLoadedFlags)"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pUVar10 = (UObject *)(*pcVar3)();
            return pUVar10;
          }
          if (1 < (byte)LogIris._0_1_) {
            if (*(longlong *)&this_00->field_0x10 == 0) {
              ::FString::FString(&local_190,L"None");
            }
            else {
              UObjectBaseUtility::GetFullName(this_00,&local_190,(UObject *)0x0,None);
            }
            local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_268.Data.ArrayNum = 0;
            local_268.Data.ArrayMax = 0;
            GenerateFullPath_r(this,param_1,local_res18,&local_268);
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_268.Data.AllocatorInstance.Data);
            }
            if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      pFVar4 = local_res18;
      local_120 = FStringTokenStore::ResolveToken
                            (this->StringTokenStore,
                             (FNetToken)*(FNetToken_u_0 *)&((FNetToken_u_0 *)(lVar21 + 0x20))->_s_0,
                             local_res18->RemoteNetTokenStoreState);
      if (local_120 == (wchar_t *)0x0) {
        return (UObject *)0x0;
      }
      ::FString::FString(&local_2c0,local_120);
      uVar9 = pFVar4->ConnectionId;
      iVar8 = GetPlayInEditorID();
      if (iVar8 != -1) {
        (**(code **)(this->ReplicationBridge->_padding_ + 0x348))
                  (this->ReplicationBridge,uVar9,&local_2c0,1);
      }
      iVar8 = local_2c0.Data.ArrayNum + -1;
      if (local_2c0.Data.ArrayNum == 0) {
        iVar8 = iVar22;
      }
      pFVar13 = ::FName::FName(&local_d8,iVar8,(wchar_t *)local_2c0.Data.AllocatorInstance.Data,
                               FNAME_Add);
      FVar2 = *pFVar13;
      local_298 = FVar2;
      pUVar14 = Z_Construct_UClass_UObject_NoRegister();
      local_2c8 = (UPackage *)
                  StaticFindObjectFast(pUVar14,(UObject *)this_00,FVar2,None,RF_NoFlags,Borrowed);
      pFVar4 = local_res18;
      bVar6 = *(byte *)(lVar21 + 0x30);
      local_res8 = (UPackage *)CONCAT71(local_res8._1_7_,bVar6);
      if (local_2c8 == (UPackage *)0x0) {
        if ((bVar6 & 1) == 0) {
          if ((this->bIsAuthority != 0) && (1 < (byte)LogIris._0_1_)) {
            local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_258.Data.ArrayNum = 0;
            local_258.Data.ArrayMax = 0;
            GenerateFullPath_r(this,param_1,local_res18,&local_258);
            Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_GetObjectFromRe_150b921b0,
                       (FLogCategoryBase *)&LogIris);
            if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_258.Data.AllocatorInstance.Data);
            }
            bVar6 = (byte)local_res8;
          }
          if ((bVar6 & 4) == 0) {
            uStack_28c = local_3c;
            local_298.ComparisonIndex.Value = 0;
            local_298.Number = 0;
            iStack_290 = 0;
            if (local_2c0.Data.ArrayNum == 0) {
              local_f8 = (FScriptContainerElement *)0x15060d16c;
LAB_144291830:
              sVar16 = wcslen((wchar_t *)local_f8);
              iVar22 = (int)sVar16;
            }
            else {
              local_f8 = local_2c0.Data.AllocatorInstance.Data;
              if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              goto LAB_144291830;
            }
            iStack_f0 = iVar22;
            pUVar14 = Z_Construct_UClass_UObject_NoRegister();
            local_b8._12_4_ = uStack_28c;
            local_b8.Size = iStack_290;
            local_a8._12_4_ = uStack_ec;
            local_a8.Size = iStack_f0;
            local_b8.DataPtr = (wchar_t *)local_298;
            local_a8.DataPtr = (wchar_t *)local_f8;
            local_2c8 = (UPackage *)
                        StaticLoadObject(pUVar14,(UObject *)local_218,&local_a8,&local_b8,2,
                                         (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
            bVar5 = ShouldAsyncLoad(this);
            if (((bVar5) && (pFVar4->bForceSyncLoad == false)) && (1 < (byte)LogIris._0_1_)) {
              if ((param_1.field0_0x0 == 0) || ((ulonglong)param_1.field0_0x0 >> 0x36 == 0)) {
                ::FString::PrintfImpl(&local_170,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
              }
              else {
                ::FString::PrintfImpl(&local_170,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
              }
              Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_170.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            bVar5 = ShouldAsyncLoad(this);
            if ((bVar5) && (pFVar4->bForceSyncLoad == false)) {
              uVar9 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
              if (*(int *)&(this->PendingAsyncLoadRequests).field_0x8 ==
                  *(int *)&(this->PendingAsyncLoadRequests).field_0x34) goto LAB_1442916f6;
              puVar20 = *(undefined1 **)&(this->PendingAsyncLoadRequests).field_0x40;
              if (puVar20 == (undefined1 *)0x0) {
                puVar20 = &(this->PendingAsyncLoadRequests).field_0x38;
              }
              iVar22 = *(int *)(puVar20 +
                               (ulonglong)
                               (*(int *)&(this->PendingAsyncLoadRequests).field_0x48 - 1U &
                               uVar9 + local_298.Number) * 4);
              if (iVar22 == -1) goto LAB_1442916f6;
              goto LAB_1442916e0;
            }
            FVar18.Data = (FScriptContainerElement *)L"";
            if (local_2c0.Data.ArrayNum != 0) {
              FVar18.Data = local_2c0.Data.AllocatorInstance.Data;
            }
            local_2c8 = LoadPackage((UPackage *)0x0,(wchar_t *)FVar18.Data,0,(FArchive *)0x0,
                                    (FLinkerInstancingContext *)0x0);
          }
          if (local_2c8 != (UPackage *)0x0) {
            bVar6 = (byte)local_res8;
            goto LAB_1442919cf;
          }
        }
        if (((*(byte *)(lVar21 + 0x30) & 2) != 0) ||
           (*(byte *)(lVar21 + 0x30) = *(byte *)(lVar21 + 0x30) | 8, (byte)LogIris._0_1_ < 2))
        goto LAB_1442924b9;
        local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_248.Data.ArrayNum = 0;
        local_248.Data.ArrayMax = 0;
        GenerateFullPath_r(this,param_1,local_res18,&local_248);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        local_180.Data.AllocatorInstance.Data = local_248.Data.AllocatorInstance.Data;
        goto LAB_1442924af;
      }
LAB_1442919cf:
      pUVar12 = local_2c8;
      if ((bVar6 & 4) != 0) {
        if (local_2c8 != (UPackage *)0x0) {
          pUVar14 = Z_Construct_UClass_UPackage_NoRegister();
          iVar22 = (int)pUVar14->_padding_;
          if ((iVar22 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar22 * 8) ==
              &pUVar14->_padding_)) {
            local_res8 = this_02;
            bVar5 = UPackage::IsFullyLoaded(pUVar12);
            if ((!bVar5) && (((uint)pUVar12->PackageFlagsPrivate & 0x100010) == 0)) {
              bVar5 = ShouldAsyncLoad(this);
              pFVar4 = local_res18;
              if (((bVar5) && (local_res18->bForceSyncLoad == false)) &&
                 (pFVar15 = FUObjectArray::IndexToObject
                                      (&GUObjectArray,*(int *)((longlong)&pUVar12->_padding_ + 4)),
                 this_02 = local_res8,
                 ((pFVar15->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
                StartAsyncLoadingPackage
                          (this,(FCachedNetObjectReference *)local_res8,FVar2,
                           pFVar4->AsyncLoadingPriority,param_1,true);
                if (5 < (byte)LogIrisReferences._0_1_) {
                  if ((param_1.field0_0x0 == 0) || ((ulonglong)param_1.field0_0x0 >> 0x36 == 0)) {
                    ::FString::PrintfImpl(&local_160,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
                  }
                  else {
                    ::FString::PrintfImpl(&local_160,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
                  }
                  Logging::Private::BasicLog<6>
                            (&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
                  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_160.Data.AllocatorInstance.Data);
                  }
                }
                goto LAB_144291b4d;
              }
              this_02 = local_res8;
              if (local_res8->bDirty != 0) goto LAB_1442924b9;
              if (2 < (byte)LogIrisReferences._0_1_) {
                if ((param_1.field0_0x0 == 0) || ((ulonglong)param_1.field0_0x0 >> 0x36 == 0)) {
                  ::FString::PrintfImpl(&local_150,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
                }
                else {
                  ::FString::PrintfImpl(&local_150,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
                }
                Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
                if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_150.Data.AllocatorInstance.Data);
                }
              }
              FVar18.Data = (FScriptContainerElement *)L"";
              if (local_2c0.Data.ArrayNum != 0) {
                FVar18.Data = local_2c0.Data.AllocatorInstance.Data;
              }
              local_2c8 = LoadPackage((UPackage *)0x0,(wchar_t *)FVar18.Data,0,(FArchive *)0x0,
                                      (FLinkerInstancingContext *)0x0);
            }
            goto LAB_144291b4d;
          }
        }
        *(byte *)(lVar21 + 0x30) = *(byte *)(lVar21 + 0x30) | 8;
        if ((byte)LogIris._0_1_ < 2) goto LAB_1442924b9;
        if ((param_1.field0_0x0 == 0) || ((ulonglong)param_1.field0_0x0 >> 0x36 == 0)) {
          ::FString::PrintfImpl(&local_140,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_140,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        local_180.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
        goto LAB_1442924af;
      }
LAB_144291b4d:
      if (local_2c8 == (UPackage *)0x0) {
LAB_144292456:
        if ((this_02->bHasBeenFullyLoaded != '\0') ||
           (this_02->field_0x28 = this_02->field_0x28 | 8, (byte)LogIris._0_1_ < 2))
        goto LAB_1442924b9;
        local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_228.Data.ArrayNum = 0;
        local_228.Data.ArrayMax = 0;
        GenerateFullPath_r(this,param_1,local_res18,&local_228);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        local_180.Data.AllocatorInstance.Data = local_228.Data.AllocatorInstance.Data;
        goto LAB_1442924af;
      }
      cVar7 = (**(code **)(this->ReplicationBridge->_padding_ + 0x350))
                        (this->ReplicationBridge,local_2c8);
      if (cVar7 == '\0') {
        if ((byte)LogIrisReferences._0_1_ < 6) goto LAB_1442924b9;
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_2c8,&local_98,(UObject *)0x0,None);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
        local_180.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
        goto LAB_1442924af;
      }
      if (local_2c8 == (UPackage *)0x0) goto LAB_144292456;
      if ((((uint)local_2c8->_padding_ >> 0x1e & 1) != 0) && (5 < (byte)LogIrisReferences._0_1_)) {
        local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_238.Data.ArrayNum = 0;
        local_238.Data.ArrayMax = 0;
        GenerateFullPath_r(this,param_1,local_res18,&local_238);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
      }
      pUVar23 = local_2c8;
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_2c8 != (UPackage *)0x0)) {
        GC::MarkAsReachable((UObject *)local_2c8);
      }
      local_2a4.ObjectIndex = 0;
      local_2a4.ObjectSerialNumber = 0;
      local_res8 = pUVar23;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UPackage *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar23);
      }
      FWeakObjectPtr::operator=(&local_2a4,(FObjectPtr)&local_res8);
      this_02->_padding_ = (longlong)local_2a4;
      this_02->_padding_ = (longlong)local_2c8;
      FNetRefHandleManager::MakeNetRefHandle((ulong64)&local_2b0,param_1.field0_0x0._0_4_);
      pUVar23 = local_2c8;
      this_01 = &TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
                 ::Find((TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
                         *)this,(UObject *)local_2c8)->field0_0x0;
      if ((this_01 == (FNetRefHandle_u_0 *)0x0) ||
         (((local_2b0.Value ^ this_01->Value) & 0x3fffffffffffff) == 0)) {
LAB_14429213c:
        bVar5 = true;
      }
      else {
        pFVar11 = TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
                  ::Find((TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
                          *)&this->ReferenceHandleToCachedReference,(FNetRefHandle *)&this_01->_s_0)
        ;
        if (pFVar11 == (FCachedNetObjectReference *)0x0) {
          if (2 < (byte)LogIrisReferences._0_1_) {
            if (pUVar23 == (UPackage *)0x0) {
              ::FString::FString(&local_1f0,L"None");
            }
            else {
              local_130._4_8_ = pUVar23->_padding_;
              ::FName::ToString((FName *)((longlong)&local_130.Key + 4),&local_1f0);
            }
            FNetRefHandle::ToString((FNetRefHandle *)&this_01->_s_0,&local_68);
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            pUVar23 = local_2c8;
            if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
              pUVar23 = local_2c8;
            }
          }
          TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
          ::Remove((TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
                    *)this,(UObject *)pUVar23);
          goto LAB_14429213c;
        }
        bVar5 = FWeakObjectPtr::IsStale((FWeakObjectPtr *)pFVar11,true,false);
        if (bVar5) {
          if (5 < (byte)LogIrisReferences._0_1_) {
            if ((local_2b0.Value == 0) || ((local_2b0.Value & 0xffc0000000000000) == 0)) {
              ::FString::PrintfImpl(&local_210,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
            }
            else {
              ::FString::PrintfImpl(&local_210,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
            }
            FNetRefHandle::ToString(&pFVar11->NetRefHandle,&local_88);
            Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_210.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_14429213c;
        }
        if (((pFVar11->Object).WeakPtr.ObjectIndex != (int)this_02->_padding_) ||
           ((pFVar11->Object).WeakPtr.ObjectSerialNumber !=
            *(int *)((longlong)&this_02->_padding_ + 4))) goto LAB_14429213c;
        bVar5 = (this_01->Value & 0x3fffffffffffff) < (local_2b0.Value & 0x3fffffffffffff);
        if (((this_01->Value & 0x3fffffffffffff) < (local_2b0.Value & 0x3fffffffffffff)) &&
           (5 < (byte)LogIrisReferences._0_1_)) {
          if ((local_2b0.Value == 0) || ((local_2b0.Value & 0xffc0000000000000) == 0)) {
            ::FString::PrintfImpl(&local_200,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
          }
          else {
            ::FString::PrintfImpl(&local_200,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
          }
          FNetRefHandle::ToString(&pFVar11->NetRefHandle,&local_78);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
          }
        }
      }
      FLLMScope::FLLMScope(&local_2a8,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
      local_298 = LLMTagDeclaration_Iris.UniqueName;
      FMemScope::FMemScope(local_108,&local_298,true);
      if (bVar5) {
        local_e8 = &local_2c8;
        local_e0 = &local_2b0;
        TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UObject_const_*_const_&,UE::Net::FNetRefHandle_const_&>_>
                  ((TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
                    *)this,&local_130,(bool *)&local_e8);
        sVar16 = wcslen(local_120);
        pFVar17 = CreatePersistentNetDebugName(local_120,(uint)sVar16);
        uVar19 = local_2b0.Value & 0x3fffffffffffff;
        if (((local_2b0.Value & 0xffc0000000000000) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ReplicationSystemId != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                               ,0x2b,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pUVar10 = (UObject *)(*pcVar3)();
          return pUVar10;
        }
        FNetTrace::TraceObjectCreated
                  ((uint)((ulonglong)local_2b0 >> 0x36) - 1,uVar19,pFVar17,0,this->bIsAuthority);
        if (5 < (byte)LogIrisReferences._0_1_) {
          if (local_2c8 == (UPackage *)0x0) {
            ::FString::FString(&local_1d0,L"None");
          }
          else {
            local_118 = (FName)local_2c8->_padding_;
            ::FName::ToString(&local_118,&local_1d0);
          }
          if ((local_2b0.Value == 0) || ((local_2b0.Value & 0xffc0000000000000) == 0)) {
            ::FString::PrintfImpl(&local_1e0,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
          }
          else {
            ::FString::PrintfImpl(&local_1e0,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
          }
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
        }
      }
      if (6 < (byte)LogIrisReferences._0_1_) {
        if (local_2c8 == (UPackage *)0x0) {
          ::FString::FString(&local_1b0,L"None");
        }
        else {
          local_110 = (FName)local_2c8->_padding_;
          ::FName::ToString(&local_110,&local_1b0);
        }
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_2c8,&local_58,(UObject *)0x0);
        if ((param_1.field0_0x0 == 0) || ((ulonglong)param_1.field0_0x0 >> 0x36 == 0)) {
          ::FString::PrintfImpl(&local_1c0,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_1c0,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
      }
      UpdateTrackedQueuedBatchObjectReference(this,(FNetRefHandle)local_2b0,(UObject *)local_2c8);
      pUVar23 = local_2c8;
      FMemScope::~FMemScope(local_108);
      FLLMScope::~FLLMScope(&local_2a8);
      goto LAB_1442924b9;
    }
  }
LAB_14429111f:
  *param_3 = false;
  return (UObject *)0x0;
  while (iVar22 = *(int *)(*(longlong *)&this->PendingAsyncLoadRequests + 0x40 +
                          (longlong)iVar22 * 0x48), iVar22 != -1) {
LAB_1442916e0:
    if (*(FName *)(*(longlong *)&this->PendingAsyncLoadRequests + (longlong)iVar22 * 0x48) == FVar2)
    {
      ValidateAsyncLoadingPackage(this,(FCachedNetObjectReference *)this_02,FVar2,param_1);
      goto LAB_1442924b9;
    }
  }
LAB_1442916f6:
  *(byte *)(lVar21 + 0x30) = *(byte *)(lVar21 + 0x30) | 0x10;
  StartAsyncLoadingPackage
            (this,(FCachedNetObjectReference *)this_02,FVar2,pFVar4->AsyncLoadingPriority,param_1,
             false);
  pUVar23 = pUVar24;
  if (6 < (byte)LogIrisReferences._0_1_) {
    if ((param_1.field0_0x0 == 0) || ((ulonglong)param_1.field0_0x0 >> 0x36 == 0)) {
      ::FString::PrintfImpl(&local_180,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_180,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
LAB_1442924af:
    pUVar23 = pUVar24;
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
  }
LAB_1442924b9:
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  return (UObject *)pUVar23;
}

// SetAsyncLoadMode @ 144293410

void __thiscall
UE::Net::Private::FObjectReferenceCache::SetAsyncLoadMode
          (FObjectReferenceCache *this,EAsyncLoadMode param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  
  this->AsyncLoadMode = param_1;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  plVar4 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"net.AllowAsyncLoading",0);
  if (plVar4 != (longlong *)0x0) {
    iVar3 = (**(code **)(*plVar4 + 200))(plVar4);
    this->bCachedCVarAllowAsyncLoading = 0 < iVar3;
  }
  return;
}

// ShouldAsyncLoad @ 144294e40

bool __thiscall
UE::Net::Private::FObjectReferenceCache::ShouldAsyncLoad(FObjectReferenceCache *this)

{
  EAsyncLoadMode EVar1;
  FObjectReferenceCache *local_res10 [3];
  
  if (bForceAsyncLoading) {
    return true;
  }
  if (bIrisAllowAsyncLoading) {
    EVar1 = this->AsyncLoadMode;
    if (EVar1 == UseCVar) {
      return this->bCachedCVarAllowAsyncLoading;
    }
    if (EVar1 != ForceDisable) {
      if (EVar1 == ForceEnable) {
        return true;
      }
      local_res10[0] = this;
      `UE::Net::Private::FObjectReferenceCache::ShouldAsyncLoad'::__l10::<lambda_1>::operator()
                (local_res10);
    }
  }
  return false;
}

// ShouldIgnoreWhenMissing @ 144294fb0

bool __thiscall
UE::Net::Private::FObjectReferenceCache::ShouldIgnoreWhenMissing
          (FObjectReferenceCache *this,FNetRefHandle param_1)

{
  bool bVar1;
  int iVar2;
  FCachedNetObjectReference *this_00;
  UObject *this_01;
  UPackage *this_02;
  ulonglong *puVar3;
  ulonglong uVar4;
  FCachedNetObjectReference *pFVar5;
  undefined1 *puVar6;
  
  if ((param_1.field0_0x0 != 0) && (((ulonglong)param_1.field0_0x0 & 1) == 0)) {
    return true;
  }
  if (this->bIsAuthority == 0) {
    uVar4 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
    if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
        *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
      puVar6 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->ReferenceHandleToCachedReference).field_0x38;
      }
      iVar2 = *(int *)(puVar6 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                                (ulonglong)
                                (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1))
                                * 4);
      if (iVar2 != -1) {
        do {
          puVar3 = (ulonglong *)
                   ((longlong)iVar2 * 0x40 + *(longlong *)&this->ReferenceHandleToCachedReference);
          if ((*puVar3 & 0x3fffffffffffff) == uVar4) {
            pFVar5 = (FCachedNetObjectReference *)(puVar3 + 1);
            if (puVar3 == (ulonglong *)0x0) {
              pFVar5 = (FCachedNetObjectReference *)0x0;
            }
            this_00 = pFVar5;
            if (pFVar5 == (FCachedNetObjectReference *)0x0) {
              return false;
            }
            while ((this_00->OuterNetRefHandle).field0_0x0.Value != 0) {
              this_00 = TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
                        ::Find((TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
                                *)&this->ReferenceHandleToCachedReference,
                               &this_00->OuterNetRefHandle);
              if (this_00 == (FCachedNetObjectReference *)0x0) {
                return pFVar5->bIgnoreWhenMissing;
              }
            }
            if (this_00->bIsPending != '\0') {
              return true;
            }
            bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&this_00->Object,(void *)0x0)
            ;
            if (!bVar1) {
              this_01 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
              this_02 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_01);
              bVar1 = UPackage::IsFullyLoaded(this_02);
              if (!bVar1) {
                return true;
              }
            }
            return pFVar5->bIgnoreWhenMissing;
          }
          iVar2 = (int)puVar3[7];
        } while (iVar2 != -1);
      }
    }
  }
  return false;
}

// StartAsyncLoadingPackage @ 144295fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage
          (FObjectReferenceCache *this,FCachedNetObjectReference *param_1,FName param_2,int param_3,
          FNetRefHandle param_4,bool param_5)

{
  FNetRefHandle_u_0 *pFVar1;
  FNetRefHandleManager *this_00;
  UReplicationSystem *pUVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest> *pTVar7;
  FString *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  int iVar11;
  longlong lVar12;
  FNetRefHandle_u_0 FVar13;
  ulonglong uVar14;
  TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar15;
  TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this_01;
  FName local_res18 [2];
  undefined1 auStackY_1a8 [32];
  undefined1 local_158;
  undefined1 local_157 [3];
  undefined4 local_154;
  FNetRefHandle_u_0 local_150;
  undefined1 local_148 [24];
  FString local_130;
  undefined1 local_120 [8];
  FDelegateAllocation local_118;
  FName local_108;
  FNetRefHandle_u_0 local_100;
  UReplicationSystem *local_f8;
  FMemScope local_f0;
  FName *local_e8;
  FNetRefHandle_u_0 *local_e0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FNetRefHandle_u_0 local_88 [4];
  FNetRefHandle_u_0 local_68;
  uint local_60;
  int local_5c;
  double local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar15 = (TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             *)0x0;
  local_154 = 0;
  local_res18[0] = param_2;
  local_148._0_8_ = param_1;
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_154,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
  local_108 = LLMTagDeclaration_Iris.UniqueName;
  FMemScope::FMemScope(&local_f0,&local_108,true);
  if (param_3 == -1) {
    local_158 = 0;
    `UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l5::<lambda_1>::
    operator()(&local_158);
    param_3 = IrisDefaultAsyncLoadingPriority;
  }
  if (5 < (byte)LogIrisReferences._0_1_) {
    ::FName::ToString(local_res18,&local_b8);
    this_00 = this->NetRefHandleManager;
    uVar6 = FNetRefHandleManager::GetInternalIndex(this_00,param_4);
    if (uVar6 == 0) {
      if ((param_4.field0_0x0 == 0) || ((ulonglong)param_4.field0_0x0 >> 0x36 == 0)) {
        ::FString::PrintfImpl((FString *)(local_148 + 8),L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl((FString *)(local_148 + 8),L"NetRefHandle (Id=%llu):(RepSystemId=%u)")
        ;
      }
      ::FString::PrintfImpl(&local_130,L"NetObject None (InternalIndex: None) (%s)");
      if ((FPendingAsyncLoadRequest *)local_148._8_8_ != (FPendingAsyncLoadRequest *)0x0) {
        FMemory::Free((void *)local_148._8_8_);
      }
    }
    else {
      FNetRefHandleManager::PrintObjectFromIndex(this_00,&local_130,uVar6);
    }
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    param_1 = (FCachedNetObjectReference *)local_148._0_8_;
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      param_1 = (FCachedNetObjectReference *)local_148._0_8_;
    }
  }
  local_58 = this->ReplicationSystem->ElapsedTime;
  local_150 = param_4.field0_0x0;
  local_68.Value = 0;
  local_60 = 0;
  local_5c = 4;
  if (((local_88 <= &local_150) && (&local_150 < local_88 + 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_60 == local_5c) {
    local_60 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                         (0x808,(ForElementType<UE::Net::FNetRefHandle> *)&local_88[0]._s_0,
                          &local_5c);
  }
  FVar13 = (FNetRefHandle_u_0)local_88;
  if ((FNetRefHandle_u_0 *)local_68.Value != (FNetRefHandle_u_0 *)0x0) {
    FVar13 = local_68;
  }
  lVar12 = (longlong)(int)local_60;
  local_60 = local_60 + 1;
  ((FNetRefHandle_u_0 *)(FVar13.Value + lVar12 * 8))->_s_0 = (FNetRefHandle_u_0_s_0)local_150;
  param_1->bIsPending = '\x01';
  pTVar7 = TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
                   *)&this->PendingAsyncLoadRequests,local_res18[0]);
  uVar6 = local_60;
  this_01 = (TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest> *)
                0x0) {
    this_01 = pTVar15;
  }
  if (this_01 !=
      (TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
    uVar14 = (ulonglong)(int)local_60;
    FVar13 = (FNetRefHandle_u_0)local_88;
    if ((FNetRefHandle_u_0 *)local_68.Value != (FNetRefHandle_u_0 *)0x0) {
      FVar13 = local_68;
    }
    pFVar1 = (FNetRefHandle_u_0 *)(FVar13.Value + uVar14 * 8);
    while( true ) {
      if ((uint)uVar14 != uVar6) {
        `TCheckedPointerIterator<UE::Net::FNetRefHandle_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_157);
      }
      if ((FNetRefHandle_u_0 *)FVar13.Value == pFVar1) break;
                    /* WARNING: Load size is inaccurate */
      local_100._s_0 = *FVar13._s_0;
      TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
      AddUniqueImpl<UE::Net::FNetRefHandle_const_&>(this_01,(FNetRefHandle *)&local_100._s_0);
      uVar14 = (ulonglong)local_60;
      FVar13.Value = FVar13.Value + 8;
    }
    goto LAB_1442964af;
  }
  local_e8 = local_res18;
  local_e0 = local_88;
  TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_&,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest_&&>_>
            ((TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
              *)&this->PendingAsyncLoadRequests,
             (TPairInitializer<FName_&,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest_&&>
              *)local_148,(bool *)&local_e8);
  if ((bIrisAsyncLoadingFailAllLoads == false) && (bIrisAsyncLoadingFailNextLoad == false)) {
    iVar11 = IrisAsyncLoadingFailPackageName.Data.ArrayNum + -1;
    if (IrisAsyncLoadingFailPackageName.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    if (0 < iVar11) {
      pFVar8 = ::FName::ToString(local_res18,&local_a8);
      pTVar15 = (TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)&DAT_00000001;
      iVar11 = IrisAsyncLoadingFailPackageName.Data.ArrayNum + -1;
      FVar4 = IrisAsyncLoadingFailPackageName.Data.AllocatorInstance;
      if (IrisAsyncLoadingFailPackageName.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar4.Data = (FScriptContainerElement *)L"";
      }
      iVar11 = ::FString::Find(pFVar8,(wchar_t *)FVar4.Data,iVar11,IgnoreCase,FromStart,-1);
      if (iVar11 != -1) goto LAB_144296385;
    }
    bVar5 = false;
  }
  else {
LAB_144296385:
    bVar5 = true;
  }
  if ((pTVar15 !=
       (TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
       0x0) && (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    bIrisAsyncLoadingFailNextLoad = false;
    AsyncPackageForcedFailCallback(this,local_res18,(UPackage *)0x0,Failed);
  }
  else {
    pUVar2 = this->ReplicationSystem;
    local_120 = (undefined1  [8])0x0;
    local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_118.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_120,
               (FWriteAccessScope *)&local_d8);
    local_c0 = &local_118;
    puVar9 = Core::Private::DelegateAllocate(0x28,&local_118);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::`31'::<lambda_2>_>
                 ::_vftable_;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UReplicationSystem *)0x0))
      {
        GC::MarkAsReachable((UObject *)pUVar2);
      }
      puVar9[3] = 0;
      local_f8 = pUVar2;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UReplicationSystem *)0x0))
      {
        GC::MarkAsReachable((UObject *)pUVar2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_f8);
      puVar9[4] = this;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    pFVar8 = ::FName::ToString(local_res18,&local_98);
    LoadPackageAsync(pFVar8,(TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                             *)local_120,param_3,PKG_None,-1);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
LAB_1442964af:
  if ((FNetRefHandle_u_0 *)local_68.Value != (FNetRefHandle_u_0 *)0x0) {
    FMemory::Free((void *)local_68);
  }
  FMemScope::~FMemScope(&local_f0);
  FLLMScope::~FLLMScope((FLLMScope *)&local_154);
  return;
}

// SupportsObjectInternal @ 144298050

bool __thiscall
UE::Net::Private::FObjectReferenceCache::SupportsObjectInternal
          (FObjectReferenceCache *this,UObject *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x208))(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(longlong *)param_1 + 0x210))(param_1);
    return cVar1 != '\0';
  }
  return true;
}

// UpdateTrackedQueuedBatchObjectReference @ 14429a610

void __thiscall
UE::Net::Private::FObjectReferenceCache::UpdateTrackedQueuedBatchObjectReference
          (FObjectReferenceCache *this,FNetRefHandle param_1,UObject *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined1 *puVar5;
  
  uVar3 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)&(this->QueuedBatchObjectReferences).field_0x8 !=
      *(int *)&(this->QueuedBatchObjectReferences).field_0x34) {
    puVar5 = *(undefined1 **)&(this->QueuedBatchObjectReferences).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->QueuedBatchObjectReferences).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + ((uVar3 >> 0x20) * 0x17 + uVar3 &
                              (ulonglong)
                              (*(int *)&(this->QueuedBatchObjectReferences).field_0x48 - 1)) * 4);
    if (iVar1 != -1) {
      while (puVar2 = (ulonglong *)
                      ((longlong)iVar1 * 0x20 + *(longlong *)&this->QueuedBatchObjectReferences),
            (*puVar2 & 0x3fffffffffffff) != uVar3) {
        iVar1 = (int)puVar2[3];
        if (iVar1 == -1) {
          return;
        }
      }
      puVar4 = puVar2 + 1;
      if (puVar2 == (ulonglong *)0x0) {
        puVar4 = (ulonglong *)0x0;
      }
      if (puVar4 != (ulonglong *)0x0) {
        if ((GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
          GC::MarkAsReachable(param_2);
        }
        *puVar4 = (ulonglong)param_2;
      }
    }
  }
  return;
}

// ValidateAsyncLoadingPackage @ 14429a9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectReferenceCache::ValidateAsyncLoadingPackage
          (FObjectReferenceCache *this,FCachedNetObjectReference *param_1,FName param_2,
          FNetRefHandle param_3)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest> *pTVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  FNetRefHandle_u_0 local_res8;
  FName local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res18[0] = param_2;
  pTVar3 = TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
                   *)&this->PendingAsyncLoadRequests,param_2);
  if ((pTVar3 == (TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest> *)
                 0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = &pTVar3->field_0x8;
  local_res8 = param_3.field0_0x0;
  TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<UE::Net::FNetRefHandle_const_&>
            ((TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)this_00,(FNetRefHandle *)&local_res8._s_0);
  param_1->bIsPending = '\x01';
  uVar6 = *(int *)&pTVar3->field_0x30 - 1;
  uVar4 = 0;
  if ((int)uVar6 < *(int *)&pTVar3->field_0x30) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar5 = *(undefined1 **)&pTVar3->field_0x28;
  if (*(undefined1 **)&pTVar3->field_0x28 == (undefined1 *)0x0) {
    puVar5 = this_00;
  }
  if ((*(ulonglong *)(puVar5 + (longlong)*(int *)&pTVar3->field_0x30 * 8 + -8) & 0x3fffffffffffff)
      == ((ulonglong)param_3.field0_0x0 & 0x3fffffffffffff)) {
    if ((byte)LogIrisReferences._0_1_ < 7) {
      return;
    }
    if ((param_3.field0_0x0 == 0) || ((ulonglong)param_3.field0_0x0 >> 0x36 == 0)) {
      ::FString::PrintfImpl(&local_68,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_68,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    ::FName::ToString(local_res18,&local_48);
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((byte)LogIrisReferences._0_1_ < 7) {
      return;
    }
    if ((param_3.field0_0x0 == 0) || ((ulonglong)param_3.field0_0x0 >> 0x36 == 0)) {
      ::FString::PrintfImpl(&local_78,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_78,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    uVar6 = *(int *)&pTVar3->field_0x30 - 1;
    uVar4 = 0;
    if ((int)uVar6 < *(int *)&pTVar3->field_0x30) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar5 = *(undefined1 **)&pTVar3->field_0x28;
    if (*(undefined1 **)&pTVar3->field_0x28 == (undefined1 *)0x0) {
      puVar5 = this_00;
    }
    if ((*(ulonglong *)(puVar5 + (longlong)*(int *)&pTVar3->field_0x30 * 8 + -8) == 0) ||
       (*(ulonglong *)(puVar5 + (longlong)*(int *)&pTVar3->field_0x30 * 8 + -8) < 0x40000000000000))
    {
      ::FString::PrintfImpl(&local_88,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_88,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    ::FName::ToString(local_res18,&local_58);
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      local_68.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// WriteFullReference @ 14429b4b0

void __thiscall
UE::Net::Private::FObjectReferenceCache::WriteFullReference
          (FObjectReferenceCache *this,FNetSerializationContext *param_1,
          FNetObjectReference *param_2)

{
  uint *puVar1;
  uint *puVar2;
  FNetBitStreamWriter *this_00;
  uint uVar3;
  uint uVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  FNetTraceCollector *pFVar6;
  FNetTraceCollector *pFVar7;
  bool bVar8;
  uint local_res18;
  FNetRefHandle_u_0 local_48;
  undefined8 uStack_40;
  
  this_00 = param_1->BitStreamWriter;
  local_res18 = 0xffffffff;
  pFVar7 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar7 = param_1->TraceCollector;
  }
  puVar1 = &this_00->OverflowBitCount;
  puVar2 = &this_00->BufferBitPosition;
  if (pFVar7 != (FNetTraceCollector *)0x0) {
    uVar3 = *puVar2;
    if (*puVar1 != 0) {
      uVar3 = 0;
    }
    local_res18 = FNetTrace::BeginPacketContentEvent(pFVar7,NameId,uVar3);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FullNetObjectReference = CreatePersistentNetDebugName(L"FullNetObjectReference",0x16);
      _Init_thread_footer(&::_TSS0);
    }
    uVar3 = FNetTrace::TraceName(FullNetObjectReference);
    FVar5 = (pFVar7->Events).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar5 = (ForElementType<FNetTracePacketContentEvent>)&pFVar7->Events;
    }
    *(uint *)((longlong)FVar5 + (ulonglong)local_res18 * 0x10) = uVar3;
  }
  bVar8 = ((param_2->PathToken).field0_0x0.Value & 0xfffff) != 0;
  FNetBitStreamWriter::WriteBits(this_00,(uint)bVar8,1);
  if (bVar8) {
    uVar3 = 0xffffffff;
    pFVar6 = (FNetTraceCollector *)0x0;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar6 = param_1->TraceCollector;
    }
    if (pFVar6 != (FNetTraceCollector *)0x0) {
      uVar3 = *puVar2;
      if (*puVar1 != 0) {
        uVar3 = 0;
      }
      uVar3 = FNetTrace::BeginPacketContentEvent(pFVar6,NameId,uVar3);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ClientAssigned = CreatePersistentNetDebugName(L"ClientAssigned",0xe);
        _Init_thread_footer(&::_TSS0);
      }
      uVar4 = FNetTrace::TraceName(ClientAssigned);
      FVar5 = (pFVar6->Events).AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar5 = (ForElementType<FNetTracePacketContentEvent>)&pFVar6->Events;
      }
      *(uint *)((longlong)FVar5 + (ulonglong)uVar3 * 0x10) = uVar4;
    }
    WriteNetRefHandle(param_1,(FNetRefHandle)
                              *(FNetRefHandle_u_0 *)&(param_2->RefHandle).field0_0x0._s_0);
    FNetTokenStore::InternalWriteNetToken
              (param_1,(FNetToken)*(FNetToken_u_0 *)&(param_2->PathToken).field0_0x0._s_0,false);
    FNetTokenStore::ConditionalWriteNetTokenData
              (this->NetTokenStore,param_1,param_1->ExportContext,
               (FNetToken)*(FNetToken_u_0 *)&(param_2->PathToken).field0_0x0._s_0);
    if (uVar3 != 0xffffffff) {
      uVar4 = *puVar2;
      if (*puVar1 != 0) {
        uVar4 = 0;
      }
      FNetTrace::EndPacketContentEvent(pFVar6,uVar3,uVar4);
    }
  }
  else if (param_1->InternalContext->bInlineObjectReferenceExports == 0) {
    if (param_1->ExportContext != (FNetExportContext *)0x0) {
      AddPendingExport(this,param_1->ExportContext,param_2);
    }
    local_48._s_0 = *(FNetRefHandle_u_0_s_0 *)&(param_2->RefHandle).field0_0x0;
    uStack_40._0_4_ = param_2->PathToken;
    uStack_40._4_4_ = param_2->Traits;
    WriteReference(this,param_1,(FNetObjectReference *)&local_48._s_0);
  }
  else {
    WriteFullReferenceInternal(this,param_1,param_2);
  }
  if (local_res18 != 0xffffffff) {
    uVar3 = *puVar2;
    if (*puVar1 != 0) {
      uVar3 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar7,local_res18,uVar3);
  }
  return;
}

// WriteFullReferenceInternal @ 14429b780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectReferenceCache::WriteFullReferenceInternal
          (FObjectReferenceCache *this,FNetSerializationContext *param_1,
          FNetObjectReference *param_2)

{
  FNetRefHandle_u_0_s_0 FVar1;
  FNetExportContext *this_00;
  ForElementType<UE::Net::FNetRefHandle> FVar2;
  code *pcVar3;
  FNetRefHandle_u_0 *pFVar4;
  FNetRefHandle_u_0_s_0 FVar5;
  FNetRefHandle_u_0_s_0 FVar6;
  FNetRefHandle_u_0_s_0 FVar7;
  FNetRefHandle_u_0_s_0 FVar8;
  FNetRefHandle_u_0_s_0 FVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ForElementType<FNetTracePacketContentEvent> FVar13;
  FNetTraceCollector *pFVar14;
  ForElementType<UE::Net::FNetRefHandle> FVar15;
  ulonglong uVar16;
  FNetTraceCollector *pFVar17;
  undefined1 *puVar18;
  FNetBitStreamWriter *this_01;
  FNetTraceCollector *pFVar19;
  bool bVar20;
  FNetRefHandle_u_0 local_98;
  FNetBitStreamWriter *local_90;
  FString local_88;
  ulonglong local_78;
  FString local_70;
  FString local_60;
  FNetTraceCollector *local_50;
  FNetRefHandle_u_0 local_48;
  undefined8 local_40;
  
  pFVar4 = &(param_2->RefHandle).field0_0x0;
  FVar1 = pFVar4->_s_0;
  pFVar17 = (FNetTraceCollector *)0x0;
  this_01 = param_1->BitStreamWriter;
  uVar16 = pFVar4->Id;
  local_78 = CONCAT44(local_78._4_4_,0xffffffff);
  pFVar14 = pFVar17;
  if (1 < GNetTraceRuntimeVerbosity) {
    pFVar14 = param_1->TraceCollector;
  }
  local_90 = this_01;
  local_50 = pFVar14;
  if (pFVar14 != (FNetTraceCollector *)0x0) {
    uVar11 = this_01->BufferBitPosition;
    if (this_01->OverflowBitCount != 0) {
      uVar11 = 0;
    }
    uVar11 = FNetTrace::BeginPacketContentEvent(pFVar14,Object,uVar11);
    FVar13 = (pFVar14->Events).AllocatorInstance.SecondaryData;
    local_78 = (ulonglong)uVar11;
    if (FVar13 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar13 = (ForElementType<FNetTracePacketContentEvent>)&pFVar14->Events;
    }
    *(ulonglong *)((longlong)FVar13 + local_78 * 0x10) = uVar16;
    if (uVar16 != 0) {
      FNetTraceCollector::AddReferencedObjectId(pFVar14,uVar16);
    }
  }
  if (pFVar4->Id != 0 || pFVar4.ReplicationSystemId != 0) {
    pFVar14 = pFVar17;
    if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
        *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
      puVar18 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = &(this->ReferenceHandleToCachedReference).field_0x38;
      }
      uVar11 = *(uint *)(puVar18 +
                        ((uVar16 >> 0x20) * 0x17 + uVar16 &
                        (ulonglong)
                        (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1)) * 4);
      if (uVar11 != 0xffffffff) {
        do {
          pFVar14 = (FNetTraceCollector *)
                    ((longlong)(int)uVar11 * 0x40 +
                    *(longlong *)&this->ReferenceHandleToCachedReference);
          if ((*(ulonglong *)pFVar14->NestingStack & 0x3fffffffffffff) == uVar16) break;
          uVar11 = pFVar14->NestingStack[0xe];
          pFVar14 = pFVar17;
        } while (uVar11 != 0xffffffff);
      }
    }
    pFVar19 = (FNetTraceCollector *)(pFVar14->NestingStack + 2);
    if (pFVar14 == (FNetTraceCollector *)0x0) {
      pFVar19 = pFVar17;
    }
    if (pFVar19 != (FNetTraceCollector *)0x0) {
      WriteNetRefHandle(param_1,(FNetRefHandle)FVar1);
      bVar20 = (pFVar19->NestingStack[6] & 0xfffff) != 0;
      this_00 = param_1->ExportContext;
      if ((((pFVar19->NestingStack[6] & 0xfffff) == 0) || (this->bIsAuthority == 0)) ||
         ((this_00 != (FNetExportContext *)0x0 &&
          (bVar10 = FNetExportContext::IsExported(this_00,(FNetRefHandle)FVar1), bVar10)))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (6 < (byte)LogIrisReferences._0_1_) {
        if ((*(ulonglong *)(pFVar19->NestingStack + 8) == 0) ||
           (*(ulonglong *)(pFVar19->NestingStack + 8) < 0x40000000000000)) {
          ::FString::PrintfImpl(&local_60,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_60,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)L"";
        if (local_60.Data.ArrayNum != 0) {
          local_88.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
        }
        if ((*(ulonglong *)(pFVar19->NestingStack + 4) == 0) ||
           (*(ulonglong *)(pFVar19->NestingStack + 4) < 0x40000000000000)) {
          ::FString::PrintfImpl(&local_70,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_70,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
      this_01 = local_90;
      FNetBitStreamWriter::WriteBits(local_90,(uint)bVar10,1);
      if (bVar10) {
        FNetBitStreamWriter::WriteBits(this_01,(byte)pFVar19->NestingStack[10] & 1,1);
        FNetBitStreamWriter::WriteBits(this_01,(uint)bVar20,1);
        if (bVar20) {
          FNetTokenStore::InternalWriteNetToken
                    (param_1,(FNetToken)
                             *(FNetToken_u_0 *)&((FNetToken_u_0 *)(pFVar19->NestingStack + 6))->_s_0
                     ,false);
          FNetTokenStore::ConditionalWriteNetTokenData
                    (this->NetTokenStore,param_1,this_00,
                     (FNetToken)
                     *(FNetToken_u_0 *)&((FNetToken_u_0 *)(pFVar19->NestingStack + 6))->_s_0);
          local_48 = *(FNetRefHandle_u_0 *)(pFVar19->NestingStack + 8);
          local_40 = 0;
          WriteFullReferenceInternal(this,param_1,(FNetObjectReference *)&local_48._s_0);
        }
        if (this_00 != (FNetExportContext *)0x0) {
          FVar2 = (ForElementType<UE::Net::FNetRefHandle>)this_00->BatchExports;
          FVar15 = *(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar2 + 0x100);
          if (*(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar2 + 0x100) ==
              (ForElementType<UE::Net::FNetRefHandle>)0x0) {
            FVar15 = FVar2;
          }
          local_98._s_0 = FVar1;
          if ((((ulonglong)FVar15 <= &local_98) &&
              (&local_98 <
               (FNetRefHandle_u_0 *)
               ((longlong)FVar15 + (longlong)*(int *)((longlong)FVar2 + 0x10c) * 8))) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar20)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar12 = *(int *)((longlong)FVar2 + 0x108);
          if (iVar12 == *(int *)((longlong)FVar2 + 0x10c)) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                               (0x808,(ForElementType<UE::Net::FNetRefHandle> *)FVar2,
                                (int *)((longlong)FVar2 + 0x10c));
          }
          *(int *)((longlong)FVar2 + 0x108) = iVar12 + 1;
          FVar15 = *(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar2 + 0x100);
          if (*(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar2 + 0x100) ==
              (ForElementType<UE::Net::FNetRefHandle>)0x0) {
            FVar15 = FVar2;
          }
          ((FNetRefHandle_u_0 *)((longlong)FVar15 + (longlong)iVar12 * 8))->_s_0 =
               (FNetRefHandle_u_0_s_0)local_98;
        }
      }
      goto LAB_14429bc95;
    }
  }
  if ((4 < (byte)LogIrisReferences._0_1_) && (pFVar4->Id != 0 || pFVar4.ReplicationSystemId != 0)) {
    if (pFVar4.ReplicationSystemId << 0x36 < 0x40000000000000) {
      ::FString::PrintfImpl(&local_88,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      if (((&pFVar4->_s_0)->ReplicationSystemId == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("ReplicationSystemId != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                              ,0x2b,L""), bVar20)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::PrintfImpl(&local_88,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
    this_01 = local_90;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      this_01 = local_90;
    }
  }
  WriteNetRefHandle(param_1,(FNetRefHandle)0x0);
LAB_14429bc95:
  if ((uint)local_78 != 0xffffffff) {
    uVar11 = this_01->BufferBitPosition;
    if (this_01->OverflowBitCount != 0) {
      uVar11 = 0;
    }
    FNetTrace::EndPacketContentEvent(local_50,(uint)local_78,uVar11);
  }
  return;
}

// WriteMustBeMappedExports @ 14429be20

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FObjectReferenceCache::WriteMustBeMappedExports
          (FObjectReferenceCache *this,FNetSerializationContext *param_1,uint param_2,
          TArrayView<UE::Net::FNetObjectReference_const_,int> *param_3)

{
  FScriptContainerElement *pFVar1;
  EAsyncLoadMode EVar2;
  EIrisAsyncLoadingPriority EVar3;
  FNetBitStreamWriter *this_00;
  FNetRefHandleManager *pFVar4;
  FNetRefHandle FVar5;
  undefined1 *puVar6;
  FNetBitStreamWriter *pFVar7;
  FNetStatsContext *pFVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  uint uVar14;
  FReplicatedObjectData *pFVar15;
  UObject *pUVar16;
  FNetTraceCollector *pFVar17;
  ForElementType<FNetTracePacketContentEvent> FVar18;
  ForElementType<FNetTracePacketContentEvent> FVar19;
  FNetRefHandle_u_0 *pFVar20;
  uint uVar21;
  FNetTraceCollector *this_01;
  ulonglong uVar22;
  uint uVar23;
  undefined1 *puVar24;
  FNetRefHandle_u_0 *pFVar25;
  FNetTraceCollector *pFVar26;
  uint local_c4;
  uint local_c0;
  FString local_a0;
  FString local_90;
  uint local_80;
  FObjectReferenceCache *local_78;
  FName local_70;
  FNetTraceCollector *local_68;
  FString local_60;
  FString local_50;
  
  this_00 = param_1->BitStreamWriter;
  pFVar26 = (FNetTraceCollector *)0x0;
  uVar21 = 0;
  if (this->bIsAuthority == 0) goto LAB_14429c46c;
  if (!bForceAsyncLoading) {
    if (!bIrisAllowAsyncLoading) goto LAB_14429c46c;
    EVar2 = this->AsyncLoadMode;
    if (EVar2 == UseCVar) {
      if (this->bCachedCVarAllowAsyncLoading == false) goto LAB_14429c46c;
    }
    else {
      if (EVar2 == ForceDisable) goto LAB_14429c46c;
      if (EVar2 != ForceEnable) {
        local_78 = this;
        `UE::Net::Private::FObjectReferenceCache::ShouldAsyncLoad'::__l10::<lambda_1>::operator()
                  (&local_78);
        goto LAB_14429c46c;
      }
    }
  }
  if (param_1->ExportContext != (FNetExportContext *)0x0) {
    pFVar17 = pFVar26;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar17 = param_1->TraceCollector;
    }
    local_c0 = 0xffffffff;
    local_68 = pFVar17;
    if (pFVar17 != (FNetTraceCollector *)0x0) {
      uVar14 = this_00->BufferBitPosition;
      if (this_00->OverflowBitCount != 0) {
        uVar14 = 0;
      }
      local_c0 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,uVar14);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        MustBeMappedExports = CreatePersistentNetDebugName(L"MustBeMappedExports",0x13);
        _Init_thread_footer(&::_TSS0);
      }
      uVar14 = FNetTrace::TraceName(MustBeMappedExports);
      FVar19 = (pFVar17->Events).AllocatorInstance.SecondaryData;
      if (FVar19 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar19 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
      }
      *(uint *)((longlong)FVar19 + (ulonglong)local_c0 * 0x10) = uVar14;
    }
    pFVar4 = this->NetRefHandleManager;
    pFVar15 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
              ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                            *)&pFVar4->ReplicatedObjectData,param_2);
    if (pFVar15->SubObjectRootIndex != 0) {
      pFVar15 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                              *)&pFVar4->ReplicatedObjectData,pFVar15->SubObjectRootIndex);
    }
    pFVar25 = (FNetRefHandle_u_0 *)param_3->DataPtr;
    EVar3 = pFVar15->IrisAsyncLoadingPriority;
    pFVar20 = pFVar25 + (longlong)param_3->ArrayNum * 2;
    bVar13 = false;
    local_c4 = uVar21;
    for (; pFVar25 != pFVar20; pFVar25 = pFVar25 + 2) {
      FVar5.field0_0x0 = (FNetRefHandle_u_0)pFVar25->Value;
      uVar22 = (ulonglong)FVar5.field0_0x0 & 0x3fffffffffffff;
      if ((*(byte *)((longlong)pFVar25 + 0xc) & 1) != 0) {
        pFVar17 = pFVar26;
        if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
            *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
          puVar6 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
          puVar24 = &(this->ReferenceHandleToCachedReference).field_0x38;
          if (puVar6 != (undefined1 *)0x0) {
            puVar24 = puVar6;
          }
          uVar14 = *(uint *)(puVar24 +
                            ((uVar22 >> 0x20) * 0x17 + uVar22 &
                            (ulonglong)
                            (*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1)) * 4)
          ;
          if (uVar14 != 0xffffffff) {
            do {
              pFVar17 = (FNetTraceCollector *)
                        ((longlong)(int)uVar14 * 0x40 +
                        *(longlong *)&this->ReferenceHandleToCachedReference);
              if ((*(ulonglong *)pFVar17->NestingStack & 0x3fffffffffffff) == uVar22) break;
              uVar14 = pFVar17->NestingStack[0xe];
              pFVar17 = pFVar26;
            } while (uVar14 != 0xffffffff);
          }
        }
        this_01 = (FNetTraceCollector *)(pFVar17->NestingStack + 2);
        if (pFVar17 == (FNetTraceCollector *)0x0) {
          this_01 = pFVar26;
        }
        if ((this_01 != (FNetTraceCollector *)0x0) && ((this_01->NestingStack[10] & 1) == 0)) {
          pFVar7 = param_1->BitStreamWriter;
          pFVar17 = pFVar26;
          if (1 < GNetTraceRuntimeVerbosity) {
            pFVar17 = param_1->TraceCollector;
          }
          uVar14 = 0xffffffff;
          if (pFVar17 != (FNetTraceCollector *)0x0) {
            uVar14 = pFVar7->BufferBitPosition;
            if (pFVar7->OverflowBitCount != 0) {
              uVar14 = 0;
            }
            uVar14 = FNetTrace::BeginPacketContentEvent(pFVar17,Object,uVar14);
            FVar19 = (pFVar17->Events).AllocatorInstance.SecondaryData;
            FVar18 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
            if (FVar19 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar18 = FVar19;
            }
            *(ulonglong *)((longlong)FVar18 + (ulonglong)uVar14 * 0x10) = uVar22;
            if (uVar22 != 0) {
              FNetTraceCollector::AddReferencedObjectId(pFVar17,uVar22);
            }
          }
          FNetBitStreamWriter::WriteBits(this_00,1,1);
          if (!bVar13) {
            bVar13 = true;
            for (lVar9 = 0x3f; 5UL >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
            local_80 = (uint)lVar9;
            FNetBitStreamWriter::WriteBits(this_00,(uint)EVar3,local_80);
          }
          WriteNetRefHandle(param_1,FVar5);
          if (6 < (byte)LogIrisReferences._0_1_) {
            if ((ulonglong)FVar5.field0_0x0 < 0x40000000000000) {
              ::FString::PrintfImpl(&local_90,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
            }
            else {
              if (((ulonglong)FVar5.field0_0x0 >> 0x36 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ReplicationSystemId != 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                                      ,0x2b,L""), bVar11)) {
                pcVar10 = (code *)swi(3);
                uVar12 = (*pcVar10)();
                return (bool)uVar12;
              }
              ::FString::PrintfImpl(&local_90,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
            }
            pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
            if (pUVar16 == (UObject *)0x0) {
              ::FString::FString(&local_a0,L"None");
            }
            else {
              local_70.ComparisonIndex.Value = *(uint *)&pUVar16->field_0x18;
              local_70.Number = *(uint *)&pUVar16->field_0x1c;
              ::FName::ToString(&local_70,&local_a0);
            }
            FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_60,param_2);
            Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
          }
          local_c4 = local_c4 + 1;
          if (uVar14 != 0xffffffff) {
            uVar23 = pFVar7->BufferBitPosition;
            if (pFVar7->OverflowBitCount != 0) {
              uVar23 = uVar21;
            }
            FNetTrace::EndPacketContentEvent(pFVar17,uVar14,uVar23);
          }
        }
      }
    }
    if ((6 < (byte)LogIrisReferences._0_1_) && (local_c4 != 0)) {
      ::LexToString(EVar3);
      FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_50,param_2);
      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    pFVar8 = param_1->NetStatsContext;
    if (pFVar8 != (FNetStatsContext *)0x0) {
      pFVar15 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                              *)&pFVar8->NetRefHandleManager->ReplicatedObjectData,param_2);
      if ((pFVar8->bShouldIncludeSubObjectWithRoot != false) && (pFVar15->SubObjectRootIndex != 0))
      {
        pFVar15 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                  ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                                *)&pFVar8->NetRefHandleManager->ReplicatedObjectData,
                               pFVar15->SubObjectRootIndex);
      }
      if (pFVar15->Protocol == (FReplicationProtocol *)0x0) {
        uVar14 = 1;
      }
      else {
        uVar14 = pFVar15->Protocol->TypeStatsIndex;
      }
      uVar23 = uVar21;
      if ((int)uVar14 < (pFVar8->TypeStatsData).ArrayNum) {
        uVar23 = ~uVar14 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      pFVar1 = (pFVar8->TypeStatsData).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x80 + 0x7c;
      *(uint *)pFVar1 = *(int *)pFVar1 + local_c4;
    }
    if (local_c0 != 0xffffffff) {
      uVar14 = this_00->BufferBitPosition;
      if (this_00->OverflowBitCount != 0) {
        uVar14 = uVar21;
      }
      FNetTrace::EndPacketContentEvent(local_68,local_c0,uVar14);
    }
  }
LAB_14429c46c:
  FNetBitStreamWriter::WriteBits(this_00,0,1);
  return this_00->OverflowBitCount == 0;
}

// WritePendingExports @ 14429cd30

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

EWriteExportsResult __thiscall
UE::Net::Private::FObjectReferenceCache::WritePendingExports
          (FObjectReferenceCache *this,FNetSerializationContext *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  ENetTokenAuthority EVar5;
  FNetExportContext *this_00;
  FNetBitStreamWriter *this_01;
  FNetBitStreamWriter *this_02;
  FBatchExports *pFVar6;
  FInternalNetSerializationContext *pFVar7;
  FAcknowledgedExports *pFVar8;
  ForElementType<FSetElementId> FVar9;
  longlong lVar10;
  ForElementType<UE::Net::FNetRefHandle> FVar11;
  FNetStatsContext *pFVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  EWriteExportsResult EVar16;
  uint uVar17;
  uint uVar18;
  FReplicatedObjectData *pFVar19;
  uint uVar20;
  int iVar21;
  ForElementType<UE::Net::FNetRefHandle> FVar22;
  uint uVar23;
  ForElementType<FNetTracePacketContentEvent> FVar24;
  FNetTraceCollector *pFVar25;
  ForElementType<UE::Net::FNetToken> FVar26;
  FNetTraceCollector *pFVar27;
  ForElementType<FSetElementId> FVar28;
  ulonglong uVar29;
  ForElementType<UE::Net::FNetRefHandle> FVar30;
  ForElementType<UE::Net::FNetToken> FVar31;
  ForElementType<UE::Net::FNetObjectReference> FVar32;
  ForElementType<UE::Net::FNetObjectReference> FVar33;
  int local_c8;
  uint local_c4;
  uint local_b8;
  undefined4 uStack_6c;
  FNetRefHandle_u_0 local_68;
  undefined8 uStack_60;
  TArrayView<UE::Net::FNetObjectReference_const_,int> local_58;
  
  this_00 = param_1->ExportContext;
  this_01 = param_1->BitStreamWriter;
  if ((this_00 == (FNetExportContext *)0x0) ||
     (((this_00->BatchExports->ReferencesPendingExportInCurrentBatch).ArrayNum < 1 &&
      ((this_00->BatchExports->NetTokensPendingExportInCurrentBatch).ArrayNum < 1)))) {
    return NoExports;
  }
  pFVar25 = (FNetTraceCollector *)0x0;
  if (1 < GNetTraceRuntimeVerbosity) {
    pFVar25 = param_1->TraceCollector;
  }
  local_b8 = 0xffffffff;
  if (pFVar25 != (FNetTraceCollector *)0x0) {
    uVar15 = this_01->BufferBitPosition;
    if (this_01->OverflowBitCount != 0) {
      uVar15 = 0;
    }
    local_b8 = FNetTrace::BeginPacketContentEvent(pFVar25,NameId,uVar15);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Exports = CreatePersistentNetDebugName(L"Exports",7);
      _Init_thread_footer(&::_TSS0);
    }
    uVar15 = FNetTrace::TraceName(Exports);
    FVar24 = (pFVar25->Events).AllocatorInstance.SecondaryData;
    if (FVar24 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar24 = (ForElementType<FNetTracePacketContentEvent>)&pFVar25->Events;
    }
    *(uint *)((longlong)FVar24 + (ulonglong)local_b8 * 0x10) = uVar15;
  }
  this_02 = param_1->BitStreamWriter;
  local_c8 = 0;
  uVar20 = this_02->BufferBitPosition - this_02->BufferBitStartOffset;
  uVar15 = this_01->BufferBitPosition;
  uVar3 = this_01->BufferBitStartOffset;
  pFVar6 = this_00->BatchExports;
  iVar4 = (pFVar6->ReferencesPendingExportInCurrentBatch).ArrayNum;
  FVar32 = (pFVar6->ReferencesPendingExportInCurrentBatch).AllocatorInstance.SecondaryData;
  if (FVar32 == (ForElementType<UE::Net::FNetObjectReference>)0x0) {
    FVar32 = (ForElementType<UE::Net::FNetObjectReference>)
             &pFVar6->ReferencesPendingExportInCurrentBatch;
  }
  if ((iVar4 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    EVar16 = (*pcVar13)();
    return EVar16;
  }
  uVar23 = 0;
  pFVar7 = param_1->InternalContext;
  if (pFVar7 != (FInternalNetSerializationContext *)0x0) {
    uVar23 = *(uint *)&pFVar7->field_0x30;
    pFVar7->bInlineObjectReferenceExports = 1;
    uVar23 = uVar23 & 2;
  }
  pFVar6 = this_00->BatchExports;
  iVar21 = (pFVar6->NetTokensPendingExportInCurrentBatch).ArrayNum;
  FVar26 = (pFVar6->NetTokensPendingExportInCurrentBatch).AllocatorInstance.SecondaryData;
  if (FVar26 == (ForElementType<UE::Net::FNetToken>)0x0) {
    FVar26 = (ForElementType<UE::Net::FNetToken>)&pFVar6->NetTokensPendingExportInCurrentBatch;
  }
  if ((iVar21 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    EVar16 = (*pcVar13)();
    return EVar16;
  }
  pFVar27 = (FNetTraceCollector *)0x0;
  if (1 < GNetTraceRuntimeVerbosity) {
    pFVar27 = param_1->TraceCollector;
  }
  local_c4 = 0xffffffff;
  if (pFVar27 != (FNetTraceCollector *)0x0) {
    uVar17 = this_01->BufferBitPosition;
    if (this_01->OverflowBitCount != 0) {
      uVar17 = 0;
    }
    local_c4 = FNetTrace::BeginPacketContentEvent(pFVar27,NameId,uVar17);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      NetTokenExports = CreatePersistentNetDebugName(L"NetTokenExports",0xf);
      _Init_thread_footer(&::_TSS0);
    }
    uVar17 = FNetTrace::TraceName(NetTokenExports);
    FVar24 = (pFVar27->Events).AllocatorInstance.SecondaryData;
    if (FVar24 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar24 = (ForElementType<FNetTracePacketContentEvent>)&pFVar27->Events;
    }
    *(uint *)((longlong)FVar24 + (ulonglong)local_c4 * 0x10) = uVar17;
  }
  FVar31 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar26 + (longlong)iVar21 * 4);
  EVar5 = (this->NetTokenStore->Params).Authority;
  for (; FVar26 != FVar31; FVar26 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar26 + 4)) {
    if ((((*(uint *)FVar26 & 0x800000) == 0) || (EVar5 == Authority)) &&
       (bVar14 = FNetExportContext::IsExported(this_00,(FNetToken)*(FNetToken_u_0 *)FVar26), !bVar14
       )) {
      FNetBitStreamWriter::WriteBits(this_01,1,1);
      FNetTokenStore::InternalWriteNetToken(param_1,(FNetToken)*(FNetToken_u_0 *)FVar26,true);
      FNetTokenStore::WriteTokenData
                (this->NetTokenStore,param_1,(FNetToken)*(FNetToken_u_0 *)FVar26);
      FNetExportContext::AddExported(this_00,(FNetToken)*(FNetToken_u_0 *)FVar26);
    }
  }
  if (local_c4 != 0xffffffff) {
    uVar17 = this_01->BufferBitPosition;
    if (this_01->OverflowBitCount != 0) {
      uVar17 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar27,local_c4,uVar17);
  }
  EVar16 = BitStreamOverflow;
  FNetBitStreamWriter::WriteBits(this_01,0,1);
  FVar33 = FVar32;
  do {
    if (FVar33 == (ForElementType<UE::Net::FNetObjectReference>)
                  ((longlong)iVar4 * 0x10 + (longlong)FVar32)) {
      pFVar12 = param_1->NetStatsContext;
      if (pFVar12 != (FNetStatsContext *)0x0) {
        pFVar19 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                  ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                                *)&pFVar12->NetRefHandleManager->ReplicatedObjectData,param_2);
        if ((pFVar12->bShouldIncludeSubObjectWithRoot != false) &&
           (pFVar19->SubObjectRootIndex != 0)) {
          pFVar19 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                    ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                                  *)&pFVar12->NetRefHandleManager->ReplicatedObjectData,
                                 pFVar19->SubObjectRootIndex);
        }
        if (pFVar19->Protocol == (FReplicationProtocol *)0x0) {
          uVar17 = 1;
        }
        else {
          uVar17 = pFVar19->Protocol->TypeStatsIndex;
        }
        uVar18 = 0;
        if ((int)uVar17 < (pFVar12->TypeStatsData).ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar13 = (code *)swi(3);
          EVar16 = (*pcVar13)();
          return EVar16;
        }
        pFVar2 = (pFVar12->TypeStatsData).AllocatorInstance.Data +
                 (longlong)(int)uVar17 * 0x80 + 0x7c;
        *(int *)pFVar2 = *(int *)pFVar2 + local_c8;
      }
      FNetBitStreamWriter::WriteBits(this_01,0,1);
      if (pFVar7 != (FInternalNetSerializationContext *)0x0) {
        pFVar7->bInlineObjectReferenceExports = 0;
        *(uint *)&pFVar7->field_0x30 = *(uint *)&pFVar7->field_0x30 | uVar23;
      }
      local_58._12_4_ = uStack_6c;
      local_58.ArrayNum = iVar4;
      local_58.DataPtr = (FNetObjectReference *)FVar32;
      WriteMustBeMappedExports(this,param_1,param_2,&local_58);
      pFVar6 = this_00->BatchExports;
      piVar1 = &(pFVar6->ReferencesPendingExportInCurrentBatch).ArrayMax;
      (pFVar6->ReferencesPendingExportInCurrentBatch).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
                  (0x10,8,0,&(pFVar6->ReferencesPendingExportInCurrentBatch).AllocatorInstance,0,
                   piVar1);
      }
      pFVar6 = this_00->BatchExports;
      piVar1 = &(pFVar6->NetTokensPendingExportInCurrentBatch).ArrayMax;
      (pFVar6->NetTokensPendingExportInCurrentBatch).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                  (4,4,0,&(pFVar6->NetTokensPendingExportInCurrentBatch).AllocatorInstance,0,piVar1)
        ;
      }
      if (this_01->OverflowBitCount == 0) {
        if ((this_01->BufferBitPosition - this_01->BufferBitStartOffset) - (uVar15 - uVar3) < 3) {
          FNetBitStreamWriter::Seek(this_02,uVar20);
          EVar16 = NoExports;
        }
        else {
          EVar16 = WroteExports;
        }
      }
      if (this_02->OverflowBitCount != 0) {
        FNetBitStreamWriter::Seek(this_02,uVar20);
      }
      if (local_b8 != 0xffffffff) {
        uVar15 = this_01->BufferBitPosition;
        if (this_01->OverflowBitCount != 0) {
          uVar15 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar25,local_b8,uVar15);
      }
      return EVar16;
    }
    uVar17 = *(uint *)((longlong)FVar33 + 8);
    if ((uVar17 & 0xfffff) == 0) {
LAB_14429d1d4:
      if ((this->bIsAuthority != 0) && ((*(uchar *)((longlong)FVar33 + 0xc) & 1) != 0)) {
        pFVar8 = this_00->AcknowledgedExports;
        uVar29 = *(ulonglong *)FVar33 & 0x3fffffffffffff;
        if (*(int *)&(pFVar8->AcknowledgedExportedHandles).Elements.field_0x8 !=
            *(int *)&(pFVar8->AcknowledgedExportedHandles).Elements.field_0x34) {
          FVar9 = (pFVar8->AcknowledgedExportedHandles).Hash.SecondaryData;
          FVar28 = (ForElementType<FSetElementId>)&(pFVar8->AcknowledgedExportedHandles).Hash;
          if (FVar9 != (ForElementType<FSetElementId>)0x0) {
            FVar28 = FVar9;
          }
          iVar21 = *(int *)((longlong)FVar28 +
                           ((ulonglong)((pFVar8->AcknowledgedExportedHandles).HashSize - 1) &
                           (uVar29 >> 0x20) * 0x17 + uVar29) * 4);
          if (iVar21 != -1) {
            lVar10 = *(longlong *)&(pFVar8->AcknowledgedExportedHandles).Elements;
            do {
              if ((*(ulonglong *)(lVar10 + (longlong)iVar21 * 0x10) & 0x3fffffffffffff) == uVar29)
              goto LAB_14429d312;
              iVar21 = *(int *)(lVar10 + 8 + (longlong)iVar21 * 0x10);
            } while (iVar21 != -1);
          }
        }
        FVar11 = (ForElementType<UE::Net::FNetRefHandle>)this_00->BatchExports;
        FVar30 = FVar11;
        if (*(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar11 + 0x100) !=
            (ForElementType<UE::Net::FNetRefHandle>)0x0) {
          FVar30 = *(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar11 + 0x100);
        }
        FVar11 = (ForElementType<UE::Net::FNetRefHandle>)
                 ((longlong)FVar30 + (longlong)*(int *)((longlong)FVar11 + 0x108) * 8);
        if (FVar30 != FVar11) {
          FVar22 = FVar30;
          do {
            if ((*(ulonglong *)FVar22 & 0x3fffffffffffff) ==
                (*(ulonglong *)FVar33 & 0x3fffffffffffff)) {
              if ((int)((longlong)FVar22 - (longlong)FVar30 >> 3) != -1) goto LAB_14429d312;
              break;
            }
            FVar22 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar22 + 8);
          } while (FVar22 != FVar11);
        }
        goto LAB_14429d2b2;
      }
    }
    else {
      pFVar8 = this_00->AcknowledgedExports;
      if (*(int *)&(pFVar8->AcknowledgedExportedNetTokens).Elements.field_0x8 !=
          *(int *)&(pFVar8->AcknowledgedExportedNetTokens).Elements.field_0x34) {
        FVar9 = (pFVar8->AcknowledgedExportedNetTokens).Hash.SecondaryData;
        FVar28 = (ForElementType<FSetElementId>)&(pFVar8->AcknowledgedExportedNetTokens).Hash;
        if (FVar9 != (ForElementType<FSetElementId>)0x0) {
          FVar28 = FVar9;
        }
        iVar21 = *(int *)((longlong)FVar28 +
                         (ulonglong)((pFVar8->AcknowledgedExportedNetTokens).HashSize - 1U & uVar17)
                         * 4);
        if (iVar21 != -1) {
          lVar10 = *(longlong *)&(pFVar8->AcknowledgedExportedNetTokens).Elements;
          do {
            if (*(uint *)(lVar10 + (longlong)iVar21 * 0xc) == uVar17) goto LAB_14429d1d4;
            iVar21 = *(int *)(lVar10 + 4 + (longlong)iVar21 * 0xc);
          } while (iVar21 != -1);
        }
      }
      pFVar6 = this_00->BatchExports;
      FVar26 = (pFVar6->NetTokensExportedInCurrentBatch).AllocatorInstance.SecondaryData;
      FVar31 = (ForElementType<UE::Net::FNetToken>)&pFVar6->NetTokensExportedInCurrentBatch;
      if (FVar26 != (ForElementType<UE::Net::FNetToken>)0x0) {
        FVar31 = FVar26;
      }
      for (FVar26 = FVar31;
          FVar26 != (ForElementType<UE::Net::FNetToken>)
                    ((longlong)FVar31 +
                    (longlong)(pFVar6->NetTokensExportedInCurrentBatch).ArrayNum * 4);
          FVar26 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar26 + 4)) {
        if (*(uint *)FVar26 == uVar17) {
          if ((int)((longlong)FVar26 - (longlong)FVar31 >> 2) != -1) goto LAB_14429d1d4;
          break;
        }
      }
LAB_14429d2b2:
      FNetBitStreamWriter::WriteBits(this_01,1,1);
      local_68.Value = *(ulong64 *)FVar33;
      uStack_60 = *(undefined8 *)((longlong)FVar33 + 8);
      WriteFullReference(this,param_1,(FNetObjectReference *)&local_68._s_0);
      local_c8 = local_c8 + 1;
    }
LAB_14429d312:
    FVar33 = (ForElementType<UE::Net::FNetObjectReference>)((longlong)FVar33 + 0x10);
  } while( true );
}

// WriteReference @ 14429d610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectReferenceCache::WriteReference
          (FObjectReferenceCache *this,FNetSerializationContext *param_1,
          FNetObjectReference *param_2)

{
  FNetToken_u_0_s_0 FVar1;
  FNetBitStreamWriter *pFVar2;
  FNetRefHandle_u_0 FVar3;
  FNetBitStreamWriter *pFVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  FNetRefHandle_u_0 FVar8;
  longlong lVar9;
  FNetRefHandle_u_0 FVar10;
  FNetRefHandle_u_0 FVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  FNetRefHandle_u_0 FVar14;
  FNetRefHandle_u_0 this_00;
  bool bVar15;
  uint local_res18;
  uint local_res20;
  FString local_60;
  FString local_50;
  
  FVar11.Value = 0;
  local_res18 = 0xffffffff;
  FVar14.Value = FVar11.Value;
  if (GNetTraceRuntimeVerbosity != 0) {
    FVar14 = (FNetRefHandle_u_0)param_1->TraceCollector;
  }
  pFVar2 = param_1->BitStreamWriter;
  if (FVar14.Value != 0) {
    uVar6 = pFVar2->BufferBitPosition;
    if (pFVar2->OverflowBitCount != 0) {
      uVar6 = 0;
    }
    local_res18 = FNetTrace::BeginPacketContentEvent((FNetTraceCollector *)FVar14,NameId,uVar6);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      NetObjectReference = CreatePersistentNetDebugName(L"NetObjectReference",0x12);
      _Init_thread_footer(&::_TSS0);
    }
    uVar6 = FNetTrace::TraceName(NetObjectReference);
    lVar9 = *(longlong *)(FVar14.Value + 0x1118);
    if (*(longlong *)(FVar14.Value + 0x1118) == 0) {
      lVar9 = FVar14.Value + 0x118;
    }
    *(uint *)(lVar9 + (ulonglong)local_res18 * 0x10) = uVar6;
  }
  FVar3._s_0 = (FNetRefHandle_u_0_s_0)(param_2->RefHandle).field0_0x0.Value;
  pFVar4 = param_1->BitStreamWriter;
  uVar12 = (ulonglong)FVar3 & 0x3fffffffffffff;
  local_res20 = 0xffffffff;
  this_00.Value = FVar11.Value;
  if (GNetTraceRuntimeVerbosity != 0) {
    this_00 = (FNetRefHandle_u_0)param_1->TraceCollector;
  }
  if (this_00.Value != 0) {
    uVar6 = pFVar4->BufferBitPosition;
    if (pFVar4->OverflowBitCount != 0) {
      uVar6 = 0;
    }
    local_res20 = FNetTrace::BeginPacketContentEvent((FNetTraceCollector *)this_00,Object,uVar6);
    lVar9 = *(longlong *)(this_00.Value + 0x1118);
    if (*(longlong *)(this_00.Value + 0x1118) == 0) {
      lVar9 = this_00.Value + 0x118;
    }
    *(ulonglong *)(lVar9 + (ulonglong)local_res20 * 0x10) = uVar12;
    if (uVar12 != 0) {
      FNetTraceCollector::AddReferencedObjectId((FNetTraceCollector *)this_00,uVar12);
    }
  }
  FVar1 = (param_2->PathToken).field0_0x0._s_0;
  bVar15 = (param_2->PathToken).field0_0x0.Index != 0;
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)bVar15,1);
  if (bVar15) {
    WriteNetRefHandle(param_1,(FNetRefHandle)FVar3);
    FNetTokenStore::InternalWriteNetToken(param_1,(FNetToken)FVar1,false);
    goto LAB_14429d9da;
  }
  if (FVar3 == 0) {
LAB_14429d91b:
    if ((5 < (byte)LogIrisReferences._0_1_) && (FVar3 != 0)) {
      if ((ulonglong)FVar3 < 0x40000000000000) {
        ::FString::PrintfImpl(&local_50,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        if (((ulonglong)FVar3 >> 0x36 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("ReplicationSystemId != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                                ,0x2b,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ::FString::PrintfImpl(&local_50,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FVar10.Value = FVar11.Value;
    if (*(int *)&(this->ReferenceHandleToCachedReference).field_0x8 !=
        *(int *)&(this->ReferenceHandleToCachedReference).field_0x34) {
      puVar13 = *(undefined1 **)&(this->ReferenceHandleToCachedReference).field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(this->ReferenceHandleToCachedReference).field_0x38;
      }
      iVar7 = *(int *)(puVar13 +
                      ((uVar12 >> 0x20) * 0x17 + uVar12 &
                      (ulonglong)(*(int *)&(this->ReferenceHandleToCachedReference).field_0x48 - 1))
                      * 4);
      if (iVar7 != -1) {
        do {
          FVar10.Value = (longlong)iVar7 * 0x40 +
                         *(longlong *)&this->ReferenceHandleToCachedReference;
          if ((*(ulonglong *)FVar10 & 0x3fffffffffffff) == uVar12) break;
          iVar7 = *(int *)(FVar10.Value + 0x38);
          FVar10.Value = FVar11.Value;
        } while (iVar7 != -1);
      }
    }
    FVar8.Value = FVar10.Value + 8;
    if (FVar10.Value == 0) {
      FVar8.Value = FVar11.Value;
    }
    if (FVar8.Value == 0) goto LAB_14429d91b;
    FVar11._s_0 = FVar3._s_0;
    if (6 < (byte)LogIrisReferences._0_1_) {
      if ((ulonglong)FVar3 < 0x40000000000000) {
        ::FString::PrintfImpl(&local_60,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        if (((ulonglong)FVar3 >> 0x36 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("ReplicationSystemId != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                                ,0x2b,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ::FString::PrintfImpl(&local_60,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
  }
  WriteNetRefHandle(param_1,(FNetRefHandle)FVar11._s_0);
LAB_14429d9da:
  if (local_res20 != 0xffffffff) {
    uVar6 = pFVar4->BufferBitPosition;
    if (pFVar4->OverflowBitCount != 0) {
      uVar6 = 0;
    }
    FNetTrace::EndPacketContentEvent((FNetTraceCollector *)this_00,local_res20,uVar6);
  }
  if (local_res18 != 0xffffffff) {
    uVar6 = pFVar2->BufferBitPosition;
    if (pFVar2->OverflowBitCount != 0) {
      uVar6 = 0;
    }
    FNetTrace::EndPacketContentEvent((FNetTraceCollector *)FVar14,local_res18,uVar6);
  }
  return;
}

// ~FObjectReferenceCache @ 1442f89c0

void __thiscall
UE::Net::Private::FObjectReferenceCache::~FObjectReferenceCache(FObjectReferenceCache *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->PendingAsyncLoadRequests).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingAsyncLoadRequests).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingAsyncLoadRequests);
  *(undefined4 *)&(this->QueuedBatchObjectReferences).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QueuedBatchObjectReferences).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QueuedBatchObjectReferences);
  *(undefined4 *)&(this->HandleToDynamicOuter).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HandleToDynamicOuter).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandleToDynamicOuter);
  *(undefined4 *)&(this->ReferenceHandleToCachedReference).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ReferenceHandleToCachedReference).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReferenceHandleToCachedReference);
  *(undefined4 *)&(this->ObjectToNetReferenceHandle).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectToNetReferenceHandle).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator() @ 1504b57e0

bool __thiscall
`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6150983300673435626>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6150983300673435626>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b5d80

bool __thiscall
`UE::Net::Private::FObjectReferenceCache::AddPreRegisteredReference'::__l10::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6150983300673437107>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6150983300673437107>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b5dc0

bool __thiscall
`UE::Net::Private::FObjectReferenceCache::PreRegisterObjectReferenceHandle'::__l10::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6150983300673437419>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6150983300673437419>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b5e00

bool __thiscall
`UE::Net::Private::FObjectReferenceCache::ShouldAsyncLoad'::__l10::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6150983300673435440>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6150983300673435440>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504b6e40

bool __thiscall
`UE::Net::Private::FObjectReferenceCache::RemoveReference'::__l31::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6150983300673437077>);
  if (bVar2) {
    if ((**(ulonglong **)this == 0) || (**(ulonglong **)this < 0x40000000000000)) {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6150983300673437077>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b6f2f;
    }
  }
  bVar2 = false;
LAB_1504b6f2f:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b72a0

bool __thiscall
`UE::Net::Private::FObjectReferenceCache::ReadReference'::__l61::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6150983300673436045>);
  if (bVar2) {
    if ((**(ulonglong **)this == 0) || (**(ulonglong **)this < 0x40000000000000)) {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6150983300673436045>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b7360;
    }
  }
  bVar2 = false;
LAB_1504b7360:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b7830

bool __thiscall
`UE::Net::Private::FObjectReferenceCache::RemoveReference'::__l148::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6150983300673436998>);
  if (bVar2) {
    if ((**(ulonglong **)this == 0) || (**(ulonglong **)this < 0x40000000000000)) {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6150983300673436998>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b78f0;
    }
  }
  bVar2 = false;
LAB_1504b78f0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

