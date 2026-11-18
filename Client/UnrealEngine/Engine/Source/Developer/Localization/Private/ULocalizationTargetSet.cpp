// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 6

// StaticClass @ 146b35e20

UClass * __cdecl ULocalizationTargetSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalizationTargetSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Localization",L"LocalizationTargetSet",
               &Z_Registration_Info_UClass_ULocalizationTargetSet.InnerSingleton,
               StaticRegisterNativesULocalizationTargetSet,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULocalizationTargetSet>,
               InternalVTableHelperCtorCaller<ULocalizationTargetSet>,local_res8,
               UObject::StaticClass,ULocalizationSettings::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalizationTargetSet.InnerSingleton;
}

// ULocalizationTargetSet @ 146b43bc0

ULocalizationTargetSet * __thiscall
ULocalizationTargetSet::ULocalizationTargetSet(ULocalizationTargetSet *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULocalizationTargetSet__6B_;
  (this->TargetObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetObjects).ArrayNum = 0;
  (this->TargetObjects).ArrayMax = 0;
  return this;
}

// ULocalizationTargetSet @ 146b43c00

ULocalizationTargetSet * __thiscall
ULocalizationTargetSet::ULocalizationTargetSet
          (ULocalizationTargetSet *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULocalizationTargetSet__6B_;
  (this->TargetObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetObjects).ArrayNum = 0;
  (this->TargetObjects).ArrayMax = 0;
  return this;
}

// ~ULocalizationTargetSet @ 146b44d60

void __thiscall ULocalizationTargetSet::~ULocalizationTargetSet(ULocalizationTargetSet *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULocalizationTargetSet__6B_;
  pFVar1 = (this->TargetObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146b76630

UClass * __cdecl ULocalizationTargetSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalizationTargetSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Localization",L"LocalizationTargetSet",
               &Z_Registration_Info_UClass_ULocalizationTargetSet.InnerSingleton,
               StaticRegisterNativesULocalizationTargetSet,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULocalizationTargetSet>,
               InternalVTableHelperCtorCaller<ULocalizationTargetSet>,local_res8,
               UObject::StaticClass,ULocalizationSettings::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalizationTargetSet.InnerSingleton;
}

// StaticRegisterNativesULocalizationTargetSet @ 146b89500

void __cdecl ULocalizationTargetSet::StaticRegisterNativesULocalizationTargetSet(void)

{
  return;
}

