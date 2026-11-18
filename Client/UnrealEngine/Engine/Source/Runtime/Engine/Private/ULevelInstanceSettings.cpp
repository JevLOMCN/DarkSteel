// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147e43900

UClass * __cdecl ULevelInstanceSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceSettings",
               &Z_Registration_Info_UClass_ULevelInstanceSettings.InnerSingleton,
               StaticRegisterNativesULevelInstanceSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstanceSettings>,
               InternalVTableHelperCtorCaller<ULevelInstanceSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceSettings.InnerSingleton;
}

// ULevelInstanceSettings @ 147e55a80

ULevelInstanceSettings * __thiscall
ULevelInstanceSettings::ULevelInstanceSettings(ULevelInstanceSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULevelInstanceSettings__6B_;
  (this->PropertyOverridePolicyClass).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyOverridePolicyClass).Data.ArrayNum = 0;
  (this->PropertyOverridePolicyClass).Data.ArrayMax = 0;
  return this;
}

// ULevelInstanceSettings @ 147e55ac0

ULevelInstanceSettings * __thiscall
ULevelInstanceSettings::ULevelInstanceSettings(ULevelInstanceSettings *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7ULevelInstanceSettings__6B_;
  (this->PropertyOverridePolicyClass).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyOverridePolicyClass).Data.ArrayNum = 0;
  (this->PropertyOverridePolicyClass).Data.ArrayMax = 0;
  return this;
}

// ~ULevelInstanceSettings @ 147e57b40

void __thiscall ULevelInstanceSettings::~ULevelInstanceSettings(ULevelInstanceSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULevelInstanceSettings__6B_;
  pFVar1 = (this->PropertyOverridePolicyClass).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147e6a040

UClass * __cdecl ULevelInstanceSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceSettings",
               &Z_Registration_Info_UClass_ULevelInstanceSettings.InnerSingleton,
               StaticRegisterNativesULevelInstanceSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstanceSettings>,
               InternalVTableHelperCtorCaller<ULevelInstanceSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceSettings.InnerSingleton;
}

// StaticRegisterNativesULevelInstanceSettings @ 147e82340

void __cdecl ULevelInstanceSettings::StaticRegisterNativesULevelInstanceSettings(void)

{
  return;
}

