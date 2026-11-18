// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962b090

UClass * __cdecl USkeletalMeshBackedTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshBackedTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SkeletalMeshBackedTarget",
               &Z_Registration_Info_UClass_USkeletalMeshBackedTarget.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshBackedTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMeshBackedTarget>,
               InternalVTableHelperCtorCaller<USkeletalMeshBackedTarget>,local_res8,
               UAssetBackedTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshBackedTarget.InnerSingleton;
}

// USkeletalMeshBackedTarget @ 14963d1e0

USkeletalMeshBackedTarget * __thiscall
USkeletalMeshBackedTarget::USkeletalMeshBackedTarget
          (USkeletalMeshBackedTarget *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USkeletalMeshBackedTarget__6B_;
  return this;
}

// USkeletalMeshBackedTarget @ 14963d210

USkeletalMeshBackedTarget * __thiscall
USkeletalMeshBackedTarget::USkeletalMeshBackedTarget
          (USkeletalMeshBackedTarget *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USkeletalMeshBackedTarget__6B_;
  return this;
}

// ~USkeletalMeshBackedTarget @ 14963f5c0

void __thiscall
USkeletalMeshBackedTarget::~USkeletalMeshBackedTarget(USkeletalMeshBackedTarget *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149658200

UClass * __cdecl USkeletalMeshBackedTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshBackedTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SkeletalMeshBackedTarget",
               &Z_Registration_Info_UClass_USkeletalMeshBackedTarget.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshBackedTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMeshBackedTarget>,
               InternalVTableHelperCtorCaller<USkeletalMeshBackedTarget>,local_res8,
               UAssetBackedTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshBackedTarget.InnerSingleton;
}

// StaticRegisterNativesUSkeletalMeshBackedTarget @ 149664d70

void __cdecl USkeletalMeshBackedTarget::StaticRegisterNativesUSkeletalMeshBackedTarget(void)

{
  return;
}

