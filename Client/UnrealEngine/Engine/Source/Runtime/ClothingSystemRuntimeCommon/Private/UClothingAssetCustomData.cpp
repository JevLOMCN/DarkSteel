// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 6

// StaticClass @ 148c0b110

UClass * __cdecl UClothingAssetCustomData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingAssetCustomData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothingAssetCustomData",
               &Z_Registration_Info_UClass_UClothingAssetCustomData.InnerSingleton,
               StaticRegisterNativesUClothingAssetCustomData,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothingAssetCustomData>,
               InternalVTableHelperCtorCaller<UClothingAssetCustomData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingAssetCustomData.InnerSingleton;
}

// UClothingAssetCustomData @ 148c1a3d0

UClothingAssetCustomData * __thiscall
UClothingAssetCustomData::UClothingAssetCustomData
          (UClothingAssetCustomData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UClothingAssetCustomData__6B_;
  return this;
}

// UClothingAssetCustomData @ 148c1a400

UClothingAssetCustomData * __thiscall
UClothingAssetCustomData::UClothingAssetCustomData
          (UClothingAssetCustomData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UClothingAssetCustomData__6B_;
  return this;
}

// ~UClothingAssetCustomData @ 148c1aca0

void __thiscall UClothingAssetCustomData::~UClothingAssetCustomData(UClothingAssetCustomData *this)

{
  *(undefined ***)this = &___7UClothingAssetCustomData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148c2d8f0

UClass * __cdecl UClothingAssetCustomData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingAssetCustomData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothingAssetCustomData",
               &Z_Registration_Info_UClass_UClothingAssetCustomData.InnerSingleton,
               StaticRegisterNativesUClothingAssetCustomData,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothingAssetCustomData>,
               InternalVTableHelperCtorCaller<UClothingAssetCustomData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingAssetCustomData.InnerSingleton;
}

// StaticRegisterNativesUClothingAssetCustomData @ 148c34530

void __cdecl UClothingAssetCustomData::StaticRegisterNativesUClothingAssetCustomData(void)

{
  return;
}

