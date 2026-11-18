// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14cb59400

UClass * __cdecl UDynamicMeshProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"DynamicMeshProvider",
               &Z_Registration_Info_UClass_UDynamicMeshProvider.InnerSingleton,
               StaticRegisterNativesUDynamicMeshProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshProvider>,
               InternalVTableHelperCtorCaller<UDynamicMeshProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshProvider.InnerSingleton;
}

// UDynamicMeshProvider @ 14cb62660

UDynamicMeshProvider * __thiscall
UDynamicMeshProvider::UDynamicMeshProvider(UDynamicMeshProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDynamicMeshProvider__6B_;
  return this;
}

// UDynamicMeshProvider @ 14cb62690

UDynamicMeshProvider * __thiscall
UDynamicMeshProvider::UDynamicMeshProvider(UDynamicMeshProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDynamicMeshProvider__6B_;
  return this;
}

// ~UDynamicMeshProvider @ 14cb64ca0

void __thiscall UDynamicMeshProvider::~UDynamicMeshProvider(UDynamicMeshProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14cb98f90

UClass * __cdecl UDynamicMeshProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"DynamicMeshProvider",
               &Z_Registration_Info_UClass_UDynamicMeshProvider.InnerSingleton,
               StaticRegisterNativesUDynamicMeshProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshProvider>,
               InternalVTableHelperCtorCaller<UDynamicMeshProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshProvider.InnerSingleton;
}

// StaticRegisterNativesUDynamicMeshProvider @ 14cbb45a0

void __cdecl UDynamicMeshProvider::StaticRegisterNativesUDynamicMeshProvider(void)

{
  return;
}

