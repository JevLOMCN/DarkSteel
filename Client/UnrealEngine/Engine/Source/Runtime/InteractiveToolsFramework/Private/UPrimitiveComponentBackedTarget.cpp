// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962ade0

UClass * __cdecl UPrimitiveComponentBackedTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPrimitiveComponentBackedTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"PrimitiveComponentBackedTarget",
               &Z_Registration_Info_UClass_UPrimitiveComponentBackedTarget.InnerSingleton,
               StaticRegisterNativesUPrimitiveComponentBackedTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPrimitiveComponentBackedTarget>,
               InternalVTableHelperCtorCaller<UPrimitiveComponentBackedTarget>,local_res8,
               USceneComponentBackedTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPrimitiveComponentBackedTarget.InnerSingleton;
}

// UPrimitiveComponentBackedTarget @ 14963ccc0

UPrimitiveComponentBackedTarget * __thiscall
UPrimitiveComponentBackedTarget::UPrimitiveComponentBackedTarget
          (UPrimitiveComponentBackedTarget *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPrimitiveComponentBackedTarget__6B_;
  return this;
}

// UPrimitiveComponentBackedTarget @ 14963ccf0

UPrimitiveComponentBackedTarget * __thiscall
UPrimitiveComponentBackedTarget::UPrimitiveComponentBackedTarget
          (UPrimitiveComponentBackedTarget *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPrimitiveComponentBackedTarget__6B_;
  return this;
}

// ~UPrimitiveComponentBackedTarget @ 14963f3a0

void __thiscall
UPrimitiveComponentBackedTarget::~UPrimitiveComponentBackedTarget
          (UPrimitiveComponentBackedTarget *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149657e40

UClass * __cdecl UPrimitiveComponentBackedTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPrimitiveComponentBackedTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"PrimitiveComponentBackedTarget",
               &Z_Registration_Info_UClass_UPrimitiveComponentBackedTarget.InnerSingleton,
               StaticRegisterNativesUPrimitiveComponentBackedTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPrimitiveComponentBackedTarget>,
               InternalVTableHelperCtorCaller<UPrimitiveComponentBackedTarget>,local_res8,
               USceneComponentBackedTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPrimitiveComponentBackedTarget.InnerSingleton;
}

// StaticRegisterNativesUPrimitiveComponentBackedTarget @ 149664d20

void __cdecl
UPrimitiveComponentBackedTarget::StaticRegisterNativesUPrimitiveComponentBackedTarget(void)

{
  return;
}

