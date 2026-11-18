// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962ad20

UClass * __cdecl USceneComponentBackedTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USceneComponentBackedTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SceneComponentBackedTarget",
               &Z_Registration_Info_UClass_USceneComponentBackedTarget.InnerSingleton,
               StaticRegisterNativesUSceneComponentBackedTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USceneComponentBackedTarget>,
               InternalVTableHelperCtorCaller<USceneComponentBackedTarget>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneComponentBackedTarget.InnerSingleton;
}

// USceneComponentBackedTarget @ 14963cd20

USceneComponentBackedTarget * __thiscall
USceneComponentBackedTarget::USceneComponentBackedTarget
          (USceneComponentBackedTarget *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USceneComponentBackedTarget__6B_;
  return this;
}

// USceneComponentBackedTarget @ 14963cd50

USceneComponentBackedTarget * __thiscall
USceneComponentBackedTarget::USceneComponentBackedTarget
          (USceneComponentBackedTarget *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USceneComponentBackedTarget__6B_;
  return this;
}

// ~USceneComponentBackedTarget @ 14963f3b0

void __thiscall
USceneComponentBackedTarget::~USceneComponentBackedTarget(USceneComponentBackedTarget *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149657f00

UClass * __cdecl USceneComponentBackedTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USceneComponentBackedTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SceneComponentBackedTarget",
               &Z_Registration_Info_UClass_USceneComponentBackedTarget.InnerSingleton,
               StaticRegisterNativesUSceneComponentBackedTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USceneComponentBackedTarget>,
               InternalVTableHelperCtorCaller<USceneComponentBackedTarget>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneComponentBackedTarget.InnerSingleton;
}

// StaticRegisterNativesUSceneComponentBackedTarget @ 149664d30

void __cdecl USceneComponentBackedTarget::StaticRegisterNativesUSceneComponentBackedTarget(void)

{
  return;
}

