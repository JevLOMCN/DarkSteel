// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 6

// StaticClass @ 1496ea450

UClass * __cdecl UMeshReplacementCommandChangeTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.InnerSingleton == (UClass *)0x0
     ) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"MeshReplacementCommandChangeTarget",
               &Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.InnerSingleton,
               StaticRegisterNativesUMeshReplacementCommandChangeTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshReplacementCommandChangeTarget>,
               InternalVTableHelperCtorCaller<UMeshReplacementCommandChangeTarget>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.InnerSingleton;
}

// UMeshReplacementCommandChangeTarget @ 1496f9f00

UMeshReplacementCommandChangeTarget * __thiscall
UMeshReplacementCommandChangeTarget::UMeshReplacementCommandChangeTarget
          (UMeshReplacementCommandChangeTarget *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMeshReplacementCommandChangeTarget__6B_;
  return this;
}

// UMeshReplacementCommandChangeTarget @ 1496f9f30

UMeshReplacementCommandChangeTarget * __thiscall
UMeshReplacementCommandChangeTarget::UMeshReplacementCommandChangeTarget
          (UMeshReplacementCommandChangeTarget *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMeshReplacementCommandChangeTarget__6B_;
  return this;
}

// ~UMeshReplacementCommandChangeTarget @ 1496fb6a0

void __thiscall
UMeshReplacementCommandChangeTarget::~UMeshReplacementCommandChangeTarget
          (UMeshReplacementCommandChangeTarget *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149711610

UClass * __cdecl UMeshReplacementCommandChangeTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"MeshReplacementCommandChangeTarget",
               &Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.InnerSingleton,
               StaticRegisterNativesUMeshReplacementCommandChangeTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshReplacementCommandChangeTarget>,
               InternalVTableHelperCtorCaller<UMeshReplacementCommandChangeTarget>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.InnerSingleton;
}

// StaticRegisterNativesUMeshReplacementCommandChangeTarget @ 14971aba0

void __cdecl
UMeshReplacementCommandChangeTarget::StaticRegisterNativesUMeshReplacementCommandChangeTarget(void)

{
  return;
}

