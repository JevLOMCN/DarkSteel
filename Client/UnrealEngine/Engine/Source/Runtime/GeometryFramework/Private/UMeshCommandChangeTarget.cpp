// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 6

// StaticClass @ 1496ea400

UClass * __cdecl UMeshCommandChangeTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMeshCommandChangeTarget.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"MeshCommandChangeTarget",
               &Z_Registration_Info_UClass_UMeshCommandChangeTarget.InnerSingleton,
               StaticRegisterNativesUMeshCommandChangeTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshCommandChangeTarget>,
               InternalVTableHelperCtorCaller<UMeshCommandChangeTarget>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshCommandChangeTarget.InnerSingleton;
}

// UMeshCommandChangeTarget @ 1496f9ea0

UMeshCommandChangeTarget * __thiscall
UMeshCommandChangeTarget::UMeshCommandChangeTarget
          (UMeshCommandChangeTarget *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMeshCommandChangeTarget__6B_;
  return this;
}

// UMeshCommandChangeTarget @ 1496f9ed0

UMeshCommandChangeTarget * __thiscall
UMeshCommandChangeTarget::UMeshCommandChangeTarget
          (UMeshCommandChangeTarget *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMeshCommandChangeTarget__6B_;
  return this;
}

// ~UMeshCommandChangeTarget @ 1496fb690

void __thiscall UMeshCommandChangeTarget::~UMeshCommandChangeTarget(UMeshCommandChangeTarget *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149711550

UClass * __cdecl UMeshCommandChangeTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshCommandChangeTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"MeshCommandChangeTarget",
               &Z_Registration_Info_UClass_UMeshCommandChangeTarget.InnerSingleton,
               StaticRegisterNativesUMeshCommandChangeTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshCommandChangeTarget>,
               InternalVTableHelperCtorCaller<UMeshCommandChangeTarget>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshCommandChangeTarget.InnerSingleton;
}

// StaticRegisterNativesUMeshCommandChangeTarget @ 14971ab90

void __cdecl UMeshCommandChangeTarget::StaticRegisterNativesUMeshCommandChangeTarget(void)

{
  return;
}

