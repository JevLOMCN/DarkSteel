// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// UAssetUserData @ 1475a7110

UAssetUserData * __thiscall
UAssetUserData::UAssetUserData(UAssetUserData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAssetUserData__6B_;
  return this;
}

// UAssetUserData @ 1475a7140

UAssetUserData * __thiscall
UAssetUserData::UAssetUserData(UAssetUserData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAssetUserData__6B_;
  return this;
}

// ~UAssetUserData @ 1475aa650

void __thiscall UAssetUserData::~UAssetUserData(UAssetUserData *this)

{
  *(undefined ***)this = &___7UAssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1475db4f0

UClass * __cdecl UAssetUserData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetUserData",
               &Z_Registration_Info_UClass_UAssetUserData.InnerSingleton,
               StaticRegisterNativesUAssetUserData,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAssetUserData>,
               InternalVTableHelperCtorCaller<UAssetUserData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetUserData.InnerSingleton;
}

// StaticRegisterNativesUAssetUserData @ 1475febf0

void __cdecl UAssetUserData::StaticRegisterNativesUAssetUserData(void)

{
  return;
}

