// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962bb60

UClass * __cdecl UAssetBackedTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetBackedTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"AssetBackedTarget",
               &Z_Registration_Info_UClass_UAssetBackedTarget.InnerSingleton,
               StaticRegisterNativesUAssetBackedTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAssetBackedTarget>,
               InternalVTableHelperCtorCaller<UAssetBackedTarget>,local_res8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetBackedTarget.InnerSingleton;
}

// UAssetBackedTarget @ 149638ff0

UAssetBackedTarget * __thiscall
UAssetBackedTarget::UAssetBackedTarget(UAssetBackedTarget *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAssetBackedTarget__6B_;
  return this;
}

// UAssetBackedTarget @ 149639020

UAssetBackedTarget * __thiscall
UAssetBackedTarget::UAssetBackedTarget(UAssetBackedTarget *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAssetBackedTarget__6B_;
  return this;
}

// ~UAssetBackedTarget @ 14963df70

void __thiscall UAssetBackedTarget::~UAssetBackedTarget(UAssetBackedTarget *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149655650

UClass * __cdecl UAssetBackedTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetBackedTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"AssetBackedTarget",
               &Z_Registration_Info_UClass_UAssetBackedTarget.InnerSingleton,
               StaticRegisterNativesUAssetBackedTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAssetBackedTarget>,
               InternalVTableHelperCtorCaller<UAssetBackedTarget>,local_res8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetBackedTarget.InnerSingleton;
}

// StaticRegisterNativesUAssetBackedTarget @ 149664990

void __cdecl UAssetBackedTarget::StaticRegisterNativesUAssetBackedTarget(void)

{
  return;
}

