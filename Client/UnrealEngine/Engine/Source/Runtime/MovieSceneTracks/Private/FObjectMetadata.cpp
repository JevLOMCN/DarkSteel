// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// FObjectMetadata @ 146616940

FObjectMetadata * __thiscall
UE::MovieScene::FObjectPropertyTraits::FObjectMetadata::FObjectMetadata
          (FObjectMetadata *this,FObjectMetadata *param_1)

{
  UClass *pUVar1;
  
  pUVar1 = (param_1->ObjectClass).field0_0x0.DebugPtr;
  (this->ObjectClass).field0_0x0.DebugPtr = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->bAllowsClear = param_1->bAllowsClear;
  return this;
}

