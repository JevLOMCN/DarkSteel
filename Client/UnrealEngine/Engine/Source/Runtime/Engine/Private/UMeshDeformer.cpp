// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472ed1a0

UClass * __cdecl UMeshDeformer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDeformer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshDeformer",
               &Z_Registration_Info_UClass_UMeshDeformer.InnerSingleton,
               StaticRegisterNativesUMeshDeformer,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshDeformer>,
               InternalVTableHelperCtorCaller<UMeshDeformer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDeformer.InnerSingleton;
}

// UMeshDeformer @ 1472f1c30

UMeshDeformer * __thiscall UMeshDeformer::UMeshDeformer(UMeshDeformer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMeshDeformer__6B_;
  return this;
}

// UMeshDeformer @ 1472f1c60

UMeshDeformer * __thiscall
UMeshDeformer::UMeshDeformer(UMeshDeformer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMeshDeformer__6B_;
  return this;
}

// ~UMeshDeformer @ 1472f22a0

void __thiscall UMeshDeformer::~UMeshDeformer(UMeshDeformer *this)

{
  *(undefined ***)this = &___7UMeshDeformer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateInstance @ 1472f31f0

UMeshDeformerInstance * __thiscall
UMeshDeformer::CreateInstance
          (UMeshDeformer *this,UMeshComponent *param_1,UMeshDeformerInstanceSettings *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\MeshDeformer.h"
             ,0x20,L"Pure virtual not implemented (%s)");
  return (UMeshDeformerInstance *)0x0;
}

// CreateSettingsInstance @ 1472f3220

UMeshDeformerInstanceSettings * __thiscall
UMeshDeformer::CreateSettingsInstance(UMeshDeformer *this,UMeshComponent *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\MeshDeformer.h"
             ,0x1a,L"Pure virtual not implemented (%s)");
  return (UMeshDeformerInstanceSettings *)0x0;
}

// GetPrivateStaticClass @ 1472f38b0

UClass * __cdecl UMeshDeformer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDeformer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshDeformer",
               &Z_Registration_Info_UClass_UMeshDeformer.InnerSingleton,
               StaticRegisterNativesUMeshDeformer,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshDeformer>,
               InternalVTableHelperCtorCaller<UMeshDeformer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDeformer.InnerSingleton;
}

// StaticRegisterNativesUMeshDeformer @ 1472f4420

void __cdecl UMeshDeformer::StaticRegisterNativesUMeshDeformer(void)

{
  return;
}

