// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineReflexBlueprint
// Functions: 1

// TryInitLibrary @ 14de8d9f0

bool __cdecl FStreamlineLibraryImplementationBase::TryInitLibrary(void)

{
  bool bVar1;
  char cVar2;
  EStreamlineSupport EVar3;
  EStreamlineFeatureSupport EVar4;
  FStreamlineRHI *pFVar5;
  
  if (!bIsLibraryInitialized) {
    bVar1 = IsStreamlineSupported();
    if (bVar1) {
      pFVar5 = GetPlatformStreamlineRHI();
      cVar2 = (**(code **)(pFVar5->_padding_ + 0x50))(pFVar5);
      if (cVar2 == '\0') {
        bIsLibraryInitialized = true;
        FeatureSupport = NotSupportedByRHI;
        return true;
      }
      EVar4 = QueryStreamlineReflexSupport();
      FeatureSupport = ToUStreamlineFeatureSupport(EVar4);
      bIsLibraryInitialized = true;
      return true;
    }
    EVar3 = GetPlatformStreamlineSupport();
    bIsLibraryInitialized = true;
    FeatureSupport = NotSupported;
    if (EVar3 == NotSupportedIncompatibleRHI) {
      FeatureSupport = NotSupportedByRHI;
    }
  }
  return true;
}

