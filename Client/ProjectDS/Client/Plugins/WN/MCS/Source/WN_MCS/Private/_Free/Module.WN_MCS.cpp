// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_MCS
// Functions: 40

// BakedResourcePrefix'' @ 1411ddad0

void __cdecl `dynamic_initializer_for_'FBakingConfiguration::BakedResourcePrefix__(void)

{
  ::FString::FString(&FBakingConfiguration::BakedResourcePrefix,L"BAKE_");
  atexit(`dynamic_atexit_destructor_for_'FBakingConfiguration::BakedResourcePrefix__);
  return;
}

// DEFAULT_PARAMETER_VALUE'' @ 1411ddb00

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE__
          (void)

{
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.XY =
       UE::Math::TTransform<double>::Identity.Rotation.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.ZW =
       UE::Math::TTransform<double>::Identity.Rotation.ZW;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.XY =
       UE::Math::TTransform<double>::Identity.Translation.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.ZW =
       UE::Math::TTransform<double>::Identity.Translation.ZW;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.XY =
       UE::Math::TTransform<double>::Identity.Scale3D.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.ZW =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  return;
}

// DEFAULT_PARAMETER_VALUE'' @ 1411ddb60

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE__(void)

{
  FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE = FLinearColor::Black;
  return;
}

// DEFAULT_PARAMETER_VALUE_NAME'' @ 1411ddb80

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'FCustomizableObjectBoolParameterValue::
         DEFAULT_PARAMETER_VALUE_NAME__);
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 1411ddba0

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'MCS'' @ 1411ddbc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__MCS__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&MCS,L"MCS",Log,All);
  atexit(_dynamic_atexit_destructor_for__MCS__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWN_MCS'' @ 1411ddc00

void __cdecl _dynamic_initializer_for__ModuleRegistrantWN_MCS__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WN_MCS";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WN_MCS",6);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FWN_MCS_Module>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_MCS_Source_WN_MCS_Public_WN_MCS_COICore_h__Script_WN_MCS_2695283930'' @ 1411ddc50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_MCS_Source_WN_MCS_Public_WN_MCS_COICore_h__Script_WN_MCS_2695283930__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_MCS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_MCS_Source_WN_MCS_Public_WN_MCS_COICore_h__Script_WN_MCS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_MCS_Source_WN_MCS_Public_WN_MCS_COICore_h__Script_WN_MCS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_WN_MCS'' @ 1411ddca0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_WN_MCS__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xed247325;
  local_res8[0].DeclarationsHash = 0x7459fcdc;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_WN_MCS,L"/Script/WN_MCS",
             &Z_Registration_Info_UPackage__Script_WN_MCS,local_res8);
  return;
}

// `dynamic_initializer_for_'sCOCompilingName'' @ 1411ddce0

void __cdecl _dynamic_initializer_for__sCOCompilingName__(void)

{
  FName::FName(&sCOCompilingName,"Compiling... Retry");
  return;
}

// Z_Construct_UPackage__Script_WN_MCS @ 14acca860

UPackage * __cdecl Z_Construct_UPackage__Script_WN_MCS(void)

{
  if (Z_Registration_Info_UPackage__Script_WN_MCS.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_WN_MCS.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_WN_MCS.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14accab50

void * __thiscall FWN_MCS_Module::_scalar_deleting_destructor_(FWN_MCS_Module *this,uint param_1)

{
  *this = (FWN_MCS_Module)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UWN_MCS_COICore @ 14accab90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_MCS_COICore(void)

{
  if (Z_Registration_Info_UClass_UWN_MCS_COICore.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_MCS_COICore.OuterSingleton,
               &Z_Construct_UClass_UWN_MCS_COICore_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_MCS_COICore.OuterSingleton;
}

// EWN_MCS_MeshUpdatePolicy_StaticEnum @ 14accabd0

UEnum * __cdecl EWN_MCS_MeshUpdatePolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_MCS_MeshUpdatePolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_MCS();
    Z_Registration_Info_UEnum_EWN_MCS_MeshUpdatePolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_MCS_EWN_MCS_MeshUpdatePolicy,(UObject *)pUVar1,
                       L"EWN_MCS_MeshUpdatePolicy");
  }
  return Z_Registration_Info_UEnum_EWN_MCS_MeshUpdatePolicy.OuterSingleton;
}

// Z_Construct_UFunction_UWN_MCS_COICore_GetCOComponentNames @ 14accac10

UFunction * __cdecl Z_Construct_UFunction_UWN_MCS_COICore_GetCOComponentNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_MCS_COICore_GetCOComponentNames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWN_MCS_COICore_UpdateMeshCompleteImpl @ 14accac50

UFunction * __cdecl Z_Construct_UFunction_UWN_MCS_COICore_UpdateMeshCompleteImpl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_MCS_COICore_UpdateMeshCompleteImpl_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInitializeCOIAsync_SetBit @ 14accac90

void __cdecl
Z_Construct_UClass_UWN_MCS_COICore_Statics::NewProp_bInitializeCOIAsync_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x270) = 1;
  return;
}

// NewProp_bInitializeCOIOnRegister_SetBit @ 14accaca0

void __cdecl
Z_Construct_UClass_UWN_MCS_COICore_Statics::NewProp_bInitializeCOIOnRegister_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x271) = 1;
  return;
}

// NewProp_bUpdateMeshOnRegister_SetBit @ 14accacb0

void __cdecl
Z_Construct_UClass_UWN_MCS_COICore_Statics::NewProp_bUpdateMeshOnRegister_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x272) = 1;
  return;
}

// NewProp_bAutoApplyMeshToSKMComp_SetBit @ 14accacc0

void __cdecl
Z_Construct_UClass_UWN_MCS_COICore_Statics::NewProp_bAutoApplyMeshToSKMComp_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x273) = 1;
  return;
}

// NewProp_bAllowPendingUpdateMesh_SetBit @ 14accacd0

void __cdecl
Z_Construct_UClass_UWN_MCS_COICore_Statics::NewProp_bAllowPendingUpdateMesh_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x274) = 1;
  return;
}

// NewProp_bUseFirstNameIfMissing_SetBit @ 14accace0

void __cdecl
Z_Construct_UClass_UWN_MCS_COICore_Statics::NewProp_bUseFirstNameIfMissing_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x275) = 1;
  return;
}

// InternalConstructor<UWN_MCS_COICore> @ 14accadf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UWN_MCS_COICore>(FObjectInitializer *param_1)

{
  USceneComponent *this;
  
  this = (USceneComponent *)param_1->Obj;
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x1010101;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x101;
    this->_padding_ = (longlong)&UWN_MCS_COICore::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UWN_MCS_COICore::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UWN_MCS_COICore::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    TQueue<FWN_MCS_MeshUpdateParams,1>::TQueue<FWN_MCS_MeshUpdateParams,1>
              ((TQueue<FWN_MCS_MeshUpdateParams,1> *)&this[1]._padding_);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<UWN_MCS_COICore> @ 14accaf00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_MCS_COICore>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_MCS_COICore::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x1010101;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x101;
    this->_padding_ = (longlong)&UWN_MCS_COICore::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UWN_MCS_COICore::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UWN_MCS_COICore::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    TQueue<FWN_MCS_MeshUpdateParams,1>::TQueue<FWN_MCS_MeshUpdateParams,1>
              ((TQueue<FWN_MCS_MeshUpdateParams,1> *)&this[1]._padding_);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<UCustomizableObjectInstanceUsage> @ 14accb080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCustomizableObjectInstanceUsage * __cdecl
NewObject<UCustomizableObjectInstanceUsage>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UCustomizableObjectInstanceUsage *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UCustomizableObjectInstanceUsage_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UCustomizableObjectInstanceUsage *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EWN_MCS_MeshUpdatePolicy> @ 14accb170

UEnum * __cdecl StaticEnum<enum_EWN_MCS_MeshUpdatePolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_MCS_MeshUpdatePolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_MCS();
    Z_Registration_Info_UEnum_EWN_MCS_MeshUpdatePolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_MCS_EWN_MCS_MeshUpdatePolicy,(UObject *)pUVar1,
                       L"EWN_MCS_MeshUpdatePolicy");
  }
  return Z_Registration_Info_UEnum_EWN_MCS_MeshUpdatePolicy.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14accb8e4

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_MCS_COICore::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_MCS_COICore::_vector_deleting_destructor__adjustor_40__(UWN_MCS_COICore *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_MCS_COICore *)&this[-1].MeshUpdateParams.Callback,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14accb900

void * __thiscall
IBaseDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14accb930

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`UWN_MCS_COICore::InitializeCOIAsync'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14accb990

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy,`UWN_MCS_COICore::OnRegister'::__l11::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14accb9c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14accb9f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall UWN_MCS_COICore::_scalar_deleting_destructor_(UWN_MCS_COICore *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MeshUpdateParams).Callback);
  pvVar1 = *(void **)&(this->MeshUpdateParams).Callback.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MeshUpdateParams).Callback);
  TQueue<FWN_MCS_MeshUpdateParams,1>::~TQueue<FWN_MCS_MeshUpdateParams,1>
            (&this->PendingMeshUpdateParams);
  pvVar1 = *(void **)&(this->COIObjectPtr).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MeshUpdateCompletionCallbacks).field_0x8,
             *(int *)&(this->MeshUpdateCompletionCallbacks).field_0x10);
  pvVar1 = *(void **)&(this->MeshUpdateCompletionCallbacks).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MeshUpdateCompletionCallbacks);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x310);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeWN_MCS_COICore @ 14accc580

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_MCS_COICore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_MCS_init @ 14accc590

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_MCS_init(void)

{
  return;
}

// Z_Construct_UClass_UWN_MCS_COICore_NoRegister @ 14acce740

UClass * __cdecl Z_Construct_UClass_UWN_MCS_COICore_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_MCS_COICore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_MCS",L"WN_MCS_COICore",
               &Z_Registration_Info_UClass_UWN_MCS_COICore.InnerSingleton,
               UWN_MCS_COICore::StaticRegisterNativesUWN_MCS_COICore,0x310,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_MCS_COICore>,InternalVTableHelperCtorCaller<UWN_MCS_COICore>,
               local_res8,USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_MCS_COICore.InnerSingleton;
}

// Z_Construct_UEnum_WN_MCS_EWN_MCS_MeshUpdatePolicy @ 14acce800

UEnum * __cdecl Z_Construct_UEnum_WN_MCS_EWN_MCS_MeshUpdatePolicy(void)

{
  if (Z_Registration_Info_UEnum_EWN_MCS_MeshUpdatePolicy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWN_MCS_MeshUpdatePolicy.InnerSingleton,
               &Z_Construct_UEnum_WN_MCS_EWN_MCS_MeshUpdatePolicy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWN_MCS_MeshUpdatePolicy.InnerSingleton;
}

// IMPLEMENT_MODULE_WN_MCS @ 14acce960

void __cdecl IMPLEMENT_MODULE_WN_MCS(void)

{
  return;
}

// BakedResourcePrefix'' @ 150422a30

void __cdecl `dynamic_atexit_destructor_for_'FBakingConfiguration::BakedResourcePrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data;
  if (FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// DEFAULT_PARAMETER_VALUE_NAME'' @ 150422a50

void __cdecl
`dynamic_atexit_destructor_for_'FCustomizableObjectBoolParameterValue::
DEFAULT_PARAMETER_VALUE_NAME__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.
               AllocatorInstance.Data;
  if (FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.AllocatorInstance.
      Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'MCS'' @ 150422a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__MCS__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&MCS);
  return;
}

