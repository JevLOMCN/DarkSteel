// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsCore
// Functions: 11

// StaticClass @ 14f130cc0

UClass * __cdecl UWorldMetricsExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricsExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricsExtension",
               &Z_Registration_Info_UClass_UWorldMetricsExtension.InnerSingleton,
               StaticRegisterNativesUWorldMetricsExtension,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldMetricsExtension>,
               InternalVTableHelperCtorCaller<UWorldMetricsExtension>,local_res8,
               UObject::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricsExtension.InnerSingleton;
}

// UWorldMetricsExtension @ 14f133330

UWorldMetricsExtension * __thiscall
UWorldMetricsExtension::UWorldMetricsExtension(UWorldMetricsExtension *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldMetricsExtension__6B_;
  return this;
}

// UWorldMetricsExtension @ 14f133360

UWorldMetricsExtension * __thiscall
UWorldMetricsExtension::UWorldMetricsExtension
          (UWorldMetricsExtension *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldMetricsExtension__6B_;
  return this;
}

// ~UWorldMetricsExtension @ 14f1336f0

void __thiscall UWorldMetricsExtension::~UWorldMetricsExtension(UWorldMetricsExtension *this)

{
  *(undefined ***)this = &___7UWorldMetricsExtension__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Deinitialize @ 14f135c60

void __thiscall UWorldMetricsExtension::Deinitialize(UWorldMetricsExtension *this)

{
  return;
}

// GetAllocatedSize @ 14f136900

ulong64 __thiscall UWorldMetricsExtension::GetAllocatedSize(UWorldMetricsExtension *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Public\\WorldMetricsExtension.h"
             ,0x1e,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetPrivateStaticClass @ 14f136ee0

UClass * __cdecl UWorldMetricsExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricsExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricsExtension",
               &Z_Registration_Info_UClass_UWorldMetricsExtension.InnerSingleton,
               StaticRegisterNativesUWorldMetricsExtension,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldMetricsExtension>,
               InternalVTableHelperCtorCaller<UWorldMetricsExtension>,local_res8,
               UObject::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricsExtension.InnerSingleton;
}

// Initialize @ 14f137310

void __thiscall UWorldMetricsExtension::Initialize(UWorldMetricsExtension *this)

{
  return;
}

// OnAcquire @ 14f137a30

void __thiscall UWorldMetricsExtension::OnAcquire(UWorldMetricsExtension *this,UObject *param_1)

{
  return;
}

// OnRelease @ 14f137ab0

void __thiscall UWorldMetricsExtension::OnRelease(UWorldMetricsExtension *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUWorldMetricsExtension @ 14f139540

void __cdecl UWorldMetricsExtension::StaticRegisterNativesUWorldMetricsExtension(void)

{
  return;
}

