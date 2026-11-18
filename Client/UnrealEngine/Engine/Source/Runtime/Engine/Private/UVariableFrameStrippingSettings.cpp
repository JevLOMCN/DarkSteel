// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14758abd0

UClass * __cdecl UVariableFrameStrippingSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVariableFrameStrippingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VariableFrameStrippingSettings",
               &Z_Registration_Info_UClass_UVariableFrameStrippingSettings.InnerSingleton,
               StaticRegisterNativesUVariableFrameStrippingSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UVariableFrameStrippingSettings>,
               InternalVTableHelperCtorCaller<UVariableFrameStrippingSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVariableFrameStrippingSettings.InnerSingleton;
}

// UVariableFrameStrippingSettings @ 1475a8490

UVariableFrameStrippingSettings * __thiscall
UVariableFrameStrippingSettings::UVariableFrameStrippingSettings
          (UVariableFrameStrippingSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UVariableFrameStrippingSettings__6B_;
  (this->UseVariableFrameStripping).Default = false;
  (this->FrameStrippingRate).Default = 0;
  return this;
}

// UVariableFrameStrippingSettings @ 1475a84d0

UVariableFrameStrippingSettings * __thiscall
UVariableFrameStrippingSettings::UVariableFrameStrippingSettings
          (UVariableFrameStrippingSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UVariableFrameStrippingSettings__6B_;
  (this->UseVariableFrameStripping).Default = false;
  (this->FrameStrippingRate).Default = 3;
  return this;
}

// ~UVariableFrameStrippingSettings @ 1475aaf00

void __thiscall
UVariableFrameStrippingSettings::~UVariableFrameStrippingSettings
          (UVariableFrameStrippingSettings *this)

{
  this->_padding_ = (longlong)&___7UVariableFrameStrippingSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1475dc180

UClass * __cdecl UVariableFrameStrippingSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVariableFrameStrippingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VariableFrameStrippingSettings",
               &Z_Registration_Info_UClass_UVariableFrameStrippingSettings.InnerSingleton,
               StaticRegisterNativesUVariableFrameStrippingSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UVariableFrameStrippingSettings>,
               InternalVTableHelperCtorCaller<UVariableFrameStrippingSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVariableFrameStrippingSettings.InnerSingleton;
}

// StaticRegisterNativesUVariableFrameStrippingSettings @ 1475feeb0

void __cdecl
UVariableFrameStrippingSettings::StaticRegisterNativesUVariableFrameStrippingSettings(void)

{
  return;
}

