// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148337a20

UClass * __cdecl APrecomputedVisibilityVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APrecomputedVisibilityVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PrecomputedVisibilityVolume",
               &Z_Registration_Info_UClass_APrecomputedVisibilityVolume.InnerSingleton,
               StaticRegisterNativesAPrecomputedVisibilityVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APrecomputedVisibilityVolume>,
               InternalVTableHelperCtorCaller<APrecomputedVisibilityVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APrecomputedVisibilityVolume.InnerSingleton;
}

// APrecomputedVisibilityVolume @ 148349fc0

APrecomputedVisibilityVolume * __thiscall
APrecomputedVisibilityVolume::APrecomputedVisibilityVolume
          (APrecomputedVisibilityVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7APrecomputedVisibilityVolume__6B_;
  return this;
}

// APrecomputedVisibilityVolume @ 148349ff0

APrecomputedVisibilityVolume * __thiscall
APrecomputedVisibilityVolume::APrecomputedVisibilityVolume
          (APrecomputedVisibilityVolume *this,FObjectInitializer *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7APrecomputedVisibilityVolume__6B_;
  (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
            (*(longlong **)&this->field_0x2d8,UCollisionProfile::NoCollision_ProfileName,1);
  *(uint *)&this->field_0x2cc = *(uint *)&this->field_0x2cc | 1;
  *(undefined2 *)&this->field_0x2c5 = 0x19ff;
  this->field_0x2c4 = 0x19;
  this->field_0x2c7 = 0xff;
  return this;
}

// ~APrecomputedVisibilityVolume @ 14834d3b0

void __thiscall
APrecomputedVisibilityVolume::~APrecomputedVisibilityVolume(APrecomputedVisibilityVolume *this)

{
  *(undefined ***)this = &___7APrecomputedVisibilityVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 148387050

UClass * __cdecl APrecomputedVisibilityVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APrecomputedVisibilityVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PrecomputedVisibilityVolume",
               &Z_Registration_Info_UClass_APrecomputedVisibilityVolume.InnerSingleton,
               StaticRegisterNativesAPrecomputedVisibilityVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APrecomputedVisibilityVolume>,
               InternalVTableHelperCtorCaller<APrecomputedVisibilityVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APrecomputedVisibilityVolume.InnerSingleton;
}

// StaticRegisterNativesAPrecomputedVisibilityVolume @ 1483af710

void __cdecl APrecomputedVisibilityVolume::StaticRegisterNativesAPrecomputedVisibilityVolume(void)

{
  return;
}

