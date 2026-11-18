// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 1472ed890

UClass * __cdecl UMeshDeformerInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDeformerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshDeformerInstance",
               &Z_Registration_Info_UClass_UMeshDeformerInstance.InnerSingleton,
               StaticRegisterNativesUMeshDeformerInstance,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshDeformerInstance>,
               InternalVTableHelperCtorCaller<UMeshDeformerInstance>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDeformerInstance.InnerSingleton;
}

// UMeshDeformerInstance @ 1472f1c90

UMeshDeformerInstance * __thiscall
UMeshDeformerInstance::UMeshDeformerInstance(UMeshDeformerInstance *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMeshDeformerInstance__6B_;
  return this;
}

// UMeshDeformerInstance @ 1472f1cc0

UMeshDeformerInstance * __thiscall
UMeshDeformerInstance::UMeshDeformerInstance
          (UMeshDeformerInstance *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMeshDeformerInstance__6B_;
  return this;
}

// ~UMeshDeformerInstance @ 1472f22c0

void __thiscall UMeshDeformerInstance::~UMeshDeformerInstance(UMeshDeformerInstance *this)

{
  *(undefined ***)this = &___7UMeshDeformerInstance__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AllocateResources @ 1472f31c0

void __thiscall UMeshDeformerInstance::AllocateResources(UMeshDeformerInstance *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\MeshDeformerInstance.h"
             ,0x34,L"Pure virtual not implemented (%s)");
  return;
}

// EnqueueWork @ 1472f3460

void __thiscall
UMeshDeformerInstance::EnqueueWork(UMeshDeformerInstance *this,FEnqueueWorkDesc *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\MeshDeformerInstance.h"
             ,0x57,L"Pure virtual not implemented (%s)");
  return;
}

// GetInstanceForSourceDeformer @ 1472f3490

UMeshDeformerInstance * __thiscall
UMeshDeformerInstance::GetInstanceForSourceDeformer(UMeshDeformerInstance *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\MeshDeformerInstance.h"
             ,100,L"Pure virtual not implemented (%s)");
  return this;
}

// GetOutputBuffers @ 1472f34d0

EMeshDeformerOutputBuffer __thiscall
UMeshDeformerInstance::GetOutputBuffers(UMeshDeformerInstance *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\MeshDeformerInstance.h"
             ,0x5a,L"Pure virtual not implemented (%s)");
  return None;
}

// GetPrivateStaticClass @ 1472f3960

UClass * __cdecl UMeshDeformerInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDeformerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshDeformerInstance",
               &Z_Registration_Info_UClass_UMeshDeformerInstance.InnerSingleton,
               StaticRegisterNativesUMeshDeformerInstance,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshDeformerInstance>,
               InternalVTableHelperCtorCaller<UMeshDeformerInstance>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDeformerInstance.InnerSingleton;
}

// ReleaseResources @ 1472f43a0

void __thiscall UMeshDeformerInstance::ReleaseResources(UMeshDeformerInstance *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\MeshDeformerInstance.h"
             ,0x37,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUMeshDeformerInstance @ 1472f4430

void __cdecl UMeshDeformerInstance::StaticRegisterNativesUMeshDeformerInstance(void)

{
  return;
}

