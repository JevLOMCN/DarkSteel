// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ed7e0

UClass * __cdecl UMeshDeformerInstanceSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDeformerInstanceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshDeformerInstanceSettings",
               &Z_Registration_Info_UClass_UMeshDeformerInstanceSettings.InnerSingleton,
               StaticRegisterNativesUMeshDeformerInstanceSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshDeformerInstanceSettings>,
               InternalVTableHelperCtorCaller<UMeshDeformerInstanceSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDeformerInstanceSettings.InnerSingleton;
}

// UMeshDeformerInstanceSettings @ 1472f1cf0

UMeshDeformerInstanceSettings * __thiscall
UMeshDeformerInstanceSettings::UMeshDeformerInstanceSettings
          (UMeshDeformerInstanceSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMeshDeformerInstanceSettings__6B_;
  return this;
}

// UMeshDeformerInstanceSettings @ 1472f1d20

UMeshDeformerInstanceSettings * __thiscall
UMeshDeformerInstanceSettings::UMeshDeformerInstanceSettings
          (UMeshDeformerInstanceSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMeshDeformerInstanceSettings__6B_;
  return this;
}

// ~UMeshDeformerInstanceSettings @ 1472f22e0

void __thiscall
UMeshDeformerInstanceSettings::~UMeshDeformerInstanceSettings(UMeshDeformerInstanceSettings *this)

{
  *(undefined ***)this = &___7UMeshDeformerInstanceSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472f3a10

UClass * __cdecl UMeshDeformerInstanceSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDeformerInstanceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshDeformerInstanceSettings",
               &Z_Registration_Info_UClass_UMeshDeformerInstanceSettings.InnerSingleton,
               StaticRegisterNativesUMeshDeformerInstanceSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshDeformerInstanceSettings>,
               InternalVTableHelperCtorCaller<UMeshDeformerInstanceSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDeformerInstanceSettings.InnerSingleton;
}

// StaticRegisterNativesUMeshDeformerInstanceSettings @ 1472f4440

void __cdecl UMeshDeformerInstanceSettings::StaticRegisterNativesUMeshDeformerInstanceSettings(void)

{
  return;
}

