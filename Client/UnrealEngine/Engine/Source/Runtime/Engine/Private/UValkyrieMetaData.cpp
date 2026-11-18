// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148074260

UClass * __cdecl UValkyrieMetaData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UValkyrieMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ValkyrieMetaData",
               &Z_Registration_Info_UClass_UValkyrieMetaData.InnerSingleton,
               StaticRegisterNativesUValkyrieMetaData,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<UValkyrieMetaData>,
               InternalVTableHelperCtorCaller<UValkyrieMetaData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UValkyrieMetaData.InnerSingleton;
}

// UValkyrieMetaData @ 14808c920

UValkyrieMetaData * __thiscall
UValkyrieMetaData::UValkyrieMetaData(UValkyrieMetaData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UValkyrieMetaData__6B_;
  ::FName::FName(&this->DevelopmentStatusKey,L"Valkyrie_DevelopmentStatus");
  ::FString::FString(&this->DevelopmentStatusValue_Experimental,L"Experimental");
  ::FName::FName(&this->DeprecationStatusKey,L"Valkyrie_DeprecationStatus");
  ::FString::FString(&this->DeprecationStatusValue_Deprecated,L"Deprecated");
  return this;
}

// UValkyrieMetaData @ 14808c990

UValkyrieMetaData * __thiscall
UValkyrieMetaData::UValkyrieMetaData(UValkyrieMetaData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UValkyrieMetaData__6B_;
  ::FName::FName(&this->DevelopmentStatusKey,L"Valkyrie_DevelopmentStatus");
  ::FString::FString(&this->DevelopmentStatusValue_Experimental,L"Experimental");
  ::FName::FName(&this->DeprecationStatusKey,L"Valkyrie_DeprecationStatus");
  ::FString::FString(&this->DeprecationStatusValue_Deprecated,L"Deprecated");
  return this;
}

// ~UValkyrieMetaData @ 14808f8c0

void __thiscall UValkyrieMetaData::~UValkyrieMetaData(UValkyrieMetaData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UValkyrieMetaData__6B_;
  pFVar1 = (this->DeprecationStatusValue_Deprecated).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DevelopmentStatusValue_Experimental).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1480aa320

UClass * __cdecl UValkyrieMetaData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UValkyrieMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ValkyrieMetaData",
               &Z_Registration_Info_UClass_UValkyrieMetaData.InnerSingleton,
               StaticRegisterNativesUValkyrieMetaData,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<UValkyrieMetaData>,
               InternalVTableHelperCtorCaller<UValkyrieMetaData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UValkyrieMetaData.InnerSingleton;
}

// StaticRegisterNativesUValkyrieMetaData @ 1480d57f0

void __cdecl UValkyrieMetaData::StaticRegisterNativesUValkyrieMetaData(void)

{
  return;
}

