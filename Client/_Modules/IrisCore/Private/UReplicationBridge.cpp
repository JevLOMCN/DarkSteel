// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 56

// CanCreateDestructionInfo @ 144270db0

bool __thiscall UReplicationBridge::CanCreateDestructionInfo(UReplicationBridge *this)

{
  return true;
}

// StaticClass @ 144297a60

UClass * __cdecl UReplicationBridge::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationBridge.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationBridge",
               &Z_Registration_Info_UClass_UReplicationBridge.InnerSingleton,
               StaticRegisterNativesUReplicationBridge,0x110,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UReplicationBridge>,
               InternalVTableHelperCtorCaller<UReplicationBridge>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationBridge.InnerSingleton;
}

// UReplicationBridge @ 1442af360

UReplicationBridge * __thiscall
UReplicationBridge::UReplicationBridge(UReplicationBridge *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UReplicationBridge__6B_;
  *(undefined8 *)&this->LevelGroups = 0;
  *(undefined8 *)&(this->LevelGroups).field_0x8 = 0;
  *(undefined8 *)&(this->LevelGroups).field_0x20 = 0;
  *(undefined4 *)&(this->LevelGroups).field_0x28 = 0;
  *(undefined4 *)&(this->LevelGroups).field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelGroups).field_0x34 = 0;
  *(undefined4 *)&(this->LevelGroups).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LevelGroups).field_0x40 = 0;
  *(undefined4 *)&(this->LevelGroups).field_0x48 = 0;
  this->bInReceiveUpdate = false;
  *(undefined8 *)&this->HandlesToStopReplicating = 0;
  *(undefined8 *)&(this->HandlesToStopReplicating).field_0x8 = 0;
  *(undefined8 *)&(this->HandlesToStopReplicating).field_0x20 = 0;
  *(undefined4 *)&(this->HandlesToStopReplicating).field_0x28 = 0;
  *(undefined4 *)&(this->HandlesToStopReplicating).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlesToStopReplicating).field_0x34 = 0;
  *(undefined4 *)&(this->HandlesToStopReplicating).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HandlesToStopReplicating).field_0x40 = 0;
  *(undefined4 *)&(this->HandlesToStopReplicating).field_0x48 = 0;
  (this->HandlesPendingEndReplication).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HandlesPendingEndReplication).ArrayNum = 0;
  (this->HandlesPendingEndReplication).ArrayMax = 0;
  return this;
}

// UReplicationBridge @ 1442af420

UReplicationBridge * __thiscall UReplicationBridge::UReplicationBridge(UReplicationBridge *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UReplicationBridge__6B_;
  *(undefined8 *)&this->LevelGroups = 0;
  *(undefined8 *)&(this->LevelGroups).field_0x8 = 0;
  *(undefined8 *)&(this->LevelGroups).field_0x20 = 0;
  this->ReplicationSystem = (UReplicationSystem *)0x0;
  this->ReplicationProtocolManager = (FReplicationProtocolManager *)0x0;
  this->ReplicationStateDescriptorRegistry = (FReplicationStateDescriptorRegistry *)0x0;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  *(undefined4 *)&(this->LevelGroups).field_0x28 = 0;
  *(undefined4 *)&(this->LevelGroups).field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelGroups).field_0x34 = 0;
  *(undefined4 *)&(this->LevelGroups).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LevelGroups).field_0x40 = 0;
  *(undefined4 *)&(this->LevelGroups).field_0x48 = 0;
  this->bInReceiveUpdate = false;
  *(undefined8 *)&this->HandlesToStopReplicating = 0;
  *(undefined8 *)&(this->HandlesToStopReplicating).field_0x8 = 0;
  *(undefined8 *)&(this->HandlesToStopReplicating).field_0x20 = 0;
  *(undefined4 *)&(this->HandlesToStopReplicating).field_0x28 = 0;
  *(undefined4 *)&(this->HandlesToStopReplicating).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlesToStopReplicating).field_0x34 = 0;
  *(undefined4 *)&(this->HandlesToStopReplicating).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HandlesToStopReplicating).field_0x40 = 0;
  *(undefined4 *)&(this->HandlesToStopReplicating).field_0x48 = 0;
  (this->HandlesPendingEndReplication).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HandlesPendingEndReplication).ArrayNum = 0;
  (this->HandlesPendingEndReplication).ArrayMax = 0;
  return this;
}

// ~UReplicationBridge @ 1442b0e00

void __thiscall UReplicationBridge::~UReplicationBridge(UReplicationBridge *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UReplicationBridge__6B_;
  pFVar1 = (this->HandlesPendingEndReplication).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->HandlesToStopReplicating).field_0x48 = 0;
  pvVar2 = *(void **)&(this->HandlesToStopReplicating).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,enum_EEndReplicationFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,enum_EEndReplicationFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->HandlesToStopReplicating);
  *(undefined4 *)&(this->LevelGroups).field_0x48 = 0;
  pvVar2 = *(void **)&(this->LevelGroups).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::Net::FNetObjectGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::Net::FNetObjectGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::Net::FNetObjectGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LevelGroups);
  UObject::~UObject((UObject *)this);
  return;
}

// AddPendingEndReplication @ 1442b5910

void __thiscall
UReplicationBridge::AddPendingEndReplication
          (UReplicationBridge *this,FNetRefHandle param_1,EEndReplicationFlags param_2,
          EPendingEndReplicationImmediate param_3)

{
  int *piVar1;
  TArray<UReplicationBridge::FPendingEndReplicationInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FNetRefHandle_u_0 *pFVar3;
  code *pcVar4;
  FNetRefHandle_u_0 FVar5;
  bool bVar6;
  int iVar7;
  FNetRefHandle_u_0 *pFVar8;
  FNetRefHandle_u_0 local_18;
  EEndReplicationFlags EStack_10;
  undefined4 uStack_c;
  
  if ((param_2 & (Flush|TearOff)) == None) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5507613121176404518>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationBridge.cpp"
                       ,0x226,
                       "EnumHasAnyFlags(DestroyFlags, EEndReplicationFlags::Flush | EEndReplicationFlags::TearOff)"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pTVar2 = &this->HandlesPendingEndReplication;
    pFVar3 = (FNetRefHandle_u_0 *)(pTVar2->AllocatorInstance).Data;
    if (pFVar3 != pFVar3 + (longlong)(this->HandlesPendingEndReplication).ArrayNum * 2) {
      pFVar8 = pFVar3;
      do {
        if ((pFVar8->Value & 0x3fffffffffffff) == ((ulonglong)param_1.field0_0x0 & 0x3fffffffffffff)
           ) {
          return;
        }
        pFVar8 = pFVar8 + 2;
      } while (pFVar8 != pFVar3 + (longlong)(this->HandlesPendingEndReplication).ArrayNum * 2);
    }
    uStack_c = CONCAT31(uStack_c._1_3_,param_3);
    local_18 = param_1.field0_0x0;
    EStack_10 = param_2;
    if (((pFVar3 <= &local_18) &&
        (&local_18 < pFVar3 + (longlong)(this->HandlesPendingEndReplication).ArrayMax * 2)) &&
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
    iVar7 = (this->HandlesPendingEndReplication).ArrayNum;
    piVar1 = &(this->HandlesPendingEndReplication).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    FVar5.Value._4_4_ = uStack_c;
    FVar5.Value._0_4_ = EStack_10;
    (this->HandlesPendingEndReplication).ArrayNum = iVar7 + 1;
    pFVar3 = (FNetRefHandle_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
    pFVar3->_s_0 = (FNetRefHandle_u_0_s_0)local_18;
    pFVar3[1] = FVar5;
  }
  return;
}

// CacheNetRefHandleCreationInfo @ 1442b6a30

bool __thiscall
UReplicationBridge::CacheNetRefHandleCreationInfo(UReplicationBridge *this,FNetRefHandle param_1)

{
  return false;
}

// CallCacheNetRefHandleCreationInfo @ 1442b6de0

bool __thiscall
UReplicationBridge::CallCacheNetRefHandleCreationInfo
          (UReplicationBridge *this,FNetRefHandle param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001442b6de3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2f0))();
  return (bool)uVar1;
}

// CallDetachInstance @ 1442b6df0

void __thiscall
UReplicationBridge::CallDetachInstance(UReplicationBridge *this,FNetRefHandle param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442b6df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f8))();
  return;
}

// CallPreSendUpdate @ 1442b6e00

void __thiscall UReplicationBridge::CallPreSendUpdate(UReplicationBridge *this,float param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FNetRefHandle_u_0 *pFVar4;
  FNetRefHandle_u_0 *pFVar5;
  
  iVar1 = (this->HandlesPendingEndReplication).ArrayNum;
  pFVar4 = (FNetRefHandle_u_0 *)(this->HandlesPendingEndReplication).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = pFVar4 + (longlong)iVar1 * 2;
  for (; pFVar4 != pFVar5; pFVar4 = pFVar4 + 2) {
    if ((*(uint *)(pFVar4 + 1) & 2) != 0) {
      InternalTearOff(this,(FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar4->_s_0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001442b6e9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))(this);
  return;
}

// CallPreSendUpdateSingleHandle @ 1442b6eb0

void __thiscall
UReplicationBridge::CallPreSendUpdateSingleHandle(UReplicationBridge *this,FNetRefHandle param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442b6eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e0))();
  return;
}

// CallPruneStaleObjects @ 1442b6ec0

void __thiscall UReplicationBridge::CallPruneStaleObjects(UReplicationBridge *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001442b6ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x300))();
  return;
}

// CallUpdateInstancesWorldLocation @ 1442b7010

void __thiscall UReplicationBridge::CallUpdateInstancesWorldLocation(UReplicationBridge *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001442b7013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))();
  return;
}

// ClearNetPushIdOnFragments @ 1442b7a60

void __thiscall
UReplicationBridge::ClearNetPushIdOnFragments
          (UReplicationBridge *this,
          TArrayView<UE::Net::FReplicationFragment_const_*_const,int> *param_1)

{
  return;
}

// ClearNetPushIds @ 1442b7a70

void __thiscall UReplicationBridge::ClearNetPushIds(UReplicationBridge *this,uint param_1)

{
  return;
}

// CreateLevelGroup @ 1442b9790

FNetObjectGroupHandle __thiscall
UReplicationBridge::CreateLevelGroup(UReplicationBridge *this,UObject *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FNetObjectGroupHandle FVar3;
  TPairInitializer<FObjectKey_&&,UE::Net::FNetObjectGroupHandle_&> local_res8;
  FWeakObjectPtr local_38;
  FName local_30;
  FWeakObjectPtr *local_28;
  UObject *local_20;
  
  UReplicationSystem::CreateGroup(this->ReplicationSystem,(FName)param_1);
  if (*(longlong *)param_1 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5507613121176404782>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationBridge.cpp"
                       ,0x32e,"LevelGroupHandle.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.field0_0x0 = (FNetObjectGroupHandle_u_0)(*pcVar1)();
      return (FNetObjectGroupHandle)FVar3.field0_0x0;
    }
  }
  else {
    UReplicationSystem::AddExclusionFilterGroup
              (this->ReplicationSystem,(FNetObjectGroupHandle)*(FNetObjectGroupHandle_u_0 *)param_1)
    ;
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    if (param_2 != (FName)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res8.Value = (FNetObjectGroupHandle *)0x0;
      local_30 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.Value,(FObjectPtr)&local_30);
      local_38 = (FWeakObjectPtr)local_res8.Value;
    }
    local_28 = &local_38;
    local_20 = param_1;
    TSet<TTuple<FObjectKey,UE::Net::FNetObjectGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FObjectKey_&&,UE::Net::FNetObjectGroupHandle_&>_>
              ((TSet<TTuple<FObjectKey,UE::Net::FNetObjectGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>,FDefaultSetAllocator>
                *)&this->LevelGroups,&local_res8,(bool *)&local_28);
  }
  return (FNetObjectGroupHandle)(FNetObjectGroupHandle_u_0)param_1;
}

// DestroyGlobalNetHandle @ 1442bdd60

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall UReplicationBridge::DestroyGlobalNetHandle(UReplicationBridge *this,uint param_1)

{
  FReplicatedObjectData *pFVar1;
  FNetHandle_u_0 local_res8;
  
  pFVar1 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                     (this->NetRefHandleManager,param_1);
  if (((pFVar1->NetHandle).field0_0x0.Value.ObjectIndex != 0) ||
     ((pFVar1->NetHandle).field0_0x0.Value.ObjectSerialNumber != 0)) {
    local_res8 = (pFVar1->NetHandle).field0_0x0;
    UE::Net::FNetHandleManager::DestroyNetHandle((FNetHandle)&local_res8);
  }
  return;
}

// DetachInstance @ 1442be300

void __thiscall UReplicationBridge::DetachInstance(UReplicationBridge *this,FNetRefHandle param_1)

{
  return;
}

// GetAllLevelGroups @ 1442c21a0

TMap<FObjectKey,UE::Net::FNetObjectGroupHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>_>
* __thiscall UReplicationBridge::GetAllLevelGroups(UReplicationBridge *this)

{
  return &this->LevelGroups;
}

// GetInitialDependencies @ 1442c2760

void __thiscall
UReplicationBridge::GetInitialDependencies
          (UReplicationBridge *this,FNetRefHandle param_1,
          TArray<UE::Net::FNetDependencyInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  return;
}

// GetLevelGroup @ 1442c2770

FNetObjectGroupHandle __thiscall
UReplicationBridge::GetLevelGroup(UReplicationBridge *this,UObject *param_1)

{
  FNetObjectGroupHandle_u_0 *pFVar1;
  UObject *in_R8;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [8];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (in_R8 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(in_R8);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(in_R8);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  }
  pFVar1 = &TMapBase<FObjectKey,UE::Net::FNetObjectGroupHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>_>
            ::Find((TMapBase<FObjectKey,UE::Net::FNetObjectGroupHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>_>
                    *)&this->LevelGroups,(FObjectKey *)&local_res8)->field0_0x0;
  if (pFVar1 != (FNetObjectGroupHandle_u_0 *)0x0) {
    *(FNetObjectGroupHandle_u_0 *)param_1 = *pFVar1;
    return (FNetObjectGroupHandle)(FNetObjectGroupHandle_u_0)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (FNetObjectGroupHandle)(FNetObjectGroupHandle_u_0)param_1;
}

// GetNetObjectFactoryId @ 1442c28f0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

uchar __thiscall
UReplicationBridge::GetNetObjectFactoryId(UReplicationBridge *this,FNetRefHandle param_1)

{
  FNetRefHandleManager *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  uint uVar5;
  FReplicatedObjectData *pFVar6;
  
  this_00 = this->NetRefHandleManager;
  uVar5 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,param_1);
  pFVar1 = (this_00->AssignedInternalIndices).Storage.AllocatorInstance.Data;
  if ((this_00->AssignedInternalIndices).BitCount <= uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AssignedInternalIndices.GetBit(InternalIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                       ,0x233,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar6 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this_00,uVar5);
  return pFVar6->NetFactoryId;
}

// GetPrivateStaticClass @ 1442c3700

UClass * __cdecl UReplicationBridge::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationBridge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationBridge",
               &Z_Registration_Info_UClass_UReplicationBridge.InnerSingleton,
               StaticRegisterNativesUReplicationBridge,0x110,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UReplicationBridge>,
               InternalVTableHelperCtorCaller<UReplicationBridge>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationBridge.InnerSingleton;
}

// Initialize @ 1442c5500

void __thiscall UReplicationBridge::Initialize(UReplicationBridge *this,UReplicationSystem *param_1)

{
  FReplicationSystemInternal *pFVar1;
  
  pFVar1 = UReplicationSystem::GetReplicationSystemInternal(param_1);
  this->ReplicationProtocolManager = &pFVar1->ReplicationProtocolManager;
  this->ReplicationSystem = param_1;
  this->ReplicationStateDescriptorRegistry = &pFVar1->ReplicationStateDescriptorRegistry;
  this->NetRefHandleManager = &pFVar1->NetRefHandleManager;
  this->ObjectReferenceCache = &pFVar1->ObjectReferenceCache;
  this->Groups = &pFVar1->Groups;
  return;
}

// InternalAddSubObject @ 1442c5670

void __thiscall
UReplicationBridge::InternalAddSubObject
          (UReplicationBridge *this,FNetRefHandle param_1,FNetRefHandle param_2,
          FNetRefHandle param_3,ESubObjectInsertionOrder param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EAddSubObjectFlags EVar4;
  
  EVar4 = Default;
  if (param_4 != None) {
    if (param_4 == ReplicateWith) {
      EVar4 = ReplicateWithSubObject|Default;
    }
    else if (param_4 == InsertAtStart) {
      EVar4 = InsertAtStart|Default;
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationBridge.cpp"
                         ,0x166,L"Missing implementation of ESubObjectInsertionOrder enum");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  bVar2 = UE::Net::Private::FNetRefHandleManager::AddSubObject
                    (this->NetRefHandleManager,param_1,param_2,param_3,EVar4);
  if (bVar2) {
    uVar3 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                      (this->NetRefHandleManager,param_2);
    UE::Net::Private::ForceNetUpdate(this->ReplicationSystem->Id,uVar3);
    UReplicationSystem::SetStaticPriority(this->ReplicationSystem,param_2,__real_3f800000);
  }
  return;
}

// InternalAttachInstanceToNetRefHandle @ 1442c5750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UReplicationBridge::InternalAttachInstanceToNetRefHandle
          (UReplicationBridge *this,FNetRefHandle param_1,bool param_2,
          FReplicationInstanceProtocol *param_3,UObject *param_4,FNetHandle param_5)

{
  code *pcVar1;
  FNetRefHandle_u_0 FVar2;
  bool bVar3;
  uint uVar4;
  FReplicatedObjectData *pFVar5;
  FName local_res8;
  FNetRefHandle_u_0 local_res10;
  undefined8 local_68;
  FString local_60;
  FString local_50;
  
  local_res10 = param_1.field0_0x0;
  if ((((ulonglong)param_1.field0_0x0 & 0xffc0000000000000) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReplicationSystemId != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                         ,0x2b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar2 = local_res10;
  uVar4 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (this->NetRefHandleManager,(FNetRefHandle)local_res10._s_0);
  UE::Net::Private::FNetRefHandleManager::AttachInstanceProtocol
            (this->NetRefHandleManager,uVar4,param_3,param_4);
  if (5 < (byte)LogIris._0_1_) {
    UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_res10._s_0,&local_50);
    local_res8.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
    local_res8.Number = *(uint *)&param_4->field_0x1c;
    ::FName::ToString(&local_res8,&local_60);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  if (param_2) {
    pFVar5 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                       (this->NetRefHandleManager,uVar4);
    local_68 = *(undefined8 *)param_5.field0_0x0;
    UE::Net::Private::FReplicationInstanceOperationsInternal::BindInstanceProtocol
              ((FNetHandle)&local_68,param_3,pFVar5->Protocol);
    UE::Net::Private::ForceNetUpdate((uint)((ulonglong)FVar2 >> 0x36) - 1,uVar4);
  }
  return;
}

// InternalCreateNetObject @ 1442c58e0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetRefHandle __thiscall
UReplicationBridge::InternalCreateNetObject
          (UReplicationBridge *this,FNetRefHandle param_1,FNetHandle param_2,
          FCreateNetObjectParams *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  FNetDebugName *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNetRefHandle FVar6;
  undefined8 local_res8;
  longlong in_stack_00000028;
  
  if ((ulonglong)param_2.field0_0x0 < 0x40000000000000) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocatedHandle.IsValid() && AllocatedHandle.IsCompleteHandle()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationBridge.cpp"
                       ,0xcc,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      FVar6.field0_0x0 = (FNetRefHandle_u_0)(*pcVar4)();
      return (FNetRefHandle)FVar6.field0_0x0;
    }
  }
  local_res8._0_1_ = param_3->NetFactoryId;
  local_res8._1_1_ = param_3->IrisAsyncLoadingPriority;
  local_res8._2_6_ = *(undefined6 *)&param_3->field_0x2;
  UE::Net::Private::FNetRefHandleManager::CreateNetObject
            (this->NetRefHandleManager,param_1,param_2,(FCreateNetObjectParams *)&local_res8);
  uVar2 = *(ulonglong *)param_1.field0_0x0;
  if (uVar2 != 0) {
    uVar1 = *(uint *)(*(longlong *)(in_stack_00000028 + 8) + 0x2c);
    pFVar3 = *(FNetDebugName **)(*(longlong *)(in_stack_00000028 + 8) + 0x30);
    if (uVar2 < 0x40000000000000) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReplicationSystemId != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                         ,0x2b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        FVar6.field0_0x0 = (FNetRefHandle_u_0)(*pcVar4)();
        return (FNetRefHandle)FVar6.field0_0x0;
      }
    }
    FNetTrace::TraceObjectCreated
              ((uint)((ulonglong)*(undefined8 *)param_1.field0_0x0 >> 0x36) - 1,
               uVar2 & 0x3fffffffffffff,pFVar3,(ulonglong)uVar1,0);
  }
  return (FNetRefHandle)param_1.field0_0x0.Value;
}

// InternalCreateNetObjectFromRemote @ 1442c59f0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetRefHandle __thiscall
UReplicationBridge::InternalCreateNetObjectFromRemote
          (UReplicationBridge *this,FNetRefHandle param_1,FCreateNetObjectParams *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  FNetDebugName *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNetRefHandle FVar6;
  longlong in_R9;
  
  UE::Net::Private::FNetRefHandleManager::CreateNetObjectFromRemote
            (this->NetRefHandleManager,param_1,param_2);
  uVar2 = *(ulonglong *)param_1.field0_0x0;
  if (uVar2 != 0) {
    uVar1 = *(uint *)(*(longlong *)(in_R9 + 8) + 0x2c);
    pFVar3 = *(FNetDebugName **)(*(longlong *)(in_R9 + 8) + 0x30);
    if (uVar2 < 0x40000000000000) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReplicationSystemId != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                         ,0x2b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        FVar6.field0_0x0 = (FNetRefHandle_u_0)(*pcVar4)();
        return (FNetRefHandle)FVar6.field0_0x0;
      }
    }
    FNetTrace::TraceObjectCreated
              ((uint)((ulonglong)*(undefined8 *)param_1.field0_0x0 >> 0x36) - 1,
               uVar2 & 0x3fffffffffffff,pFVar3,(ulonglong)uVar1,1);
  }
  return (FNetRefHandle)param_1.field0_0x0.Value;
}

// InternalDestroySubObjects @ 1442c5fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UReplicationBridge::InternalDestroySubObjects
          (UReplicationBridge *this,FNetRefHandle param_1,EEndReplicationFlags param_2)

{
  FNetRefHandleManager *pFVar1;
  FNetRefHandle FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  FNetRefHandle_u_0 *pFVar10;
  TArrayView<unsigned_int_const_,int> local_48;
  FString local_38;
  
  pFVar1 = this->NetRefHandleManager;
  uVar7 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(pFVar1,param_1);
  if (uVar7 != 0) {
    UE::Net::Private::FNetRefHandleManager::GetChildSubObjects(pFVar1,&local_48,uVar7);
    for (puVar9 = local_48.DataPtr; puVar9 != local_48.DataPtr + local_48.ArrayNum;
        puVar9 = puVar9 + 1) {
      uVar7 = *puVar9;
      pFVar1 = this->NetRefHandleManager;
      uVar5 = (int)uVar7 / 100;
      uVar8 = 0;
      if ((int)uVar5 < (int)(pFVar1->ReplicatedObjectData)._padding_) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = (FNetRefHandle_u_0 *)
                (*(longlong *)((pFVar1->ReplicatedObjectData)._padding_ + (longlong)(int)uVar5 * 8)
                + (ulonglong)(uint)((int)uVar7 % 100) * 0x38);
      FVar2.field0_0x0 = (FNetRefHandle_u_0)*(FNetRefHandle_u_0 *)&pFVar10->_s_0;
      if ((*(byte *)((longlong)pFVar10 + 0x32) >> 2 & 1) != 0) {
        pFVar3 = (this->NetRefHandleManager->GlobalScopableInternalIndices).Storage.
                 AllocatorInstance.Data;
        if (((this->NetRefHandleManager->GlobalScopableInternalIndices).BitCount <= uVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2c1,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(uint *)(pFVar3 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
          *(ushort *)((longlong)pFVar10 + 0x32) = *(ushort *)((longlong)pFVar10 + 0x32) | 0x100;
          if (5 < (byte)LogIris._0_1_) {
            UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
                      (this->NetRefHandleManager,&local_38,FVar2);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
          DestroyLocalNetHandle(this,FVar2,param_2);
        }
      }
    }
  }
  return;
}

// InternalDetachInstanceFromNetRefHandle @ 1442c61c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UReplicationBridge::InternalDetachInstanceFromNetRefHandle(UReplicationBridge *this,uint param_1)

{
  uchar *puVar1;
  FReplicationFragment *pFVar2;
  FReplicationInstanceProtocol *pFVar3;
  FReplicatedObjectData *pFVar4;
  longlong lVar5;
  FReplicationFragment **ppFVar6;
  FFragmentData *pFVar7;
  FReplicationStateDescriptor **ppFVar8;
  ulonglong uVar9;
  FString local_18;
  
  pFVar3 = UE::Net::Private::FNetRefHandleManager::DetachInstanceProtocol
                     (this->NetRefHandleManager,param_1);
  if (pFVar3 != (FReplicationInstanceProtocol *)0x0) {
    if (5 < (byte)LogIris._0_1_) {
      UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                (this->NetRefHandleManager,&local_18,param_1);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if ((pFVar3->InstanceTraits & IsBound) != None) {
      pFVar4 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                         (this->NetRefHandleManager,param_1);
      if ((pFVar3->InstanceTraits & IsBound) != None) {
        pFVar7 = pFVar3->FragmentData;
        ppFVar8 = pFVar4->Protocol->ReplicationStateDescriptors;
        if (pFVar3->FragmentCount != 0) {
          uVar9 = (ulonglong)pFVar3->FragmentCount;
          do {
            puVar1 = pFVar7->ExternalSrcBuffer;
            if (puVar1 != (uchar *)0x0) {
              lVar5 = 0;
              if (((*ppFVar8)->Traits & IsNativeFastArrayReplicationState) != None) {
                lVar5 = (ulonglong)(*ppFVar8)->ChangeMasksExternalOffset - 4;
              }
              *(uint *)(puVar1 + lVar5) =
                   *(uint *)(puVar1 + lVar5) ^ *(uint *)(puVar1 + lVar5) & 0x3fffffff;
            }
            pFVar7 = pFVar7 + 1;
            ppFVar8 = ppFVar8 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        pFVar3->InstanceTraits = pFVar3->InstanceTraits & ~IsBound;
      }
    }
    ppFVar6 = pFVar3->Fragments;
    if (pFVar3->FragmentCount != 0) {
      uVar9 = (ulonglong)pFVar3->FragmentCount;
      do {
        pFVar2 = *ppFVar6;
        if (((pFVar2->Traits & DeleteWithInstanceProtocol) != None) &&
           (pFVar2 != (FReplicationFragment *)0x0)) {
          (**(code **)pFVar2->_padding_)(pFVar2,1);
        }
        ppFVar6 = ppFVar6 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    FMemory::Free(pFVar3);
  }
  return;
}

// InternalFlushStateData @ 1442c64b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "EFlushFlags": Some values do not have unique names */

void __thiscall
UReplicationBridge::InternalFlushStateData(UReplicationBridge *this,FNetRefHandle param_1)

{
  uint uVar1;
  FNetRefHandleManager *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  FReplicationSystemInternal *pFVar6;
  FReplicationConnection *pFVar7;
  undefined8 *puVar8;
  uint uVar9;
  FNetStatsContext *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FNetStatsContext *pFVar13;
  bool bVar14;
  undefined1 auStackY_478 [32];
  FNetBitStreamWriter local_438;
  FInternalNetSerializationContext local_418;
  FChangeMaskCache local_3e0;
  FNetRefHandle_u_0 local_3a8;
  undefined8 local_3a0;
  undefined8 local_390 [95];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  FInternalNetSerializationContext *local_78;
  undefined8 uStack_70;
  FNetStatsContext *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_478;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId608,"InternalFlushStateData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationBridge.cpp"
               ,0x260);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId608);
  }
  this_00 = this->NetRefHandleManager;
  uVar4 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,param_1);
  if (uVar4 != 0) {
    UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this_00,uVar4);
    pFVar10 = (FNetStatsContext *)0x0;
    local_3e0.Indices.ArrayMax = 1;
    local_3e0.Indices.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)0x0;
    local_3e0.Indices.ArrayNum = 0;
    local_3e0.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_3e0.Storage.ArrayNum = 0;
    local_3e0.Storage.ArrayMax = 1;
    UE::Net::FNetBitStreamWriter::FNetBitStreamWriter(&local_438);
    lVar5 = 0x20;
    local_3a8.Value = 0;
    puVar8 = local_390;
    local_3a0 = 0;
    do {
      *puVar8 = 0;
      puVar8 = puVar8 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    local_48 = local_48 & 0xfffffffc;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = (FInternalNetSerializationContext *)0x0;
    uStack_70 = 0;
    local_68 = (FNetStatsContext *)0x0;
    uStack_60 = 0;
    local_98 = 0;
    local_90 = 0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0xffffffff;
    UE::Net::Private::FInternalNetSerializationContext::FInternalNetSerializationContext
              (&local_418,this->ReplicationSystem);
    local_78 = &local_418;
    pFVar6 = UReplicationSystem::GetReplicationSystemInternal(this->ReplicationSystem);
    if (((pFVar6->TypeStats).bIsInParallelPhase != false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsInParallelPhase",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.h"
                           ,0xc6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_68 = pFVar10;
    if ((pFVar6->TypeStats).bIsEnabled != false) {
      local_68 = (pFVar6->TypeStats).ParentStatsContext;
    }
    InternalFlushStateData
              (this,(FNetSerializationContext *)&local_3a8._s_0,&local_3e0,&local_438,uVar4);
    if (0 < local_3e0.Indices.ArrayNum) {
      pFVar6 = UReplicationSystem::GetReplicationSystemInternal(this->ReplicationSystem);
      uVar4 = (pFVar6->Connections).ValidConnections.Storage.ArrayNum;
      uVar1 = (pFVar6->Connections).ValidConnections.BitCount;
      pFVar11 = (pFVar6->Connections).ValidConnections.Storage.AllocatorInstance.Data;
      pFVar13 = pFVar10;
      if (uVar4 != 0) {
        do {
          iVar12 = (int)pFVar10;
          uVar9 = 0xffffffff;
          if ((int)pFVar13 == uVar4 - 1) {
            uVar9 = 0xffffffff >> (-(char)uVar1 & 0x1fU);
          }
          for (uVar9 = uVar9 & *(uint *)pFVar11; uVar9 != 0; uVar9 = uVar9 >> 1) {
            if ((uVar9 & 1) != 0) {
              pFVar7 = UE::Net::Private::FReplicationConnections::GetConnection
                                 (&pFVar6->Connections,(uint)pFVar10);
              UE::Net::Private::FReplicationWriter::InternalUpdateDirtyChangeMasks
                        (pFVar7->ReplicationWriter,&local_3e0,FlushFlags_FlushState,false);
            }
            pFVar10 = (FNetStatsContext *)(ulonglong)((uint)pFVar10 + 1);
          }
          uVar9 = (int)pFVar13 + 1;
          pFVar11 = pFVar11 + 4;
          pFVar10 = (FNetStatsContext *)(ulonglong)(iVar12 + 0x20);
          pFVar13 = (FNetStatsContext *)(ulonglong)uVar9;
        } while (uVar9 < uVar4);
      }
    }
    UE::Net::FNetBitStreamWriter::~FNetBitStreamWriter(&local_438);
    if (local_3e0.Storage.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_3e0.Storage.AllocatorInstance.SecondaryData);
    }
    if (local_3e0.Indices.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)0x0) {
      FMemory::Free((void *)local_3e0.Indices.AllocatorInstance.SecondaryData);
    }
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsAllowedToDestroyInstance @ 1442c7020

bool __thiscall
UReplicationBridge::IsAllowedToDestroyInstance(UReplicationBridge *this,UObject *param_1)

{
  return true;
}

// IsReplicatedHandle @ 1442c73a0

bool __thiscall
UReplicationBridge::IsReplicatedHandle(UReplicationBridge *this,FNetRefHandle param_1)

{
  bool bVar1;
  
  if (param_1.field0_0x0 != 0) {
    bVar1 = UE::Net::Private::FNetRefHandleManager::IsNetRefHandleAssigned
                      (this->NetRefHandleManager,param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// NotifyStreamingLevelUnload @ 1442c8510

void __thiscall
UReplicationBridge::NotifyStreamingLevelUnload(UReplicationBridge *this,UObject *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  FNetObjectGroupHandle_u_0 local_res10;
  UObject *local_res18 [2];
  
  local_res10.Value = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  }
  bVar1 = TMap<FObjectKey,UE::Net::FNetObjectGroupHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>_>
          ::RemoveAndCopyValue
                    (&this->LevelGroups,(FObjectKey *)&local_res8,
                     (FNetObjectGroupHandle *)&local_res10._s_1);
  if (bVar1) {
    (**(code **)(this->_padding_ + 0x340))(this,local_res10.Value);
    UReplicationSystem::DestroyGroup
              (this->ReplicationSystem,(FNetObjectGroupHandle)local_res10._s_1);
    return;
  }
  return;
}

// OnErrorWithNetRefHandleReported @ 1442c8670

void __thiscall
UReplicationBridge::OnErrorWithNetRefHandleReported
          (UReplicationBridge *this,ENetRefHandleError param_1,FNetRefHandle param_2,uint param_3,
          TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// OnPostReceiveUpdate @ 1442c8a80

void __thiscall UReplicationBridge::OnPostReceiveUpdate(UReplicationBridge *this)

{
  return;
}

// OnPostSeamlessTravelGarbageCollect @ 1442c8a90

void __thiscall UReplicationBridge::OnPostSeamlessTravelGarbageCollect(UReplicationBridge *this)

{
  return;
}

// OnPostSendUpdate @ 1442c8aa0

void __thiscall UReplicationBridge::OnPostSendUpdate(UReplicationBridge *this)

{
  return;
}

// OnPreSeamlessTravelGarbageCollect @ 1442c8ab0

void __thiscall UReplicationBridge::OnPreSeamlessTravelGarbageCollect(UReplicationBridge *this)

{
  return;
}

// OnProtocolMismatchReported @ 1442c8ac0

void __thiscall
UReplicationBridge::OnProtocolMismatchReported
          (UReplicationBridge *this,FNetRefHandle param_1,uint param_2)

{
  return;
}

// OnStartPreSendUpdate @ 1442c8ad0

void __thiscall UReplicationBridge::OnStartPreSendUpdate(UReplicationBridge *this)

{
  return;
}

// PostReceiveUpdate @ 1442ca360

void __thiscall UReplicationBridge::PostReceiveUpdate(UReplicationBridge *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((this->bInReceiveUpdate != true) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInReceiveUpdate == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationBridge.cpp"
                         ,0x4e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = 0;
  this->bInReceiveUpdate = false;
  uVar6 = 1;
  iVar3 = *(int *)&(this->HandlesToStopReplicating).field_0x28;
  TStack_60.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->HandlesToStopReplicating).field_0x10;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->HandlesToStopReplicating).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_60.Array;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1442ca43e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1442ca43e:
  uVar10 = *(uint *)&(this->HandlesToStopReplicating).field_0x28;
  puVar1 = &(this->HandlesToStopReplicating).field_0x10;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->HandlesToStopReplicating).field_0x8 -
                       *(int *)&(this->HandlesToStopReplicating).field_0x34);
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->HandlesToStopReplicating).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->HandlesToStopReplicating).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1442ca540;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1442ca540:
  while( true ) {
    if (*(int *)&(this->HandlesToStopReplicating).field_0x8 -
        *(int *)&(this->HandlesToStopReplicating).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,enum_EEndReplicationFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)&this->HandlesToStopReplicating;
    StopReplicatingNetRefHandle
              (this,(FNetRefHandle)
                    *(FNetRefHandle_u_0 *)
                     &((FNetRefHandle_u_0 *)(lVar8 + (longlong)TStack_60.CurrentBitIndex * 0x18))->
                      _s_0,
               *(EEndReplicationFlags *)(lVar8 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<UE::Net::FNetRefHandle,enum_EEndReplicationFlags>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,enum_EEndReplicationFlags,0>,FDefaultSetAllocator>
  ::Reset(&this->HandlesToStopReplicating);
                    /* WARNING: Could not recover jumptable at 0x0001442ca5bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d8))(this);
  return;
}

// PostSeamlessTravelGarbageCollect @ 1442ca5f0

void __thiscall UReplicationBridge::PostSeamlessTravelGarbageCollect(UReplicationBridge *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001442ca5f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x338))();
  return;
}

// PreReceiveUpdate @ 1442caa70

void __thiscall UReplicationBridge::PreReceiveUpdate(UReplicationBridge *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bInReceiveUpdate == false) {
    this->bInReceiveUpdate = true;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bInReceiveUpdate == false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationBridge.cpp"
                     ,0x48,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bInReceiveUpdate = true;
  return;
}

// PreSeamlessTravelGarbageCollect @ 1442caad0

void __thiscall UReplicationBridge::PreSeamlessTravelGarbageCollect(UReplicationBridge *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  TMap<FObjectKey,UE::Net::FNetObjectGroupHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>_>
  *this_00;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  (**(code **)(this->_padding_ + 0x340))();
  puVar2 = &(this->LevelGroups).field_0x10;
  iVar10 = 0;
  iVar3 = *(int *)&(this->LevelGroups).field_0x28;
  this_00 = &this->LevelGroups;
  iVar12 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->LevelGroups).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar2;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1442cab7d;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1442cab7d:
  uVar9 = *(uint *)&(this->LevelGroups).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->LevelGroups).field_0x8 -
                       *(int *)&(this->LevelGroups).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->LevelGroups).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->LevelGroups).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1442cac80;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_1442cac80:
  while( true ) {
    if (*(int *)&(this->LevelGroups).field_0x8 - *(int *)&(this->LevelGroups).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::Net::FNetObjectGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    UReplicationSystem::DestroyGroup
              (this->ReplicationSystem,
               (FNetObjectGroupHandle)
               ((FNetObjectGroupHandle_u_0 *)
               (*(longlong *)&this_00->field_0x0 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18))
               ->_s_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar5 = 1 < *(int *)&(this->LevelGroups).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FObjectKey,UE::Net::FNetObjectGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FObjectKey,UE::Net::FNetObjectGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar2 = &(this->LevelGroups).field_0xc;
  *(undefined4 *)&(this->LevelGroups).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->LevelGroups).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LevelGroups).field_0x34 = 0;
  iVar3 = *(int *)&(this->LevelGroups).field_0x2c;
  *(undefined4 *)&(this->LevelGroups).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->LevelGroups).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->LevelGroups).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->LevelGroups).field_0x48 = 1;
    TSet<TTuple<FObjectKey,UE::Net::FNetObjectGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FObjectKey,UE::Net::FNetObjectGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>,FDefaultSetAllocator>
              *)this_00);
  }
                    /* WARNING: Could not recover jumptable at 0x0001442cad75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))(this);
  return;
}

// PreSendUpdate @ 1442cad90

void __thiscall UReplicationBridge::PreSendUpdate(UReplicationBridge *this)

{
  return;
}

// PreSendUpdateSingleHandle @ 1442cada0

void __thiscall
UReplicationBridge::PreSendUpdateSingleHandle(UReplicationBridge *this,FNetRefHandle param_1)

{
  return;
}

// PrintObjectFromNetRefHandle @ 1442cfe90

FString * __thiscall
UReplicationBridge::PrintObjectFromNetRefHandle
          (UReplicationBridge *this,FString *__return_storage_ptr__,FNetRefHandle param_1)

{
  UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
            (this->NetRefHandleManager,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// PruneStaleObjects @ 1442d66b0

void __thiscall UReplicationBridge::PruneStaleObjects(UReplicationBridge *this)

{
  return;
}

// RemoveDestructionInfosForGroup @ 1442decb0

void __thiscall
UReplicationBridge::RemoveDestructionInfosForGroup
          (UReplicationBridge *this,FNetObjectGroupHandle param_1)

{
  return;
}

// SetNetPushIdOnFragments @ 1442e4a90

void __thiscall
UReplicationBridge::SetNetPushIdOnFragments
          (UReplicationBridge *this,
          TArrayView<UE::Net::FReplicationFragment_const_*_const,int> *param_1,
          FNetPushObjectHandle *param_2)

{
  return;
}

// StaticRegisterNativesUReplicationBridge @ 1442e6340

void __cdecl UReplicationBridge::StaticRegisterNativesUReplicationBridge(void)

{
  return;
}

// TearOffHandlesPendingTearOff @ 1442e6720

void __thiscall UReplicationBridge::TearOffHandlesPendingTearOff(UReplicationBridge *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FNetRefHandle_u_0 *pFVar4;
  FNetRefHandle_u_0 *pFVar5;
  
  iVar1 = (this->HandlesPendingEndReplication).ArrayNum;
  pFVar4 = (FNetRefHandle_u_0 *)(this->HandlesPendingEndReplication).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = pFVar4 + (longlong)iVar1 * 2;
  for (; pFVar4 != pFVar5; pFVar4 = pFVar4 + 2) {
    if ((*(uint *)(pFVar4 + 1) & 2) != 0) {
      InternalTearOff(this,(FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar4->_s_0);
    }
  }
  return;
}

// UpdateHandlesPendingEndReplication @ 1442e8420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UReplicationBridge::UpdateHandlesPendingEndReplication(UReplicationBridge *this)

{
  int *piVar1;
  ushort *puVar2;
  uint uVar3;
  FNetRefHandleManager *pFVar4;
  undefined1 *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  uint uVar8;
  EEndReplicationFlags EVar9;
  undefined4 uVar10;
  FNetRefHandle_u_0 FVar11;
  FNetRefHandle_u_0_s_0 FVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ForElementType<UReplicationBridge::FPendingEndReplicationInfo> FVar17;
  undefined1 *puVar18;
  longlong lVar19;
  uint *puVar20;
  uint *puVar21;
  ulonglong uVar22;
  int *piVar23;
  FNetRefHandle_u_0 *pFVar24;
  TArray<UReplicationBridge::FPendingEndReplicationInfo,TSizedDefaultAllocator<32>_> *pTVar25;
  undefined1 auStackY_2f8 [32];
  FNetRefHandle_u_0 local_2a0;
  EEndReplicationFlags EStack_298;
  undefined4 uStack_294;
  FNetRefHandle_u_0 *local_290;
  FNetRefHandle_u_0 *local_288;
  int *local_280;
  TArrayView<unsigned_int_const_,int> local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  EEndReplicationFlags EStack_260;
  undefined4 uStack_25c;
  ForElementType<UReplicationBridge::FPendingEndReplicationInfo> local_258;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_258.SecondaryData = (ForElementType<UReplicationBridge::FPendingEndReplicationInfo>)0x0;
  iVar14 = (this->HandlesPendingEndReplication).ArrayNum;
  piVar23 = &(this->HandlesPendingEndReplication).ArrayNum;
  pFVar24 = (FNetRefHandle_u_0 *)(this->HandlesPendingEndReplication).AllocatorInstance.Data;
  local_50 = 0;
  local_4c = 0x20;
  local_290 = pFVar24;
  local_280 = piVar23;
  if ((iVar14 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_288 = pFVar24 + (longlong)iVar14 * 2;
  if (pFVar24 != local_288) {
    do {
      local_268 = *(undefined4 *)pFVar24;
      uStack_264 = *(undefined4 *)((longlong)pFVar24 + 4);
      FVar12 = pFVar24->_s_0;
      EVar9 = *(EEndReplicationFlags *)(pFVar24 + 1);
      uVar10 = *(undefined4 *)((longlong)pFVar24 + 0xc);
      pFVar4 = this->NetRefHandleManager;
      uVar22 = (pFVar24->_s_0).Id;
      EStack_260 = EVar9;
      uStack_25c = uVar10;
      if (*(int *)&(pFVar4->RefHandleToInternalIndex).field_0x8 !=
          *(int *)&(pFVar4->RefHandleToInternalIndex).field_0x34) {
        puVar5 = *(undefined1 **)&(pFVar4->RefHandleToInternalIndex).field_0x40;
        puVar18 = &(pFVar4->RefHandleToInternalIndex).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar18 = puVar5;
        }
        iVar14 = *(int *)(puVar18 +
                         ((ulonglong)(*(int *)&(pFVar4->RefHandleToInternalIndex).field_0x48 - 1) &
                         (uVar22 >> 0x20) * 0x17 + uVar22) * 4);
        if (iVar14 != -1) {
          do {
            lVar19 = *(longlong *)&pFVar4->RefHandleToInternalIndex + (longlong)iVar14 * 0x18;
            if ((*(ulonglong *)
                  (*(longlong *)&pFVar4->RefHandleToInternalIndex + (longlong)iVar14 * 0x18) &
                0x3fffffffffffff) == uVar22) {
              puVar20 = (uint *)(lVar19 + 8);
              if (lVar19 == 0) {
                puVar20 = (uint *)0x0;
              }
              if ((puVar20 != (uint *)0x0) && (uVar3 = *puVar20, uVar3 != 0)) {
                uVar8 = (int)uVar3 / 100;
                uVar15 = 0;
                if ((int)uVar8 < (int)(pFVar4->ReplicatedObjectRefCount)._padding_) {
                  uVar15 = ~uVar8 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if ((*(short *)(*(longlong *)
                                 ((pFVar4->ReplicatedObjectRefCount)._padding_ +
                                 (longlong)(int)uVar8 * 8) + (longlong)((int)uVar3 % 100) * 2) == 0)
                   || ((char)uVar10 == '\0')) {
                  pFVar4 = this->NetRefHandleManager;
                  uVar15 = 0;
                  if ((int)uVar8 < (int)(pFVar4->ReplicatedObjectData)._padding_) {
                    uVar15 = ~uVar8 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  puVar2 = (ushort *)
                           (*(longlong *)
                             ((pFVar4->ReplicatedObjectData)._padding_ + (longlong)(int)uVar8 * 8) +
                            0x32 + (ulonglong)(uint)((int)uVar3 % 100) * 0x38);
                  *puVar2 = *puVar2 | 0x100;
                  DestroyLocalNetHandle(this,(FNetRefHandle)FVar12,EVar9);
                }
                else {
                  pFVar6 = (this->NetRefHandleManager->GlobalScopableInternalIndices).Storage.
                           AllocatorInstance.Data;
                  if (((this->NetRefHandleManager->GlobalScopableInternalIndices).BitCount <= uVar3)
                     && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Index < BitCount",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                             ,0x2c1,L""), bVar13)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((*(uint *)(pFVar6 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0)
                  {
                    UE::Net::Private::FNetRefHandleManager::RemoveFromScope
                              (this->NetRefHandleManager,uVar3);
                    UE::Net::Private::FNetRefHandleManager::GetSubObjects
                              (this->NetRefHandleManager,&local_278,uVar3);
                    puVar20 = local_278.DataPtr + local_278.ArrayNum;
                    for (puVar21 = local_278.DataPtr; puVar21 != puVar20; puVar21 = puVar21 + 1) {
                      UE::Net::Private::FNetRefHandleManager::RemoveFromScope
                                (this->NetRefHandleManager,*puVar21);
                    }
                  }
                  FVar17 = (ForElementType<UReplicationBridge::FPendingEndReplicationInfo>)
                           &local_258;
                  if (local_258.SecondaryData !=
                      (ForElementType<UReplicationBridge::FPendingEndReplicationInfo>)0x0) {
                    FVar17 = local_258.SecondaryData;
                  }
                  uStack_294 = CONCAT31(uStack_294._1_3_,1);
                  local_2a0._s_0 = FVar12;
                  EStack_298 = EVar9;
                  if ((ulonglong)FVar17 <= &local_2a0) {
                    FVar17 = (ForElementType<UReplicationBridge::FPendingEndReplicationInfo>)
                             &local_258;
                    if (local_258.SecondaryData !=
                        (ForElementType<UReplicationBridge::FPendingEndReplicationInfo>)0x0) {
                      FVar17 = local_258.SecondaryData;
                    }
                    if ((&local_2a0 <
                         (FNetRefHandle_u_0 *)((longlong)local_4c * 0x10 + (longlong)FVar17)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                  }
                  if (local_50 == local_4c) {
                    local_50 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationBridge::FPendingEndReplicationInfo>_>
                                         (0x810,&local_258,&local_4c);
                  }
                  lVar19 = (longlong)local_50;
                  FVar11.Value._4_4_ = uStack_294;
                  FVar11.Value._0_4_ = EStack_298;
                  local_50 = local_50 + 1;
                  FVar17 = (ForElementType<UReplicationBridge::FPendingEndReplicationInfo>)
                           &local_258;
                  if (local_258.SecondaryData !=
                      (ForElementType<UReplicationBridge::FPendingEndReplicationInfo>)0x0) {
                    FVar17 = local_258.SecondaryData;
                  }
                  pFVar24 = (FNetRefHandle_u_0 *)((longlong)FVar17 + lVar19 * 0x10);
                  pFVar24->_s_0 = (FNetRefHandle_u_0_s_0)local_2a0;
                  pFVar24[1] = FVar11;
                }
              }
              break;
            }
            iVar14 = *(int *)(lVar19 + 0x10);
          } while (iVar14 != -1);
        }
      }
      pFVar24 = local_290 + 2;
      piVar23 = local_280;
      local_290 = pFVar24;
    } while (pFVar24 != local_288);
  }
  pTVar25 = &this->HandlesPendingEndReplication;
  iVar14 = (this->HandlesPendingEndReplication).ArrayMax;
  piVar1 = &(this->HandlesPendingEndReplication).ArrayMax;
  *piVar23 = 0;
  if (iVar14 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar25->AllocatorInstance,0,piVar1);
  }
  iVar14 = local_50;
  lVar19 = (longlong)local_50;
  FVar17 = (ForElementType<UReplicationBridge::FPendingEndReplicationInfo>)&local_258;
  if (local_258.SecondaryData != (ForElementType<UReplicationBridge::FPendingEndReplicationInfo>)0x0
     ) {
    FVar17 = local_258.SecondaryData;
  }
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,local_50,&pTVar25->AllocatorInstance,piVar23,piVar1);
  pFVar6 = (pTVar25->AllocatorInstance).Data;
  memmove(pFVar6 + lVar19 * 0x10,pFVar6,(longlong)iVar16 << 4);
  if (iVar14 != 0) {
    memcpy((pTVar25->AllocatorInstance).Data,(void *)FVar17,lVar19 * 0x10);
  }
  if (__CsvProfilerStat545 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumHandlesPendingEndRepliction",_GCsvCategory_Iris.Index);
    __CsvProfilerStat545 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumHandlesPendingEndRepliction",_GCsvCategory_Iris.Index,
             (float)(this->HandlesPendingEndReplication).ArrayNum,Set);
  if (local_258.SecondaryData != (ForElementType<UReplicationBridge::FPendingEndReplicationInfo>)0x0
     ) {
    FMemory::Free((void *)local_258.SecondaryData);
  }
  return;
}

// UpdateInstancesWorldLocation @ 1442e89e0

void __thiscall UReplicationBridge::UpdateInstancesWorldLocation(UReplicationBridge *this)

{
  return;
}

// operator() @ 1504b8900

bool __thiscall
`UReplicationBridge::StopReplicatingNetRefHandle'::__l66::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5507613121176404443>);
  if (bVar5) {
    ::LexToString(&local_28,**(EEndReplicationFlags **)((longlong)this + 0x18));
    ::LexToString(&local_38,*(EEndReplicationFlags *)**(undefined8 **)((longlong)this + 0x10));
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x40),&local_48,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 8))->_s_0);
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5507613121176404443>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_1504b89e5;
    }
  }
  bVar5 = false;
LAB_1504b89e5:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

