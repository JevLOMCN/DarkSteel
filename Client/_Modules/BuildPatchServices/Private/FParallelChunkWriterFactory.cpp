// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432480b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

IParallelChunkWriter * __cdecl
BuildPatchServices::FParallelChunkWriterFactory::Create
          (FParallelChunkWriterConfig *param_1,IFileSystem *param_2,IChunkDataSerialization *param_3
          ,FStatsCollector *param_4)

{
  FScriptContainerElement *pFVar1;
  FParallelChunkWriter *this;
  FParallelChunkWriter *pFVar2;
  FParallelChunkWriterConfig local_38;
  
  this = ::operator_new(0x210);
  pFVar2 = (FParallelChunkWriter *)0x0;
  if (this != (FParallelChunkWriter *)0x0) {
    local_38.NumberOfThreads = param_1->NumberOfThreads;
    local_38.MaxQueueSize = param_1->MaxQueueSize;
    local_38.SaveRetryCount = param_1->SaveRetryCount;
    local_38.SaveRetryTime = param_1->SaveRetryTime;
    local_38.ChunkDirectory.Data.AllocatorInstance.Data =
         (param_1->ChunkDirectory).Data.AllocatorInstance.Data;
    (param_1->ChunkDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ChunkDirectory.Data.ArrayNum = (param_1->ChunkDirectory).Data.ArrayNum;
    local_38.ChunkDirectory.Data.ArrayMax = (param_1->ChunkDirectory).Data.ArrayMax;
    (param_1->ChunkDirectory).Data.ArrayNum = 0;
    (param_1->ChunkDirectory).Data.ArrayMax = 0;
    local_38.FeatureLevel = param_1->FeatureLevel;
    pFVar2 = FParallelChunkWriter::FParallelChunkWriter(this,&local_38,param_2,param_3,param_4);
  }
  pFVar1 = (param_1->ChunkDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (IParallelChunkWriter *)pFVar2;
}

