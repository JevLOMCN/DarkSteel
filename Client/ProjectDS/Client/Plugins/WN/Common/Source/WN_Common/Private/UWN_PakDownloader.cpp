// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 22

// StaticClass @ 149482180

UClass * __cdecl UWN_PakDownloader::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_PakDownloader.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_PakDownloader",
               &Z_Registration_Info_UClass_UWN_PakDownloader.InnerSingleton,
               StaticRegisterNativesUWN_PakDownloader,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_PakDownloader>,
               InternalVTableHelperCtorCaller<UWN_PakDownloader>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_PakDownloader.InnerSingleton;
}

// UWN_PakDownloader @ 14948e430

UWN_PakDownloader * __thiscall
UWN_PakDownloader::UWN_PakDownloader(UWN_PakDownloader *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bResult = true;
  this->bQuit = false;
  this->_padding_ = (longlong)&___7UWN_PakDownloader__6B_;
  *(undefined8 *)&this->OnPreProcessCallback = 0;
  *(undefined8 *)&(this->OnPreProcessCallback).field_0x8 = 0;
  *(undefined4 *)&(this->OnPreProcessCallback).field_0x10 = 0;
  *(undefined8 *)&this->OnBeginDownloadPaksCallback = 0;
  *(undefined8 *)&(this->OnBeginDownloadPaksCallback).field_0x8 = 0;
  *(undefined4 *)&(this->OnBeginDownloadPaksCallback).field_0x10 = 0;
  *(undefined8 *)&this->OnDownloadingPaksAsyncCallback = 0;
  *(undefined8 *)&(this->OnDownloadingPaksAsyncCallback).field_0x8 = 0;
  *(undefined4 *)&(this->OnDownloadingPaksAsyncCallback).field_0x10 = 0;
  *(undefined8 *)&this->OnEndDownloadPaksCallback = 0;
  *(undefined8 *)&(this->OnEndDownloadPaksCallback).field_0x8 = 0;
  *(undefined4 *)&(this->OnEndDownloadPaksCallback).field_0x10 = 0;
  *(undefined8 *)&this->OnPostProcessCallback = 0;
  *(undefined8 *)&(this->OnPostProcessCallback).field_0x8 = 0;
  *(undefined4 *)&(this->OnPostProcessCallback).field_0x10 = 0;
  this->State = None;
  this->HttpModule = (FHttpModule *)0x0;
  (this->UserDirectoryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDirectoryPath).Data.ArrayNum = 0;
  (this->UserDirectoryPath).Data.ArrayMax = 0;
  (this->UserPaksDirectoryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserPaksDirectoryPath).Data.ArrayNum = 0;
  (this->UserPaksDirectoryPath).Data.ArrayMax = 0;
  (this->TempUserPaksDirectoryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempUserPaksDirectoryPath).Data.ArrayNum = 0;
  (this->TempUserPaksDirectoryPath).Data.ArrayMax = 0;
  (this->ProjectName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectName).Data.ArrayNum = 0;
  (this->ProjectName).Data.ArrayMax = 0;
  (this->BranchName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BranchName).Data.ArrayNum = 0;
  (this->BranchName).Data.ArrayMax = 0;
  (this->PlatformName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformName).Data.ArrayNum = 0;
  (this->PlatformName).Data.ArrayMax = 0;
  (this->BaseUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseUrl).Data.ArrayNum = 0;
  (this->BaseUrl).Data.ArrayMax = 0;
  (this->PakBaseUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PakBaseUrl).Data.ArrayNum = 0;
  (this->PakBaseUrl).Data.ArrayMax = 0;
  (this->PrevVersionList).Hash = 0;
  (this->PrevVersionList).PakVersions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevVersionList).PakVersions.ArrayNum = 0;
  (this->PrevVersionList).PakVersions.ArrayMax = 0;
  (this->VersionList).Hash = 0;
  (this->VersionList).PakVersions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VersionList).PakVersions.ArrayNum = 0;
  (this->VersionList).PakVersions.ArrayMax = 0;
  (this->NewVersions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewVersions).ArrayNum = 0;
  (this->NewVersions).ArrayMax = 0;
  (this->ModifiedVersions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModifiedVersions).ArrayNum = 0;
  (this->ModifiedVersions).ArrayMax = 0;
  (this->DeletedVersions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeletedVersions).ArrayNum = 0;
  (this->DeletedVersions).ArrayMax = 0;
  (this->PakStreamDownloaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PakStreamDownloaders).ArrayNum = 0;
  (this->PakStreamDownloaders).ArrayMax = 0;
  (this->RequestsRemained).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestsRemained).ArrayNum = 0;
  (this->RequestsRemained).ArrayMax = 0;
  this->TotalSize = 0;
  (this->FailureReasons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FailureReasons).ArrayNum = 0;
  (this->FailureReasons).ArrayMax = 0;
  this->StartTimeSecs = 0.0;
  this->EndTimeSecs = 0.0;
  this->PakVersion = -1;
  (this->PrevVersionList).bUseIoStore = true;
  (this->PrevVersionList).Version = 0xffffffff;
  (this->VersionList).bUseIoStore = true;
  (this->VersionList).Version = 0xffffffff;
  return this;
}

// UWN_PakDownloader @ 14948e5e0

UWN_PakDownloader * __thiscall
UWN_PakDownloader::UWN_PakDownloader(UWN_PakDownloader *this,FObjectInitializer *param_1)

{
  FHttpModule *pFVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->bResult = true;
  this->bQuit = false;
  this->_padding_ = (longlong)&___7UWN_PakDownloader__6B_;
  *(undefined8 *)&this->OnPreProcessCallback = 0;
  *(undefined8 *)&(this->OnPreProcessCallback).field_0x8 = 0;
  *(undefined4 *)&(this->OnPreProcessCallback).field_0x10 = 0;
  *(undefined8 *)&this->OnBeginDownloadPaksCallback = 0;
  *(undefined8 *)&(this->OnBeginDownloadPaksCallback).field_0x8 = 0;
  *(undefined4 *)&(this->OnBeginDownloadPaksCallback).field_0x10 = 0;
  *(undefined8 *)&this->OnDownloadingPaksAsyncCallback = 0;
  *(undefined8 *)&(this->OnDownloadingPaksAsyncCallback).field_0x8 = 0;
  *(undefined4 *)&(this->OnDownloadingPaksAsyncCallback).field_0x10 = 0;
  *(undefined8 *)&this->OnEndDownloadPaksCallback = 0;
  *(undefined8 *)&(this->OnEndDownloadPaksCallback).field_0x8 = 0;
  *(undefined4 *)&(this->OnEndDownloadPaksCallback).field_0x10 = 0;
  *(undefined8 *)&this->OnPostProcessCallback = 0;
  *(undefined8 *)&(this->OnPostProcessCallback).field_0x8 = 0;
  *(undefined4 *)&(this->OnPostProcessCallback).field_0x10 = 0;
  this->HttpModule = (FHttpModule *)0x0;
  (this->UserDirectoryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDirectoryPath).Data.ArrayNum = 0;
  (this->UserDirectoryPath).Data.ArrayMax = 0;
  (this->UserPaksDirectoryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserPaksDirectoryPath).Data.ArrayNum = 0;
  (this->UserPaksDirectoryPath).Data.ArrayMax = 0;
  (this->TempUserPaksDirectoryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempUserPaksDirectoryPath).Data.ArrayNum = 0;
  (this->TempUserPaksDirectoryPath).Data.ArrayMax = 0;
  (this->ProjectName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectName).Data.ArrayNum = 0;
  (this->ProjectName).Data.ArrayMax = 0;
  (this->BranchName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BranchName).Data.ArrayNum = 0;
  (this->BranchName).Data.ArrayMax = 0;
  (this->PlatformName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformName).Data.ArrayNum = 0;
  (this->PlatformName).Data.ArrayMax = 0;
  (this->BaseUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseUrl).Data.ArrayNum = 0;
  (this->BaseUrl).Data.ArrayMax = 0;
  (this->PakBaseUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PakBaseUrl).Data.ArrayNum = 0;
  (this->PakBaseUrl).Data.ArrayMax = 0;
  (this->PrevVersionList).bUseIoStore = true;
  (this->PrevVersionList).Version = 0xffffffff;
  (this->PrevVersionList).Hash = 0;
  (this->PrevVersionList).PakVersions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevVersionList).PakVersions.ArrayNum = 0;
  (this->PrevVersionList).PakVersions.ArrayMax = 0;
  (this->VersionList).bUseIoStore = true;
  (this->VersionList).Version = 0xffffffff;
  (this->VersionList).Hash = 0;
  (this->VersionList).PakVersions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VersionList).PakVersions.ArrayNum = 0;
  (this->VersionList).PakVersions.ArrayMax = 0;
  (this->NewVersions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewVersions).ArrayNum = 0;
  (this->NewVersions).ArrayMax = 0;
  (this->ModifiedVersions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModifiedVersions).ArrayNum = 0;
  (this->ModifiedVersions).ArrayMax = 0;
  (this->DeletedVersions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeletedVersions).ArrayNum = 0;
  (this->DeletedVersions).ArrayMax = 0;
  (this->PakStreamDownloaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PakStreamDownloaders).ArrayNum = 0;
  (this->PakStreamDownloaders).ArrayMax = 0;
  (this->RequestsRemained).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestsRemained).ArrayNum = 0;
  (this->RequestsRemained).ArrayMax = 0;
  (this->FailureReasons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FailureReasons).ArrayNum = 0;
  (this->FailureReasons).ArrayMax = 0;
  this->State = None;
  this->PakVersion = -1;
  this->TotalSize = 0;
  this->StartTimeSecs = 0.0;
  this->EndTimeSecs = 0.0;
  pFVar1 = FHttpModule::Get();
  this->HttpModule = pFVar1;
  return this;
}

// ~UWN_PakDownloader @ 149490710

void __thiscall UWN_PakDownloader::~UWN_PakDownloader(UWN_PakDownloader *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UWN_PakDownloader__6B_;
  DestructItems<FString,int>
            ((FString *)(this->FailureReasons).AllocatorInstance.Data,
             (this->FailureReasons).ArrayNum);
  pFVar1 = (this->FailureReasons).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<IHttpRequest,1>,int>
            ((TSharedPtr<IHttpRequest,1> *)(this->RequestsRemained).AllocatorInstance.Data,
             (this->RequestsRemained).ArrayNum);
  pFVar1 = (this->RequestsRemained).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FWN_PakStreamDownloader,1>,int>
            ((TSharedPtr<FWN_PakStreamDownloader,1> *)
             (this->PakStreamDownloaders).AllocatorInstance.Data,
             (this->PakStreamDownloaders).ArrayNum);
  pFVar1 = (this->PakStreamDownloaders).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_PakVersion,int>
            ((FWN_PakVersion *)(this->DeletedVersions).AllocatorInstance.Data,
             (this->DeletedVersions).ArrayNum);
  pFVar1 = (this->DeletedVersions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_PakVersion,int>
            ((FWN_PakVersion *)(this->ModifiedVersions).AllocatorInstance.Data,
             (this->ModifiedVersions).ArrayNum);
  pFVar1 = (this->ModifiedVersions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_PakVersion,int>
            ((FWN_PakVersion *)(this->NewVersions).AllocatorInstance.Data,
             (this->NewVersions).ArrayNum);
  pFVar1 = (this->NewVersions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_PakVersion,int>
            ((FWN_PakVersion *)(this->VersionList).PakVersions.AllocatorInstance.Data,
             (this->VersionList).PakVersions.ArrayNum);
  pFVar1 = (this->VersionList).PakVersions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_PakVersion,int>
            ((FWN_PakVersion *)(this->PrevVersionList).PakVersions.AllocatorInstance.Data,
             (this->PrevVersionList).PakVersions.ArrayNum);
  pFVar1 = (this->PrevVersionList).PakVersions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PakBaseUrl).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaseUrl).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlatformName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BranchName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProjectName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TempUserPaksDirectoryPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserPaksDirectoryPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserDirectoryPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPostProcessCallback);
  pvVar2 = *(void **)&(this->OnPostProcessCallback).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPostProcessCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEndDownloadPaksCallback);
  pvVar2 = *(void **)&(this->OnEndDownloadPaksCallback).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndDownloadPaksCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDownloadingPaksAsyncCallback);
  pvVar2 = *(void **)&(this->OnDownloadingPaksAsyncCallback).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDownloadingPaksAsyncCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBeginDownloadPaksCallback);
  pvVar2 = *(void **)&(this->OnBeginDownloadPaksCallback).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBeginDownloadPaksCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPreProcessCallback);
  pvVar2 = *(void **)&(this->OnPreProcessCallback).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreProcessCallback);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 149491420

bool __thiscall
`UWN_PakDownloader::Request_PakSizes'::__l2::<lambda_1>::operator()
          (void *this,FWN_PakVersion *param_1,wchar_t *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  FWN_CurlHttpStream *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  ForAnyElementType *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  UObject *local_res10;
  wchar_t *local_res18;
  TReferenceControllerBase<1> *local_c8;
  TReferenceControllerBase<1> *local_c0;
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  undefined1 local_a0 [8];
  FSharedReferencer<1> local_98;
  FString local_90;
  FString local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  local_res18 = param_2;
  pTVar10 = ::operator_new(0x70);
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar16 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar10 = pTVar14;
LAB_149491510:
    if (((pTVar16->_padding_ == 0) || (*(longlong *)&pTVar16->SharedReferenceCount == 0)) ||
       (*(int *)(*(longlong *)&pTVar16->SharedReferenceCount + 8) < 1)) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar16->_padding_ = (longlong)pTVar16;
      if (pTVar10 != *(TReferenceControllerBase<1> **)&pTVar16->SharedReferenceCount) {
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar2 = *(longlong **)&pTVar16->SharedReferenceCount;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pTVar16->SharedReferenceCount = pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar16 = pTVar10 + 1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFWN_PakStreamDownloader___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pTVar10[2]._padding_ + 3) = 0;
    *(undefined1 *)((longlong)&pTVar10[2]._padding_ + 7) = 0;
    pTVar10[1]._padding_ = 0;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar10[2]._padding_ = 0x100;
    *(undefined1 *)((longlong)&pTVar10[2]._padding_ + 2) = 1;
    pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[3]._padding_ = 0;
    pTVar10[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[4]._padding_ = 0;
    pTVar10[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[5]._padding_ = 0;
    pTVar10[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar10[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[6]._padding_ = 0;
    pTVar10[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[6].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) goto LAB_149491510;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8 = pTVar16;
  local_c0 = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((local_c8 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pTVar10 = local_c8;
  *(bool *)&local_c8[1]._padding_ = param_1->bIsPrerequisites;
  *(bool *)((longlong)&local_c8[1]._padding_ + 1) = param_1->bIsUserSpecified;
  *(bool *)((longlong)&local_c8[1]._padding_ + 2) = param_1->bHasPakExtension;
  ::FString::operator=((FString *)&local_c8[1].SharedReferenceCount,&param_1->Guid);
  ::FString::operator=((FString *)&pTVar10[2].SharedReferenceCount,&param_1->PakName);
  ::FString::operator=((FString *)&pTVar10[3].SharedReferenceCount,&param_1->Alias);
  pTVar10[4].SharedReferenceCount = (atomic<int>)param_1->DisplayVersion;
  pTVar10[4].WeakReferenceCount = (atomic<int>)param_1->Hash;
  pTVar10 = ::operator_new(0x108);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar16 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar16 = pTVar10 + 1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFWN_CurlHttpStream___00_SharedPointerInternals__6B_;
    *(undefined4 *)((longlong)&pTVar10[2]._padding_ + 2) = 0;
    *(undefined2 *)((longlong)&pTVar10[2]._padding_ + 6) = 0;
    pTVar10[0xc]._padding_ = 0;
    pTVar10[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0xf]._padding_ = 0;
    pTVar10[1]._padding_ = 0;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar10[2]._padding_ = 1;
    pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[3]._padding_ = 0;
    pTVar10[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[4]._padding_ = 0;
    pTVar10[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[5]._padding_ = 0;
    pTVar10[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[6]._padding_ = 0;
    pTVar10[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[7]._padding_ = 0x4000;
    pTVar10[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[8]._padding_ = 0;
    pTVar10[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[9]._padding_ = 0;
    pTVar10[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[10]._padding_ = 0;
    pTVar10[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0xb]._padding_ = 0;
    pTVar10[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0xd]._padding_ = 0;
    pTVar10[0xe]._padding_ = 0;
    pTVar10[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0xf].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0x10]._padding_ = 0;
    pTVar14 = pTVar10;
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      goto LAB_14949179f;
    }
  }
  pTVar10 = pTVar14;
  if (((pTVar16->_padding_ == 0) || (*(longlong *)&pTVar16->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar16->SharedReferenceCount + 8) < 1)) {
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar16->_padding_ = (longlong)pTVar16;
    if (pTVar14 != *(TReferenceControllerBase<1> **)&pTVar16->SharedReferenceCount) {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar2 = *(longlong **)&pTVar16->SharedReferenceCount;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar16->SharedReferenceCount = pTVar14;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
LAB_14949179f:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0 = (undefined1  [8])pTVar16;
  local_98.ReferenceController = pTVar10;
  if ((local_c8 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if (local_c8 + 5 != (TReferenceControllerBase<1> *)local_a0) {
    local_c8[5]._padding_ = (longlong)pTVar16;
    local_a0 = (undefined1  [8])0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_c8[5].SharedReferenceCount,&local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  lVar3 = *(longlong *)this;
  pFVar15 = (ForAnyElementType *)(lVar3 + 0x1a8);
  if (((pFVar15->Data <= (FScriptContainerElement *)&local_c8) &&
      ((FScriptContainerElement *)&local_c8 <
       pFVar15->Data + (longlong)*(int *)(lVar3 + 0x1b4) * 0x10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  iVar9 = *(int *)(lVar3 + 0x1b0);
  if (iVar9 == *(int *)(lVar3 + 0x1b4)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar15,(int *)(lVar3 + 0x1b4));
  }
  *(int *)(lVar3 + 0x1b0) = iVar9 + 1;
  pFVar4 = pFVar15->Data;
  *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar9 * 0x10) = local_c8;
  *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar9 * 0x10 + 8) = local_c0;
  if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_c0->SharedReferenceCount = (atomic<int>)((int)local_c0->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::PrintfImpl(&local_80,L"%s%s.%s");
  ::FString::PrintfImpl(&local_90,L"%s%s.%s");
  pUVar5 = *(UObject **)this;
  local_b8 = (undefined1  [8])0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)&local_58);
  local_40 = &local_b0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_b0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXPEBVFWN_CurlHttpStream___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUWN_PakDownloader____A6AXPEBVFWN_CurlHttpStream___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    puVar11[3] = 0;
    local_res10 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res10);
    puVar11[4] = UWN_PakDownloader::OnInitPakStreamDownloader;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if ((local_c8 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pTVar14 = local_c8;
  if ((local_c8[5]._padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  bVar7 = FWN_CurlHttpStream::Initialize
                    ((FWN_CurlHttpStream *)pTVar14[5]._padding_,&local_80,&local_90,
                     (TDelegate<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>
                      *)local_b8);
  if (bVar7) {
    bVar7 = true;
  }
  else {
    lVar3 = *(longlong *)this;
    if ((local_c8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar13 = TSharedPtr<FWN_CurlHttpStream,1>::operator->
                        ((TSharedPtr<FWN_CurlHttpStream,1> *)(local_c8 + 5));
    TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x1d0),
               &pFVar13->FailureReasons);
    bVar7 = false;
    *(undefined1 *)(*(longlong *)this + 0xa0) = 0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)&local_70);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b8);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
  return bVar7;
}

// CancelAllTasks @ 1494983a0

void __thiscall UWN_PakDownloader::CancelAllTasks(UWN_PakDownloader *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  iVar1 = (this->RequestsRemained).ArrayNum;
  pFVar7 = (this->RequestsRemained).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->RequestsRemained).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<IHttpRequest,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    plVar3 = *(longlong **)pFVar7;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar3 == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(*plVar3 + 0x118))(plVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar7 = pFVar7 + 0x10;
  }
  iVar1 = (this->PakStreamDownloaders).ArrayNum;
  pFVar7 = (this->PakStreamDownloaders).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PakStreamDownloaders).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FWN_PakStreamDownloader,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar8) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    lVar4 = *(longlong *)pFVar7;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar4 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(longlong *)(lVar4 + 0x50) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FWN_CurlHttpStream::Cancel(*(FWN_CurlHttpStream **)(lVar4 + 0x50));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar7 = pFVar7 + 0x10;
  }
  return;
}

// CheckComplete @ 149499a70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWN_PakDownloader::CheckComplete(UWN_PakDownloader *this)

{
  FScriptContainerElement *_Src;
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  FPlatformFileManager *this_00;
  FPakPlatformFile *this_01;
  longlong lVar4;
  LARGE_INTEGER local_res8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  FReadAccessScope local_28;
  
  if (this->bQuit == false) {
    return;
  }
  if (this->bResult != false) {
    DeleteNeedlessPaks(this);
    MoveTempPatchesToPatches(this);
    bVar2 = SavePakVersionList(this);
    if (bVar2) {
      this_00 = FPlatformFileManager::Get();
      this_01 = (FPakPlatformFile *)FPlatformFileManager::GetPlatformFile(this_00);
      local_28.DestructionSentinel.Accessor._0_4_ = (this->UserPaksDirectoryPath).Data.ArrayNum;
      lVar4 = (longlong)(int)local_28.DestructionSentinel.Accessor;
      _Src = (this->UserPaksDirectoryPath).Data.AllocatorInstance.Data;
      local_28.DestructionSentinel._0_8_ = (FScriptContainerElement *)0x0;
      if ((int)local_28.DestructionSentinel.Accessor == 0) {
        local_28.DestructionSentinel.Accessor._4_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_28.DestructionSentinel.Accessor,0,(ForAnyElementType *)&local_28,
                   (int)local_28.DestructionSentinel.Accessor,
                   (int *)((longlong)&local_28.DestructionSentinel.Accessor + 4));
        memcpy((void *)local_28.DestructionSentinel._0_8_,_Src,lVar4 * 2);
      }
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
      ConstructItems<FString,FString,int>(local_38.AllocatorInstance.Data,(FString *)&local_28,1);
      iVar3 = FPakPlatformFile::MountAllPakFiles(this_01,&local_38);
      DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      if ((FScriptContainerElement *)local_28.DestructionSentinel._0_8_ !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_28.DestructionSentinel._0_8_);
      }
      if (iVar3 != 0) goto LAB_149499bdc;
    }
    this->bResult = false;
  }
LAB_149499bdc:
  bVar2 = this->bResult;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPostProcessCallback,
             &local_28);
  if ((*(int *)&(this->OnPostProcessCallback).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnPostProcessCallback).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,bVar2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPostProcessCallback);
  QueryPerformanceCounter(&local_res8);
  this->EndTimeSecs =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  if ((byte)Common._0_1_ < 5) {
    return;
  }
  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&Common);
  return;
}

// DeleteNeedlessPaks @ 14949c340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWN_PakDownloader::DeleteNeedlessPaks(UWN_PakDownloader *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  IFileManager *pIVar5;
  ulonglong uVar6;
  size_t sVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  FString *pFVar12;
  FScriptContainerElement *pFVar13;
  FString *pFVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  ForAnyElementType local_98;
  undefined8 local_90;
  FString *local_88;
  undefined8 local_80;
  FString *local_78;
  ulonglong local_70;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  FScriptContainerElement *local_38;
  int local_30;
  
  pIVar5 = IFileManager::Get();
  iVar1 = (this->VersionList).PakVersions.ArrayNum;
  local_90._0_4_ = 0;
  pFVar10 = (this->VersionList).PakVersions.AllocatorInstance.Data;
  pFVar13 = pFVar10 + (longlong)iVar1 * 0x40;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  while( true ) {
    iVar4 = (int)local_90;
    if ((this->VersionList).PakVersions.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWN_PakVersion,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      iVar4 = (int)local_90;
    }
    if (pFVar10 == pFVar13) break;
    if (iVar4 == local_90._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_98,(int *)((longlong)&local_90 + 4));
    }
    local_90 = CONCAT44(local_90._4_4_,iVar4 + 1);
    ::FString::FString((FString *)(local_98.Data + (longlong)iVar4 * 0x10),
                       (FString *)(pFVar10 + 0x18));
    pFVar10 = pFVar10 + 0x40;
  }
  local_78 = (FString *)0x0;
  local_70 = 0;
  if ((this->UserPaksDirectoryPath).Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(this->UserPaksDirectoryPath).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar5 + 0x78))(pIVar5,&local_78,pwVar9,0);
  iVar1 = (int)local_70;
  uVar6 = (ulonglong)(int)local_70;
  pFVar14 = local_78 + uVar6;
  pFVar12 = local_78;
  do {
    if ((int)uVar6 != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar12 == pFVar14) {
      local_88 = (FString *)0x0;
      local_80 = 0;
      if ((this->TempUserPaksDirectoryPath).Data.ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(this->TempUserPaksDirectoryPath).Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar5 + 0x78))(pIVar5,&local_88,pwVar9,0);
      iVar1 = (int)local_80;
      pFVar14 = local_88 + (int)local_80;
      pFVar12 = local_88;
      do {
        if ((int)local_80 != iVar1) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar12 == pFVar14) {
          DestructItems<FString,int>(local_88,(int)local_80);
          if (local_88 != (FString *)0x0) {
            FMemory::Free(local_88);
          }
          DestructItems<FString,int>(local_78,(int)local_70);
          if (local_78 != (FString *)0x0) {
            FMemory::Free(local_78);
          }
          DestructItems<FString,int>((FString *)local_98.Data,(int)local_90);
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data);
          }
          return;
        }
        if ((this->TempUserPaksDirectoryPath).Data.ArrayNum == 0) {
          local_48.DataPtr = L"";
        }
        else {
          local_48.DataPtr =
               (wchar_t *)(this->TempUserPaksDirectoryPath).Data.AllocatorInstance.Data;
        }
        iVar4 = 0;
        if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
          sVar7 = wcslen(local_48.DataPtr);
          iVar4 = (int)sVar7;
        }
        local_38 = (pFVar12->Data).AllocatorInstance.Data;
        iVar2 = (pFVar12->Data).ArrayNum;
        local_30 = iVar2 + -1;
        if (iVar2 == 0) {
          local_30 = 0;
        }
        local_48.Size = iVar4;
        FPaths::CombineInternal(&local_68,&local_48,2);
        FPaths::GetBaseFilename(&local_58,pFVar12,true);
        pFVar10 = local_98.Data + (longlong)(int)local_90 * 0x10;
        uVar8 = local_58.Data._8_8_;
        for (FVar11.Data = local_98.Data; FVar11.Data != pFVar10; FVar11.Data = FVar11.Data + 0x10)
        {
          iVar4 = *(int *)(FVar11.Data + 8);
          if (iVar4 == (int)uVar8) {
            if (iVar4 < 2) goto LAB_14949c756;
            iVar4 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)FVar11.Data,
                               (wchar_t *)local_58.Data.AllocatorInstance.Data);
            bVar15 = iVar4 == 0;
            uVar8 = local_58.Data._8_8_;
          }
          else {
            bVar15 = iVar4 + (int)uVar8 == 1;
          }
          if (bVar15) goto LAB_14949c756;
        }
        if ((pFVar12->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        cVar3 = (**(code **)((longlong)*pIVar5 + 0x38))(pIVar5,pwVar9,0,1,0);
        if (cVar3 == '\x01') {
          if (4 < (byte)Common._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_File_deletion_s_151e4d1c0,
                       (FLogCategoryBase *)&Common);
          }
        }
        else if (2 < (byte)Common._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_File_deletion_f_151e4d220,
                     (FLogCategoryBase *)&Common);
        }
LAB_14949c756:
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        pFVar12 = pFVar12 + 1;
      } while( true );
    }
    if ((this->UserPaksDirectoryPath).Data.ArrayNum == 0) {
      local_48.DataPtr = L"";
    }
    else {
      local_48.DataPtr = (wchar_t *)(this->UserPaksDirectoryPath).Data.AllocatorInstance.Data;
    }
    iVar4 = 0;
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      sVar7 = wcslen(local_48.DataPtr);
      iVar4 = (int)sVar7;
    }
    local_38 = (pFVar12->Data).AllocatorInstance.Data;
    iVar2 = (pFVar12->Data).ArrayNum;
    local_30 = iVar2 + -1;
    if (iVar2 == 0) {
      local_30 = 0;
    }
    local_48.Size = iVar4;
    FPaths::CombineInternal(&local_68,&local_48,2);
    FPaths::GetBaseFilename(&local_58,&local_68,true);
    pFVar10 = local_98.Data + (longlong)(int)local_90 * 0x10;
    uVar8 = local_58.Data._8_8_;
    for (FVar11.Data = local_98.Data; FVar11.Data != pFVar10; FVar11.Data = FVar11.Data + 0x10) {
      iVar4 = *(int *)(FVar11.Data + 8);
      if (iVar4 == (int)uVar8) {
        if (iVar4 < 2) goto LAB_14949c584;
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)FVar11.Data,(wchar_t *)local_58.Data.AllocatorInstance.Data)
        ;
        bVar15 = iVar4 == 0;
        uVar8 = local_58.Data._8_8_;
      }
      else {
        bVar15 = iVar4 + (int)uVar8 == 1;
      }
      if (bVar15) goto LAB_14949c584;
    }
    pFVar10 = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      pFVar10 = local_68.Data.AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*pIVar5 + 0x38))(pIVar5,pFVar10,0,1,0);
    if (cVar3 == '\x01') {
      if (4 < (byte)Common._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_File_deletion_s_151e4d1c0,
                   (FLogCategoryBase *)&Common);
      }
    }
    else if (2 < (byte)Common._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_File_deletion_f_151e4d220,
                 (FLogCategoryBase *)&Common);
    }
LAB_14949c584:
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    uVar6 = local_70 & 0xffffffff;
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// GetDownloadedSize @ 1494a06e0

void __thiscall
UWN_PakDownloader::GetDownloadedSize(UWN_PakDownloader *this,ulong64 *param_1,ulong64 *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  *param_1 = 0;
  iVar1 = (this->PakStreamDownloaders).ArrayNum;
  pFVar5 = (this->PakStreamDownloaders).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PakStreamDownloaders).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FWN_PakStreamDownloader,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (*(longlong *)pFVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *(longlong *)pFVar5;
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0x50);
    *param_1 = *param_1 + *(longlong *)(lVar2 + 0x48) + *(longlong *)(lVar2 + 0x40);
    pFVar5 = pFVar5 + 0x10;
  }
  *param_2 = this->TotalSize;
  return;
}

// GetPrivateStaticClass @ 1494a1b50

UClass * __cdecl UWN_PakDownloader::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_PakDownloader.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_PakDownloader",
               &Z_Registration_Info_UClass_UWN_PakDownloader.InnerSingleton,
               StaticRegisterNativesUWN_PakDownloader,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_PakDownloader>,
               InternalVTableHelperCtorCaller<UWN_PakDownloader>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_PakDownloader.InnerSingleton;
}

// MountAllPaks @ 1494a6060

bool __thiscall UWN_PakDownloader::MountAllPaks(UWN_PakDownloader *this)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FPlatformFileManager *this_00;
  FPakPlatformFile *this_01;
  longlong lVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  this_00 = FPlatformFileManager::Get();
  this_01 = (FPakPlatformFile *)FPlatformFileManager::GetPlatformFile(this_00);
  local_18.Data.ArrayNum = (this->UserPaksDirectoryPath).Data.ArrayNum;
  lVar2 = (longlong)local_18.Data.ArrayNum;
  _Src = (this->UserPaksDirectoryPath).Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_28.AllocatorInstance,1,&local_28.ArrayMax);
  ConstructItems<FString,FString,int>(local_28.AllocatorInstance.Data,&local_18,1);
  iVar1 = FPakPlatformFile::MountAllPakFiles(this_01,&local_28);
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return iVar1 != 0;
}

// MoveTempPatchesToPatches @ 1494a6270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWN_PakDownloader::MoveTempPatchesToPatches(UWN_PakDownloader *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  IFileManager *pIVar5;
  ForAnyElementType FVar7;
  FString *pFVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  int iVar12;
  undefined1 local_res8 [8];
  FString *local_78;
  undefined8 local_70;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  FScriptContainerElement *local_38;
  int local_30;
  size_t sVar6;
  
  pIVar5 = IFileManager::Get();
  local_78 = (FString *)0x0;
  local_70 = 0;
  iVar12 = 0;
  if ((this->TempUserPaksDirectoryPath).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(this->TempUserPaksDirectoryPath).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar5 + 0x78))(pIVar5,&local_78,pwVar10,0);
  iVar2 = (int)local_70;
  pFVar9 = local_78 + (int)local_70;
  pFVar8 = local_78;
  while( true ) {
    if ((int)local_70 != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar8 == pFVar9) break;
    if ((this->TempUserPaksDirectoryPath).Data.ArrayNum == 0) {
      local_48.DataPtr = L"";
    }
    else {
      local_48.DataPtr = (wchar_t *)(this->TempUserPaksDirectoryPath).Data.AllocatorInstance.Data;
    }
    iVar4 = iVar12;
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen(local_48.DataPtr);
      iVar4 = (int)sVar6;
    }
    local_38 = (pFVar8->Data).AllocatorInstance.Data;
    iVar1 = (pFVar8->Data).ArrayNum;
    local_30 = iVar1 + -1;
    if (iVar1 == 0) {
      local_30 = iVar12;
    }
    local_48.Size = iVar4;
    FPaths::CombineInternal(&local_58,&local_48,2);
    if ((this->UserPaksDirectoryPath).Data.ArrayNum == 0) {
      local_48.DataPtr = L"";
    }
    else {
      local_48.DataPtr = (wchar_t *)(this->UserPaksDirectoryPath).Data.AllocatorInstance.Data;
    }
    iVar4 = iVar12;
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen(local_48.DataPtr);
      iVar4 = (int)sVar6;
    }
    local_38 = (pFVar8->Data).AllocatorInstance.Data;
    iVar1 = (pFVar8->Data).ArrayNum;
    local_30 = iVar1 + -1;
    if (iVar1 == 0) {
      local_30 = iVar12;
    }
    local_48.Size = iVar4;
    FPaths::CombineInternal(&local_68,&local_48,2);
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar11.Data = local_58.Data.AllocatorInstance.Data;
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar7.Data = local_68.Data.AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*pIVar5 + 0x48))(pIVar5,FVar7.Data,FVar11.Data,1,1,0,0);
    if ((cVar3 == '\0') && (2 < (byte)Common._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&Common);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 1;
  }
  DestructItems<FString,int>(local_78,(int)local_70);
  if (local_78 != (FString *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// OnCompletePakStreamDownloader @ 1494a64c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWN_PakDownloader::OnCompletePakStreamDownloader
          (UWN_PakDownloader *this,FWN_CurlHttpStream *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPlatformFileManager *this_00;
  FPakPlatformFile *this_01;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (param_1->bResult == false) {
    TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
              (&this->FailureReasons,&param_1->FailureReasons);
    this->bResult = false;
  }
  iVar4 = (this->PakStreamDownloaders).ArrayNum;
  pFVar5 = (this->PakStreamDownloaders).AllocatorInstance.Data;
  pFVar7 = pFVar5 + (longlong)iVar4 * 0x10;
  while( true ) {
    if ((this->PakStreamDownloaders).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FWN_PakStreamDownloader,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar7) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnEndDownloadPaksCallback,&local_58);
      if ((*(int *)&(this->OnEndDownloadPaksCallback).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&(this->OnEndDownloadPaksCallback).field_0x8,
         plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEndDownloadPaksCallback);
      this->bQuit = true;
      if (this->bResult != false) {
        DeleteNeedlessPaks(this);
        MoveTempPatchesToPatches(this);
        bVar3 = SavePakVersionList(this);
        if (bVar3) {
          this_00 = FPlatformFileManager::Get();
          this_01 = (FPakPlatformFile *)FPlatformFileManager::GetPlatformFile(this_00);
          local_68.Data.ArrayNum = (this->UserPaksDirectoryPath).Data.ArrayNum;
          lVar6 = (longlong)local_68.Data.ArrayNum;
          pFVar5 = (this->UserPaksDirectoryPath).Data.AllocatorInstance.Data;
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_68.Data.ArrayNum == 0) {
            local_68.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,
                       local_68.Data.ArrayNum,&local_68.Data.ArrayMax);
            memcpy(local_68.Data.AllocatorInstance.Data,pFVar5,lVar6 * 2);
          }
          local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,1,0,&local_78.AllocatorInstance,1,&local_78.ArrayMax);
          ConstructItems<FString,FString,int>(local_78.AllocatorInstance.Data,&local_68,1);
          iVar4 = FPakPlatformFile::MountAllPakFiles(this_01,&local_78);
          DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
          if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (iVar4 == 0) {
            this->bResult = false;
          }
        }
        else {
          this->bResult = false;
        }
      }
      bVar3 = this->bResult;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnPostProcessCallback,&local_40);
      if ((*(int *)&(this->OnPostProcessCallback).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&(this->OnPostProcessCallback).field_0x8, plVar1 != (longlong *)0x0
         )) {
        (**(code **)(*plVar1 + 0x68))(plVar1,bVar3);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPostProcessCallback);
      QueryPerformanceCounter(&local_res10);
      this->EndTimeSecs =
           (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      if (4 < (byte)Common._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&Common);
      }
      return;
    }
    if ((*(longlong *)pFVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar6 = *(longlong *)pFVar5;
    if ((*(longlong *)(lVar6 + 0x50) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) break;
    lVar6 = *(longlong *)(lVar6 + 0x50);
    if (*(char *)(lVar6 + 0x10) != '\0') {
      if (*(int *)(lVar6 + 0x58) == 0) {
        return;
      }
      if (*(int *)(lVar6 + 0x58) != *(int *)(lVar6 + 0x5c)) {
        return;
      }
    }
    pFVar5 = pFVar5 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OnInitPakStreamDownloader @ 1494a7690

void __thiscall
UWN_PakDownloader::OnInitPakStreamDownloader(UWN_PakDownloader *this,FWN_CurlHttpStream *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if (param_1->bResult == false) {
    TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
              (&this->FailureReasons,&param_1->FailureReasons);
    this->bResult = false;
  }
  this->TotalSize = this->TotalSize + param_1->FileSize;
  iVar1 = (this->PakStreamDownloaders).ArrayNum;
  pFVar5 = (this->PakStreamDownloaders).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PakStreamDownloaders).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FWN_PakStreamDownloader,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      if (this->bResult == false) {
        this->bQuit = true;
      }
      else {
        bVar4 = Request_Paks(this);
        if (bVar4) {
          return;
        }
        this->bResult = false;
        this->bQuit = true;
      }
      CheckComplete(this);
      return;
    }
    if ((*(longlong *)pFVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *(longlong *)pFVar5;
    if ((*(longlong *)(lVar2 + 0x50) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) break;
    if (*(char *)(*(longlong *)(lVar2 + 0x50) + 0x10) != '\0') {
      if ((*(longlong *)pFVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)pFVar5;
      if ((*(longlong *)(lVar2 + 0x50) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(char *)(*(longlong *)(lVar2 + 0x50) + 0x11) == '\0') {
        return;
      }
    }
    pFVar5 = pFVar5 + 0x10;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// OnProgressPakStreamDownloaderAsync @ 1494a8410

void __thiscall
UWN_PakDownloader::OnProgressPakStreamDownloaderAsync
          (UWN_PakDownloader *this,FWN_CurlHttpStream *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDownloadingPaksAsyncCallback,&local_28);
  if ((*(int *)&(this->OnDownloadingPaksAsyncCallback).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnDownloadingPaksAsyncCallback).field_0x8,
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnRequestComplete_PakVersionList @ 1494a87b0

/* WARNING: Removing unreachable block (ram,0x0001494a8b25) */
/* WARNING: Removing unreachable block (ram,0x0001494a89ac) */
/* WARNING: Removing unreachable block (ram,0x0001494a8e0c) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWN_PakDownloader::OnRequestComplete_PakVersionList
          (UWN_PakDownloader *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IHttpResponse *pIVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_2->Object == (IHttpResponse *)0x0) {
    pTVar2 = &this->FailureReasons;
    if ((param_1->Object == (IHttpRequest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)**(undefined8 **)param_1->Object)();
    ::FString::PrintfImpl(&local_68,L"%s 요청에 대한 응답이 유효하지 않습니다.");
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar8 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->FailureReasons).ArrayNum;
    piVar1 = &(this->FailureReasons).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->FailureReasons).ArrayNum = iVar5 + 1;
    pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    *(FScriptContainerElement **)pFVar8 = local_68.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar8 + 8) = local_68.Data.ArrayNum;
    *(int *)(pFVar8 + 0xc) = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
  }
  else {
    if (param_3) {
      if (((this->RequestsRemained).ArrayNum != 1) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8733798756417273722>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Private\\Patch\\WN_PakDownloader.cpp"
                             ,0x86,"RequestsRemained.Num() == 1"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::PrintfImpl(&local_58,L"%sPakVersionList-%s.json");
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar7.Data = local_58.Data.AllocatorInstance.Data;
      }
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      bVar4 = FFileHelper::LoadFileToString(&local_48,(wchar_t *)FVar7.Data,None,0);
      if (bVar4) {
        bVar4 = FWN_PakVersionList::LoadFromJsonText(&this->PrevVersionList,&local_48);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (bVar4) goto LAB_1494a89cd;
        pTVar2 = &this->FailureReasons;
        ::FString::PrintfImpl(&local_98,L"%s 를 로드하는데 실패했습니다.");
        pFVar8 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar8 <= (FScriptContainerElement *)&local_98) &&
            ((FScriptContainerElement *)&local_98 <
             pFVar8 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->FailureReasons).ArrayNum;
        piVar1 = &(this->FailureReasons).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->FailureReasons).ArrayNum = iVar5 + 1;
        pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        *(undefined8 *)pFVar8 = 0;
        *(FScriptContainerElement **)pFVar8 = local_98.Data.AllocatorInstance.Data;
        *(int *)(pFVar8 + 8) = local_98.Data.ArrayNum;
        *(int *)(pFVar8 + 0xc) = local_98.Data.ArrayMax;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        this->bResult = false;
        this->bQuit = true;
      }
      else {
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
LAB_1494a89cd:
        pIVar6 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
        (**(code **)((longlong)*pIVar6 + 0x60))(pIVar6,&local_38);
        bVar4 = FWN_PakVersionList::LoadFromJsonText(&this->VersionList,&local_38);
        if (bVar4) {
          bVar4 = FWN_PakVersionList::Diff
                            (&this->PrevVersionList,&this->VersionList,&this->UserPaksDirectoryPath,
                             &this->NewVersions,&this->ModifiedVersions,&this->DeletedVersions);
          if (bVar4) {
            bVar4 = Request_PakSizes(this,(this->PrevVersionList).bUseIoStore);
            if (!bVar4) goto LAB_1494a8b85;
          }
          else {
            this->bQuit = true;
          }
        }
        else {
          if (2 < (byte)Common._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&Common);
          }
          pTVar2 = &this->FailureReasons;
          ::FString::PrintfImpl
                    (&local_88,
                     L"%s 를 로드하는데 실패했습니다 : 잘못된 json 포맷. 로그를 참조할 것."
                    );
          pFVar8 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar8 <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 <
               pFVar8 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = (this->FailureReasons).ArrayNum;
          piVar1 = &(this->FailureReasons).ArrayMax;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->FailureReasons).ArrayNum = iVar5 + 1;
          pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
          *(undefined8 *)pFVar8 = 0;
          *(FScriptContainerElement **)pFVar8 = local_88.Data.AllocatorInstance.Data;
          local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar8 + 8) = local_88.Data.ArrayNum;
          *(int *)(pFVar8 + 0xc) = local_88.Data.ArrayMax;
          local_88.Data.ArrayNum = 0;
          local_88.Data.ArrayMax = 0;
LAB_1494a8b85:
          this->bResult = false;
          this->bQuit = true;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      goto LAB_1494a8e1a;
    }
    (**(code **)((longlong)*param_2->Object + 0x18))();
    pTVar2 = &this->FailureReasons;
    if ((param_1->Object == (IHttpRequest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)**(undefined8 **)param_1->Object)();
    ::FString::PrintfImpl(&local_78,L"%s 요청에 대한 응답이 실패했습니다 : %s.");
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 <
         pFVar8 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->FailureReasons).ArrayNum;
    piVar1 = &(this->FailureReasons).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->FailureReasons).ArrayNum = iVar5 + 1;
    pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    *(FScriptContainerElement **)pFVar8 = local_78.Data.AllocatorInstance.Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar8 + 8) = local_78.Data.ArrayNum;
    *(int *)(pFVar8 + 0xc) = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
  }
  this->bResult = false;
  this->bQuit = true;
LAB_1494a8e1a:
  if ((param_1->Object == (IHttpRequest *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)param_1->Object + 0xf0))();
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  if ((lpCriticalSection[1].LockCount != 0) &&
     (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    (*(code *)**(undefined8 **)lpCriticalSection[1].DebugInfo)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(lpCriticalSection + 1),0,0,0x10);
    lpCriticalSection[1].LockCount = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  TArray<TSharedPtr<IHttpRequest,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&this->RequestsRemained,param_1,Default);
  CheckComplete(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Process @ 1494a9350

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWN_PakDownloader::Process
          (UWN_PakDownloader *this,FString *param_1,FString *param_2,FString *param_3,int param_4,
          FString *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  char cVar4;
  FString *pFVar5;
  IPlatformFile *pIVar6;
  FStaticBasicLogRecord *pFVar7;
  wchar_t *pwVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  QueryPerformanceCounter(&local_res8);
  dVar9 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->State = Begin;
  this->StartTimeSecs = dVar9 + __real_4170000000000000;
  ::FString::operator=(&this->ProjectName,param_1);
  ::FString::operator=(&this->BranchName,param_2);
  ::FString::operator=(&this->PlatformName,param_3);
  this->PakVersion = param_4;
  pFVar5 = FPaths::ProjectSavedDir();
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar5->Data).ArrayNum;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  local_58.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_58,iVar1,&local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
  }
  pFVar5 = &this->UserDirectoryPath;
  if (pFVar5 != &local_58) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (this->UserDirectoryPath).Data.ArrayNum = local_58.Data.ArrayNum;
    (this->UserDirectoryPath).Data.ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar3 = ::FString::EndsWith(pFVar5,L"/",1,IgnoreCase);
  if (!bVar3) {
    ::FString::AppendChars(pFVar5,L"/",1);
  }
  ::FString::PrintfImpl(&local_48,L"%sPatches/");
  pFVar5 = &this->UserPaksDirectoryPath;
  if (pFVar5 != &local_48) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (this->UserPaksDirectoryPath).Data.ArrayNum = local_48.Data.ArrayNum;
    (this->UserPaksDirectoryPath).Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_38,L"%sTempPatches/");
  pFVar5 = &this->TempUserPaksDirectoryPath;
  if (pFVar5 != &local_38) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (this->TempUserPaksDirectoryPath).Data.ArrayNum = local_38.Data.ArrayNum;
    (this->TempUserPaksDirectoryPath).Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pIVar6 = IPlatformFile::GetPlatformPhysical();
  if ((this->UserDirectoryPath).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(this->UserDirectoryPath).Data.AllocatorInstance.Data;
  }
  cVar4 = (**(code **)((longlong)*pIVar6 + 0x120))(pIVar6,pwVar8);
  if (cVar4 == '\0') {
    if ((byte)Common._0_1_ < 2) {
      return false;
    }
    pFVar7 = &::LOG_Static;
  }
  else {
    pIVar6 = IPlatformFile::GetPlatformPhysical();
    if ((this->UserPaksDirectoryPath).Data.ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(this->UserPaksDirectoryPath).Data.AllocatorInstance.Data;
    }
    cVar4 = (**(code **)((longlong)*pIVar6 + 0x120))(pIVar6,pwVar8);
    if (cVar4 == '\0') {
      if ((byte)Common._0_1_ < 2) {
        return false;
      }
      pFVar7 = &::LOG_Static;
    }
    else {
      pIVar6 = IPlatformFile::GetPlatformPhysical();
      if ((this->TempUserPaksDirectoryPath).Data.ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(this->TempUserPaksDirectoryPath).Data.AllocatorInstance.Data;
      }
      cVar4 = (**(code **)((longlong)*pIVar6 + 0x120))(pIVar6,pwVar8);
      if (cVar4 != '\0') {
        ::FString::operator=(&this->BaseUrl,param_5);
        bVar3 = ::FString::EndsWith(&this->BaseUrl,L"/",1,IgnoreCase);
        if (!bVar3) {
          ::FString::AppendChars(&this->BaseUrl,L"/",1);
        }
        ::FString::PrintfImpl(&local_28,L"%sPaks/%s/%d/");
        pFVar5 = &this->PakBaseUrl;
        if (pFVar5 != &local_28) {
          pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (pFVar5->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
          (this->PakBaseUrl).Data.ArrayNum = local_28.Data.ArrayNum;
          (this->PakBaseUrl).Data.ArrayMax = local_28.Data.ArrayMax;
          local_28.Data.ArrayNum = 0;
          local_28.Data.ArrayMax = 0;
          local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnPreProcessCallback);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPreProcessCallback);
        bVar3 = Request_PakVersionList(this);
        return bVar3;
      }
      if ((byte)Common._0_1_ < 2) {
        return false;
      }
      pFVar7 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&Common);
  return false;
}

// Request_PakSizes @ 1494abce0

bool __thiscall UWN_PakDownloader::Request_PakSizes(UWN_PakDownloader *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FWN_PakVersion *pFVar7;
  uint uVar8;
  wchar_t *pwVar9;
  undefined1 local_res8 [8];
  UWN_PakDownloader *local_res18;
  ForAnyElementType local_28;
  int local_20 [2];
  
  this->State = WaitingForPakFileSizes;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  uVar8 = (this->ModifiedVersions).ArrayNum + (this->NewVersions).ArrayNum;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (0 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar8,&local_28,0,local_20 + 1);
  }
  if ((TArray<FWN_PakVersion,TSizedDefaultAllocator<32>_> *)&local_28 == &this->NewVersions) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar1 = (this->NewVersions).ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,iVar1,&local_28,local_20,local_20 + 1);
    ConstructItems<FWN_PakVersion,FWN_PakVersion,int>
              (local_28.Data + (longlong)iVar5 * 0x40,
               (FWN_PakVersion *)(this->NewVersions).AllocatorInstance.Data,iVar1);
  }
  if ((TArray<FWN_PakVersion,TSizedDefaultAllocator<32>_> *)&local_28 == &this->ModifiedVersions) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar1 = (this->ModifiedVersions).ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,iVar1,&local_28,local_20,local_20 + 1);
    ConstructItems<FWN_PakVersion,FWN_PakVersion,int>
              (local_28.Data + (longlong)iVar5 * 0x40,
               (FWN_PakVersion *)(this->ModifiedVersions).AllocatorInstance.Data,iVar1);
  }
  uVar8 = local_20[0] * 3;
  local_res18 = this;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if ((this->PakStreamDownloaders).ArrayMax < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar8,&(this->PakStreamDownloaders).AllocatorInstance,
               (this->PakStreamDownloaders).ArrayNum,&(this->PakStreamDownloaders).ArrayMax);
  }
  iVar1 = local_20[0];
  pFVar7 = (FWN_PakVersion *)(local_28.Data + (longlong)local_20[0] * 0x40);
  FVar6.Data = local_28.Data;
  do {
    if (local_20[0] != iVar1) {
      `TCheckedPointerIterator<FWN_PakVersion,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if ((FWN_PakVersion *)FVar6.Data == pFVar7) {
      bVar3 = true;
      goto LAB_1494abf08;
    }
    if (param_1) {
      if (((FWN_PakVersion *)FVar6.Data)->bHasPakExtension != false) {
        bVar3 = `UWN_PakDownloader::Request_PakSizes'::__l2::<lambda_1>::operator()
                          (&local_res18,(FWN_PakVersion *)FVar6.Data,L"pak");
        if (!bVar3) {
LAB_1494abf02:
          bVar3 = false;
LAB_1494abf08:
          DestructItems<FWN_PakVersion,int>((FWN_PakVersion *)local_28.Data,local_20[0]);
          if ((FWN_PakVersion *)local_28.Data != (FWN_PakVersion *)0x0) {
            FMemory::Free(local_28.Data);
          }
          return bVar3;
        }
      }
      bVar3 = `UWN_PakDownloader::Request_PakSizes'::__l2::<lambda_1>::operator()
                        (&local_res18,(FWN_PakVersion *)FVar6.Data,L"utoc");
      if (!bVar3) goto LAB_1494abf02;
      pwVar9 = L"ucas";
    }
    else {
      pwVar9 = L"pak";
    }
    bVar3 = `UWN_PakDownloader::Request_PakSizes'::__l2::<lambda_1>::operator()
                      (&local_res18,(FWN_PakVersion *)FVar6.Data,pwVar9);
    if (!bVar3) goto LAB_1494abf02;
    FVar6.Data = FVar6.Data + 0x40;
  } while( true );
}

// Request_PakVersionList @ 1494abf50

/* WARNING: Removing unreachable block (ram,0x0001494ac2f0) */

bool __thiscall UWN_PakDownloader::Request_PakVersionList(UWN_PakDownloader *this)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  ulong64 uVar10;
  FScriptContainerElement *pFVar11;
  TArray<TSharedPtr<IHttpRequest,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  UWN_PakDownloader *local_res8;
  longlong *local_78;
  TReferenceControllerBase<1> *local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  this->State = WaitingForPakVersionList;
  ::FString::PrintfImpl(&local_58,L"%sPakVersionList-%s.json");
  puVar9 = (undefined8 *)
           (**(code **)(this->HttpModule->_padding_ + 0x40))(this->HttpModule,local_38);
  local_78 = (longlong *)*puVar9;
  local_70 = (TReferenceControllerBase<1> *)puVar9[1];
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  if ((local_78 == (longlong *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  (**(code **)(*local_78 + 0x68))(local_78,&local_58);
  if ((local_78 == (longlong *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  plVar4 = local_78;
  pcVar3 = *(code **)(*local_78 + 0x60);
  ::FString::FString(&local_48,L"GET");
  (*pcVar3)(plVar4,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((local_78 == (longlong *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*local_78 + 0xf0))();
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  EnterCriticalSection(lpCriticalSection);
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUWN_PakDownloader____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res8);
    puVar9[4] = OnRequestComplete_PakVersionList;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_78 == (longlong *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  cVar7 = (**(code **)(*local_78 + 0xe8))();
  if (cVar7 == '\0') {
    if ((local_78 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    (**(code **)(*local_78 + 0x18))();
    pTVar2 = &this->FailureReasons;
    ::FString::PrintfImpl(&local_68,L"%s 요청에 실패했습니다 : %s.");
    pFVar11 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar11 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar8 = (this->FailureReasons).ArrayNum;
    piVar1 = &(this->FailureReasons).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->FailureReasons).ArrayNum = iVar8 + 1;
    pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_68.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_68.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this->bResult = false;
    this->bQuit = true;
    CheckComplete(this);
    bVar5 = false;
  }
  else {
    pTVar12 = &this->RequestsRemained;
    pFVar11 = (pTVar12->AllocatorInstance).Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 <
         pFVar11 + (longlong)(this->RequestsRemained).ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar8 = (this->RequestsRemained).ArrayNum;
    piVar1 = &(this->RequestsRemained).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar12->AllocatorInstance,piVar1);
    }
    pFVar11 = (pTVar12->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    (this->RequestsRemained).ArrayNum = iVar8 + 1;
    *(longlong **)pFVar11 = local_78;
    *(TReferenceControllerBase<1> **)(pFVar11 + 8) = local_70;
    if (local_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// Request_Paks @ 1494ac410

bool __thiscall UWN_PakDownloader::Request_Paks(UWN_PakDownloader *this)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  UWN_PakDownloader *local_res10;
  UWN_PakDownloader *local_res18 [2];
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FReadAccessScope local_58;
  
  uVar8 = this->TotalSize;
  this->State = WaitingForPakFiles;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnBeginDownloadPaksCallback,&local_58);
  if ((*(int *)&(this->OnBeginDownloadPaksCallback).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnBeginDownloadPaksCallback).field_0x8,
     plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,uVar8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBeginDownloadPaksCallback);
  local_e0 = (undefined1  [8])0x0;
  local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
             (FWriteAccessScope *)&local_98);
  local_80 = &local_d8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_d8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFWN_CurlHttpStream___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUWN_PakDownloader____A6AXPEBVFWN_CurlHttpStream___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar7[3] = 0;
    local_res10 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res10);
    puVar7[4] = OnProgressPakStreamDownloaderAsync;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  local_f8 = (undefined1  [8])0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_78);
  local_60 = &local_f0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_f0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFWN_CurlHttpStream___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUWN_PakDownloader____A6AXPEBVFWN_CurlHttpStream___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar7[3] = 0;
    local_res18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)local_res18);
    puVar7[4] = OnCompletePakStreamDownloader;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  iVar1 = (this->PakStreamDownloaders).ArrayNum;
  pFVar9 = (this->PakStreamDownloaders).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PakStreamDownloaders).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FWN_PakStreamDownloader,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) {
      bVar5 = true;
      goto LAB_1494ac6f2;
    }
    if (*(longlong *)pFVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    lVar3 = *(longlong *)pFVar9;
    if (*(longlong *)(lVar3 + 0x50) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    bVar5 = FWN_CurlHttpStream::Start
                      (*(FWN_CurlHttpStream **)(lVar3 + 0x50),0x6400000,
                       (TDelegate<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>
                        *)local_e0,
                       (TDelegate<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>
                        *)local_f8);
    if (!bVar5) break;
    pFVar9 = pFVar9 + 0x10;
  }
  if (*(longlong *)pFVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lVar3 = *(longlong *)pFVar9;
  if (*(longlong *)(lVar3 + 0x50) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
            (&this->FailureReasons,
             (TArray<FString,TSizedDefaultAllocator<32>_> *)(*(longlong *)(lVar3 + 0x50) + 0x90));
  bVar5 = false;
  this->bResult = false;
LAB_1494ac6f2:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_c8);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
             (FWriteAccessScope *)&local_b0);
  if ((local_d8.DelegateSize != 0) &&
     (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d8,0,0,0x10);
    local_d8.DelegateSize = 0;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  return bVar5;
}

// SavePakVersionList @ 1494ad1e0

/* WARNING: Removing unreachable block (ram,0x0001494ad340) */

bool __thiscall UWN_PakDownloader::SavePakVersionList(UWN_PakDownloader *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%sPakVersionList-%s.json");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar6.Data = local_18.Data.AllocatorInstance.Data;
  }
  bVar3 = FWN_PakVersionList::Save(&this->VersionList,(wchar_t *)FVar6.Data);
  if (bVar3) {
    bVar3 = true;
  }
  else {
    pTVar8 = &this->FailureReasons;
    ::FString::PrintfImpl(&local_28,L"%s 를 저장하는데 실패했습니다.");
    pFVar7 = (pTVar8->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         pFVar7 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar5 = (this->FailureReasons).ArrayNum;
    piVar1 = &(this->FailureReasons).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar8->AllocatorInstance,piVar1);
    }
    (this->FailureReasons).ArrayNum = iVar5 + 1;
    pFVar7 = (pTVar8->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar7 = 0;
    *(FScriptContainerElement **)pFVar7 = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar7 + 8) = local_28.Data.ArrayNum;
    *(int *)(pFVar7 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar3 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// StaticRegisterNativesUWN_PakDownloader @ 1494ae2e0

void __cdecl UWN_PakDownloader::StaticRegisterNativesUWN_PakDownloader(void)

{
  return;
}

