// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 1

// GetStaticMesh @ 146d224a0

TObjectPtr<UStaticMesh> __thiscall UStaticMeshComponent::GetStaticMesh(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  TObjectPtr<UStaticMesh>_u_0 in_RDX;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TObjectPtr<UStaticMesh>)in_RDX;
}

