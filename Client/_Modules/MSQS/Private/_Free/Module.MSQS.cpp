// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSQS
// Functions: 33

// `dynamic_initializer_for_'ModuleRegistrantMaterialShaderQualitySettings'' @ 140f96380

void __cdecl _dynamic_initializer_for__ModuleRegistrantMaterialShaderQualitySettings__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MaterialShaderQualitySettings";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MaterialShaderQualitySettings",0x1d);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h__Script_MaterialShaderQualitySettings_73230295'' @ 140f963d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h__Script_MaterialShaderQualitySettings_73230295__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MaterialShaderQualitySettings",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h__Script_MaterialShaderQualitySettings_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h__Script_MaterialShaderQualitySettings_3621478886'' @ 140f96410

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h__Script_MaterialShaderQualitySettings_3621478886__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MaterialShaderQualitySettings",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h__Script_MaterialShaderQualitySettings_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h__Script_MaterialShaderQualitySettings_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h__Script_MaterialShaderQualitySettings_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MaterialShaderQualitySettings'' @ 140f96460

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MaterialShaderQualitySettings__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xc53c8da7;
  local_res8[0].DeclarationsHash = 0xd95de58d;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MaterialShaderQualitySettings,
             L"/Script/MaterialShaderQualitySettings",
             &Z_Registration_Info_UPackage__Script_MaterialShaderQualitySettings,local_res8);
  return;
}

// Z_Construct_UPackage__Script_MaterialShaderQualitySettings @ 1446f05c0

UPackage * __cdecl Z_Construct_UPackage__Script_MaterialShaderQualitySettings(void)

{
  if (Z_Registration_Info_UPackage__Script_MaterialShaderQualitySettings.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MaterialShaderQualitySettings.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MaterialShaderQualitySettings.OuterSingleton;
}

// Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister @ 1446f0600

UClass * __cdecl Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UShaderPlatformQualitySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MaterialShaderQualitySettings",L"ShaderPlatformQualitySettings",
               &Z_Registration_Info_UClass_UShaderPlatformQualitySettings.InnerSingleton,
               UShaderPlatformQualitySettings::StaticRegisterNativesUShaderPlatformQualitySettings,
               0x58,8,CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UShaderPlatformQualitySettings>,
               InternalVTableHelperCtorCaller<UShaderPlatformQualitySettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UShaderPlatformQualitySettings.InnerSingleton;
}

// Z_Construct_UClass_UShaderPlatformQualitySettings @ 1446f07a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UShaderPlatformQualitySettings(void)

{
  if (Z_Registration_Info_UClass_UShaderPlatformQualitySettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UShaderPlatformQualitySettings.OuterSingleton,
               &Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UShaderPlatformQualitySettings.OuterSingleton;
}

// Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality @ 1446f07e0

UEnum * __cdecl Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality(void)

{
  if (Z_Registration_Info_UEnum_EMobileShadowQuality.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMobileShadowQuality.InnerSingleton,
               &Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMobileShadowQuality.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMaterialQualityOverrides @ 1446f0820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMaterialQualityOverrides(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMaterialQualityOverrides.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMaterialQualityOverrides.InnerSingleton,
               &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMaterialQualityOverrides.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMaterialQualityOverrides.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EMobileShadowQuality_StaticEnum @ 1446f08a0

UEnum * __cdecl EMobileShadowQuality_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMobileShadowQuality.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
    Z_Registration_Info_UEnum_EMobileShadowQuality.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality,
                       (UObject *)pUVar1,L"EMobileShadowQuality");
  }
  return Z_Registration_Info_UEnum_EMobileShadowQuality.OuterSingleton;
}

// NewProp_bDiscardQualityDuringCook_SetBit @ 1446f08e0

void __cdecl
Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::
NewProp_bDiscardQualityDuringCook_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bEnableOverride_SetBit @ 1446f08f0

void __cdecl
Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bEnableOverride_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bForceFullyRough_SetBit @ 1446f0900

void __cdecl
Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceFullyRough_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bForceNonMetal_SetBit @ 1446f0910

void __cdecl
Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceNonMetal_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_bForceDisableLMDirectionality_SetBit @ 1446f0920

void __cdecl
Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::
NewProp_bForceDisableLMDirectionality_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bForceDisablePreintegratedGF_SetBit @ 1446f0930

void __cdecl
Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::
NewProp_bForceDisablePreintegratedGF_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bDisableMaterialNormalCalculation_SetBit @ 1446f0940

void __cdecl
Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::
NewProp_bDisableMaterialNormalCalculation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// NewStructOps @ 1446f0950

void * __cdecl Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMaterialQualityOverrides,&UE::CoreUObject::Private::Construct<FMaterialQualityOverrides>,&UE::CoreUObject::Private::ConstructForTests<FMaterialQualityOverrides>,&UE::CoreUObject::Private::Destruct<FMaterialQualityOverrides>,&UE::CoreUObject::Private::Copy<FMaterialQualityOverrides>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMaterialShaderQualitySettings @ 1446f0a40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialShaderQualitySettings(void)

{
  if (Z_Registration_Info_UClass_UMaterialShaderQualitySettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialShaderQualitySettings.OuterSingleton,
               &Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialShaderQualitySettings.OuterSingleton;
}

// InternalConstructor<UMaterialShaderQualitySettings> @ 1446f0cc0

void __cdecl InternalConstructor<UMaterialShaderQualitySettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMaterialShaderQualitySettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UShaderPlatformQualitySettings> @ 1446f0d20

void __cdecl InternalConstructor<UShaderPlatformQualitySettings>(FObjectInitializer *param_1)

{
  UObject *this;
  code *pcVar1;
  bool bVar2;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UShaderPlatformQualitySettings__6B_;
    *(undefined4 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0x2000000;
    *(undefined8 *)&this[1].field_0xc = 0x2000000;
    *(undefined8 *)&this[1].field_0x14 = 0x2000000;
    *(undefined4 *)&this[1].field_0x1c = 0x2000000;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MaterialShaderQualitySettings\\Private\\MaterialShaderQualitySettings.cpp"
                         ,0x79,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this[1].field_0x9 = 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMaterialShaderQualitySettings> @ 1446f0dc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialShaderQualitySettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialShaderQualitySettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMaterialShaderQualitySettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UShaderPlatformQualitySettings> @ 1446f0ea0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UShaderPlatformQualitySettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UShaderPlatformQualitySettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UShaderPlatformQualitySettings__6B_;
    *(undefined4 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0x2000000;
    *(undefined8 *)&pUVar1[1].field_0xc = 0x2000000;
    *(undefined8 *)&pUVar1[1].field_0x14 = 0x2000000;
    *(undefined4 *)&pUVar1[1].field_0x1c = 0x2000000;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UMaterialShaderQualitySettings> @ 1446f0f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMaterialShaderQualitySettings * __cdecl
NewObject<UMaterialShaderQualitySettings>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMaterialShaderQualitySettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UMaterialShaderQualitySettings::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UMaterialShaderQualitySettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UShaderPlatformQualitySettings> @ 1446f1080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UShaderPlatformQualitySettings * __cdecl
NewObject<UShaderPlatformQualitySettings>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UShaderPlatformQualitySettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UShaderPlatformQualitySettings::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UShaderPlatformQualitySettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EMobileShadowQuality> @ 1446f1180

UEnum * __cdecl StaticEnum<enum_EMobileShadowQuality>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMobileShadowQuality.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
    Z_Registration_Info_UEnum_EMobileShadowQuality.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality,
                       (UObject *)pUVar1,L"EMobileShadowQuality");
  }
  return Z_Registration_Info_UEnum_EMobileShadowQuality.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1446f14a0

void * __thiscall
UMaterialShaderQualitySettings::_scalar_deleting_destructor_
          (UMaterialShaderQualitySettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMaterialShaderQualitySettings__6B_;
  *(undefined4 *)&(this->ForwardSettingMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ForwardSettingMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UShaderPlatformQualitySettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UShaderPlatformQualitySettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UShaderPlatformQualitySettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ForwardSettingMap);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446f1530

void * __thiscall
UShaderPlatformQualitySettings::_scalar_deleting_destructor_
          (UShaderPlatformQualitySettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UShaderPlatformQualitySettings__6B_;
  pFVar1 = (this->ConfigPlatformName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeMaterialShaderQualitySettings @ 1446f1730

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialShaderQualitySettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialShaderQualitySettings_init @ 1446f1740

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialShaderQualitySettings_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeShaderPlatformQualitySettings @ 1446f1750

void __cdecl EmptyLinkFunctionForGeneratedCodeShaderPlatformQualitySettings(void)

{
  return;
}

// Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister @ 1446f20f0

UClass * __cdecl Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialShaderQualitySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MaterialShaderQualitySettings",L"MaterialShaderQualitySettings",
               &Z_Registration_Info_UClass_UMaterialShaderQualitySettings.InnerSingleton,
               UMaterialShaderQualitySettings::StaticRegisterNativesUMaterialShaderQualitySettings,
               0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialShaderQualitySettings>,
               InternalVTableHelperCtorCaller<UMaterialShaderQualitySettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialShaderQualitySettings.InnerSingleton;
}

// IMPLEMENT_MODULE_MaterialShaderQualitySettings @ 1446f21a0

void __cdecl IMPLEMENT_MODULE_MaterialShaderQualitySettings(void)

{
  return;
}

