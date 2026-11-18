// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c89f0

ICloudChunkSourceStatistics * __cdecl
BuildPatchServices::FCloudChunkSourceStatisticsFactory::Create
          (IInstallerAnalytics *param_1,FBuildPatchProgress *param_2,IFileOperationTracker *param_3)

{
  undefined8 *puVar1;
  ICloudChunkSourceStatistics IVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ICloudChunkSourceStatistics *pIVar6;
  
  if (param_1 == (IInstallerAnalytics *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstallerAnalytics != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\CloudChunkSourceStatistics.cpp"
                       ,0xcf,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar6 = (ICloudChunkSourceStatistics *)(*pcVar3)();
      return pIVar6;
    }
  }
  if (param_2 == (FBuildPatchProgress *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BuildProgress != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\CloudChunkSourceStatistics.cpp"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar6 = (ICloudChunkSourceStatistics *)(*pcVar3)();
      return pIVar6;
    }
  }
  if (param_3 == (IFileOperationTracker *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FileOperationTracker != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\CloudChunkSourceStatistics.cpp"
                       ,0xd1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar6 = (ICloudChunkSourceStatistics *)(*pcVar3)();
      return pIVar6;
    }
  }
  pIVar6 = ::operator_new(0x90);
  if (pIVar6 == (ICloudChunkSourceStatistics *)0x0) {
    pIVar6 = (ICloudChunkSourceStatistics *)0x0;
  }
  else {
    pIVar6[2] = (ICloudChunkSourceStatistics)param_2;
    *pIVar6 = (ICloudChunkSourceStatistics)&___7FCloudChunkSourceStatistics_BuildPatchServices__6B_;
    pIVar6[1] = (ICloudChunkSourceStatistics)param_1;
    pIVar6[3] = (ICloudChunkSourceStatistics)param_3;
    pIVar6[4] = (ICloudChunkSourceStatistics)0x0;
    pIVar6[5] = (ICloudChunkSourceStatistics)0x0;
    *(undefined4 *)(pIVar6 + 6) = 0;
    *(undefined4 *)&pIVar6[6].field_0x4 = 0;
    *(undefined4 *)(pIVar6 + 7) = 0;
    *(undefined4 *)&pIVar6[7].field_0x4 = 0;
    *(undefined4 *)(pIVar6 + 8) = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar6 + 9),4000);
    *(undefined4 *)(pIVar6 + 0xe) = 4;
    *(int *)(pIVar6 + 0x11) = 0;
    pIVar6[0xf] = (ICloudChunkSourceStatistics)0x0;
    pIVar6[0x10] = (ICloudChunkSourceStatistics)0x0;
    *(undefined4 *)&pIVar6[0x11].field_0x4 = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,5,(ForAnyElementType *)(pIVar6 + 0x10),(int *)(pIVar6 + 0x11),
                       (int *)&pIVar6[0x11].field_0x4);
    IVar2 = pIVar6[0x10];
    puVar1 = (undefined8 *)((longlong)IVar2 + (longlong)iVar5 * 4);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)IVar2 + 0x10 + (longlong)iVar5 * 4) = 0;
  }
  return pIVar6;
}

