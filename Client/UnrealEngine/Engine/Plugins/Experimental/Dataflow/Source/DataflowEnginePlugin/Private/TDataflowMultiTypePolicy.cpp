// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEnginePlugin
// Functions: 1

// SupportsTypeStatic @ 14dab5980

bool __cdecl
TDataflowMultiTypePolicy<TObjectPtr<UDynamicMesh>,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
::SupportsTypeStatic(FName param_1)

{
  if ((param_1 != TDataflowSingleTypePolicy<TObjectPtr<UDynamicMesh>_>::TypeName) &&
     (param_1 !=
      TDataflowSingleTypePolicy<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>::
      TypeName)) {
    return false;
  }
  return true;
}

