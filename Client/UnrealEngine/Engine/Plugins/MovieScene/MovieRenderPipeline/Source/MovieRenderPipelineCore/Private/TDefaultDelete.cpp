// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// operator() @ 14dd6fbc0

void __thiscall
TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>::operator()
          (TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter> *this,IVideoCodecWriter *param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 != (IVideoCodecWriter *)0x0) {
    *(undefined4 *)&(param_1->LightweightSourceData).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->LightweightSourceData).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->LightweightSourceData);
    *(undefined4 *)&(param_1->FormatArgs).FileMetadata.field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->FormatArgs).FileMetadata.field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(param_1->FormatArgs).FileMetadata);
    *(undefined4 *)&(param_1->FormatArgs).FilenameArguments.field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->FormatArgs).FilenameArguments.field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->FormatArgs);
    pFVar2 = (param_1->StableFileName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (param_1->FileName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(param_1,0x120);
  }
  return;
}

