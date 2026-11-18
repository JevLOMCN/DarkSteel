// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 15

// StaticClass @ 148c0a7b0

UClass * __cdecl UClothConfigCommon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothConfigCommon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothConfigCommon",
               &Z_Registration_Info_UClass_UClothConfigCommon.InnerSingleton,
               StaticRegisterNativesUClothConfigCommon,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothConfigCommon>,
               InternalVTableHelperCtorCaller<UClothConfigCommon>,local_res8,
               UClothConfigBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothConfigCommon.InnerSingleton;
}

// UClothConfigCommon @ 148c1a090

UClothConfigCommon * __thiscall
UClothConfigCommon::UClothConfigCommon(UClothConfigCommon *this,FVTableHelper *param_1)

{
  UClothConfigBase::UClothConfigBase((UClothConfigBase *)this,param_1);
  *(undefined ***)this = &___7UClothConfigCommon__6B_;
  return this;
}

// UClothConfigCommon @ 148c1a0c0

UClothConfigCommon * __thiscall UClothConfigCommon::UClothConfigCommon(UClothConfigCommon *this)

{
  UClothConfigBase::UClothConfigBase((UClothConfigBase *)this);
  *(undefined ***)this = &___7UClothConfigCommon__6B_;
  return this;
}

// ~UClothConfigCommon @ 148c1ab00

void __thiscall UClothConfigCommon::~UClothConfigCommon(UClothConfigCommon *this)

{
  *(undefined ***)this = &___7UClothConfigCommon__6B_;
  UClothConfigBase::~UClothConfigBase((UClothConfigBase *)this);
  return;
}

// GetPrivateStaticClass @ 148c2d600

UClass * __cdecl UClothConfigCommon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothConfigCommon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothConfigCommon",
               &Z_Registration_Info_UClass_UClothConfigCommon.InnerSingleton,
               StaticRegisterNativesUClothConfigCommon,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothConfigCommon>,
               InternalVTableHelperCtorCaller<UClothConfigCommon>,local_res8,
               UClothConfigBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothConfigCommon.InnerSingleton;
}

// GetSelfCollisionRadius @ 148c2d9a0

float __thiscall UClothConfigCommon::GetSelfCollisionRadius(UClothConfigCommon *this)

{
  return 0.0;
}

// MigrateFrom @ 148c2e060

void __thiscall
UClothConfigCommon::MigrateFrom(UClothConfigCommon *this,FClothConfig_Legacy *param_1)

{
  return;
}

// MigrateFrom @ 148c2e070

void __thiscall
UClothConfigCommon::MigrateFrom(UClothConfigCommon *this,UClothSharedConfigCommon *param_1)

{
  return;
}

// MigrateTo @ 148c2e0d0

bool __thiscall UClothConfigCommon::MigrateTo(UClothConfigCommon *this,FClothConfig_Legacy *param_1)

{
  return false;
}

// NeedsInverseMasses @ 148c2e4f0

bool __thiscall UClothConfigCommon::NeedsInverseMasses(UClothConfigCommon *this)

{
  return false;
}

// NeedsNumInfluences @ 148c2e500

bool __thiscall UClothConfigCommon::NeedsNumInfluences(UClothConfigCommon *this)

{
  return true;
}

// NeedsSelfCollisionData @ 148c2e510

bool __thiscall UClothConfigCommon::NeedsSelfCollisionData(UClothConfigCommon *this)

{
  return false;
}

// NeedsTethers @ 148c2e520

bool __thiscall UClothConfigCommon::NeedsTethers(UClothConfigCommon *this)

{
  return false;
}

// StaticRegisterNativesUClothConfigCommon @ 148c344f0

void __cdecl UClothConfigCommon::StaticRegisterNativesUClothConfigCommon(void)

{
  return;
}

// TethersUseGeodesicDistance @ 148c34650

bool __thiscall UClothConfigCommon::TethersUseGeodesicDistance(UClothConfigCommon *this)

{
  return false;
}

