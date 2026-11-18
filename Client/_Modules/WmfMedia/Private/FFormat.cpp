// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// ~FFormat @ 14ea972f0

void __thiscall FWmfMediaTracks::FFormat::~FFormat(FFormat *this)

{
  FScriptContainerElement *pFVar1;
  IMFMediaType *pIVar2;
  
  pFVar1 = (this->TypeName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->OutputType).RawPointer;
  if (pIVar2 != (IMFMediaType *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->InputType).RawPointer;
  if (pIVar2 != (IMFMediaType *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

