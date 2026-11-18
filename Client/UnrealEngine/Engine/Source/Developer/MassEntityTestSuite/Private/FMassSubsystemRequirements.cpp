// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 7

// AddSubsystemRequirement<UMassTestEngineSubsystem> @ 1470d5670

FMassSubsystemRequirements * __thiscall
FMassSubsystemRequirements::AddSubsystemRequirement<UMassTestEngineSubsystem>
          (FMassSubsystemRequirements *this,EMassFragmentAccess param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMassSubsystemRequirements *pFVar4;
  
  if (((param_1 == None) || (param_1 == MAX)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessMode != EMassFragmentAccess::None && AccessMode != EMassFragmentAccess::MAX"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x50,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FMassSubsystemRequirements *)(*pcVar1)();
    return pFVar4;
  }
  if (param_1 == ReadOnly) {
    iVar3 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
            GetTypeIndex<UMassTestEngineSubsystem>();
    pFVar4 = this;
  }
  else {
    if (param_1 != ReadWrite) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x61,L"");
      if (!bVar2) {
        return this;
      }
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMassSubsystemRequirements *)(*pcVar1)();
      return pFVar4;
    }
    iVar3 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
            GetTypeIndex<UMassTestEngineSubsystem>();
    pFVar4 = (FMassSubsystemRequirements *)&this->RequiredMutableSubsystems;
  }
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)pFVar4,iVar3);
  return this;
}

// AddSubsystemRequirement<UMassTestGameInstanceSubsystem> @ 1470d5720

FMassSubsystemRequirements * __thiscall
FMassSubsystemRequirements::AddSubsystemRequirement<UMassTestGameInstanceSubsystem>
          (FMassSubsystemRequirements *this,EMassFragmentAccess param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMassSubsystemRequirements *pFVar4;
  
  if (((param_1 == None) || (param_1 == MAX)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessMode != EMassFragmentAccess::None && AccessMode != EMassFragmentAccess::MAX"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x50,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FMassSubsystemRequirements *)(*pcVar1)();
    return pFVar4;
  }
  if (param_1 == ReadOnly) {
    iVar3 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
            GetTypeIndex<UMassTestGameInstanceSubsystem>();
    pFVar4 = this;
  }
  else {
    if (param_1 != ReadWrite) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x61,L"");
      if (!bVar2) {
        return this;
      }
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMassSubsystemRequirements *)(*pcVar1)();
      return pFVar4;
    }
    iVar3 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
            GetTypeIndex<UMassTestGameInstanceSubsystem>();
    pFVar4 = (FMassSubsystemRequirements *)&this->RequiredMutableSubsystems;
  }
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)pFVar4,iVar3);
  return this;
}

// AddSubsystemRequirement<UMassTestLocalPlayerSubsystem> @ 1470d57d0

FMassSubsystemRequirements * __thiscall
FMassSubsystemRequirements::AddSubsystemRequirement<UMassTestLocalPlayerSubsystem>
          (FMassSubsystemRequirements *this,EMassFragmentAccess param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMassSubsystemRequirements *pFVar4;
  
  if (((param_1 == None) || (param_1 == MAX)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessMode != EMassFragmentAccess::None && AccessMode != EMassFragmentAccess::MAX"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x50,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FMassSubsystemRequirements *)(*pcVar1)();
    return pFVar4;
  }
  if (param_1 == ReadOnly) {
    iVar3 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
            GetTypeIndex<UMassTestLocalPlayerSubsystem>();
    pFVar4 = this;
  }
  else {
    if (param_1 != ReadWrite) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x61,L"");
      if (!bVar2) {
        return this;
      }
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMassSubsystemRequirements *)(*pcVar1)();
      return pFVar4;
    }
    iVar3 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
            GetTypeIndex<UMassTestLocalPlayerSubsystem>();
    pFVar4 = (FMassSubsystemRequirements *)&this->RequiredMutableSubsystems;
  }
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)pFVar4,iVar3);
  return this;
}

// AddSubsystemRequirement<UMassTestParallelSubsystem> @ 1470d5880

FMassSubsystemRequirements * __thiscall
FMassSubsystemRequirements::AddSubsystemRequirement<UMassTestParallelSubsystem>
          (FMassSubsystemRequirements *this,EMassFragmentAccess param_1)

{
  code *pcVar1;
  bool bVar2;
  FMassSubsystemRequirements *pFVar3;
  
  if ((param_1 == None) || (param_1 == MAX)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessMode != EMassFragmentAccess::None && AccessMode != EMassFragmentAccess::MAX"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                       ,0x50,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMassSubsystemRequirements *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_1 == ReadOnly) {
    TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
    Add<UMassTestParallelSubsystem>(&this->RequiredConstSubsystems);
  }
  else {
    if (param_1 == ReadWrite) {
      TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
      Add<UMassTestParallelSubsystem>(&this->RequiredMutableSubsystems);
      return this;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                       ,0x61,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMassSubsystemRequirements *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// AddSubsystemRequirement<UMassTestWorldSubsystem> @ 1470d5940

FMassSubsystemRequirements * __thiscall
FMassSubsystemRequirements::AddSubsystemRequirement<UMassTestWorldSubsystem>
          (FMassSubsystemRequirements *this,EMassFragmentAccess param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMassSubsystemRequirements *pFVar4;
  
  if (((param_1 == None) || (param_1 == MAX)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessMode != EMassFragmentAccess::None && AccessMode != EMassFragmentAccess::MAX"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x50,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FMassSubsystemRequirements *)(*pcVar1)();
    return pFVar4;
  }
  if (param_1 == ReadOnly) {
    iVar3 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
            GetTypeIndex<UMassTestWorldSubsystem>();
    pFVar4 = this;
  }
  else {
    if (param_1 != ReadWrite) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x61,L"");
      if (!bVar2) {
        return this;
      }
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMassSubsystemRequirements *)(*pcVar1)();
      return pFVar4;
    }
    iVar3 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
            GetTypeIndex<UMassTestWorldSubsystem>();
    pFVar4 = (FMassSubsystemRequirements *)&this->RequiredMutableSubsystems;
  }
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)pFVar4,iVar3);
  return this;
}

// GetRequiredConstSubsystems @ 147121b90

TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> * __thiscall
FMassSubsystemRequirements::GetRequiredConstSubsystems(FMassSubsystemRequirements *this)

{
  return &this->RequiredConstSubsystems;
}

// GetRequiredMutableSubsystems @ 147121ba0

TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> * __thiscall
FMassSubsystemRequirements::GetRequiredMutableSubsystems(FMassSubsystemRequirements *this)

{
  return &this->RequiredMutableSubsystems;
}

