// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 6

// StaticClass @ 1496e8540

UClass * __cdecl UMeshVertexCommandChangeTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"MeshVertexCommandChangeTarget",
               &Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.InnerSingleton,
               StaticRegisterNativesUMeshVertexCommandChangeTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexCommandChangeTarget>,
               InternalVTableHelperCtorCaller<UMeshVertexCommandChangeTarget>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.InnerSingleton;
}

// UMeshVertexCommandChangeTarget @ 1496f9f60

UMeshVertexCommandChangeTarget * __thiscall
UMeshVertexCommandChangeTarget::UMeshVertexCommandChangeTarget
          (UMeshVertexCommandChangeTarget *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMeshVertexCommandChangeTarget__6B_;
  return this;
}

// UMeshVertexCommandChangeTarget @ 1496f9f90

UMeshVertexCommandChangeTarget * __thiscall
UMeshVertexCommandChangeTarget::UMeshVertexCommandChangeTarget
          (UMeshVertexCommandChangeTarget *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMeshVertexCommandChangeTarget__6B_;
  return this;
}

// ~UMeshVertexCommandChangeTarget @ 1496fb6b0

void __thiscall
UMeshVertexCommandChangeTarget::~UMeshVertexCommandChangeTarget
          (UMeshVertexCommandChangeTarget *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1497116d0

UClass * __cdecl UMeshVertexCommandChangeTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"MeshVertexCommandChangeTarget",
               &Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.InnerSingleton,
               StaticRegisterNativesUMeshVertexCommandChangeTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexCommandChangeTarget>,
               InternalVTableHelperCtorCaller<UMeshVertexCommandChangeTarget>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.InnerSingleton;
}

// StaticRegisterNativesUMeshVertexCommandChangeTarget @ 14971abb0

void __cdecl
UMeshVertexCommandChangeTarget::StaticRegisterNativesUMeshVertexCommandChangeTarget(void)

{
  return;
}

