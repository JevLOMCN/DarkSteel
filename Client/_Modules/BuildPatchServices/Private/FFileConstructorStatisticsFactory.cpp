// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c9250

IFileConstructorStatistics * __cdecl
BuildPatchServices::FFileConstructorStatisticsFactory::Create
          (ISpeedRecorder *param_1,ISpeedRecorder *param_2,FBuildPatchProgress *param_3,
          IFileOperationTracker *param_4)

{
  code *pcVar1;
  bool bVar2;
  IFileConstructorStatistics *pIVar3;
  
  if (param_1 == (ISpeedRecorder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReadSpeedRecorder != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\FileConstructorStatistics.cpp"
                       ,0x10d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IFileConstructorStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (param_2 == (ISpeedRecorder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WriteSpeedRecorder != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\FileConstructorStatistics.cpp"
                       ,0x10e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IFileConstructorStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (param_3 == (FBuildPatchProgress *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BuildProgress != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\FileConstructorStatistics.cpp"
                       ,0x10f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IFileConstructorStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (param_4 == (IFileOperationTracker *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FileOperationTracker != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\FileConstructorStatistics.cpp"
                       ,0x110,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IFileConstructorStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  pIVar3 = ::operator_new(0xd8);
  if (pIVar3 == (IFileConstructorStatistics *)0x0) {
    pIVar3 = (IFileConstructorStatistics *)0x0;
  }
  else {
    pIVar3[4] = (IFileConstructorStatistics)param_4;
    *pIVar3 = (IFileConstructorStatistics)&___7FFileConstructorStatistics_BuildPatchServices__6B_;
    pIVar3[1] = (IFileConstructorStatistics)param_1;
    pIVar3[2] = (IFileConstructorStatistics)param_2;
    pIVar3[3] = (IFileConstructorStatistics)param_3;
    pIVar3[5] = (IFileConstructorStatistics)0x0;
    pIVar3[6] = (IFileConstructorStatistics)0x0;
    pIVar3[7] = (IFileConstructorStatistics)0x0;
    *(undefined4 *)(pIVar3 + 8) = 0;
    *(undefined4 *)&pIVar3[8].field_0x4 = 0;
    *(undefined4 *)(pIVar3 + 9) = 0;
    pIVar3[10] = (IFileConstructorStatistics)0x0;
    *(undefined4 *)(pIVar3 + 0xb) = 0;
    pIVar3[0xc] = (IFileConstructorStatistics)0x0;
    *(undefined4 *)(pIVar3 + 0xd) = 0;
    pIVar3[0xe] = (IFileConstructorStatistics)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar3 + 0xf),4000);
    pIVar3[0x14] = (IFileConstructorStatistics)0x0;
    pIVar3[0x15] = (IFileConstructorStatistics)0x0;
    pIVar3[0x16] = (IFileConstructorStatistics)0x0;
    pIVar3[0x17] = (IFileConstructorStatistics)0x0;
    pIVar3[0x18] = (IFileConstructorStatistics)0x0;
    pIVar3[0x19] = (IFileConstructorStatistics)0x0;
    pIVar3[0x1a] = (IFileConstructorStatistics)0x0;
  }
  return pIVar3;
}

