// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EventLoop
// Functions: 1

// DestroyObject @ 1431414a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::EventLoop::FIOManagerBSDSocketSelectImpl,1>::DestroyObject
          (TIntrusiveReferenceController<UE::EventLoop::FIOManagerBSDSocketSelectImpl,1> *this)

{
  UE::EventLoop::FIOManagerBSDSocketSelectImpl::~FIOManagerBSDSocketSelectImpl
            ((FIOManagerBSDSocketSelectImpl *)&this->ObjectStorage);
  return;
}

