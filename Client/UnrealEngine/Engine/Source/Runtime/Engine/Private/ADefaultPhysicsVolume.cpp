// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147aa84c0

UClass * __cdecl ADefaultPhysicsVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADefaultPhysicsVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DefaultPhysicsVolume",
               &Z_Registration_Info_UClass_ADefaultPhysicsVolume.InnerSingleton,
               StaticRegisterNativesADefaultPhysicsVolume,0x308,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADefaultPhysicsVolume>,
               InternalVTableHelperCtorCaller<ADefaultPhysicsVolume>,local_res8,
               APhysicsVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADefaultPhysicsVolume.InnerSingleton;
}

// ADefaultPhysicsVolume @ 147ababc0

ADefaultPhysicsVolume * __thiscall
ADefaultPhysicsVolume::ADefaultPhysicsVolume(ADefaultPhysicsVolume *this,FVTableHelper *param_1)

{
  APhysicsVolume::APhysicsVolume((APhysicsVolume *)this,param_1);
  *(undefined ***)this = &___7ADefaultPhysicsVolume__6B_;
  return this;
}

// ADefaultPhysicsVolume @ 147ababf0

ADefaultPhysicsVolume * __thiscall
ADefaultPhysicsVolume::ADefaultPhysicsVolume
          (ADefaultPhysicsVolume *this,FObjectInitializer *param_1)

{
  UPhysicsSettings *pUVar1;
  
  APhysicsVolume::APhysicsVolume((APhysicsVolume *)this,param_1);
  *(undefined ***)this = &___7ADefaultPhysicsVolume__6B_;
  pUVar1 = UPhysicsSettings::Get();
  *(undefined4 *)&this->field_0x2f8 = *(undefined4 *)((longlong)&pUVar1->_padding_ + 4);
  pUVar1 = UPhysicsSettings::Get();
  *(int *)&this->field_0x300 = (int)pUVar1->_padding_;
  (**(code **)(**(longlong **)&this->field_0x2d8 + 0x780))(*(longlong **)&this->field_0x2d8,0);
  return this;
}

// ~ADefaultPhysicsVolume @ 147abecb0

void __thiscall ADefaultPhysicsVolume::~ADefaultPhysicsVolume(ADefaultPhysicsVolume *this)

{
  *(undefined ***)this = &___7ADefaultPhysicsVolume__6B_;
  APhysicsVolume::~APhysicsVolume((APhysicsVolume *)this);
  return;
}

// GetPrivateStaticClass @ 147aeb140

UClass * __cdecl ADefaultPhysicsVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADefaultPhysicsVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DefaultPhysicsVolume",
               &Z_Registration_Info_UClass_ADefaultPhysicsVolume.InnerSingleton,
               StaticRegisterNativesADefaultPhysicsVolume,0x308,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADefaultPhysicsVolume>,
               InternalVTableHelperCtorCaller<ADefaultPhysicsVolume>,local_res8,
               APhysicsVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADefaultPhysicsVolume.InnerSingleton;
}

// StaticRegisterNativesADefaultPhysicsVolume @ 147b17220

void __cdecl ADefaultPhysicsVolume::StaticRegisterNativesADefaultPhysicsVolume(void)

{
  return;
}

