// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 127

// StaticClass @ 1442ee4f0

UClass * __cdecl UReplicationSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationSystem",
               &Z_Registration_Info_UClass_UReplicationSystem.InnerSingleton,
               StaticRegisterNativesUReplicationSystem,0x58,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UReplicationSystem>,
               InternalVTableHelperCtorCaller<UReplicationSystem>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationSystem.InnerSingleton;
}

// UReplicationSystem @ 1442f6f60

UReplicationSystem * __thiscall UReplicationSystem::UReplicationSystem(UReplicationSystem *this)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this);
  this->Id = 0xffffffff;
  this->PIEInstanceID = -1;
  this->_padding_ = (longlong)&___7UReplicationSystem__6B_;
  this->bIsServer = 0;
  this->bDoCollectGarbage = 0;
  this->bAllowObjectReplication = 0;
  (this->Impl).Ptr = (FReplicationSystemImpl *)0x0;
  (this->PostGarbageCollectHandle).ID = 0;
  (this->ReplicationBridge).field0_0x0.DebugPtr = (UObjectReplicationBridge *)0x0;
  this->ElapsedTime = 0.0;
  return this;
}

// UReplicationSystem @ 1442f6fb0

UReplicationSystem * __thiscall
UReplicationSystem::UReplicationSystem(UReplicationSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UReplicationSystem__6B_;
  (this->Impl).Ptr = (FReplicationSystemImpl *)0x0;
  (this->PostGarbageCollectHandle).ID = 0;
  (this->ReplicationBridge).field0_0x0.DebugPtr = (UObjectReplicationBridge *)0x0;
  this->ElapsedTime = 0.0;
  return this;
}

// ~UReplicationSystem @ 1442f9590

void __thiscall UReplicationSystem::~UReplicationSystem(UReplicationSystem *this)

{
  FReplicationSystemImpl *pFVar1;
  
  this->_padding_ = (longlong)&___7UReplicationSystem__6B_;
  pFVar1 = (this->Impl).Ptr;
  if (pFVar1 != (FReplicationSystemImpl *)0x0) {
    (**(code **)&pFVar1[-1].MetricNameAvgHugeObjectSendQueue.Number)
              (&pFVar1[-1].MetricNameAvgHugeObjectSendQueue.Number);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddConnection @ 1442fae80

void __thiscall UReplicationSystem::AddConnection(UReplicationSystem *this,uint param_1)

{
  UE::Net::Private::FReplicationSystemImpl::AddConnection((this->Impl).Ptr,param_1);
  return;
}

// AddExclusionFilterGroup @ 1442fae90

bool __thiscall
UReplicationSystem::AddExclusionFilterGroup(UReplicationSystem *this,FNetObjectGroupHandle param_1)

{
  FReplicationSystemImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 local_res18 [16];
  
  bVar3 = IsValidGroup(this,param_1);
  if (bVar3) {
    pFVar1 = (this->Impl).Ptr;
    if ((pFVar1->ReplicationSystemInternal).bBlockFilterChanges != false) {
      `UReplicationSystem::AddExclusionFilterGroup'::__l8::<lambda_1>::operator()(local_res18);
      return false;
    }
    bVar3 = UE::Net::Private::FReplicationFiltering::AddExclusionFilterGroup
                      (&(pFVar1->ReplicationSystemInternal).Filtering,param_1);
    return bVar3;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4132542164125088003>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                     ,0x6fd,"IsValidGroup(GroupHandle)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// AddInclusionFilterGroup @ 1442faf30

bool __thiscall
UReplicationSystem::AddInclusionFilterGroup(UReplicationSystem *this,FNetObjectGroupHandle param_1)

{
  FReplicationSystemImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 local_res18 [16];
  
  bVar3 = IsValidGroup(this,param_1);
  if (bVar3) {
    pFVar1 = (this->Impl).Ptr;
    if ((pFVar1->ReplicationSystemInternal).bBlockFilterChanges != false) {
      `UReplicationSystem::AddInclusionFilterGroup'::__l8::<lambda_1>::operator()(local_res18);
      return false;
    }
    bVar3 = UE::Net::Private::FReplicationFiltering::AddInclusionFilterGroup
                      (&(pFVar1->ReplicationSystemInternal).Filtering,param_1);
    return bVar3;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4132542164125087985>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                     ,0x70f,"IsValidGroup(GroupHandle)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// AddReferencedObjects @ 1442fafd0

void __cdecl UReplicationSystem::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UReplicationSystem>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    if (*(longlong *)(param_1 + 1) != 0) {
      UE::Net::Private::FNetRefHandleManager::AddReferencedObjects
                ((FNetRefHandleManager *)(*(longlong *)(param_1 + 1) + 0x160),param_2);
      UE::Net::Private::FObjectReferenceCache::AddReferencedObjects
                ((FObjectReferenceCache *)(*(longlong *)(param_1 + 1) + 0x1078),param_2);
    }
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar3 = GetTypeName<UReplicationSystem>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// AddToGroup @ 1442fb300

void __thiscall
UReplicationSystem::AddToGroup
          (UReplicationSystem *this,FNetObjectGroupHandle param_1,FNetRefHandle param_2)

{
  FNetRefHandleManager *this_00;
  FReplicationSystemImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNetRefHandle_u_0 local_res18;
  FLLMScope local_res20 [2];
  uint local_38;
  FName local_34;
  FMemScope local_28;
  FNetRefHandleManager *local_20;
  uint *local_18;
  FNetRefHandle_u_0 *local_10;
  
  local_res18 = param_2.field0_0x0;
  bVar3 = IsValidGroup(this,param_1);
  if (bVar3) {
    FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
    local_34 = LLMTagDeclaration_Iris.UniqueName;
    FMemScope::FMemScope(&local_28,&local_34,true);
    pFVar1 = (this->Impl).Ptr;
    this_00 = &(pFVar1->ReplicationSystemInternal).NetRefHandleManager;
    local_38 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                         (this_00,(FNetRefHandle)local_res18._s_0);
    if ((pFVar1->ReplicationSystemInternal).bBlockFilterChanges == false) {
      if (local_38 != 0) {
        UE::Net::Private::FNetObjectGroups::AddToGroup
                  (&(pFVar1->ReplicationSystemInternal).Groups,param_1,local_38);
        UE::Net::Private::FReplicationFiltering::NotifyObjectAddedToGroup
                  (&(pFVar1->ReplicationSystemInternal).Filtering,param_1,local_38);
      }
    }
    else {
      local_18 = &local_38;
      local_10 = &local_res18;
      local_20 = this_00;
      `UReplicationSystem::AddToGroup'::__l8::<lambda_1>::operator()(&local_20);
    }
    FMemScope::~FMemScope(&local_28);
    FLLMScope::~FLLMScope(local_res20);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4132542164125088161>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                       ,0x65f,"IsValidGroup(GroupHandle)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ClearCullDistanceOverride @ 1442fc7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UReplicationSystem::ClearCullDistanceOverride(UReplicationSystem *this,FNetRefHandle param_1)

{
  FReplicationSystemImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FObjectInfo *pFVar7;
  FWorldLocations *this_00;
  uint uVar8;
  ulonglong uVar9;
  FString local_48 [2];
  
  pFVar1 = (this->Impl).Ptr;
  uVar5 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&(pFVar1->ReplicationSystemInternal).NetRefHandleManager,param_1);
  if (uVar5 == 0) {
    return;
  }
  this_00 = &(pFVar1->ReplicationSystemInternal).WorldLocations;
  if (((pFVar1->ReplicationSystemInternal).WorldLocations.bLockdownDirtyList != false) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5986202542445428586>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\WorldLocations.cpp"
                         ,0x96,"!bLockdownDirtyList"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this_00->ValidInfoIndexes).Storage.AllocatorInstance.Data;
  if (((pFVar1->ReplicationSystemInternal).WorldLocations.ValidInfoIndexes.BitCount <= uVar5) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = (ulonglong)(uVar5 >> 5);
  uVar8 = 1 << ((byte)uVar5 & 0x1f);
  if ((*(uint *)(pFVar2 + uVar9 * 4) & uVar8) != 0) {
    iVar6 = UE::Net::FWorldLocations::GetStorageIndex(this_00,uVar5);
    pFVar7 = TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
                           *)&(pFVar1->ReplicationSystemInternal).WorldLocations.StoredObjectInfo,
                          iVar6);
    if (__real_7f7fffff != pFVar7->CullDistanceOverride) {
      iVar6 = UE::Net::FWorldLocations::GetStorageIndex(this_00,uVar5);
      pFVar7 = TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
               ::operator[]((TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
                             *)&(pFVar1->ReplicationSystemInternal).WorldLocations.StoredObjectInfo,
                            iVar6);
      pFVar7->CullDistanceOverride = 3.4028235e+38;
      pFVar2 = (pFVar1->ReplicationSystemInternal).WorldLocations.ObjectsWithDirtyInfo.Storage.
               AllocatorInstance.Data;
      if (((pFVar1->ReplicationSystemInternal).WorldLocations.ObjectsWithDirtyInfo.BitCount <= uVar5
          ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2ac,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)(pFVar2 + uVar9 * 4) = ~uVar8 & *(uint *)(pFVar2 + uVar9 * 4) | uVar8;
      bVar4 = true;
      goto LAB_1442fc90d;
    }
  }
  bVar4 = false;
LAB_1442fc90d:
  if ((5 < (byte)LogIrisNetCull._0_1_) && (bVar4)) {
    UE::Net::FWorldLocations::GetCullDistance
              (&(((this->Impl).Ptr)->ReplicationSystemInternal).WorldLocations,uVar5);
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
              (&(((this->Impl).Ptr)->ReplicationSystemInternal).NetRefHandleManager,local_48,param_1
              );
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisNetCull);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CloseDataStream @ 1442fcc50

void __thiscall
UReplicationSystem::CloseDataStream(UReplicationSystem *this,uint param_1,FName param_2)

{
  FReplicationSystemImpl *pFVar1;
  bool bVar2;
  FReplicationConnection *pFVar3;
  UDataStreamManager *this_00;
  uint *local_res8;
  uint local_res10 [2];
  
  pFVar1 = (this->Impl).Ptr;
  local_res10[0] = param_1;
  if (((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.BitCount <= param_1) ||
     ((*(uint *)((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.Storage.
                 AllocatorInstance.Data + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) ==
      0)) {
    local_res8 = local_res10;
    bVar2 = `UReplicationSystem::CloseDataStream'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar2) {
      return;
    }
  }
  pFVar3 = UE::Net::Private::FReplicationConnections::GetConnection
                     (&(pFVar1->ReplicationSystemInternal).Connections,local_res10[0]);
  if (pFVar3 == (FReplicationConnection *)0x0) {
    this_00 = (UDataStreamManager *)0x0;
  }
  else {
    this_00 = (UDataStreamManager *)FWeakObjectPtr::Get(&(pFVar3->DataStreamManager).WeakPtr);
    if (this_00 != (UDataStreamManager *)0x0) goto LAB_1442fcce3;
  }
  local_res8 = local_res10;
  bVar2 = `UReplicationSystem::CloseDataStream'::__l6::<lambda_2>::operator()(&local_res8);
  if (!bVar2) {
    return;
  }
LAB_1442fcce3:
  UDataStreamManager::CloseStream(this_00,param_2);
  return;
}

// CollectGarbage @ 1442fce20

void __thiscall UReplicationSystem::CollectGarbage(UReplicationSystem *this)

{
  uint uVar1;
  bool bVar2;
  
  if (!__CsvProfilerStat1101) {
    FCsvProfilerTrace::OutputInlineStat("ReplicationSystem_CollectGarbage",_GCsvCategory_Iris.Index)
    ;
    __CsvProfilerStat1101 = true;
  }
  uVar1 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationSystem_CollectGarbage",_GCsvCategory_Iris.Index,
             "CSV_ReplicationSystem_CollectGarbage");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1101,"ReplicationSystem_CollectGarbage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x44d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1101);
  }
  UReplicationBridge::CallPruneStaleObjects
            ((UReplicationBridge *)(((this->Impl).Ptr)->ReplicationSystemInternal).ReplicationBridge
            );
  UE::Net::Private::FReplicationStateDescriptorRegistry::PruneStaleDescriptors
            (&(((this->Impl).Ptr)->ReplicationSystemInternal).ReplicationStateDescriptorRegistry);
  this->bDoCollectGarbage = 0;
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationSystem_CollectGarbage",uVar1);
  return;
}

// CollectNetMetrics @ 1442fd230

void __thiscall UReplicationSystem::CollectNetMetrics(UReplicationSystem *this,FNetMetrics *param_1)

{
  UE::Net::Private::FReplicationSystemImpl::CollectNetMetrics((this->Impl).Ptr,param_1);
  return;
}

// CreateGroup @ 1442fe030

FNetObjectGroupHandle __thiscall
UReplicationSystem::CreateGroup(UReplicationSystem *this,FName param_1)

{
  FLLMScope local_res8 [2];
  FName local_res10 [2];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
  local_res10[0] = LLMTagDeclaration_Iris.UniqueName;
  FMemScope::FMemScope(&local_res20,local_res10,true);
  UE::Net::Private::FNetObjectGroups::CreateGroup
            (&(((this->Impl).Ptr)->ReplicationSystemInternal).Groups,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return (FNetObjectGroupHandle)param_1;
}

// DestroyGroup @ 144301220

void __thiscall
UReplicationSystem::DestroyGroup(UReplicationSystem *this,FNetObjectGroupHandle param_1)

{
  FReplicationSystemImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsValidGroup(this,param_1);
  if ((bVar3) || ((param_1.field0_0x0._0_4_ & 0xffffff) - 1 < 3)) {
    pFVar1 = (this->Impl).Ptr;
    UE::Net::Private::FReplicationFiltering::RemoveGroupFilter
              (&(pFVar1->ReplicationSystemInternal).Filtering,param_1);
    UE::Net::Private::FReplicationFiltering::RemoveSubObjectFilter
              (&(pFVar1->ReplicationSystemInternal).Filtering,param_1);
    UE::Net::Private::FNetObjectGroups::DestroyGroup
              (&(pFVar1->ReplicationSystemInternal).Groups,param_1);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4132542164125088045>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                       ,0x6d3,"IsValidGroup(GroupHandle) || GroupHandle.IsReservedNetObjectGroup()")
    ;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// FindGroup @ 144302430

FNetObjectGroupHandle __thiscall
UReplicationSystem::FindGroup(UReplicationSystem *this,FName param_1)

{
  UE::Net::Private::FNetObjectGroups::FindGroupHandle
            (&(((this->Impl).Ptr)->ReplicationSystemInternal).Groups,param_1);
  return (FNetObjectGroupHandle)param_1;
}

// ForceNetUpdate @ 144302b80

void __thiscall UReplicationSystem::ForceNetUpdate(UReplicationSystem *this,FNetRefHandle param_1)

{
  uint uVar1;
  
  uVar1 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&(((this->Impl).Ptr)->ReplicationSystemInternal).NetRefHandleManager,param_1);
  if (uVar1 != 0) {
    UE::Net::Private::ForceNetUpdate(this->Id,uVar1);
    return;
  }
  return;
}

// GetConnectionUserData @ 144303110

UObject * __thiscall
UReplicationSystem::GetConnectionUserData(UReplicationSystem *this,uint param_1)

{
  FReplicationSystemImpl *pFVar1;
  bool bVar2;
  FReplicationConnection *pFVar3;
  uint *local_res8;
  uint local_res10 [6];
  
  pFVar1 = (this->Impl).Ptr;
  local_res10[0] = param_1;
  if (((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.BitCount <= param_1) ||
     ((*(uint *)((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.Storage.
                 AllocatorInstance.Data + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) ==
      0)) {
    local_res8 = local_res10;
    bVar2 = `UReplicationSystem::GetConnectionUserData'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar2) {
      return (UObject *)0x0;
    }
  }
  pFVar3 = UE::Net::Private::FReplicationConnections::GetConnection
                     (&(pFVar1->ReplicationSystemInternal).Connections,local_res10[0]);
  if (pFVar3 == (FReplicationConnection *)0x0) {
    return (UObject *)0x0;
  }
  return (pFVar3->UserData).field0_0x0.Handle;
}

// GetCullDistance @ 1443032b0

float __thiscall
UReplicationSystem::GetCullDistance(UReplicationSystem *this,FNetRefHandle param_1,float param_2)

{
  FReplicationSystemImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  
  pFVar1 = (this->Impl).Ptr;
  uVar5 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&(pFVar1->ReplicationSystemInternal).NetRefHandleManager,param_1);
  if (uVar5 != 0) {
    pFVar2 = (pFVar1->ReplicationSystemInternal).WorldLocations.ValidInfoIndexes.Storage.
             AllocatorInstance.Data;
    if (((pFVar1->ReplicationSystemInternal).WorldLocations.ValidInfoIndexes.BitCount <= uVar5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return fVar6;
    }
    if ((*(uint *)(pFVar2 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
      param_2 = UE::Net::FWorldLocations::GetCullDistance
                          (&(((this->Impl).Ptr)->ReplicationSystemInternal).WorldLocations,uVar5);
    }
  }
  return param_2;
}

// GetDataStream @ 144303370

UDataStream * __thiscall
UReplicationSystem::GetDataStream(UReplicationSystem *this,uint param_1,FName param_2)

{
  FReplicationSystemImpl *pFVar1;
  bool bVar2;
  FReplicationConnection *pFVar3;
  UDataStreamManager *this_00;
  UDataStream *pUVar4;
  uint *local_res8;
  uint local_res10 [2];
  
  pFVar1 = (this->Impl).Ptr;
  local_res10[0] = param_1;
  if (((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.BitCount <= param_1) ||
     ((*(uint *)((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.Storage.
                 AllocatorInstance.Data + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) ==
      0)) {
    local_res8 = local_res10;
    bVar2 = `UReplicationSystem::GetDataStream'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar2) {
      return (UDataStream *)0x0;
    }
  }
  pFVar3 = UE::Net::Private::FReplicationConnections::GetConnection
                     (&(pFVar1->ReplicationSystemInternal).Connections,local_res10[0]);
  if (pFVar3 == (FReplicationConnection *)0x0) {
    this_00 = (UDataStreamManager *)0x0;
  }
  else {
    this_00 = (UDataStreamManager *)FWeakObjectPtr::Get(&(pFVar3->DataStreamManager).WeakPtr);
    if (this_00 != (UDataStreamManager *)0x0) goto LAB_144303410;
  }
  local_res8 = local_res10;
  bVar2 = `UReplicationSystem::GetDataStream'::__l6::<lambda_2>::operator()(&local_res8);
  if (!bVar2) {
    return (UDataStream *)0x0;
  }
LAB_144303410:
  pUVar4 = UDataStreamManager::GetStream(this_00,param_2);
  return pUVar4;
}

// GetDataStream @ 144303430

UDataStream * __thiscall
UReplicationSystem::GetDataStream(UReplicationSystem *this,uint param_1,FName param_2)

{
  FReplicationSystemImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  UDataStream *pUVar7;
  UDataStreamManager *this_00;
  uint *local_res8;
  uint local_res10 [4];
  uint *local_res20;
  
  pFVar1 = (this->Impl).Ptr;
  local_res10[0] = param_1;
  if (((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.BitCount <= param_1) ||
     ((*(uint *)((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.Storage.
                 AllocatorInstance.Data + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) ==
      0)) {
    local_res8 = local_res10;
    bVar5 = `UReplicationSystem::GetDataStream'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar5) {
      return (UDataStream *)0x0;
    }
  }
  uVar4 = local_res10[0];
  pFVar2 = (pFVar1->ReplicationSystemInternal).Connections.ValidConnections.Storage.
           AllocatorInstance.Data;
  if (((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.BitCount <= local_res10[0])
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < BitCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                            ,0x2c1,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (UDataStream *)(*pcVar3)();
    return pUVar7;
  }
  this_00 = (UDataStreamManager *)0x0;
  if ((*(uint *)(pFVar2 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
    uVar6 = 0;
    if ((int)uVar4 < (pFVar1->ReplicationSystemInternal).Connections.Connections.ArrayNum) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UDataStream *)(*pcVar3)();
      return pUVar7;
    }
    pFVar2 = (pFVar1->ReplicationSystemInternal).Connections.Connections.AllocatorInstance.Data +
             (longlong)(int)uVar4 * 0x28;
    if ((pFVar2 != (FScriptContainerElement *)0x0) &&
       (this_00 = (UDataStreamManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar2 + 0x10)),
       this_00 != (UDataStreamManager *)0x0)) goto LAB_144303573;
  }
  local_res20 = local_res10;
  bVar5 = `UReplicationSystem::GetDataStream'::__l6::<lambda_2>::operator()(&local_res20);
  if (!bVar5) {
    return (UDataStream *)0x0;
  }
LAB_144303573:
  pUVar7 = UDataStreamManager::GetStream(this_00,param_2);
  return pUVar7;
}

// GetDebugName @ 144303590

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetDebugName * __thiscall
UReplicationSystem::GetDebugName(UReplicationSystem *this,FNetRefHandle param_1)

{
  FReplicationSystemImpl *pFVar1;
  uint uVar2;
  FReplicatedObjectData *pFVar3;
  
  pFVar1 = (this->Impl).Ptr;
  uVar2 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&(pFVar1->ReplicationSystemInternal).NetRefHandleManager,param_1);
  if (uVar2 != 0) {
    pFVar3 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                       (&(pFVar1->ReplicationSystemInternal).NetRefHandleManager,uVar2);
    if (pFVar3->Protocol != (FReplicationProtocol *)0x0) {
      return pFVar3->Protocol->DebugName;
    }
  }
  return (FNetDebugName *)0x0;
}

// GetDelegates @ 144303700

FReplicationSystemDelegates * __thiscall UReplicationSystem::GetDelegates(UReplicationSystem *this)

{
  return &((this->Impl).Ptr)->Delegates;
}

// GetFilter @ 144303720

UNetObjectFilter * __thiscall UReplicationSystem::GetFilter(UReplicationSystem *this,FName param_1)

{
  UNetObjectFilter *pUVar1;
  
  pUVar1 = UE::Net::Private::FReplicationFiltering::GetFilter
                     (&(((this->Impl).Ptr)->ReplicationSystemInternal).Filtering,param_1);
  return pUVar1;
}

// GetFilterHandle @ 144303740

uint __thiscall UReplicationSystem::GetFilterHandle(UReplicationSystem *this,FName param_1)

{
  uint uVar1;
  
  uVar1 = UE::Net::Private::FReplicationFiltering::GetFilterHandle
                    (&(((this->Impl).Ptr)->ReplicationSystemInternal).Filtering,param_1);
  return uVar1;
}

// GetFilterName @ 144303760

FName __thiscall UReplicationSystem::GetFilterName(UReplicationSystem *this,uint param_1)

{
  FName FVar1;
  uint in_register_00000014;
  
  FVar1.Number = in_register_00000014;
  FVar1.ComparisonIndex.Value = param_1;
  UE::Net::Private::FReplicationFiltering::GetFilterName
            (&(((this->Impl).Ptr)->ReplicationSystemInternal).Filtering,param_1);
  return FVar1;
}

// GetMaxConnectionCount @ 144303b10

uint __thiscall UReplicationSystem::GetMaxConnectionCount(UReplicationSystem *this)

{
  return (((this->Impl).Ptr)->ReplicationSystemInternal).Connections.ValidConnections.BitCount;
}

// GetNetGroupOwnerNetObjectGroup @ 144303b60

FNetObjectGroupHandle __thiscall
UReplicationSystem::GetNetGroupOwnerNetObjectGroup(UReplicationSystem *this)

{
  FNetObjectGroupHandle_u_0 in_RDX;
  
  *(FNetObjectGroupHandle_u_0 *)in_RDX =
       (((this->Impl).Ptr)->NetGroupOwnerNetObjectGroupHandle).field0_0x0;
  return (FNetObjectGroupHandle)in_RDX;
}

// GetNetGroupReplayNetObjectGroup @ 144303b80

FNetObjectGroupHandle __thiscall
UReplicationSystem::GetNetGroupReplayNetObjectGroup(UReplicationSystem *this)

{
  FNetObjectGroupHandle_u_0 in_RDX;
  
  *(FNetObjectGroupHandle_u_0 *)in_RDX =
       (((this->Impl).Ptr)->NetGroupReplayNetObjectGroupHandle).field0_0x0;
  return (FNetObjectGroupHandle)in_RDX;
}

// GetNetTokenResolveContext @ 144303ba0

FNetTokenResolveContext * __thiscall
UReplicationSystem::GetNetTokenResolveContext
          (UReplicationSystem *this,FNetTokenResolveContext *__return_storage_ptr__,uint param_1)

{
  FReplicationSystemImpl *pFVar1;
  FNetTokenStore *this_00;
  FNetTokenStoreState *pFVar2;
  
  pFVar1 = (this->Impl).Ptr;
  __return_storage_ptr__->RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  this_00 = pFVar1->NetTokenStore;
  __return_storage_ptr__->NetTokenStore = this_00;
  pFVar2 = UE::Net::FNetTokenStore::GetRemoteNetTokenStoreState(this_00,param_1);
  __return_storage_ptr__->RemoteNetTokenStoreState = pFVar2;
  return __return_storage_ptr__;
}

// GetNetTokenStore @ 144303be0

FNetTokenStore * __thiscall UReplicationSystem::GetNetTokenStore(UReplicationSystem *this)

{
  return ((this->Impl).Ptr)->NetTokenStore;
}

// GetNetTokenStore @ 144303bf0

FNetTokenStore * __thiscall UReplicationSystem::GetNetTokenStore(UReplicationSystem *this)

{
  return ((this->Impl).Ptr)->NetTokenStore;
}

// GetNotReplicatedNetObjectGroup @ 144303c00

FNetObjectGroupHandle __thiscall
UReplicationSystem::GetNotReplicatedNetObjectGroup(UReplicationSystem *this)

{
  FNetObjectGroupHandle_u_0 in_RDX;
  
  *(FNetObjectGroupHandle_u_0 *)in_RDX =
       (((this->Impl).Ptr)->NotReplicatedNetObjectGroupHandle).field0_0x0;
  return (FNetObjectGroupHandle)in_RDX;
}

// GetOrCreateSubObjectFilter @ 144303fc0

FNetObjectGroupHandle __thiscall
UReplicationSystem::GetOrCreateSubObjectFilter(UReplicationSystem *this,FName param_1)

{
  FNetObjectGroups *this_00;
  FReplicationSystemImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNetObjectGroupHandle FVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  uint uVar7;
  
  pFVar1 = (this->Impl).Ptr;
  this_00 = &(pFVar1->ReplicationSystemInternal).Groups;
  UE::Net::Private::FNetObjectGroups::FindGroupHandle(this_00,param_1);
  if (*(longlong *)param_1 == 0) {
    FVar5 = UE::Net::Private::FNetObjectGroups::CreateGroup(this_00,(FName)local_res8);
    FVar5.field0_0x0 = *(FNetObjectGroupHandle_u_0 *)FVar5.field0_0x0;
    *(FNetObjectGroupHandle_u_0 *)param_1 = FVar5.field0_0x0;
    if (FVar5.field0_0x0 != 0) {
      UE::Net::Private::FReplicationFiltering::AddSubObjectFilter
                (&(pFVar1->ReplicationSystemInternal).Filtering,FVar5);
    }
  }
  else {
    pFVar2 = (pFVar1->ReplicationSystemInternal).Filtering.SubObjectFilterGroups.Storage.
             AllocatorInstance.Data;
    uVar7 = (uint)*(longlong *)param_1;
    uVar6 = uVar7 & 0xffffff;
    if ((pFVar1->ReplicationSystemInternal).Filtering.SubObjectFilterGroups.BitCount <= uVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar5.field0_0x0 = (FNetObjectGroupHandle_u_0)(*pcVar3)();
        return (FNetObjectGroupHandle)FVar5.field0_0x0;
      }
    }
    if ((*(uint *)(pFVar2 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Filtering.IsSubObjectFilterGroup(GroupHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                         ,0x604,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar5.field0_0x0 = (FNetObjectGroupHandle_u_0)(*pcVar3)();
        return (FNetObjectGroupHandle)FVar5.field0_0x0;
      }
    }
  }
  return (FNetObjectGroupHandle)param_1;
}

// GetOwningNetConnection @ 144304260

uint __thiscall
UReplicationSystem::GetOwningNetConnection(UReplicationSystem *this,FNetRefHandle param_1)

{
  FReplicationSystemImpl *pFVar1;
  uint uVar2;
  
  pFVar1 = (this->Impl).Ptr;
  uVar2 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&(pFVar1->ReplicationSystemInternal).NetRefHandleManager,param_1);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = UE::Net::Private::FReplicationFiltering::GetOwningConnection
                    (&(pFVar1->ReplicationSystemInternal).Filtering,uVar2);
  return uVar2;
}

// GetPrioritizer @ 1443042a0

UNetObjectPrioritizer * __thiscall
UReplicationSystem::GetPrioritizer(UReplicationSystem *this,FName param_1)

{
  UNetObjectPrioritizer *pUVar1;
  
  pUVar1 = UE::Net::Private::FReplicationPrioritization::GetPrioritizer
                     (&(((this->Impl).Ptr)->ReplicationSystemInternal).Prioritization,param_1);
  return pUVar1;
}

// GetPrioritizerHandle @ 1443042c0

uint __thiscall UReplicationSystem::GetPrioritizerHandle(UReplicationSystem *this,FName param_1)

{
  uint uVar1;
  
  uVar1 = UE::Net::Private::FReplicationPrioritization::GetPrioritizerHandle
                    (&(((this->Impl).Ptr)->ReplicationSystemInternal).Prioritization,param_1);
  return uVar1;
}

// GetPrivateStaticClass @ 1443042e0

UClass * __cdecl UReplicationSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationSystem",
               &Z_Registration_Info_UClass_UReplicationSystem.InnerSingleton,
               StaticRegisterNativesUReplicationSystem,0x58,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UReplicationSystem>,
               InternalVTableHelperCtorCaller<UReplicationSystem>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationSystem.InnerSingleton;
}

// GetReplicationBridge @ 144304660

UObjectReplicationBridge * __thiscall
UReplicationSystem::GetReplicationBridge(UReplicationSystem *this)

{
  return (((this->Impl).Ptr)->ReplicationSystemInternal).ReplicationBridge;
}

// GetReplicationProtocol @ 144304780

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FReplicationProtocol * __thiscall
UReplicationSystem::GetReplicationProtocol(UReplicationSystem *this,FNetRefHandle param_1)

{
  FReplicationSystemImpl *pFVar1;
  uint uVar2;
  FReplicatedObjectData *pFVar3;
  
  pFVar1 = (this->Impl).Ptr;
  uVar2 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&(pFVar1->ReplicationSystemInternal).NetRefHandleManager,param_1);
  if (uVar2 == 0) {
    return (FReplicationProtocol *)0x0;
  }
  pFVar3 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                     (&(pFVar1->ReplicationSystemInternal).NetRefHandleManager,uVar2);
  return pFVar3->Protocol;
}

// GetReplicationSystemInternal @ 1443048c0

FReplicationSystemInternal * __thiscall
UReplicationSystem::GetReplicationSystemInternal(UReplicationSystem *this)

{
  return &((this->Impl).Ptr)->ReplicationSystemInternal;
}

// GetReplicationSystemInternal @ 1443048d0

FReplicationSystemInternal * __thiscall
UReplicationSystem::GetReplicationSystemInternal(UReplicationSystem *this)

{
  return &((this->Impl).Ptr)->ReplicationSystemInternal;
}

// GetSubObjectFilterGroupHandle @ 144304980

FNetObjectGroupHandle __thiscall
UReplicationSystem::GetSubObjectFilterGroupHandle(UReplicationSystem *this,FName param_1)

{
  FReplicationSystemImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNetObjectGroupHandle FVar5;
  uint uVar6;
  longlong local_res8 [2];
  undefined1 local_res18 [8];
  undefined1 *local_res20;
  
  pFVar1 = (this->Impl).Ptr;
  UE::Net::Private::FNetObjectGroups::FindGroupHandle
            (&(pFVar1->ReplicationSystemInternal).Groups,(FName)local_res8);
  if (local_res8[0] != 0) {
    uVar6 = (uint)local_res8[0] & 0xffffff;
    pFVar2 = (pFVar1->ReplicationSystemInternal).Filtering.SubObjectFilterGroups.Storage.
             AllocatorInstance.Data;
    if ((pFVar1->ReplicationSystemInternal).Filtering.SubObjectFilterGroups.BitCount <= uVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar5.field0_0x0 = (FNetObjectGroupHandle_u_0)(*pcVar3)();
        return (FNetObjectGroupHandle)FVar5.field0_0x0;
      }
    }
    if ((*(uint *)(pFVar2 + (ulonglong)(uVar6 >> 5) * 4) >> ((uint)local_res8[0] & 0x1f) & 1) == 0)
    {
      local_res20 = local_res18;
      bVar4 = `UReplicationSystem::GetSubObjectFilterGroupHandle'::__l6::<lambda_1>::operator()
                        (&local_res20);
      if (!bVar4) goto LAB_144304a42;
    }
    *(longlong *)param_1 = local_res8[0];
    return (FNetObjectGroupHandle)param_1;
  }
LAB_144304a42:
  *(undefined8 *)param_1 = 0;
  return (FNetObjectGroupHandle)param_1;
}

// GetWorldLocations @ 144304b40

FWorldLocations * __thiscall UReplicationSystem::GetWorldLocations(UReplicationSystem *this)

{
  return &(((this->Impl).Ptr)->ReplicationSystemInternal).WorldLocations;
}

// Init @ 144306eb0

void __thiscall
UReplicationSystem::Init(UReplicationSystem *this,uint param_1,FReplicationSystemParams *param_2)

{
  TPimplPtr<UE::Net::Private::FReplicationSystemImpl,0> *pTVar1;
  UObjectReplicationBridge *pUVar2;
  FReplicationSystemImpl *pFVar3;
  uint *puVar4;
  code *pcVar5;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FDelegateHandle FVar6;
  uint uVar7;
  longlong local_18 [2];
  
  this->Id = param_1;
  uVar7 = ((uint)param_2->bIsServer ^ this->bIsServer) & 1 ^ *(uint *)&this->field_0x50;
  *(uint *)&this->field_0x50 = uVar7;
  *(uint *)&this->field_0x50 = ((uint)param_2->bAllowObjectReplication * 2 ^ uVar7) & 2 ^ uVar7;
  pUVar2 = param_2->ReplicationBridge;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UObjectReplicationBridge *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ReplicationBridge).field0_0x0.DebugPtr = pUVar2;
  puVar4 = ::operator_new(0x17a0);
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    *(undefined8 *)(puVar4 + 2) = 0;
    *(code **)puVar4 =
         UE::Core::Private::PimplPtr::DeleterFunc<UE::Net::Private::FReplicationSystemImpl>;
    UE::Net::Private::FReplicationSystemImpl::FReplicationSystemImpl
              ((FReplicationSystemImpl *)(puVar4 + 4),this,param_2);
  }
  pTVar1 = &this->Impl;
  if ((TPimplPtr<UE::Net::Private::FReplicationSystemImpl,0> *)local_18 == pTVar1) {
    if ((FReplicationSystemImpl *)(puVar4 + 4) == (FReplicationSystemImpl *)0x0) goto LAB_144306f78;
    pcVar5 = *(code **)puVar4;
  }
  else {
    pFVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (FReplicationSystemImpl *)(puVar4 + 4);
    if (pFVar3 == (FReplicationSystemImpl *)0x0) goto LAB_144306f78;
    pcVar5 = *(code **)&pFVar3[-1].MetricNameAvgHugeObjectSendQueue.Number;
    puVar4 = &pFVar3[-1].MetricNameAvgHugeObjectSendQueue.Number;
  }
  (*pcVar5)(puVar4);
LAB_144306f78:
  UE::Net::Private::FReplicationSystemImpl::Init(pTVar1->Ptr,param_2);
  this_00 = FCoreUObjectDelegates::GetPostGarbageCollect();
  FVar6 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddUObject<UReplicationSystem>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)this_00,(UReplicationSystem *)&stack0x00000008,(pmf_753644dc)this);
                    /* WARNING: Load size is inaccurate */
  (this->PostGarbageCollectHandle).ID = *FVar6.ID;
  return;
}

// InitDataStreamManager @ 1443070b0

void __thiscall
UReplicationSystem::InitDataStreamManager
          (UReplicationSystem *this,uint param_1,UDataStreamManager *param_2)

{
  UE::Net::Private::FReplicationConnections::InitDataStreamManager
            (&(((this->Impl).Ptr)->ReplicationSystemInternal).Connections,this->Id,param_1,param_2);
  return;
}

// IsInGroup @ 144308a10

bool __thiscall
UReplicationSystem::IsInGroup
          (UReplicationSystem *this,FNetObjectGroupHandle param_1,FNetRefHandle param_2)

{
  FReplicationSystemImpl *pFVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = IsValidGroup(this,param_1);
  if (!bVar2) {
    return false;
  }
  pFVar1 = (this->Impl).Ptr;
  uVar3 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&(pFVar1->ReplicationSystemInternal).NetRefHandleManager,param_2);
  bVar2 = UE::Net::Private::FNetObjectGroups::Contains
                    (&(pFVar1->ReplicationSystemInternal).Groups,param_1,uVar3);
  return bVar2;
}

// IsKnownDataStreamDefinition @ 144308a80

bool __thiscall
UReplicationSystem::IsKnownDataStreamDefinition(UReplicationSystem *this,FName param_1)

{
  bool bVar1;
  
  bVar1 = UDataStreamManager::IsKnownStreamDefinition(param_1);
  return bVar1;
}

// IsNetRefHandleAssigned @ 144308a90

bool __thiscall
UReplicationSystem::IsNetRefHandleAssigned(UReplicationSystem *this,FNetRefHandle param_1)

{
  FReplicationSystemImpl *pFVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  if (param_1.field0_0x0 != 0) {
    pFVar1 = (this->Impl).Ptr;
    uVar4 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
    if (*(int *)&(pFVar1->ReplicationSystemInternal).NetRefHandleManager.RefHandleToInternalIndex.
                 field_0x8 !=
        *(int *)&(pFVar1->ReplicationSystemInternal).NetRefHandleManager.RefHandleToInternalIndex.
                 field_0x34) {
      puVar5 = *(undefined1 **)
                &(pFVar1->ReplicationSystemInternal).NetRefHandleManager.RefHandleToInternalIndex.
                 field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(pFVar1->ReplicationSystemInternal).NetRefHandleManager.RefHandleToInternalIndex.
                  field_0x38;
      }
      iVar3 = *(int *)(puVar5 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                                (ulonglong)
                                (*(int *)&(pFVar1->ReplicationSystemInternal).NetRefHandleManager.
                                          RefHandleToInternalIndex.field_0x48 - 1)) * 4);
      if (iVar3 != -1) {
        lVar2 = *(longlong *)
                 &(pFVar1->ReplicationSystemInternal).NetRefHandleManager.RefHandleToInternalIndex;
        do {
          if ((*(ulonglong *)(lVar2 + (longlong)iVar3 * 0x18) & 0x3fffffffffffff) == uVar4) {
            return true;
          }
          iVar3 = *(int *)(lVar2 + 0x10 + (longlong)iVar3 * 0x18);
        } while (iVar3 != -1);
      }
    }
  }
  return false;
}

// IsUsingRemoteObjectReferences @ 144309040

bool __thiscall UReplicationSystem::IsUsingRemoteObjectReferences(UReplicationSystem *this)

{
  return (((this->Impl).Ptr)->ReplicationSystemInternal).InternalInitParams.
         bUseRemoteObjectReferences;
}

// IsValidConnection @ 144309060

bool __thiscall UReplicationSystem::IsValidConnection(UReplicationSystem *this,uint param_1)

{
  FReplicationConnection *pFVar1;
  
  pFVar1 = UE::Net::Private::FReplicationConnections::GetConnection
                     (&(((this->Impl).Ptr)->ReplicationSystemInternal).Connections,param_1);
  return pFVar1 != (FReplicationConnection *)0x0;
}

// IsValidGroup @ 144309090

bool __thiscall
UReplicationSystem::IsValidGroup(UReplicationSystem *this,FNetObjectGroupHandle param_1)

{
  FReplicationSystemImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int iStackX_14;
  
  pFVar1 = (this->Impl).Ptr;
  if (((param_1.field0_0x0 != 0) &&
      (uVar6 = param_1.field0_0x0._0_4_,
      (param_1.field0_0x0._3_4_ & 0xff) == (pFVar1->ReplicationSystemInternal).Groups.CurrentEpoch))
     && (uVar7 = uVar6 & 0xffffff,
        (int)uVar7 < *(int *)&(pFVar1->ReplicationSystemInternal).Groups.Groups.field_0x28)) {
    if (*(int *)&(pFVar1->ReplicationSystemInternal).Groups.Groups.field_0x28 <= (int)uVar7) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    puVar5 = *(undefined1 **)&(pFVar1->ReplicationSystemInternal).Groups.Groups.field_0x20;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(pFVar1->ReplicationSystemInternal).Groups.Groups.field_0x10;
    }
    if (((*(uint *)(puVar5 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0) &&
       (iStackX_14 = param_1.field0_0x0._4_4_,
       *(int *)((ulonglong)(uVar6 & 0xffffff) * 0x20 + 0x18 +
               *(longlong *)&(pFVar1->ReplicationSystemInternal).Groups.Groups) == iStackX_14)) {
      return true;
    }
  }
  return false;
}

// MarkDirty @ 1443092f0

void __thiscall UReplicationSystem::MarkDirty(UReplicationSystem *this,FNetRefHandle param_1)

{
  uint uVar1;
  
  uVar1 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&(((this->Impl).Ptr)->ReplicationSystemInternal).NetRefHandleManager,param_1);
  if (uVar1 != 0) {
    UE::Net::Private::MarkNetObjectStateDirty(this->Id,uVar1);
    return;
  }
  return;
}

// NetUpdate @ 144309450

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EFlushFlags": Some values do not have unique names */

void __thiscall UReplicationSystem::NetUpdate(UReplicationSystem *this,float param_1)

{
  FReplicationStats *pFVar1;
  ulong64 *puVar2;
  uint *puVar3;
  FReplicationSystemImpl *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FReplicationConnection *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FReplicationSystemImpl *pFVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  bool bVar18;
  uint local_res8 [2];
  uint local_res10;
  FUpdateParameters local_res18 [8];
  uint local_res20 [2];
  uint local_c8;
  FMemScope local_c0;
  FName local_b8;
  uint local_b0;
  FDeltaCompressionBaselineManagerPreSendUpdateParams local_a8;
  uint local_a0;
  FReplicationSystemImpl *local_98;
  FNetBitArrayView local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if (!__CsvProfilerStat875) {
    FCsvProfilerTrace::OutputInlineStat("ReplicationSystem_NetUpdate",_GCsvCategory_Iris.Index);
    __CsvProfilerStat875 = true;
  }
  local_a0 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationSystem_NetUpdate",_GCsvCategory_Iris.Index,
             "CSV_ReplicationSystem_NetUpdate");
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId875,"ReplicationSystem_NetUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x36b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId875);
  }
  pFVar14 = (this->Impl).Ptr;
  this->ElapsedTime = (double)param_1 + this->ElapsedTime;
  local_98 = pFVar14;
  if (pFVar14->CurrentSendPass != Invalid) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    `UReplicationSystem::NetUpdate'::__l2::<lambda_1>::operator()(local_res8);
  }
  ((this->Impl).Ptr)->CurrentSendPass = TickFlush;
  pFVar4 = (this->Impl).Ptr;
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_90,
             (uint *)(pFVar4->ReplicationSystemInternal).Connections.ValidConnections.Storage.
                     AllocatorInstance.Data,
             (pFVar4->ReplicationSystemInternal).Connections.ValidConnections.BitCount);
  UE::Net::Private::FNetSendStats::Reset(&(pFVar14->ReplicationSystemInternal).SendStats);
  uVar7 = UE::Net::FNetBitArrayHelper::CountSetBits(local_90.Storage,local_90.BitCount,0,0xffffffff)
  ;
  (pFVar14->ReplicationSystemInternal).SendStats.Stats.ReplicatingConnectionCount = uVar7;
  UE::Net::Private::FNetTypeStats::PreUpdateSetup(&(pFVar14->ReplicationSystemInternal).TypeStats);
  pFVar1 = &(pFVar14->ReplicationSystemInternal).AccumulatedReplicationStats;
  pFVar1->PendingObjectCount =
       pFVar1->PendingObjectCount +
       (pFVar14->ReplicationSystemInternal).TickReplicationStats.PendingObjectCount;
  puVar2 = &(pFVar14->ReplicationSystemInternal).AccumulatedReplicationStats.
            PendingDependentObjectCount;
  *puVar2 = *puVar2 + (pFVar14->ReplicationSystemInternal).TickReplicationStats.
                      PendingDependentObjectCount;
  puVar2 = &(pFVar14->ReplicationSystemInternal).AccumulatedReplicationStats.HugeObjectSendQueue;
  *puVar2 = *puVar2 + (pFVar14->ReplicationSystemInternal).TickReplicationStats.HugeObjectSendQueue;
  uVar7 = (pFVar14->ReplicationSystemInternal).TickReplicationStats.MaxPendingObjectCount;
  uVar13 = (pFVar14->ReplicationSystemInternal).AccumulatedReplicationStats.MaxPendingObjectCount;
  local_80 = 0;
  uStack_78 = 0;
  if (uVar7 < uVar13) {
    uVar7 = uVar13;
  }
  uVar13 = (pFVar14->ReplicationSystemInternal).AccumulatedReplicationStats.
           MaxPendingDependentObjectCount;
  (pFVar14->ReplicationSystemInternal).AccumulatedReplicationStats.MaxPendingObjectCount = uVar7;
  uVar7 = (pFVar14->ReplicationSystemInternal).TickReplicationStats.MaxPendingDependentObjectCount;
  local_70 = 0;
  uStack_68 = 0;
  if (uVar7 < uVar13) {
    uVar7 = uVar13;
  }
  uVar13 = (pFVar14->ReplicationSystemInternal).AccumulatedReplicationStats.MaxHugeObjectSendQueue;
  (pFVar14->ReplicationSystemInternal).AccumulatedReplicationStats.MaxPendingDependentObjectCount =
       uVar7;
  uVar7 = (pFVar14->ReplicationSystemInternal).TickReplicationStats.MaxHugeObjectSendQueue;
  if (uVar7 < uVar13) {
    uVar7 = uVar13;
  }
  (pFVar14->ReplicationSystemInternal).AccumulatedReplicationStats.MaxHugeObjectSendQueue = uVar7;
  puVar3 = &(pFVar14->ReplicationSystemInternal).AccumulatedReplicationStats.SampleCount;
  *puVar3 = *puVar3 + (pFVar14->ReplicationSystemInternal).TickReplicationStats.SampleCount;
  (pFVar14->ReplicationSystemInternal).TickReplicationStats.PendingObjectCount = 0;
  (pFVar14->ReplicationSystemInternal).TickReplicationStats.PendingDependentObjectCount = 0;
  local_60 = 0;
  (pFVar14->ReplicationSystemInternal).TickReplicationStats.HugeObjectSendQueue = 0;
  (pFVar14->ReplicationSystemInternal).TickReplicationStats.MaxPendingObjectCount = 0;
  (pFVar14->ReplicationSystemInternal).TickReplicationStats.MaxPendingDependentObjectCount = 0;
  (pFVar14->ReplicationSystemInternal).TickReplicationStats.MaxHugeObjectSendQueue = 0;
  (pFVar14->ReplicationSystemInternal).TickReplicationStats.SampleCount = 0;
  if ((this->bDoCollectGarbage != 0) || (ReplicationSystemCVars::bForcePruneBeforeUpdate != false))
  {
    CollectGarbage(this);
  }
  local_res18[0].UpdateType = PreSendUpdate;
  UE::Net::Private::FReplicationSystemImpl::UpdateDataStreams((this->Impl).Ptr,local_res18);
  pFVar4 = (this->Impl).Ptr;
  uVar7 = 0;
  local_c8 = 0;
  if ((pFVar4->ReplicationSystemInternal).InternalInitParams.bAllowMinimalUpdateIfNoConnections ==
      false) {
    cVar16 = '\x01';
  }
  else {
    uVar13 = (pFVar4->ReplicationSystemInternal).Connections.ValidConnections.Storage.ArrayNum;
    pFVar8 = (pFVar4->ReplicationSystemInternal).Connections.ValidConnections.Storage.
             AllocatorInstance.Data;
    uVar10 = uVar7;
    if (uVar13 != 0) {
      do {
        if (*(int *)pFVar8 != 0) {
          bVar6 = true;
          goto LAB_1443096c0;
        }
        uVar10 = uVar10 + 1;
        pFVar8 = pFVar8 + 4;
      } while (uVar10 < uVar13);
    }
    bVar6 = false;
LAB_1443096c0:
    if ((pFVar4->bHadValidConnectionsLastUpdate == false) && (bVar6 == false)) {
      cVar16 = '\0';
      pFVar4->bHadValidConnectionsLastUpdate = false;
    }
    else {
      cVar16 = '\x01';
      pFVar4->bHadValidConnectionsLastUpdate = bVar6;
    }
  }
  local_res10 = CONCAT31(local_res10._1_3_,cVar16);
  if (this->bAllowObjectReplication != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      NetTraceNameId_915 =
           UE::Net::CreatePersistentNetDebugName(L"ReplicationSystem.ReplicatedObjectCount",0x27);
      _Init_thread_footer(&::_TSS0);
    }
    uVar13 = (pFVar14->ReplicationSystemInternal).NetRefHandleManager.ActiveObjectCount;
    uVar10 = FNetTrace::TraceName(NetTraceNameId_915);
    FNetTrace::TraceFrameStatsCounter(this->Id,uVar10,uVar13);
    pFVar14 = (this->Impl).Ptr;
    (pFVar14->ReplicationSystemInternal).bBlockFilterChanges = true;
    (**(code **)(((pFVar14->ReplicationSystemInternal).ReplicationBridge)->_padding_ + 0x2c8))();
    UE::Net::Private::FNetRefHandleManager::OnPreSendUpdate
              (&(pFVar14->ReplicationSystemInternal).NetRefHandleManager);
    pFVar14 = (this->Impl).Ptr;
    if (((pFVar14->ReplicationSystemInternal).DirtyNetObjectTracker.NetRefHandleManager ==
         (FNetRefHandleManager *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DirtyNetObjectTracker.IsInit()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                           ,0x41,
                           L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::Net::Private::FDirtyNetObjectTracker::UpdateDirtyNetObjects
              (&(pFVar14->ReplicationSystemInternal).DirtyNetObjectTracker);
    pFVar14 = (this->Impl).Ptr;
    if (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateWorldLocations(void)___ptr64'
        ::__l2::__CsvProfilerStat422 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("ReplicationSystem_UpdateWorldLocations",_GCsvCategory_Iris.Index);
      `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateWorldLocations(void)___ptr64'
      ::__l2::__CsvProfilerStat422 = true;
    }
    uVar13 = _GCsvCategory_Iris.Index;
    FCsvProfiler::BeginStat
              ("ReplicationSystem_UpdateWorldLocations",_GCsvCategory_Iris.Index,
               "CSV_ReplicationSystem_UpdateWorldLocations");
    if (CpuChannel->Enabled < 0) {
      UReplicationBridge::CallUpdateInstancesWorldLocation
                ((UReplicationBridge *)(pFVar14->ReplicationSystemInternal).ReplicationBridge);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateWorldLocations(void)___ptr64'
                  ::__l2::__CpuProfilerEventSpecId422,"ReplicationSystem_UpdateWorldLocations",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                 ,0x1a6);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateWorldLocations(void)___ptr64'
                 ::__l2::__CpuProfilerEventSpecId422);
      UReplicationBridge::CallUpdateInstancesWorldLocation
                ((UReplicationBridge *)(pFVar14->ReplicationSystemInternal).ReplicationBridge);
      FCpuProfilerTrace::OutputEndEvent();
    }
    FCsvProfiler::EndStat("ReplicationSystem_UpdateWorldLocations",uVar13);
    pFVar14 = (this->Impl).Ptr;
    if (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateFiltering(void)___ptr64'
        ::__l2::__CsvProfilerStat428 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("ReplicationSystem_UpdateFiltering",_GCsvCategory_Iris.Index);
      `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateFiltering(void)___ptr64'
      ::__l2::__CsvProfilerStat428 = true;
    }
    uVar13 = _GCsvCategory_Iris.Index;
    FCsvProfiler::BeginStat
              ("ReplicationSystem_UpdateFiltering",_GCsvCategory_Iris.Index,
               "CSV_ReplicationSystem_UpdateFiltering");
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateFiltering(void)___ptr64'
                  ::__l2::__CpuProfilerEventSpecId428,"ReplicationSystem_UpdateFiltering",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                 ,0x1ac);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateFiltering(void)___ptr64'
                 ::__l2::__CpuProfilerEventSpecId428);
    }
    FLLMScope::FLLMScope
              ((FLLMScope *)local_res20,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
    local_b8 = LLMTagDeclaration_Iris.UniqueName;
    FMemScope::FMemScope(&local_c0,&local_b8,true);
    UE::Net::Private::FReplicationFiltering::Filter(&(pFVar14->ReplicationSystemInternal).Filtering)
    ;
    FMemScope::~FMemScope(&local_c0);
    FLLMScope::~FLLMScope((FLLMScope *)local_res20);
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FCsvProfiler::EndStat("ReplicationSystem_UpdateFiltering",uVar13);
    pFVar14 = local_98;
    if (cVar16 != '\0') {
      UReplicationBridge::CallPreSendUpdate
                ((UReplicationBridge *)
                 (((this->Impl).Ptr)->ReplicationSystemInternal).ReplicationBridge,param_1);
      pFVar14 = (this->Impl).Ptr;
      (pFVar14->ReplicationSystemInternal).WorldLocations.bLockdownDirtyList = true;
      if (((pFVar14->ReplicationSystemInternal).DirtyNetObjectTracker.NetRefHandleManager ==
           (FNetRefHandleManager *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("DirtyNetObjectTracker.IsInit()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                             ,0x41,
                             L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Net::Private::FDirtyNetObjectTracker::UpdateAccumulatedDirtyList
                (&(pFVar14->ReplicationSystemInternal).DirtyNetObjectTracker);
      pFVar14 = (this->Impl).Ptr;
      if (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateConditionals(void)___ptr64'
          ::__l2::__CsvProfilerStat462 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("ReplicationSystem_UpdateConditionals",_GCsvCategory_Iris.Index);
        `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateConditionals(void)___ptr64'
        ::__l2::__CsvProfilerStat462 = true;
      }
      uVar13 = _GCsvCategory_Iris.Index;
      FCsvProfiler::BeginStat
                ("ReplicationSystem_UpdateConditionals",_GCsvCategory_Iris.Index,
                 "CSV_ReplicationSystem_UpdateConditionals");
      if (CpuChannel->Enabled < 0) {
        UE::Net::Private::FReplicationConditionals::Update
                  (&(pFVar14->ReplicationSystemInternal).Conditionals);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateConditionals(void)___ptr64'
                    ::__l2::__CpuProfilerEventSpecId462,"ReplicationSystem_UpdateConditionals",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                   ,0x1ce);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateConditionals(void)___ptr64'
                   ::__l2::__CpuProfilerEventSpecId462);
        UE::Net::Private::FReplicationConditionals::Update
                  (&(pFVar14->ReplicationSystemInternal).Conditionals);
        FCpuProfilerTrace::OutputEndEvent();
      }
      FCsvProfiler::EndStat("ReplicationSystem_UpdateConditionals",uVar13);
      UE::Net::Private::FReplicationSystemImpl::QuantizeDirtyStateData((this->Impl).Ptr);
      UE::Net::Private::FReplicationSystemImpl::ProcessNetObjectAttachmentSendQueue
                ((this->Impl).Ptr,ProcessObjectsGoingOutOfScope);
      UE::Net::Private::FReplicationSystemImpl::UpdateObjectScopes((this->Impl).Ptr);
      pFVar14 = (this->Impl).Ptr;
      if (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::PropagateDirtyChanges(void)___ptr64'
          ::__l2::__CsvProfilerStat489 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("ReplicationSystem_PropagateDirtyChanges",_GCsvCategory_Iris.Index);
        `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::PropagateDirtyChanges(void)___ptr64'
        ::__l2::__CsvProfilerStat489 = true;
      }
      uVar13 = _GCsvCategory_Iris.Index;
      local_c0._0_4_ = _GCsvCategory_Iris.Index;
      FCsvProfiler::BeginStat
                ("ReplicationSystem_PropagateDirtyChanges",_GCsvCategory_Iris.Index,
                 "CSV_ReplicationSystem_PropagateDirtyChanges");
      bVar6 = -1 < CpuChannel->Enabled;
      if (bVar6) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::PropagateDirtyChanges(void)___ptr64'
                    ::__l2::__CpuProfilerEventSpecId489,"ReplicationSystem_PropagateDirtyChanges",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                   ,0x1e9);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::PropagateDirtyChanges(void)___ptr64'
                   ::__l2::__CpuProfilerEventSpecId489);
      }
      uVar11 = (pFVar14->ReplicationSystemInternal).Connections.ValidConnections.Storage.ArrayNum;
      local_b8 = (FName)(pFVar14->ReplicationSystemInternal).Connections.ValidConnections.Storage.
                        AllocatorInstance.Data;
      local_b0 = 0xffffffff >>
                 (-(char)(pFVar14->ReplicationSystemInternal).Connections.ValidConnections.BitCount
                 & 0x1fU);
      local_res8[0] = 0;
      uVar10 = uVar11 - 1;
      local_a8.ChangeMaskCache._0_4_ = uVar10;
      local_res20[0] = uVar11;
      uVar15 = local_b0;
      if (uVar11 != 0) {
        do {
          uVar13 = 0xffffffff;
          if (uVar7 == uVar10) {
            uVar13 = uVar15;
          }
          uVar13 = uVar13 & *(uint *)local_b8;
          uVar12 = local_res8[0];
          if (uVar13 != 0) {
            do {
              if (((uVar13 & 1) != 0) &&
                 (pFVar9 = UE::Net::Private::FReplicationConnections::GetConnection
                                     (&(pFVar14->ReplicationSystemInternal).Connections,uVar12),
                 pFVar9->bIsClosing == false)) {
                UE::Net::Private::FReplicationWriter::InternalUpdateDirtyChangeMasks
                          (pFVar9->ReplicationWriter,
                           &(pFVar14->ReplicationSystemInternal).ChangeMaskCache,FlushFlags_None,
                           false);
              }
              uVar12 = uVar12 + 1;
              uVar13 = uVar13 >> 1;
            } while (uVar13 != 0);
            uVar11 = local_res20[0];
            uVar15 = local_b0;
            uVar10 = (uint)local_a8.ChangeMaskCache;
          }
          local_b8 = (FName)((longlong)local_b8 + 4);
          local_res8[0] = local_res8[0] + 0x20;
          uVar7 = uVar7 + 1;
          uVar13 = local_c0._0_4_;
        } while (uVar7 < uVar11);
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FCsvProfiler::EndStat("ReplicationSystem_PropagateDirtyChanges",uVar13);
      pFVar14 = local_98;
      cVar16 = (char)local_res10;
    }
  }
  uVar7 = 0;
  UE::Net::Private::FReplicationSystemImpl::ProcessNetObjectAttachmentSendQueue
            ((this->Impl).Ptr,ProcessObjectsInScope);
  UE::Net::Private::FNetBlobManager::ResetNetObjectAttachmentSendQueue
            (&(((this->Impl).Ptr)->ReplicationSystemInternal).NetBlobManager);
  if ((this->bAllowObjectReplication != 0) && (cVar16 != '\0')) {
    UE::Net::Private::FReplicationSystemImpl::UpdatePrioritization((this->Impl).Ptr,&local_90);
    local_a8.ChangeMaskCache = &(pFVar14->ReplicationSystemInternal).ChangeMaskCache;
    UE::Net::Private::FDeltaCompressionBaselineManager::PreSendUpdate
              (&(pFVar14->ReplicationSystemInternal).DeltaCompressionBaselineManager,&local_a8);
  }
  pFVar14 = (this->Impl).Ptr;
  if (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateUnresolvableReferenceTracking(void)___ptr64'
      ::__l2::__CsvProfilerStat758 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("ReplicationSystem_UpdateUnresolvableReferenceTracking",_GCsvCategory_Iris.Index);
    `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateUnresolvableReferenceTracking(void)___ptr64'
    ::__l2::__CsvProfilerStat758 = true;
  }
  uVar13 = _GCsvCategory_Iris.Index;
  local_c0._0_4_ = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationSystem_UpdateUnresolvableReferenceTracking",_GCsvCategory_Iris.Index,
             "CSV_ReplicationSystem_UpdateUnresolvableReferenceTracking");
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateUnresolvableReferenceTracking(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId758,
               "ReplicationSystem_UpdateUnresolvableReferenceTracking",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x2f6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateUnresolvableReferenceTracking(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId758);
  }
  uVar10 = (pFVar14->ReplicationSystemInternal).Connections.ValidConnections.Storage.ArrayNum;
  pFVar8 = (pFVar14->ReplicationSystemInternal).Connections.ValidConnections.Storage.
           AllocatorInstance.Data;
  uVar11 = 0xffffffff >>
           (-(char)(pFVar14->ReplicationSystemInternal).Connections.ValidConnections.BitCount &
           0x1fU);
  local_res20[0] = uVar10 - 1;
  local_res8[0] = uVar11;
  local_res10 = uVar10;
  uVar15 = local_res20[0];
  if (uVar10 != 0) {
    do {
      uVar12 = 0xffffffff;
      if (uVar7 == uVar15) {
        uVar12 = uVar11;
      }
      uVar17 = local_c8;
      uVar13 = local_c0._0_4_;
      for (uVar12 = uVar12 & *(uint *)pFVar8; local_c0._0_4_ = uVar13, uVar12 != 0;
          uVar12 = uVar12 >> 1) {
        if ((uVar12 & 1) != 0) {
          pFVar9 = UE::Net::Private::FReplicationConnections::GetConnection
                             (&(pFVar14->ReplicationSystemInternal).Connections,uVar17);
          UE::Net::Private::FReplicationReader::ProcessQueuedBatches(pFVar9->ReplicationReader);
          UE::Net::Private::FReplicationReader::UpdateUnresolvableReferenceTracking
                    (pFVar9->ReplicationReader);
        }
        uVar17 = uVar17 + 1;
        uVar10 = local_res10;
        uVar11 = local_res8[0];
        uVar13 = local_c0._0_4_;
        uVar15 = local_res20[0];
      }
      local_c8 = local_c8 + 0x20;
      uVar7 = uVar7 + 1;
      pFVar8 = pFVar8 + 4;
    } while (uVar7 < uVar10);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationSystem_UpdateUnresolvableReferenceTracking",uVar13);
  UE::Net::Private::FNetRefHandleManager::DestroyObjectsPendingDestroy
            (&(local_98->ReplicationSystemInternal).NetRefHandleManager);
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationSystem_NetUpdate",local_a0);
  return;
}

// NotifyStreamingLevelUnload @ 144309ed0

void __thiscall
UReplicationSystem::NotifyStreamingLevelUnload(UReplicationSystem *this,UObject *param_1)

{
  UReplicationBridge::NotifyStreamingLevelUnload
            ((UReplicationBridge *)(((this->Impl).Ptr)->ReplicationSystemInternal).ReplicationBridge
             ,param_1);
  return;
}

// OpenDataStream @ 14430a0f0

/* WARNING: Enum "Type": Some values do not have unique names */

UDataStream * __thiscall
UReplicationSystem::OpenDataStream(UReplicationSystem *this,uint param_1,FName param_2)

{
  FReplicationSystemImpl *pFVar1;
  bool bVar2;
  ECreateDataStreamResult EVar3;
  FReplicationConnection *pFVar4;
  UDataStreamManager *this_00;
  UDataStream *pUVar5;
  uint *local_res8;
  uint local_res10 [2];
  FName local_res18 [2];
  FString local_18;
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  if (this->bIsServer == 0) {
    if ((byte)LogIris._0_1_ < 2) {
      return (UDataStream *)0x0;
    }
    ::FName::ToString(local_res18,&local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return (UDataStream *)0x0;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return (UDataStream *)0x0;
  }
  pFVar1 = (this->Impl).Ptr;
  if (((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.BitCount <= param_1) ||
     ((*(uint *)((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.Storage.
                 AllocatorInstance.Data + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) ==
      0)) {
    local_res8 = local_res10;
    bVar2 = `UReplicationSystem::OpenDataStream'::__l24::<lambda_1>::operator()(&local_res8);
    if (!bVar2) {
      return (UDataStream *)0x0;
    }
  }
  pFVar4 = UE::Net::Private::FReplicationConnections::GetConnection
                     (&(pFVar1->ReplicationSystemInternal).Connections,local_res10[0]);
  if (pFVar4 == (FReplicationConnection *)0x0) {
    this_00 = (UDataStreamManager *)0x0;
  }
  else {
    this_00 = (UDataStreamManager *)FWeakObjectPtr::Get(&(pFVar4->DataStreamManager).WeakPtr);
    if (this_00 != (UDataStreamManager *)0x0) goto LAB_14430a1e7;
  }
  local_res8 = local_res10;
  bVar2 = `UReplicationSystem::OpenDataStream'::__l27::<lambda_2>::operator()(&local_res8);
  if (!bVar2) {
    return (UDataStream *)0x0;
  }
LAB_14430a1e7:
  EVar3 = UDataStreamManager::CreateStream(this_00,local_res18[0]);
  if (EVar3 != Success) {
    return (UDataStream *)0x0;
  }
  pUVar5 = UDataStreamManager::GetStream(this_00,local_res18[0]);
  return pUVar5;
}

// PostGarbageCollection @ 14430a920

void __thiscall UReplicationSystem::PostGarbageCollection(UReplicationSystem *this)

{
  this->bDoCollectGarbage = 1;
  return;
}

// PostReceiveUpdate @ 14430a930

void __thiscall UReplicationSystem::PostReceiveUpdate(UReplicationSystem *this)

{
  UReplicationBridge::PostReceiveUpdate
            ((UReplicationBridge *)(((this->Impl).Ptr)->ReplicationSystemInternal).ReplicationBridge
            );
  return;
}

// PostSeamlessTravelGarbageCollect @ 14430a950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UReplicationSystem::PostSeamlessTravelGarbageCollect(UReplicationSystem *this)

{
  if (5 < (byte)LogIris._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  CollectGarbage(this);
  UReplicationBridge::PostSeamlessTravelGarbageCollect
            ((UReplicationBridge *)(((this->Impl).Ptr)->ReplicationSystemInternal).ReplicationBridge
            );
  return;
}

// PostSendUpdate @ 14430a9d0

void __thiscall UReplicationSystem::PostSendUpdate(UReplicationSystem *this)

{
  int *piVar1;
  EReplicationSystemSendPass EVar2;
  int iVar3;
  FReplicationSystemImpl *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  FUpdateParameters local_res8 [8];
  FDeltaCompressionBaselineManagerPostSendUpdateParams local_res10 [8];
  
  if (!__CsvProfilerStat1034) {
    FCsvProfilerTrace::OutputInlineStat("ReplicationSystem_PostSendUpdate",_GCsvCategory_Iris.Index)
    ;
    __CsvProfilerStat1034 = true;
  }
  uVar6 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationSystem_PostSendUpdate",_GCsvCategory_Iris.Index,
             "CSV_ReplicationSystem_PostSendUpdate");
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1034,"ReplicationSystem_PostSendUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x40a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1034);
  }
  pFVar4 = (this->Impl).Ptr;
  EVar2 = pFVar4->CurrentSendPass;
  if (EVar2 == Invalid) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4132542164125088756>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                       ,0x40c,"Impl->CurrentSendPass != EReplicationSystemSendPass::Invalid");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (EVar2 == TickFlush) {
      if (this->bAllowObjectReplication != 0) {
        UE::Net::Private::FReplicationSystemImpl::ResetObjectStateDirtiness(pFVar4);
      }
      pFVar4 = (this->Impl).Ptr;
      (pFVar4->ReplicationSystemInternal).bBlockFilterChanges = false;
      piVar1 = &(pFVar4->ReplicationSystemInternal).ChangeMaskCache.Indices.ArrayMax;
      iVar3 = *piVar1;
      (pFVar4->ReplicationSystemInternal).ChangeMaskCache.Indices.ArrayNum = 0;
      if (iVar3 < 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>_>
                  (8,4,0,(ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo> *)
                         &(pFVar4->ReplicationSystemInternal).ChangeMaskCache,0,piVar1);
      }
      iVar3 = (pFVar4->ReplicationSystemInternal).ChangeMaskCache.Storage.ArrayMax;
      (pFVar4->ReplicationSystemInternal).ChangeMaskCache.Storage.ArrayNum = 0;
      if (iVar3 < 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,0,&(pFVar4->ReplicationSystemInternal).ChangeMaskCache.Storage.
                          AllocatorInstance,0,
                   &(pFVar4->ReplicationSystemInternal).ChangeMaskCache.Storage.ArrayMax);
      }
      UE::Net::Private::FNetRefHandleManager::OnPostSendUpdate
                (&(pFVar4->ReplicationSystemInternal).NetRefHandleManager);
      UReplicationBridge::UpdateHandlesPendingEndReplication
                ((UReplicationBridge *)(pFVar4->ReplicationSystemInternal).ReplicationBridge);
      UE::Net::Private::FDeltaCompressionBaselineInvalidationTracker::PostSendUpdate
                (&(pFVar4->ReplicationSystemInternal).DeltaCompressionBaselineInvalidationTracker);
      (pFVar4->ReplicationSystemInternal).WorldLocations.bLockdownDirtyList = false;
      memset((pFVar4->ReplicationSystemInternal).WorldLocations.ObjectsWithDirtyInfo.Storage.
             AllocatorInstance.Data,0,
             (longlong)
             (pFVar4->ReplicationSystemInternal).WorldLocations.ObjectsWithDirtyInfo.Storage.
             ArrayNum << 2);
      (**(code **)(((pFVar4->ReplicationSystemInternal).ReplicationBridge)->_padding_ + 0x2d0))();
      if (this->bAllowObjectReplication != 0) {
        UE::Net::Private::FDeltaCompressionBaselineManager::PostSendUpdate
                  (&(((this->Impl).Ptr)->ReplicationSystemInternal).DeltaCompressionBaselineManager,
                   local_res10);
      }
      local_res8[0].UpdateType = PostTickFlush;
      UE::Net::Private::FReplicationSystemImpl::UpdateDataStreams((this->Impl).Ptr,local_res8);
      UE::Net::Private::FNetSendStats::ReportCsvStats
                (&(((this->Impl).Ptr)->ReplicationSystemInternal).SendStats);
      UE::Net::Private::FNetTypeStats::ReportCSVStats
                (&(((this->Impl).Ptr)->ReplicationSystemInternal).TypeStats);
      UE::Net::Private::FReplicationStats::ReportCSVStats
                (&(((this->Impl).Ptr)->ReplicationSystemInternal).TickReplicationStats);
      pFVar4 = (this->Impl).Ptr;
      if ((pFVar4->ReplicationSystemInternal).DirtyNetObjectTracker.NetRefHandleManager !=
          (FNetRefHandleManager *)0x0) {
        UE::Net::Private::FDirtyNetObjectTracker::ReportCSVStats
                  (&(pFVar4->ReplicationSystemInternal).DirtyNetObjectTracker);
      }
    }
    ((this->Impl).Ptr)->CurrentSendPass = Invalid;
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationSystem_PostSendUpdate",uVar6);
  return;
}

// PreReceiveUpdate @ 14430ac50

void __thiscall UReplicationSystem::PreReceiveUpdate(UReplicationSystem *this)

{
  UReplicationBridge::PreReceiveUpdate
            ((UReplicationBridge *)(((this->Impl).Ptr)->ReplicationSystemInternal).ReplicationBridge
            );
  return;
}

// PreSeamlessTravelGarbageCollect @ 14430ac70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UReplicationSystem::PreSeamlessTravelGarbageCollect(UReplicationSystem *this)

{
  if (5 < (byte)LogIris._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  UReplicationBridge::PreSeamlessTravelGarbageCollect
            ((UReplicationBridge *)(((this->Impl).Ptr)->ReplicationSystemInternal).ReplicationBridge
            );
  return;
}

// QueueNetObjectAttachment @ 14430d2b0

bool __thiscall
UReplicationSystem::QueueNetObjectAttachment
          (UReplicationSystem *this,uint param_1,FNetObjectReference *param_2,
          TRefCountPtr<UE::Net::FNetObjectAttachment> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Net::Private::FNetBlobManager::QueueNetObjectAttachment
                    (&(((this->Impl).Ptr)->ReplicationSystemInternal).NetBlobManager,param_1,param_2
                     ,param_3,None);
  return bVar1;
}

// RegisterNetBlobHandler @ 14430d670

bool __thiscall
UReplicationSystem::RegisterNetBlobHandler(UReplicationSystem *this,UNetBlobHandler *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Net::Private::FNetBlobManager::RegisterNetBlobHandler
                    (&(((this->Impl).Ptr)->ReplicationSystemInternal).NetBlobManager,param_1);
  return bVar1;
}

// RemoveConnection @ 14430e6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UReplicationSystem::RemoveConnection(UReplicationSystem *this,uint param_1)

{
  FReplicationSystemImpl *pFVar1;
  FConnectionHandle FVar2;
  
  pFVar1 = (this->Impl).Ptr;
  if ((((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.BitCount <= param_1) ||
      ((*(uint *)((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.Storage.
                  AllocatorInstance.Data + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1)
       == 0)) && (1 < (byte)LogIris._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::RemoveConnection(unsigned_int)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  UE::Net::Private::FDeltaCompressionBaselineManager::RemoveConnection
            (&(pFVar1->ReplicationSystemInternal).DeltaCompressionBaselineManager,param_1);
  UE::Net::Private::FReplicationPrioritization::RemoveConnection
            (&(pFVar1->ReplicationSystemInternal).Prioritization,param_1);
  UE::Net::Private::FReplicationFiltering::RemoveConnection
            (&(pFVar1->ReplicationSystemInternal).Filtering,param_1);
  UE::Net::Private::FReplicationConditionals::RemoveConnection
            (&(pFVar1->ReplicationSystemInternal).Conditionals,param_1);
  UE::Net::Private::FReplicationConnections::RemoveConnection
            (&(pFVar1->ReplicationSystemInternal).Connections,param_1);
  FVar2.ChildConnectionId = 0;
  FVar2.ParentConnectionId = param_1;
  TMulticastDelegate<void___cdecl(UE::Net::FConnectionHandle),FDefaultDelegateUserPolicy>::Broadcast
            (&(pFVar1->Delegates).ConnectionRemovedDelegate,FVar2);
  return;
}

// RemoveFromAllGroups @ 14430e7b0

void __thiscall
UReplicationSystem::RemoveFromAllGroups(UReplicationSystem *this,FNetRefHandle param_1)

{
  FNetRefHandleManager *this_00;
  FNetObjectGroups *this_01;
  FNetObjectGroupHandle_u_0 *pFVar1;
  FReplicationSystemImpl *pFVar2;
  FNetObjectGroupHandle_u_0_s_1 FVar3;
  int iVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  undefined1 local_res8 [8];
  FNetRefHandle_u_0 local_res10;
  uint local_res18 [2];
  TArray<UE::Net::FNetObjectGroupHandle,TSizedDefaultAllocator<32>_> local_58;
  FNetRefHandleManager *local_48;
  uint *local_40;
  FNetRefHandle_u_0 *local_38;
  
  pFVar2 = (this->Impl).Ptr;
  this_00 = &(pFVar2->ReplicationSystemInternal).NetRefHandleManager;
  this_01 = &(pFVar2->ReplicationSystemInternal).Groups;
  local_res10 = param_1.field0_0x0;
  local_res18[0] = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,param_1);
  if ((pFVar2->ReplicationSystemInternal).bBlockFilterChanges != false) {
    local_40 = local_res18;
    local_38 = &local_res10;
    local_48 = this_00;
    `UReplicationSystem::RemoveFromAllGroups'::__l5::<lambda_1>::operator()(&local_48);
    return;
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  UE::Net::Private::FNetObjectGroups::GetGroupHandlesOfNetObject(this_01,local_res18[0],&local_58);
  iVar4 = local_58.ArrayNum;
  uVar5 = (ulonglong)local_58.ArrayNum;
  pFVar1 = (FNetObjectGroupHandle_u_0 *)(local_58.AllocatorInstance.Data + uVar5 * 8);
  FVar6.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar5 != iVar4) {
      `TCheckedPointerIterator<UE::Net::FNetObjectGroupHandle,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if ((FNetObjectGroupHandle_u_0 *)FVar6.Data == pFVar1) break;
    FVar3 = *(FNetObjectGroupHandle_u_0_s_1 *)FVar6.Data;
    UE::Net::Private::FNetObjectGroups::RemoveFromGroup
              (this_01,(FNetObjectGroupHandle)FVar3,local_res18[0]);
    UE::Net::Private::FReplicationFiltering::NotifyObjectRemovedFromGroup
              (&(pFVar2->ReplicationSystemInternal).Filtering,(FNetObjectGroupHandle)FVar3,
               local_res18[0]);
    uVar5 = local_58._8_8_ & 0xffffffff;
    FVar6.Data = FVar6.Data + 8;
  }
  if ((FNetObjectGroupHandle_u_0 *)local_58.AllocatorInstance.Data !=
      (FNetObjectGroupHandle_u_0 *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// RemoveFromGroup @ 14430e8e0

void __thiscall
UReplicationSystem::RemoveFromGroup
          (UReplicationSystem *this,FNetObjectGroupHandle param_1,FNetRefHandle param_2)

{
  FNetRefHandleManager *this_00;
  FReplicationSystemImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNetRefHandle_u_0 local_res18;
  uint local_res20 [2];
  FNetRefHandleManager *local_28;
  uint *local_20;
  FNetRefHandle_u_0 *local_18;
  
  local_res18 = param_2.field0_0x0;
  bVar3 = IsValidGroup(this,param_1);
  if (bVar3) {
    pFVar1 = (this->Impl).Ptr;
    this_00 = &(pFVar1->ReplicationSystemInternal).NetRefHandleManager;
    local_res20[0] =
         UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                   (this_00,(FNetRefHandle)local_res18._s_0);
    if ((pFVar1->ReplicationSystemInternal).bBlockFilterChanges != false) {
      local_20 = local_res20;
      local_18 = &local_res18;
      local_28 = this_00;
      `UReplicationSystem::RemoveFromGroup'::__l8::<lambda_1>::operator()(&local_28);
      return;
    }
    if (local_res20[0] != 0) {
      UE::Net::Private::FNetObjectGroups::RemoveFromGroup
                (&(pFVar1->ReplicationSystemInternal).Groups,param_1,local_res20[0]);
      UE::Net::Private::FReplicationFiltering::NotifyObjectRemovedFromGroup
                (&(pFVar1->ReplicationSystemInternal).Filtering,param_1,local_res20[0]);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4132542164125088128>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                       ,0x680,"IsValidGroup(GroupHandle)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RemoveGroupFilter @ 14430e9e0

void __thiscall
UReplicationSystem::RemoveGroupFilter(UReplicationSystem *this,FNetObjectGroupHandle param_1)

{
  FReplicationSystemImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res18 [16];
  
  bVar3 = IsValidGroup(this,param_1);
  if (bVar3) {
    pFVar1 = (this->Impl).Ptr;
    if ((pFVar1->ReplicationSystemInternal).bBlockFilterChanges != false) {
      `UReplicationSystem::RemoveGroupFilter'::__l8::<lambda_1>::operator()(local_res18);
      return;
    }
    UE::Net::Private::FReplicationFiltering::RemoveGroupFilter
              (&(pFVar1->ReplicationSystemInternal).Filtering,param_1);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4132542164125087967>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                       ,0x721,"IsValidGroup(GroupHandle)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RemoveSubObjectFilter @ 14430ecf0

void __thiscall UReplicationSystem::RemoveSubObjectFilter(UReplicationSystem *this,FName param_1)

{
  FReplicationSystemImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  FNetObjectGroupHandle_u_0 local_res18;
  FName local_res20;
  FName *local_38 [2];
  
  pFVar1 = (this->Impl).Ptr;
  if ((pFVar1->ReplicationSystemInternal).bBlockFilterChanges != false) {
    `UReplicationSystem::RemoveSubObjectFilter'::__l5::<lambda_1>::operator()(local_res8);
    return;
  }
  local_res20 = param_1;
  UE::Net::Private::FNetObjectGroups::FindGroupHandle
            (&(pFVar1->ReplicationSystemInternal).Groups,(FName)&local_res18);
  if (local_res18 != 0) {
    uVar5 = local_res18._0_4_ & 0xffffff;
    pFVar2 = (pFVar1->ReplicationSystemInternal).Filtering.SubObjectFilterGroups.Storage.
             AllocatorInstance.Data;
    if (((pFVar1->ReplicationSystemInternal).Filtering.SubObjectFilterGroups.BitCount <= uVar5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(uint *)(pFVar2 + (ulonglong)(uVar5 >> 5) * 4) >> (local_res18._0_4_ & 0x1f) & 1) == 0) {
      local_38[0] = &local_res20;
      bVar4 = `UReplicationSystem::GetSubObjectFilterGroupHandle'::__l6::<lambda_1>::operator()
                        (local_38);
      if (!bVar4) {
        return;
      }
    }
    if (local_res18 != 0) {
      UE::Net::Private::FReplicationFiltering::RemoveSubObjectFilter
                (&(pFVar1->ReplicationSystemInternal).Filtering,(FNetObjectGroupHandle)local_res18);
      UE::Net::Private::FNetObjectGroups::DestroyGroup
                (&(pFVar1->ReplicationSystemInternal).Groups,(FNetObjectGroupHandle)local_res18);
    }
  }
  return;
}

// ReportErrorWithNetRefHandle @ 14430ee10

void __thiscall
UReplicationSystem::ReportErrorWithNetRefHandle
          (UReplicationSystem *this,ENetRefHandleError param_1,ulong64 param_2,uint param_3,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  UObjectReplicationBridge *pUVar4;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FNetRefHandle FVar7;
  FScriptContainerElement *pFVar8;
  undefined8 local_res8;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  undefined8 local_38;
  
  UE::Net::Private::FNetRefHandleManager::MakeNetRefHandle((ulong64)&local_res8,(uint)param_2);
  pTVar5 = param_4;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  uVar2 = param_4->ArrayNum;
  if (-1 < (int)uVar2) {
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&local_40,0,(int *)((longlong)&local_38 + 4));
    }
    pFVar8 = (pTVar5->AllocatorInstance).Data;
    iVar3 = pTVar5->ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar3 * 8;
    while( true ) {
      if (pTVar5->ArrayNum != iVar3) {
        `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_4);
      }
      if (pFVar8 == pFVar1) break;
      FVar7 = UE::Net::Private::FNetRefHandleManager::MakeNetRefHandle
                        ((ulong64)local_48,(uint)*(undefined8 *)pFVar8);
      iVar6 = (int)local_38;
      if ((int)local_38 == local_38._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_40,(int *)((longlong)&local_38 + 4));
      }
      pFVar8 = pFVar8 + 8;
      local_38 = CONCAT44(local_38._4_4_,iVar6 + 1);
      *(undefined8 *)(local_40.Data + (longlong)iVar6 * 8) = *(undefined8 *)FVar7.field0_0x0;
    }
    pUVar4 = (((this->Impl).Ptr)->ReplicationSystemInternal).ReplicationBridge;
    (**(code **)(pUVar4->_padding_ + 0x328))(pUVar4,param_1,local_res8,param_3,&local_40);
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// ReportProtocolMismatch @ 14430ef90

void __thiscall
UReplicationSystem::ReportProtocolMismatch(UReplicationSystem *this,ulong64 param_1,uint param_2)

{
  UObjectReplicationBridge *pUVar1;
  undefined8 local_res8;
  
  UE::Net::Private::FNetRefHandleManager::MakeNetRefHandle((ulong64)&local_res8,(uint)param_1);
  pUVar1 = (((this->Impl).Ptr)->ReplicationSystemInternal).ReplicationBridge;
  (**(code **)(pUVar1->_padding_ + 800))(pUVar1,local_res8,param_2);
  return;
}

// ResetNetMetrics @ 14430f0a0

void __thiscall UReplicationSystem::ResetNetMetrics(UReplicationSystem *this)

{
  FReplicationSystemImpl *pFVar1;
  
  pFVar1 = (this->Impl).Ptr;
  (pFVar1->ReplicationSystemInternal).AccumulatedReplicationStats.PendingObjectCount = 0;
  (pFVar1->ReplicationSystemInternal).AccumulatedReplicationStats.PendingDependentObjectCount = 0;
  (pFVar1->ReplicationSystemInternal).AccumulatedReplicationStats.HugeObjectSendQueue = 0;
  (pFVar1->ReplicationSystemInternal).AccumulatedReplicationStats.MaxPendingObjectCount = 0;
  (pFVar1->ReplicationSystemInternal).AccumulatedReplicationStats.MaxPendingDependentObjectCount = 0
  ;
  (pFVar1->ReplicationSystemInternal).AccumulatedReplicationStats.MaxHugeObjectSendQueue = 0;
  (pFVar1->ReplicationSystemInternal).AccumulatedReplicationStats.SampleCount = 0;
  return;
}

// ResetRPCSendPolicyFlags @ 14430f370

void __thiscall UReplicationSystem::ResetRPCSendPolicyFlags(UReplicationSystem *this)

{
  TSet<TTuple<FObjectKey,enum_UE::Net::ENetObjectAttachmentSendPolicyFlags>,TDefaultMapHashableKeyFuncs<FObjectKey,enum_UE::Net::ENetObjectAttachmentSendPolicyFlags,0>,FDefaultSetAllocator>
  ::Reset((this->Impl).Ptr);
  return;
}

// SendRPC @ 14430fc30

bool __thiscall
UReplicationSystem::SendRPC
          (UReplicationSystem *this,uint param_1,UObject *param_2,UObject *param_3,
          UFunction *param_4,void *param_5)

{
  bool bVar1;
  bool bVar2;
  FSendRPCContext local_28;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1354,"SendRPC_SendUnicastRPC",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x54a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1354);
  }
  local_28.Function = param_4;
  local_28.RootObject = param_2;
  local_28.SubObject = param_3;
  bVar1 = UE::Net::Private::FNetBlobManager::SendUnicastRPC
                    (&(((this->Impl).Ptr)->ReplicationSystemInternal).NetBlobManager,param_1,
                     &local_28,param_5,None);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// SendRPC @ 14430fd10

bool __thiscall
UReplicationSystem::SendRPC
          (UReplicationSystem *this,UObject *param_1,UObject *param_2,UFunction *param_3,
          void *param_4)

{
  longlong lVar1;
  FReplicationSystemImpl *pFVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  ENetObjectAttachmentSendPolicyFlags EVar8;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  FWeakObjectPtr local_res8;
  UFunction *local_res10;
  FSendRPCContext local_48;
  uint *puVar9;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1334,"SendRPC_SendMulticastRPC",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x536);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1334);
  }
  puVar9 = (uint *)0x0;
  EVar8 = None;
  if (ReplicationSystemCVars::bAllowAttachmentSendPolicyFlags != false) {
    pFVar2 = (this->Impl).Ptr;
    puVar10 = puVar9;
    iVar14 = 0;
    if (param_3 != (UFunction *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_3);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = param_3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_3);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      puVar10 = (uint *)((ulonglong)local_res8 >> 0x20);
      iVar14 = local_res8.ObjectIndex;
    }
    iVar13 = (int)puVar10;
    uVar6 = iVar14 - iVar13 ^ (uint)((ulonglong)puVar10 >> 0xd);
    uVar4 = (-0x61c88647 - uVar6) - iVar13 ^ uVar6 << 8;
    uVar11 = (iVar13 - uVar4) - uVar6 ^ uVar4 >> 0xd;
    uVar6 = (uVar6 - uVar11) - uVar4 ^ uVar11 >> 0xc;
    uVar4 = (uVar4 - uVar11) - uVar6 ^ uVar6 << 0x10;
    uVar11 = (uVar11 - uVar4) - uVar6 ^ uVar4 >> 5;
    uVar6 = (uVar6 - uVar11) - uVar4 ^ uVar11 >> 3;
    uVar4 = (uVar4 - uVar6) - uVar11 ^ uVar6 << 10;
    puVar10 = puVar9;
    if (*(int *)&(pFVar2->AttachmentSendPolicyFlags).field_0x8 !=
        *(int *)&(pFVar2->AttachmentSendPolicyFlags).field_0x34) {
      puVar7 = *(undefined1 **)&(pFVar2->AttachmentSendPolicyFlags).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(pFVar2->AttachmentSendPolicyFlags).field_0x38;
      }
      iVar12 = *(int *)(puVar7 + (ulonglong)
                                 (*(int *)&(pFVar2->AttachmentSendPolicyFlags).field_0x48 - 1U &
                                 ((uVar11 - uVar4) - uVar6 ^ uVar4 >> 0xf)) * 4);
      if (iVar12 != -1) {
        do {
          lVar1 = *(longlong *)&pFVar2->AttachmentSendPolicyFlags + (longlong)iVar12 * 0x14;
          if ((*(int *)(*(longlong *)&pFVar2->AttachmentSendPolicyFlags + (longlong)iVar12 * 0x14)
               == iVar14) && (*(int *)(lVar1 + 4) == iVar13)) {
            puVar10 = (uint *)0x0;
            if (iVar12 != -1) {
              puVar5 = (uint *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar5 = puVar9;
              }
              if (puVar5 != (uint *)0x0) {
                puVar10 = (uint *)(ulonglong)*puVar5;
              }
            }
            break;
          }
          iVar12 = *(int *)(lVar1 + 0xc);
        } while (iVar12 != -1);
      }
    }
    EVar8 = (ENetObjectAttachmentSendPolicyFlags)puVar10;
  }
  local_48.RootObject = param_1;
  local_48.SubObject = param_2;
  local_48.Function = param_3;
  bVar3 = UE::Net::Private::FNetBlobManager::SendMulticastRPC
                    (&(((this->Impl).Ptr)->ReplicationSystemInternal).NetBlobManager,&local_48,
                     param_4,EVar8);
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// SendUpdate @ 14430ff50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UReplicationSystem::SendUpdate
          (UReplicationSystem *this,
          TFunctionRef<void___cdecl(TArrayView<unsigned_int,int>)> *param_1)

{
  FNetBitArray *pFVar1;
  FReplicationSystemImpl *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  undefined1 auStackY_288 [32];
  <lambda_1> local_258 [2];
  ForElementType<unsigned_int> local_248;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  uint uStack_230;
  undefined4 uStack_22c;
  TArray<unsigned_int,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> local_228;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pFVar2 = (this->Impl).Ptr;
  if (pFVar2->CurrentSendPass == Invalid) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4132542164125088794>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                       ,0x3e6,"Impl->CurrentSendPass != EReplicationSystemSendPass::Invalid");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_228.ArrayMax = 0x80;
    local_228.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_228.ArrayNum = 0;
    pFVar1 = &(pFVar2->ReplicationSystemInternal).Connections.ValidConnections;
    if (pFVar2->CurrentSendPass == TickFlush) {
      uVar6 = UE::Net::FNetBitArrayHelper::CountSetBits
                        ((uint *)(pFVar1->Storage).AllocatorInstance.Data,
                         (pFVar2->ReplicationSystemInternal).Connections.ValidConnections.BitCount,0
                         ,0xffffffff);
      TArray<unsigned_int,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::SetNum
                (&local_228,uVar6,Default);
      FVar7 = (ForElementType<unsigned_int>)&local_228;
      if (local_228.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_228.AllocatorInstance.SecondaryData;
      }
      UE::Net::FNetBitArrayHelper::GetSetBitIndices
                ((uint *)(pFVar1->Storage).AllocatorInstance.Data,
                 (pFVar2->ReplicationSystemInternal).Connections.ValidConnections.BitCount,0,
                 0xffffffff,(uint *)FVar7,local_228.ArrayNum);
    }
    else if (pFVar2->CurrentSendPass == PostTickDispatch) {
      local_258[0].ConnectionToUpdate = &local_228;
      UE::Net::FNetBitArray::
      ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UReplicationSystem::SendUpdate_::__l12::<lambda_1>_>
                (&pFVar2->ConnectionsPendingPostTickDispatchSend,pFVar1,
                 UE::Net::FNetBitArrayBase::AndOp,local_258);
      pFVar2 = (this->Impl).Ptr;
      memset((pFVar2->ConnectionsPendingPostTickDispatchSend).Storage.AllocatorInstance.Data,0,
             (longlong)(pFVar2->ConnectionsPendingPostTickDispatchSend).Storage.ArrayNum << 2);
    }
    iVar4 = local_228.ArrayNum;
    local_248 = (ForElementType<unsigned_int>)&local_228;
    if (local_228.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      local_248 = local_228.AllocatorInstance.SecondaryData;
    }
    if ((local_228.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_240 = iVar4;
    local_238 = local_248._0_4_;
    uStack_234 = local_248._4_4_;
    uStack_230 = iVar4;
    uStack_22c = uStack_23c;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_238);
    if (local_228.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_228.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// SetConnectionGracefullyClosing @ 144312c40

void __thiscall
UReplicationSystem::SetConnectionGracefullyClosing(UReplicationSystem *this,uint param_1)

{
  FNetBitArray *pFVar1;
  FReplicationSystemImpl *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  pFVar2 = (this->Impl).Ptr;
  pFVar1 = &(pFVar2->ReplicationSystemInternal).Connections.ValidConnections;
  if ((((pFVar2->ReplicationSystemInternal).Connections.ValidConnections.BitCount <= param_1) ||
      ((*(uint *)((pFVar1->Storage).AllocatorInstance.Data + (ulonglong)(param_1 >> 5) * 4) >>
        (param_1 & 0x1f) & 1) == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connections.IsValidConnection(ConnectionId)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                         ,0x47c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (pFVar1->Storage).AllocatorInstance.Data;
  if (((pFVar2->ReplicationSystemInternal).Connections.ValidConnections.BitCount <= param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((*(uint *)(pFVar3 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValidConnections.GetBit(ConnectionId) == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationConnections.h"
                         ,0x61,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = 0;
  if ((int)param_1 < (pFVar2->ReplicationSystemInternal).Connections.Connections.ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (pFVar2->ReplicationSystemInternal).Connections.Connections.AllocatorInstance.Data
  [(longlong)(int)param_1 * 0x28 + 0x20] = (FScriptContainerElement)0x1;
  return;
}

// SetConnectionUserData @ 144312da0

void __thiscall
UReplicationSystem::SetConnectionUserData(UReplicationSystem *this,uint param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  FReplicationConnection *pFVar3;
  
  pFVar3 = UE::Net::Private::FReplicationConnections::GetConnection
                     (&(((this->Impl).Ptr)->ReplicationSystemInternal).Connections,param_1);
  if (pFVar3 == (FReplicationConnection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Connection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                       ,0x56e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  (pFVar3->UserData).field0_0x0.Handle = param_2;
  return;
}

// SetCullDistanceOverride @ 144313050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UReplicationSystem::SetCullDistanceOverride
          (UReplicationSystem *this,FNetRefHandle param_1,float param_2)

{
  FReplicationSystemImpl *pFVar1;
  bool bVar2;
  uint local_res8 [2];
  float local_res18 [4];
  undefined1 local_48 [16];
  float *local_38;
  
  pFVar1 = (this->Impl).Ptr;
  local_res18[0] = param_2;
  local_res8[0] =
       UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                 (&(pFVar1->ReplicationSystemInternal).NetRefHandleManager,param_1);
  if (local_res8[0] != 0) {
    if (5 < (byte)LogIrisNetCull._0_1_) {
      UE::Net::FWorldLocations::GetCullDistance
                (&(pFVar1->ReplicationSystemInternal).WorldLocations,local_res8[0]);
      UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                (&(((this->Impl).Ptr)->ReplicationSystemInternal).NetRefHandleManager,
                 (FString *)local_48,local_res8[0]);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisNetCull);
      if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._0_8_);
      }
    }
    bVar2 = UE::Net::FWorldLocations::SetCullDistanceOverride
                      (&(((this->Impl).Ptr)->ReplicationSystemInternal).WorldLocations,local_res8[0]
                       ,local_res18[0]);
    if (!bVar2) {
      local_48._8_8_ = local_res8;
      local_38 = local_res18;
      local_48._0_8_ = this;
      `UReplicationSystem::SetCullDistanceOverride'::__l2::<lambda_1>::operator()(local_48);
    }
  }
  return;
}

// SetDeltaCompressionStatus @ 144313230

void __thiscall
UReplicationSystem::SetDeltaCompressionStatus
          (UReplicationSystem *this,FNetRefHandle param_1,ENetObjectDeltaCompressionStatus param_2)

{
  FNetRefHandleManager *this_00;
  FReplicationSystemImpl *pFVar1;
  uint local_res8 [2];
  FNetRefHandle_u_0 local_res10;
  FNetRefHandleManager *local_28;
  uint *local_20;
  FNetRefHandle_u_0 *local_18;
  
  pFVar1 = (this->Impl).Ptr;
  this_00 = &(pFVar1->ReplicationSystemInternal).NetRefHandleManager;
  local_res10 = param_1.field0_0x0;
  local_res8[0] = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,param_1);
  if (local_res8[0] != 0) {
    if ((pFVar1->ReplicationSystemInternal).bBlockFilterChanges != false) {
      local_20 = local_res8;
      local_18 = &local_res10;
      local_28 = this_00;
      `UReplicationSystem::SetDeltaCompressionStatus'::__l8::<lambda_1>::operator()(&local_28);
      return;
    }
    UE::Net::Private::FDeltaCompressionBaselineManager::SetDeltaCompressionStatus
              (&(pFVar1->ReplicationSystemInternal).DeltaCompressionBaselineManager,local_res8[0],
               param_2);
  }
  return;
}

// SetFilter @ 1443132d0

bool __thiscall
UReplicationSystem::SetFilter
          (UReplicationSystem *this,FNetRefHandle param_1,uint param_2,FName param_3)

{
  FNetRefHandleManager *this_00;
  FReplicationSystemImpl *pFVar1;
  UObjectReplicationBridge *this_01;
  bool bVar2;
  bool bVar3;
  uint local_res8 [2];
  FNetRefHandle_u_0 local_res10;
  FNetRefHandleManager *local_38;
  uint *local_30;
  FNetRefHandle_u_0 *local_28;
  
  pFVar1 = (this->Impl).Ptr;
  this_00 = &(pFVar1->ReplicationSystemInternal).NetRefHandleManager;
  local_res10 = param_1.field0_0x0;
  local_res8[0] = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,param_1);
  if (local_res8[0] != 0) {
    if ((pFVar1->ReplicationSystemInternal).bBlockFilterChanges == false) {
      bVar2 = UE::Net::Private::FReplicationFiltering::SetFilter
                        (&(pFVar1->ReplicationSystemInternal).Filtering,local_res8[0],param_2,
                         param_3);
      if (ReplicationSystemCVars::bSetFilterSetsRequiresFrequentLocationUpdates == false) {
        return bVar2;
      }
      this_01 = (((this->Impl).Ptr)->ReplicationSystemInternal).ReplicationBridge;
      bVar3 = UObjectReplicationBridge::GetObjectWantsToBeDormant
                        (this_01,(FNetRefHandle)local_res10._s_0);
      UObjectReplicationBridge::OptionallySetObjectRequiresFrequentWorldLocationUpdate
                (this_01,(FNetRefHandle)local_res10._s_0,!bVar3);
      return bVar2;
    }
    local_30 = local_res8;
    local_28 = &local_res10;
    local_38 = this_00;
    `UReplicationSystem::SetFilter'::__l8::<lambda_1>::operator()(&local_38);
  }
  return false;
}

// SetGroupFilterStatus @ 1443133b0

void __thiscall
UReplicationSystem::SetGroupFilterStatus
          (UReplicationSystem *this,FNetObjectGroupHandle param_1,FNetBitArray *param_2,
          ENetFilterStatus param_3)

{
  FReplicationSystemImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_28 [8];
  FNetBitArrayView local_20;
  
  bVar3 = IsValidGroup(this,param_1);
  if (bVar3) {
    pFVar1 = (this->Impl).Ptr;
    if ((pFVar1->ReplicationSystemInternal).bBlockFilterChanges == false) {
      UE::Net::FNetBitArrayView::FNetBitArrayView
                (&local_20,(uint *)(param_2->Storage).AllocatorInstance.Data,param_2->BitCount);
      UE::Net::Private::FReplicationFiltering::SetGroupFilterStatus
                (&(pFVar1->ReplicationSystemInternal).Filtering,param_1,&local_20,param_3);
    }
    else {
      `UReplicationSystem::SetGroupFilterStatus'::__l8::<lambda_1>::operator()(local_28);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4132542164125087931>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                       ,0x745,"IsValidGroup(GroupHandle)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// SetGroupFilterStatus @ 144313470

void __thiscall
UReplicationSystem::SetGroupFilterStatus
          (UReplicationSystem *this,FNetObjectGroupHandle param_1,uint param_2,
          ENetFilterStatus param_3)

{
  FReplicationSystemImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_18 [16];
  
  bVar3 = IsValidGroup(this,param_1);
  if (bVar3) {
    pFVar1 = (this->Impl).Ptr;
    if ((pFVar1->ReplicationSystemInternal).bBlockFilterChanges == false) {
      UE::Net::Private::FReplicationFiltering::SetGroupFilterStatus
                (&(pFVar1->ReplicationSystemInternal).Filtering,param_1,param_2,param_3);
    }
    else {
      `UReplicationSystem::SetGroupFilterStatus'::__l8::<lambda_1>::operator()(local_18);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4132542164125087949>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                       ,0x733,"IsValidGroup(GroupHandle)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// SetGroupFilterStatus @ 144313520

void __thiscall
UReplicationSystem::SetGroupFilterStatus
          (UReplicationSystem *this,FNetObjectGroupHandle param_1,ENetFilterStatus param_2)

{
  FReplicationSystemImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res20 [8];
  
  bVar3 = IsValidGroup(this,param_1);
  if (bVar3) {
    pFVar1 = (this->Impl).Ptr;
    if ((pFVar1->ReplicationSystemInternal).bBlockFilterChanges != false) {
      `UReplicationSystem::SetGroupFilterStatus'::__l8::<lambda_1>::operator()(local_res20);
      return;
    }
    UE::Net::Private::FReplicationFiltering::SetGroupFilterStatus
              (&(pFVar1->ReplicationSystemInternal).Filtering,param_1,param_2);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4132542164125087913>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                       ,0x757,"IsValidGroup(GroupHandle)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// SetIsNetTemporary @ 1443135d0

void __thiscall
UReplicationSystem::SetIsNetTemporary(UReplicationSystem *this,FNetRefHandle param_1)

{
  FReplicationSystemImpl *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  pFVar1 = (this->Impl).Ptr;
  uVar5 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&(pFVar1->ReplicationSystemInternal).NetRefHandleManager,param_1);
  if (uVar5 != 0) {
    uVar3 = (int)uVar5 / 100;
    uVar6 = 0;
    if ((int)uVar3 <
        (int)(pFVar1->ReplicationSystemInternal).NetRefHandleManager.ReplicatedObjectStateBuffers.
             _padding_) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(longlong *)
         (*(longlong *)
           ((pFVar1->ReplicationSystemInternal).NetRefHandleManager.ReplicatedObjectStateBuffers.
            _padding_ + (longlong)(int)uVar3 * 8) + (longlong)((int)uVar5 % 100) * 8) != 0) {
      UE::Net::Private::FNetRefHandleManager::SetShouldPropagateChangedStates
                (&(pFVar1->ReplicationSystemInternal).NetRefHandleManager,param_1,false);
      return;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4132542164125087837>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                     ,0x7a3,"NetRefHandleManager.IsLocalNetRefHandle(Handle)");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// SetOwningNetConnection @ 1443140d0

void __thiscall
UReplicationSystem::SetOwningNetConnection
          (UReplicationSystem *this,FNetRefHandle param_1,uint param_2)

{
  FNetRefHandleManager *this_00;
  FReplicationSystemImpl *pFVar1;
  uint local_res8 [2];
  FNetRefHandle_u_0 local_res10;
  FNetRefHandleManager *local_38;
  uint *local_30;
  FNetRefHandle_u_0 *local_28;
  
  pFVar1 = (this->Impl).Ptr;
  this_00 = &(pFVar1->ReplicationSystemInternal).NetRefHandleManager;
  local_res10 = param_1.field0_0x0;
  local_res8[0] = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,param_1);
  if ((pFVar1->ReplicationSystemInternal).bBlockFilterChanges != false) {
    local_30 = local_res8;
    local_28 = &local_res10;
    local_38 = this_00;
    `UReplicationSystem::SetOwningNetConnection'::__l5::<lambda_1>::operator()(&local_38);
    return;
  }
  if (local_res8[0] != 0) {
    UE::Net::Private::FReplicationConditionals::SetOwningConnection
              (&(pFVar1->ReplicationSystemInternal).Conditionals,local_res8[0],param_2);
    UE::Net::Private::FReplicationFiltering::SetOwningConnection
              (&(((this->Impl).Ptr)->ReplicationSystemInternal).Filtering,local_res8[0],param_2);
  }
  return;
}

// SetPrioritizer @ 1443144b0

bool __thiscall
UReplicationSystem::SetPrioritizer(UReplicationSystem *this,FNetRefHandle param_1,uint param_2)

{
  FReplicationSystemImpl *pFVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1.field0_0x0 != 0) {
    pFVar1 = (this->Impl).Ptr;
    uVar3 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                      (&(pFVar1->ReplicationSystemInternal).NetRefHandleManager,param_1);
    if (uVar3 != 0) {
      bVar2 = UE::Net::Private::FReplicationPrioritization::SetPrioritizer
                        (&(pFVar1->ReplicationSystemInternal).Prioritization,uVar3,param_2);
      return bVar2;
    }
  }
  return false;
}

// SetRPCSendPolicyFlags @ 144314510

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UReplicationSystem::SetRPCSendPolicyFlags
          (UReplicationSystem *this,UFunction *param_1,ENetObjectAttachmentSendPolicyFlags param_2)

{
  int iVar1;
  longlong lVar2;
  FReplicationSystemImpl *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  TPairInitializer<FObjectKey_&&,UE::Net::ENetObjectAttachmentSendPolicyFlags_const_&> local_res10;
  FWeakObjectPtr local_res20;
  FName local_88;
  FName local_80;
  UFunction *local_78;
  FWeakObjectPtr local_70;
  FString local_68;
  FString local_58;
  FWeakObjectPtr *local_48;
  ENetObjectAttachmentSendPolicyFlags **local_40;
  
  if (param_1 == (UFunction *)0x0) {
    return false;
  }
  local_res10.Value._0_4_ = param_2;
  if ((byte)LogIris._0_1_ < 6) goto LAB_1443146b0;
  if ((((param_2 != None) && (param_2 != ScheduleAsOOB)) && (param_2 != SendInPostTickDispatch)) &&
     ((param_2 != SendImmediate &&
      (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_5859160669709926323>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\ReplicationSystemTypes.h"
                          ,0x4d,"false"), bVar4)))) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_88 = (FName)param_1->_padding_;
  ::FName::ToString(&local_88,&local_58);
  lVar2 = param_1->_padding_;
  if (lVar2 == 0) {
LAB_144314645:
    ::FString::FString(&local_68,L"None");
  }
  else {
    pUVar6 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_144314645;
    local_80 = *(FName *)(lVar2 + 0x18);
    ::FName::ToString(&local_80,&local_68);
  }
  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_1443146b0:
  this_00 = (this->Impl).Ptr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_78 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_78);
  local_70 = local_res20;
  local_48 = &local_70;
  local_40 = &local_res10.Value;
  TSet<TTuple<FObjectKey,enum_UE::Net::ENetObjectAttachmentSendPolicyFlags>,TDefaultMapHashableKeyFuncs<FObjectKey,enum_UE::Net::ENetObjectAttachmentSendPolicyFlags,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FObjectKey_&&,enum_UE::Net::ENetObjectAttachmentSendPolicyFlags_const_&>_>
            (this_00,&local_res10,(bool *)&local_48);
  return true;
}

// SetReplicationCondition @ 144314740

bool __thiscall
UReplicationSystem::SetReplicationCondition
          (UReplicationSystem *this,FNetRefHandle param_1,EReplicationCondition param_2,bool param_3
          )

{
  FReplicationSystemImpl *pFVar1;
  bool bVar2;
  uint uVar3;
  
  pFVar1 = (this->Impl).Ptr;
  uVar3 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&(pFVar1->ReplicationSystemInternal).NetRefHandleManager,param_1);
  if (uVar3 == 0) {
    return false;
  }
  bVar2 = UE::Net::Private::FReplicationConditionals::SetCondition
                    (&(pFVar1->ReplicationSystemInternal).Conditionals,uVar3,param_2,param_3);
  return bVar2;
}

// SetReplicationConditionConnectionFilter @ 1443147b0

bool __thiscall
UReplicationSystem::SetReplicationConditionConnectionFilter
          (UReplicationSystem *this,FNetRefHandle param_1,EReplicationCondition param_2,uint param_3
          ,bool param_4)

{
  FNetRefHandleManager *this_00;
  FReplicationSystemImpl *pFVar1;
  bool bVar2;
  uint local_res8 [2];
  FNetRefHandle_u_0 local_res10;
  FNetRefHandleManager *local_38;
  uint *local_30;
  FNetRefHandle_u_0 *local_28;
  
  pFVar1 = (this->Impl).Ptr;
  this_00 = &(pFVar1->ReplicationSystemInternal).NetRefHandleManager;
  local_res10 = param_1.field0_0x0;
  local_res8[0] = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,param_1);
  if (local_res8[0] != 0) {
    if ((pFVar1->ReplicationSystemInternal).bBlockFilterChanges == false) {
      bVar2 = UE::Net::Private::FReplicationConditionals::SetConditionConnectionFilter
                        (&(pFVar1->ReplicationSystemInternal).Conditionals,local_res8[0],param_2,
                         param_3,param_4);
      return bVar2;
    }
    local_30 = local_res8;
    local_28 = &local_res10;
    local_38 = this_00;
    `UReplicationSystem::SetReplicationConditionConnectionFilter'::__l8::<lambda_1>::operator()
              (&local_38);
  }
  return false;
}

// SetReplicationEnabledForConnection @ 144314870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UReplicationSystem::SetReplicationEnabledForConnection
          (UReplicationSystem *this,uint param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FReplicationConnection *pFVar3;
  
  pFVar3 = UE::Net::Private::FReplicationConnections::GetConnection
                     (&(((this->Impl).Ptr)->ReplicationSystemInternal).Connections,param_1);
  if (pFVar3 != (FReplicationConnection *)0x0) {
    pFVar3->ReplicationWriter->bReplicationEnabled = param_2;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Connection",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                     ,0x486,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(bool *)(_DAT_00000000 + 0x3d4) = param_2;
  return;
}

// SetReplicationView @ 1443148f0

void __thiscall
UReplicationSystem::SetReplicationView
          (UReplicationSystem *this,uint param_1,FReplicationView *param_2)

{
  UE::Net::Private::FReplicationConnections::SetReplicationView
            (&(((this->Impl).Ptr)->ReplicationSystemInternal).Connections,param_1,param_2);
  return;
}

// SetStaticPriority @ 144314cc0

void __thiscall
UReplicationSystem::SetStaticPriority(UReplicationSystem *this,FNetRefHandle param_1,float param_2)

{
  FReplicationSystemImpl *pFVar1;
  uint uVar2;
  
  pFVar1 = (this->Impl).Ptr;
  uVar2 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&(pFVar1->ReplicationSystemInternal).NetRefHandleManager,param_1);
  if (uVar2 != 0) {
    UE::Net::Private::FReplicationPrioritization::SetStaticPriority
              (&(pFVar1->ReplicationSystemInternal).Prioritization,uVar2,param_2);
  }
  return;
}

// SetSubObjectFilterStatus @ 144314d10

void __thiscall
UReplicationSystem::SetSubObjectFilterStatus
          (UReplicationSystem *this,FName param_1,FConnectionHandle param_2,ENetFilterStatus param_3
          )

{
  bool bVar1;
  FName local_res10;
  undefined1 local_18 [8];
  FNetObjectGroupHandle_u_0 local_10;
  
  local_res10 = param_1;
  bVar1 = UE::Net::IsSpecialNetConditionGroup(param_1);
  if (bVar1) {
    local_10.Value = (ulong64)&local_res10;
    `UReplicationSystem::SetSubObjectFilterStatus'::__l5::<lambda_1>::operator()(&local_10);
    return;
  }
  if ((((this->Impl).Ptr)->ReplicationSystemInternal).bBlockFilterChanges != false) {
    `UReplicationSystem::SetSubObjectFilterStatus'::__l8::<lambda_2>::operator()(local_18);
    return;
  }
  GetSubObjectFilterGroupHandle(this,(FName)&local_10);
  if (local_10.Value != 0) {
    UE::Net::Private::FReplicationFiltering::SetSubObjectFilterStatus
              (&(((this->Impl).Ptr)->ReplicationSystemInternal).Filtering,
               (FNetObjectGroupHandle)local_10._s_1,param_2,param_3);
    UE::Net::Private::FReplicationConditionals::MarkLifeTimeConditionalsDirtyForObjectsInGroup
              (&(((this->Impl).Ptr)->ReplicationSystemInternal).Conditionals,
               (FNetObjectGroupHandle)local_10._s_1);
  }
  return;
}

// Shutdown @ 144315080

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UReplicationSystem::Shutdown(UReplicationSystem *this)

{
  ulong64 uVar1;
  FReplicationSystemImpl *pFVar2;
  UIrisObjectReferencePackageMap *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  ulong64 *puVar6;
  FUObjectItem *this_02;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *this_03;
  ulonglong uVar9;
  FDestructionSentinel local_48;
  
  this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreUObjectDelegates::GetPostGarbageCollect();
  uVar1 = (this->PostGarbageCollectHandle).ID;
  uVar8 = 0;
  if (uVar1 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
               (FWriteAccessScope *)&local_48);
    uVar9 = uVar8;
    if (0 < (this_01->InvocationList).ArrayNum) {
      do {
        uVar7 = (uint)uVar8;
        uVar5 = 0;
        if ((int)uVar7 < (this_01->InvocationList).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_03 = (this_01->InvocationList).AllocatorInstance.Data + uVar9;
        if (((*(int *)&this_03[8].field_0x0 != 0) &&
            (*(longlong **)&this_03->field_0x0 != (longlong *)0x0)) &&
           (puVar6 = (ulong64 *)(**(code **)(**(longlong **)&this_03->field_0x0 + 0x40))(),
           *puVar6 == uVar1)) {
          if ((*(int *)&this_03[8].field_0x0 != 0) &&
             (*(undefined8 **)&this_03->field_0x0 != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)&this_03->field_0x0)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)this_03,0,0,0x10);
            *(undefined4 *)&this_03[8].field_0x0 = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_01,false);
          break;
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        uVar9 = uVar9 + 0x10;
      } while ((int)(uVar7 + 1) < (this_01->InvocationList).ArrayNum);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  pFVar2 = (this->Impl).Ptr;
  UE::Net::Private::FReplicationPrioritization::Deinit
            (&(pFVar2->ReplicationSystemInternal).Prioritization);
  UE::Net::Private::FReplicationFiltering::Deinit(&(pFVar2->ReplicationSystemInternal).Filtering);
  UE::Net::Private::FReplicationConnections::Deinit
            (&(pFVar2->ReplicationSystemInternal).Connections);
  UE::Net::Private::FDeltaCompressionBaselineManager::Deinit
            (&(pFVar2->ReplicationSystemInternal).DeltaCompressionBaselineManager);
  UE::Net::FReplicationStateStorage::Deinit
            (&(pFVar2->ReplicationSystemInternal).ReplicationStateStorage);
  if ((pFVar2->ReplicationSystemInternal).DirtyNetObjectTracker.NetRefHandleManager !=
      (FNetRefHandleManager *)0x0) {
    UE::Net::Private::FDirtyNetObjectTracker::Deinit
              (&(pFVar2->ReplicationSystemInternal).DirtyNetObjectTracker);
  }
  (**(code **)(((pFVar2->ReplicationSystemInternal).ReplicationBridge)->_padding_ + 0x2b8))();
  this_00 = (pFVar2->ReplicationSystemInternal).IrisObjectReferencePackageMap;
  if (this_00 != (UIrisObjectReferencePackageMap *)0x0) {
    this_02 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_02,RootSet);
    UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_00);
    (pFVar2->ReplicationSystemInternal).IrisObjectReferencePackageMap =
         (UIrisObjectReferencePackageMap *)0x0;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(pFVar2->ReplicationSystemInternal).NetRefHandleManager.
              OnMaxInternalNetRefIndexIncreased,pFVar2);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(pFVar2->ReplicationSystemInternal).NetRefHandleManager.OnInternalNetRefIndicesFreed,
             pFVar2);
  UE::Net::Private::FNetRefHandleManager::Deinit
            (&(pFVar2->ReplicationSystemInternal).NetRefHandleManager);
  pFVar2 = (this->Impl).Ptr;
  if (pFVar2 != (FReplicationSystemImpl *)0x0) {
    (this->Impl).Ptr = (FReplicationSystemImpl *)0x0;
    (**(code **)&pFVar2[-1].MetricNameAvgHugeObjectSendQueue.Number)();
  }
  UObjectBaseUtility::MarkAsGarbage
            ((UObjectBaseUtility *)(this->ReplicationBridge).field0_0x0.DebugPtr);
  (this->ReplicationBridge).field0_0x0.DebugPtr = (UObjectReplicationBridge *)0x0;
  return;
}

// StaticRegisterNativesUReplicationSystem @ 144315c20

void __cdecl UReplicationSystem::StaticRegisterNativesUReplicationSystem(void)

{
  return;
}

// TearOffNextUpdate @ 144316040

void __thiscall
UReplicationSystem::TearOffNextUpdate(UReplicationSystem *this,FNetRefHandle param_1)

{
  UReplicationBridge::AddPendingEndReplication
            ((UReplicationBridge *)(((this->Impl).Ptr)->ReplicationSystemInternal).ReplicationBridge
             ,param_1,ClearNetPushId|TearOff,No);
  return;
}

// TickPostReceive @ 144316060

void __thiscall UReplicationSystem::TickPostReceive(UReplicationSystem *this)

{
  FReplicationSystemImpl *pFVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  if (!__CsvProfilerStat984) {
    FCsvProfilerTrace::OutputInlineStat
              ("ReplicationSystem_TickPostReceive",_GCsvCategory_Iris.Index);
    __CsvProfilerStat984 = true;
  }
  uVar2 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationSystem_TickPostReceive",_GCsvCategory_Iris.Index,
             "CSV_ReplicationSystem_TickPostReceive");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId984,"ReplicationSystem_TickPostReceive",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x3d8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId984);
  }
  if (((this->Impl).Ptr)->CurrentSendPass != Invalid) {
    `UReplicationSystem::TickPostReceive'::__l2::<lambda_1>::operator()(local_res8);
  }
  ((this->Impl).Ptr)->CurrentSendPass = PostTickDispatch;
  pFVar1 = (this->Impl).Ptr;
  if (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::ProcessOOBNetObjectAttachmentSendQueue(void)___ptr64'
      ::__l2::__CsvProfilerStat591 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("ReplicationSystem_ProcessOOBNetObjectAttachmentSendQueue",_GCsvCategory_Iris.Index);
    `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::ProcessOOBNetObjectAttachmentSendQueue(void)___ptr64'
    ::__l2::__CsvProfilerStat591 = true;
  }
  uVar3 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationSystem_ProcessOOBNetObjectAttachmentSendQueue",_GCsvCategory_Iris.Index,
             "CSV_ReplicationSystem_ProcessOOBNetObjectAttachmentSendQueue");
  if (CpuChannel->Enabled < 0) {
    UE::Net::Private::FNetBlobManager::ProcessOOBNetObjectAttachmentSendQueue
              (&(pFVar1->ReplicationSystemInternal).NetBlobManager,
               &pFVar1->ConnectionsPendingPostTickDispatchSend);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::ProcessOOBNetObjectAttachmentSendQueue(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId591,
               "ReplicationSystem_ProcessOOBNetObjectAttachmentSendQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x24f);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::ProcessOOBNetObjectAttachmentSendQueue(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId591);
    UE::Net::Private::FNetBlobManager::ProcessOOBNetObjectAttachmentSendQueue
              (&(pFVar1->ReplicationSystemInternal).NetBlobManager,
               &pFVar1->ConnectionsPendingPostTickDispatchSend);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationSystem_ProcessOOBNetObjectAttachmentSendQueue",uVar3);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationSystem_TickPostReceive",uVar2);
  return;
}

// operator() @ 1504b9700

bool __thiscall `UReplicationSystem::NetUpdate'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088911>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088911>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b9740

bool __thiscall
`UReplicationSystem::SetCullDistanceOverride'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125087771>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              ((FNetRefHandleManager *)(*(longlong *)(*(longlong *)this + 0x28) + 0x160),local_28,
               **(uint **)((longlong)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125087771>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b97da;
    }
  }
  bVar2 = false;
LAB_1504b97da:
  if ((bVar4) && (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b9890

bool __thiscall `UReplicationSystem::TickPostReceive'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088806>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088806>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b98d0

bool __thiscall `UReplicationSystem::CloseDataStream'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088482>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088482>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b9920

bool __thiscall
`UReplicationSystem::GetConnectionUserData'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088394>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088394>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b9970

bool __thiscall `UReplicationSystem::GetDataStream'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088518>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088518>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b99c0

bool __thiscall `UReplicationSystem::GetDataStream'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088500>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088500>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b9d70

bool __thiscall `UReplicationSystem::RemoveFromAllGroups'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088088>);
  if (bVar4) {
    UE::Net::FNetRefHandle::ToString(*(FNetRefHandle **)((longlong)this + 0x10),&local_18);
    pUVar6 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectInstance
                       (*(FNetRefHandleManager **)this,**(uint **)((longlong)this + 8));
    if (pUVar6 == (UObject *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res10.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088088>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b9e45;
    }
  }
  bVar4 = false;
LAB_1504b9e45:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504b9e90

bool __thiscall
`UReplicationSystem::RemoveSubObjectFilter'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088186>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088186>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b9f70

bool __thiscall
`UReplicationSystem::SetOwningNetConnection'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088340>);
  if (bVar4) {
    UE::Net::FNetRefHandle::ToString(*(FNetRefHandle **)((longlong)this + 0x10),&local_18);
    pUVar6 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectInstance
                       (*(FNetRefHandleManager **)this,**(uint **)((longlong)this + 8));
    if (pUVar6 == (UObject *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res10.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088340>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504ba045;
    }
  }
  bVar4 = false;
LAB_1504ba045:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504ba1b0

bool __thiscall
`UReplicationSystem::SetSubObjectFilterStatus'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088214>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088214>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ba217;
    }
  }
  bVar2 = false;
LAB_1504ba217:
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

// operator() @ 1504ba2f0

bool __thiscall
`UReplicationSystem::GetSubObjectFilterGroupHandle'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088229>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088229>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ba357;
    }
  }
  bVar2 = false;
LAB_1504ba357:
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

// operator() @ 1504ba570

bool __thiscall
`UReplicationSystem::AddExclusionFilterGroup'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125087996>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125087996>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ba5b0

bool __thiscall
`UReplicationSystem::AddInclusionFilterGroup'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125087978>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125087978>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ba5f0

bool __thiscall `UReplicationSystem::AddToGroup'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088147>);
  if (bVar4) {
    UE::Net::FNetRefHandle::ToString(*(FNetRefHandle **)((longlong)this + 0x10),&local_18);
    pUVar6 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectInstance
                       (*(FNetRefHandleManager **)this,**(uint **)((longlong)this + 8));
    if (pUVar6 == (UObject *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res10.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088147>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504ba6c5;
    }
  }
  bVar4 = false;
LAB_1504ba6c5:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504ba760

bool __thiscall `UReplicationSystem::RemoveFromGroup'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088117>);
  if (bVar4) {
    UE::Net::FNetRefHandle::ToString(*(FNetRefHandle **)((longlong)this + 0x10),&local_18);
    pUVar6 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectInstance
                       (*(FNetRefHandleManager **)this,**(uint **)((longlong)this + 8));
    if (pUVar6 == (UObject *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res10.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088117>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504ba835;
    }
  }
  bVar4 = false;
LAB_1504ba835:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504ba880

bool __thiscall `UReplicationSystem::RemoveGroupFilter'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125087960>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125087960>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ba8c0

bool __thiscall
`UReplicationSystem::SetDeltaCompressionStatus'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125087848>);
  if (bVar4) {
    UE::Net::FNetRefHandle::ToString(*(FNetRefHandle **)((longlong)this + 0x10),&local_18);
    pUVar6 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectInstance
                       (*(FNetRefHandleManager **)this,**(uint **)((longlong)this + 8));
    if (pUVar6 == (UObject *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res10.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125087848>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504ba995;
    }
  }
  bVar4 = false;
LAB_1504ba995:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504ba9e0

bool __thiscall `UReplicationSystem::SetFilter'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088296>);
  if (bVar4) {
    UE::Net::FNetRefHandle::ToString(*(FNetRefHandle **)((longlong)this + 0x10),&local_18);
    pUVar6 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectInstance
                       (*(FNetRefHandleManager **)this,**(uint **)((longlong)this + 8));
    if (pUVar6 == (UObject *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res10.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088296>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504baab5;
    }
  }
  bVar4 = false;
LAB_1504baab5:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504bab00

bool __thiscall `UReplicationSystem::SetGroupFilterStatus'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125087924>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125087924>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bab40

bool __thiscall `UReplicationSystem::SetGroupFilterStatus'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125087942>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125087942>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bab80

bool __thiscall `UReplicationSystem::SetGroupFilterStatus'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125087906>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125087906>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504babc0

bool __thiscall
`UReplicationSystem::SetReplicationConditionConnectionFilter'::__l8::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125087885>);
  if (bVar4) {
    UE::Net::FNetRefHandle::ToString(*(FNetRefHandle **)((longlong)this + 0x10),&local_18);
    pUVar6 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectInstance
                       (*(FNetRefHandleManager **)this,**(uint **)((longlong)this + 8));
    if (pUVar6 == (UObject *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res10.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125087885>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504bac95;
    }
  }
  bVar4 = false;
LAB_1504bac95:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504baf60

bool __thiscall `UReplicationSystem::OpenDataStream'::__l24::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088540>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088540>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bb180

bool __thiscall `UReplicationSystem::CloseDataStream'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088475>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088475>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bb1d0

bool __thiscall `UReplicationSystem::GetDataStream'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088511>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088511>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bb220

bool __thiscall `UReplicationSystem::GetDataStream'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088493>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088493>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bb4e0

bool __thiscall
`UReplicationSystem::SetSubObjectFilterStatus'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088208>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088208>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bb730

bool __thiscall `UReplicationSystem::OpenDataStream'::__l27::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125088533>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125088533>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

