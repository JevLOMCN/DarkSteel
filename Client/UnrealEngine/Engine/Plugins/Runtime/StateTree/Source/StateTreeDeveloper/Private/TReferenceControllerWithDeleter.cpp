// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 1

// DestroyObject @ 14d725b60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::StateTreeDebugger::FFrameEventTreeElement,SharedPointerInternals::DefaultDeleter<UE::StateTreeDebugger::FFrameEventTreeElement>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::StateTreeDebugger::FFrameEventTreeElement,SharedPointerInternals::DefaultDeleter<UE::StateTreeDebugger::FFrameEventTreeElement>,1>
                *this)

{
  if (this->Object != (FFrameEventTreeElement *)0x0) {
    UE::StateTreeDebugger::FFrameEventTreeElement::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

