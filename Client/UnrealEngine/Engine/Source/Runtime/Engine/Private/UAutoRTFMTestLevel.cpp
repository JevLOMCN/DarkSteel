// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147257530

UClass * __cdecl UAutoRTFMTestLevel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRTFMTestLevel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = ULevel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestLevel",
               &Z_Registration_Info_UClass_UAutoRTFMTestLevel.InnerSingleton,
               StaticRegisterNativesUAutoRTFMTestLevel,0x3f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAutoRTFMTestLevel>,
               InternalVTableHelperCtorCaller<UAutoRTFMTestLevel>,local_res8,ULevel::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRTFMTestLevel.InnerSingleton;
}

// UAutoRTFMTestLevel @ 14725d170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAutoRTFMTestLevel * __thiscall
UAutoRTFMTestLevel::UAutoRTFMTestLevel(UAutoRTFMTestLevel *this,FVTableHelper *param_1)

{
  ULevel::ULevel((ULevel *)this,param_1);
  this->Value = 0x2a;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IEditorPathObjectInterface__;
  return this;
}

// UAutoRTFMTestLevel @ 14725d1c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAutoRTFMTestLevel * __thiscall
UAutoRTFMTestLevel::UAutoRTFMTestLevel(UAutoRTFMTestLevel *this,FObjectInitializer *param_1)

{
  ULevel::ULevel((ULevel *)this,param_1);
  this->Value = 0x2a;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IEditorPathObjectInterface__;
  return this;
}

// ~UAutoRTFMTestLevel @ 14725ddf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAutoRTFMTestLevel::~UAutoRTFMTestLevel(UAutoRTFMTestLevel *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IEditorPathObjectInterface__;
  ULevel::~ULevel((ULevel *)this);
  return;
}

// GetPrivateStaticClass @ 1472606d0

UClass * __cdecl UAutoRTFMTestLevel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRTFMTestLevel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = ULevel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestLevel",
               &Z_Registration_Info_UClass_UAutoRTFMTestLevel.InnerSingleton,
               StaticRegisterNativesUAutoRTFMTestLevel,0x3f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAutoRTFMTestLevel>,
               InternalVTableHelperCtorCaller<UAutoRTFMTestLevel>,local_res8,ULevel::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRTFMTestLevel.InnerSingleton;
}

// StaticRegisterNativesUAutoRTFMTestLevel @ 147260f30

void __cdecl UAutoRTFMTestLevel::StaticRegisterNativesUAutoRTFMTestLevel(void)

{
  return;
}

