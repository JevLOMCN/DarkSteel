// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c9e70

IVerifierStatistics * __cdecl
BuildPatchServices::FVerifierStatisticsFactory::Create
          (ISpeedRecorder *param_1,FBuildPatchProgress *param_2,IFileOperationTracker *param_3)

{
  code *pcVar1;
  bool bVar2;
  IVerifierStatistics *pIVar3;
  int iVar4;
  int local_res8 [2];
  TPairInitializer<BuildPatchServices::EVerifyError_const_&,FThreadSafeCounter64_&&> local_res10;
  int *local_38;
  FThreadSafeCounter64 **local_30;
  
  if (param_1 == (ISpeedRecorder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpeedRecorder != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\VerifierStatistics.cpp"
                       ,0xbc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IVerifierStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (param_2 == (FBuildPatchProgress *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BuildProgress != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\VerifierStatistics.cpp"
                       ,0xbd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IVerifierStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (param_3 == (IFileOperationTracker *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FileOperationTracker != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\VerifierStatistics.cpp"
                       ,0xbe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IVerifierStatistics *)(*pcVar1)();
      return pIVar3;
    }
  }
  pIVar3 = ::operator_new(0xb0);
  if (pIVar3 != (IVerifierStatistics *)0x0) {
    pIVar3[2] = (IVerifierStatistics)param_2;
    iVar4 = 0;
    *pIVar3 = (IVerifierStatistics)&___7FVerifierStatistics_BuildPatchServices__6B_;
    pIVar3[3] = (IVerifierStatistics)param_3;
    local_38 = local_res8;
    pIVar3[1] = (IVerifierStatistics)param_1;
    pIVar3[4] = (IVerifierStatistics)0x0;
    pIVar3[5] = (IVerifierStatistics)0x0;
    pIVar3[6] = (IVerifierStatistics)0x0;
    pIVar3[7] = (IVerifierStatistics)0x0;
    pIVar3[8] = (IVerifierStatistics)0x0;
    pIVar3[9] = (IVerifierStatistics)0x0;
    pIVar3[10] = (IVerifierStatistics)0x0;
    pIVar3[0xd] = (IVerifierStatistics)0x0;
    *(undefined4 *)(pIVar3 + 0xe) = 0;
    *(undefined4 *)&pIVar3[0xe].field_0x4 = 0x80;
    *(undefined4 *)(pIVar3 + 0xf) = 0xffffffff;
    *(undefined4 *)&pIVar3[0xf].field_0x4 = 0;
    pIVar3[0x11] = (IVerifierStatistics)0x0;
    *(undefined4 *)(pIVar3 + 0x12) = 0;
    local_30 = &local_res10.Value;
    *(undefined4 *)(pIVar3 + 0x13) = 0;
    pIVar3[0x14] = (IVerifierStatistics)0x0;
    pIVar3[0x15] = (IVerifierStatistics)0x0;
    do {
      local_res10.Value = (FThreadSafeCounter64 *)0x0;
      local_res8[0] = iVar4;
      TSet<TTuple<enum_BuildPatchServices::EVerifyError,FThreadSafeCounter64>,TDefaultMapHashableKeyFuncs<enum_BuildPatchServices::EVerifyError,FThreadSafeCounter64,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_BuildPatchServices::EVerifyError_const_&,FThreadSafeCounter64_&&>_>
                (pIVar3 + 9,&local_res10,(bool *)&local_38);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    return pIVar3;
  }
  return (IVerifierStatistics *)0x0;
}

