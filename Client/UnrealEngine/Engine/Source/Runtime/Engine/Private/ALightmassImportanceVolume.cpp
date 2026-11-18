// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147e8eaa0

UClass * __cdecl ALightmassImportanceVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALightmassImportanceVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmassImportanceVolume",
               &Z_Registration_Info_UClass_ALightmassImportanceVolume.InnerSingleton,
               StaticRegisterNativesALightmassImportanceVolume,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALightmassImportanceVolume>,
               InternalVTableHelperCtorCaller<ALightmassImportanceVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALightmassImportanceVolume.InnerSingleton;
}

// ALightmassImportanceVolume @ 147ea47f0

ALightmassImportanceVolume * __thiscall
ALightmassImportanceVolume::ALightmassImportanceVolume
          (ALightmassImportanceVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7ALightmassImportanceVolume__6B_;
  return this;
}

// ALightmassImportanceVolume @ 147ea4820

ALightmassImportanceVolume * __thiscall
ALightmassImportanceVolume::ALightmassImportanceVolume
          (ALightmassImportanceVolume *this,FObjectInitializer *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7ALightmassImportanceVolume__6B_;
  (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
            (*(longlong **)&this->field_0x2d8,UCollisionProfile::NoCollision_ProfileName,1);
  *(uint *)&this->field_0x2cc = *(uint *)&this->field_0x2cc | 1;
  *(undefined2 *)&this->field_0x2c5 = 0xffff;
  this->field_0x2c4 = 0x19;
  this->field_0x2c7 = 0xff;
  return this;
}

// ~ALightmassImportanceVolume @ 147ea8c10

void __thiscall
ALightmassImportanceVolume::~ALightmassImportanceVolume(ALightmassImportanceVolume *this)

{
  *(undefined ***)this = &___7ALightmassImportanceVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 147ec41a0

UClass * __cdecl ALightmassImportanceVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALightmassImportanceVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmassImportanceVolume",
               &Z_Registration_Info_UClass_ALightmassImportanceVolume.InnerSingleton,
               StaticRegisterNativesALightmassImportanceVolume,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALightmassImportanceVolume>,
               InternalVTableHelperCtorCaller<ALightmassImportanceVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALightmassImportanceVolume.InnerSingleton;
}

// StaticRegisterNativesALightmassImportanceVolume @ 147edf0b0

void __cdecl ALightmassImportanceVolume::StaticRegisterNativesALightmassImportanceVolume(void)

{
  return;
}

