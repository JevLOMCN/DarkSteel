// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 10

// StaticClass @ 146d60ff0

UClass * __cdecl UCrowdManagerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCrowdManagerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"CrowdManagerBase",
               &Z_Registration_Info_UClass_UCrowdManagerBase.InnerSingleton,
               StaticRegisterNativesUCrowdManagerBase,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCrowdManagerBase>,
               InternalVTableHelperCtorCaller<UCrowdManagerBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCrowdManagerBase.InnerSingleton;
}

// UCrowdManagerBase @ 146d75860

UCrowdManagerBase * __thiscall
UCrowdManagerBase::UCrowdManagerBase(UCrowdManagerBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCrowdManagerBase__6B_;
  return this;
}

// UCrowdManagerBase @ 146d75890

UCrowdManagerBase * __thiscall
UCrowdManagerBase::UCrowdManagerBase(UCrowdManagerBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCrowdManagerBase__6B_;
  return this;
}

// ~UCrowdManagerBase @ 146d78b90

void __thiscall UCrowdManagerBase::~UCrowdManagerBase(UCrowdManagerBase *this)

{
  *(undefined ***)this = &___7UCrowdManagerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CleanUp @ 146d86dc0

void __thiscall UCrowdManagerBase::CleanUp(UCrowdManagerBase *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\CrowdManagerBase.h"
             ,0x19,L"Pure virtual not implemented (%s)");
  return;
}

// GetPrivateStaticClass @ 146d9ffc0

UClass * __cdecl UCrowdManagerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCrowdManagerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"CrowdManagerBase",
               &Z_Registration_Info_UClass_UCrowdManagerBase.InnerSingleton,
               StaticRegisterNativesUCrowdManagerBase,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCrowdManagerBase>,
               InternalVTableHelperCtorCaller<UCrowdManagerBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCrowdManagerBase.InnerSingleton;
}

// OnNavDataRegistered @ 146da9080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UCrowdManagerBase::OnNavDataRegistered(UCrowdManagerBase *this,ANavigationData *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\CrowdManagerBase.h"
             ,0x14,L"Pure virtual not implemented (%s)");
  return;
}

// OnNavDataUnregistered @ 146da90b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UCrowdManagerBase::OnNavDataUnregistered(UCrowdManagerBase *this,ANavigationData *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\CrowdManagerBase.h"
             ,0x17,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUCrowdManagerBase @ 146dba900

void __cdecl UCrowdManagerBase::StaticRegisterNativesUCrowdManagerBase(void)

{
  return;
}

// Tick @ 146dbb790

void __thiscall UCrowdManagerBase::Tick(UCrowdManagerBase *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\CrowdManagerBase.h"
             ,0x11,L"Pure virtual not implemented (%s)");
  return;
}

