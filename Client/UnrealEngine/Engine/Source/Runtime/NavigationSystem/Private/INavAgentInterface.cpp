// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 10

// ~INavAgentInterface @ 146dd9ff0

void __thiscall INavAgentInterface::~INavAgentInterface(INavAgentInterface *this)

{
  *this = (INavAgentInterface)&___7INavAgentInterface__6B_;
  return;
}

// GetMoveGoalOffset @ 146e07c80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
INavAgentInterface::GetMoveGoalOffset
          (INavAgentInterface *this,TVector<double> *__return_storage_ptr__,AActor *param_1)

{
  (**(code **)((longlong)*this + 0x28))();
  return __return_storage_ptr__;
}

// GetMoveGoalOffset @ 146e07ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
INavAgentInterface::GetMoveGoalOffset
          (INavAgentInterface *this,TVector<double> *__return_storage_ptr__,AActor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetMoveGoalReachTest @ 146e07ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
INavAgentInterface::GetMoveGoalReachTest
          (INavAgentInterface *this,AActor *param_1,TVector<double> *param_2,
          TVector<double> *param_3,float *param_4,float *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000146e07ce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x38))();
  return;
}

// GetMoveGoalReachTest @ 146e07cf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
INavAgentInterface::GetMoveGoalReachTest
          (INavAgentInterface *this,AActor *param_1,TVector<double> *param_2,
          TVector<double> *param_3,float *param_4,float *param_5)

{
  return;
}

// GetNavAgentLocation @ 146e07dc0

TVector<double> * __thiscall
INavAgentInterface::GetNavAgentLocation
          (INavAgentInterface *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\Navigation\\NavAgentInterface.h"
             ,0x21,L"Pure virtual not implemented (%s)");
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetPathFollowingAgent @ 146e0b2b0

IPathFollowingAgentInterface * __thiscall
INavAgentInterface::GetPathFollowingAgent(INavAgentInterface *this)

{
  return (IPathFollowingAgentInterface *)0x0;
}

// IsFollowingAPath @ 146e15880

bool __thiscall INavAgentInterface::IsFollowingAPath(INavAgentInterface *this)

{
  return false;
}

// ShouldPostponePathUpdates @ 146e29b20

bool __thiscall INavAgentInterface::ShouldPostponePathUpdates(INavAgentInterface *this)

{
  return false;
}

// _getUObject @ 146e2f9a0

UObject * __thiscall INavAgentInterface::_getUObject(INavAgentInterface *this)

{
  return (UObject *)0x0;
}

