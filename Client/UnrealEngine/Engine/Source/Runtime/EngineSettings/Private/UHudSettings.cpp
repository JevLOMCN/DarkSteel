// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineSettings
// Functions: 6

// StaticClass @ 143129090

UClass * __cdecl UHudSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHudSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineSettings",L"HudSettings",
               &Z_Registration_Info_UClass_UHudSettings.InnerSingleton,
               StaticRegisterNativesUHudSettings,0x40,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Game",InternalConstructor<UHudSettings>,
               InternalVTableHelperCtorCaller<UHudSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHudSettings.InnerSingleton;
}

// UHudSettings @ 14312b0f0

UHudSettings * __thiscall UHudSettings::UHudSettings(UHudSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UHudSettings__6B_;
  (this->DebugDisplay).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDisplay).ArrayNum = 0;
  (this->DebugDisplay).ArrayMax = 0;
  return this;
}

// UHudSettings @ 14312b130

UHudSettings * __thiscall UHudSettings::UHudSettings(UHudSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UHudSettings__6B_;
  (this->DebugDisplay).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDisplay).ArrayNum = 0;
  (this->DebugDisplay).ArrayMax = 0;
  return this;
}

// ~UHudSettings @ 14312b400

void __thiscall UHudSettings::~UHudSettings(UHudSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UHudSettings__6B_;
  pFVar1 = (this->DebugDisplay).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14312c980

UClass * __cdecl UHudSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHudSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineSettings",L"HudSettings",
               &Z_Registration_Info_UClass_UHudSettings.InnerSingleton,
               StaticRegisterNativesUHudSettings,0x40,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Game",InternalConstructor<UHudSettings>,
               InternalVTableHelperCtorCaller<UHudSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHudSettings.InnerSingleton;
}

// StaticRegisterNativesUHudSettings @ 14312ce70

void __cdecl UHudSettings::StaticRegisterNativesUHudSettings(void)

{
  return;
}

