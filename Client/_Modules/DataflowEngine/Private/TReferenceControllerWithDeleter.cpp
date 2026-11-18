// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// DestroyObject @ 1462d6d30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::Dataflow::FGraph,SharedPointerInternals::DefaultDeleter<UE::Dataflow::FGraph>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::Dataflow::FGraph,SharedPointerInternals::DefaultDeleter<UE::Dataflow::FGraph>,1>
                *this)

{
  FGraph *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGraph *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001462d6d41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

