// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 55

// StaticClass @ 14ec46ed0

UClass * __cdecl UOnlineEngineInterfaceImpl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineEngineInterfaceImpl",
               &Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.InnerSingleton,
               StaticRegisterNativesUOnlineEngineInterfaceImpl,0x198,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UOnlineEngineInterfaceImpl>,
               InternalVTableHelperCtorCaller<UOnlineEngineInterfaceImpl>,local_res8,
               UOnlineEngineInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.InnerSingleton;
}

// UOnlineEngineInterfaceImpl @ 14ec549a0

UOnlineEngineInterfaceImpl * __thiscall
UOnlineEngineInterfaceImpl::UOnlineEngineInterfaceImpl
          (UOnlineEngineInterfaceImpl *this,FVTableHelper *param_1)

{
  UOnlineEngineInterface::UOnlineEngineInterface((UOnlineEngineInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOnlineEngineInterfaceImpl__6B_;
  *(undefined8 *)&this->MappedUniqueNetIdTypes = 0;
  *(undefined8 *)&(this->MappedUniqueNetIdTypes).field_0x8 = 0;
  *(undefined8 *)&(this->MappedUniqueNetIdTypes).field_0x20 = 0;
  *(undefined4 *)&(this->MappedUniqueNetIdTypes).field_0x28 = 0;
  *(undefined4 *)&(this->MappedUniqueNetIdTypes).field_0x2c = 0x80;
  *(undefined4 *)&(this->MappedUniqueNetIdTypes).field_0x34 = 0;
  *(undefined4 *)&(this->MappedUniqueNetIdTypes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MappedUniqueNetIdTypes).field_0x40 = 0;
  *(undefined4 *)&(this->MappedUniqueNetIdTypes).field_0x48 = 0;
  (this->CompatibleUniqueNetIdTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompatibleUniqueNetIdTypes).ArrayNum = 0;
  (this->CompatibleUniqueNetIdTypes).ArrayMax = 0;
  (this->VoiceSubsystemNameOverride).ComparisonIndex = 0;
  (this->VoiceSubsystemNameOverride).Number = 0;
  (this->OnLoginCompleteDelegateHandle).ID = 0;
  *(undefined8 *)&this->OnStartSessionCompleteDelegateHandles = 0;
  *(undefined8 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x8 = 0;
  *(undefined8 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x20 = 0;
  *(undefined4 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x28 = 0;
  *(undefined4 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x34 = 0;
  *(undefined4 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x40 = 0;
  *(undefined4 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x48 = 0;
  *(undefined8 *)&this->OnEndSessionCompleteDelegateHandles = 0;
  *(undefined8 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x20 = 0;
  *(undefined4 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x28 = 0;
  *(undefined4 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x34 = 0;
  *(undefined4 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x40 = 0;
  *(undefined4 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x48 = 0;
  *(undefined8 *)&this->OnLoginPIECompleteDelegateHandlesForPIEInstances = 0;
  *(undefined8 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x20 = 0;
  *(undefined4 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x28 = 0;
  *(undefined4 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x34 = 0;
  *(undefined4 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x40 = 0;
  *(undefined4 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x48 = 0;
  this->bOnlineServicesCompatibilityEnabled = false;
  (this->OnlineServicesCompatibilityInterface).field0_0x0.DebugPtr = (UOnlineEngineInterface *)0x0;
  return this;
}

// UOnlineEngineInterfaceImpl @ 14ec54ae0

UOnlineEngineInterfaceImpl * __thiscall
UOnlineEngineInterfaceImpl::UOnlineEngineInterfaceImpl
          (UOnlineEngineInterfaceImpl *this,FObjectInitializer *param_1)

{
  UOnlineEngineInterface::UOnlineEngineInterface((UOnlineEngineInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOnlineEngineInterfaceImpl__6B_;
  *(undefined8 *)&this->MappedUniqueNetIdTypes = 0;
  *(undefined8 *)&(this->MappedUniqueNetIdTypes).field_0x8 = 0;
  *(undefined8 *)&(this->MappedUniqueNetIdTypes).field_0x20 = 0;
  *(undefined4 *)&(this->MappedUniqueNetIdTypes).field_0x28 = 0;
  *(undefined4 *)&(this->MappedUniqueNetIdTypes).field_0x2c = 0x80;
  *(undefined4 *)&(this->MappedUniqueNetIdTypes).field_0x34 = 0;
  *(undefined4 *)&(this->MappedUniqueNetIdTypes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MappedUniqueNetIdTypes).field_0x40 = 0;
  *(undefined4 *)&(this->MappedUniqueNetIdTypes).field_0x48 = 0;
  (this->CompatibleUniqueNetIdTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompatibleUniqueNetIdTypes).ArrayNum = 0;
  (this->CompatibleUniqueNetIdTypes).ArrayMax = 0;
  (this->VoiceSubsystemNameOverride).ComparisonIndex = 0;
  (this->VoiceSubsystemNameOverride).Number = 0;
  (this->OnLoginCompleteDelegateHandle).ID = 0;
  *(undefined8 *)&this->OnStartSessionCompleteDelegateHandles = 0;
  *(undefined8 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x8 = 0;
  *(undefined8 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x20 = 0;
  *(undefined4 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x28 = 0;
  *(undefined4 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x34 = 0;
  *(undefined4 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x40 = 0;
  *(undefined4 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x48 = 0;
  *(undefined8 *)&this->OnEndSessionCompleteDelegateHandles = 0;
  *(undefined8 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x20 = 0;
  *(undefined4 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x28 = 0;
  *(undefined4 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x34 = 0;
  *(undefined4 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x40 = 0;
  *(undefined4 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x48 = 0;
  *(undefined8 *)&this->OnLoginPIECompleteDelegateHandlesForPIEInstances = 0;
  *(undefined8 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x20 = 0;
  *(undefined4 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x28 = 0;
  *(undefined4 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x34 = 0;
  *(undefined4 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x40 = 0;
  *(undefined4 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x48 = 0;
  this->bOnlineServicesCompatibilityEnabled = false;
  (this->OnlineServicesCompatibilityInterface).field0_0x0.DebugPtr = (UOnlineEngineInterface *)0x0;
  return this;
}

// ~UOnlineEngineInterfaceImpl @ 14ec576b0

void __thiscall
UOnlineEngineInterfaceImpl::~UOnlineEngineInterfaceImpl(UOnlineEngineInterfaceImpl *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UOnlineEngineInterfaceImpl__6B_;
  *(undefined4 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnLoginPIECompleteDelegateHandlesForPIEInstances);
  *(undefined4 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnEndSessionCompleteDelegateHandles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnEndSessionCompleteDelegateHandles);
  *(undefined4 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnStartSessionCompleteDelegateHandles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnStartSessionCompleteDelegateHandles);
  pFVar2 = (this->CompatibleUniqueNetIdTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->MappedUniqueNetIdTypes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MappedUniqueNetIdTypes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MappedUniqueNetIdTypes);
  UOnlineEngineInterface::~UOnlineEngineInterface((UOnlineEngineInterface *)this);
  return;
}

// AutoLogin @ 14ec60690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterfaceImpl::AutoLogin
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,int param_2,
          TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  IOnlineSubsystem *pIVar4;
  longlong *plVar5;
  IOnlineSubsystemUtils *pIVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  ulong64 *puVar9;
  bool bVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined8 local_88;
  FName local_80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  undefined1 local_40 [8];
  TReferenceControllerBase<1> *local_38;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  local_88 = 0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  pIVar4 = IOnlineSubsystem::Get(&local_80);
  if (pIVar4 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar5 = (longlong *)(**(code **)(pIVar4->_padding_ + 0x80))(pIVar4,local_40);
    plVar1 = (longlong *)*plVar5;
    pTVar11 = (TReferenceControllerBase<1> *)plVar5[1];
    plVar5[1] = 0;
    *plVar5 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
    if (plVar1 != (longlong *)0x0) {
      pIVar6 = Online::GetUtils();
      if (pIVar6 == (IOnlineSubsystemUtils *)0x0) {
        local_88 = 0;
      }
      else {
        local_80.ComparisonIndex.Value = 0;
        local_80.Number = 0;
        (**(code **)((longlong)*pIVar6 + 8))(pIVar6,&local_88,param_1,0);
      }
      pcVar2 = *(code **)(*plVar1 + 0x90);
      local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_70.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_60);
      local_48 = &local_70;
      puVar7 = UE::Core::Private::DelegateAllocate(0x40,&local_70);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy__VFName__V__TDelegate___A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy______6B_
        ;
        puVar7[1] = local_88;
        TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::
        TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
                   (puVar7 + 2),param_3);
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[5] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineEngineInterfaceImpl____A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy__VFName__V__TDelegate___A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy______6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UOnlineEngineInterfaceImpl *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[6] = 0;
        local_80 = (FName)this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UOnlineEngineInterfaceImpl *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 6),(FObjectPtr)&local_80);
        puVar7[7] = OnAutoLoginComplete;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      puVar9 = (ulong64 *)(*pcVar2)(plVar1,local_40,param_2,&local_78);
      (this->OnLoginCompleteDelegateHandle).ID = *puVar9;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_60);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_70,0,0,0x10);
        local_70.DelegateSize = 0;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_70.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
      cVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1,param_2);
      if (cVar3 != '\0') {
        bVar10 = true;
        goto LAB_14ec606ea;
      }
    }
  }
  bVar10 = false;
LAB_14ec606ea:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return bVar10;
}

// BindToExternalUIOpening @ 14ec60e20

void __thiscall
UOnlineEngineInterfaceImpl::BindToExternalUIOpening
          (UOnlineEngineInterfaceImpl *this,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_1)

{
  UOnlineEngineInterface *pUVar1;
  IOnlineSubsystemUtils *pIVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UOnlineEngineInterfaceImpl *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pIVar2 = Online::GetUtils();
  if (pIVar2 != (IOnlineSubsystemUtils *)0x0) {
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar3 = UE::Core::Private::DelegateAllocate(0x38,&local_60);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AX_N_ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)(puVar3 + 1),param_1);
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[4] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineEngineInterfaceImpl____A6AX_N_ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AX_N_ZUFDefaultDelegateUserPolicy______6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UOnlineEngineInterfaceImpl *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[5] = 0;
      local_res8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UOnlineEngineInterfaceImpl *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 5),(FObjectPtr)&local_res8);
      puVar3[6] = OnExternalUIChange;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2,&local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  }
  pUVar1 = (this->OnlineServicesCompatibilityInterface).field0_0x0.DebugPtr;
  if (pUVar1 != (UOnlineEngineInterface *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x3c0))(pUVar1,param_1);
  }
  return;
}

// ClearVoicePackets @ 14ec62ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::ClearVoicePackets(UOnlineEngineInterfaceImpl *this,UWorld *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  FName local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->VoiceSubsystemNameOverride;
  pIVar3 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x68))(pIVar3,local_18);
  plVar1 = (longlong *)*plVar4;
  pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
  plVar4[1] = 0;
  *plVar4 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xd8))(plVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// CloseWebURL @ 14ec64120

bool __thiscall UOnlineEngineInterfaceImpl::CloseWebURL(UOnlineEngineInterfaceImpl *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FOnlineSubsystemModule *pFVar4;
  longlong *plVar5;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                    ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
    _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar4 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                     (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                      ::__l2::OnlineSubsystemModuleName);
  plVar5 = (longlong *)(**(code **)(pFVar4->_padding_ + 0x50))(pFVar4,0);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x70))(plVar5,&local_18);
    if (local_18 != (longlong *)0x0) {
      if ((local_18 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar3 = (**(code **)(*local_18 + 0x40))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      return (bool)uVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return false;
}

// CreateUniquePlayerIdWrapper @ 14ec6ae70

FUniqueNetIdWrapper * __thiscall
UOnlineEngineInterfaceImpl::CreateUniquePlayerIdWrapper
          (UOnlineEngineInterfaceImpl *this,FUniqueNetIdWrapper *__return_storage_ptr__,
          FString *param_1,FName param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  IOnlineSubsystem *pIVar6;
  longlong *plVar7;
  IOnlineSubsystemUtils *pIVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  FName local_res8;
  longlong local_48;
  FSharedReferencer<1> FStack_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  pTVar5 = pTVar11;
  if (*(int *)&(this->MappedUniqueNetIdTypes).field_0x8 !=
      *(int *)&(this->MappedUniqueNetIdTypes).field_0x34) {
    puVar10 = *(undefined1 **)&(this->MappedUniqueNetIdTypes).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->MappedUniqueNetIdTypes).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->MappedUniqueNetIdTypes).field_0x48 - 1U &
                    param_2.Number + uVar3) * 4);
    if (iVar4 != -1) {
      do {
        pTVar5 = (TReferenceControllerBase<1> *)
                 (*(longlong *)&this->MappedUniqueNetIdTypes + (longlong)iVar4 * 0x18);
        if (*(FName *)(*(longlong *)&this->MappedUniqueNetIdTypes + (longlong)iVar4 * 0x18) ==
            param_2) break;
        iVar4 = (int)pTVar5[1]._padding_;
        pTVar5 = pTVar11;
      } while (iVar4 != -1);
    }
  }
  pTVar12 = (TReferenceControllerBase<1> *)&pTVar5->SharedReferenceCount;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar12 = pTVar11;
  }
  cVar1 = (**(code **)(this->_padding_ + 0x2b0))(this,param_2);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(this->_padding_ + 0x2b0))(this,pTVar12->_padding_);
  }
  if (cVar1 == '\0') {
    if (cVar2 != '\0') {
LAB_14ec6af46:
      local_res8 = (FName)pTVar12->_padding_;
      goto LAB_14ec6af4e;
    }
  }
  else {
    local_res8 = param_2;
    if (cVar2 != '\0') goto LAB_14ec6af46;
LAB_14ec6af4e:
    pIVar6 = IOnlineSubsystem::Get(&local_res8);
    if (pIVar6 == (IOnlineSubsystem *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      plVar7 = (longlong *)(**(code **)(pIVar6->_padding_ + 0x80))(pIVar6,local_38);
      plVar9 = (longlong *)*plVar7;
      pTVar11 = (TReferenceControllerBase<1> *)plVar7[1];
      plVar7[1] = 0;
      *plVar7 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      if (plVar9 != (longlong *)0x0) {
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x120))(plVar9,local_38,param_1);
        if (&local_48 != plVar9) {
          local_48 = *plVar9;
          *plVar9 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&FStack_40,(FSharedReferencer<1> *)(plVar9 + 1));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    if (local_48 != 0) goto LAB_14ec6b03c;
  }
  pIVar8 = Online::GetUtils();
  if (pIVar8 != (IOnlineSubsystemUtils *)0x0) {
    plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,local_38,param_1,param_2);
    if (&local_48 != plVar9) {
      local_48 = *plVar9;
      *plVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_40,(FSharedReferencer<1> *)(plVar9 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
LAB_14ec6b03c:
  (__return_storage_ptr__->Variant)._padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (__return_storage_ptr__->Variant)._padding_ = local_48;
  (__return_storage_ptr__->Variant)._padding_ = (longlong)FStack_40.ReferenceController;
  if (FStack_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  return __return_storage_ptr__;
}

// DestroyOnlineSubsystem @ 14ec6c6e0

void __thiscall
UOnlineEngineInterfaceImpl::DestroyOnlineSubsystem(UOnlineEngineInterfaceImpl *this,FName param_1)

{
  UOnlineEngineInterface *pUVar1;
  code *UNRECOVERED_JUMPTABLE;
  FOnlineSubsystemModule *pFVar2;
  undefined8 local_res8;
  
  pUVar1 = (this->OnlineServicesCompatibilityInterface).field0_0x0.DebugPtr;
  if (pUVar1 != (UOnlineEngineInterface *)0x0) {
    UOnlineEngineInterfaceImplPrivate::ConvertToCompatibilityOnlineIdentifier((FName)&local_res8);
    (**(code **)(*(longlong *)pUVar1 + 0x2d0))(pUVar1,local_res8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_void___cdecl_IOnlineSubsystem::Destroy(FName)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_void___cdecl_IOnlineSubsystem::Destroy(FName)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_void___cdecl_IOnlineSubsystem::Destroy(FName)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_void___cdecl_IOnlineSubsystem::Destroy(FName)'::__l2::
                      OnlineSubsystemModuleName,L"OnlineSubsystem");
      _Init_thread_footer(&`public:_static_void___cdecl_IOnlineSubsystem::Destroy(FName)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  pFVar2 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                     (`public:_static_void___cdecl_IOnlineSubsystem::Destroy(FName)'::__l2::
                      OnlineSubsystemModuleName);
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00014ec6c75a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pFVar2,param_1,UNRECOVERED_JUMPTABLE);
  return;
}

// DoesInstanceExist @ 14ec6cd80

bool __thiscall
UOnlineEngineInterfaceImpl::DoesInstanceExist(UOnlineEngineInterfaceImpl *this,FName param_1)

{
  bool bVar1;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  bVar1 = IOnlineSubsystem::DoesInstanceExist(local_res10);
  return bVar1;
}

// DoesSessionExist @ 14ec6cdc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterfaceImpl::DoesSessionExist
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,FName param_2)

{
  longlong *plVar1;
  IOnlineSubsystem *pIVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName local_res20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  pIVar2 = IOnlineSubsystem::Get(&local_res20);
  if (pIVar2 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar5 = pTVar4;
  }
  else {
    plVar3 = (longlong *)(**(code **)(pIVar2->_padding_ + 0x20))(pIVar2,local_18);
    plVar1 = (longlong *)*plVar3;
    pTVar5 = (TReferenceControllerBase<1> *)plVar3[1];
    plVar3[1] = 0;
    *plVar3 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    if (plVar1 != (longlong *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)(**(code **)(*plVar1 + 0x380))(plVar1,param_2);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 != (TReferenceControllerBase<1> *)0x0;
}

// DumpChatState @ 14ec6ce80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::DumpChatState(UOnlineEngineInterfaceImpl *this,UWorld *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  FName local_res18 [2];
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  pIVar3 = IOnlineSubsystem::Get(local_res18);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0xd0))(pIVar3,local_18);
  plVar1 = (longlong *)*plVar4;
  pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
  plVar4[1] = 0;
  *plVar4 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x78))(plVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// DumpPartyState @ 14ec6cf30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::DumpPartyState(UOnlineEngineInterfaceImpl *this,UWorld *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  FName local_res18 [2];
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  pIVar3 = IOnlineSubsystem::Get(local_res18);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x40))(pIVar3,local_18);
  plVar1 = (longlong *)*plVar4;
  pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
  plVar4[1] = 0;
  *plVar4 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x408))(plVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// DumpSessionState @ 14ec6cfe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::DumpSessionState(UOnlineEngineInterfaceImpl *this,UWorld *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  FName local_res18 [2];
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  pIVar3 = IOnlineSubsystem::Get(local_res18);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x20))(pIVar3,local_18);
  plVar1 = (longlong *)*plVar4;
  pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
  plVar4[1] = 0;
  *plVar4 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x450))(plVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// DumpVoiceState @ 14ec6d090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::DumpVoiceState(UOnlineEngineInterfaceImpl *this,UWorld *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  FName local_res18 [2];
  FString local_28;
  void *local_18 [2];
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  pIVar3 = IOnlineSubsystem::Get(local_res18);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x68))(pIVar3,&local_28);
  plVar1 = (longlong *)*plVar4;
  pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
  plVar4[1] = 0;
  *plVar4 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_28.Data.ArrayMax,local_28.Data.ArrayNum))
  ;
  if ((plVar1 != (longlong *)0x0) && (5 < (byte)LogOnline._0_1_)) {
    (**(code **)(*plVar1 + 0xe8))(plVar1,local_18);
    ::FString::PrintfImpl(&local_28,L"\n%s");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// EndSession @ 14ec6dd20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::EndSession
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,FName param_2,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  IOnlineSubsystemUtils *pIVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  FName local_78;
  TPairInitializer<FName_const_&,FDelegateHandle_const_&> local_70;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  undefined1 local_30 [8];
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  pIVar3 = IOnlineSubsystem::Get(&local_78);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x20))(pIVar3,&local_70.Value);
    plVar1 = (longlong *)*plVar4;
    pTVar8 = (TReferenceControllerBase<1> *)plVar4[1];
    plVar4[1] = 0;
    *plVar4 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_60.DelegateAllocator);
    if (plVar1 != (longlong *)0x0) {
      pIVar5 = Online::GetUtils();
      if (pIVar5 == (IOnlineSubsystemUtils *)0x0) {
        local_78.ComparisonIndex.Value = 0;
        local_78.Number = 0;
      }
      else {
        local_70.Key = (FName *)0x0;
        (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_78,param_1,0);
      }
      pcVar2 = *(code **)(*plVar1 + 200);
      local_70.Value = (FDelegateHandle *)0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_70.Value,
                 (FWriteAccessScope *)&local_50);
      local_38 = &local_60;
      puVar6 = UE::Core::Private::DelegateAllocate(0x40,&local_60);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy__V1_V__TDelegate___A6AXVFName___N_ZUFDefaultDelegateUserPolicy______6B_
        ;
        *(FName *)(puVar6 + 1) = local_78;
        TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
        TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)(puVar6 + 2),
                   param_3);
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[5] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineEngineInterfaceImpl____A6AXVFName___N_ZUFDefaultDelegateUserPolicy__V2_V__TDelegate___A6AXVFName___N_ZUFDefaultDelegateUserPolicy______6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UOnlineEngineInterfaceImpl *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[6] = 0;
        local_70.Key = (FName *)this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UOnlineEngineInterfaceImpl *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 6),(FObjectPtr)&local_70);
        puVar6[7] = OnEndSessionComplete;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      (*pcVar2)(plVar1,local_30);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_70.Value,
                 (FWriteAccessScope *)&local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&local_70.Value);
      local_70.Value = (FDelegateHandle *)&local_78;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_30;
      TSet<TTuple<FName,FDelegateHandle>,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FDelegateHandle_const_&>_>
                ((TSet<TTuple<FName,FDelegateHandle>,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>,FDefaultSetAllocator>
                  *)&this->OnEndSessionCompleteDelegateHandles,&local_70,(bool *)&local_70.Value);
      (**(code **)(*plVar1 + 0xc0))(plVar1,param_2);
      goto LAB_14ec6dda5;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,
             (FReadAccessScope *)&local_50);
  if ((*(int *)&param_3->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_50);
LAB_14ec6dda5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// GetDedicatedServerSubsystemNameForSubsystem @ 14ec74f50

FName __thiscall
UOnlineEngineInterfaceImpl::GetDedicatedServerSubsystemNameForSubsystem
          (UOnlineEngineInterfaceImpl *this,FName param_1)

{
  FName in_R8;
  
  if (in_R8 == PS4_SUBSYSTEM) {
    *(FName *)param_1 = PS4SERVER_SUBSYSTEM;
    return param_1;
  }
  *(undefined8 *)param_1 = 0;
  return param_1;
}

// GetDefaultOnlineSubsystemName @ 14ec74f80

FName __thiscall
UOnlineEngineInterfaceImpl::GetDefaultOnlineSubsystemName(UOnlineEngineInterfaceImpl *this)

{
  FOnlineSubsystemModule *pFVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  FName in_RDX;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                      ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
      _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar1 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                     (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                      ::__l2::OnlineSubsystemModuleName);
  plVar2 = (longlong *)(**(code **)(pFVar1->_padding_ + 0x50))(pFVar1,local_res10[0]);
  if (plVar2 == (longlong *)0x0) {
    local_res10[0] = 0;
    puVar3 = local_res10;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,local_res10);
  }
  *(undefined8 *)in_RDX = *puVar3;
  return in_RDX;
}

// GetLocalPacket @ 14ec75890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FVoicePacket,1> * __thiscall
UOnlineEngineInterfaceImpl::GetLocalPacket
          (UOnlineEngineInterfaceImpl *this,TSharedPtr<FVoicePacket,1> *__return_storage_ptr__,
          UWorld *param_1,uchar param_2)

{
  longlong *plVar1;
  IOnlineSubsystem *pIVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName local_res8;
  FVoicePacket *local_28;
  TReferenceControllerBase<1> *local_20;
  
  local_res8 = this->VoiceSubsystemNameOverride;
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pIVar2 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar2 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar3 = (longlong *)(**(code **)(pIVar2->_padding_ + 0x68))(pIVar2,&local_28);
    plVar1 = (longlong *)*plVar3;
    pTVar4 = (TReferenceControllerBase<1> *)plVar3[1];
    plVar3[1] = 0;
    *plVar3 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 200))(plVar1,&local_28,param_2);
      __return_storage_ptr__->Object = local_28;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_20;
      local_20 = (TReferenceControllerBase<1> *)0x0;
      local_28 = (FVoicePacket *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_14ec758dc;
    }
  }
  __return_storage_ptr__->Object = (FVoicePacket *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14ec758dc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetNumLocalTalkers @ 14ec75f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UOnlineEngineInterfaceImpl::GetNumLocalTalkers(UOnlineEngineInterfaceImpl *this,UWorld *param_1)

{
  longlong *plVar1;
  int iVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->VoiceSubsystemNameOverride;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  iVar2 = 0;
  pIVar3 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    iVar2 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x68))(pIVar3,local_18);
    plVar1 = (longlong *)*plVar4;
    pTVar5 = (TReferenceControllerBase<1> *)plVar4[1];
    plVar4[1] = 0;
    *plVar4 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    if (plVar1 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar1 + 0xd0))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return iVar2;
}

// GetOnlineIdentifier @ 14ec76440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
UOnlineEngineInterfaceImpl::GetOnlineIdentifier(UOnlineEngineInterfaceImpl *this,UWorld *param_1)

{
  IOnlineSubsystemUtils *pIVar1;
  
  pIVar1 = Online::GetUtils();
  if (pIVar1 != (IOnlineSubsystemUtils *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,param_1);
    return (FName)param_1;
  }
  param_1->_padding_ = 0;
  return (FName)param_1;
}

// GetOnlineIdentifier @ 14ec764a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
UOnlineEngineInterfaceImpl::GetOnlineIdentifier
          (UOnlineEngineInterfaceImpl *this,FWorldContext *param_1)

{
  IOnlineSubsystemUtils *pIVar1;
  
  pIVar1 = Online::GetUtils();
  if (pIVar1 != (IOnlineSubsystemUtils *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_1);
    return (FName)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (FName)param_1;
}

// GetPlayerNickname @ 14ec765d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
UOnlineEngineInterfaceImpl::GetPlayerNickname
          (UOnlineEngineInterfaceImpl *this,FString *__return_storage_ptr__,UWorld *param_1,
          FUniqueNetIdWrapper *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FUniqueNetId *pFVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  FString *pFVar6;
  IOnlineSubsystem *pIVar7;
  longlong *plVar8;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar9;
  int iVar10;
  ulonglong uVar11;
  TReferenceControllerBase<1> *pTVar12;
  FName local_58 [2];
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FUniqueNetId_const_,1> local_38 [2];
  
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  bVar5 = FUniqueNetIdWrapper::IsValid(param_2);
  if (bVar5) {
    uVar11 = (ulonglong)(param_2->Variant).TypeIndex;
    if (1 < uVar11) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar4)();
        return pFVar6;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar11 + 4) == '\0') goto LAB_14ec76632;
  }
  else {
LAB_14ec76632:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniqueId.IsValid() && UniqueId.IsV1()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineEngineInterfaceImpl.cpp"
                       ,199,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  local_58[0] = FUniqueNetIdWrapper::GetType(param_2);
  local_58[0] = *(FName *)local_58[0];
  pIVar7 = IOnlineSubsystem::Get(local_58);
  if (pIVar7 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar8 = (longlong *)(**(code **)(pIVar7->_padding_ + 0x80))(pIVar7,local_48);
    plVar2 = (longlong *)*plVar8;
    pTVar12 = (TReferenceControllerBase<1> *)plVar8[1];
    plVar8[1] = 0;
    *plVar8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    if (plVar2 != (longlong *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x140);
      pTVar9 = FUniqueNetIdWrapper::GetV1(param_2,local_38);
      if (pTVar9->Object == (FUniqueNetId *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar4)();
          return pFVar6;
        }
      }
      pFVar3 = pTVar9->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38[0].SharedReferenceCount.ReferenceController);
      (*pcVar4)(plVar2,__return_storage_ptr__,pFVar3);
      goto LAB_14ec767a4;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&InvalidName,L"InvalidOSSUser");
      atexit(`UOnlineEngineInterfaceImpl::GetPlayerNickname'::__l2::
             _dynamic_atexit_destructor_for__InvalidName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = InvalidName.Data.AllocatorInstance;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  iVar10 = InvalidName.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar10,0,(ForAnyElementType *)__return_storage_ptr__,iVar10,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar10 * 2);
  }
LAB_14ec767a4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return __return_storage_ptr__;
}

// GetPlayerPlatformNickname @ 14ec76d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterfaceImpl::GetPlayerPlatformNickname
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,int param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FModuleManager *this_00;
  FOnlineSubsystemModule *pFVar5;
  longlong *plVar6;
  FString *pFVar7;
  longlong *local_28;
  TReferenceControllerBase<1> *local_20;
  void *local_18 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                    ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
    _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  this_00 = FModuleManager::Get();
  bVar3 = FModuleManager::IsModuleLoaded
                    (this_00,`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                             ::__l2::OnlineSubsystemModuleName);
  if (bVar3) {
    pFVar5 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                       (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::GetByPlatform(bool)'
                        ::__l2::OnlineSubsystemModuleName);
    plVar6 = (longlong *)(**(code **)(pFVar5->_padding_ + 0x58))(pFVar5,0);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x80))(plVar6,&local_28);
      if (local_28 != (longlong *)0x0) {
        if ((local_28 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar7 = (FString *)(**(code **)(*local_28 + 0x148))(local_28,local_18,param_2);
        if (param_3 != pFVar7) {
          pFVar1 = (param_3->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_3->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
          (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (param_3->Data).ArrayNum = (pFVar7->Data).ArrayNum;
          (param_3->Data).ArrayMax = (pFVar7->Data).ArrayMax;
          (pFVar7->Data).ArrayNum = 0;
          (pFVar7->Data).ArrayMax = 0;
        }
        if (local_18[0] != (void *)0x0) {
          FMemory::Free(local_18[0]);
        }
        if (1 < (param_3->Data).ArrayNum) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_20);
          return true;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14ec78700

UClass * __cdecl UOnlineEngineInterfaceImpl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineEngineInterfaceImpl",
               &Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.InnerSingleton,
               StaticRegisterNativesUOnlineEngineInterfaceImpl,0x198,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UOnlineEngineInterfaceImpl>,
               InternalVTableHelperCtorCaller<UOnlineEngineInterfaceImpl>,local_res8,
               UOnlineEngineInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.InnerSingleton;
}

// GetReplicationHashForSubsystem @ 14ec78ae0

uchar __thiscall
UOnlineEngineInterfaceImpl::GetReplicationHashForSubsystem
          (UOnlineEngineInterfaceImpl *this,FName param_1)

{
  uchar uVar1;
  IOnlineSubsystemUtils *pIVar2;
  
  pIVar2 = Online::GetUtils();
                    /* WARNING: Could not recover jumptable at 0x00014ec78b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x20))
                    (pIVar2,param_1,*(code **)((longlong)*pIVar2 + 0x20));
  return uVar1;
}

// GetResolvedConnectString @ 14ec78b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterfaceImpl::GetResolvedConnectString
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,FName param_2,FString *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  FNameEntryId FVar4;
  IOnlineSubsystem *pIVar5;
  longlong *plVar6;
  undefined4 extraout_var;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  FName local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  pIVar5 = IOnlineSubsystem::Get(&local_28);
  if (pIVar5 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar6 = (longlong *)(**(code **)(pIVar5->_padding_ + 0x20))(pIVar5,&local_28);
    plVar1 = (longlong *)*plVar6;
    pTVar8 = (TReferenceControllerBase<1> *)plVar6[1];
    plVar6[1] = 0;
    *plVar6 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    if (plVar1 != (longlong *)0x0) {
      pcVar2 = *(code **)(*plVar1 + 0x378);
      FVar4 = FNameEntryId::FromValidEName((EName)&local_28);
      local_28.Number = 0;
      local_28.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
      cVar3 = (*pcVar2)(plVar1,param_2,param_3,local_28);
      if (cVar3 != '\0') {
        bVar7 = true;
        goto LAB_14ec78b98;
      }
    }
  }
  bVar7 = false;
LAB_14ec78b98:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return bVar7;
}

// GetSessionJoinability @ 14ec78e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterfaceImpl::GetSessionJoinability
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,FName param_2,
          FJoinabilitySettings *param_3)

{
  longlong *plVar1;
  IOnlineSubsystem *pIVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FName local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  bVar5 = false;
  pIVar2 = IOnlineSubsystem::Get(&local_28);
  if (pIVar2 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar5 = false;
  }
  else {
    plVar3 = (longlong *)(**(code **)(pIVar2->_padding_ + 0x20))(pIVar2,&local_28);
    plVar1 = (longlong *)*plVar3;
    pTVar6 = (TReferenceControllerBase<1> *)plVar3[1];
    plVar3[1] = 0;
    *plVar3 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    if ((plVar1 != (longlong *)0x0) &&
       (lVar4 = (**(code **)(*plVar1 + 0x380))(plVar1,param_2), lVar4 != 0)) {
      param_3->SessionName = param_2;
      bVar5 = true;
      param_3->bPublicSearchable = *(bool *)(lVar4 + 0x10);
      param_3->bAllowInvites = *(bool *)(lVar4 + 0x15);
      param_3->bJoinViaPresence = *(bool *)(lVar4 + 0x17);
      param_3->bJoinViaPresenceFriendsOnly = *(bool *)(lVar4 + 0x18);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// GetSubsystemFromReplicationHash @ 14ec79070

FName __thiscall
UOnlineEngineInterfaceImpl::GetSubsystemFromReplicationHash
          (UOnlineEngineInterfaceImpl *this,uchar param_1)

{
  IOnlineSubsystemUtils *pIVar1;
  undefined7 in_register_00000011;
  FName FVar2;
  undefined1 in_R8B;
  
  FVar2._1_7_ = in_register_00000011;
  FVar2.ComparisonIndex.Value._0_1_ = param_1;
  pIVar1 = Online::GetUtils();
  (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,FVar2,in_R8B);
  return FVar2;
}

// GetUniquePlayerIdWrapper @ 14ec79610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUniqueNetIdWrapper * __thiscall
UOnlineEngineInterfaceImpl::GetUniquePlayerIdWrapper
          (UOnlineEngineInterfaceImpl *this,FUniqueNetIdWrapper *__return_storage_ptr__,
          UWorld *param_1,int param_2,FName param_3)

{
  longlong *plVar1;
  IOnlineSubsystem *pIVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName local_58;
  longlong local_50;
  TReferenceControllerBase<1> *local_48;
  FString local_40;
  undefined1 local_30 [8];
  TReferenceControllerBase<1> *local_28;
  FString local_20;
  
  local_58 = param_3;
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pIVar2 = IOnlineSubsystem::Get(&local_58);
  if (pIVar2 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar3 = (longlong *)(**(code **)(pIVar2->_padding_ + 0x80))(pIVar2,local_30);
    plVar1 = (longlong *)*plVar3;
    pTVar4 = (TReferenceControllerBase<1> *)plVar3[1];
    plVar3[1] = 0;
    *plVar3 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x110))(plVar1,&local_50,param_2);
      __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
      (__return_storage_ptr__->Variant)._padding_ = 0;
      (__return_storage_ptr__->Variant)._padding_ = 0;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      (__return_storage_ptr__->Variant)._padding_ = local_50;
      (__return_storage_ptr__->Variant)._padding_ = (longlong)local_48;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
        UNLOCK();
      }
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
      goto LAB_14ec79792;
    }
  }
  if (5 < (byte)LogOnline._0_1_) {
    ::FName::ToString(&param_3,&local_20);
    ::FString::PrintfImpl
              (&local_40,L"GetUniquePlayerId() returning null, can\'t find OSS of type %s");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->Variant).field_0x11 = 0;
  *(undefined2 *)&(__return_storage_ptr__->Variant).field_0x15 = 0;
  (__return_storage_ptr__->Variant).field_0x17 = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
LAB_14ec79792:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// InitCompatibilityInterface @ 14ec7f800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::InitCompatibilityInterface(UOnlineEngineInterfaceImpl *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_128 [32];
  uint uStack_dc;
  undefined4 uStack_cc;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (this->bOnlineServicesCompatibilityEnabled != false) {
    pUVar3 = Z_Construct_UClass_UOnlineEngineInterface_NoRegister();
    local_c8._8_8_ = (ulonglong)uStack_dc << 0x20;
    local_b8._12_4_ = uStack_cc;
    local_b8.Size = 0x3e;
    local_c8.DataPtr = (wchar_t *)0x0;
    local_b8.DataPtr = L"/Script/OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl";
    pUVar3 = StaticLoadClass(pUVar3,(UObject *)0x0,&local_b8,&local_c8,0x2000,(UPackageMap *)0x0);
    if ((pUVar3 == (UClass *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OnlineEngineInterfaceClass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineEngineInterfaceImpl.cpp"
                           ,0x2e8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UOnlineEngineInterface_NoRegister();
    CheckIsClassChildOf_Internal(pUVar5,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar3);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_NoFlags;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = pUVar4;
    pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar7 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar6 == (UObject *)0x0)) {
      (this->OnlineServicesCompatibilityInterface).field0_0x0.DebugPtr =
           (UOnlineEngineInterface *)pUVar6;
      if ((pUVar6 == (UObject *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("OnlineServicesCompatibilityInterface",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineEngineInterfaceImpl.cpp"
                             ,0x2eb,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable(pUVar6);
      (this->OnlineServicesCompatibilityInterface).field0_0x0.DebugPtr =
           (UOnlineEngineInterface *)pUVar6;
    }
  }
  return;
}

// IsCompatibleUniqueNetId @ 14ec81460

bool __thiscall
UOnlineEngineInterfaceImpl::IsCompatibleUniqueNetId
          (UOnlineEngineInterfaceImpl *this,FUniqueNetIdWrapper *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  undefined1 local_res10 [24];
  
  uVar8 = (ulonglong)(param_1->Variant).TypeIndex;
  if ((1 < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8 + 4) != '\0') {
    plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this,local_res10);
    FVar6 = FUniqueNetIdWrapper::GetType(param_1);
    if (*(longlong *)FVar6 == *plVar5) {
      return true;
    }
    FVar6 = FUniqueNetIdWrapper::GetType(param_1);
    pFVar7 = (this->CompatibleUniqueNetIdTypes).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)(this->CompatibleUniqueNetIdTypes).ArrayNum * 8;
    if (pFVar7 != pFVar1) {
      do {
        if (*(longlong *)pFVar7 == *(longlong *)FVar6) {
          return true;
        }
        pFVar7 = pFVar7 + 8;
      } while (pFVar7 != pFVar1);
    }
  }
  return false;
}

// IsLoaded @ 14ec81580

bool __thiscall UOnlineEngineInterfaceImpl::IsLoaded(UOnlineEngineInterfaceImpl *this,FName param_1)

{
  bool bVar1;
  undefined1 uVar2;
  FModuleManager *this_00;
  FName *pFVar3;
  FOnlineSubsystemModule *pFVar4;
  FName local_res18 [2];
  
  this_00 = FModuleManager::Get();
  pFVar3 = ::FName::FName(local_res18,"OnlineSubsystem");
  bVar1 = FModuleManager::IsModuleLoaded(this_00,*pFVar3);
  if (bVar1) {
    pFVar3 = ::FName::FName(local_res18,"OnlineSubsystem");
    pFVar4 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar3);
    uVar2 = (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4,param_1);
    return (bool)uVar2;
  }
  return false;
}

// IsLoggedIn @ 14ec81620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterfaceImpl::IsLoggedIn(UOnlineEngineInterfaceImpl *this,UWorld *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FName local_res20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  pIVar3 = IOnlineSubsystem::Get(&local_res20);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x80))(pIVar3,local_18);
    plVar1 = (longlong *)*plVar4;
    pTVar5 = (TReferenceControllerBase<1> *)plVar4[1];
    plVar4[1] = 0;
    *plVar4 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    if (plVar1 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar1 + 0x138))(plVar1,param_2);
      bVar6 = iVar2 == 2;
      goto LAB_14ec81660;
    }
  }
  bVar6 = false;
LAB_14ec81660:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return bVar6;
}

// MuteRemoteTalker @ 14ec82e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterfaceImpl::MuteRemoteTalker
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,uchar param_2,
          FUniqueNetIdWrapper *param_3,bool param_4)

{
  longlong *plVar1;
  FUniqueNetId *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IOnlineSubsystem *pIVar6;
  longlong *plVar7;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar8;
  ulonglong uVar9;
  TReferenceControllerBase<1> *pTVar10;
  FName local_res8;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FUniqueNetId_const_,1> local_38 [2];
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  bVar4 = FUniqueNetIdWrapper::IsValid(param_3);
  if (bVar4) {
    uVar9 = (ulonglong)(param_3->Variant).TypeIndex;
    if (1 < uVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar9 + 4) == '\0') goto LAB_14ec82eb7;
  }
  else {
LAB_14ec82eb7:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlayerId.IsValid() && PlayerId.IsV1()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineEngineInterfaceImpl.cpp"
                       ,0x1f7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_res8 = this->VoiceSubsystemNameOverride;
  pIVar6 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar6 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar7 = (longlong *)(**(code **)(pIVar6->_padding_ + 0x68))(pIVar6,local_48);
    plVar1 = (longlong *)*plVar7;
    pTVar10 = (TReferenceControllerBase<1> *)plVar7[1];
    plVar7[1] = 0;
    *plVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    if (plVar1 != (longlong *)0x0) {
      pcVar3 = *(code **)(*plVar1 + 0xb0);
      pTVar8 = FUniqueNetIdWrapper::GetV1(param_3,local_38);
      if (pTVar8->Object == (FUniqueNetId *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pFVar2 = pTVar8->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38[0].SharedReferenceCount.ReferenceController);
      uVar5 = (*pcVar3)(plVar1,param_2,pFVar2,param_4);
      goto LAB_14ec82f0a;
    }
  }
  uVar5 = 0;
LAB_14ec82f0a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return (bool)uVar5;
}

// OnAutoLoginComplete @ 14ec84a40

void __thiscall
UOnlineEngineInterfaceImpl::OnAutoLoginComplete
          (UOnlineEngineInterfaceImpl *this,int param_1,bool param_2,FUniqueNetId *param_3,
          FString *param_4,FName param_5,
          TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *param_6)

{
  longlong *plVar1;
  IOnlineSubsystem *pIVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 local_30 [8];
  TReferenceControllerBase<1> *local_28;
  
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pIVar2 = IOnlineSubsystem::Get(&param_5);
  if (pIVar2 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar3 = (longlong *)(**(code **)(pIVar2->_padding_ + 0x80))(pIVar2,local_30);
    plVar1 = (longlong *)*plVar3;
    pTVar4 = (TReferenceControllerBase<1> *)plVar3[1];
    plVar3[1] = 0;
    *plVar3 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x98))(plVar1,param_1,&this->OnLoginCompleteDelegateHandle);
    }
  }
  TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
            (param_6,param_1,param_2,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6);
  if (*(void **)&param_6->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_6->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_6);
  return;
}

// OnEndSessionComplete @ 14ec87570

void __thiscall
UOnlineEngineInterfaceImpl::OnEndSessionComplete
          (UOnlineEngineInterfaceImpl *this,FName param_1,bool param_2,FName param_3,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_4)

{
  longlong *plVar1;
  void *pvVar2;
  TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *this_00;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  FDelegateHandle *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FReadAccessScope local_48;
  
  this_00 = param_4;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  param_4 = (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)param_3;
  pIVar3 = IOnlineSubsystem::Get((FName *)&param_4);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x20))(pIVar3,&local_48);
    plVar1 = (longlong *)*plVar4;
    pTVar6 = (TReferenceControllerBase<1> *)plVar4[1];
    plVar4[1] = 0;
    *plVar4 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_48.DestructionSentinel.Accessor);
    if ((plVar1 != (longlong *)0x0) &&
       (pFVar5 = TMapBase<FName,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>_>
                 ::Find((TMapBase<FName,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>_>
                         *)&this->OnEndSessionCompleteDelegateHandles,param_3),
       pFVar5 != (FDelegateHandle *)0x0)) {
      (**(code **)(*plVar1 + 0xd0))(plVar1,pFVar5);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_48);
  if ((*(int *)&this_00->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&this_00->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar2 = *(void **)&this_00->field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// OnExternalUIChange @ 14ec87800

void __thiscall
UOnlineEngineInterfaceImpl::OnExternalUIChange
          (UOnlineEngineInterfaceImpl *this,bool param_1,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar2 = *(void **)&param_2->field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// OnStartSessionComplete @ 14ec8acb0

void __thiscall
UOnlineEngineInterfaceImpl::OnStartSessionComplete
          (UOnlineEngineInterfaceImpl *this,FName param_1,bool param_2,FName param_3,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_4)

{
  longlong *plVar1;
  void *pvVar2;
  TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *this_00;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  FDelegateHandle *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FReadAccessScope local_48;
  
  this_00 = param_4;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  param_4 = (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)param_3;
  pIVar3 = IOnlineSubsystem::Get((FName *)&param_4);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x20))(pIVar3,&local_48);
    plVar1 = (longlong *)*plVar4;
    pTVar6 = (TReferenceControllerBase<1> *)plVar4[1];
    plVar4[1] = 0;
    *plVar4 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_48.DestructionSentinel.Accessor);
    if ((plVar1 != (longlong *)0x0) &&
       (pFVar5 = TMapBase<FName,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>_>
                 ::Find((TMapBase<FName,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>_>
                         *)&this->OnStartSessionCompleteDelegateHandles,param_3),
       pFVar5 != (FDelegateHandle *)0x0)) {
      (**(code **)(*plVar1 + 0x80))(plVar1,pFVar5);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_48);
  if ((*(int *)&this_00->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&this_00->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar2 = *(void **)&this_00->field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// PostInitProperties @ 14ec8d900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UOnlineEngineInterfaceImpl::PostInitProperties(UOnlineEngineInterfaceImpl *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_128 [32];
  uint uStack_dc;
  undefined4 uStack_cc;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  UObject::PostInitProperties((UObject *)this);
  if (this->bOnlineServicesCompatibilityEnabled != false) {
    pUVar3 = Z_Construct_UClass_UOnlineEngineInterface_NoRegister();
    local_c8._8_8_ = (ulonglong)uStack_dc << 0x20;
    local_b8._12_4_ = uStack_cc;
    local_b8.Size = 0x3e;
    local_c8.DataPtr = (wchar_t *)0x0;
    local_b8.DataPtr = L"/Script/OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl";
    pUVar3 = StaticLoadClass(pUVar3,(UObject *)0x0,&local_b8,&local_c8,0x2000,(UPackageMap *)0x0);
    if ((pUVar3 == (UClass *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OnlineEngineInterfaceClass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineEngineInterfaceImpl.cpp"
                           ,0x2e8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UOnlineEngineInterface_NoRegister();
    CheckIsClassChildOf_Internal(pUVar5,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar3);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_NoFlags;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = pUVar4;
    pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar7 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar6 == (UObject *)0x0)) {
      (this->OnlineServicesCompatibilityInterface).field0_0x0.DebugPtr =
           (UOnlineEngineInterface *)pUVar6;
      if ((pUVar6 == (UObject *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("OnlineServicesCompatibilityInterface",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineEngineInterfaceImpl.cpp"
                             ,0x2eb,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable(pUVar6);
      (this->OnlineServicesCompatibilityInterface).field0_0x0.DebugPtr =
           (UOnlineEngineInterface *)pUVar6;
    }
  }
  return;
}

// RegisterPlayer @ 14ec906d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::RegisterPlayer
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,FName param_2,
          FUniqueNetIdWrapper *param_3,bool param_4)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  IOnlineSubsystem *pIVar4;
  longlong *plVar5;
  FUniqueNetId *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  ulonglong uVar8;
  FName local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  bVar3 = FUniqueNetIdWrapper::IsValid(param_3);
  if (bVar3) {
    uVar8 = (ulonglong)(param_3->Variant).TypeIndex;
    if ((1 < uVar8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8 + 4) != '\0') goto LAB_14ec9075b;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("UniqueId.IsValid() && UniqueId.IsV1()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineEngineInterfaceImpl.cpp"
                     ,0x18d,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ec9075b:
  local_20.ComparisonIndex.Value = 0;
  local_20.Number = 0;
  pIVar4 = IOnlineSubsystem::Get(&local_20);
  if (pIVar4 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar5 = (longlong *)(**(code **)(pIVar4->_padding_ + 0x20))(pIVar4,local_18);
    plVar1 = (longlong *)*plVar5;
    pTVar7 = (TReferenceControllerBase<1> *)plVar5[1];
    plVar5[1] = 0;
    *plVar5 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    if ((plVar1 != (longlong *)0x0) && (bVar3 = FUniqueNetIdWrapper::IsValid(param_3), bVar3)) {
      pcVar2 = *(code **)(*plVar1 + 0x390);
      pFVar6 = FUniqueNetIdWrapper::operator*(param_3);
      (*pcVar2)(plVar1,param_2,pFVar6,param_4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// SerializeRemotePacket @ 14ec964f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FVoicePacket,1> * __thiscall
UOnlineEngineInterfaceImpl::SerializeRemotePacket
          (UOnlineEngineInterfaceImpl *this,TSharedPtr<FVoicePacket,1> *__return_storage_ptr__,
          UWorld *param_1,UNetConnection *param_2,FArchive *param_3)

{
  UNetDriver *this_00;
  longlong *plVar1;
  ENetMode EVar2;
  FName FVar3;
  IOnlineSubsystem *pIVar4;
  longlong *plVar5;
  FName FVar6;
  FName local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->VoiceSubsystemNameOverride;
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  if (((param_2 != (UNetConnection *)0x0) &&
      (this_00 = (param_2->Driver).field0_0x0.DebugPtr, this_00 != (UNetDriver *)0x0)) &&
     (EVar2 = UNetDriver::GetNetMode(this_00), EVar2 == NM_DedicatedServer)) {
    FVar3 = FVar6;
    if (param_2->PlayerOnlinePlatformName == PS4_SUBSYSTEM) {
      FVar3 = PS4SERVER_SUBSYSTEM;
    }
    if (FVar3 != (FName)0x0) {
      local_res8 = FVar3;
    }
  }
  pIVar4 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar4 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar5 = (longlong *)(**(code **)(pIVar4->_padding_ + 0x68))(pIVar4,local_18);
    plVar1 = (longlong *)*plVar5;
    FVar6 = *(FName *)(plVar5 + 1);
    plVar5[1] = 0;
    *plVar5 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xc0))(plVar1,__return_storage_ptr__,param_3);
      goto LAB_14ec9657c;
    }
  }
  __return_storage_ptr__->Object = (FVoicePacket *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14ec9657c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar6);
  return __return_storage_ptr__;
}

// ShowAchievementsUI @ 14ec98550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::ShowAchievementsUI
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,int param_2)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  FName local_res20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  pIVar3 = IOnlineSubsystem::Get(&local_res20);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x70))(pIVar3,local_18);
  plVar1 = (longlong *)*plVar4;
  pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
  plVar4[1] = 0;
  *plVar4 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// ShowLeaderboardUI @ 14ec986b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::ShowLeaderboardUI
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,FString *param_2)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  FName local_res20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  pIVar3 = IOnlineSubsystem::Get(&local_res20);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x70))(pIVar3,local_18);
  plVar1 = (longlong *)*plVar4;
  pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
  plVar4[1] = 0;
  *plVar4 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// ShowWebURL @ 14ec98820

void __thiscall
UOnlineEngineInterfaceImpl::ShowWebURL
          (UOnlineEngineInterfaceImpl *this,FString *param_1,FShowWebUrlParams *param_2,
          TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FOnlineSubsystemModule *pFVar3;
  longlong *plVar4;
  longlong *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  FString *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                    ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
    _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar3 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                     (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                      ::__l2::OnlineSubsystemModuleName);
  plVar4 = (longlong *)(**(code **)(pFVar3->_padding_ + 0x50))(pFVar3,0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x70))(plVar4,&local_50);
    if (local_50 != (longlong *)0x0) {
      local_40 = param_2->bEmbedded;
      local_3e = param_2->bShowBackground;
      local_3f = param_2->bShowCloseButton;
      local_3d = param_2->bHideCursor;
      local_38 = param_2->OffsetX;
      local_34 = param_2->OffsetY;
      local_30 = param_2->SizeX;
      local_2c = param_2->SizeY;
      local_3c = 0;
      local_28 = (FString *)0x0;
      local_20 = 0;
      local_18 = (void *)0x0;
      local_10 = 0;
      if ((local_50 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*local_50 + 0x38))(local_50,param_1,&local_40,param_3);
      if (local_18 != (void *)0x0) {
        FMemory::Free(local_18);
      }
      DestructItems<FString,int>(local_28,(int)local_20);
      if (local_28 != (FString *)0x0) {
        FMemory::Free(local_28);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  }
  return;
}

// ShutdownOnlineSubsystem @ 14ec98ae0

void __thiscall
UOnlineEngineInterfaceImpl::ShutdownOnlineSubsystem(UOnlineEngineInterfaceImpl *this,FName param_1)

{
  UOnlineEngineInterface *pUVar1;
  code *UNRECOVERED_JUMPTABLE;
  IOnlineSubsystem *pIVar2;
  undefined8 local_res8;
  FName local_res10 [3];
  
  pUVar1 = (this->OnlineServicesCompatibilityInterface).field0_0x0.DebugPtr;
  local_res10[0] = param_1;
  if (pUVar1 != (UOnlineEngineInterface *)0x0) {
    UOnlineEngineInterfaceImplPrivate::ConvertToCompatibilityOnlineIdentifier((FName)&local_res8);
    (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1,local_res8);
  }
  pIVar2 = IOnlineSubsystem::Get(local_res10);
  if (pIVar2 != (IOnlineSubsystem *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 0x150);
                    /* WARNING: Could not recover jumptable at 0x00014ec98b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar2,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// StartNetworkedVoice @ 14ec98da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::StartNetworkedVoice
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,uchar param_2)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  FName local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->VoiceSubsystemNameOverride;
  pIVar3 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x68))(pIVar3,local_18);
  plVar1 = (longlong *)*plVar4;
  pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
  plVar4[1] = 0;
  *plVar4 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// StartSession @ 14ec99080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::StartSession
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,FName param_2,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  longlong lVar5;
  IOnlineSubsystemUtils *pIVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TReferenceControllerBase<1> *pTVar9;
  FName local_78;
  TPairInitializer<FName_const_&,FDelegateHandle_const_&> local_70;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  undefined1 local_30 [8];
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  pIVar3 = IOnlineSubsystem::Get(&local_78);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x20))(pIVar3,&local_70.Value);
    plVar1 = (longlong *)*plVar4;
    pTVar9 = (TReferenceControllerBase<1> *)plVar4[1];
    plVar4[1] = 0;
    *plVar4 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_60.DelegateAllocator);
    if (plVar1 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
      if ((lVar5 != 0) && ((*(int *)(lVar5 + 0x148) == 2 || (*(int *)(lVar5 + 0x148) == 6)))) {
        pIVar6 = Online::GetUtils();
        if (pIVar6 == (IOnlineSubsystemUtils *)0x0) {
          local_78.ComparisonIndex.Value = 0;
          local_78.Number = 0;
        }
        else {
          local_70.Key = (FName *)0x0;
          (**(code **)((longlong)*pIVar6 + 8))(pIVar6,&local_78,param_1,0);
        }
        pcVar2 = *(code **)(*plVar1 + 0x78);
        local_70.Value = (FDelegateHandle *)0x0;
        local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_60.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_70.Value,
                   (FWriteAccessScope *)&local_50);
        local_38 = &local_60;
        puVar7 = UE::Core::Private::DelegateAllocate(0x40,&local_60);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy__V1_V__TDelegate___A6AXVFName___N_ZUFDefaultDelegateUserPolicy______6B_
          ;
          *(FName *)(puVar7 + 1) = local_78;
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)(puVar7 + 2),
                     param_3);
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[5] = uVar8;
          *puVar7 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineEngineInterfaceImpl____A6AXVFName___N_ZUFDefaultDelegateUserPolicy__V2_V__TDelegate___A6AXVFName___N_ZUFDefaultDelegateUserPolicy______6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UOnlineEngineInterfaceImpl *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar7[6] = 0;
          local_70.Key = (FName *)this;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UOnlineEngineInterfaceImpl *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 6),(FObjectPtr)&local_70);
          puVar7[7] = OnStartSessionComplete;
        }
        if (local_50.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
        }
        (*pcVar2)(plVar1,local_30);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_70.Value,
                   (FWriteAccessScope *)&local_50);
        if ((local_60.DelegateSize != 0) &&
           (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_60,0,0,0x10);
          local_60.DelegateSize = 0;
        }
        if (local_50.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
        }
        if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_60.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&local_70.Value);
        local_70.Value = (FDelegateHandle *)&local_78;
        local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_30;
        TSet<TTuple<FName,FDelegateHandle>,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FDelegateHandle_const_&>_>
                  ((TSet<TTuple<FName,FDelegateHandle>,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>,FDefaultSetAllocator>
                    *)&this->OnStartSessionCompleteDelegateHandles,&local_70,(bool *)&local_70.Value
                  );
        (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
        goto LAB_14ec99105;
      }
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,
             (FReadAccessScope *)&local_50);
  if ((*(int *)&param_3->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_50);
LAB_14ec99105:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// StaticRegisterNativesUOnlineEngineInterfaceImpl @ 14ec99ab0

void __cdecl UOnlineEngineInterfaceImpl::StaticRegisterNativesUOnlineEngineInterfaceImpl(void)

{
  return;
}

// StopNetworkedVoice @ 14ec99b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::StopNetworkedVoice
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,uchar param_2)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  FName local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->VoiceSubsystemNameOverride;
  pIVar3 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x68))(pIVar3,local_18);
  plVar1 = (longlong *)*plVar4;
  pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
  plVar4[1] = 0;
  *plVar4 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// UnmuteRemoteTalker @ 14ec9f1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterfaceImpl::UnmuteRemoteTalker
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,uchar param_2,
          FUniqueNetIdWrapper *param_3,bool param_4)

{
  longlong *plVar1;
  FUniqueNetId *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IOnlineSubsystem *pIVar6;
  longlong *plVar7;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar8;
  ulonglong uVar9;
  TReferenceControllerBase<1> *pTVar10;
  FName local_res8;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FUniqueNetId_const_,1> local_38 [2];
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  bVar4 = FUniqueNetIdWrapper::IsValid(param_3);
  if (bVar4) {
    uVar9 = (ulonglong)(param_3->Variant).TypeIndex;
    if (1 < uVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar9 + 4) == '\0') goto LAB_14ec9f227;
  }
  else {
LAB_14ec9f227:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlayerId.IsValid() && PlayerId.IsV1()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineEngineInterfaceImpl.cpp"
                       ,0x202,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_res8 = this->VoiceSubsystemNameOverride;
  pIVar6 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar6 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar7 = (longlong *)(**(code **)(pIVar6->_padding_ + 0x68))(pIVar6,local_48);
    plVar1 = (longlong *)*plVar7;
    pTVar10 = (TReferenceControllerBase<1> *)plVar7[1];
    plVar7[1] = 0;
    *plVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    if (plVar1 != (longlong *)0x0) {
      pcVar3 = *(code **)(*plVar1 + 0xb8);
      pTVar8 = FUniqueNetIdWrapper::GetV1(param_3,local_38);
      if (pTVar8->Object == (FUniqueNetId *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pFVar2 = pTVar8->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38[0].SharedReferenceCount.ReferenceController);
      uVar5 = (*pcVar3)(plVar1,param_2,pFVar2,param_4);
      goto LAB_14ec9f27a;
    }
  }
  uVar5 = 0;
LAB_14ec9f27a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return (bool)uVar5;
}

// UnregisterPlayer @ 14ec9f4b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::UnregisterPlayer
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,FName param_2,
          FUniqueNetIdWrapper *param_3)

{
  longlong *plVar1;
  FUniqueNetId *pFVar2;
  code *pcVar3;
  bool bVar4;
  IOnlineSubsystem *pIVar5;
  longlong *plVar6;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  ulonglong uVar9;
  FName local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FUniqueNetId_const_,1> local_38 [2];
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  bVar4 = FUniqueNetIdWrapper::IsValid(param_3);
  if (bVar4) {
    uVar9 = (ulonglong)(param_3->Variant).TypeIndex;
    if ((1 < uVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar9 + 4) != '\0') goto LAB_14ec9f533;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("UniqueId.IsValid() && UniqueId.IsV1()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineEngineInterfaceImpl.cpp"
                     ,0x197,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14ec9f533:
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  pIVar5 = IOnlineSubsystem::Get(&local_50);
  if (pIVar5 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar6 = (longlong *)(**(code **)(pIVar5->_padding_ + 0x20))(pIVar5,local_48);
    plVar1 = (longlong *)*plVar6;
    pTVar8 = (TReferenceControllerBase<1> *)plVar6[1];
    plVar6[1] = 0;
    *plVar6 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    if (plVar1 != (longlong *)0x0) {
      pcVar3 = *(code **)(*plVar1 + 0x3c0);
      pTVar7 = FUniqueNetIdWrapper::GetV1(param_3,local_38);
      if ((pTVar7->Object == (FUniqueNetId *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = pTVar7->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38[0].SharedReferenceCount.ReferenceController);
      (*pcVar3)(plVar1,param_2,pFVar2);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// UnregisterPlayers @ 14ec9f6c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::UnregisterPlayers
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,FName param_2,
          TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement FVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  IOnlineSubsystem *pIVar8;
  longlong *plVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_88 [8];
  ForAnyElementType local_80;
  undefined8 local_78;
  TReferenceControllerBase<1> *local_70;
  undefined8 local_68;
  FName local_60;
  longlong *local_58;
  TReferenceControllerBase<1> *local_40;
  
  local_68 = 0;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  pIVar8 = IOnlineSubsystem::Get(&local_60);
  if (pIVar8 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  plVar9 = (longlong *)(**(code **)(pIVar8->_padding_ + 0x20))(pIVar8);
  local_70 = (TReferenceControllerBase<1> *)plVar9[1];
  plVar3 = (longlong *)*plVar9;
  plVar9[1] = 0;
  *plVar9 = 0;
  local_58 = plVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  if (plVar3 != (longlong *)0x0) {
    iVar2 = param_3->ArrayNum;
    pFVar13 = (param_3->AllocatorInstance).Data;
    pFVar12 = pFVar13 + (longlong)iVar2 * 0x20;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = 0;
    while( true ) {
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
      if (param_3->ArrayNum != iVar2) {
        local_88[0] = 0;
        `TCheckedPointerIterator<FUniqueNetIdWrapper_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_88);
      }
      if (pFVar13 == pFVar12) break;
      FVar1 = pFVar13[0x18];
      if (1 < (ulonglong)(byte)FVar1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)(byte)FVar1 + 4) == '\0') {
        if (pFVar13[0x18] != (FScriptContainerElement)0x1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        bVar5 = (*(uint *)(pFVar13 + 8) & 0xffffff) == 0;
LAB_14ec9f85a:
        if (bVar5) goto LAB_14ec9f894;
        FVar1 = pFVar13[0x18];
        if (1 < (ulonglong)(byte)FVar1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + (ulonglong)(byte)FVar1 + 4) == '\0')
        goto LAB_14ec9f894;
      }
      else {
        if (pFVar13[0x18] != (FScriptContainerElement)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (*(longlong **)(pFVar13 + 8) != (longlong *)0x0) {
          cVar6 = (**(code **)(**(longlong **)(pFVar13 + 8) + 0x28))();
          bVar5 = cVar6 == '\0';
          goto LAB_14ec9f85a;
        }
LAB_14ec9f894:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PlayerId.IsValid() && PlayerId.IsV1()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineEngineInterfaceImpl.cpp"
                           ,0x1a7,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FVar1 = pFVar13[0x18];
      if (1 < (ulonglong)(byte)FVar1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)(byte)FVar1 + 4) == '\0') {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8098327459864248868>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\CoreOnline.h"
                           ,0x224,"IsV1()");
        pTVar11 = pTVar10;
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_14ec9f971:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        if (pFVar13[0x18] != (FScriptContainerElement)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pTVar11 = *(TReferenceControllerBase<1> **)(pFVar13 + 0x10);
        pTVar10 = *(TReferenceControllerBase<1> **)(pFVar13 + 8);
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (pTVar10 == (TReferenceControllerBase<1> *)0x0) goto LAB_14ec9f971;
      }
      iVar7 = (int)local_78;
      if ((int)local_78 == local_78._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_80,(int *)((longlong)&local_78 + 4));
      }
      local_78 = CONCAT44(local_78._4_4_,iVar7 + 1);
      *(TReferenceControllerBase<1> **)&local_80.Data[(longlong)iVar7 * 0x10].field_0x0 = pTVar10;
      *(TReferenceControllerBase<1> **)(local_80.Data + (longlong)iVar7 * 0x10 + 8) = pTVar11;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar13 = pFVar13 + 0x20;
    }
    (**(code **)(*local_58 + 0x3c8))(local_58,param_2,&local_80);
    DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
              ((TSharedRef<FUniqueNetId_const_,1> *)local_80.Data,(int)local_78);
    if ((TSharedRef<FUniqueNetId_const_,1> *)local_80.Data !=
        (TSharedRef<FUniqueNetId_const_,1> *)0x0) {
      FMemory::Free(local_80.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  return;
}

// UpdateSessionJoinability @ 14ec9fc30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UOnlineEngineInterfaceImpl::UpdateSessionJoinability
          (UOnlineEngineInterfaceImpl *this,UWorld *param_1,FName param_2,bool param_3,bool param_4,
          bool param_5,bool param_6)

{
  longlong *plVar1;
  undefined1 uVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  FName local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  local_18.ComparisonIndex.Value = 0;
  local_18.Number = 0;
  pIVar3 = IOnlineSubsystem::Get(&local_18);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x20))(pIVar3,&local_18);
    plVar1 = (longlong *)*plVar4;
    pTVar6 = (TReferenceControllerBase<1> *)plVar4[1];
    plVar4[1] = 0;
    *plVar4 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    if ((plVar1 != (longlong *)0x0) &&
       (lVar5 = (**(code **)(*plVar1 + 0x380))(plVar1,param_2), lVar5 != 0)) {
      *(bool *)(lVar5 + 0x15) = param_4;
      *(bool *)(lVar5 + 0x10) = param_3;
      if ((!param_5) || (param_6)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(bool *)(lVar5 + 0x18) = param_6;
      *(undefined1 *)(lVar5 + 0x17) = uVar2;
      (**(code **)(*plVar1 + 0x98))(plVar1,param_2,lVar5,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

