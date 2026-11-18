// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 1

// operator() @ 1494c6b30

void __thiscall
TDefaultDelete<FShaderParametersMetadataAllocations>::operator()
          (TDefaultDelete<FShaderParametersMetadataAllocations> *this,
          FShaderParametersMetadataAllocations *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  if (param_1 != (FShaderParametersMetadataAllocations *)0x0) {
    pFVar3 = (param_1->ShaderParameterMetadatas).AllocatorInstance.Data;
    iVar1 = (param_1->ShaderParameterMetadatas).ArrayNum;
    pFVar2 = pFVar3 + (longlong)iVar1 * 8;
    while( true ) {
      if ((param_1->ShaderParameterMetadatas).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FShaderParametersMetadata_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar3 == pFVar2) break;
      if (*(undefined8 **)pFVar3 != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)pFVar3)();
      }
      pFVar3 = pFVar3 + 8;
    }
    TIndirectArray<TChunkedArray<FString,512,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::Empty(&(param_1->Names).Chunks,0);
    pFVar2 = (param_1->Names).Chunks.Array.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (param_1->ShaderParameterMetadatas).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(param_1,0x28);
  }
  return;
}

