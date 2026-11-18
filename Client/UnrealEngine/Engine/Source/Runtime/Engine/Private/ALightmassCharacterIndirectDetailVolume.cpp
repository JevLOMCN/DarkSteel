// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147e8e9a0

UClass * __cdecl ALightmassCharacterIndirectDetailVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmassCharacterIndirectDetailVolume",
               &Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.InnerSingleton,
               StaticRegisterNativesALightmassCharacterIndirectDetailVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALightmassCharacterIndirectDetailVolume>,
               InternalVTableHelperCtorCaller<ALightmassCharacterIndirectDetailVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.InnerSingleton;
}

// ALightmassCharacterIndirectDetailVolume @ 147ea4760

ALightmassCharacterIndirectDetailVolume * __thiscall
ALightmassCharacterIndirectDetailVolume::ALightmassCharacterIndirectDetailVolume
          (ALightmassCharacterIndirectDetailVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7ALightmassCharacterIndirectDetailVolume__6B_;
  return this;
}

// ALightmassCharacterIndirectDetailVolume @ 147ea4790

ALightmassCharacterIndirectDetailVolume * __thiscall
ALightmassCharacterIndirectDetailVolume::ALightmassCharacterIndirectDetailVolume
          (ALightmassCharacterIndirectDetailVolume *this,FObjectInitializer *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7ALightmassCharacterIndirectDetailVolume__6B_;
  (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
            (*(longlong **)&this->field_0x2d8,UCollisionProfile::NoCollision_ProfileName,1);
  *(uint *)&this->field_0x2cc = *(uint *)&this->field_0x2cc | 1;
  *(undefined2 *)&this->field_0x2c5 = 0x9bb9;
  this->field_0x2c4 = 0x19;
  this->field_0x2c7 = 0xff;
  return this;
}

// ~ALightmassCharacterIndirectDetailVolume @ 147ea8bf0

void __thiscall
ALightmassCharacterIndirectDetailVolume::~ALightmassCharacterIndirectDetailVolume
          (ALightmassCharacterIndirectDetailVolume *this)

{
  *(undefined ***)this = &___7ALightmassCharacterIndirectDetailVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 147ec40e0

UClass * __cdecl ALightmassCharacterIndirectDetailVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmassCharacterIndirectDetailVolume",
               &Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.InnerSingleton,
               StaticRegisterNativesALightmassCharacterIndirectDetailVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALightmassCharacterIndirectDetailVolume>,
               InternalVTableHelperCtorCaller<ALightmassCharacterIndirectDetailVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.InnerSingleton;
}

// StaticRegisterNativesALightmassCharacterIndirectDetailVolume @ 147edf0a0

void __cdecl
ALightmassCharacterIndirectDetailVolume::
StaticRegisterNativesALightmassCharacterIndirectDetailVolume(void)

{
  return;
}

