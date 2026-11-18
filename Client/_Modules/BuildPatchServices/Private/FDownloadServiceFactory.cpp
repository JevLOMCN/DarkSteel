// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c8c50

IDownloadService * __cdecl
BuildPatchServices::FDownloadServiceFactory::Create
          (IHttpManager *param_1,IFileSystem *param_2,IDownloadServiceStat *param_3,
          IInstallerAnalytics *param_4)

{
  code *pcVar1;
  bool bVar2;
  IDownloadService *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  if ((param_1 == (IHttpManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("HttpManager != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\DownloadService.cpp"
                         ,0x1a0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IDownloadService *)(*pcVar1)();
    return pIVar3;
  }
  if ((param_2 == (IFileSystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileSystem != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\DownloadService.cpp"
                         ,0x1a1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IDownloadService *)(*pcVar1)();
    return pIVar3;
  }
  if ((param_3 == (IDownloadServiceStat *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DownloadServiceStat != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\DownloadService.cpp"
                         ,0x1a2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IDownloadService *)(*pcVar1)();
    return pIVar3;
  }
  if ((param_4 == (IInstallerAnalytics *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstallerAnalytics != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\DownloadService.cpp"
                         ,0x1a3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IDownloadService *)(*pcVar1)();
    return pIVar3;
  }
  pIVar3 = ::operator_new(0x18);
  if (pIVar3 == (IDownloadService *)0x0) {
    pIVar3 = (IDownloadService *)0x0;
  }
  else {
    *pIVar3 = (IDownloadService)&___7FDownloadService_BuildPatchServices__6B_;
    pTVar4 = ::operator_new(0x188);
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4[1]._padding_ = 0;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFDownloadServiceImpl_BuildPatchServices___00_SharedPointerInternals__6B_
      ;
      pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[2]._padding_ = (longlong)param_1;
      *(IFileSystem **)&pTVar4[2].SharedReferenceCount = param_2;
      pTVar4[3]._padding_ = (longlong)param_3;
      *(IInstallerAnalytics **)&pTVar4[3].SharedReferenceCount = param_4;
      *(undefined4 *)&pTVar4[4]._padding_ = 0;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&pTVar4[4].SharedReferenceCount,4000);
      pTVar4[7]._padding_ = 0;
      pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[9]._padding_ = 0;
      pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[9].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&pTVar4[10]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pTVar4[10]._padding_ + 4) = 0;
      pTVar4[0xb]._padding_ = 0;
      pTVar4[0xb].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[0xc]._padding_ = 0;
      pTVar4[0xc].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[0xc].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[0xe]._padding_ = 0;
      pTVar4[0xe].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[0xe].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&pTVar4[0xf]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pTVar4[0xf]._padding_ + 4) = 0;
      pTVar4[0x10]._padding_ = 0;
      pTVar4[0x10].SharedReferenceCount = (atomic<int>)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar4 + 0x11),4000);
      pTVar4[0x13].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[0x13].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[0x14]._padding_ = 0;
      pTVar4[0x15].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[0x15].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar4[0x16]._padding_ = 0;
      *(undefined4 *)((longlong)&pTVar4[0x16]._padding_ + 4) = 0x80;
      pTVar4[0x16].SharedReferenceCount = (atomic<int>)0xffffffff;
      pTVar4[0x16].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[0x17].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[0x17].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar4[0x18]._padding_ = 0;
      pTVar5 = pTVar4;
    }
    TSharedRef<BuildPatchServices::FDownloadServiceImpl,1>::
    TSharedRef<BuildPatchServices::FDownloadServiceImpl,1>
              ((TSharedRef<BuildPatchServices::FDownloadServiceImpl,1> *)(pIVar3 + 1),
               (FDownloadServiceImpl *)(pTVar5 + 1),pTVar5);
  }
  return pIVar3;
}

