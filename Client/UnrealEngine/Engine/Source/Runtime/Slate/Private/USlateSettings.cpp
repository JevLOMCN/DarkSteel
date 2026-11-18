// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// StaticClass @ 1426e6060

UClass * __cdecl USlateSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"SlateSettings",
               &Z_Registration_Info_UClass_USlateSettings.InnerSingleton,
               StaticRegisterNativesUSlateSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<USlateSettings>,InternalVTableHelperCtorCaller<USlateSettings>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateSettings.InnerSingleton;
}

// USlateSettings @ 1426fedd0

USlateSettings * __thiscall
USlateSettings::USlateSettings(USlateSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USlateSettings__6B_;
  return this;
}

// USlateSettings @ 1426fee00

USlateSettings * __thiscall
USlateSettings::USlateSettings(USlateSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bExplicitCanvasChildZOrder = false;
  this->_padding_ = (longlong)&___7USlateSettings__6B_;
  return this;
}

// ~USlateSettings @ 142702a60

void __thiscall USlateSettings::~USlateSettings(USlateSettings *this)

{
  this->_padding_ = (longlong)&___7USlateSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 142743460

UClass * __cdecl USlateSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"SlateSettings",
               &Z_Registration_Info_UClass_USlateSettings.InnerSingleton,
               StaticRegisterNativesUSlateSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<USlateSettings>,InternalVTableHelperCtorCaller<USlateSettings>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateSettings.InnerSingleton;
}

// StaticRegisterNativesUSlateSettings @ 14278c040

void __cdecl USlateSettings::StaticRegisterNativesUSlateSettings(void)

{
  return;
}

