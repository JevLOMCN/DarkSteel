// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143247300

IChunkDatabaseWriter * __cdecl
BuildPatchServices::FChunkDatabaseWriterFactory::Create
          (IChunkSource *param_1,IFileSystem *param_2,IInstallerError *param_3,
          IChunkReferenceTracker *param_4,IChunkDataSerialization *param_5,
          TArray<BuildPatchServices::FChunkDatabaseFile,TSizedDefaultAllocator<32>_> *param_6,
          TFunction<void___cdecl(bool)> *param_7)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  IChunkDatabaseWriter *pIVar4;
  FChunkDatabaseWriter *this;
  FChunkDatabaseWriter *pFVar5;
  longlong *plVar6;
  TArray<BuildPatchServices::FChunkDatabaseFile,TSizedDefaultAllocator<32>_> local_58;
  TFunction<void___cdecl(bool)> local_48;
  
  if (param_1 == (IChunkSource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChunkSource != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkDatabaseWriter.cpp"
                       ,0x13d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IChunkDatabaseWriter *)(*pcVar2)();
      return pIVar4;
    }
  }
  if (param_2 == (IFileSystem *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FileSystem != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkDatabaseWriter.cpp"
                       ,0x13e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IChunkDatabaseWriter *)(*pcVar2)();
      return pIVar4;
    }
  }
  if (param_3 == (IInstallerError *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstallerError != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkDatabaseWriter.cpp"
                       ,0x13f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IChunkDatabaseWriter *)(*pcVar2)();
      return pIVar4;
    }
  }
  if (param_4 == (IChunkReferenceTracker *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChunkReferenceTracker != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkDatabaseWriter.cpp"
                       ,0x140,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IChunkDatabaseWriter *)(*pcVar2)();
      return pIVar4;
    }
  }
  this = ::operator_new(0xc0);
  pFVar5 = (FChunkDatabaseWriter *)0x0;
  if (this != (FChunkDatabaseWriter *)0x0) {
    local_48._0_8_ = *(undefined8 *)param_7;
    local_48._40_8_ = *(undefined8 *)&param_7->field_0x28;
    *(undefined8 *)&param_7->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_7->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_7->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_7->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_7 = 0;
    }
    local_58.AllocatorInstance.Data = (param_6->AllocatorInstance).Data;
    (param_6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = param_6->ArrayNum;
    local_58.ArrayMax = param_6->ArrayMax;
    param_6->ArrayNum = 0;
    param_6->ArrayMax = 0;
    pFVar5 = FChunkDatabaseWriter::FChunkDatabaseWriter
                       (this,param_1,param_2,param_3,param_4,param_5,&local_58,&local_48);
  }
  DestructItems<BuildPatchServices::FChunkDatabaseFile,int>
            ((FChunkDatabaseFile *)(param_6->AllocatorInstance).Data,param_6->ArrayNum);
  pFVar1 = (param_6->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)param_7 != 0) {
    plVar6 = (longlong *)&param_7->field_0x10;
    if (*(longlong **)&param_7->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_7->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return (IChunkDatabaseWriter *)pFVar5;
}

