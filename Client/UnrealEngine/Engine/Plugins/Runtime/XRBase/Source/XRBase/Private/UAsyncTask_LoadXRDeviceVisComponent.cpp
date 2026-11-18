// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 12

// StaticClass @ 14cf76ca0

UClass * __cdecl UAsyncTask_LoadXRDeviceVisComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"AsyncTask_LoadXRDeviceVisComponent",
               &Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.InnerSingleton,
               StaticRegisterNativesUAsyncTask_LoadXRDeviceVisComponent,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncTask_LoadXRDeviceVisComponent>,
               InternalVTableHelperCtorCaller<UAsyncTask_LoadXRDeviceVisComponent>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.InnerSingleton;
}

// UAsyncTask_LoadXRDeviceVisComponent @ 14cf7e290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAsyncTask_LoadXRDeviceVisComponent * __thiscall
UAsyncTask_LoadXRDeviceVisComponent::UAsyncTask_LoadXRDeviceVisComponent
          (UAsyncTask_LoadXRDeviceVisComponent *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncTask_LoadXRDeviceVisComponent__6B_;
  *(undefined8 *)&this->OnModelLoaded = 0;
  *(undefined8 *)&(this->OnModelLoaded).field_0x8 = 0;
  *(undefined8 *)&(this->OnModelLoaded).field_0x10 = 0;
  *(undefined8 *)&this->OnLoadFailure = 0;
  *(undefined8 *)&(this->OnLoadFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoadFailure).field_0x10 = 0;
  this->LoadStatus = Pending;
  (this->SpawnedComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  return this;
}

// UAsyncTask_LoadXRDeviceVisComponent @ 14cf7e2e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAsyncTask_LoadXRDeviceVisComponent * __thiscall
UAsyncTask_LoadXRDeviceVisComponent::UAsyncTask_LoadXRDeviceVisComponent
          (UAsyncTask_LoadXRDeviceVisComponent *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncTask_LoadXRDeviceVisComponent__6B_;
  *(undefined8 *)&this->OnModelLoaded = 0;
  *(undefined8 *)&(this->OnModelLoaded).field_0x8 = 0;
  *(undefined8 *)&(this->OnModelLoaded).field_0x10 = 0;
  *(undefined8 *)&this->OnLoadFailure = 0;
  *(undefined8 *)&(this->OnLoadFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoadFailure).field_0x10 = 0;
  this->LoadStatus = Pending;
  (this->SpawnedComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  return this;
}

// ~UAsyncTask_LoadXRDeviceVisComponent @ 14cf7f030

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
UAsyncTask_LoadXRDeviceVisComponent::~UAsyncTask_LoadXRDeviceVisComponent
          (UAsyncTask_LoadXRDeviceVisComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncTask_LoadXRDeviceVisComponent__6B_;
  pvVar1 = *(void **)&(this->OnLoadFailure).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoadFailure);
  pvVar1 = *(void **)&(this->OnModelLoaded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnModelLoaded);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  return;
}

// Activate @ 14cf810a0

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
UAsyncTask_LoadXRDeviceVisComponent::Activate(UAsyncTask_LoadXRDeviceVisComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  TObjectPtr<UPrimitiveComponent>_u_0 local_res8 [4];
  
  UBlueprintAsyncActionBase::Activate((UBlueprintAsyncActionBase *)this);
  if (this->LoadStatus == Pending) {
    if ((this->SpawnedComponent).field0_0x0.DebugPtr != (UPrimitiveComponent *)0x0) {
      return;
    }
    local_res8[0] = (this->SpawnedComponent).field0_0x0;
  }
  else {
    local_res8[0] = (this->SpawnedComponent).field0_0x0;
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnModelLoaded;
    if (this->LoadStatus == LoadSuccess) goto LAB_14cf810d4;
  }
  this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnLoadFailure;
LAB_14cf810d4:
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (this_00,local_res8);
                    /* WARNING: Could not recover jumptable at 0x00014cf810ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))(this);
  return;
}

// AddDeviceVisualizationComponentAsync @ 14cf81300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAsyncTask_LoadXRDeviceVisComponent * __cdecl
UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync
          (AActor *param_1,FXRDeviceId *param_2,bool param_3,TTransform<double> *param_4,
          UPrimitiveComponent **param_5)

{
  UObject *pUVar1;
  UAsyncTask_LoadXRDeviceVisComponent *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UPrimitiveComponent *pUVar5;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UAsyncTask_LoadXRDeviceVisComponent>(pUVar1);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUPrimitiveComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = pUVar2;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pUVar5 = XRAssetFunctionLibrary_Impl::AddDeviceVisualizationComponent
                     (param_1,param_2,param_3,param_4,false,
                      (TDelegate<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy> *)
                      local_68);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (pUVar2->SpawnedComponent).field0_0x0.DebugPtr = pUVar5;
  *param_5 = pUVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
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
            ((FMRSWRecursiveAccessDetector *)local_68);
  return pUVar2;
}

// AddNamedDeviceVisualizationComponentAsync @ 14cf81940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAsyncTask_LoadXRDeviceVisComponent * __cdecl
UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync
          (AActor *param_1,FName param_2,FName param_3,bool param_4,TTransform<double> *param_5,
          FXRDeviceId *param_6,UPrimitiveComponent **param_7)

{
  UObject *pUVar1;
  UAsyncTask_LoadXRDeviceVisComponent *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UPrimitiveComponent *pUVar5;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UAsyncTask_LoadXRDeviceVisComponent>(pUVar1);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUPrimitiveComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = pUVar2;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pUVar5 = XRAssetFunctionLibrary_Impl::AddNamedDeviceVisualizationComponent
                     (param_1,param_2,param_3,param_4,param_5,param_6,false,
                      (TDelegate<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy> *)
                      local_68);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (pUVar2->SpawnedComponent).field0_0x0.DebugPtr = pUVar5;
  *param_7 = pUVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
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
            ((FMRSWRecursiveAccessDetector *)local_68);
  return pUVar2;
}

// GetPrivateStaticClass @ 14cf90540

UClass * __cdecl UAsyncTask_LoadXRDeviceVisComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"AsyncTask_LoadXRDeviceVisComponent",
               &Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.InnerSingleton,
               StaticRegisterNativesUAsyncTask_LoadXRDeviceVisComponent,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncTask_LoadXRDeviceVisComponent>,
               InternalVTableHelperCtorCaller<UAsyncTask_LoadXRDeviceVisComponent>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.InnerSingleton;
}

// OnLoadComplete @ 14cf93860

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
UAsyncTask_LoadXRDeviceVisComponent::OnLoadComplete
          (UAsyncTask_LoadXRDeviceVisComponent *this,bool param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  TObjectPtr<UPrimitiveComponent>_u_0 local_res8 [4];
  
  local_res8[0] = (this->SpawnedComponent).field0_0x0;
  if (param_1) {
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnModelLoaded;
  }
  else {
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnLoadFailure;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (this_00,local_res8);
                    /* WARNING: Could not recover jumptable at 0x00014cf93895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))(this);
  return;
}

// StaticRegisterNativesUAsyncTask_LoadXRDeviceVisComponent @ 14cf9c930

void __cdecl
UAsyncTask_LoadXRDeviceVisComponent::StaticRegisterNativesUAsyncTask_LoadXRDeviceVisComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddDeviceVisualizationComponentAsync @ 14cf9fd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UAsyncTask_LoadXRDeviceVisComponent::execAddDeviceVisualizationComponentAsync
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FScriptContainerElement *pFVar2;
  TTransform<double> *pTVar3;
  FProperty *pFVar4;
  IXRSystemIdentifier *pIVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  AActor *this;
  bool bVar16;
  UObject *pUVar17;
  UAsyncTask_LoadXRDeviceVisComponent *pUVar18;
  undefined8 *puVar19;
  ulong64 uVar20;
  IModularFeatures *this_00;
  UPrimitiveComponent *this_01;
  int iVar21;
  TObjectPtr<UPrimitiveComponent>_u_0 *pTVar22;
  FScriptContainerElement *pFVar23;
  FXRDeviceId *this_02;
  bool bVar24;
  undefined1 auStack_168 [32];
  undefined1 local_137 [3];
  int local_134;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  TObjectPtr<UPrimitiveComponent>_u_0 local_118;
  AActor *local_110;
  FDestructionSentinel local_108;
  FDelegateAllocation *local_f0;
  undefined8 local_e8;
  FXRDeviceId local_e0;
  TTransform<double> *local_d0;
  UAsyncTask_LoadXRDeviceVisComponent *local_c8;
  TObjectPtr<UPrimitiveComponent>_u_0 *local_c0;
  undefined8 *local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  this_01 = (UPrimitiveComponent *)0x0;
  local_110 = (AActor *)0x0;
  local_b8 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  FXRDeviceId::FXRDeviceId(&local_e0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_134 = 0;
  this_02 = &local_e0;
  if ((FXRDeviceId *)param_2->MostRecentPropertyAddress != (FXRDeviceId *)0x0) {
    this_02 = (FXRDeviceId *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_134,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_134);
  }
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar14 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar15 = GlobalVectorConstants::Float1110.m128_f32[3];
  bVar24 = local_134 == 0;
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_a8.Rotation.ZW.m128d_f64[0] = (double)fVar10;
  local_a8.Rotation.ZW.m128d_f64[1] = (double)fVar13;
  local_a8.Translation.ZW.m128d_f64[0] = (double)fVar11;
  local_a8.Translation.ZW.m128d_f64[1] = (double)fVar14;
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar6;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fVar12;
  local_a8.Scale3D.ZW.m128d_f64[1] = (double)fVar15;
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)fVar7;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pTVar3 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  local_118.DebugPtr = (UPrimitiveComponent *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_d0 = &local_a8;
  if (pTVar3 != (TTransform<double> *)0x0) {
    local_d0 = pTVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  this = local_110;
  pTVar22 = &local_118;
  if ((TObjectPtr<UPrimitiveComponent>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPrimitiveComponent>_u_0 *)0x0) {
    pTVar22 = (TObjectPtr<UPrimitiveComponent>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c0 = pTVar22;
  pUVar17 = GetTransientPackageAsObject();
  pUVar18 = NewObject<UAsyncTask_LoadXRDeviceVisComponent>(pUVar17);
  local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_128.DelegateSize = 0;
  local_c8 = pUVar18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_130,(FWriteAccessScope *)&local_108);
  local_f0 = &local_128;
  puVar19 = UE::Core::Private::DelegateAllocate(0x20,&local_128);
  if (puVar19 != (undefined8 *)0x0) {
    *puVar19 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUPrimitiveComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar20;
    *puVar19 = &TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar19[3] = pUVar18;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  if ((this == (AActor *)0x0) || (((uint)this->_padding_ >> 0x1e & 1) != 0)) {
    if (2 < (byte)LogHMD._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
    }
    goto LAB_14cfa0174;
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
            (this_00,(TArray<IXRSystemAssets_*,TSizedDefaultAllocator<32>_> *)&local_108,
             `public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'::__l2
             ::FeatureName);
  iVar21 = (int)local_108.Accessor;
  pFVar2 = (FScriptContainerElement *)(local_108._0_8_ + (longlong)iVar21 * 8);
  pFVar23 = (FScriptContainerElement *)local_108._0_8_;
  while( true ) {
    if ((int)local_108.Accessor != iVar21) {
      `TCheckedPointerIterator<IXRSystemAssets_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_137);
    }
    if (pFVar23 == pFVar2) goto LAB_14cfa011c;
    pIVar5 = *(IXRSystemIdentifier **)pFVar23;
    bVar16 = FXRDeviceId::IsOwnedBy(this_02,pIVar5);
    if (bVar16) break;
    pFVar23 = pFVar23 + 8;
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    this_01 = (UPrimitiveComponent *)
              (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,this_02->DeviceId);
    if (this_01 == (UPrimitiveComponent *)0x0) {
LAB_14cfa00fb:
      if ((2 < (byte)LogHMD._0_1_) &&
         (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD),
         this_01 == (UPrimitiveComponent *)0x0)) {
LAB_14cfa011c:
        if (2 < (byte)LogHMD._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
        }
      }
    }
    else {
      UActorComponent::RegisterComponent((UActorComponent *)this_01);
      if (bVar24) {
        if ((this->RootComponent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
          AActor::SetRootComponent(this,(USceneComponent *)this_01);
        }
        else {
          local_e8 = 0;
          (**(code **)(*(longlong *)this_01 + 0x508))(this_01);
        }
      }
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)this_01,local_d0,false,(FHitResult *)0x0,None);
    }
  }
  else if (2 < (byte)LogHMD._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
    goto LAB_14cfa00fb;
  }
  pTVar22 = local_c0;
  pUVar18 = local_c8;
  param_3 = local_b8;
  if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._0_8_);
    pTVar22 = local_c0;
    pUVar18 = local_c8;
    param_3 = local_b8;
  }
LAB_14cfa0174:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  (pUVar18->SpawnedComponent).field0_0x0.DebugPtr = this_01;
  pTVar22->DebugPtr = this_01;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_130,(FWriteAccessScope *)&local_108);
  if ((local_128.DelegateSize != 0) &&
     (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_128,0,0,0x10);
    local_128.DelegateSize = 0;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_128.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  *(UAsyncTask_LoadXRDeviceVisComponent **)param_3 = pUVar18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pTVar22->DebugPtr != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pTVar22->DebugPtr);
  }
  return;
}

// execAddNamedDeviceVisualizationComponentAsync @ 14cfa0a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UAsyncTask_LoadXRDeviceVisComponent::execAddNamedDeviceVisualizationComponentAsync
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FXRDeviceId *pFVar2;
  FProperty *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  FName FVar14;
  FName FVar15;
  UObject *pUVar16;
  UAsyncTask_LoadXRDeviceVisComponent *pUVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  UPrimitiveComponent *pUVar20;
  TObjectPtr<UPrimitiveComponent>_u_0 *pTVar21;
  TTransform<double> *pTVar22;
  FXRDeviceId *pFVar23;
  bool bVar24;
  undefined1 auStackY_168 [32];
  int local_124;
  undefined1 local_120 [8];
  FDelegateAllocation local_118;
  FName local_108;
  FName local_100;
  TObjectPtr<UPrimitiveComponent>_u_0 local_f8;
  AActor *local_f0;
  FXRDeviceId local_e8;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  AActor *local_b8;
  undefined8 *local_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_f0 = (AActor *)0x0;
  local_b0 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_124 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_124,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_124);
  }
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  bVar24 = local_124 != 0;
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_a8.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_a8.Rotation.ZW.m128d_f64[1] = (double)fVar11;
  local_a8.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_a8.Translation.ZW.m128d_f64[1] = (double)fVar12;
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar4;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_a8.Scale3D.ZW.m128d_f64[1] = (double)fVar13;
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)fVar5;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pTVar22 = &local_a8;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar22 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FXRDeviceId::FXRDeviceId(&local_e8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pFVar2 = (FXRDeviceId *)param_2->MostRecentPropertyAddress;
  local_f8.DebugPtr = (UPrimitiveComponent *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar23 = &local_e8;
  if (pFVar2 != (FXRDeviceId *)0x0) {
    pFVar23 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  FVar15 = local_100;
  FVar14 = local_108;
  pTVar21 = &local_f8;
  if ((TObjectPtr<UPrimitiveComponent>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPrimitiveComponent>_u_0 *)0x0) {
    pTVar21 = (TObjectPtr<UPrimitiveComponent>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b8 = local_f0;
  pUVar16 = GetTransientPackageAsObject();
  pUVar17 = NewObject<UAsyncTask_LoadXRDeviceVisComponent>(pUVar16);
  local_120 = (undefined1  [8])0x0;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_118.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_120,
             (FWriteAccessScope *)&local_d8);
  local_c0 = &local_118;
  puVar18 = UE::Core::Private::DelegateAllocate(0x20,&local_118);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUPrimitiveComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar18[3] = pUVar17;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  pUVar20 = XRAssetFunctionLibrary_Impl::AddNamedDeviceVisualizationComponent
                      (local_b8,FVar15,FVar14,bVar24,pTVar22,pFVar23,false,
                       (TDelegate<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy> *)
                       local_120);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar20 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  (pUVar17->SpawnedComponent).field0_0x0.DebugPtr = pUVar20;
  pTVar21->DebugPtr = pUVar20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_120,
             (FWriteAccessScope *)&local_d8);
  if ((local_118.DelegateSize != 0) &&
     (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_118,0,0,0x10);
    local_118.DelegateSize = 0;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_118.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_120);
  *local_b0 = pUVar17;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pTVar21->DebugPtr != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pTVar21->DebugPtr);
  }
  return;
}

