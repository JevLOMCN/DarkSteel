// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14ca41f90

UClass * __cdecl UModelingToolExternalDynamicMeshUpdateAPI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelingToolExternalDynamicMeshUpdateAPI.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ModelingToolExternalDynamicMeshUpdateAPI",
               &Z_Registration_Info_UClass_UModelingToolExternalDynamicMeshUpdateAPI.InnerSingleton,
               StaticRegisterNativesUModelingToolExternalDynamicMeshUpdateAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UModelingToolExternalDynamicMeshUpdateAPI>,
               InternalVTableHelperCtorCaller<UModelingToolExternalDynamicMeshUpdateAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelingToolExternalDynamicMeshUpdateAPI.InnerSingleton;
}

// UModelingToolExternalDynamicMeshUpdateAPI @ 14ca68340

UModelingToolExternalDynamicMeshUpdateAPI * __thiscall
UModelingToolExternalDynamicMeshUpdateAPI::UModelingToolExternalDynamicMeshUpdateAPI
          (UModelingToolExternalDynamicMeshUpdateAPI *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UModelingToolExternalDynamicMeshUpdateAPI__6B_;
  return this;
}

// UModelingToolExternalDynamicMeshUpdateAPI @ 14ca68370

UModelingToolExternalDynamicMeshUpdateAPI * __thiscall
UModelingToolExternalDynamicMeshUpdateAPI::UModelingToolExternalDynamicMeshUpdateAPI
          (UModelingToolExternalDynamicMeshUpdateAPI *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UModelingToolExternalDynamicMeshUpdateAPI__6B_;
  return this;
}

// ~UModelingToolExternalDynamicMeshUpdateAPI @ 14ca6b820

void __thiscall
UModelingToolExternalDynamicMeshUpdateAPI::~UModelingToolExternalDynamicMeshUpdateAPI
          (UModelingToolExternalDynamicMeshUpdateAPI *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14ca91a30

UClass * __cdecl UModelingToolExternalDynamicMeshUpdateAPI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelingToolExternalDynamicMeshUpdateAPI.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ModelingToolExternalDynamicMeshUpdateAPI",
               &Z_Registration_Info_UClass_UModelingToolExternalDynamicMeshUpdateAPI.InnerSingleton,
               StaticRegisterNativesUModelingToolExternalDynamicMeshUpdateAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UModelingToolExternalDynamicMeshUpdateAPI>,
               InternalVTableHelperCtorCaller<UModelingToolExternalDynamicMeshUpdateAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelingToolExternalDynamicMeshUpdateAPI.InnerSingleton;
}

// StaticRegisterNativesUModelingToolExternalDynamicMeshUpdateAPI @ 14caa71f0

void __cdecl
UModelingToolExternalDynamicMeshUpdateAPI::
StaticRegisterNativesUModelingToolExternalDynamicMeshUpdateAPI(void)

{
  return;
}

