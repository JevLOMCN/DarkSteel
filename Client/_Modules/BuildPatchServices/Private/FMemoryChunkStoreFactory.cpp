// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c9800

IMemoryChunkStore * __cdecl
BuildPatchServices::FMemoryChunkStoreFactory::Create
          (int param_1,IChunkEvictionPolicy *param_2,IChunkStore *param_3,
          IMemoryChunkStoreStat *param_4,IChunkReferenceTracker *param_5)

{
  code *pcVar1;
  bool bVar2;
  IMemoryChunkStore *pIVar3;
  
  if (param_2 == (IChunkEvictionPolicy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EvictionPolicy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\MemoryChunkStore.cpp"
                       ,0xfd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IMemoryChunkStore *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (param_4 == (IMemoryChunkStoreStat *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MemoryChunkStoreStat != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\MemoryChunkStore.cpp"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IMemoryChunkStore *)(*pcVar1)();
      return pIVar3;
    }
  }
  pIVar3 = ::operator_new(0x120);
  if (pIVar3 == (IMemoryChunkStore *)0x0) {
    pIVar3 = (IMemoryChunkStore *)0x0;
  }
  else {
    *(int *)(pIVar3 + 1) = param_1;
    *pIVar3 = (IMemoryChunkStore)&___7FMemoryChunkStore_BuildPatchServices__6B_;
    pIVar3[4] = (IMemoryChunkStore)0x0;
    pIVar3[5] = (IMemoryChunkStore)0x0;
    pIVar3[9] = (IMemoryChunkStore)0x0;
    pIVar3[0xb] = (IMemoryChunkStore)0x0;
    pIVar3[2] = (IMemoryChunkStore)0x0;
    pIVar3[3] = (IMemoryChunkStore)0x0;
    pIVar3[6] = (IMemoryChunkStore)0x0;
    *(undefined4 *)(pIVar3 + 7) = 0;
    *(undefined4 *)&pIVar3[7].field_0x4 = 0x80;
    *(undefined4 *)(pIVar3 + 8) = 0xffffffff;
    *(undefined4 *)&pIVar3[8].field_0x4 = 0;
    pIVar3[10] = (IMemoryChunkStore)0x0;
    pIVar3[0xc] = (IMemoryChunkStore)param_2;
    pIVar3[0xd] = (IMemoryChunkStore)param_3;
    pIVar3[0xe] = (IMemoryChunkStore)param_4;
    pIVar3[0xf] = (IMemoryChunkStore)param_5;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar3 + 0x10),4000);
    pIVar3[0x16] = (IMemoryChunkStore)0x0;
    pIVar3[0x1b] = (IMemoryChunkStore)0x0;
    pIVar3[0x1c] = (IMemoryChunkStore)0x0;
    pIVar3[0x1d] = (IMemoryChunkStore)0x0;
    pIVar3[0x1e] = (IMemoryChunkStore)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar3 + 0x1f),4000);
    (**(code **)(*(longlong *)pIVar3[0xe] + 0x28))(pIVar3[0xe],*(undefined4 *)(pIVar3 + 1));
  }
  return pIVar3;
}

