// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b47b7a0

UClass * __cdecl UDS_CustomizableSkeletalComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CustomizableSkeletalComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CustomizableSkeletalComponent",
               &Z_Registration_Info_UClass_UDS_CustomizableSkeletalComponent.InnerSingleton,
               StaticRegisterNativesUDS_CustomizableSkeletalComponent,0x310,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CustomizableSkeletalComponent>,
               InternalVTableHelperCtorCaller<UDS_CustomizableSkeletalComponent>,local_res8,
               UWN_MCS_COICore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CustomizableSkeletalComponent.InnerSingleton;
}

// UDS_CustomizableSkeletalComponent @ 14b47d4b0

UDS_CustomizableSkeletalComponent * __thiscall
UDS_CustomizableSkeletalComponent::UDS_CustomizableSkeletalComponent
          (UDS_CustomizableSkeletalComponent *this,FVTableHelper *param_1)

{
  UWN_MCS_COICore::UWN_MCS_COICore((UWN_MCS_COICore *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UDS_CustomizableSkeletalComponent @ 14b47d4f0

UDS_CustomizableSkeletalComponent * __thiscall
UDS_CustomizableSkeletalComponent::UDS_CustomizableSkeletalComponent
          (UDS_CustomizableSkeletalComponent *this,FObjectInitializer *param_1)

{
  UWN_MCS_COICore::UWN_MCS_COICore((UWN_MCS_COICore *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UDS_CustomizableSkeletalComponent @ 14b47dd60

void __thiscall
UDS_CustomizableSkeletalComponent::~UDS_CustomizableSkeletalComponent
          (UDS_CustomizableSkeletalComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  UWN_MCS_COICore::~UWN_MCS_COICore((UWN_MCS_COICore *)this);
  return;
}

// GetPrivateStaticClass @ 14b47ef30

UClass * __cdecl UDS_CustomizableSkeletalComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CustomizableSkeletalComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CustomizableSkeletalComponent",
               &Z_Registration_Info_UClass_UDS_CustomizableSkeletalComponent.InnerSingleton,
               StaticRegisterNativesUDS_CustomizableSkeletalComponent,0x310,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CustomizableSkeletalComponent>,
               InternalVTableHelperCtorCaller<UDS_CustomizableSkeletalComponent>,local_res8,
               UWN_MCS_COICore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CustomizableSkeletalComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_CustomizableSkeletalComponent @ 14b47f5a0

void __cdecl
UDS_CustomizableSkeletalComponent::StaticRegisterNativesUDS_CustomizableSkeletalComponent(void)

{
  return;
}

// OnSetCOIParamAsyncComplete @ 14bc52d70

void __thiscall
UDS_CustomizableSkeletalComponent::OnSetCOIParamAsyncComplete
          (UDS_CustomizableSkeletalComponent *this,FSoftObjectPath *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_28;
  ForAnyElementType local_20;
  ulonglong uStack_18;
  undefined8 local_10;
  
  if (*(longlong *)&this->field_0x2b0 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5586999209321562132>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\ActorComponent\\DS_CustomizableSkeletalComponent.cpp"
                       ,0x14,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014bc52de3:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 == (UObject *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5586999209321562138>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\ActorComponent\\DS_CustomizableSkeletalComponent.cpp"
                       ,0x1a,"false");
    if (bVar2) goto code_r0x00014bc52de3;
  }
  else {
    local_30 = (undefined1  [8])0xffffffff;
    TStack_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_20.Data = (FScriptContainerElement *)0x0;
    uStack_18 = 0;
    local_10._0_1_ = Async_Med;
    local_10._1_7_ = 0;
    UWN_MCS_COICore::UpdateMeshAsync((UWN_MCS_COICore *)this,(FWN_MCS_MeshUpdateParams *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_28,(FWriteAccessScope *)&local_48);
    if (((int)uStack_18 != 0) && (local_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
      uStack_18 = uStack_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_28.AccessDetector);
  }
  return;
}

// SetCOIParamsAsync @ 14bc5d3d0

void __thiscall
UDS_CustomizableSkeletalComponent::SetCOIParamsAsync
          (UDS_CustomizableSkeletalComponent *this,FSoftObjectPath *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy> *pTVar4;
  UDS_CustomizableSkeletalComponent *local_res10;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  undefined1 local_40 [16];
  undefined8 local_30;
  FDelegateAllocation *local_28;
  undefined8 local_20;
  
  local_78 = OnSetCOIParamAsyncComplete;
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  uStack_70 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)local_40);
  local_28 = &local_50;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CustomizableSkeletalComponent____A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_CustomizableSkeletalComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_CustomizableSkeletalComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
    puVar2[4] = local_78;
    puVar2[5] = CONCAT44(uStack_6c,uStack_70);
  }
  if (local_30._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_40._8_8_,(FDestructionSentinel *)local_40);
  }
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  local_28 = (FDelegateAllocation *)0x0;
  local_40._0_8_ = (FLoadPackageAsyncProgressDelegate *)0x0;
  local_40._8_8_ = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                     ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                       *)&local_78,
                      (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                       *)local_58);
  FSoftObjectPath::LoadAsync(param_1,pTVar4,(FLoadAssetAsyncOptionalParams *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_78);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_68 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
               (FDestructionSentinel *)&local_78);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

