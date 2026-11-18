// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962b480

UClass * __cdecl UStaticMeshBackedTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMeshBackedTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"StaticMeshBackedTarget",
               &Z_Registration_Info_UClass_UStaticMeshBackedTarget.InnerSingleton,
               StaticRegisterNativesUStaticMeshBackedTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStaticMeshBackedTarget>,
               InternalVTableHelperCtorCaller<UStaticMeshBackedTarget>,local_res8,
               UAssetBackedTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMeshBackedTarget.InnerSingleton;
}

// UStaticMeshBackedTarget @ 14963d240

UStaticMeshBackedTarget * __thiscall
UStaticMeshBackedTarget::UStaticMeshBackedTarget
          (UStaticMeshBackedTarget *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UStaticMeshBackedTarget__6B_;
  return this;
}

// UStaticMeshBackedTarget @ 14963d270

UStaticMeshBackedTarget * __thiscall
UStaticMeshBackedTarget::UStaticMeshBackedTarget
          (UStaticMeshBackedTarget *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UStaticMeshBackedTarget__6B_;
  return this;
}

// ~UStaticMeshBackedTarget @ 14963f5d0

void __thiscall UStaticMeshBackedTarget::~UStaticMeshBackedTarget(UStaticMeshBackedTarget *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1496582c0

UClass * __cdecl UStaticMeshBackedTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMeshBackedTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"StaticMeshBackedTarget",
               &Z_Registration_Info_UClass_UStaticMeshBackedTarget.InnerSingleton,
               StaticRegisterNativesUStaticMeshBackedTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStaticMeshBackedTarget>,
               InternalVTableHelperCtorCaller<UStaticMeshBackedTarget>,local_res8,
               UAssetBackedTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMeshBackedTarget.InnerSingleton;
}

// StaticRegisterNativesUStaticMeshBackedTarget @ 149664d80

void __cdecl UStaticMeshBackedTarget::StaticRegisterNativesUStaticMeshBackedTarget(void)

{
  return;
}

