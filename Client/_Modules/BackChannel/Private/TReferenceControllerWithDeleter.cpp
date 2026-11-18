// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 3

// DestroyObject @ 14e7f58b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBackChannelConnection,SharedPointerInternals::DefaultDeleter<FBackChannelConnection>,1>
::DestroyObject(TReferenceControllerWithDeleter<FBackChannelConnection,SharedPointerInternals::DefaultDeleter<FBackChannelConnection>,1>
                *this)

{
  FBackChannelConnection *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FBackChannelConnection *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e7f58c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x68))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14e7f58d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBackChannelOSCBundle,SharedPointerInternals::DefaultDeleter<FBackChannelOSCBundle>,1>
::DestroyObject(TReferenceControllerWithDeleter<FBackChannelOSCBundle,SharedPointerInternals::DefaultDeleter<FBackChannelOSCBundle>,1>
                *this)

{
  FBackChannelOSCBundle *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FBackChannelOSCBundle *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e7f58e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14e7f58f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBackChannelOSCMessage,SharedPointerInternals::DefaultDeleter<FBackChannelOSCMessage>,1>
::DestroyObject(TReferenceControllerWithDeleter<FBackChannelOSCMessage,SharedPointerInternals::DefaultDeleter<FBackChannelOSCMessage>,1>
                *this)

{
  FBackChannelOSCMessage *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FBackChannelOSCMessage *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e7f5901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

