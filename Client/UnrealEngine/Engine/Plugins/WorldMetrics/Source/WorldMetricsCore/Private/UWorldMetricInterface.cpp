// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsCore
// Functions: 10

// StaticClass @ 14f130880

UClass * __cdecl UWorldMetricInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricInterface",
               &Z_Registration_Info_UClass_UWorldMetricInterface.InnerSingleton,
               StaticRegisterNativesUWorldMetricInterface,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldMetricInterface>,
               InternalVTableHelperCtorCaller<UWorldMetricInterface>,local_res8,UObject::StaticClass
               ,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricInterface.InnerSingleton;
}

// UWorldMetricInterface @ 14f1331d0

UWorldMetricInterface * __thiscall
UWorldMetricInterface::UWorldMetricInterface(UWorldMetricInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldMetricInterface__6B_;
  return this;
}

// UWorldMetricInterface @ 14f133200

UWorldMetricInterface * __thiscall
UWorldMetricInterface::UWorldMetricInterface
          (UWorldMetricInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldMetricInterface__6B_;
  return this;
}

// ~UWorldMetricInterface @ 14f133670

void __thiscall UWorldMetricInterface::~UWorldMetricInterface(UWorldMetricInterface *this)

{
  *(undefined ***)this = &___7UWorldMetricInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Deinitialize @ 14f135b70

void __thiscall UWorldMetricInterface::Deinitialize(UWorldMetricInterface *this)

{
  return;
}

// GetAllocatedSize @ 14f1368b0

ulong64 __thiscall UWorldMetricInterface::GetAllocatedSize(UWorldMetricInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Public\\WorldMetricInterface.h"
             ,0x19,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetPrivateStaticClass @ 14f136ca0

UClass * __cdecl UWorldMetricInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricInterface",
               &Z_Registration_Info_UClass_UWorldMetricInterface.InnerSingleton,
               StaticRegisterNativesUWorldMetricInterface,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldMetricInterface>,
               InternalVTableHelperCtorCaller<UWorldMetricInterface>,local_res8,UObject::StaticClass
               ,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricInterface.InnerSingleton;
}

// Initialize @ 14f1372c0

void __thiscall UWorldMetricInterface::Initialize(UWorldMetricInterface *this)

{
  return;
}

// StaticRegisterNativesUWorldMetricInterface @ 14f139510

void __cdecl UWorldMetricInterface::StaticRegisterNativesUWorldMetricInterface(void)

{
  return;
}

// Update @ 14f1399e0

void __thiscall UWorldMetricInterface::Update(UWorldMetricInterface *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Public\\WorldMetricInterface.h"
             ,0x37,L"Pure virtual not implemented (%s)");
  return;
}

