// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c9970

IMemoryChunkStoreStatistics * __cdecl
BuildPatchServices::FMemoryChunkStoreStatisticsFactory::Create(IFileOperationTracker *param_1)

{
  code *pcVar1;
  bool bVar2;
  IMemoryChunkStoreStatistics *pIVar3;
  
  if (param_1 == (IFileOperationTracker *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FileOperationTracker != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\MemoryChunkStoreStatistics.cpp"
                       ,0xe0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IMemoryChunkStoreStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  pIVar3 = ::operator_new(0xc0);
  if (pIVar3 != (IMemoryChunkStoreStatistics *)0x0) {
    pIVar3[1] = (IMemoryChunkStoreStatistics)param_1;
    *pIVar3 = (IMemoryChunkStoreStatistics)&___7FMemoryChunkStoreStatistics_BuildPatchServices__6B_;
    *(undefined4 *)(pIVar3 + 2) = 0;
    pIVar3[3] = (IMemoryChunkStoreStatistics)0x0;
    *(undefined4 *)(pIVar3 + 4) = 0;
    *(undefined4 *)&pIVar3[4].field_0x4 = 0;
    *(undefined4 *)(pIVar3 + 5) = 0;
    pIVar3[6] = (IMemoryChunkStoreStatistics)0x0;
    *(undefined4 *)(pIVar3 + 7) = 0;
    *(undefined4 *)&pIVar3[7].field_0x4 = 0;
    *(undefined4 *)(pIVar3 + 8) = 0;
    *(undefined4 *)&pIVar3[8].field_0x4 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar3 + 9),4000);
    pIVar3[0xe] = (IMemoryChunkStoreStatistics)0x0;
    pIVar3[0xf] = (IMemoryChunkStoreStatistics)0x0;
    pIVar3[0x12] = (IMemoryChunkStoreStatistics)0x0;
    *(undefined4 *)(pIVar3 + 0x13) = 0;
    *(undefined4 *)&pIVar3[0x13].field_0x4 = 0x80;
    *(undefined4 *)(pIVar3 + 0x14) = 0xffffffff;
    *(undefined4 *)&pIVar3[0x14].field_0x4 = 0;
    pIVar3[0x16] = (IMemoryChunkStoreStatistics)0x0;
    *(undefined4 *)(pIVar3 + 0x17) = 0;
    return pIVar3;
  }
  return (IMemoryChunkStoreStatistics *)0x0;
}

