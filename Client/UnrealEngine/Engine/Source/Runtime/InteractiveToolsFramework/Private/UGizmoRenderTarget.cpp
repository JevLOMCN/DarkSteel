// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14966b690

UClass * __cdecl UGizmoRenderTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoRenderTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoRenderTarget",
               &Z_Registration_Info_UClass_UGizmoRenderTarget.InnerSingleton,
               StaticRegisterNativesUGizmoRenderTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoRenderTarget>,
               InternalVTableHelperCtorCaller<UGizmoRenderTarget>,local_res8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoRenderTarget.InnerSingleton;
}

// UGizmoRenderTarget @ 149686410

UGizmoRenderTarget * __thiscall
UGizmoRenderTarget::UGizmoRenderTarget(UGizmoRenderTarget *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoRenderTarget__6B_;
  return this;
}

// UGizmoRenderTarget @ 149686440

UGizmoRenderTarget * __thiscall
UGizmoRenderTarget::UGizmoRenderTarget(UGizmoRenderTarget *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoRenderTarget__6B_;
  return this;
}

// ~UGizmoRenderTarget @ 14968a170

void __thiscall UGizmoRenderTarget::~UGizmoRenderTarget(UGizmoRenderTarget *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1496a6150

UClass * __cdecl UGizmoRenderTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoRenderTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoRenderTarget",
               &Z_Registration_Info_UClass_UGizmoRenderTarget.InnerSingleton,
               StaticRegisterNativesUGizmoRenderTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoRenderTarget>,
               InternalVTableHelperCtorCaller<UGizmoRenderTarget>,local_res8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoRenderTarget.InnerSingleton;
}

// StaticRegisterNativesUGizmoRenderTarget @ 1496c2b10

void __cdecl UGizmoRenderTarget::StaticRegisterNativesUGizmoRenderTarget(void)

{
  return;
}

