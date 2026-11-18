// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 6

// FDownloadDelegates @ 14327f6d0

FDownloadDelegates * __thiscall
BuildPatchServices::FDownloadDelegates::FDownloadDelegates
          (FDownloadDelegates *this,
          TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
          *param_1,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy> *param_2
          )

{
  TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
            (&this->OnCompleteDelegate,param_1);
  TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
            (&this->OnProgressDelegate,param_2);
  return this;
}

// FDownloadDelegates @ 14327f710

FDownloadDelegates * __thiscall
BuildPatchServices::FCloudChunkSource::FDownloadDelegates::FDownloadDelegates
          (FDownloadDelegates *this,FCloudChunkSource *param_1)

{
  this->CloudChunkSource = param_1;
  return this;
}

// OnDownloadComplete @ 1432deb90

void __thiscall
BuildPatchServices::FCloudChunkSource::FDownloadDelegates::OnDownloadComplete
          (FDownloadDelegates *this,int param_1,TSharedRef<BuildPatchServices::IDownload,1> *param_2
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FCloudChunkSource *pFVar1;
  TPairInitializer<int_const_&,TSharedRef<BuildPatchServices::IDownload,1>_const_&> local_res8;
  TSharedRef<BuildPatchServices::IDownload,1> **local_18;
  TSharedRef<BuildPatchServices::IDownload,1> *local_10;
  
  pFVar1 = this->CloudChunkSource;
  lpCriticalSection = &pFVar1->CompletedDownloadsCS;
  local_res8.Value._0_4_ = param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18 = &local_res8.Value;
    local_10 = param_2;
    TSet<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<BuildPatchServices::IDownload,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,TSharedRef<BuildPatchServices::IDownload,1>_const_&>_>
              ((TSet<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<BuildPatchServices::IDownload,1>,0>,FDefaultSetAllocator>
                *)&pFVar1->CompletedDownloads,&local_res8,(bool *)&local_18);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnDownloadComplete @ 1432dec10

void __thiscall
BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates::OnDownloadComplete
          (FDownloadDelegates *this,int param_1,TSharedRef<BuildPatchServices::IDownload,1> *param_2
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FConstructorCloudChunkSource *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  TPairInitializer<int_const_&,TSharedRef<BuildPatchServices::IDownload,1>_const_&> local_res8;
  TSharedRef<BuildPatchServices::IDownload,1> **local_18;
  TSharedRef<BuildPatchServices::IDownload,1> *local_10;
  
  pFVar1 = this->CloudSource;
  lpCriticalSection = &pFVar1->CompletedRequestsCS;
  local_res8.Value._0_4_ = param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18 = &local_res8.Value;
    local_10 = param_2;
    TSet<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<BuildPatchServices::IDownload,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,TSharedRef<BuildPatchServices::IDownload,1>_const_&>_>
              ((TSet<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<BuildPatchServices::IDownload,1>,0>,FDefaultSetAllocator>
                *)&pFVar1->CompletedDownloads,&local_res8,(bool *)&local_18);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    UE::Core::Private::Function::CheckCallable(*(void **)&pFVar1->WakeupMainThreadFn);
    pcVar2 = *(code **)&pFVar1->WakeupMainThreadFn;
    plVar3 = *(longlong **)&(pFVar1->WakeupMainThreadFn).field_0x28;
    plVar5 = (longlong *)&(pFVar1->WakeupMainThreadFn).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnDownloadProgress @ 1432df300

void __thiscall
BuildPatchServices::FCloudChunkSource::FDownloadDelegates::OnDownloadProgress
          (FDownloadDelegates *this,int param_1,ulong64 param_2)

{
  FCloudChunkSource *pFVar1;
  ulong64 uVar2;
  
  pFVar1 = this->CloudChunkSource;
  uVar2 = FStatsCollector::GetCycles();
  LOCK();
  pFVar1->CyclesAtLastData = uVar2;
  UNLOCK();
  return;
}

// OnDownloadProgress @ 1432df330

void __thiscall
BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates::OnDownloadProgress
          (FDownloadDelegates *this,int param_1,ulong64 param_2)

{
  FConstructorCloudChunkSource *pFVar1;
  atomic<__int64> aVar2;
  
  pFVar1 = this->CloudSource;
  aVar2 = (atomic<__int64>)FStatsCollector::GetCycles();
  pFVar1->CyclesAtLastData = aVar2;
  return;
}

