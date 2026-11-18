// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c8ec0

IDownloadServiceStatistics * __cdecl
BuildPatchServices::FDownloadServiceStatisticsFactory::Create
          (ISpeedRecorder *param_1,IDataSizeProvider *param_2,IInstallerAnalytics *param_3)

{
  code *pcVar1;
  bool bVar2;
  IDownloadServiceStatistics *pIVar3;
  
  if (param_1 == (ISpeedRecorder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpeedRecorder != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\DownloadServiceStatistics.cpp"
                       ,0xcb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IDownloadServiceStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (param_2 == (IDataSizeProvider *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataSizeProvider != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\DownloadServiceStatistics.cpp"
                       ,0xcc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IDownloadServiceStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (param_3 == (IInstallerAnalytics *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstallerAnalytics != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\DownloadServiceStatistics.cpp"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IDownloadServiceStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  pIVar3 = ::operator_new(0xe0);
  if (pIVar3 == (IDownloadServiceStatistics *)0x0) {
    pIVar3 = (IDownloadServiceStatistics *)0x0;
  }
  else {
    pIVar3[3] = (IDownloadServiceStatistics)param_3;
    *pIVar3 = (IDownloadServiceStatistics)&___7FDownloadServiceStatistics_BuildPatchServices__6B_;
    pIVar3[4] = (IDownloadServiceStatistics)0x0;
    pIVar3[5] = (IDownloadServiceStatistics)0x0;
    pIVar3[6] = (IDownloadServiceStatistics)0x0;
    pIVar3[7] = (IDownloadServiceStatistics)0x0;
    pIVar3[10] = (IDownloadServiceStatistics)0x0;
    pIVar3[1] = (IDownloadServiceStatistics)param_1;
    pIVar3[2] = (IDownloadServiceStatistics)param_2;
    *(undefined4 *)(pIVar3 + 0xb) = 0;
    *(undefined4 *)&pIVar3[0xb].field_0x4 = 0x80;
    *(undefined4 *)(pIVar3 + 0xc) = 0xffffffff;
    *(undefined4 *)&pIVar3[0xc].field_0x4 = 0;
    pIVar3[0xe] = (IDownloadServiceStatistics)0x0;
    *(undefined4 *)(pIVar3 + 0xf) = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar3 + 0x10),4000);
    pIVar3[0x15] = (IDownloadServiceStatistics)0x0;
    *(undefined4 *)(pIVar3 + 0x16) = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar3 + 0x17),4000);
  }
  return pIVar3;
}

