// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 12

// StaticClass @ 14ababaf0

UClass * __cdecl UCustomizableInstanceLODManagementBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableInstanceLODManagementBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableInstanceLODManagementBase",
               &Z_Registration_Info_UClass_UCustomizableInstanceLODManagementBase.InnerSingleton,
               StaticRegisterNativesUCustomizableInstanceLODManagementBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCustomizableInstanceLODManagementBase>,
               InternalVTableHelperCtorCaller<UCustomizableInstanceLODManagementBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableInstanceLODManagementBase.InnerSingleton;
}

// UCustomizableInstanceLODManagementBase @ 14abbd3e0

UCustomizableInstanceLODManagementBase * __thiscall
UCustomizableInstanceLODManagementBase::UCustomizableInstanceLODManagementBase
          (UCustomizableInstanceLODManagementBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCustomizableInstanceLODManagementBase__6B_;
  return this;
}

// ~UCustomizableInstanceLODManagementBase @ 14abbf6a0

void __thiscall
UCustomizableInstanceLODManagementBase::~UCustomizableInstanceLODManagementBase
          (UCustomizableInstanceLODManagementBase *this)

{
  *(undefined ***)this = &___7UCustomizableInstanceLODManagementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetNumGeneratedInstancesLimitFullLODs @ 14abdc820

int __thiscall
UCustomizableInstanceLODManagementBase::GetNumGeneratedInstancesLimitFullLODs
          (UCustomizableInstanceLODManagementBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Public\\MuCO\\CustomizableInstanceLODManagement.h"
             ,0x18,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetNumGeneratedInstancesLimitLOD1 @ 14abdc8b0

int __thiscall
UCustomizableInstanceLODManagementBase::GetNumGeneratedInstancesLimitLOD1
          (UCustomizableInstanceLODManagementBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Public\\MuCO\\CustomizableInstanceLODManagement.h"
             ,0x19,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetNumGeneratedInstancesLimitLOD2 @ 14abdc940

int __thiscall
UCustomizableInstanceLODManagementBase::GetNumGeneratedInstancesLimitLOD2
          (UCustomizableInstanceLODManagementBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Public\\MuCO\\CustomizableInstanceLODManagement.h"
             ,0x1a,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetOnlyUpdateCloseCustomizableObjectsDist @ 14abdc9b0

float __thiscall
UCustomizableInstanceLODManagementBase::GetOnlyUpdateCloseCustomizableObjectsDist
          (UCustomizableInstanceLODManagementBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Public\\MuCO\\CustomizableInstanceLODManagement.h"
             ,0x1b,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetPrivateStaticClass @ 14abdfc00

UClass * __cdecl UCustomizableInstanceLODManagementBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableInstanceLODManagementBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableInstanceLODManagementBase",
               &Z_Registration_Info_UClass_UCustomizableInstanceLODManagementBase.InnerSingleton,
               StaticRegisterNativesUCustomizableInstanceLODManagementBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCustomizableInstanceLODManagementBase>,
               InternalVTableHelperCtorCaller<UCustomizableInstanceLODManagementBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableInstanceLODManagementBase.InnerSingleton;
}

// IsOnlyGenerateRequestedLODLevelsEnabled @ 14abe3550

bool __thiscall
UCustomizableInstanceLODManagementBase::IsOnlyGenerateRequestedLODLevelsEnabled
          (UCustomizableInstanceLODManagementBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Public\\MuCO\\CustomizableInstanceLODManagement.h"
             ,0x1d,L"Pure virtual not implemented (%s)");
  return false;
}

// IsOnlyUpdateCloseCustomizableObjectsEnabled @ 14abe35e0

bool __thiscall
UCustomizableInstanceLODManagementBase::IsOnlyUpdateCloseCustomizableObjectsEnabled
          (UCustomizableInstanceLODManagementBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Public\\MuCO\\CustomizableInstanceLODManagement.h"
             ,0x1c,L"Pure virtual not implemented (%s)");
  return false;
}

// StaticRegisterNativesUCustomizableInstanceLODManagementBase @ 14abf1fe0

void __cdecl
UCustomizableInstanceLODManagementBase::StaticRegisterNativesUCustomizableInstanceLODManagementBase
          (void)

{
  return;
}

// UpdateInstanceDistsAndLODs @ 14abf5a30

void __thiscall
UCustomizableInstanceLODManagementBase::UpdateInstanceDistsAndLODs
          (UCustomizableInstanceLODManagementBase *this,
          TMap<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
          *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Public\\MuCO\\CustomizableInstanceLODManagement.h"
             ,0x17,L"Pure virtual not implemented (%s)");
  return;
}

