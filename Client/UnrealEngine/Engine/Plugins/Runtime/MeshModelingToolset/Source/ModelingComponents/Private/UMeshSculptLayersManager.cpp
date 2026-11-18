// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14ca405b0

UClass * __cdecl UMeshSculptLayersManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSculptLayersManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshSculptLayersManager",
               &Z_Registration_Info_UClass_UMeshSculptLayersManager.InnerSingleton,
               StaticRegisterNativesUMeshSculptLayersManager,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSculptLayersManager>,
               InternalVTableHelperCtorCaller<UMeshSculptLayersManager>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSculptLayersManager.InnerSingleton;
}

// UMeshSculptLayersManager @ 14ca67fd0

UMeshSculptLayersManager * __thiscall
UMeshSculptLayersManager::UMeshSculptLayersManager
          (UMeshSculptLayersManager *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMeshSculptLayersManager__6B_;
  return this;
}

// UMeshSculptLayersManager @ 14ca68000

UMeshSculptLayersManager * __thiscall
UMeshSculptLayersManager::UMeshSculptLayersManager
          (UMeshSculptLayersManager *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMeshSculptLayersManager__6B_;
  return this;
}

// ~UMeshSculptLayersManager @ 14ca6b770

void __thiscall UMeshSculptLayersManager::~UMeshSculptLayersManager(UMeshSculptLayersManager *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14ca917f0

UClass * __cdecl UMeshSculptLayersManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSculptLayersManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshSculptLayersManager",
               &Z_Registration_Info_UClass_UMeshSculptLayersManager.InnerSingleton,
               StaticRegisterNativesUMeshSculptLayersManager,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSculptLayersManager>,
               InternalVTableHelperCtorCaller<UMeshSculptLayersManager>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSculptLayersManager.InnerSingleton;
}

// StaticRegisterNativesUMeshSculptLayersManager @ 14caa71c0

void __cdecl UMeshSculptLayersManager::StaticRegisterNativesUMeshSculptLayersManager(void)

{
  return;
}

