// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// ~IHasCameraBuildStatus @ 14d544990

void __thiscall IHasCameraBuildStatus::~IHasCameraBuildStatus(IHasCameraBuildStatus *this)

{
  *this = (IHasCameraBuildStatus)&___7IHasCameraBuildStatus__6B_;
  return;
}

// DirtyBuildStatus @ 14d5528c0

void __thiscall IHasCameraBuildStatus::DirtyBuildStatus(IHasCameraBuildStatus *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Build\\CameraBuildStatus.h"
             ,0x2a,L"Pure virtual not implemented (%s)");
  return;
}

// GetBuildStatus @ 14d556320

ECameraBuildStatus __thiscall IHasCameraBuildStatus::GetBuildStatus(IHasCameraBuildStatus *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Build\\CameraBuildStatus.h"
             ,0x27,L"Pure virtual not implemented (%s)");
  return Dirty;
}

// _getUObject @ 14d56acb0

UObject * __thiscall IHasCameraBuildStatus::_getUObject(IHasCameraBuildStatus *this)

{
  return (UObject *)0x0;
}

