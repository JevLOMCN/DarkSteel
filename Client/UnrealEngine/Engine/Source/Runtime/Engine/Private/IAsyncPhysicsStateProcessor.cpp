// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// AllowsAsyncPhysicsStateCreation @ 1478068c0

bool __thiscall
IAsyncPhysicsStateProcessor::AllowsAsyncPhysicsStateCreation(IAsyncPhysicsStateProcessor *this)

{
  return false;
}

// AllowsAsyncPhysicsStateDestruction @ 1478068d0

bool __thiscall
IAsyncPhysicsStateProcessor::AllowsAsyncPhysicsStateDestruction(IAsyncPhysicsStateProcessor *this)

{
  return false;
}

// GetAsyncPhysicsStateObject @ 147834cf0

UObject * __thiscall
IAsyncPhysicsStateProcessor::GetAsyncPhysicsStateObject(IAsyncPhysicsStateProcessor *this)

{
  return (UObject *)0x0;
}

// IsAsyncPhysicsStateCreated @ 147840130

bool __thiscall
IAsyncPhysicsStateProcessor::IsAsyncPhysicsStateCreated(IAsyncPhysicsStateProcessor *this)

{
  return false;
}

// OnAsyncCreatePhysicsState @ 147844910

bool __thiscall
IAsyncPhysicsStateProcessor::OnAsyncCreatePhysicsState
          (IAsyncPhysicsStateProcessor *this,FTimeout *param_1)

{
  return true;
}

// OnAsyncCreatePhysicsStateEnd_GameThread @ 1478449e0

void __thiscall
IAsyncPhysicsStateProcessor::OnAsyncCreatePhysicsStateEnd_GameThread
          (IAsyncPhysicsStateProcessor *this)

{
  return;
}

// OnAsyncDestroyPhysicsState @ 147844b80

bool __thiscall
IAsyncPhysicsStateProcessor::OnAsyncDestroyPhysicsState
          (IAsyncPhysicsStateProcessor *this,FTimeout *param_1)

{
  return true;
}

// OnAsyncDestroyPhysicsStateBegin_GameThread @ 147844b90

void __thiscall
IAsyncPhysicsStateProcessor::OnAsyncDestroyPhysicsStateBegin_GameThread
          (IAsyncPhysicsStateProcessor *this)

{
  return;
}

// OnAsyncDestroyPhysicsStateEnd_GameThread @ 147844bf0

void __thiscall
IAsyncPhysicsStateProcessor::OnAsyncDestroyPhysicsStateEnd_GameThread
          (IAsyncPhysicsStateProcessor *this)

{
  return;
}

