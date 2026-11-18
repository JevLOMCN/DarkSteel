// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 7

// StaticClass @ 14dc27950

UClass * __cdecl UClothAssetSkeletalMeshConverter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothAssetSkeletalMeshConverter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ClothAssetSkeletalMeshConverter",
               &Z_Registration_Info_UClass_UClothAssetSkeletalMeshConverter.InnerSingleton,
               StaticRegisterNativesUClothAssetSkeletalMeshConverter,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothAssetSkeletalMeshConverter>,
               InternalVTableHelperCtorCaller<UClothAssetSkeletalMeshConverter>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothAssetSkeletalMeshConverter.InnerSingleton;
}

// UClothAssetSkeletalMeshConverter @ 14dc35950

UClothAssetSkeletalMeshConverter * __thiscall
UClothAssetSkeletalMeshConverter::UClothAssetSkeletalMeshConverter
          (UClothAssetSkeletalMeshConverter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UClothAssetSkeletalMeshConverter__6B_;
  return this;
}

// UClothAssetSkeletalMeshConverter @ 14dc35980

UClothAssetSkeletalMeshConverter * __thiscall
UClothAssetSkeletalMeshConverter::UClothAssetSkeletalMeshConverter
          (UClothAssetSkeletalMeshConverter *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UClothAssetSkeletalMeshConverter__6B_;
  return this;
}

// ~UClothAssetSkeletalMeshConverter @ 14dc367d0

void __thiscall
UClothAssetSkeletalMeshConverter::~UClothAssetSkeletalMeshConverter
          (UClothAssetSkeletalMeshConverter *this)

{
  *(undefined ***)this = &___7UClothAssetSkeletalMeshConverter__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ExportToSkeletalMesh @ 14dc46030

bool __thiscall
UClothAssetSkeletalMeshConverter::ExportToSkeletalMesh
          (UClothAssetSkeletalMeshConverter *this,UChaosClothAssetBase *param_1,
          USkeletalMesh *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Public\\ChaosClothAsset\\SkeletalMeshConverterClassProvider.h"
             ,0x13,L"Pure virtual not implemented (%s)");
  return false;
}

// GetPrivateStaticClass @ 14dc4e710

UClass * __cdecl UClothAssetSkeletalMeshConverter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothAssetSkeletalMeshConverter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ClothAssetSkeletalMeshConverter",
               &Z_Registration_Info_UClass_UClothAssetSkeletalMeshConverter.InnerSingleton,
               StaticRegisterNativesUClothAssetSkeletalMeshConverter,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothAssetSkeletalMeshConverter>,
               InternalVTableHelperCtorCaller<UClothAssetSkeletalMeshConverter>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothAssetSkeletalMeshConverter.InnerSingleton;
}

// StaticRegisterNativesUClothAssetSkeletalMeshConverter @ 14dc5a880

void __cdecl
UClothAssetSkeletalMeshConverter::StaticRegisterNativesUClothAssetSkeletalMeshConverter(void)

{
  return;
}

