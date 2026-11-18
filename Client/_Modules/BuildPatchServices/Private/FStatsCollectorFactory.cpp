// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432484c0

FStatsCollector * __cdecl BuildPatchServices::FStatsCollectorFactory::Create(void)

{
  FStatsCollector *pFVar1;
  LARGE_INTEGER local_res8;
  
  pFVar1 = ::operator_new(0x148);
  if (pFVar1 != (FStatsCollector *)0x0) {
    *pFVar1 = (FStatsCollector)&___7FStatsCollectorImpl_BuildPatchServices__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pFVar1 + 1),4000);
    pFVar1[6] = (FStatsCollector)0x0;
    pFVar1[7] = (FStatsCollector)0x0;
    pFVar1[10] = (FStatsCollector)0x0;
    *(undefined4 *)(pFVar1 + 0xb) = 0;
    *(undefined4 *)&pFVar1[0xb].field_0x4 = 0x80;
    *(undefined4 *)(pFVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)&pFVar1[0xc].field_0x4 = 0;
    pFVar1[0xe] = (FStatsCollector)0x0;
    *(undefined4 *)(pFVar1 + 0xf) = 0;
    pFVar1[0x10] = (FStatsCollector)0x0;
    pFVar1[0x11] = (FStatsCollector)0x0;
    pFVar1[0x14] = (FStatsCollector)0x0;
    *(undefined4 *)(pFVar1 + 0x15) = 0;
    *(undefined4 *)&pFVar1[0x15].field_0x4 = 0x80;
    *(undefined4 *)(pFVar1 + 0x16) = 0xffffffff;
    *(undefined4 *)&pFVar1[0x16].field_0x4 = 0;
    pFVar1[0x18] = (FStatsCollector)0x0;
    *(undefined4 *)(pFVar1 + 0x19) = 0;
    pFVar1[0x1a] = (FStatsCollector)0x0;
    pFVar1[0x1b] = (FStatsCollector)0x0;
    pFVar1[0x1e] = (FStatsCollector)0x0;
    *(undefined4 *)(pFVar1 + 0x1f) = 0;
    *(undefined4 *)&pFVar1[0x1f].field_0x4 = 0x80;
    *(undefined4 *)(pFVar1 + 0x20) = 0xffffffff;
    *(undefined4 *)&pFVar1[0x20].field_0x4 = 0;
    pFVar1[0x22] = (FStatsCollector)0x0;
    *(undefined4 *)(pFVar1 + 0x23) = 0;
    QueryPerformanceCounter(&local_res8);
    *(LARGE_INTEGER *)(pFVar1 + 0x24) = local_res8;
    *(undefined4 *)(pFVar1 + 0x25) = 0;
    FNumberFormattingOptions::FNumberFormattingOptions
              ((FNumberFormattingOptions *)&pFVar1[0x25].field_0x4);
    *(undefined4 *)&pFVar1[0x27].field_0x4 = 2;
    *(undefined4 *)(pFVar1 + 0x28) = 2;
    return pFVar1;
  }
  return (FStatsCollector *)0x0;
}

