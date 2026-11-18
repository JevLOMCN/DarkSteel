// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 17

// StaticClass @ 14429f6c0

UClass * __cdecl UNetObjectPrioritizer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectPrioritizer",
               &Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton,
               StaticRegisterNativesUNetObjectPrioritizer,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<UNetObjectPrioritizer>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton;
}

// UNetObjectPrioritizer @ 1442af100

UNetObjectPrioritizer * __thiscall
UNetObjectPrioritizer::UNetObjectPrioritizer(UNetObjectPrioritizer *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UNetObjectPrioritizer__6B_;
  return this;
}

// UNetObjectPrioritizer @ 1442af130

UNetObjectPrioritizer * __thiscall
UNetObjectPrioritizer::UNetObjectPrioritizer(UNetObjectPrioritizer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNetObjectPrioritizer__6B_;
  return this;
}

// ~UNetObjectPrioritizer @ 1442b0ce0

void __thiscall UNetObjectPrioritizer::~UNetObjectPrioritizer(UNetObjectPrioritizer *this)

{
  *(undefined ***)this = &___7UNetObjectPrioritizer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddConnection @ 1442b5390

void __thiscall UNetObjectPrioritizer::AddConnection(UNetObjectPrioritizer *this,uint param_1)

{
  return;
}

// AddObject @ 1442b5760

bool __thiscall
UNetObjectPrioritizer::AddObject
          (UNetObjectPrioritizer *this,uint param_1,FNetObjectPrioritizerAddObjectParams *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\Prioritization\\NetObjectPrioritizer.h"
             ,0xb2,L"Pure virtual not implemented (%s)");
  return false;
}

// Deinit @ 1442bb460

void __thiscall UNetObjectPrioritizer::Deinit(UNetObjectPrioritizer *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\Prioritization\\NetObjectPrioritizer.h"
             ,0xa6,L"Pure virtual not implemented (%s)");
  return;
}

// GetPrivateStaticClass @ 1442c3440

UClass * __cdecl UNetObjectPrioritizer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectPrioritizer",
               &Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton,
               StaticRegisterNativesUNetObjectPrioritizer,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<UNetObjectPrioritizer>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton;
}

// Init @ 1442c4940

void __thiscall
UNetObjectPrioritizer::Init(UNetObjectPrioritizer *this,FNetObjectPrioritizerInitParams *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\Prioritization\\NetObjectPrioritizer.h"
             ,0xa3,L"Pure virtual not implemented (%s)");
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 1442c8a50

void __thiscall
UNetObjectPrioritizer::OnMaxInternalNetRefIndexIncreased(UNetObjectPrioritizer *this,uint param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\Prioritization\\NetObjectPrioritizer.h"
             ,0xa9,L"Pure virtual not implemented (%s)");
  return;
}

// PostPrioritize @ 1442ca350

void __thiscall
UNetObjectPrioritizer::PostPrioritize
          (UNetObjectPrioritizer *this,FNetObjectPostPrioritizationParams *param_1)

{
  return;
}

// PrePrioritize @ 1442ca820

void __thiscall
UNetObjectPrioritizer::PrePrioritize
          (UNetObjectPrioritizer *this,FNetObjectPrePrioritizationParams *param_1)

{
  return;
}

// Prioritize @ 1442d1e00

void __thiscall
UNetObjectPrioritizer::Prioritize
          (UNetObjectPrioritizer *this,FNetObjectPrioritizationParams *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\Prioritization\\NetObjectPrioritizer.h"
             ,0xc5,L"Pure virtual not implemented (%s)");
  return;
}

// RemoveConnection @ 1442deca0

void __thiscall UNetObjectPrioritizer::RemoveConnection(UNetObjectPrioritizer *this,uint param_1)

{
  return;
}

// RemoveObject @ 1442def90

void __thiscall
UNetObjectPrioritizer::RemoveObject
          (UNetObjectPrioritizer *this,uint param_1,FNetObjectPrioritizationInfo *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\Prioritization\\NetObjectPrioritizer.h"
             ,0xb5,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUNetObjectPrioritizer @ 1442e6300

void __cdecl UNetObjectPrioritizer::StaticRegisterNativesUNetObjectPrioritizer(void)

{
  return;
}

// UpdateObjects @ 1442eac50

void __thiscall
UNetObjectPrioritizer::UpdateObjects
          (UNetObjectPrioritizer *this,FNetObjectPrioritizerUpdateParams *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\Prioritization\\NetObjectPrioritizer.h"
             ,0xb8,L"Pure virtual not implemented (%s)");
  return;
}

