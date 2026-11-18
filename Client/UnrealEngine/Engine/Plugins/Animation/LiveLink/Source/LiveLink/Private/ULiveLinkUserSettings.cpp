// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 6

// StaticClass @ 14cff5e70

UClass * __cdecl ULiveLinkUserSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkUserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkUserSettings",
               &Z_Registration_Info_UClass_ULiveLinkUserSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkUserSettings,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<ULiveLinkUserSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkUserSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkUserSettings.InnerSingleton;
}

// ULiveLinkUserSettings @ 14d014890

ULiveLinkUserSettings * __thiscall
ULiveLinkUserSettings::ULiveLinkUserSettings(ULiveLinkUserSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkUserSettings__6B_;
  (this->PresetSaveDir).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PresetSaveDir).Path.Data.ArrayNum = 0;
  (this->PresetSaveDir).Path.Data.ArrayMax = 0;
  return this;
}

// ULiveLinkUserSettings @ 14d0148d0

ULiveLinkUserSettings * __thiscall
ULiveLinkUserSettings::ULiveLinkUserSettings
          (ULiveLinkUserSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkUserSettings__6B_;
  (this->PresetSaveDir).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PresetSaveDir).Path.Data.ArrayNum = 0;
  (this->PresetSaveDir).Path.Data.ArrayMax = 0;
  return this;
}

// ~ULiveLinkUserSettings @ 14d017580

void __thiscall ULiveLinkUserSettings::~ULiveLinkUserSettings(ULiveLinkUserSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkUserSettings__6B_;
  pFVar1 = (this->PresetSaveDir).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d052f40

UClass * __cdecl ULiveLinkUserSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkUserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkUserSettings",
               &Z_Registration_Info_UClass_ULiveLinkUserSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkUserSettings,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<ULiveLinkUserSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkUserSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkUserSettings.InnerSingleton;
}

// StaticRegisterNativesULiveLinkUserSettings @ 14d0808c0

void __cdecl ULiveLinkUserSettings::StaticRegisterNativesULiveLinkUserSettings(void)

{
  return;
}

