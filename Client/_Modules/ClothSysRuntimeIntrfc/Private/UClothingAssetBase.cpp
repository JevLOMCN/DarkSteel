// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 11

// StaticClass @ 1446449c0

UClass * __cdecl UClothingAssetBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingAssetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothingAssetBase",
               &Z_Registration_Info_UClass_UClothingAssetBase.InnerSingleton,
               StaticRegisterNativesUClothingAssetBase,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothingAssetBase>,
               InternalVTableHelperCtorCaller<UClothingAssetBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingAssetBase.InnerSingleton;
}

// UClothingAssetBase @ 144648860

UClothingAssetBase * __thiscall
UClothingAssetBase::UClothingAssetBase(UClothingAssetBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UClothingAssetBase__6B_;
  (this->AssetGuid).A = 0;
  (this->AssetGuid).B = 0;
  (this->AssetGuid).C = 0;
  (this->AssetGuid).D = 0;
  return this;
}

// UClothingAssetBase @ 1446488a0

UClothingAssetBase * __thiscall
UClothingAssetBase::UClothingAssetBase(UClothingAssetBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UClothingAssetBase__6B_;
  (this->AssetGuid).A = 0;
  (this->AssetGuid).B = 0;
  (this->AssetGuid).C = 0;
  (this->AssetGuid).D = 0;
  return this;
}

// ~UClothingAssetBase @ 144648d80

void __thiscall UClothingAssetBase::~UClothingAssetBase(UClothingAssetBase *this)

{
  this->_padding_ = (longlong)&___7UClothingAssetBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetNumLods @ 14464b8c0

int __thiscall UClothingAssetBase::GetNumLods(UClothingAssetBase *this)

{
  return 0;
}

// GetPrivateStaticClass @ 14464ba40

UClass * __cdecl UClothingAssetBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingAssetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothingAssetBase",
               &Z_Registration_Info_UClass_UClothingAssetBase.InnerSingleton,
               StaticRegisterNativesUClothingAssetBase,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothingAssetBase>,
               InternalVTableHelperCtorCaller<UClothingAssetBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingAssetBase.InnerSingleton;
}

// IsValid @ 14464be90

bool __thiscall UClothingAssetBase::IsValid(UClothingAssetBase *this)

{
  return true;
}

// IsValidLod @ 14464bea0

bool __thiscall UClothingAssetBase::IsValidLod(UClothingAssetBase *this,int param_1)

{
  return false;
}

// PostUpdateAllAssets @ 14464bfb0

void __thiscall UClothingAssetBase::PostUpdateAllAssets(UClothingAssetBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingAssetBase.h"
             ,0x72,L"Pure virtual not implemented (%s)");
  return;
}

// RefreshBoneMapping @ 14464bfe0

void __thiscall
UClothingAssetBase::RefreshBoneMapping(UClothingAssetBase *this,USkeletalMesh *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingAssetBase.h"
             ,0x5a,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUClothingAssetBase @ 14464c7c0

void __cdecl UClothingAssetBase::StaticRegisterNativesUClothingAssetBase(void)

{
  return;
}

