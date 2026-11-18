// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusSettings
// Functions: 6

// StaticClass @ 14e0ff960

UClass * __cdecl UOptimusSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusSettings",L"OptimusSettings",
               &Z_Registration_Info_UClass_UOptimusSettings.InnerSingleton,
               StaticRegisterNativesUOptimusSettings,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"DeformerGraph",
               InternalConstructor<UOptimusSettings>,
               InternalVTableHelperCtorCaller<UOptimusSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSettings.InnerSingleton;
}

// UOptimusSettings @ 14e100270

UOptimusSettings * __thiscall
UOptimusSettings::UOptimusSettings(UOptimusSettings *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->DefaultMode = OptIn;
  puVar1 = &(this->DefaultDeformer).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UOptimusSettings__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultDeformer).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultDeformer).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DefaultDeformer).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultDeformer).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->DefaultRecomputeTangentDeformer).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultRecomputeTangentDeformer).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultRecomputeTangentDeformer).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultRecomputeTangentDeformer).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultRecomputeTangentDeformer).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  return this;
}

// UOptimusSettings @ 14e1002f0

UOptimusSettings * __thiscall
UOptimusSettings::UOptimusSettings(UOptimusSettings *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->DefaultMode = OptIn;
  puVar1 = &(this->DefaultDeformer).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UOptimusSettings__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultDeformer).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultDeformer).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DefaultDeformer).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultDeformer).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->DefaultRecomputeTangentDeformer).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultRecomputeTangentDeformer).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultRecomputeTangentDeformer).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultRecomputeTangentDeformer).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultRecomputeTangentDeformer).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  return this;
}

// ~UOptimusSettings @ 14e100390

void __thiscall UOptimusSettings::~UOptimusSettings(UOptimusSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UOptimusSettings__6B_;
  pvVar1 = *(void **)&(this->DefaultRecomputeTangentDeformer).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->DefaultDeformer).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14e100960

UClass * __cdecl UOptimusSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusSettings",L"OptimusSettings",
               &Z_Registration_Info_UClass_UOptimusSettings.InnerSingleton,
               StaticRegisterNativesUOptimusSettings,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"DeformerGraph",
               InternalConstructor<UOptimusSettings>,
               InternalVTableHelperCtorCaller<UOptimusSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSettings.InnerSingleton;
}

// StaticRegisterNativesUOptimusSettings @ 14e100c30

void __cdecl UOptimusSettings::StaticRegisterNativesUOptimusSettings(void)

{
  return;
}

