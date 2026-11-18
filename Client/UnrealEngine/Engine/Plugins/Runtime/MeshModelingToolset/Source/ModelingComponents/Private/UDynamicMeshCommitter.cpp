// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14ca40010

UClass * __cdecl UDynamicMeshCommitter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshCommitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"DynamicMeshCommitter",
               &Z_Registration_Info_UClass_UDynamicMeshCommitter.InnerSingleton,
               StaticRegisterNativesUDynamicMeshCommitter,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshCommitter>,
               InternalVTableHelperCtorCaller<UDynamicMeshCommitter>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshCommitter.InnerSingleton;
}

// UDynamicMeshCommitter @ 14ca67890

UDynamicMeshCommitter * __thiscall
UDynamicMeshCommitter::UDynamicMeshCommitter(UDynamicMeshCommitter *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDynamicMeshCommitter__6B_;
  return this;
}

// UDynamicMeshCommitter @ 14ca678c0

UDynamicMeshCommitter * __thiscall
UDynamicMeshCommitter::UDynamicMeshCommitter
          (UDynamicMeshCommitter *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDynamicMeshCommitter__6B_;
  return this;
}

// ~UDynamicMeshCommitter @ 14ca6b550

void __thiscall UDynamicMeshCommitter::~UDynamicMeshCommitter(UDynamicMeshCommitter *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14ca91080

UClass * __cdecl UDynamicMeshCommitter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshCommitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"DynamicMeshCommitter",
               &Z_Registration_Info_UClass_UDynamicMeshCommitter.InnerSingleton,
               StaticRegisterNativesUDynamicMeshCommitter,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshCommitter>,
               InternalVTableHelperCtorCaller<UDynamicMeshCommitter>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshCommitter.InnerSingleton;
}

// StaticRegisterNativesUDynamicMeshCommitter @ 14caa70f0

void __cdecl UDynamicMeshCommitter::StaticRegisterNativesUDynamicMeshCommitter(void)

{
  return;
}

