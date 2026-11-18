// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// DestroyObject @ 145e51eb0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FShaderPreprocessDependencies,SharedPointerInternals::DefaultDeleter<FShaderPreprocessDependencies>,1>
::DestroyObject(TReferenceControllerWithDeleter<FShaderPreprocessDependencies,SharedPointerInternals::DefaultDeleter<FShaderPreprocessDependencies>,1>
                *this)

{
  if (this->Object != (FShaderPreprocessDependencies *)0x0) {
    FShaderPreprocessDependencies::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 145e51ed0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TArray<wchar_t,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<wchar_t,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TArray<wchar_t,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<wchar_t,TSizedDefaultAllocator<32>_>_>,1>
                *this)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x10);
    return;
  }
  return;
}

