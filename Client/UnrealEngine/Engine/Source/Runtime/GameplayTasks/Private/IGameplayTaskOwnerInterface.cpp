// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 9

// ~IGameplayTaskOwnerInterface @ 146cee050

void __thiscall
IGameplayTaskOwnerInterface::~IGameplayTaskOwnerInterface(IGameplayTaskOwnerInterface *this)

{
  *this = (IGameplayTaskOwnerInterface)&___7IGameplayTaskOwnerInterface__6B_;
  return;
}

// GetGameplayTaskAvatar @ 146cf26b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
IGameplayTaskOwnerInterface::GetGameplayTaskAvatar
          (IGameplayTaskOwnerInterface *this,UGameplayTask *param_1)

{
  AActor *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146cf26b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = (AActor *)(**(code **)((longlong)*this + 0x18))();
  return pAVar1;
}

// GetGameplayTaskDefaultPriority @ 146cf27f0

uchar __thiscall
IGameplayTaskOwnerInterface::GetGameplayTaskDefaultPriority(IGameplayTaskOwnerInterface *this)

{
  return '\x7f';
}

// GetGameplayTaskOwner @ 146cf2810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
IGameplayTaskOwnerInterface::GetGameplayTaskOwner
          (IGameplayTaskOwnerInterface *this,UGameplayTask *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Classes\\GameplayTaskOwnerInterface.h"
             ,0x1d,L"Pure virtual not implemented (%s)");
  return (AActor *)0x0;
}

// GetGameplayTasksComponent @ 146cf2970

UGameplayTasksComponent * __thiscall
IGameplayTaskOwnerInterface::GetGameplayTasksComponent
          (IGameplayTaskOwnerInterface *this,UGameplayTask *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Classes\\GameplayTaskOwnerInterface.h"
             ,0x1a,L"Pure virtual not implemented (%s)");
  return (UGameplayTasksComponent *)0x0;
}

// OnGameplayTaskActivated @ 146cf4780

void __thiscall
IGameplayTaskOwnerInterface::OnGameplayTaskActivated
          (IGameplayTaskOwnerInterface *this,UGameplayTask *param_1)

{
  return;
}

// OnGameplayTaskDeactivated @ 146cf4c00

void __thiscall
IGameplayTaskOwnerInterface::OnGameplayTaskDeactivated
          (IGameplayTaskOwnerInterface *this,UGameplayTask *param_1)

{
  return;
}

// OnGameplayTaskInitialized @ 146cf53a0

void __thiscall
IGameplayTaskOwnerInterface::OnGameplayTaskInitialized
          (IGameplayTaskOwnerInterface *this,UGameplayTask *param_1)

{
  return;
}

// _getUObject @ 146cf9110

UObject * __thiscall IGameplayTaskOwnerInterface::_getUObject(IGameplayTaskOwnerInterface *this)

{
  return (UObject *)0x0;
}

