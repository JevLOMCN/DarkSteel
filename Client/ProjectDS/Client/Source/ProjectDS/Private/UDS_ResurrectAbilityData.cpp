// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b582430

UClass * __cdecl UDS_ResurrectAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ResurrectAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ResurrectAbilityData",
               &Z_Registration_Info_UClass_UDS_ResurrectAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_ResurrectAbilityData,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ResurrectAbilityData>,
               InternalVTableHelperCtorCaller<UDS_ResurrectAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ResurrectAbilityData.InnerSingleton;
}

// UDS_ResurrectAbilityData @ 14b586ee0

UDS_ResurrectAbilityData * __thiscall
UDS_ResurrectAbilityData::UDS_ResurrectAbilityData
          (UDS_ResurrectAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->ResurrectType = Base;
  this->_padding_ = (longlong)&___7UDS_ResurrectAbilityData__6B_;
  return this;
}

// UDS_ResurrectAbilityData @ 14b586f10

UDS_ResurrectAbilityData * __thiscall
UDS_ResurrectAbilityData::UDS_ResurrectAbilityData
          (UDS_ResurrectAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->ResurrectType = Base;
  this->_padding_ = (longlong)&___7UDS_ResurrectAbilityData__6B_;
  return this;
}

// ~UDS_ResurrectAbilityData @ 14b587900

void __thiscall UDS_ResurrectAbilityData::~UDS_ResurrectAbilityData(UDS_ResurrectAbilityData *this)

{
  this->_padding_ = (longlong)&___7UDS_ResurrectAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b588e30

UClass * __cdecl UDS_ResurrectAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ResurrectAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ResurrectAbilityData",
               &Z_Registration_Info_UClass_UDS_ResurrectAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_ResurrectAbilityData,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ResurrectAbilityData>,
               InternalVTableHelperCtorCaller<UDS_ResurrectAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ResurrectAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_ResurrectAbilityData @ 14b589b70

void __cdecl UDS_ResurrectAbilityData::StaticRegisterNativesUDS_ResurrectAbilityData(void)

{
  return;
}

// ResetData @ 14ba69070

void __thiscall UDS_ResurrectAbilityData::ResetData(UDS_ResurrectAbilityData *this)

{
  this->ResurrectType = Base;
  return;
}

