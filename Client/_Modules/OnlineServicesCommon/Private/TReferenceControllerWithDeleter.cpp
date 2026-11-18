// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// DestroyObject @ 14eeb07e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::Online::FUserPresence,SharedPointerInternals::DefaultDeleter<UE::Online::FUserPresence>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::Online::FUserPresence,SharedPointerInternals::DefaultDeleter<UE::Online::FUserPresence>,1>
                *this)

{
  FUserPresence *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FUserPresence *)0x0) {
    UE::Online::FUserPresence::~FUserPresence(this_00);
    ::operator_delete(this_00,0x90);
    return;
  }
  return;
}

