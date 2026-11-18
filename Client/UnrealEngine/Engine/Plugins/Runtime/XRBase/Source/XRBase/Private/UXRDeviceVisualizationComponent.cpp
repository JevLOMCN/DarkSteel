// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 22

// StaticClass @ 14cf76240

UClass * __cdecl UXRDeviceVisualizationComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"XRDeviceVisualizationComponent",
               &Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.InnerSingleton,
               StaticRegisterNativesUXRDeviceVisualizationComponent,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UXRDeviceVisualizationComponent>,
               InternalVTableHelperCtorCaller<UXRDeviceVisualizationComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.InnerSingleton;
}

// UXRDeviceVisualizationComponent @ 14cf7e6d0

UXRDeviceVisualizationComponent * __thiscall
UXRDeviceVisualizationComponent::UXRDeviceVisualizationComponent
          (UXRDeviceVisualizationComponent *this,FVTableHelper *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->DisplayModelSource).ComparisonIndex = 0;
  (this->DisplayModelSource).Number = 0;
  (this->CustomDisplayMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->DisplayMeshMaterialOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayMeshMaterialOverrides).ArrayNum = 0;
  (this->DisplayMeshMaterialOverrides).ArrayMax = 0;
  (this->MotionSource).ComparisonIndex = 0;
  (this->MotionSource).Number = 0;
  this->DisplayModelLoadState = Unloaded;
  FXRDeviceId::FXRDeviceId(&this->DisplayDeviceId);
  this->bInteractionProfilePresent = false;
  return this;
}

// UXRDeviceVisualizationComponent @ 14cf7e780

UXRDeviceVisualizationComponent * __thiscall
UXRDeviceVisualizationComponent::UXRDeviceVisualizationComponent
          (UXRDeviceVisualizationComponent *this,FObjectInitializer *param_1)

{
  FName FVar1;
  
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->DisplayModelSource).ComparisonIndex = 0;
  (this->DisplayModelSource).Number = 0;
  (this->CustomDisplayMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->DisplayMeshMaterialOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayMeshMaterialOverrides).ArrayNum = 0;
  (this->DisplayMeshMaterialOverrides).ArrayMax = 0;
  (this->MotionSource).ComparisonIndex = 0;
  (this->MotionSource).Number = 0;
  this->DisplayModelLoadState = Unloaded;
  FXRDeviceId::FXRDeviceId(&this->DisplayDeviceId);
  this->field_0x42 = this->field_0x42 & 0xfd;
  this->bInteractionProfilePresent = false;
  FVar1 = IMotionController::LeftHandSourceId;
  this->field_0x9a = this->field_0x9a | 8;
  this->field_0x9b = this->field_0x9b | 1;
  this->MotionSource = FVar1;
  return this;
}

// ~UXRDeviceVisualizationComponent @ 14cf7f2a0

void __thiscall
UXRDeviceVisualizationComponent::~UXRDeviceVisualizationComponent
          (UXRDeviceVisualizationComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->DisplayMeshMaterialOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  return;
}

// CanDeviceBeDisplayed @ 14cf84560

bool __thiscall
UXRDeviceVisualizationComponent::CanDeviceBeDisplayed(UXRDeviceVisualizationComponent *this)

{
  if ((this->bIsRenderingActive != false) && (this->bIsVisualizationActive != false)) {
    return true;
  }
  return false;
}

// FindParentMotionController @ 14cf8c670

UMotionControllerComponent * __thiscall
UXRDeviceVisualizationComponent::FindParentMotionController(UXRDeviceVisualizationComponent *this)

{
  int iVar1;
  UMotionControllerComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = *(UMotionControllerComponent **)&this->field_0xd0;
  while( true ) {
    if (pUVar2 == (UMotionControllerComponent *)0x0) {
      return (UMotionControllerComponent *)0x0;
    }
    pUVar3 = Z_Construct_UClass_UMotionControllerComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) break;
    pUVar2 = *(UMotionControllerComponent **)&pUVar2->field_0xd0;
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 14cf90900

UClass * __cdecl UXRDeviceVisualizationComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"XRDeviceVisualizationComponent",
               &Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.InnerSingleton,
               StaticRegisterNativesUXRDeviceVisualizationComponent,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UXRDeviceVisualizationComponent>,
               InternalVTableHelperCtorCaller<UXRDeviceVisualizationComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.InnerSingleton;
}

// OnDisplayModelLoaded @ 14cf93660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UXRDeviceVisualizationComponent::OnDisplayModelLoaded
          (UXRDeviceVisualizationComponent *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  int iVar4;
  UClass *pUVar5;
  
  if ((this->DisplayModelLoadState == Pending) || (this->DisplayModelLoadState == InProgress)) {
    if (param_1 != (UPrimitiveComponent *)0x0) {
      pUVar5 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        pUVar2 = *(UObject **)&param_1[1].field_0x50;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar2 == (UObject *)0x0) goto LAB_14cf9374c;
        }
        else {
          if (pUVar2 == (UObject *)0x0) goto LAB_14cf9374c;
          UE::GC::MarkAsReachable(pUVar2);
        }
        pUVar2 = *(UObject **)&param_1[1].field_0x50;
        pcVar3 = *(code **)(*(longlong *)this + 0xb28);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        (*pcVar3)(this,pUVar2);
        iVar1 = (this->DisplayMeshMaterialOverrides).ArrayNum;
        iVar4 = (**(code **)(*(longlong *)param_1 + 0x810))(param_1);
        if (iVar4 < iVar1) {
          iVar1 = iVar4;
        }
        SetMaterials(this,iVar1);
        this->DisplayModelLoadState = Complete;
        goto LAB_14cf9377b;
      }
    }
LAB_14cf9374c:
    (**(code **)(*(longlong *)this + 0xb28))(this,0);
    if (2 < (byte)LogXRDeviceVisualizationComponent._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogXRDeviceVisualizationComponent);
    }
  }
  if (param_1 == (UPrimitiveComponent *)0x0) {
    return;
  }
LAB_14cf9377b:
  (**(code **)(*(longlong *)param_1 + 0x4a0))(param_1,0);
  return;
}

// OnInteractionProfileChanged @ 14cf937e0

void __thiscall
UXRDeviceVisualizationComponent::OnInteractionProfileChanged(UXRDeviceVisualizationComponent *this)

{
  this->bInteractionProfilePresent = true;
  RefreshMesh(this);
  return;
}

// OnRegister @ 14cf93b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UXRDeviceVisualizationComponent::OnRegister(UXRDeviceVisualizationComponent *this)

{
  int iVar1;
  UMotionControllerComponent *this_00;
  UClass *pUVar2;
  FName FVar3;
  FName local_res8;
  FString local_18;
  
  UStaticMeshComponent::OnRegister((UStaticMeshComponent *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &UMotionControllerComponent::OnActivateVisualizationComponent,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FXRTrackingSystemDelegates::OnXRInteractionProfileChanged,this);
  this_00 = *(UMotionControllerComponent **)&this->field_0xd0;
  while( true ) {
    if (this_00 == (UMotionControllerComponent *)0x0) {
      if (1 < (byte)LogXRDeviceVisualizationComponent._0_1_) {
        local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
        local_res8.Number = *(uint *)&this->field_0x1c;
        ::FName::ToString(&local_res8,&local_18);
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogXRDeviceVisualizationComponent);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
    pUVar2 = Z_Construct_UClass_UMotionControllerComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) break;
    this_00 = *(UMotionControllerComponent **)&this_00->field_0xd0;
  }
  FVar3 = UMotionControllerComponent::GetTrackingMotionSource(this_00);
  local_18.Data._8_8_ = local_18.Data._8_8_ & 0xffffffff00000000;
  this->MotionSource = *(FName *)FVar3;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnInteractionProfileChanged;
  this->bIsRenderingActive = false;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UXRDeviceVisualizationComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FXRTrackingSystemDelegates::OnXRInteractionProfileChanged,
             (UXRDeviceVisualizationComponent *)&local_res8,(pmf_261b9faa *)this);
  local_18.Data._8_8_ = local_18.Data._8_8_ & 0xffffffff00000000;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)SetIsRenderingActive;
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddUObject<UXRDeviceVisualizationComponent>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &UMotionControllerComponent::OnActivateVisualizationComponent,
             (UXRDeviceVisualizationComponent *)&local_res8,(pmf_ff8fc9a8 *)this);
  return;
}

// OnUnregister @ 14cf93ec0

void __thiscall UXRDeviceVisualizationComponent::OnUnregister(UXRDeviceVisualizationComponent *this)

{
  UStaticMeshComponent::OnUnregister((UStaticMeshComponent *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FXRTrackingSystemDelegates::OnXRInteractionProfileChanged,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &UMotionControllerComponent::OnActivateVisualizationComponent,this);
  return;
}

// RefreshMesh @ 14cf97d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UXRDeviceVisualizationComponent::RefreshMesh(UXRDeviceVisualizationComponent *this)

{
  IXRSystemIdentifier *pIVar1;
  UObject *pUVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  IModularFeatures *this_00;
  FName *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  longlong lVar10;
  UClass *pUVar11;
  FXRDeviceId *pFVar12;
  ulonglong uVar13;
  FStaticBasicLogRecord *pFVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  FName local_res8;
  UXRDeviceVisualizationComponent *local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  FXRDeviceId local_b8;
  TArray<IXRSystemAssets_*,TSizedDefaultAllocator<32>_> local_a8;
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  
  if ((this->bIsRenderingActive == false) || (this->bIsVisualizationActive == false)) {
                    /* WARNING: Could not recover jumptable at 0x00014cf98238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0xb28))(this,0);
    return;
  }
  if (this->DisplayModelSource == CustomModelSourceId) {
    if ((this->CustomDisplayMesh).field0_0x0.DebugPtr == (UStaticMesh *)0x0) {
      (**(code **)(*(longlong *)this + 0xb28))();
      if (1 < (byte)LogXRDeviceVisualizationComponent._0_1_) {
        local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
        local_res8.Number = *(uint *)&this->field_0x1c;
        ::FName::ToString(&local_res8,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogXRDeviceVisualizationComponent);
        if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      (**(code **)(*(longlong *)this + 0xb28))();
      iVar6 = (this->DisplayMeshMaterialOverrides).ArrayNum;
      iVar5 = (**(code **)(*(longlong *)this + 0x810))(this);
      if (iVar5 < iVar6) {
        iVar6 = iVar5;
      }
      SetMaterials(this,iVar6);
    }
    return;
  }
  this_00 = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"XRSystemAssets");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  IModularFeatures::GetModularFeatureImplementations<IXRSystemAssets>
            (this_00,&local_a8,
             `public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'::__l2
             ::FeatureName);
  uVar3 = uStack_8c;
  uVar13 = (ulonglong)local_a8.ArrayNum;
  local_res18 = local_a8.ArrayNum;
  pFVar16 = local_a8.AllocatorInstance.Data + uVar13 * 8;
  uVar15 = uVar13;
  FVar17.Data = local_a8.AllocatorInstance.Data;
  local_res20 = pFVar16;
  do {
    iVar6 = 0;
    if ((int)uVar13 != (int)uVar15) {
      `TCheckedPointerIterator<IXRSystemAssets_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (FVar17.Data == pFVar16) goto LAB_14cf981de;
    pIVar1 = *(IXRSystemIdentifier **)FVar17.Data;
    if ((this->DisplayModelSource == (FName)0x0) ||
       (pFVar7 = (FName *)(**(code **)*pIVar1)(pIVar1,&local_b8),
       *pFVar7 == this->DisplayModelSource)) {
      if (this->MotionSource != IMotionController::HMDSourceId) {
        bVar4 = IMotionController::GetHandEnumForSourceName
                          (this->MotionSource,(EControllerHand *)&local_res8);
        if (!bVar4) goto LAB_14cf981de;
        iVar6 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,(ulonglong)local_res8 & 0xff);
      }
      pUVar2 = *(UObject **)&this->field_0x5a0;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar2 != (UObject *)0x0) goto LAB_14cf97f33;
      }
      else if (pUVar2 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar2);
LAB_14cf97f33:
        bVar4 = FXRDeviceId::IsOwnedBy(&this->DisplayDeviceId,pIVar1);
        if ((bVar4) && ((this->DisplayDeviceId).DeviceId == iVar6)) goto LAB_14cf981de;
      }
      this->DisplayModelLoadState = Pending;
      local_98 = OnDisplayModelLoaded;
      uStack_90 = 0;
      local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_80.DelegateSize = 0;
      uStack_8c = uVar3;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_88,(FWriteAccessScope *)&local_70);
      local_58 = &local_80;
      puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_80);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUPrimitiveComponent___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUXRDeviceVisualizationComponent____A6AXPEAVUPrimitiveComponent___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar8[3] = 0;
        local_res10 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res10);
        puVar8[4] = local_98;
        puVar8[5] = CONCAT44(uStack_8c,uStack_90);
      }
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      lVar10 = (**(code **)((longlong)*pIVar1 + 0x18))
                         (pIVar1,iVar6,*(undefined8 *)&this->field_0xa8,0x100008,0,&local_88);
      if (lVar10 == 0) {
        this->DisplayModelLoadState = Unloaded;
        (**(code **)(*(longlong *)this + 0xb28))(this,0);
        if ((this->bInteractionProfilePresent != false) &&
           (1 < (byte)LogXRDeviceVisualizationComponent._0_1_)) {
          pFVar14 = &::LOG_Static;
          goto LAB_14cf980c1;
        }
      }
      else {
        pUVar11 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        iVar5 = (int)pUVar11->_padding_;
        if ((iVar5 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar11->_padding_)) {
          if (this->DisplayModelLoadState != Complete) {
            this->DisplayModelLoadState = InProgress;
          }
          pFVar12 = FXRDeviceId::FXRDeviceId(&local_b8,pIVar1,iVar6);
          (this->DisplayDeviceId).SystemName = pFVar12->SystemName;
          (this->DisplayDeviceId).DeviceId = pFVar12->DeviceId;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_88,(FWriteAccessScope *)&local_70);
          if ((local_80.DelegateSize != 0) &&
             (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_80,0,0,0x10);
            local_80.DelegateSize = 0;
          }
          if (local_70.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
          }
          if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_80.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
LAB_14cf981de:
          if (local_a8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_a8.AllocatorInstance.Data);
          return;
        }
        this->DisplayModelLoadState = Unloaded;
        (**(code **)(*(longlong *)this + 0xb28))(this,0);
        if (1 < (byte)LogXRDeviceVisualizationComponent._0_1_) {
          pFVar14 = &::LOG_Static;
LAB_14cf980c1:
          UE::Logging::Private::BasicLog<2>
                    (pFVar14,(FLogCategoryBase *)&LogXRDeviceVisualizationComponent);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_88,(FWriteAccessScope *)&local_70);
      if ((local_80.DelegateSize != 0) &&
         (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_80,0,0,0x10);
        local_80.DelegateSize = 0;
      }
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_80.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
      pFVar16 = local_res20;
    }
    uVar13 = (ulonglong)(uint)local_a8.ArrayNum;
    FVar17.Data = FVar17.Data + 8;
    uVar15 = (ulonglong)local_res18;
  } while( true );
}

// SetCustomDisplayMesh @ 14cf9a4b0

void __thiscall
UXRDeviceVisualizationComponent::SetCustomDisplayMesh
          (UXRDeviceVisualizationComponent *this,UStaticMesh *param_1)

{
  UStaticMesh *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->CustomDisplayMesh).field0_0x0.DebugPtr;
  if (pUVar1 == (UStaticMesh *)0x0) {
    bVar2 = param_1 == (UStaticMesh *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->CustomDisplayMesh).field0_0x0.DebugPtr = param_1;
    if ((this->DisplayModelSource == CustomModelSourceId) && (param_1 != (UStaticMesh *)0x0)) {
      (**(code **)(*(longlong *)this + 0xb28))(this,param_1);
    }
  }
  return;
}

// SetDisplayModelSource @ 14cf9a6e0

void __thiscall
UXRDeviceVisualizationComponent::SetDisplayModelSource
          (UXRDeviceVisualizationComponent *this,FName param_1)

{
  if (param_1 != this->DisplayModelSource) {
    this->DisplayModelSource = param_1;
    RefreshMesh(this);
    return;
  }
  return;
}

// SetIsRenderingActive @ 14cf9a8c0

void __thiscall
UXRDeviceVisualizationComponent::SetIsRenderingActive
          (UXRDeviceVisualizationComponent *this,bool param_1)

{
  if (this->bIsRenderingActive != param_1) {
    this->bIsRenderingActive = param_1;
    RefreshMesh(this);
    return;
  }
  return;
}

// SetIsVisualizationActive @ 14cf9a8e0

void __thiscall
UXRDeviceVisualizationComponent::SetIsVisualizationActive
          (UXRDeviceVisualizationComponent *this,bool param_1)

{
  if (param_1 != this->bIsVisualizationActive) {
    this->bIsVisualizationActive = param_1;
  }
  RefreshMesh(this);
  return;
}

// SetMaterials @ 14cf9ac70

void __thiscall
UXRDeviceVisualizationComponent::SetMaterials(UXRDeviceVisualizationComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (0 < param_1) {
    uVar4 = 0;
    lVar5 = 0;
    do {
      pcVar1 = *(code **)(*(longlong *)this + 0x6b8);
      uVar3 = 0;
      if ((int)uVar4 < (this->DisplayMeshMaterialOverrides).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*pcVar1)(this,uVar4,
                *(undefined8 *)((this->DisplayMeshMaterialOverrides).AllocatorInstance.Data + lVar5)
               );
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < param_1);
  }
  return;
}

// StaticRegisterNativesUXRDeviceVisualizationComponent @ 14cf9ca40

void __cdecl
UXRDeviceVisualizationComponent::StaticRegisterNativesUXRDeviceVisualizationComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetCustomDisplayMesh @ 14cfa53b0

void __cdecl
UXRDeviceVisualizationComponent::execSetCustomDisplayMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UObject *pUVar3;
  bool bVar4;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UObject **)&param_1[0x28].field_0x20 == (UObject *)0x0) {
    bVar4 = local_res8 == (UObject *)0x0;
  }
  else {
    bVar4 = *(UObject **)&param_1[0x28].field_0x20 == local_res8;
  }
  if (!bVar4) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    *(UObject **)&param_1[0x28].field_0x20 = pUVar3;
    FVar2.ComparisonIndex.Value = *(uint *)&param_1[0x28].field_0x14;
    FVar2.Number = *(uint *)&param_1[0x28].field_0x18;
    if ((FVar2 == CustomModelSourceId) && (pUVar3 != (UObject *)0x0)) {
      (**(code **)(*(longlong *)param_1 + 0xb28))(param_1,pUVar3);
    }
  }
  return;
}

// execSetDisplayModelSource @ 14cfa5490

void __cdecl
UXRDeviceVisualizationComponent::execSetDisplayModelSource
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8 != *(longlong *)&param_1[0x28].field_0x14) {
    *(longlong *)&param_1[0x28].field_0x14 = local_res8;
    RefreshMesh((UXRDeviceVisualizationComponent *)param_1);
  }
  return;
}

// execSetIsRenderingActive @ 14cfa57d0

void __cdecl
UXRDeviceVisualizationComponent::execSetIsRenderingActive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bool)param_1[0x29].field_0x10 != (local_res8[0] != 0)) {
    param_1[0x29].field_0x10 = local_res8[0] != 0;
    RefreshMesh((UXRDeviceVisualizationComponent *)param_1);
  }
  return;
}

// execSetIsVisualizationActive @ 14cfa5870

void __cdecl
UXRDeviceVisualizationComponent::execSetIsVisualizationActive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res8[0] != 0) != (bool)param_1[0x28].field_0x10) {
    param_1[0x28].field_0x10 = local_res8[0] != 0;
  }
  RefreshMesh((UXRDeviceVisualizationComponent *)param_1);
  return;
}

