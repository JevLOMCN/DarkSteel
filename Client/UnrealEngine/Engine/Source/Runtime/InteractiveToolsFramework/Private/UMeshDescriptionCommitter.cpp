// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962d5b0

UClass * __cdecl UMeshDescriptionCommitter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDescriptionCommitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MeshDescriptionCommitter",
               &Z_Registration_Info_UClass_UMeshDescriptionCommitter.InnerSingleton,
               StaticRegisterNativesUMeshDescriptionCommitter,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshDescriptionCommitter>,
               InternalVTableHelperCtorCaller<UMeshDescriptionCommitter>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDescriptionCommitter.InnerSingleton;
}

// UMeshDescriptionCommitter @ 14963c710

UMeshDescriptionCommitter * __thiscall
UMeshDescriptionCommitter::UMeshDescriptionCommitter
          (UMeshDescriptionCommitter *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMeshDescriptionCommitter__6B_;
  return this;
}

// UMeshDescriptionCommitter @ 14963c740

UMeshDescriptionCommitter * __thiscall
UMeshDescriptionCommitter::UMeshDescriptionCommitter
          (UMeshDescriptionCommitter *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMeshDescriptionCommitter__6B_;
  return this;
}

// ~UMeshDescriptionCommitter @ 14963f0c0

void __thiscall
UMeshDescriptionCommitter::~UMeshDescriptionCommitter(UMeshDescriptionCommitter *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149657840

UClass * __cdecl UMeshDescriptionCommitter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDescriptionCommitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MeshDescriptionCommitter",
               &Z_Registration_Info_UClass_UMeshDescriptionCommitter.InnerSingleton,
               StaticRegisterNativesUMeshDescriptionCommitter,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshDescriptionCommitter>,
               InternalVTableHelperCtorCaller<UMeshDescriptionCommitter>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDescriptionCommitter.InnerSingleton;
}

// StaticRegisterNativesUMeshDescriptionCommitter @ 149664ca0

void __cdecl UMeshDescriptionCommitter::StaticRegisterNativesUMeshDescriptionCommitter(void)

{
  return;
}

