// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// USoundEffectSubmixPreset @ 148696e30

USoundEffectSubmixPreset * __thiscall
USoundEffectSubmixPreset::USoundEffectSubmixPreset
          (USoundEffectSubmixPreset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USoundEffectPreset__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->field_0x38,4000);
  *(undefined ***)this = &___7USoundEffectSubmixPreset__6B_;
  return this;
}

// USoundEffectSubmixPreset @ 148696e80

USoundEffectSubmixPreset * __thiscall
USoundEffectSubmixPreset::USoundEffectSubmixPreset
          (USoundEffectSubmixPreset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USoundEffectPreset__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->field_0x38,4000);
  this->field_0x60 = 0;
  *(undefined ***)this = &___7USoundEffectSubmixPreset__6B_;
  return this;
}

// ~USoundEffectSubmixPreset @ 14869b630

void __thiscall USoundEffectSubmixPreset::~USoundEffectSubmixPreset(USoundEffectSubmixPreset *this)

{
  *(undefined ***)this = &___7USoundEffectSubmixPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->field_0x38);
  DestructItems<TWeakPtr<FSoundEffectBase,1>,int>
            (*(TWeakPtr<FSoundEffectBase,1> **)&this->field_0x28,*(int *)&this->field_0x30);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1486c4420

UClass * __cdecl USoundEffectSubmixPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundEffectSubmixPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundEffectSubmixPreset",
               &Z_Registration_Info_UClass_USoundEffectSubmixPreset.InnerSingleton,
               StaticRegisterNativesUSoundEffectSubmixPreset,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundEffectSubmixPreset>,
               InternalVTableHelperCtorCaller<USoundEffectSubmixPreset>,local_res8,
               USoundEffectPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundEffectSubmixPreset.InnerSingleton;
}

// StaticRegisterNativesUSoundEffectSubmixPreset @ 1486f1880

void __cdecl USoundEffectSubmixPreset::StaticRegisterNativesUSoundEffectSubmixPreset(void)

{
  return;
}

