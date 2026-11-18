// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ExrReaderGpu
// Functions: 4

// ~TArray<char,TSizedDefaultAllocator<32>_> @ 14ea2b550

void __thiscall
TArray<char,TSizedDefaultAllocator<32>_>::~TArray<char,TSizedDefaultAllocator<32>_>
          (TArray<char,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_> @ 14ea2b570

void __thiscall
TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>::
~TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>
          (TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> @ 14ea2b590

void __thiscall
TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_>::
~TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_>
          (TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// RemoveAtImpl @ 14ea2d220

void __thiscall
TArray<TArray<__int64,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TArray<__int64,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  TArray<__int64,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<__int64,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<__int64,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

