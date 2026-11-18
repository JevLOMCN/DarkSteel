// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14ca40e60

UClass * __cdecl UPersistentDynamicMeshSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPersistentDynamicMeshSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PersistentDynamicMeshSource",
               &Z_Registration_Info_UClass_UPersistentDynamicMeshSource.InnerSingleton,
               StaticRegisterNativesUPersistentDynamicMeshSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPersistentDynamicMeshSource>,
               InternalVTableHelperCtorCaller<UPersistentDynamicMeshSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPersistentDynamicMeshSource.InnerSingleton;
}

// UPersistentDynamicMeshSource @ 14ca68bd0

UPersistentDynamicMeshSource * __thiscall
UPersistentDynamicMeshSource::UPersistentDynamicMeshSource
          (UPersistentDynamicMeshSource *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPersistentDynamicMeshSource__6B_;
  return this;
}

// UPersistentDynamicMeshSource @ 14ca68c00

UPersistentDynamicMeshSource * __thiscall
UPersistentDynamicMeshSource::UPersistentDynamicMeshSource
          (UPersistentDynamicMeshSource *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPersistentDynamicMeshSource__6B_;
  return this;
}

// ~UPersistentDynamicMeshSource @ 14ca6baf0

void __thiscall
UPersistentDynamicMeshSource::~UPersistentDynamicMeshSource(UPersistentDynamicMeshSource *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14ca91eb0

UClass * __cdecl UPersistentDynamicMeshSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPersistentDynamicMeshSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PersistentDynamicMeshSource",
               &Z_Registration_Info_UClass_UPersistentDynamicMeshSource.InnerSingleton,
               StaticRegisterNativesUPersistentDynamicMeshSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPersistentDynamicMeshSource>,
               InternalVTableHelperCtorCaller<UPersistentDynamicMeshSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPersistentDynamicMeshSource.InnerSingleton;
}

// StaticRegisterNativesUPersistentDynamicMeshSource @ 14caa7280

void __cdecl UPersistentDynamicMeshSource::StaticRegisterNativesUPersistentDynamicMeshSource(void)

{
  return;
}

