// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TextureUtilitiesCommon
// Functions: 28

// `dynamic_initializer_for_'ModuleRegistrantTextureUtilitiesCommon'' @ 1413ae7e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantTextureUtilitiesCommon__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "TextureUtilitiesCommon";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"TextureUtilitiesCommon",0x16);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h__Script_TextureUtilitiesCommon_586703000'' @ 1413ae830

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h__Script_TextureUtilitiesCommon_586703000__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TextureUtilitiesCommon",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h__Script_TextureUtilitiesCommon_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h__Script_TextureUtilitiesCommon_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportUserSettings_h__Script_TextureUtilitiesCommon_67069062'' @ 1413ae880

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportUserSettings_h__Script_TextureUtilitiesCommon_67069062__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TextureUtilitiesCommon",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportUserSettings_h__Script_TextureUtilitiesCommon_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_TextureUtilitiesCommon'' @ 1413ae8c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_TextureUtilitiesCommon__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xff9f884a;
  local_res8[0].DeclarationsHash = 0xad709df3;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_TextureUtilitiesCommon,L"/Script/TextureUtilitiesCommon",
             &Z_Registration_Info_UPackage__Script_TextureUtilitiesCommon,local_res8);
  return;
}

// Z_Construct_UPackage__Script_TextureUtilitiesCommon @ 14c93c4c0

UPackage * __cdecl Z_Construct_UPackage__Script_TextureUtilitiesCommon(void)

{
  if (Z_Registration_Info_UPackage__Script_TextureUtilitiesCommon.OuterSingleton == (UPackage *)0x0)
  {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_TextureUtilitiesCommon.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_TextureUtilitiesCommon.OuterSingleton;
}

// Z_Construct_UClass_UTextureImportSettings @ 14c93c5c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextureImportSettings(void)

{
  if (Z_Registration_Info_UClass_UTextureImportSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextureImportSettings.OuterSingleton,
               &Z_Construct_UClass_UTextureImportSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextureImportSettings.OuterSingleton;
}

// Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat @ 14c93c600

UEnum * __cdecl Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat(void)

{
  if (Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.InnerSingleton,
               &Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.InnerSingleton;
}

// Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill @ 14c93c640

UEnum * __cdecl Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill(void)

{
  if (Z_Registration_Info_UEnum_ETextureImportPNGInfill.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextureImportPNGInfill.InnerSingleton,
               &Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_ETextureImportPNGInfill.InnerSingleton;
}

// ETextureImportFloatingPointFormat_StaticEnum @ 14c93c680

UEnum * __cdecl ETextureImportFloatingPointFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TextureUtilitiesCommon();
    Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat,
                       (UObject *)pUVar1,L"ETextureImportFloatingPointFormat");
  }
  return Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.OuterSingleton;
}

// ETextureImportPNGInfill_StaticEnum @ 14c93c6c0

UEnum * __cdecl ETextureImportPNGInfill_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureImportPNGInfill.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TextureUtilitiesCommon();
    Z_Registration_Info_UEnum_ETextureImportPNGInfill.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill,
                       (UObject *)pUVar1,L"ETextureImportPNGInfill");
  }
  return Z_Registration_Info_UEnum_ETextureImportPNGInfill.OuterSingleton;
}

// NewProp_bEnableNormalizeNormals_SetBit @ 14c93c700

void __cdecl
Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableNormalizeNormals_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bEnableFastMipFilter_SetBit @ 14c93c710

void __cdecl
Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableFastMipFilter_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// NewProp_bDoAutomaticTextureSettingsForNonPow2Textures_SetBit @ 14c93c720

void __cdecl
Z_Construct_UClass_UTextureImportSettings_Statics::
NewProp_bDoAutomaticTextureSettingsForNonPow2Textures_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return;
}

// Z_Construct_UClass_UTextureImportUserSettings @ 14c93c7f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextureImportUserSettings(void)

{
  if (Z_Registration_Info_UClass_UTextureImportUserSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextureImportUserSettings.OuterSingleton,
               &Z_Construct_UClass_UTextureImportUserSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextureImportUserSettings.OuterSingleton;
}

// InternalConstructor<UTextureImportSettings> @ 14c93c940

void __cdecl InternalConstructor<UTextureImportSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  FName local_res8 [4];
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this[1]._padding_ = 0x1000;
    this->_padding_ = (longlong)&___7UTextureImportSettings__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    FName::FName(local_res8,L"Importing");
    this->SectionName = local_res8[0];
  }
  return;
}

// InternalConstructor<UTextureImportUserSettings> @ 14c93c9a0

void __cdecl InternalConstructor<UTextureImportUserSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  FName local_res8 [4];
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UTextureImportUserSettings__6B_;
    FName::FName(local_res8,L"Importing");
    this->SectionName = local_res8[0];
  }
  return;
}

// InternalVTableHelperCtorCaller<UTextureImportSettings> @ 14c93c9f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextureImportSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextureImportSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this[1]._padding_ = 0x1000;
    this->_padding_ = (longlong)&___7UTextureImportSettings__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextureImportUserSettings> @ 14c93cab0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextureImportUserSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextureImportUserSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UTextureImportUserSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_ETextureImportFloatingPointFormat> @ 14c93cb60

UEnum * __cdecl StaticEnum<enum_ETextureImportFloatingPointFormat>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TextureUtilitiesCommon();
    Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat,
                       (UObject *)pUVar1,L"ETextureImportFloatingPointFormat");
  }
  return Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.OuterSingleton;
}

// StaticEnum<enum_ETextureImportPNGInfill> @ 14c93cba0

UEnum * __cdecl StaticEnum<enum_ETextureImportPNGInfill>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureImportPNGInfill.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TextureUtilitiesCommon();
    Z_Registration_Info_UEnum_ETextureImportPNGInfill.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill,
                       (UObject *)pUVar1,L"ETextureImportPNGInfill");
  }
  return Z_Registration_Info_UEnum_ETextureImportPNGInfill.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14c93d060

/* WARNING: Enum "ETextureImportFloatingPointFormat": Some values do not have unique names */

void * __thiscall
UTextureImportSettings::_scalar_deleting_destructor_(UTextureImportSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UTextureImportSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c93d0c0

void * __thiscall
UTextureImportUserSettings::_scalar_deleting_destructor_
          (UTextureImportUserSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UTextureImportUserSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeTextureImportSettings @ 14c93d140

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureImportSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextureImportUserSettings @ 14c93d150

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureImportUserSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextureUtilitiesCommon_init @ 14c93d160

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureUtilitiesCommon_init(void)

{
  return;
}

// Z_Construct_UClass_UTextureImportSettings_NoRegister @ 14c93fba0

UClass * __cdecl Z_Construct_UClass_UTextureImportSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureImportSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TextureUtilitiesCommon",L"TextureImportSettings",
               &Z_Registration_Info_UClass_UTextureImportSettings.InnerSingleton,
               UTextureImportSettings::StaticRegisterNativesUTextureImportSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<UTextureImportSettings>,
               InternalVTableHelperCtorCaller<UTextureImportSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureImportSettings.InnerSingleton;
}

// Z_Construct_UClass_UTextureImportUserSettings_NoRegister @ 14c93fc60

UClass * __cdecl Z_Construct_UClass_UTextureImportUserSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureImportUserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TextureUtilitiesCommon",L"TextureImportUserSettings",
               &Z_Registration_Info_UClass_UTextureImportUserSettings.InnerSingleton,
               UTextureImportUserSettings::StaticRegisterNativesUTextureImportUserSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UTextureImportUserSettings>,
               InternalVTableHelperCtorCaller<UTextureImportUserSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureImportUserSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_TextureUtilitiesCommon @ 14c93fd20

void __cdecl IMPLEMENT_MODULE_TextureUtilitiesCommon(void)

{
  return;
}

