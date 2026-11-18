// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// ~IPathFollowingAgentInterface @ 146f967f0

void __thiscall
IPathFollowingAgentInterface::~IPathFollowingAgentInterface(IPathFollowingAgentInterface *this)

{
  *this = (IPathFollowingAgentInterface)&___7IPathFollowingAgentInterface__6B_;
  return;
}

// IsFollowingNavLink @ 146fb98e0

bool __thiscall IPathFollowingAgentInterface::IsFollowingNavLink(IPathFollowingAgentInterface *this)

{
  return false;
}

// OnLanded @ 146fbcc60

void __thiscall IPathFollowingAgentInterface::OnLanded(IPathFollowingAgentInterface *this)

{
  return;
}

// OnMoveBlockedBy @ 146fbeb80

void __thiscall
IPathFollowingAgentInterface::OnMoveBlockedBy
          (IPathFollowingAgentInterface *this,FHitResult *param_1)

{
  return;
}

// OnStartedFalling @ 146fc1e70

void __thiscall IPathFollowingAgentInterface::OnStartedFalling(IPathFollowingAgentInterface *this)

{
  return;
}

// OnUnableToMove @ 146fc1e90

void __thiscall
IPathFollowingAgentInterface::OnUnableToMove(IPathFollowingAgentInterface *this,UObject *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\Navigation\\PathFollowingAgentInterface.h"
             ,0x19,L"Pure virtual not implemented (%s)");
  return;
}

// _getUObject @ 146fe4080

UObject * __thiscall IPathFollowingAgentInterface::_getUObject(IPathFollowingAgentInterface *this)

{
  return (UObject *)0x0;
}

