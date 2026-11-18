// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 10

// StaticClass @ 14cf76ae0

UClass * __cdecl UXRAssetFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UXRAssetFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"XRAssetFunctionLibrary",
               &Z_Registration_Info_UClass_UXRAssetFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUXRAssetFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UXRAssetFunctionLibrary>,
               InternalVTableHelperCtorCaller<UXRAssetFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UXRAssetFunctionLibrary.InnerSingleton;
}

// UXRAssetFunctionLibrary @ 14cf7e670

UXRAssetFunctionLibrary * __thiscall
UXRAssetFunctionLibrary::UXRAssetFunctionLibrary
          (UXRAssetFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UXRAssetFunctionLibrary__6B_;
  return this;
}

// UXRAssetFunctionLibrary @ 14cf7e6a0

UXRAssetFunctionLibrary * __thiscall
UXRAssetFunctionLibrary::UXRAssetFunctionLibrary
          (UXRAssetFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UXRAssetFunctionLibrary__6B_;
  return this;
}

// ~UXRAssetFunctionLibrary @ 14cf7f280

void __thiscall UXRAssetFunctionLibrary::~UXRAssetFunctionLibrary(UXRAssetFunctionLibrary *this)

{
  *(undefined ***)this = &___7UXRAssetFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddDeviceVisualizationComponentBlocking @ 14cf81480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPrimitiveComponent * __cdecl
UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking
          (AActor *param_1,FXRDeviceId *param_2,bool param_3,TTransform<double> *param_4)

{
  UPrimitiveComponent *pUVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  pUVar1 = XRAssetFunctionLibrary_Impl::AddDeviceVisualizationComponent
                     (param_1,param_2,param_3,param_4,true,
                      (TDelegate<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy> *)
                      local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return pUVar1;
}

// AddNamedDeviceVisualizationComponentBlocking @ 14cf81ae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPrimitiveComponent * __cdecl
UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking
          (AActor *param_1,FName param_2,FName param_3,bool param_4,TTransform<double> *param_5,
          FXRDeviceId *param_6)

{
  UPrimitiveComponent *pUVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  pUVar1 = XRAssetFunctionLibrary_Impl::AddNamedDeviceVisualizationComponent
                     (param_1,param_2,param_3,param_4,param_5,param_6,true,
                      (TDelegate<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy> *)
                      local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return pUVar1;
}

// GetPrivateStaticClass @ 14cf90840

UClass * __cdecl UXRAssetFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UXRAssetFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"XRAssetFunctionLibrary",
               &Z_Registration_Info_UClass_UXRAssetFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUXRAssetFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UXRAssetFunctionLibrary>,
               InternalVTableHelperCtorCaller<UXRAssetFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UXRAssetFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesUXRAssetFunctionLibrary @ 14cf9ca00

void __cdecl UXRAssetFunctionLibrary::StaticRegisterNativesUXRAssetFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UXRAssetFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddDeviceVisualizationComponentBlocking @ 14cfa0290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UXRAssetFunctionLibrary::execAddDeviceVisualizationComponentBlocking
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FScriptContainerElement *pFVar2;
  FProperty *pFVar3;
  IXRSystemIdentifier *pIVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  AActor *this;
  bool bVar15;
  IModularFeatures *this_00;
  USceneComponent *this_01;
  int iVar16;
  FScriptContainerElement *pFVar17;
  FXRDeviceId *this_02;
  bool bVar18;
  undefined1 auStack_148 [32];
  undefined1 local_117 [3];
  int local_114;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_110;
  ForAnyElementType local_108;
  ulonglong local_100;
  AActor *local_f8;
  undefined8 local_f0;
  FDestructionSentinel local_e8;
  FXRDeviceId local_d0;
  TTransform<double> *local_c0;
  undefined8 *local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  this_01 = (USceneComponent *)0x0;
  local_f8 = (AActor *)0x0;
  local_b8 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  FXRDeviceId::FXRDeviceId(&local_d0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_114 = 0;
  this_02 = &local_d0;
  if ((FXRDeviceId *)param_2->MostRecentPropertyAddress != (FXRDeviceId *)0x0) {
    this_02 = (FXRDeviceId *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_114,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_114);
  }
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar13 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float1110.m128_f32[3];
  bVar18 = local_114 == 0;
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_a8.Rotation.ZW.m128d_f64[0] = (double)fVar9;
  local_a8.Rotation.ZW.m128d_f64[1] = (double)fVar12;
  local_a8.Translation.ZW.m128d_f64[0] = (double)fVar10;
  local_a8.Translation.ZW.m128d_f64[1] = (double)fVar13;
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar5;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fVar11;
  local_a8.Scale3D.ZW.m128d_f64[1] = (double)fVar14;
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  this = local_f8;
  local_100 = 0;
  local_c0 = &local_a8;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    local_c0 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  local_110.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_108.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_f8 == (AActor *)0x0) || (((uint)local_f8->_padding_ >> 0x1e & 1) != 0)) {
    if (2 < (byte)LogHMD._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
    }
    goto LAB_14cfa061f;
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
            (this_00,(TArray<IXRSystemAssets_*,TSizedDefaultAllocator<32>_> *)&local_e8,
             `public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'::__l2
             ::FeatureName);
  iVar16 = (int)local_e8.Accessor;
  pFVar2 = (FScriptContainerElement *)(local_e8._0_8_ + (longlong)iVar16 * 8);
  pFVar17 = (FScriptContainerElement *)local_e8._0_8_;
  while( true ) {
    if ((int)local_e8.Accessor != iVar16) {
      `TCheckedPointerIterator<IXRSystemAssets_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_117);
    }
    if (pFVar17 == pFVar2) goto LAB_14cfa05cf;
    pIVar4 = *(IXRSystemIdentifier **)pFVar17;
    bVar15 = FXRDeviceId::IsOwnedBy(this_02,pIVar4);
    if (bVar15) break;
    pFVar17 = pFVar17 + 8;
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    this_01 = (USceneComponent *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,this_02->DeviceId);
    if (this_01 == (USceneComponent *)0x0) {
LAB_14cfa05ae:
      if ((2 < (byte)LogHMD._0_1_) &&
         (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD),
         this_01 == (USceneComponent *)0x0)) {
LAB_14cfa05cf:
        if (2 < (byte)LogHMD._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
        }
      }
    }
    else {
      UActorComponent::RegisterComponent((UActorComponent *)this_01);
      if (bVar18) {
        if ((this->RootComponent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
          AActor::SetRootComponent(this,this_01);
        }
        else {
          local_f0 = 0;
          (**(code **)(this_01->_padding_ + 0x508))(this_01);
        }
      }
      USceneComponent::SetRelativeTransform(this_01,local_c0,false,(FHitResult *)0x0,None);
    }
  }
  else if (2 < (byte)LogHMD._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
    goto LAB_14cfa05ae;
  }
  param_3 = local_b8;
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
    param_3 = local_b8;
  }
LAB_14cfa061f:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_110,(FWriteAccessScope *)&local_e8);
  if (((int)local_100 != 0) && (local_108.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_108.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_108,0,0,0x10);
    local_100 = local_100 & 0xffffffff00000000;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_110.AccessDetector);
  *(USceneComponent **)param_3 = this_01;
  return;
}

// execAddNamedDeviceVisualizationComponentBlocking @ 14cfa0e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UXRAssetFunctionLibrary::execAddNamedDeviceVisualizationComponentBlocking
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UPrimitiveComponent *pUVar13;
  FXRDeviceId *pFVar14;
  TTransform<double> *pTVar15;
  bool bVar16;
  undefined1 auStackY_148 [32];
  int local_108 [2];
  FName local_100;
  FName local_f8;
  undefined1 local_f0 [8];
  ForAnyElementType local_e8;
  ulonglong local_e0;
  AActor *local_d8;
  FXRDeviceId local_d0;
  FDestructionSentinel local_c0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_d8 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_108[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  bVar16 = local_108[0] != 0;
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_a8.Rotation.ZW.m128d_f64[0] = (double)fVar7;
  local_a8.Rotation.ZW.m128d_f64[1] = (double)fVar10;
  local_a8.Translation.ZW.m128d_f64[0] = (double)fVar8;
  local_a8.Translation.ZW.m128d_f64[1] = (double)fVar11;
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_a8.Scale3D.ZW.m128d_f64[1] = (double)fVar12;
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pTVar15 = &local_a8;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar15 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FXRDeviceId::FXRDeviceId(&local_d0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_e0 = 0;
  pFVar14 = &local_d0;
  if ((FXRDeviceId *)param_2->MostRecentPropertyAddress != (FXRDeviceId *)0x0) {
    pFVar14 = (FXRDeviceId *)param_2->MostRecentPropertyAddress;
  }
  local_f0 = (undefined1  [8])0x0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar13 = XRAssetFunctionLibrary_Impl::AddNamedDeviceVisualizationComponent
                      (local_d8,local_f8,local_100,bVar16,pTVar15,pFVar14,true,
                       (TDelegate<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy> *)
                       local_f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
             (FWriteAccessScope *)&local_c0);
  if (((int)local_e0 != 0) && (local_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,0x10);
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  if (local_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  *(UPrimitiveComponent **)param_3 = pUVar13;
  return;
}

