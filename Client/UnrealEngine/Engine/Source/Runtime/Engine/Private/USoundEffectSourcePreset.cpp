// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 14732afa0

UClass * __cdecl USoundEffectSourcePreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundEffectSourcePreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundEffectSourcePreset",
               &Z_Registration_Info_UClass_USoundEffectSourcePreset.InnerSingleton,
               StaticRegisterNativesUSoundEffectSourcePreset,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundEffectSourcePreset>,
               InternalVTableHelperCtorCaller<USoundEffectSourcePreset>,aFStackX_8,
               USoundEffectPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundEffectSourcePreset.InnerSingleton;
}

// USoundEffectSourcePreset @ 147330fe0

USoundEffectSourcePreset * __thiscall
USoundEffectSourcePreset::USoundEffectSourcePreset
          (USoundEffectSourcePreset *this,FVTableHelper *param_1)

{
  USoundEffectPreset::USoundEffectPreset((USoundEffectPreset *)this,param_1);
  *(undefined ***)this = &___7USoundEffectSourcePreset__6B_;
  return this;
}

// USoundEffectSourcePreset @ 147331010

USoundEffectSourcePreset * __thiscall
USoundEffectSourcePreset::USoundEffectSourcePreset
          (USoundEffectSourcePreset *this,FObjectInitializer *param_1)

{
  USoundEffectPreset::USoundEffectPreset((USoundEffectPreset *)this,param_1);
  *(undefined ***)this = &___7USoundEffectSourcePreset__6B_;
  return this;
}

// ~USoundEffectSourcePreset @ 147331430

void __thiscall USoundEffectSourcePreset::~USoundEffectSourcePreset(USoundEffectSourcePreset *this)

{
  *(undefined ***)this = &___7USoundEffectSourcePreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->field_0x38);
  DestructItems<TWeakPtr<FSoundEffectBase,1>,int>
            (*(TWeakPtr<FSoundEffectBase,1> **)&this->field_0x28,*(int *)&this->field_0x30);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetMaxSupportedChannels @ 1473324a0

int __thiscall USoundEffectSourcePreset::GetMaxSupportedChannels(USoundEffectSourcePreset *this)

{
  return 2;
}

// GetPrivateStaticClass @ 147332aa0

UClass * __cdecl USoundEffectSourcePreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundEffectSourcePreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundEffectSourcePreset",
               &Z_Registration_Info_UClass_USoundEffectSourcePreset.InnerSingleton,
               StaticRegisterNativesUSoundEffectSourcePreset,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundEffectSourcePreset>,
               InternalVTableHelperCtorCaller<USoundEffectSourcePreset>,local_res8,
               USoundEffectPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundEffectSourcePreset.InnerSingleton;
}

// StaticRegisterNativesUSoundEffectSourcePreset @ 147333430

void __cdecl USoundEffectSourcePreset::StaticRegisterNativesUSoundEffectSourcePreset(void)

{
  return;
}

