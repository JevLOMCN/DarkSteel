// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 20

// ~UNavigationSystemBase @ 146d78f70

void __thiscall UNavigationSystemBase::~UNavigationSystemBase(UNavigationSystemBase *this)

{
  *(undefined ***)this = &___7UNavigationSystemBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddNavigationDataChunk @ 146d82800

void __thiscall
UNavigationSystemBase::AddNavigationDataChunk
          (UNavigationSystemBase *this,ANavigationDataChunkActor *param_1)

{
  return;
}

// AppendConfig @ 146d841d0

void __thiscall
UNavigationSystemBase::AppendConfig(UNavigationSystemBase *this,UNavigationSystemConfig *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\NavigationSystemBase.h"
             ,0xff,L"Pure virtual not implemented (%s)");
  return;
}

// ApplyWorldOffset @ 146d84bf0

void __thiscall
UNavigationSystemBase::ApplyWorldOffset
          (UNavigationSystemBase *this,TVector<double> *param_1,bool param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\NavigationSystemBase.h"
             ,0x108,L"Pure virtual not implemented (%s)");
  return;
}

// CleanUp @ 146d86df0

void __thiscall UNavigationSystemBase::CleanUp(UNavigationSystemBase *this,ECleanupMode param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\NavigationSystemBase.h"
             ,0xfc,L"Pure virtual not implemented (%s)");
  return;
}

// ComputeNavDataBounds @ 146d87e60

TBox<double> * __thiscall
UNavigationSystemBase::ComputeNavDataBounds
          (UNavigationSystemBase *this,TBox<double> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\NavigationSystemBase.h"
             ,0x118,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// Configure @ 146d884c0

void __thiscall
UNavigationSystemBase::Configure(UNavigationSystemBase *this,UNavigationSystemConfig *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\NavigationSystemBase.h"
             ,0xfd,L"Pure virtual not implemented (%s)");
  return;
}

// ContainsNavData @ 146d88d00

bool __thiscall
UNavigationSystemBase::ContainsNavData(UNavigationSystemBase *this,TBox<double> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\NavigationSystemBase.h"
             ,0x117,L"Pure virtual not implemented (%s)");
  return false;
}

// FillNavigationDataChunkActor @ 146d95130

void __thiscall
UNavigationSystemBase::FillNavigationDataChunkActor
          (UNavigationSystemBase *this,TBox<double> *param_1,ANavigationDataChunkActor *param_2,
          TBox<double> *param_3)

{
  return;
}

// GetMainNavData @ 146d9c1b0

INavigationDataInterface * __thiscall
UNavigationSystemBase::GetMainNavData(UNavigationSystemBase *this)

{
  return (INavigationDataInterface *)0x0;
}

// GetNavigableWorldBounds @ 146d9d340

TBox<double> * __thiscall
UNavigationSystemBase::GetNavigableWorldBounds
          (UNavigationSystemBase *this,TBox<double> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\NavigationSystemBase.h"
             ,0x115,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// InitializeForWorld @ 146da40a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNavigationSystemBase::InitializeForWorld
          (UNavigationSystemBase *this,UWorld *param_1,FNavigationSystemRunMode param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\NavigationSystemBase.h"
             ,0x10a,L"Pure virtual not implemented (%s)");
  return;
}

// IsNavigationBuilt @ 146da4bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNavigationSystemBase::IsNavigationBuilt(UNavigationSystemBase *this,AWorldSettings *param_1)

{
  return false;
}

// IsWorldInitDone @ 146da5a50

bool __thiscall UNavigationSystemBase::IsWorldInitDone(UNavigationSystemBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\NavigationSystemBase.h"
             ,0x11e,L"Pure virtual not implemented (%s)");
  return false;
}

// OnInitializeActors @ 146da7f50

void __thiscall UNavigationSystemBase::OnInitializeActors(UNavigationSystemBase *this)

{
  return;
}

// RemoveNavigationDataChunk @ 146db56f0

void __thiscall
UNavigationSystemBase::RemoveNavigationDataChunk
          (UNavigationSystemBase *this,ANavigationDataChunkActor *param_1)

{
  return;
}

// SetBuildBounds @ 146db8820

void __thiscall
UNavigationSystemBase::SetBuildBounds(UNavigationSystemBase *this,TBox<double> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\NavigationSystemBase.h"
             ,0x113,L"Pure virtual not implemented (%s)");
  return;
}

// ShouldCreateNavigationSystemInstance @ 146db9e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNavigationSystemBase::ShouldCreateNavigationSystemInstance
          (UNavigationSystemBase *this,UWorld *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\NavigationSystemBase.h"
             ,0x125,L"Pure virtual not implemented (%s)");
  return true;
}

// StaticClass @ 146dba880

UClass * __cdecl UNavigationSystemBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationSystemBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationSystemBase",
               &Z_Registration_Info_UClass_UNavigationSystemBase.InnerSingleton,
               StaticRegisterNativesUNavigationSystemBase,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UNavigationSystemBase>,
               InternalVTableHelperCtorCaller<UNavigationSystemBase>,aFStackX_8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationSystemBase.InnerSingleton;
}

// Tick @ 146dbb7c0

void __thiscall UNavigationSystemBase::Tick(UNavigationSystemBase *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\NavigationSystemBase.h"
             ,0xfb,L"Pure virtual not implemented (%s)");
  return;
}

