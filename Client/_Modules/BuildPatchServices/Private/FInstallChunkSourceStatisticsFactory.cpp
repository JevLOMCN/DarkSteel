// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c9430

IInstallChunkSourceStatistics * __cdecl
BuildPatchServices::FInstallChunkSourceStatisticsFactory::Create
          (ISpeedRecorder *param_1,IInstallerAnalytics *param_2,IFileOperationTracker *param_3)

{
  code *pcVar1;
  bool bVar2;
  IInstallChunkSourceStatistics *pIVar3;
  
  if (param_1 == (ISpeedRecorder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpeedRecorder != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\InstallChunkSourceStatistics.cpp"
                       ,0x6a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IInstallChunkSourceStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (param_2 == (IInstallerAnalytics *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstallerAnalytics != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\InstallChunkSourceStatistics.cpp"
                       ,0x6b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IInstallChunkSourceStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (param_3 == (IFileOperationTracker *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FileOperationTracker != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\InstallChunkSourceStatistics.cpp"
                       ,0x6c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IInstallChunkSourceStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  pIVar3 = ::operator_new(0x40);
  if (pIVar3 != (IInstallChunkSourceStatistics *)0x0) {
    pIVar3[1] = (IInstallChunkSourceStatistics)param_1;
    *pIVar3 = (IInstallChunkSourceStatistics)
              &___7FInstallChunkSourceStatistics_BuildPatchServices__6B_;
    pIVar3[2] = (IInstallChunkSourceStatistics)param_2;
    pIVar3[3] = (IInstallChunkSourceStatistics)param_3;
    *(undefined4 *)(pIVar3 + 4) = 0;
    *(undefined4 *)&pIVar3[4].field_0x4 = 0;
    pIVar3[5] = (IInstallChunkSourceStatistics)0x0;
    *(undefined4 *)(pIVar3 + 6) = 0;
    pIVar3[7] = (IInstallChunkSourceStatistics)0x0;
    return pIVar3;
  }
  return (IInstallChunkSourceStatistics *)0x0;
}

