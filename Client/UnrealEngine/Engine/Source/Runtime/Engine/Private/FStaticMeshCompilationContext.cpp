// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FStaticMeshCompilationContext @ 148711de0

FStaticMeshCompilationContext * __thiscall
FStaticMeshCompilationContext::FStaticMeshCompilationContext(FStaticMeshCompilationContext *this)

{
  bool bVar1;
  
  this->bShouldComputeExtendedBounds = false;
  this->bIsEditorLoadingPackage = false;
  (this->CancellationToken).bCanceled = (atomic<bool>)0x0;
  bVar1 = UE::GetIsEditorLoadingPackage();
  this->bIsEditorLoadingPackage = bVar1;
  return this;
}

