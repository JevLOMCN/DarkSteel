// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 13

// ~FComponentCacheAdapter @ 14dae89c0

void __thiscall Chaos::FComponentCacheAdapter::~FComponentCacheAdapter(FComponentCacheAdapter *this)

{
  return;
}

// BuildEventsSolver @ 14daece30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPhysicsSolverEvents * __thiscall
Chaos::FComponentCacheAdapter::BuildEventsSolver
          (FComponentCacheAdapter *this,UPrimitiveComponent *param_1)

{
  return (FPhysicsSolverEvents *)0x0;
}

// Finalize @ 14daf5000

void __thiscall Chaos::FComponentCacheAdapter::Finalize(FComponentCacheAdapter *this)

{
  return;
}

// FinalizeComponent @ 14daf5010

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
Chaos::FComponentCacheAdapter::FinalizeComponent
          (FComponentCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2)

{
  return;
}

// Initialize @ 14daf9980

void __thiscall Chaos::FComponentCacheAdapter::Initialize(FComponentCacheAdapter *this)

{
  return;
}

// InitializeForLoad @ 14daf9990

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
Chaos::FComponentCacheAdapter::InitializeForLoad
          (FComponentCacheAdapter *this,UPrimitiveComponent *param_1,FObservedComponent *param_2)

{
  return;
}

// InitializeForPlayback @ 14daf99a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
Chaos::FComponentCacheAdapter::InitializeForPlayback
          (FComponentCacheAdapter *this,UPrimitiveComponent *param_1,FObservedComponent *param_2,
          float param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014daf99aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x68))(this,param_1,param_2->Cache);
  return (bool)uVar1;
}

// InitializeForPlayback @ 14daf99c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
Chaos::FComponentCacheAdapter::InitializeForPlayback
          (FComponentCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,
          float param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\Adapters\\CacheAdapter.h"
                     ,0x9b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// InitializeForRecord @ 14dafa180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
Chaos::FComponentCacheAdapter::InitializeForRecord
          (FComponentCacheAdapter *this,UPrimitiveComponent *param_1,FObservedComponent *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014dafa18a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x58))(this,param_1,param_2->Cache);
  return (bool)uVar1;
}

// InitializeForRecord @ 14dafa1a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
Chaos::FComponentCacheAdapter::InitializeForRecord
          (FComponentCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\Adapters\\CacheAdapter.h"
                     ,0x92,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// SupportsPlayWhileRecording @ 14db05540

bool __thiscall
Chaos::FComponentCacheAdapter::SupportsPlayWhileRecording(FComponentCacheAdapter *this)

{
  return false;
}

// SupportsRestartSimulation @ 14db05550

bool __thiscall
Chaos::FComponentCacheAdapter::SupportsRestartSimulation(FComponentCacheAdapter *this)

{
  return false;
}

// WaitForSolverTasks @ 14db07f50

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
Chaos::FComponentCacheAdapter::WaitForSolverTasks
          (FComponentCacheAdapter *this,UPrimitiveComponent *param_1)

{
  return;
}

