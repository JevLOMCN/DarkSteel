// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14867ad60

UClass * __cdecl USoundAttenuation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundAttenuation.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundAttenuation",
               &Z_Registration_Info_UClass_USoundAttenuation.InnerSingleton,
               StaticRegisterNativesUSoundAttenuation,0x3f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundAttenuation>,
               InternalVTableHelperCtorCaller<USoundAttenuation>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundAttenuation.InnerSingleton;
}

// USoundAttenuation @ 1486967e0

USoundAttenuation * __thiscall
USoundAttenuation::USoundAttenuation(USoundAttenuation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundAttenuation__6B_;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&this->Attenuation);
  return this;
}

// USoundAttenuation @ 148696810

USoundAttenuation * __thiscall
USoundAttenuation::USoundAttenuation(USoundAttenuation *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundAttenuation__6B_;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&this->Attenuation);
  return this;
}

// ~USoundAttenuation @ 14869b3f0

void __thiscall USoundAttenuation::~USoundAttenuation(USoundAttenuation *this)

{
  this->_padding_ = (longlong)&___7USoundAttenuation__6B_;
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&this->Attenuation);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1486c3ff0

UClass * __cdecl USoundAttenuation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundAttenuation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundAttenuation",
               &Z_Registration_Info_UClass_USoundAttenuation.InnerSingleton,
               StaticRegisterNativesUSoundAttenuation,0x3f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundAttenuation>,
               InternalVTableHelperCtorCaller<USoundAttenuation>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundAttenuation.InnerSingleton;
}

// StaticRegisterNativesUSoundAttenuation @ 1486f17c0

void __cdecl USoundAttenuation::StaticRegisterNativesUSoundAttenuation(void)

{
  return;
}

