// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusSettings
// Functions: 28

// `dynamic_initializer_for_'CVarDeformerGraphEnable'' @ 1414106c0

void __cdecl Optimus::_dynamic_initializer_for__CVarDeformerGraphEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDeformerGraphEnable,L"r.DeformerGraph.Enable",local_res8,
             L"Set to 0 to disable DeformerGraph support on a platform.\n",4);
  atexit(_dynamic_atexit_destructor_for__CVarDeformerGraphEnable__);
  return;
}

// `dynamic_initializer_for_'CVarDeformerGraphEnableAssetValidation'' @ 141410710

void __cdecl Optimus::_dynamic_initializer_for__CVarDeformerGraphEnableAssetValidation__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDeformerGraphEnableAssetValidation,DeformerGraphEnableAssetValidationCVarName,
             local_res8,
             L"Set to 0 to disable Deformer Graph validation that may generate extra warnings when Deformer Graph cannot run optimally on certain assets"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDeformerGraphEnableAssetValidation__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOptimusSettings'' @ 141410760

void __cdecl _dynamic_initializer_for__ModuleRegistrantOptimusSettings__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OptimusSettings";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OptimusSettings",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FOptimusSettingsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h__Script_OptimusSettings_4264032474'' @ 1414107b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h__Script_OptimusSettings_4264032474__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OptimusSettings",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h__Script_OptimusSettings_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h__Script_OptimusSettings_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_OptimusSettings'' @ 141410800

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_OptimusSettings__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x5116e470;
  local_res8[0].DeclarationsHash = 0x59061951;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_OptimusSettings,L"/Script/OptimusSettings",
             &Z_Registration_Info_UPackage__Script_OptimusSettings,local_res8);
  return;
}

// Z_Construct_UClass_UOptimusSettings @ 14e0ffa20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOptimusSettings(void)

{
  if (Z_Registration_Info_UClass_UOptimusSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOptimusSettings.OuterSingleton,
               &Z_Construct_UClass_UOptimusSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOptimusSettings.OuterSingleton;
}

// Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode @ 14e0ffa60

UEnum * __cdecl Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode(void)

{
  if (Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.InnerSingleton,
               &Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.InnerSingleton;
}

// Z_Construct_UPackage__Script_OptimusSettings @ 14e0ffaa0

UPackage * __cdecl Z_Construct_UPackage__Script_OptimusSettings(void)

{
  if (Z_Registration_Info_UPackage__Script_OptimusSettings.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_OptimusSettings.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_OptimusSettings.OuterSingleton;
}

// EOptimusDefaultDeformerMode_StaticEnum @ 14e0ffae0

UEnum * __cdecl EOptimusDefaultDeformerMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusSettings();
    Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode,
                       (UObject *)pUVar1,L"EOptimusDefaultDeformerMode");
  }
  return Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e0ffb20

void * __thiscall
IMeshDeformerProvider::_scalar_deleting_destructor_(IMeshDeformerProvider *this,uint param_1)

{
  *this = (IMeshDeformerProvider)&___7IMeshDeformerProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0ffd80

void * __thiscall
FOptimusSettingsModule::_scalar_deleting_destructor_(FOptimusSettingsModule *this,uint param_1)

{
  UObject *pUVar1;
  
  pUVar1 = (this->DefaultRecomputeTangentDeformer).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->DefaultRecomputeTangentDeformer).Object = (UObject *)0x0;
  }
  pUVar1 = (this->DefaultDeformer).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->DefaultDeformer).Object = (UObject *)0x0;
  }
  this->_padding_ = (longlong)&___7IMeshDeformerProvider__6B_;
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14e0ffdf8

/* [thunk]:public: virtual void * __ptr64 __cdecl FOptimusSettingsModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FOptimusSettingsModule::_vector_deleting_destructor__adjustor_8__
          (FOptimusSettingsModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FOptimusSettingsModule *)&this[-1].DefaultRecomputeTangentDeformer,param_1);
  return pvVar1;
}

// InternalConstructor<UOptimusSettings> @ 14e1000c0

void __cdecl InternalConstructor<UOptimusSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UOptimusSettings__6B_;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex = 0;
    this[1].CategoryName.Number = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].SectionName.ComparisonIndex = 0;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[2]._padding_,0);
  }
  return;
}

// InternalVTableHelperCtorCaller<UOptimusSettings> @ 14e100140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UOptimusSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOptimusSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UOptimusSettings__6B_;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex = 0;
    this[1].CategoryName.Number = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].SectionName.ComparisonIndex = 0;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[2]._padding_,0);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EOptimusDefaultDeformerMode> @ 14e100230

UEnum * __cdecl StaticEnum<enum_EOptimusDefaultDeformerMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusSettings();
    Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode,
                       (UObject *)pUVar1,L"EOptimusDefaultDeformerMode");
  }
  return Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e1003e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FOptimusSettingsModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e100410

void * __thiscall
UOptimusSettings::_scalar_deleting_destructor_(UOptimusSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UOptimusSettings__6B_;
  pvVar1 = *(void **)&(this->DefaultRecomputeTangentDeformer).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->DefaultDeformer).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeOptimusSettings @ 14e100870

void __cdecl EmptyLinkFunctionForGeneratedCodeOptimusSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOptimusSettings_init @ 14e100880

void __cdecl EmptyLinkFunctionForGeneratedCodeOptimusSettings_init(void)

{
  return;
}

// GetEnableAssetValidationCVarName @ 14e100920

FName __cdecl Optimus::GetEnableAssetValidationCVarName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,DeformerGraphEnableAssetValidationCVarName);
  return in_RCX;
}

// IsAssetValidationEnabled @ 14e100a90

bool __cdecl Optimus::IsAssetValidationEnabled(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarDeformerGraphEnableAssetValidation.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] != 0;
    }
  }
  return pTVar1->ShadowedValue[0] != 0;
}

// IsEnabled @ 14e100ae0

bool __cdecl Optimus::IsEnabled(void)

{
  if ((0 < GComputeFrameworkEnable) &&
     (FComputeFrameworkModule::ComputeSystem != (FComputeFrameworkSystem *)0x0)) {
    return true;
  }
  return false;
}

// IsSupported @ 14e100b00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl Optimus::IsSupported(EShaderPlatform param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&PerPlatformCVar.CVarName,L"r.DeformerGraph.Enable");
      PerPlatformCVar.CVar = (IConsoleVariable *)0x0;
      atexit(`Optimus::IsSupported'::__l2::_dynamic_atexit_destructor_for__PerPlatformCVar__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar2 = FShaderPlatformCachedIniValue<int>::Get(&PerPlatformCVar,param_1);
  if (iVar2 != 0) {
    bVar1 = ComputeFramework::IsSupported(param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// Z_Construct_UClass_UOptimusSettings_NoRegister @ 14e100c50

UClass * __cdecl Z_Construct_UClass_UOptimusSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusSettings",L"OptimusSettings",
               &Z_Registration_Info_UClass_UOptimusSettings.InnerSingleton,
               UOptimusSettings::StaticRegisterNativesUOptimusSettings,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"DeformerGraph",
               InternalConstructor<UOptimusSettings>,
               InternalVTableHelperCtorCaller<UOptimusSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_OptimusSettings @ 14e100d10

void __cdecl IMPLEMENT_MODULE_OptimusSettings(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarDeformerGraphEnable'' @ 150462ce0

void __cdecl Optimus::_dynamic_atexit_destructor_for__CVarDeformerGraphEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDeformerGraphEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDeformerGraphEnableAssetValidation'' @ 150462d00

void __cdecl Optimus::_dynamic_atexit_destructor_for__CVarDeformerGraphEnableAssetValidation__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDeformerGraphEnableAssetValidation);
  return;
}

// `dynamic_atexit_destructor_for_'PerPlatformCVar'' @ 150462d20

void __cdecl `Optimus::IsSupported'::__l2::_dynamic_atexit_destructor_for__PerPlatformCVar__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PerPlatformCVar.CVarName.Data.AllocatorInstance.Data;
  if (PerPlatformCVar.CVarName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PerPlatformCVar.CVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

