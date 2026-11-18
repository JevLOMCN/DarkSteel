// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c82a0

IChunkDbChunkSourceStatistics * __cdecl
BuildPatchServices::FChunkDbChunkSourceStatisticsFactory::Create
          (ISpeedRecorder *param_1,IFileOperationTracker *param_2)

{
  code *pcVar1;
  bool bVar2;
  IChunkDbChunkSourceStatistics *pIVar3;
  
  if (param_1 == (ISpeedRecorder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpeedRecorder != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\ChunkDbChunkSourceStatistics.cpp"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IChunkDbChunkSourceStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (param_2 == (IFileOperationTracker *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FileOperationTracker != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\ChunkDbChunkSourceStatistics.cpp"
                       ,0x5a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IChunkDbChunkSourceStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  pIVar3 = ::operator_new(0x28);
  if (pIVar3 != (IChunkDbChunkSourceStatistics *)0x0) {
    pIVar3[1] = (IChunkDbChunkSourceStatistics)param_1;
    *pIVar3 = (IChunkDbChunkSourceStatistics)
              &___7FChunkDbChunkSourceStatistics_BuildPatchServices__6B_;
    pIVar3[2] = (IChunkDbChunkSourceStatistics)param_2;
    *(undefined4 *)(pIVar3 + 3) = 0;
    *(undefined4 *)&pIVar3[3].field_0x4 = 0;
    *(undefined1 *)(pIVar3 + 4) = 0;
    return pIVar3;
  }
  return (IChunkDbChunkSourceStatistics *)0x0;
}

