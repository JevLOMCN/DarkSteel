// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SoundFields
// Functions: 7

// StaticClass @ 14f09c3c0

UClass * __cdecl UAmbisonicsEncodingSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SoundFields",L"AmbisonicsEncodingSettings",
               &Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.InnerSingleton,
               StaticRegisterNativesUAmbisonicsEncodingSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAmbisonicsEncodingSettings>,
               InternalVTableHelperCtorCaller<UAmbisonicsEncodingSettings>,local_res8,
               USoundfieldEncodingSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.InnerSingleton;
}

// UAmbisonicsEncodingSettings @ 14f09c700

UAmbisonicsEncodingSettings * __thiscall
UAmbisonicsEncodingSettings::UAmbisonicsEncodingSettings
          (UAmbisonicsEncodingSettings *this,FVTableHelper *param_1)

{
  USoundfieldEncodingSettingsBase::USoundfieldEncodingSettingsBase
            ((USoundfieldEncodingSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAmbisonicsEncodingSettings__6B_;
  return this;
}

// UAmbisonicsEncodingSettings @ 14f09c730

UAmbisonicsEncodingSettings * __thiscall
UAmbisonicsEncodingSettings::UAmbisonicsEncodingSettings
          (UAmbisonicsEncodingSettings *this,FObjectInitializer *param_1)

{
  USoundfieldEncodingSettingsBase::USoundfieldEncodingSettingsBase
            ((USoundfieldEncodingSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAmbisonicsEncodingSettings__6B_;
  return this;
}

// ~UAmbisonicsEncodingSettings @ 14f09c8d0

void __thiscall
UAmbisonicsEncodingSettings::~UAmbisonicsEncodingSettings(UAmbisonicsEncodingSettings *this)

{
  this->_padding_ = (longlong)&___7UAmbisonicsEncodingSettings__6B_;
  USoundfieldEncodingSettingsBase::~USoundfieldEncodingSettingsBase
            ((USoundfieldEncodingSettingsBase *)this);
  return;
}

// GetPrivateStaticClass @ 14f09d390

UClass * __cdecl UAmbisonicsEncodingSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SoundFields",L"AmbisonicsEncodingSettings",
               &Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.InnerSingleton,
               StaticRegisterNativesUAmbisonicsEncodingSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAmbisonicsEncodingSettings>,
               InternalVTableHelperCtorCaller<UAmbisonicsEncodingSettings>,local_res8,
               USoundfieldEncodingSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.InnerSingleton;
}

// GetProxy @ 14f09d450

TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
__thiscall UAmbisonicsEncodingSettings::GetProxy(UAmbisonicsEncodingSettings *this)

{
  int iVar1;
  ISoundfieldEncodingSettingsProxy IVar2;
  int iVar3;
  ISoundfieldEncodingSettingsProxy *in_RDX;
  
  IVar2 = (ISoundfieldEncodingSettingsProxy)::operator_new(0x10);
  if (IVar2 == (ISoundfieldEncodingSettingsProxy)0x0) {
    IVar2 = (ISoundfieldEncodingSettingsProxy)0x0;
  }
  else {
    *(undefined8 *)((longlong)IVar2 + 8) = 0;
    *(undefined ***)IVar2 = &___7FAmbisonicsSoundfieldSettings__6B_;
  }
  *in_RDX = IVar2;
  iVar3 = 5;
  if (this->AmbisonicsOrder < 5) {
    iVar3 = this->AmbisonicsOrder;
  }
  iVar1 = 1;
  if (1 < iVar3) {
    iVar1 = iVar3;
  }
  *(int *)((longlong)IVar2 + 8) = iVar1;
  return (TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
          )in_RDX;
}

// StaticRegisterNativesUAmbisonicsEncodingSettings @ 14f09d890

void __cdecl UAmbisonicsEncodingSettings::StaticRegisterNativesUAmbisonicsEncodingSettings(void)

{
  return;
}

