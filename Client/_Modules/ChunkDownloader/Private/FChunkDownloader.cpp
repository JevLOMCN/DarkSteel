// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 40

// FChunkDownloader @ 14f01e920

FChunkDownloader * __thiscall FChunkDownloader::FChunkDownloader(FChunkDownloader *this)

{
  *(undefined8 *)&(this->OnChunkMounted).field_0x18 = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnChunkMounted = 0;
  *(undefined8 *)&(this->OnChunkMounted).field_0x8 = 0;
  *(undefined8 *)&(this->OnChunkMounted).field_0x10 = 0;
  *(undefined8 *)&this->OnDownloadAnalytics = 0;
  *(undefined8 *)&(this->OnDownloadAnalytics).field_0x28 = 0;
  (this->LoadingModeStats).FilesDownloaded = 0;
  (this->LoadingModeStats).TotalFilesToDownload = 0;
  (this->LoadingModeStats).BytesDownloaded = 0;
  (this->LoadingModeStats).TotalBytesToDownload = 0;
  (this->LoadingModeStats).ChunksMounted = 0;
  (this->LoadingModeStats).TotalChunksToMount = 0;
  (this->LoadingModeStats).LoadingStartTime.Ticks = 0;
  FText::FText(&(this->LoadingModeStats).LastError);
  (this->PostLoadCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostLoadCallbacks).ArrayNum = 0;
  (this->PostLoadCallbacks).ArrayMax = 0;
  *(undefined8 *)&this->UpdateBuildCallback = 0;
  *(undefined8 *)&(this->UpdateBuildCallback).field_0x28 = 0;
  (this->PlatformName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformName).Data.ArrayNum = 0;
  (this->PlatformName).Data.ArrayMax = 0;
  (this->CacheFolder).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheFolder).Data.ArrayNum = 0;
  (this->CacheFolder).Data.ArrayMax = 0;
  (this->EmbeddedFolder).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmbeddedFolder).Data.ArrayNum = 0;
  (this->EmbeddedFolder).Data.ArrayMax = 0;
  (this->LastDeploymentName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastDeploymentName).Data.ArrayNum = 0;
  (this->LastDeploymentName).Data.ArrayMax = 0;
  (this->ContentBuildId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentBuildId).Data.ArrayNum = 0;
  (this->ContentBuildId).Data.ArrayMax = 0;
  (this->BuildBaseUrls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildBaseUrls).ArrayNum = 0;
  (this->BuildBaseUrls).ArrayMax = 0;
  *(undefined8 *)&this->Chunks = 0;
  *(undefined8 *)&(this->Chunks).field_0x8 = 0;
  *(undefined8 *)&(this->Chunks).field_0x20 = 0;
  this->LoadingCompleteLatch = 0;
  *(undefined4 *)&(this->Chunks).field_0x28 = 0;
  *(undefined4 *)&(this->Chunks).field_0x2c = 0x80;
  *(undefined4 *)&(this->Chunks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Chunks).field_0x34 = 0;
  *(undefined8 *)&(this->Chunks).field_0x40 = 0;
  *(undefined4 *)&(this->Chunks).field_0x48 = 0;
  *(undefined8 *)&this->PakFiles = 0;
  *(undefined8 *)&(this->PakFiles).field_0x8 = 0;
  *(undefined8 *)&(this->PakFiles).field_0x20 = 0;
  *(undefined4 *)&(this->PakFiles).field_0x28 = 0;
  *(undefined4 *)&(this->PakFiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->PakFiles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PakFiles).field_0x34 = 0;
  *(undefined8 *)&(this->PakFiles).field_0x40 = 0;
  *(undefined4 *)&(this->PakFiles).field_0x48 = 0;
  *(undefined8 *)&this->EmbeddedPaks = 0;
  *(undefined8 *)&(this->EmbeddedPaks).field_0x8 = 0;
  *(undefined8 *)&(this->EmbeddedPaks).field_0x20 = 0;
  *(undefined4 *)&(this->EmbeddedPaks).field_0x28 = 0;
  *(undefined4 *)&(this->EmbeddedPaks).field_0x2c = 0x80;
  *(undefined4 *)&(this->EmbeddedPaks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EmbeddedPaks).field_0x34 = 0;
  *(undefined8 *)&(this->EmbeddedPaks).field_0x40 = 0;
  *(undefined4 *)&(this->EmbeddedPaks).field_0x48 = 0;
  this->bNeedsManifestSave = false;
  (this->MountTicker).Object = (FElement *)0x0;
  (this->MountTicker).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ManifestRequest).Object = (IHttpRequest *)0x0;
  (this->ManifestRequest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->TargetDownloadsInFlight = 1;
  (this->DownloadRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DownloadRequests).ArrayNum = 0;
  (this->DownloadRequests).ArrayMax = 0;
  return this;
}

// ~FChunkDownloader @ 14f01f160

void __thiscall FChunkDownloader::~FChunkDownloader(FChunkDownloader *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  void *pvVar7;
  longlong *plVar8;
  ITextData *pIVar9;
  code *pcVar10;
  bool bVar11;
  longlong *plVar12;
  
  if (0 < *(int *)&(this->PakFiles).field_0x8 - *(int *)&(this->PakFiles).field_0x34) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("PakFiles.Num() <= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                        ,0xfe,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  DestructItems<TSharedRef<FChunkDownloader::FPakFile,1>,int>
            ((TSharedRef<FChunkDownloader::FPakFile,1> *)
             (this->DownloadRequests).AllocatorInstance.Data,(this->DownloadRequests).ArrayNum);
  pFVar5 = (this->DownloadRequests).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ManifestRequest).SharedReferenceCount.ReferenceController);
  pTVar6 = (this->MountTicker).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  *(undefined4 *)&(this->EmbeddedPaks).field_0x48 = 0;
  pvVar7 = *(void **)&(this->EmbeddedPaks).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPakFileEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FPakFileEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FPakFileEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EmbeddedPaks);
  *(undefined4 *)&(this->PakFiles).field_0x48 = 0;
  pvVar7 = *(void **)&(this->PakFiles).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PakFiles);
  *(undefined4 *)&(this->Chunks).field_0x48 = 0;
  pvVar7 = *(void **)&(this->Chunks).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Chunks);
  DestructItems<FString,int>
            ((FString *)(this->BuildBaseUrls).AllocatorInstance.Data,(this->BuildBaseUrls).ArrayNum)
  ;
  pFVar5 = (this->BuildBaseUrls).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->ContentBuildId).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->LastDeploymentName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->EmbeddedFolder).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->CacheFolder).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->PlatformName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (*(longlong *)&this->UpdateBuildCallback != 0) {
    plVar8 = *(longlong **)&(this->UpdateBuildCallback).field_0x28;
    plVar12 = (longlong *)&(this->UpdateBuildCallback).field_0x10;
    if (plVar8 != (longlong *)0x0) {
      plVar12 = plVar8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  DestructItems<TFunction<void___cdecl(bool)>,int>
            ((TFunction<void___cdecl(bool)> *)(this->PostLoadCallbacks).AllocatorInstance.Data,
             (this->PostLoadCallbacks).ArrayNum);
  pFVar5 = (this->PostLoadCallbacks).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pIVar9 = (this->LoadingModeStats).LastError.TextData.Reference;
  if (pIVar9 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar9 + 0x10))();
  }
  if (*(longlong *)&this->OnDownloadAnalytics != 0) {
    plVar8 = *(longlong **)&(this->OnDownloadAnalytics).field_0x28;
    plVar12 = (longlong *)&(this->OnDownloadAnalytics).field_0x10;
    if (plVar8 != (longlong *)0x0) {
      plVar12 = plVar8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChunkMounted).field_0x8,*(int *)&(this->OnChunkMounted).field_0x10);
  pvVar7 = *(void **)&(this->OnChunkMounted).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChunkMounted);
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

// operator() @ 14f01f670

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FChunkDownloader::BeginLoadingMode'::__l2::<lambda_1>::operator()(void *this,float param_1)

{
  int *piVar1;
  TArray<TFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<int> aVar3;
  int iVar4;
  FChunkDownloader *this_00;
  TFunction<void___cdecl(bool)> *pTVar5;
  code *pcVar6;
  atomic<int> aVar7;
  undefined8 uVar8;
  longlong *plVar9;
  TReferenceControllerBase<1> *pTVar10;
  TFunction<void___cdecl(bool)> *pTVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar10->SharedReferenceCount;
    if (aVar7 != (atomic<int>)0x0) {
LAB_14f01f690:
      LOCK();
      aVar3 = pTVar10->SharedReferenceCount;
      bVar12 = aVar7 == aVar3;
      if (bVar12) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar3 = aVar7;
      }
      aVar7 = aVar3;
      UNLOCK();
      if (!bVar12) goto code_r0x00014f01f69a;
      this_00 = *(FChunkDownloader **)this;
      if ((this_00 == (FChunkDownloader *)0x0) || ((this_00->PostLoadCallbacks).ArrayNum < 1))
      goto LAB_14f01f6a2;
      FChunkDownloader::ComputeLoadingStats(this_00);
      if (((this_00->LoadingModeStats).TotalFilesToDownload <=
           (this_00->LoadingModeStats).FilesDownloaded) &&
         ((this_00->LoadingModeStats).TotalChunksToMount <=
          (this_00->LoadingModeStats).ChunksMounted)) {
        this_00->LoadingCompleteLatch = this_00->LoadingCompleteLatch + 1;
        if (this_00->LoadingCompleteLatch < 5) goto LAB_14f01f813;
        if (4 < (byte)LogChunkDownloader._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
        }
        pTVar2 = &this_00->PostLoadCallbacks;
        pTVar5 = (TFunction<void___cdecl(bool)> *)(pTVar2->AllocatorInstance).Data;
        piVar1 = &(this_00->PostLoadCallbacks).ArrayMax;
        (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar4 = (this_00->PostLoadCallbacks).ArrayNum;
        (this_00->PostLoadCallbacks).ArrayNum = 0;
        *piVar1 = 0;
        if (0 < iVar4) {
          DestructItems<TFunction<void___cdecl(bool)>,int>
                    ((TFunction<void___cdecl(bool)> *)(pTVar2->AllocatorInstance).Data,0);
          (this_00->PostLoadCallbacks).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
          }
          for (pTVar11 = pTVar5; pTVar11 != pTVar5 + iVar4; pTVar11 = pTVar11 + 1) {
            local_res8[0] = FText::IsEmpty(&(this_00->LoadingModeStats).LastError);
            UE::Core::Private::Function::CheckCallable(*(void **)pTVar11);
            pcVar6 = *(code **)pTVar11;
            plVar9 = (longlong *)&pTVar11->field_0x10;
            if (*(longlong **)&pTVar11->field_0x28 != (longlong *)0x0) {
              plVar9 = *(longlong **)&pTVar11->field_0x28;
            }
            uVar8 = (**(code **)(*plVar9 + 8))();
            (*pcVar6)(uVar8,local_res8);
          }
        }
        DestructItems<TFunction<void___cdecl(bool)>,int>(pTVar5,iVar4);
        if (pTVar5 != (TFunction<void___cdecl(bool)> *)0x0) {
          FMemory::Free(pTVar5);
        }
        goto LAB_14f01f6a2;
      }
      this_00->LoadingCompleteLatch = 0;
LAB_14f01f813:
      bVar12 = true;
      goto LAB_14f01f6a4;
    }
LAB_14f01f69e:
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
  }
LAB_14f01f6a2:
  bVar12 = false;
LAB_14f01f6a4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return bVar12;
code_r0x00014f01f69a:
  if (aVar7 == (atomic<int>)0x0) goto LAB_14f01f69e;
  goto LAB_14f01f690;
}

// operator() @ 14f01f820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`FChunkDownloader::TryDownloadBuildManifest'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
          bool param_3)

{
  FChunkDownloader *this_00;
  ITextData *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  int iVar5;
  atomic<int> aVar6;
  IHttpResponse *pIVar7;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  IHttpRequest *pIVar12;
  FText *pFVar13;
  FSharedReferencer<1> FVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined1 local_res20 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1c8;
  FText local_1b8;
  undefined8 local_1a8;
  FSharedReferencer<1> FStack_1a0;
  TSharedPtr<FCulture,1> local_198;
  FTextFormat local_188;
  FText local_178;
  TSharedPtr<FCulture,1> local_168;
  TSharedPtr<FCulture,1> local_158;
  TSharedPtr<FCulture,1> local_148;
  FFormatArgumentValue local_138;
  undefined4 local_118;
  FText local_108;
  void *local_f8 [2];
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FTextFormat local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FText local_48;
  FTextFormat local_38;
  
  FText::FText(&local_1b8);
  if ((param_3) && (param_2->Object != (IHttpResponse *)0x0)) {
    iVar5 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (6 < iVar5 - 200U) {
      if (1 < (byte)LogChunkDownloader._0_1_) {
        pIVar12 = TSharedPtr<IHttpRequest,1>::operator->(param_1);
        (*(code *)**(undefined8 **)pIVar12)(pIVar12);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
      local_158.Object = (FCulture *)0x0;
      local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar9 = FText::AsNumber(&local_78,iVar5,(FNumberFormattingOptions *)0x0,&local_158);
      local_168.Object = (FCulture *)0x0;
      local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar10 = FText::AsNumber(&local_68,*(int *)((longlong)this + 0x10),
                                (FNumberFormattingOptions *)0x0,&local_168);
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_c8,L"ChunkDownloader",L"ManifestHttpError_FailureCode",
                           L"[Try {0}] Manifest download failed (HTTP {1})");
      pFVar11 = FTextFormat::FTextFormat(&local_58,pFVar13,Default);
      local_138.Type = Text;
      FText::FText((FText *)&local_138.TextValue,pFVar10);
      if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_118 = 4;
      FText::FText(&local_108,pFVar9);
      if ((local_108.TextData.Reference == (ITextData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_1c8.AllocatorInstance,2,&local_1c8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_1c8.AllocatorInstance.Data,&local_138,2);
      local_188.TextFormatData.Object = (pFVar11->TextFormatData).Object;
      local_188.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar11->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_188.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_188.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_188.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_178,&local_188,&local_1c8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
      if ((FFormatArgumentValue *)local_1c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_1c8.AllocatorInstance.Data);
      }
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      if (local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_138.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar11->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar1 = (pFVar10->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pIVar1 = (pFVar9->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      FText::operator=(&local_1b8,&local_178);
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      }
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
      FVar14.ReferenceController = local_158.SharedReferenceCount.ReferenceController;
      goto LAB_14f01fcdc;
    }
    pIVar7 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
    pFVar8 = (FString *)(**(code **)((longlong)*pIVar7 + 0x60))(pIVar7,local_f8);
    bVar4 = WriteStringAsUtf8TextFile(pFVar8,(FString *)((longlong)this + 0x18));
    if (local_f8[0] != (void *)0x0) {
      FMemory::Free(local_f8[0]);
    }
    if (!bVar4) {
      if (1 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
      local_198.Object = (FCulture *)0x0;
      local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar9 = FText::AsNumber(&local_98,*(int *)((longlong)this + 0x10),
                               (FNumberFormattingOptions *)0x0,&local_198);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_d8,L"ChunkDownloader",L"FailedToWriteManifest",
                           L"[Try {0}] Failed to write manifest.");
      pFVar11 = FTextFormat::FTextFormat(&local_88,pFVar10,Default);
      pFVar9 = FText::Format<FText>(&local_e8,pFVar11,pFVar9);
      FText::operator=(&local_1b8,pFVar9);
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
      FVar14.ReferenceController = local_198.SharedReferenceCount.ReferenceController;
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
        FVar14.ReferenceController = local_198.SharedReferenceCount.ReferenceController;
      }
      goto LAB_14f01fcdc;
    }
  }
  else {
    if (1 < (byte)LogChunkDownloader._0_1_) {
      if ((param_1->Object == (IHttpRequest *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)**(undefined8 **)param_1->Object)();
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::AsNumber(&local_48,*(int *)((longlong)this + 0x10),
                             (FNumberFormattingOptions *)0x0,&local_148);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_a8,L"ChunkDownloader",L"ManifestHttpError_Generic",
                         L"[Try {0}] Connection issues downloading manifest. Check your network connection..."
                        );
    pFVar11 = FTextFormat::FTextFormat(&local_38,pFVar10,Default);
    pFVar9 = FText::Format<FText>(&local_b8,pFVar11,pFVar9);
    FText::operator=(&local_1b8,pFVar9);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    FVar14.ReferenceController = local_148.SharedReferenceCount.ReferenceController;
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      FVar14.ReferenceController = local_148.SharedReferenceCount.ReferenceController;
    }
LAB_14f01fcdc:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar14.ReferenceController);
  }
  pTVar15 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar15->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar15 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f01fd05;
      }
      LOCK();
      aVar6 = pTVar15->SharedReferenceCount;
      bVar4 = aVar3 == aVar6;
      if (bVar4) {
        pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar4);
    this_00 = *(FChunkDownloader **)this;
    if (this_00 != (FChunkDownloader *)0x0) {
      local_1a8 = 0;
      FStack_1a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this_00->ManifestRequest != (TSharedPtr<IHttpRequest,1> *)&local_1a8) {
        (this_00->ManifestRequest).Object = (IHttpRequest *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this_00->ManifestRequest).SharedReferenceCount,&FStack_1a0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_1a0.ReferenceController);
      pIVar1 = (this_00->LoadingModeStats).LastError.TextData.Reference;
      if (pIVar1 != local_1b8.TextData.Reference) {
        (this_00->LoadingModeStats).LastError.TextData.Reference = local_1b8.TextData.Reference;
        if (local_1b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1b8.TextData.Reference + 8))
                    (local_1b8.TextData.Reference,local_res20);
        }
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
        }
      }
      (this_00->LoadingModeStats).LastError.Flags = local_1b8.Flags;
      FChunkDownloader::TryLoadBuildManifest(this_00,*(int *)((longlong)this + 0x10) + 1);
      goto LAB_14f01fd5d;
    }
  }
LAB_14f01fd05:
  if (2 < (byte)LogChunkDownloader._0_1_) {
    if ((param_1->Object == (IHttpRequest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)**(undefined8 **)param_1->Object)();
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
LAB_14f01fd5d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  if (local_1b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 14f01fe50

void __thiscall
`FChunkDownloader::MountChunkInternal'::__l65::<lambda_1>::operator()(void *this,bool param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  undefined8 uVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined1 local_res10 [24];
  
  if (param_1) {
    pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar6->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar6 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14f01fe81;
        }
        LOCK();
        aVar3 = pTVar6->SharedReferenceCount;
        bVar7 = aVar2 == aVar3;
        if (bVar7) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar7);
      if (*(FChunkDownloader **)this != (FChunkDownloader *)0x0) {
        FChunkDownloader::MountChunk
                  (*(FChunkDownloader **)this,*(int *)((longlong)this + 0x10),
                   (TFunction<void___cdecl(bool)> *)((longlong)this + 0x20));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        return;
      }
    }
LAB_14f01fe81:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    local_res10[0] = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
    pcVar1 = *(code **)((longlong)this + 0x20);
    plVar5 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x48);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar4,local_res10);
  }
  return;
}

// BeginLoadingMode @ 14f020d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChunkDownloader::BeginLoadingMode(FChunkDownloader *this,TFunction<void___cdecl(bool)> *param_1)

{
  int *piVar1;
  atomic<int> aVar2;
  TFunction<void___cdecl(bool)> *pTVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FChunkDownloader *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FText *pFVar10;
  FDateTime FVar11;
  TSharedRef<FChunkDownloader,1> *pTVar12;
  FTSTicker *this_00;
  undefined8 *puVar13;
  ulong64 uVar14;
  TArray<TFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_> *pTVar15;
  atomic<int> *paVar16;
  longlong lVar17;
  TReferenceControllerBase<1> *pTVar18;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FText local_58;
  TSharedRef<FChunkDownloader,1> local_48;
  TWeakPtr<FTSTicker::FElement,1> local_38;
  
  if (*(longlong *)param_1 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Callback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                       ,0x3db,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((this->PostLoadCallbacks).ArrayNum < 1) {
    if (4 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
    pFVar10 = FText::FText(&local_58);
    FText::operator=(&(this->LoadingModeStats).LastError,pFVar10);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    (this->LoadingModeStats).BytesDownloaded = 0;
    (this->LoadingModeStats).FilesDownloaded = 0;
    (this->LoadingModeStats).ChunksMounted = 0;
    FVar11 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
    (this->LoadingModeStats).LoadingStartTime.Ticks = *FVar11.Ticks;
    ComputeLoadingStats(this);
    pTVar15 = &this->PostLoadCallbacks;
    pTVar3 = (TFunction<void___cdecl(bool)> *)(pTVar15->AllocatorInstance).Data;
    if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->PostLoadCallbacks).ArrayMax)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = (this->PostLoadCallbacks).ArrayNum;
    piVar1 = &(this->PostLoadCallbacks).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&pTVar15->AllocatorInstance,piVar1);
    }
    (this->PostLoadCallbacks).ArrayNum = iVar9 + 1;
    pFVar4 = (pTVar15->AllocatorInstance).Data;
    lVar17 = (longlong)iVar9 * 0x30;
    *(undefined8 *)(pFVar4 + lVar17) = *(undefined8 *)param_1;
    *(undefined8 *)(pFVar4 + lVar17 + 0x28) = 0;
    if (*(longlong *)(pFVar4 + lVar17) != 0) {
      puVar13 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar13 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar13)();
    }
    this->LoadingCompleteLatch = 0;
    pTVar12 = TSharedFromThis<FChunkDownloader,1>::AsShared
                        ((TSharedFromThis<FChunkDownloader,1> *)this,&local_48);
    pTVar5 = (pTVar12->SharedReferenceCount).ReferenceController;
    pFVar6 = pTVar12->Object;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      paVar16 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      paVar16 = &pTVar5->WeakReferenceCount;
      LOCK();
      *paVar16 = (atomic<int>)((int)*paVar16 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    this_00 = FTSTicker::GetCoreTicker();
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar16 = (atomic<int>)((int)*paVar16 + 1);
      UNLOCK();
    }
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    local_60 = &local_a0;
    puVar13 = UE::Core::Private::DelegateAllocate(0x28,&local_a0);
    pTVar18 = pTVar5;
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar14;
      *puVar13 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FChunkDownloader::BeginLoadingMode'::`2'::<lambda_1>_>
                  ::_vftable_;
      puVar13[3] = pFVar6;
      puVar13[4] = pTVar5;
      pTVar18 = (TReferenceControllerBase<1> *)0x0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    FTSTicker::AddTicker
              (this_00,&local_38,
               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_a8,0.0);
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar16 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar16;
      *paVar16 = (atomic<int>)((int)*paVar16 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_38.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_90);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a8);
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar16 = &pTVar18->WeakReferenceCount;
      aVar2 = *paVar16;
      *paVar16 = (atomic<int>)((int)*paVar16 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar18->_padding_ + 8))(pTVar18,1);
      }
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar16 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar16;
      *paVar16 = (atomic<int>)((int)*paVar16 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  else {
    if (4 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
    pTVar15 = &this->PostLoadCallbacks;
    pTVar3 = (TFunction<void___cdecl(bool)> *)(pTVar15->AllocatorInstance).Data;
    if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->PostLoadCallbacks).ArrayMax)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = (this->PostLoadCallbacks).ArrayNum;
    piVar1 = &(this->PostLoadCallbacks).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&pTVar15->AllocatorInstance,piVar1);
    }
    (this->PostLoadCallbacks).ArrayNum = iVar9 + 1;
    pFVar4 = (pTVar15->AllocatorInstance).Data;
    lVar17 = (longlong)iVar9 * 0x30;
    *(undefined8 *)(pFVar4 + lVar17) = *(undefined8 *)param_1;
    *(undefined8 *)(pFVar4 + lVar17 + 0x28) = 0;
    if (*(longlong *)(pFVar4 + lVar17) != 0) {
      puVar13 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar13 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar13)();
    }
  }
  return;
}

// CancelDownload @ 14f021560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FChunkDownloader::CancelDownload
          (FChunkDownloader *this,TSharedRef<FChunkDownloader::FPakFile,1> *param_1,bool param_2)

{
  FDownload *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  longlong *plVar8;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  this_00 = (param_1->Object->Download).Object;
  if (this_00 != (FDownload *)0x0) {
    if ((this_00->bHasCompleted != false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bHasCompleted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\Download.cpp"
                           ,0x34,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (2 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
    if (this_00->bIsCancelled == false) {
      this_00->bIsCancelled = true;
      UE::Core::Private::Function::CheckCallable(*(void **)&this_00->CancelCallback);
      pcVar2 = *(code **)&this_00->CancelCallback;
      plVar1 = *(longlong **)&(this_00->CancelCallback).field_0x28;
      plVar8 = (longlong *)&(this_00->CancelCallback).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar8 = plVar1;
      }
      uVar4 = (**(code **)(*plVar8 + 8))();
      (*pcVar2)(uVar4);
    }
    pFVar5 = FText::FromString(&local_28,(FString *)(this_00->PakFile).Object);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"ChunkDownloader",L"DownloadCanceled",
                        L"Download of \'%s\' was canceled.");
    pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar6,Default);
    pFVar5 = FText::Format<FText>(&local_48,pFVar7,pFVar5);
    FDownload::OnCompleted(this_00,param_2,pFVar5);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (((param_1->Object->Download).Object != (FDownload *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PakFile->Download.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                           ,0x2d3,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// CheckFileSha1Hash @ 14f021700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FChunkDownloader::CheckFileSha1Hash(FString *param_1,FString *param_2)

{
  char cVar1;
  int iVar2;
  IPlatformFile *pIVar3;
  longlong *plVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  ulong64 uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  FString FStack_10118;
  FString FStack_10108;
  FSHA1 FStack_100f8;
  uchar auStack_10068 [32];
  uchar auStack_10048 [65552];
  
  pIVar3 = IPlatformFile::GetPlatformPhysical();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0xe8))(pIVar3,pwVar6,0);
  if (plVar4 == (longlong *)0x0) {
    if (1 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
    bVar10 = false;
  }
  else {
    FSHA1::FSHA1(&FStack_100f8);
    lVar5 = (**(code **)(*plVar4 + 0x50))(plVar4);
    lVar8 = 0;
    lVar9 = lVar8;
    if (0 < lVar5) {
      do {
        uVar7 = lVar5 - lVar9;
        if (0x10000 < (longlong)uVar7) {
          uVar7 = 0x10000;
        }
        cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,auStack_10048,uVar7);
        if (cVar1 == '\0') {
          if (1 < (byte)LogChunkDownloader._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader)
            ;
          }
          (**(code **)*plVar4)(plVar4,1);
          bVar10 = false;
          goto LAB_14f02193f;
        }
        lVar9 = lVar9 + uVar7;
        FSHA1::Update(&FStack_100f8,auStack_10048,uVar7);
      } while (lVar9 < lVar5);
    }
    (**(code **)*plVar4)(plVar4,1);
    FSHA1::Final(&FStack_100f8);
    FSHA1::GetHash(&FStack_100f8,auStack_10068);
    ::FString::FString(&FStack_10118,L"SHA1:");
    do {
      ::FString::PrintfImpl(&FStack_10108,L"%02X");
      iVar2 = FStack_10108.Data.ArrayNum + -1;
      if (FStack_10108.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      ::FString::AppendChars
                (&FStack_10118,(wchar_t *)FStack_10108.Data.AllocatorInstance.Data,iVar2);
      if (FStack_10108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_10108.Data.AllocatorInstance.Data);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < 0x14);
    iVar2 = (param_2->Data).ArrayNum;
    if (iVar2 == FStack_10118.Data.ArrayNum) {
      if (iVar2 < 2) {
        bVar10 = true;
      }
      else {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                           (wchar_t *)FStack_10118.Data.AllocatorInstance.Data);
        bVar10 = iVar2 == 0;
      }
    }
    else {
      bVar10 = iVar2 + FStack_10118.Data.ArrayNum == 1;
    }
    if (FStack_10118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_10118.Data.AllocatorInstance.Data);
    }
LAB_14f02193f:
    FSHA1::~FSHA1(&FStack_100f8);
  }
  return bVar10;
}

// ChunkStatusToString @ 14f021990

wchar_t * __cdecl FChunkDownloader::ChunkStatusToString(EChunkStatus param_1)

{
  switch(param_1) {
  case Mounted:
    return L"Mounted";
  case Cached:
    return L"Cached";
  case Downloading:
    return L"Downloading";
  case Partial:
    return L"Partial";
  case Remote:
    return L"Remote";
  case Unknown:
    return L"Unknown";
  default:
    return L"Invalid";
  }
}

// CompleteMountTask @ 14f021ba0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChunkDownloader::CompleteMountTask(FChunkDownloader *this,FChunk *param_1)

{
  int *piVar1;
  int iVar2;
  FAsyncTask<FChunkDownloader::FPakMountWork> *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FScriptContainerElement *pFVar9;
  TFunction<void___cdecl(bool)> *pTVar10;
  FScriptContainerElement *pFVar11;
  TFunction<void___cdecl(bool)> *pTVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  if (param_1->MountTask == (FAsyncTask<FChunkDownloader::FPakMountWork> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Chunk.MountTask != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                       ,0x644,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((FThreadSafeCounter *)&param_1->MountTask->_padding_)->Counter == 0) {
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)param_1->MountTask,false);
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Chunk.MountTask->IsDone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                       ,0x645,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  piVar1 = &(this->LoadingModeStats).ChunksMounted;
  *piVar1 = *piVar1 + 1;
  this_00 = param_1->MountTask;
  param_1->MountTask = (FAsyncTask<FChunkDownloader::FPakMountWork> *)0x0;
  FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_00);
  iVar2 = (this_00->Task).MountedPakFiles.ArrayNum;
  pFVar9 = (this_00->Task).MountedPakFiles.AllocatorInstance.Data;
  pFVar11 = pFVar9 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this_00->Task).MountedPakFiles.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedRef<FChunkDownloader::FPakFile,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar11) break;
    lVar3 = *(longlong *)pFVar9;
    pFVar9 = pFVar9 + 0x10;
    *(undefined1 *)(lVar3 + 0x41) = 1;
  }
  iVar2 = (param_1->PakFiles).ArrayNum;
  pFVar9 = (param_1->PakFiles).AllocatorInstance.Data;
  pFVar11 = pFVar9 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((param_1->PakFiles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedRef<FChunkDownloader::FPakFile,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar11) break;
    if (*(char *)((longlong)&(*(FString **)pFVar9)[4].Data.AllocatorInstance.Data + 1) == '\0') {
      pFVar6 = FText::FromString(&local_58,*(FString **)pFVar9);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"ChunkDownloader",L"FailedToMount",L"Failed to mount {0}.");
      pFVar8 = FTextFormat::FTextFormat(&local_48,pFVar7,Default);
      pFVar6 = FText::Format<FText>(&local_78,pFVar8,pFVar6);
      FText::operator=(&(this->LoadingModeStats).LastError,pFVar6);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      bVar5 = false;
      param_1->bIsMounted = false;
      if (1 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
LAB_14f021d84:
      iVar2 = (this_00->Task).PostMountCallbacks.ArrayNum;
      pTVar10 = (TFunction<void___cdecl(bool)> *)
                (this_00->Task).PostMountCallbacks.AllocatorInstance.Data;
      pTVar12 = pTVar10 + iVar2;
      while( true ) {
        if ((this_00->Task).PostMountCallbacks.ArrayNum != iVar2) {
          `TCheckedPointerIterator<TFunction<void___cdecl(bool)>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pTVar10 == pTVar12) break;
        ExecuteNextTick(this,pTVar10,bVar5);
        pTVar10 = pTVar10 + 1;
      }
      TMulticastDelegate<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnChunkMounted,param_1->ChunkId,bVar5);
      if (this_00 != (FAsyncTask<FChunkDownloader::FPakMountWork> *)0x0) {
        (**(code **)(this_00->_padding_ + 0x28))(this_00,1);
      }
      ComputeLoadingStats(this);
      return;
    }
    pFVar9 = pFVar9 + 0x10;
  }
  param_1->bIsMounted = true;
  if (4 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
  bVar5 = true;
  goto LAB_14f021d84;
}

// ComputeLoadingStats @ 14f021e10

void __thiscall FChunkDownloader::ComputeLoadingStats(FChunkDownloader *this)

{
  int *piVar1;
  ulong64 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar3 = &(this->Chunks).field_0x10;
  (this->LoadingModeStats).TotalBytesToDownload = (this->LoadingModeStats).BytesDownloaded;
  iVar14 = 0;
  (this->LoadingModeStats).TotalFilesToDownload = (this->LoadingModeStats).FilesDownloaded;
  uVar8 = 1;
  (this->LoadingModeStats).TotalChunksToMount = (this->LoadingModeStats).ChunksMounted;
  iVar5 = *(int *)&(this->Chunks).field_0x28;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar5 != 0) {
    puVar17 = *(uint **)&(this->Chunks).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar3;
    }
    uVar11 = *puVar17;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14f021ece;
      uVar11 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar11 & uVar11;
    uVar4 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar9 = iVar16 + -1 + local_res18;
    if (iVar5 < iVar9) {
      iVar9 = iVar5;
    }
  }
LAB_14f021ece:
  uVar11 = *(uint *)&(this->Chunks).field_0x28;
  uVar18 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar14);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Chunks).field_0x8 - *(int *)&(this->Chunks).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar11 < 0) || (iVar5 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->Chunks).field_0x28;
  if (uVar11 != uVar8) {
    puVar15 = *(undefined1 **)&(this->Chunks).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar11 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14f021fd0;
      uVar11 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar18;
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
  }
LAB_14f021fd0:
  while( true ) {
    if (*(int *)&(this->Chunks).field_0x8 - *(int *)&(this->Chunks).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    if (*(longlong *)
         (*(longlong *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + *(longlong *)&this->Chunks)
         + 0x18) != 0) {
      piVar1 = &(this->LoadingModeStats).TotalChunksToMount;
      *piVar1 = *piVar1 + 1;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  iVar5 = (this->DownloadRequests).ArrayNum;
  pFVar13 = (this->DownloadRequests).AllocatorInstance.Data;
  pFVar12 = pFVar13 + (longlong)iVar5 * 0x10;
  while( true ) {
    if ((this->DownloadRequests).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TSharedRef<FChunkDownloader::FPakFile,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar13 == pFVar12) break;
    piVar1 = &(this->LoadingModeStats).TotalFilesToDownload;
    *piVar1 = *piVar1 + 1;
    lVar10 = *(longlong *)pFVar13;
    if (*(longlong *)(lVar10 + 0x58) == 0) {
      puVar2 = &(this->LoadingModeStats).TotalBytesToDownload;
      *puVar2 = *puVar2 + *(longlong *)(lVar10 + 0x10);
      pFVar13 = pFVar13 + 0x10;
    }
    else {
      puVar2 = &(this->LoadingModeStats).TotalBytesToDownload;
      *puVar2 = *puVar2 + (*(longlong *)(lVar10 + 0x10) -
                          (longlong)*(int *)(*(longlong *)(lVar10 + 0x58) + 0xa0));
      pFVar13 = pFVar13 + 0x10;
    }
  }
  return;
}

// DownloadChunk @ 14f0238b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChunkDownloader::DownloadChunk
          (FChunkDownloader *this,int param_1,TFunction<void___cdecl(bool)> *param_2,int param_3)

{
  FChunk *this_00;
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->Chunks).field_0x8 != *(int *)&(this->Chunks).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Chunks).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Chunks).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->Chunks).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&this->Chunks);
        if (*piVar4 == param_1) {
          piVar3 = piVar4 + 2;
          if (piVar4 == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          if ((piVar3 != (int *)0x0) &&
             (this_00 = *(FChunk **)piVar3, 0 < (this_00->PakFiles).ArrayNum)) {
            bVar1 = FChunk::IsCached(this_00);
            if (!bVar1) {
              DownloadChunkInternal(this,this_00,param_2,param_3);
              SaveLocalManifest(this,false);
              ComputeLoadingStats(this);
              return;
            }
            goto LAB_14f023945;
          }
          break;
        }
        iVar2 = piVar4[6];
      } while (iVar2 != -1);
    }
  }
  if (2 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
LAB_14f023945:
  ExecuteNextTick(this,param_2,true);
  return;
}

// DownloadChunkInternal @ 14f0239c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChunkDownloader::DownloadChunkInternal
          (FChunkDownloader *this,FChunk *param_1,TFunction<void___cdecl(bool)> *param_2,int param_3
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FMultiCallback *pFVar4;
  FScriptContainerElement *pFVar5;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar6;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  
  if (4 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
  iVar1 = (param_1->PakFiles).ArrayNum;
  pFVar5 = (param_1->PakFiles).AllocatorInstance.Data;
  pFVar8 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((param_1->PakFiles).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FChunkDownloader::FPakFile,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar8) break;
    if (*(char *)(*(longlong *)pFVar5 + 0x40) == '\0') {
      if ((this->BuildBaseUrls).ArrayNum < 1) {
        if (1 < (byte)LogChunkDownloader._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
        }
        bVar3 = false;
LAB_14f023b10:
        ExecuteNextTick(this,param_2,bVar3);
      }
      else {
        pFVar4 = ::operator_new(0x70);
        if (pFVar4 == (FMultiCallback *)0x0) {
          pFVar4 = (FMultiCallback *)0x0;
        }
        else {
          pFVar4 = FMultiCallback::FMultiCallback(pFVar4,param_2);
        }
        iVar1 = (param_1->PakFiles).ArrayNum;
        pTVar6 = (TSharedRef<FChunkDownloader::FPakFile,1> *)
                 (param_1->PakFiles).AllocatorInstance.Data;
        pTVar7 = pTVar6 + iVar1;
        while( true ) {
          if ((param_1->PakFiles).ArrayNum != iVar1) {
            local_38[0] = 0;
            `TCheckedPointerIterator<TSharedRef<FChunkDownloader::FPakFile,1>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_38);
          }
          if (pTVar6 == pTVar7) break;
          if (pTVar6->Object->bIsCached == false) {
            pFVar4->NumPending = pFVar4->NumPending + 1;
            DownloadPakFileInternal(this,pTVar6,&pFVar4->IndividualCb,param_3);
          }
          pTVar6 = pTVar6 + 1;
        }
        if (pFVar4->NumPending < 1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("MultiCallback->GetNumPending() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                             ,0x5ad,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      return;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  bVar3 = true;
  goto LAB_14f023b10;
}

// DownloadPakFileInternal @ 14f023f00

void __thiscall
FChunkDownloader::DownloadPakFileInternal
          (FChunkDownloader *this,TSharedRef<FChunkDownloader::FPakFile,1> *param_1,
          TFunction<void___cdecl(bool)> *param_2,int param_3)

{
  int *piVar1;
  FPakFile *pFVar2;
  TFunction<void___cdecl(bool)> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  FIdentityFunctor local_res20 [8];
  
  if ((this->BuildBaseUrls).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("BuildBaseUrls.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                       ,0x60a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1->Object->Priority < param_3) {
    param_1->Object->Priority = param_3;
  }
  if (*(longlong *)param_2 != 0) {
    pFVar2 = param_1->Object;
    pTVar3 = (TFunction<void___cdecl(bool)> *)(pFVar2->PostDownloadCallbacks).AllocatorInstance.Data
    ;
    if ((pTVar3 <= param_2) && (param_2 < pTVar3 + (pFVar2->PostDownloadCallbacks).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (pFVar2->PostDownloadCallbacks).ArrayNum;
    piVar1 = &(pFVar2->PostDownloadCallbacks).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&(pFVar2->PostDownloadCallbacks).AllocatorInstance,piVar1);
    }
    (pFVar2->PostDownloadCallbacks).ArrayNum = iVar6 + 1;
    pFVar8 = (pFVar2->PostDownloadCallbacks).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
    *(longlong *)pFVar8 = *(longlong *)param_2;
    *(longlong *)(pFVar8 + 0x28) = 0;
    if (*(longlong *)pFVar8 != 0) {
      puVar7 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar7 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar7)();
    }
  }
  if ((param_1->Object->Download).Object == (FDownload *)0x0) {
    TArray<TSharedRef<FChunkDownloader::FPakFile,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TSharedRef<FChunkDownloader::FPakFile,1>_const_&>(&this->DownloadRequests,param_1)
    ;
    AlgoImpl::
    StableSortInternal<TSharedRef<FChunkDownloader::FPakFile,1>,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FChunkDownloader::FPakFile,1>,_FChunkDownloader::DownloadPakFileInternal_::__l2::<lambda_1>_>_>
              ((TSharedRef<FChunkDownloader::FPakFile,1> *)
               (this->DownloadRequests).AllocatorInstance.Data,(this->DownloadRequests).ArrayNum,
               local_res20[0],(<lambda_1> *)local_res20);
    IssueDownloads(this);
  }
  return;
}

// DumpLoadedChunks @ 14f024080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FChunkDownloader::DumpLoadedChunks(void)

{
  FScriptContainerElement *pFVar1;
  IModuleInterface IVar2;
  IModuleInterface this;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  EChunkStatus EVar7;
  FModuleManager *this_00;
  IModuleInterface *pIVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  FVar4 = ChunkDownloaderModuleName;
  this_00 = FModuleManager::Get();
  pIVar8 = FModuleManager::LoadModuleChecked(this_00,FVar4);
  if ((pIVar8[1] == (IModuleInterface)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  IVar2 = pIVar8[2];
  this = pIVar8[1];
  if (IVar2 != (IModuleInterface)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)IVar2 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)IVar2 + 8) + 1);
    UNLOCK();
  }
  if ((this == (IModuleInterface)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TMapBase<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
              *)((longlong)this + 0x140),&local_38);
  if (3 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
  iVar5 = local_38.ArrayNum;
  uVar9 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar9 * 4;
  FVar10.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar5) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar10.Data == pFVar1) break;
    EVar7 = GetChunkStatus((FChunkDownloader *)this,*(int *)FVar10.Data);
    if (3 < (byte)LogChunkDownloader._0_1_) {
      switch(EVar7) {
      case Mounted:
        break;
      case Cached:
        break;
      case Downloading:
        break;
      case Partial:
        break;
      case Remote:
        break;
      case Unknown:
      }
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
    uVar9 = local_38._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 4;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)IVar2);
  return;
}

// ExecuteNextTick @ 14f0249d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChunkDownloader::ExecuteNextTick
          (FChunkDownloader *this,TFunction<void___cdecl(bool)> *param_1,bool param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTSTicker *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  FDestructionSentinel local_a0;
  FDelegateAllocation *local_88;
  TWeakPtr<FTSTicker::FElement,1> local_80;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (*(longlong *)param_1 != 0) {
    this_00 = FTSTicker::GetCoreTicker();
    local_68 = *(longlong *)param_1;
    local_40 = (longlong *)0x0;
    if (local_68 != 0) {
      puVar3 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar3)(puVar3,local_58);
    }
    local_b8 = (undefined1  [8])0x0;
    local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_b0.DelegateSize = 0;
    local_38 = param_2;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
               (FWriteAccessScope *)&local_a0);
    local_88 = &local_b0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x60,&local_b0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FChunkDownloader::ExecuteNextTick'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar3[4] = local_68;
      puVar3[9] = 0;
      if (local_68 != 0) {
        plVar5 = local_58;
        if (local_40 != (longlong *)0x0) {
          plVar5 = local_40;
        }
        (**(code **)*plVar5)();
      }
      *(undefined1 *)(puVar3 + 10) = local_38;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    FTSTicker::AddTicker
              (this_00,&local_80,
               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_b8,0.0);
    if (local_80.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_80.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_80.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_80.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
               (FWriteAccessScope *)&local_a0);
    if ((local_b0.DelegateSize != 0) &&
       (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_b0,0,0,0x10);
      local_b0.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_b8);
    if (local_68 != 0) {
      plVar5 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar5 = local_40;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return;
}

// Finalize @ 14f024bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChunkDownloader::Finalize(FChunkDownloader *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *pTVar3;
  TSharedPtr<IHttpRequest,1> *pTVar4;
  TArray<TFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_> *pTVar5;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  TFunction<void___cdecl(bool)> *pTVar11;
  code *pcVar12;
  TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  *pTVar13;
  bool bVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  TFunction<void___cdecl(bool)> *pTVar18;
  uint uVar19;
  TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  *this_00;
  uint uVar20;
  longlong lVar21;
  undefined1 *puVar22;
  uint *puVar23;
  longlong lVar24;
  undefined1 auStackY_198 [32];
  undefined1 local_168;
  undefined1 local_167 [3];
  uint local_164;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  longlong local_120;
  FSharedReferencer<1> FStack_118;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  undefined4 local_74;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (3 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
  WaitForMounts(this);
  bVar14 = UpdateMountTasks(this,0.0);
  if ((bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<639807134757814856>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                          ,0x248,"UpdateMountTasks(0.0f) == false"), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  puVar2 = &(this->PakFiles).field_0x10;
  iStack_158 = 0;
  iVar8 = *(int *)&(this->PakFiles).field_0x28;
  local_160 = &this->PakFiles;
  local_140 = 0;
  uStack_154 = 1;
  iStack_144 = 0;
  if (iVar8 != 0) {
    puVar23 = *(uint **)&(this->PakFiles).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar2;
    }
    uVar20 = *puVar23;
    while (uVar20 == 0) {
      lVar15 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      iStack_144 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_14f024cde;
      uVar20 = puVar23[lVar15 + 1];
    }
    uStack_154 = -uVar20 & uVar20;
    uVar7 = (ulonglong)uStack_154 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_130 = (int)lVar15;
    iStack_144 = local_140 + -1 + local_130;
    if (iVar8 < iStack_144) {
      iStack_144 = iVar8;
    }
  }
LAB_14f024cde:
  uVar20 = *(uint *)&(this->PakFiles).field_0x28;
  uStack_13c = local_94;
  iStack_138 = *(int *)&(this->PakFiles).field_0x8 - *(int *)&(this->PakFiles).field_0x34;
  uVar19 = uVar20 & 0xffffffe0;
  TStack_108._padding_ = CONCAT44(uStack_154,iStack_158);
  uStack_148 = 0xffffffff;
  TStack_108.CurrentBitIndex = iStack_144;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar20 >> 5;
  TStack_108._28_4_ = local_94;
  TStack_108.BaseBitIndex = local_140;
  uStack_e8 = CONCAT44(uStack_134,iStack_138);
  local_150 = puVar2;
  local_110 = local_160;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar20 < 0) || (iVar8 < (int)uVar20)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar9 = *(uint *)&(this->PakFiles).field_0x28;
  if (uVar20 != uVar9) {
    puVar22 = *(undefined1 **)&(this->PakFiles).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar2;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
    while (uVar20 == 0) {
      lVar15 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar20 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14f024def;
      uVar20 = *(uint *)(puVar22 + lVar15 * 4 + 4);
    }
    uVar7 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_12c = (int)lVar15;
    uVar20 = local_12c + -1 + uVar19;
    if ((int)uVar9 < (int)uVar20) {
      uVar20 = uVar9;
    }
  }
LAB_14f024def:
  while( true ) {
    pTVar3 = local_110;
    if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
      local_168 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_168);
    }
    if (((TStack_108.CurrentBitIndex == uVar20) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar3 == &this->PakFiles)) break;
    pTVar6 = (TSharedRef<FChunkDownloader::FPakFile,1> *)
             (*(longlong *)pTVar3 + ((longlong)TStack_108.CurrentBitIndex * 5 + 2) * 8);
    if ((pTVar6->Object->Download).Object != (FDownload *)0x0) {
      CancelDownload(this,pTVar6,false);
    }
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  puVar2 = &(this->Chunks).field_0x10;
  iStack_158 = 0;
  iVar8 = *(int *)&(this->Chunks).field_0x28;
  local_160 = (TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
               *)&this->Chunks;
  local_140 = 0;
  uStack_154 = 1;
  iStack_144 = 0;
  if (iVar8 != 0) {
    puVar23 = *(uint **)&(this->Chunks).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar2;
    }
    uVar20 = *puVar23;
    while (uVar20 == 0) {
      lVar15 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      iStack_144 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_14f024eee;
      uVar20 = puVar23[lVar15 + 1];
    }
    uStack_154 = -uVar20 & uVar20;
    uVar7 = (ulonglong)uStack_154 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_128 = (int)lVar15;
    iStack_144 = local_140 + -1 + local_128;
    if (iVar8 < iStack_144) {
      iStack_144 = iVar8;
    }
  }
LAB_14f024eee:
  uVar20 = *(uint *)&(this->Chunks).field_0x28;
  uStack_13c = local_74;
  iStack_138 = *(int *)&(this->Chunks).field_0x8 - *(int *)&(this->Chunks).field_0x34;
  uVar19 = uVar20 & 0xffffffe0;
  uStack_148 = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_154,iStack_158);
  TStack_d8.CurrentBitIndex = iStack_144;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar20 >> 5;
  TStack_d8._28_4_ = local_74;
  TStack_d8.BaseBitIndex = local_140;
  uStack_b8 = CONCAT44(uStack_134,iStack_138);
  local_164 = uVar20;
  local_150 = puVar2;
  local_e0 = (TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
              *)local_160;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar20 < 0) || (iVar8 < (int)uVar20)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar9 = *(uint *)&(this->Chunks).field_0x28;
  if (uVar20 != uVar9) {
    puVar22 = *(undefined1 **)&(this->Chunks).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar2;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
    while (uVar20 == 0) {
      lVar15 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar20 = uVar9;
      local_164 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14f025010;
      uVar20 = *(uint *)(puVar22 + lVar15 * 4 + 4);
    }
    uVar7 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_124 = (int)lVar15;
    uVar20 = local_124 + -1 + uVar19;
    local_164 = uVar20;
    if ((int)uVar9 < (int)uVar20) {
      uVar20 = uVar9;
      local_164 = uVar9;
    }
  }
LAB_14f025010:
  do {
    pTVar13 = local_e0;
    this_00 = &this->Chunks;
    if (*(int *)(&local_e0->field_0x0 + 8) - *(int *)(&local_e0->field_0x0 + 0x34) != (int)uStack_b8
       ) {
      local_167[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_167);
    }
    if (((TStack_d8.CurrentBitIndex == uVar20) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->Chunks).field_0x10)) &&
       (pTVar13 == this_00)) {
      pTVar3 = &this->PakFiles;
      bVar14 = 1 < *(int *)&(this->PakFiles).field_0x48;
      if (!bVar14) {
        TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
                          *)pTVar3);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)pTVar3,0,*(int *)&(this->PakFiles).field_0x8);
      puVar2 = &(this->PakFiles).field_0xc;
      *(undefined4 *)&(this->PakFiles).field_0x8 = 0;
      if (*(int *)puVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)pTVar3,0,(int *)puVar2);
      }
      *(undefined4 *)&(this->PakFiles).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->PakFiles).field_0x34 = 0;
      iVar8 = *(int *)&(this->PakFiles).field_0x2c;
      *(undefined4 *)&(this->PakFiles).field_0x28 = 0;
      if ((iVar8 < 0) || (0x80 < iVar8)) {
        *(undefined4 *)&(this->PakFiles).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PakFiles).field_0x10,0);
      }
      if (bVar14) {
        *(undefined4 *)&(this->PakFiles).field_0x48 = 1;
        TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
                  *)pTVar3);
      }
      bVar14 = 1 < *(int *)&(this->Chunks).field_0x48;
      if (!bVar14) {
        TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,*(int *)&(this->Chunks).field_0x8);
      puVar2 = &(this->Chunks).field_0xc;
      *(undefined4 *)&(this->Chunks).field_0x8 = 0;
      if (*(int *)puVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
      }
      *(undefined4 *)&(this->Chunks).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->Chunks).field_0x34 = 0;
      iVar8 = *(int *)&(this->Chunks).field_0x2c;
      *(undefined4 *)&(this->Chunks).field_0x28 = 0;
      if ((iVar8 < 0) || (0x80 < iVar8)) {
        *(undefined4 *)&(this->Chunks).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Chunks).field_0x10,0);
      }
      if (bVar14) {
        *(undefined4 *)&(this->Chunks).field_0x48 = 1;
        TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      pTVar4 = &this->ManifestRequest;
      if (pTVar4->Object != (IHttpRequest *)0x0) {
        (**(code **)(*(longlong *)pTVar4->Object + 0x118))();
        local_120 = 0;
        FStack_118.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TSharedPtr<IHttpRequest,1> *)&local_120) {
          pTVar4->Object = (IHttpRequest *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->ManifestRequest).SharedReferenceCount,&FStack_118);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_118.ReferenceController);
      }
      if (0 < (this->PostLoadCallbacks).ArrayNum) {
        pTVar5 = &this->PostLoadCallbacks;
        pTVar11 = (TFunction<void___cdecl(bool)> *)(pTVar5->AllocatorInstance).Data;
        piVar1 = &(this->PostLoadCallbacks).ArrayMax;
        (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar8 = (this->PostLoadCallbacks).ArrayNum;
        (this->PostLoadCallbacks).ArrayNum = 0;
        *piVar1 = 0;
        DestructItems<TFunction<void___cdecl(bool)>,int>
                  ((TFunction<void___cdecl(bool)> *)(pTVar5->AllocatorInstance).Data,0);
        (this->PostLoadCallbacks).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,0,&pTVar5->AllocatorInstance,0,piVar1);
        }
        for (pTVar18 = pTVar11; pTVar18 != pTVar11 + iVar8; pTVar18 = pTVar18 + 1) {
          ExecuteNextTick(this,pTVar18,false);
        }
        DestructItems<TFunction<void___cdecl(bool)>,int>(pTVar11,iVar8);
        if (pTVar11 != (TFunction<void___cdecl(bool)> *)0x0) {
          FMemory::Free(pTVar11);
        }
      }
      lVar15 = *(longlong *)&this->UpdateBuildCallback;
      if (lVar15 != 0) {
        local_68._40_8_ = *(undefined8 *)&(this->UpdateBuildCallback).field_0x28;
        *(undefined8 *)&(this->UpdateBuildCallback).field_0x28 = 0;
        local_68._16_8_ = *(undefined8 *)&(this->UpdateBuildCallback).field_0x10;
        local_68._24_8_ = *(undefined8 *)&(this->UpdateBuildCallback).field_0x18;
        local_68._32_8_ = *(undefined8 *)&(this->UpdateBuildCallback).field_0x20;
        *(undefined8 *)&this->UpdateBuildCallback = 0;
        local_68._0_8_ = lVar15;
        ExecuteNextTick(this,(TFunction<void___cdecl(bool)> *)local_68,false);
        if (local_68._0_8_ != 0) {
          plVar16 = (longlong *)(local_68 + 0x10);
          if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
            plVar16 = (longlong *)local_68._40_8_;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      ::FString::Empty(&this->ContentBuildId);
      return;
    }
    lVar15 = *(longlong *)&pTVar13->field_0x0;
    lVar24 = (longlong)TStack_d8.CurrentBitIndex * 0x20;
    lVar21 = *(longlong *)(lVar24 + 8 + lVar15);
    if (*(char *)(lVar21 + 4) != '\0') {
      uVar20 = *(int *)(lVar21 + 0x10) - 1;
      if (-1 < (int)uVar20) {
        lVar21 = (longlong)(int)uVar20 << 4;
        do {
          lVar10 = *(longlong *)(lVar24 + 8 + lVar15);
          uVar19 = 0;
          if ((int)uVar20 < *(int *)(lVar10 + 0x10)) {
            uVar19 = ~uVar20 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          UnmountPakFile(this,(TSharedRef<FChunkDownloader::FPakFile,1> *)
                              (*(longlong *)(lVar10 + 8) + lVar21));
          lVar21 = lVar21 + -0x10;
          uVar20 = uVar20 - 1;
        } while (-1 < (int)uVar20);
      }
      *(undefined1 *)(*(longlong *)(lVar24 + 8 + lVar15) + 4) = 0;
    }
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    uVar20 = local_164;
  } while( true );
}

// FlushCache @ 14f0253c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FChunkDownloader::FlushCache(FChunkDownloader *this)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  *pTVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  uint *puVar17;
  TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  *pTVar18;
  longlong *plVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  FScriptContainerElement *_Src;
  int iVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  char *in_stack_fffffffffffffee8;
  undefined1 local_f8 [4];
  int local_f4;
  uint local_f0;
  int local_ec;
  FString local_e8;
  uint local_d8;
  TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  IFileManager *local_98;
  longlong *local_90;
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  *local_80;
  TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_98 = IFileManager::Get();
  WaitForMounts(this);
  if (3 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Chunks).field_0x10;
  iVar7 = *(int *)&(this->Chunks).field_0x28;
  pTVar18 = &this->Chunks;
  local_ec = 0;
  iVar21 = 0;
  local_f4 = 0;
  iStack_c8 = 0;
  uStack_c4 = 1;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar7 != 0) {
    puVar17 = *(uint **)&(this->Chunks).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)pTVar20;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar9 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_14f0254cd;
      uVar14 = puVar17[lVar9 + 1];
    }
    uStack_c4 = -uVar14 & uVar14;
    uVar8 = (ulonglong)uStack_c4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_a0 = (int)lVar9;
    iStack_b4 = local_b0 + -1 + local_a0;
    if (iVar7 < iStack_b4) {
      iStack_b4 = iVar7;
    }
  }
LAB_14f0254cd:
  iStack_a8 = *(int *)&(this->Chunks).field_0x8 - *(int *)&(this->Chunks).field_0x34;
  uVar14 = *(uint *)&(this->Chunks).field_0x28;
  uStack_b8 = 0xffffffff;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_70.CurrentBitIndex = iStack_b4;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_70._28_4_ = iStack_b4;
  TStack_70.BaseBitIndex = local_b0;
  uStack_50 = CONCAT44(uStack_a4,iStack_a8);
  local_f0 = uVar14;
  local_d0 = pTVar18;
  local_c0 = (undefined1 *)pTVar20;
  iStack_ac = iStack_b4;
  local_88 = pTVar20;
  local_80 = pTVar18;
  local_78 = pTVar18;
  TStack_70.Array = pTVar20;
  if ((((int)uVar14 < 0) || (iVar7 < (int)uVar14)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
  uVar1 = *(uint *)&(this->Chunks).field_0x28;
  iVar7 = 0;
  if (uVar14 != uVar1) {
    puVar16 = *(undefined1 **)&(this->Chunks).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar20;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
    while (iVar7 = iVar21, uVar14 == 0) {
      lVar9 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar1;
      local_f0 = uVar1;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14f0255e1;
      uVar14 = *(uint *)(puVar16 + lVar9 * 4 + 4);
    }
    uVar8 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_9c = (int)lVar9;
    uVar14 = local_9c + -1 + uVar13;
    local_f0 = uVar14;
    if ((int)uVar1 < (int)uVar14) {
      uVar14 = uVar1;
      local_f0 = uVar1;
    }
  }
LAB_14f0255e1:
  do {
    pTVar4 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) && (TStack_70.Array == pTVar20)) &&
       (pTVar4 == pTVar18)) {
      SaveLocalManifest(this,false);
      if (3 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
      return iVar7;
    }
    plVar19 = (longlong *)(*(longlong *)pTVar4 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x20);
    local_90 = plVar19;
    if ((*(longlong *)(*plVar19 + 0x18) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk->MountTask == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                           ,0x35b,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
    lVar9 = *plVar19;
    iVar21 = *(int *)(lVar9 + 0x10);
    plVar12 = *(longlong **)(lVar9 + 8);
    plVar15 = plVar12 + (longlong)iVar21 * 2;
    while( true ) {
      if (*(int *)(lVar9 + 0x10) != iVar21) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FChunkDownloader::FPakFile,1>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res18);
      }
      if (plVar12 == plVar15) {
        lVar9 = *plVar19;
        local_d8 = *(uint *)(lVar9 + 0x10);
        uVar8 = (ulonglong)(int)local_d8;
        plVar19 = *(longlong **)(lVar9 + 8);
        plVar12 = plVar19 + uVar8 * 2;
        goto LAB_14f025742;
      }
      if ((*(longlong *)(*plVar12 + 0x58) != 0) &&
         (*(char *)(*(longlong *)(*plVar12 + 0x58) + 0x90) == '\0')) break;
      plVar12 = plVar12 + 2;
    }
    lVar9 = *plVar19;
    iVar21 = *(int *)(lVar9 + 0x10);
    plVar19 = *(longlong **)(lVar9 + 8);
    plVar12 = plVar19 + (longlong)iVar21 * 2;
    while( true ) {
      if (*(int *)(lVar9 + 0x10) != iVar21) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FChunkDownloader::FPakFile,1>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res20);
      }
      if (plVar19 == plVar12) break;
      if (*(longlong *)(*plVar19 + 0x48) != 0) {
        if (2 < (byte)LogChunkDownloader._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
        }
        iVar7 = iVar7 + 1;
        local_f4 = iVar7;
      }
      plVar19 = plVar19 + 2;
    }
LAB_14f02593d:
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    pTVar18 = local_80;
    uVar14 = local_f0;
  } while( true );
LAB_14f025742:
  if (*(int *)(lVar9 + 0x10) != (int)uVar8) {
    local_f8[0] = 0;
    `TCheckedPointerIterator<TSharedRef<FChunkDownloader::FPakFile,1>,int,0>::operator!='::__l2::
    <lambda_1>::operator()(local_f8);
  }
  pTVar20 = local_88;
  if (plVar19 == plVar12) goto LAB_14f02593d;
  puVar2 = (undefined8 *)*plVar19;
  if ((puVar2[9] != 0) && (*(char *)((longlong)puVar2 + 0x42) == '\0')) {
    iVar7 = *(int *)(puVar2 + 1) + -1;
    iVar21 = (this->CacheFolder).Data.ArrayNum;
    if (*(int *)(puVar2 + 1) == 0) {
      iVar7 = 0;
    }
    iVar11 = iVar7 + 1;
    local_e8.Data.ArrayNum = iVar21;
    if ((iVar21 == 0) && (iVar11 != 0)) {
      _Src = (this->CacheFolder).Data.AllocatorInstance.Data;
      iVar11 = iVar7 + 2;
LAB_14f0257c9:
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar11 != 0) goto LAB_14f0257d2;
      local_e8.Data.ArrayMax = 0;
    }
    else {
      _Src = (this->CacheFolder).Data.AllocatorInstance.Data;
      if (iVar21 == 0) goto LAB_14f0257c9;
LAB_14f0257d2:
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar14 = iVar11 + iVar21;
      if ((int)uVar14 < iVar21) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
      }
      in_stack_fffffffffffffee8 = (char *)&local_e8;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar14,0,(ForAnyElementType *)in_stack_fffffffffffffee8,iVar21,
                 &local_e8.Data.ArrayMax);
      if (iVar21 != 0) {
        memcpy(local_e8.Data.AllocatorInstance.Data,_Src,(longlong)iVar21 * 2);
      }
    }
    ::FString::PathAppend(&local_e8,(wchar_t *)*puVar2,iVar7);
    in_stack_fffffffffffffee8 = (char *)((ulonglong)in_stack_fffffffffffffee8 & 0xffffffffffffff00);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar10.Data = local_e8.Data.AllocatorInstance.Data;
    }
    cVar6 = (**(code **)((longlong)*local_98 + 0x38))
                      (local_98,FVar10.Data,0,0,in_stack_fffffffffffffee8);
    if (cVar6 == '\0') {
      in_stack_fffffffffffffee8 = "FileManager.Delete(*FullPathOnDisk)";
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<639807134757815167>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                         ,0x37f,"FileManager.Delete(*FullPathOnDisk)");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      if (1 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
      local_f4 = local_f4 + 1;
    }
    else {
      if (4 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
      local_ec = local_ec + 1;
      *(undefined1 *)(*plVar19 + 0x40) = 0;
      *(undefined8 *)(*plVar19 + 0x48) = 0;
      this->bNeedsManifestSave = true;
    }
    iVar7 = local_f4;
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  uVar8 = (ulonglong)local_d8;
  plVar19 = plVar19 + 2;
  goto LAB_14f025742;
}

// Get @ 14f0259b0

TSharedPtr<FChunkDownloader,1> * __cdecl
FChunkDownloader::Get(TSharedPtr<FChunkDownloader,1> *__return_storage_ptr__)

{
  IModuleInterface IVar1;
  FName FVar2;
  FModuleManager *this;
  IModuleInterface *pIVar3;
  
  FVar2 = ChunkDownloaderModuleName;
  this = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModule(this,FVar2,None);
  if (pIVar3 == (IModuleInterface *)0x0) {
    __return_storage_ptr__->Object = (FChunkDownloader *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (FChunkDownloader *)pIVar3[1];
    IVar1 = pIVar3[2];
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)IVar1;
    if (IVar1 != (IModuleInterface)0x0) {
      LOCK();
      *(int *)((longlong)IVar1 + 8) = *(int *)((longlong)IVar1 + 8) + 1;
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetAllChunkIds @ 14f025a70

void __thiscall
FChunkDownloader::GetAllChunkIds
          (FChunkDownloader *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
              *)&this->Chunks,param_1);
  return;
}

// GetChecked @ 14f025b20

TSharedRef<FChunkDownloader,1> * __cdecl
FChunkDownloader::GetChecked(TSharedRef<FChunkDownloader,1> *__return_storage_ptr__)

{
  FName FVar1;
  FModuleManager *this;
  IModuleInterface *pIVar2;
  
  FVar1 = ChunkDownloaderModuleName;
  this = FModuleManager::Get();
  pIVar2 = FModuleManager::LoadModuleChecked(this,FVar1);
  TSharedPtr<FChunkDownloader,1>::ToSharedRef
            ((TSharedPtr<FChunkDownloader,1> *)(pIVar2 + 1),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetChunkStatus @ 14f025b70

EChunkStatus __thiscall FChunkDownloader::GetChunkStatus(FChunkDownloader *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EChunkStatus EVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  undefined1 local_res10 [8];
  
  if (*(int *)&(this->Chunks).field_0x8 != *(int *)&(this->Chunks).field_0x34) {
    puVar11 = *(undefined1 **)&(this->Chunks).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->Chunks).field_0x38;
    }
    iVar4 = *(int *)(puVar11 + (ulonglong)(*(int *)&(this->Chunks).field_0x48 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)&this->Chunks);
        if (*piVar8 == param_1) {
          plVar9 = (longlong *)0x0;
          plVar7 = (longlong *)(piVar8 + 2);
          if (piVar8 == (int *)0x0) {
            plVar7 = plVar9;
          }
          if (plVar7 == (longlong *)0x0) {
            return Unknown;
          }
          lVar1 = *plVar7;
          iVar4 = *(int *)(lVar1 + 0x10);
          if (0 < iVar4) {
            if (*(char *)(lVar1 + 4) == '\0') {
              plVar7 = *(longlong **)(lVar1 + 8);
              plVar12 = plVar7 + (longlong)iVar4 * 2;
              plVar10 = plVar9;
              while( true ) {
                if (*(int *)(lVar1 + 0x10) != iVar4) {
                  `TCheckedPointerIterator<TSharedRef<FChunkDownloader::FPakFile,1>_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(local_res10);
                }
                iVar6 = (int)plVar10;
                if (plVar7 == plVar12) break;
                if (*(char *)(*plVar7 + 0x40) == '\0') {
                  if (*(longlong *)(*plVar7 + 0x58) != 0) {
                    plVar9 = (longlong *)(ulonglong)((int)plVar9 + 1);
                  }
                  plVar7 = plVar7 + 2;
                }
                else {
                  plVar10 = (longlong *)(ulonglong)(iVar6 + 1);
                  plVar7 = plVar7 + 2;
                }
              }
              if (iVar6 < iVar4) {
                iVar6 = (int)plVar9 + iVar6;
                if (iVar6 < iVar4) {
                  EVar5 = (iVar6 < 1) + Partial;
                }
                else {
                  EVar5 = Downloading;
                }
              }
              else {
                EVar5 = Cached;
              }
              return EVar5;
            }
            return Mounted;
          }
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<639807134757815036>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                             ,0x2fc,"Chunk.PakFiles.Num() > 0");
          if (!bVar3) {
            return Unknown;
          }
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        iVar4 = piVar8[6];
      } while (iVar4 != -1);
    }
  }
  return Unknown;
}

// GetOrCreate @ 14f025de0

TSharedRef<FChunkDownloader,1> * __cdecl
FChunkDownloader::GetOrCreate(TSharedRef<FChunkDownloader,1> *__return_storage_ptr__)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  FModuleManager *this;
  IModuleInterface *pIVar4;
  FChunkDownloader *this_00;
  TSharedRef<FChunkDownloader,1> *pTVar5;
  TRawPtrProxy<FChunkDownloader> local_res8;
  
  FVar2 = ChunkDownloaderModuleName;
  this = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(this,FVar2);
  if (pIVar4[1] == (IModuleInterface)0x0) {
    this_00 = ::operator_new(0x270);
    if (this_00 == (FChunkDownloader *)0x0) {
      local_res8.Object = (FChunkDownloader *)0x0;
    }
    else {
      local_res8.Object = FChunkDownloader(this_00);
      if ((((local_res8.Object != (FChunkDownloader *)0x0) && ((local_res8.Object)->_padding_ != 0))
          && ((local_res8.Object)->_padding_ != 0)) &&
         (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TSharedRef<FChunkDownloader,1> *)(*pcVar1)();
          return pTVar5;
        }
      }
    }
    TSharedPtr<FChunkDownloader,1>::operator=<FChunkDownloader>
              ((TSharedPtr<FChunkDownloader,1> *)(pIVar4 + 1),&local_res8);
  }
  TSharedPtr<FChunkDownloader,1>::ToSharedRef
            ((TSharedPtr<FChunkDownloader,1> *)(pIVar4 + 1),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Initialize @ 14f0260c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChunkDownloader::Initialize(FChunkDownloader *this,FString *param_1,int param_2)

{
  undefined1 *puVar1;
  TMap<FString,FPakFileEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPakFileEntry,0>_>
  *this_00;
  atomic<int> aVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FString *pFVar12;
  size_t sVar13;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar14;
  ulonglong uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  atomic<int> *paVar20;
  int iVar21;
  FPakFileEntry *pFVar22;
  FString *pFVar23;
  wchar_t *pwVar24;
  atomic<int> *paVar25;
  FString *pFVar26;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  char *in_stack_fffffffffffffe48;
  FString local_198;
  FString local_188;
  FString *local_178;
  ulonglong local_170;
  FString local_168;
  FString local_158;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_148;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_138;
  TReferenceControllerBase<1> *local_128;
  TReferenceControllerBase<1> *pTStack_120;
  FString local_118;
  IFileManager *local_108;
  TArray<FPakFileEntry,TSizedDefaultAllocator<32>_> local_100;
  TArray<FPakFileEntry,TSizedDefaultAllocator<32>_> local_f0;
  undefined1 local_e0 [24];
  FPakFileEntry *local_c8;
  FPakFileEntry *local_c0;
  atomic<int> *local_b8;
  TReferenceControllerBase<1> **local_b0;
  TStringView<wchar_t> local_a8;
  wchar_t *local_98;
  undefined4 local_90;
  FString local_88;
  FString local_78;
  FString local_68 [2];
  
  if ((*(int *)&(this->PakFiles).field_0x8 != *(int *)&(this->PakFiles).field_0x34) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PakFiles.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                         ,0x194,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_1->Data).ArrayNum < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InPlatformName.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                         ,0x195,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (3 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
  pFVar12 = FPaths::ProjectPersistentDownloadDir(&local_88);
  if ((pFVar12->Data).ArrayNum == 0) {
    local_a8.DataPtr = L"";
  }
  else {
    local_a8.DataPtr = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  iVar10 = 0;
  local_a8.Size = iVar10;
  if ((FScriptContainerElement *)local_a8.DataPtr != (FScriptContainerElement *)0x0) {
    sVar13 = wcslen(local_a8.DataPtr);
    local_a8.Size = (int)sVar13;
  }
  local_90 = 8;
  local_98 = L"pakcache";
  FPaths::CombineInternal((FString *)(local_e0 + 8),&local_a8,2);
  FGenericPlatformMisc::AddAdditionalRootDirectory((FString *)(local_e0 + 8));
  if ((TSharedRef<FChunkDownloader::FPakFile,1> *)local_e0._8_8_ !=
      (TSharedRef<FChunkDownloader::FPakFile,1> *)0x0) {
    FMemory::Free((void *)local_e0._8_8_);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::operator=(&this->PlatformName,param_1);
  this->TargetDownloadsInFlight = param_2;
  if ((param_2 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetDownloadsInFlight >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                         ,0x19f,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar14 = &FPaths::ProjectPersistentDownloadDir(&local_78)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_148,pTVar14,0xb - (uint)(pTVar14->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_148,L"PakCache/",9);
  pFVar12 = &this->CacheFolder;
  if (&pFVar12->Data != &local_148) {
    pFVar19 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar19 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar19);
    }
    (pFVar12->Data).AllocatorInstance.Data = local_148.AllocatorInstance.Data;
    (this->CacheFolder).Data.ArrayNum = local_148.ArrayNum;
    (this->CacheFolder).Data.ArrayMax = local_148.ArrayMax;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pTVar14 = &FPaths::ProjectContentDir(local_68)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_138,pTVar14,0xf - (uint)(pTVar14->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_138,L"EmbeddedPaks/",0xd);
  pFVar26 = &this->EmbeddedFolder;
  if (&pFVar26->Data != &local_138) {
    pFVar19 = (pFVar26->Data).AllocatorInstance.Data;
    if (pFVar19 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar19);
    }
    (pFVar26->Data).AllocatorInstance.Data = local_138.AllocatorInstance.Data;
    (this->EmbeddedFolder).Data.ArrayNum = local_138.ArrayNum;
    (this->EmbeddedFolder).Data.ArrayMax = local_138.ArrayMax;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
  local_108 = IFileManager::Get();
  if ((this->CacheFolder).Data.ArrayNum == 0) {
    pwVar24 = L"";
  }
  else {
    pwVar24 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  cVar8 = (**(code **)((longlong)*local_108 + 0x60))(local_108,pwVar24,1);
  if ((cVar8 == '\0') && (1 < (byte)LogChunkDownloader._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
  this_00 = &this->EmbeddedPaks;
  bVar7 = 1 < *(int *)&(this->EmbeddedPaks).field_0x48;
  if (!bVar7) {
    TSet<TTuple<FString,FPakFileEntry>,TDefaultMapHashableKeyFuncs<FString,FPakFileEntry,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,FPakFileEntry>,TDefaultMapHashableKeyFuncs<FString,FPakFileEntry,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPakFileEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FPakFileEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->EmbeddedPaks).field_0x8);
  puVar1 = &(this->EmbeddedPaks).field_0xc;
  *(undefined4 *)&(this->EmbeddedPaks).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    in_stack_fffffffffffffe48 = (char *)((ulonglong)in_stack_fffffffffffffe48 & 0xffffffff00000000);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->EmbeddedPaks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EmbeddedPaks).field_0x34 = 0;
  iVar11 = *(int *)&(this->EmbeddedPaks).field_0x2c;
  *(undefined4 *)&(this->EmbeddedPaks).field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(this->EmbeddedPaks).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EmbeddedPaks).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->EmbeddedPaks).field_0x48 = 1;
    TSet<TTuple<FString,FPakFileEntry>,TDefaultMapHashableKeyFuncs<FString,FPakFileEntry,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,FPakFileEntry>,TDefaultMapHashableKeyFuncs<FString,FPakFileEntry,0>,FDefaultSetAllocator>
              *)this_00);
  }
  iVar11 = (this->EmbeddedFolder).Data.ArrayNum;
  iVar21 = EMBEDDED_MANIFEST.Data.ArrayNum + -1;
  if (EMBEDDED_MANIFEST.Data.ArrayNum == 0) {
    iVar21 = iVar10;
  }
  iVar9 = iVar21 + 1;
  local_168.Data.ArrayNum = iVar11;
  if ((iVar11 == 0) && (iVar9 != 0)) {
    pFVar19 = (this->EmbeddedFolder).Data.AllocatorInstance.Data;
    iVar9 = iVar21 + 2;
LAB_14f026498:
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar9 != 0) goto LAB_14f0264a3;
    local_168.Data.ArrayMax = 0;
  }
  else {
    pFVar19 = (this->EmbeddedFolder).Data.AllocatorInstance.Data;
    if (iVar11 == 0) goto LAB_14f026498;
LAB_14f0264a3:
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar16 = iVar9 + iVar11;
    if ((int)uVar16 < iVar11) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    in_stack_fffffffffffffe48 = (char *)&local_168;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar16,0,(ForAnyElementType *)in_stack_fffffffffffffe48,iVar11,
               &local_168.Data.ArrayMax);
    if (iVar11 != 0) {
      memcpy(local_168.Data.AllocatorInstance.Data,pFVar19,(longlong)iVar11 * 2);
    }
  }
  ::FString::PathAppend(&local_168,(wchar_t *)EMBEDDED_MANIFEST.Data.AllocatorInstance.Data,iVar21);
  ParseManifest(&local_100,&local_168,
                (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                 *)0x0);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  iVar11 = local_100.ArrayNum;
  pFVar22 = (FPakFileEntry *)
            (local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 0x40);
  FVar17.Data = local_100.AllocatorInstance.Data;
  while( true ) {
    if (local_100.ArrayNum != iVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPakFileEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if ((FPakFileEntry *)FVar17.Data == pFVar22) break;
    local_c8 = (FPakFileEntry *)FVar17.Data;
    local_c0 = (FPakFileEntry *)FVar17.Data;
    TSet<TTuple<FString,FPakFileEntry>,TDefaultMapHashableKeyFuncs<FString,FPakFileEntry,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FPakFileEntry_const_&>_>
              ((TSet<TTuple<FString,FPakFileEntry>,TDefaultMapHashableKeyFuncs<FString,FPakFileEntry,0>,FDefaultSetAllocator>
                *)&this->EmbeddedPaks,
               (TPairInitializer<FString_const_&,FPakFileEntry_const_&> *)(local_res18 + 8),
               (bool *)&local_c8);
    FVar17.Data = FVar17.Data + 0x40;
  }
  DestructItems<FPakFileEntry,int>
            ((FPakFileEntry *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
  if ((FPakFileEntry *)local_100.AllocatorInstance.Data != (FPakFileEntry *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  local_178 = (FString *)0x0;
  local_170 = 0;
  if ((this->CacheFolder).Data.ArrayNum == 0) {
    pwVar24 = L"";
  }
  else {
    pwVar24 = (wchar_t *)(this->CacheFolder).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*local_108 + 0x78))(local_108,&local_178,pwVar24);
  iVar11 = (this->CacheFolder).Data.ArrayNum;
  iVar21 = LOCAL_MANIFEST.Data.ArrayNum + -1;
  if (LOCAL_MANIFEST.Data.ArrayNum == 0) {
    iVar21 = iVar10;
  }
  iVar10 = iVar21 + 1;
  local_158.Data.ArrayNum = iVar11;
  if ((iVar11 == 0) && (iVar10 != 0)) {
    pFVar19 = (this->CacheFolder).Data.AllocatorInstance.Data;
    iVar10 = iVar21 + 2;
LAB_14f026624:
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar10 == 0) {
      local_158.Data.ArrayMax = 0;
      goto LAB_14f026676;
    }
  }
  else {
    pFVar19 = (this->CacheFolder).Data.AllocatorInstance.Data;
    if (iVar11 == 0) goto LAB_14f026624;
  }
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar16 = iVar11 + iVar10;
  if ((int)uVar16 < iVar11) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  in_stack_fffffffffffffe48 = (char *)&local_158;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar16,0,(ForAnyElementType *)in_stack_fffffffffffffe48,iVar11,
             &local_158.Data.ArrayMax);
  if (iVar11 != 0) {
    memcpy(local_158.Data.AllocatorInstance.Data,pFVar19,(longlong)iVar11 * 2);
  }
LAB_14f026676:
  ::FString::PathAppend(&local_158,(wchar_t *)LOCAL_MANIFEST.Data.AllocatorInstance.Data,iVar21);
  ParseManifest(&local_f0,&local_158,
                (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                 *)0x0);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  iVar10 = local_f0.ArrayNum;
  pTVar5 = _UNK_150651568;
  pTVar4 = ___xmm_00000000000000000000000000000010;
  if (0 < local_f0.ArrayNum) {
    paVar20 = (atomic<int> *)(local_f0.AllocatorInstance.Data + 0x28);
    paVar25 = (atomic<int> *)(local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayNum * 0x40);
    while( true ) {
      if (local_f0.ArrayNum != iVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPakFileEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (paVar20 + -10 == paVar25) break;
      pTStack_120 = ::operator_new(0x88);
      if (pTStack_120 == (TReferenceControllerBase<1> *)0x0) {
        local_128 = pTVar4;
        pTStack_120 = pTVar5;
      }
      else {
        pTStack_120->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFPakFile_FChunkDownloader___00_SharedPointerInternals__6B_
        ;
        pTStack_120->SharedReferenceCount = (atomic<int>)0x1;
        local_128 = pTStack_120 + 1;
        pTStack_120->WeakReferenceCount = (atomic<int>)0x1;
        pTStack_120[3].WeakReferenceCount = (atomic<int>)0x0;
        *(undefined4 *)((longlong)&pTStack_120[5]._padding_ + 3) = 0;
        *(undefined1 *)((longlong)&pTStack_120[5]._padding_ + 7) = 0;
        pTStack_120[6]._padding_ = 0;
        pTStack_120[1]._padding_ = 0;
        pTStack_120[1].SharedReferenceCount = (atomic<int>)0x0;
        pTStack_120[1].WeakReferenceCount = (atomic<int>)0x0;
        pTStack_120[2]._padding_ = 0;
        pTStack_120[2].SharedReferenceCount = (atomic<int>)0x0;
        pTStack_120[2].WeakReferenceCount = (atomic<int>)0x0;
        pTStack_120[3]._padding_ = 0;
        pTStack_120[3].SharedReferenceCount = (atomic<int>)0xffffffff;
        pTStack_120[4]._padding_ = 0;
        pTStack_120[4].SharedReferenceCount = (atomic<int>)0x0;
        pTStack_120[4].WeakReferenceCount = (atomic<int>)0x0;
        *(undefined2 *)&pTStack_120[5]._padding_ = 0;
        *(undefined1 *)((longlong)&pTStack_120[5]._padding_ + 2) = 0;
        pTStack_120[5].SharedReferenceCount = (atomic<int>)0x0;
        pTStack_120[5].WeakReferenceCount = (atomic<int>)0x0;
        pTStack_120[6].SharedReferenceCount = (atomic<int>)0x0;
        pTStack_120[6].WeakReferenceCount = (atomic<int>)0x0;
        pTStack_120[7]._padding_ = 0;
        pTStack_120[7].SharedReferenceCount = (atomic<int>)0x0;
        pTStack_120[7].WeakReferenceCount = (atomic<int>)0x0;
        pTStack_120[8]._padding_ = 0;
        if ((local_128 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar6 = local_128;
      ::FString::operator=((FString *)local_128,(FString *)(paVar20 + -10));
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar6[1]._padding_)->AllocatorInstance).
      Data = *(FScriptContainerElement **)(paVar20 + -6);
      ::FString::operator=((FString *)&pTVar6[1].SharedReferenceCount,(FString *)(paVar20 + -4));
      pTVar6[2].SharedReferenceCount = *paVar20;
      ::FString::operator=((FString *)(pTVar6 + 3),(FString *)(paVar20 + 2));
      iVar21 = (this->CacheFolder).Data.ArrayNum;
      iVar11 = (int)paVar20[-8] + -1;
      if (paVar20[-8] == (atomic<int>)0x0) {
        iVar11 = 0;
      }
      iVar9 = iVar11 + 1;
      local_198.Data.ArrayNum = iVar21;
      if ((iVar21 == 0) && (iVar9 != 0)) {
        pFVar19 = (this->CacheFolder).Data.AllocatorInstance.Data;
        iVar9 = iVar11 + 2;
LAB_14f026846:
        local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar9 != 0) goto LAB_14f026850;
        local_198.Data.ArrayMax = 0;
      }
      else {
        pFVar19 = (this->CacheFolder).Data.AllocatorInstance.Data;
        if (iVar21 == 0) goto LAB_14f026846;
LAB_14f026850:
        local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar16 = iVar21 + iVar9;
        if ((int)uVar16 < iVar21) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
        }
        in_stack_fffffffffffffe48 = (char *)&local_198;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar16,0,(ForAnyElementType *)in_stack_fffffffffffffe48,iVar21,
                   &local_198.Data.ArrayMax);
        if (iVar21 != 0) {
          memcpy(local_198.Data.AllocatorInstance.Data,pFVar19,(longlong)iVar21 * 2);
        }
      }
      ::FString::PathAppend(&local_198,*(wchar_t **)(paVar20 + -10),iVar11);
      uVar15 = (**(code **)((longlong)*local_108 + 0x110))(local_108);
      if ((longlong)uVar15 < 1) {
        if (4 < (byte)LogChunkDownloader._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
        }
        this->bNeedsManifestSave = true;
LAB_14f026986:
        pFVar26 = local_178;
        pFVar23 = local_178 + (int)local_170;
        for (pFVar12 = local_178; pFVar12 != pFVar23; pFVar12 = pFVar12 + 1) {
          aVar2 = (atomic<int>)(pFVar12->Data).ArrayNum;
          if (aVar2 == paVar20[-8]) {
            if (1 < (int)aVar2) {
              iVar11 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                                  *(wchar_t **)(paVar20 + -10));
              bVar7 = iVar11 == 0;
              goto LAB_14f0269c4;
            }
LAB_14f0269d6:
            iVar11 = (int)((longlong)pFVar12 - (longlong)pFVar26 >> 4);
            if (iVar11 != -1) {
              pFVar12 = local_178 + iVar11;
              DestructItems<FString,int>(pFVar12,1);
              memmove(pFVar12,pFVar12 + 1,(longlong)(((int)local_170 - iVar11) + -1) << 4);
              local_170 = CONCAT44(local_170._4_4_,(int)local_170 + -1);
            }
            break;
          }
          bVar7 = (int)aVar2 + (int)paVar20[-8] == 1;
LAB_14f0269c4:
          if (bVar7) goto LAB_14f0269d6;
        }
      }
      else {
        local_128[4].SharedReferenceCount = (atomic<int>)(int)uVar15;
        local_128[4].WeakReferenceCount = (atomic<int>)(int)(uVar15 >> 0x20);
        if (uVar15 <= *(ulonglong *)(paVar20 + -6)) {
          if (uVar15 == *(ulonglong *)(paVar20 + -6)) {
            *(undefined1 *)
             &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_128[4]._padding_)->
              AllocatorInstance).Data = 1;
          }
          local_b8 = paVar20 + -10;
          local_b0 = &local_128;
          TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FString_const_&,TSharedRef<FChunkDownloader::FPakFile,1>_const_&>_>
                    ((TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
                      *)&this->PakFiles,
                     (TPairInitializer<FString_const_&,TSharedRef<FChunkDownloader::FPakFile,1>_const_&>
                      *)local_e0,(bool *)&local_b8);
          goto LAB_14f026986;
        }
        if (2 < (byte)LogChunkDownloader._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
        }
        this->bNeedsManifestSave = true;
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_120);
      paVar20 = paVar20 + 0x10;
    }
  }
  iVar10 = (int)local_170;
  uVar15 = (ulonglong)(int)local_170;
  pFVar26 = local_178 + uVar15;
  pFVar12 = local_178;
  do {
    if ((int)uVar15 != iVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar12 == pFVar26) {
      SaveLocalManifest(this,false);
      DestructItems<FPakFileEntry,int>
                ((FPakFileEntry *)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
      if ((FPakFileEntry *)local_f0.AllocatorInstance.Data != (FPakFileEntry *)0x0) {
        FMemory::Free(local_f0.AllocatorInstance.Data);
      }
      DestructItems<FString,int>(local_178,(int)local_170);
      if (local_178 != (FString *)0x0) {
        FMemory::Free(local_178);
      }
      return;
    }
    local_118.Data.ArrayNum = (pFVar12->Data).ArrayNum;
    lVar18 = (longlong)local_118.Data.ArrayNum;
    pFVar19 = (pFVar12->Data).AllocatorInstance.Data;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_118.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      in_stack_fffffffffffffe48 = (char *)&local_118;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)in_stack_fffffffffffffe48,
                 local_118.Data.ArrayNum,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,pFVar19,lVar18 * 2);
    }
    this->bNeedsManifestSave = true;
    iVar11 = (this->CacheFolder).Data.ArrayNum;
    iVar21 = local_118.Data.ArrayNum + -1;
    if (local_118.Data.ArrayNum == 0) {
      iVar21 = 0;
    }
    iVar9 = iVar21 + 1;
    local_188.Data.ArrayNum = iVar11;
    if ((iVar11 == 0) && (iVar9 != 0)) {
      iVar9 = iVar21 + 2;
      pFVar19 = (this->CacheFolder).Data.AllocatorInstance.Data;
LAB_14f026b21:
      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar9 != 0) goto LAB_14f026b2f;
      local_188.Data.ArrayMax = 0;
    }
    else {
      pFVar19 = (this->CacheFolder).Data.AllocatorInstance.Data;
      if (iVar11 == 0) goto LAB_14f026b21;
LAB_14f026b2f:
      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar16 = iVar11 + iVar9;
      if ((int)uVar16 < iVar11) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      in_stack_fffffffffffffe48 = (char *)&local_188;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar16,0,(ForAnyElementType *)in_stack_fffffffffffffe48,iVar11,
                 &local_188.Data.ArrayMax);
      if (iVar11 != 0) {
        memcpy(local_188.Data.AllocatorInstance.Data,pFVar19,(longlong)iVar11 * 2);
      }
    }
    ::FString::PathAppend(&local_188,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar21);
    if (4 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
    in_stack_fffffffffffffe48 = (char *)((ulonglong)in_stack_fffffffffffffe48 & 0xffffffffffffff00);
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_188.Data.ArrayNum != 0) {
      FVar17.Data = local_188.Data.AllocatorInstance.Data;
    }
    cVar8 = (**(code **)((longlong)*local_108 + 0x38))
                      (local_108,FVar17.Data,0,0,in_stack_fffffffffffffe48);
    if (cVar8 == '\0') {
      in_stack_fffffffffffffe48 = "FileManager.Delete(*FullPathOnDisk)";
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<639807134757814767>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                         ,0x1ef,"FileManager.Delete(*FullPathOnDisk)");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (1 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    uVar15 = local_170 & 0xffffffff;
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// IssueDownloads @ 14f026f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChunkDownloader::IssueDownloads(FChunkDownloader *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FString *pFVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FChunkDownloader *pFVar13;
  FChunkDownloader *pFVar14;
  FChunkDownloader *pFVar15;
  TMulticastDelegate<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy> *pTVar16;
  FChunkDownloader *pFVar17;
  uint uVar18;
  longlong local_res8;
  TMulticastDelegate<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy> *local_38;
  FSharedReferencer<1> local_30;
  
  uVar18 = 0;
  if (0 < (this->DownloadRequests).ArrayNum) {
    local_res8 = 0;
    do {
      pFVar15 = (FChunkDownloader *)0x0;
      if (this->TargetDownloadsInFlight <= (int)uVar18) {
        return;
      }
      uVar11 = 0;
      if ((int)uVar18 < (this->DownloadRequests).ArrayNum) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar3 = (this->DownloadRequests).AllocatorInstance.Data;
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar3 + local_res8 + 8);
      pFVar5 = *(FString **)(pFVar3 + local_res8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar6._0_4_ = pFVar5[5].Data.ArrayNum;
      lVar6._4_4_ = pFVar5[5].Data.ArrayMax;
      if (lVar6 == 0) {
        if (4 < (byte)LogChunkDownloader._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
        }
        this->bNeedsManifestSave = true;
        pFVar13 = (FChunkDownloader *)this->_padding_;
        pFVar14 = pFVar13;
        pFVar17 = pFVar15;
        if (pFVar13 != (FChunkDownloader *)0x0) {
          iVar2 = (int)pFVar13->_padding_;
          do {
            pFVar14 = pFVar15;
            if (iVar2 == 0) goto LAB_14f027055;
            LOCK();
            iVar12 = (int)pFVar13->_padding_;
            bVar10 = iVar2 == iVar12;
            if (bVar10) {
              *(int *)&pFVar13->_padding_ = iVar2 + 1;
              iVar12 = iVar2;
            }
            UNLOCK();
            iVar2 = iVar12;
          } while (!bVar10);
          pFVar14 = pFVar13;
          pFVar17 = (FChunkDownloader *)this->_padding_;
        }
LAB_14f027055:
        if ((pFVar17 != this) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("SharedThis.Get() == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x67f,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (pFVar17 == (FChunkDownloader *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L"");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L"");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        pFVar13 = ::operator_new(0xc0);
        if (pFVar13 == (FChunkDownloader *)0x0) {
          pTVar16 = (TMulticastDelegate<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy>
                     *)&DAT_00000010;
LAB_14f027261:
          if (((*(longlong *)&pTVar16->field_0x10 == 0) || (*(longlong *)&pTVar16->field_0x18 == 0))
             || (*(int *)(*(longlong *)&pTVar16->field_0x18 + 8) < 1)) {
            if (pFVar15 != (FChunkDownloader *)0x0) {
              LOCK();
              *(int *)&pFVar15->_padding_ = (int)pFVar15->_padding_ + 1;
              UNLOCK();
            }
            *(TMulticastDelegate<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy> **)
             &pTVar16->field_0x10 = pTVar16;
            if (pFVar15 != *(FChunkDownloader **)&pTVar16->field_0x18) {
              if (pFVar15 != (FChunkDownloader *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)&pFVar15->_padding_ + 4);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              plVar7 = *(longlong **)&pTVar16->field_0x18;
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar7 + 8))(plVar7,1);
                }
              }
              *(FChunkDownloader **)&pTVar16->field_0x18 = pFVar15;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pFVar15);
          }
        }
        else {
          *(undefined4 *)&pFVar13->_padding_ = 1;
          *(undefined4 *)((longlong)&pFVar13->_padding_ + 4) = 1;
          pFVar13->_padding_ =
               (longlong)
               &___7__TIntrusiveReferenceController_VFDownload___00_SharedPointerInternals__6B_;
          *(undefined ***)&pFVar13->OnChunkMounted = &___7FDownload__6B_;
          *(undefined8 *)&(pFVar13->OnChunkMounted).field_0x10 = 0;
          *(undefined8 *)&(pFVar13->OnChunkMounted).field_0x18 = 0;
          *(FChunkDownloader **)&pFVar13->OnDownloadAnalytics = pFVar17;
          *(FChunkDownloader **)&(pFVar13->OnDownloadAnalytics).field_0x8 = pFVar14;
          if (pFVar14 != (FChunkDownloader *)0x0) {
            LOCK();
            *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
            UNLOCK();
          }
          *(FString **)&(pFVar13->OnDownloadAnalytics).field_0x10 = pFVar5;
          *(TReferenceControllerBase<1> **)&(pFVar13->OnDownloadAnalytics).field_0x18 = pTVar4;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          ::operator/((FString *)&(pFVar13->OnDownloadAnalytics).field_0x20,
                      (FString *)(*(longlong *)&pFVar13->OnDownloadAnalytics + 0xf0),pFVar5);
          (pFVar13->LoadingModeStats).TotalBytesToDownload = 0;
          (pFVar13->PostLoadCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar13->LoadingCompleteLatch = 0;
          pFVar13->_padding_ = 0;
          lVar6 = *(longlong *)&(pFVar13->OnDownloadAnalytics).field_0x10;
          *(undefined1 *)&(pFVar13->LoadingModeStats).FilesDownloaded = 0;
          *(undefined1 *)&(pFVar13->PostLoadCallbacks).ArrayNum = 0;
          *(undefined4 *)&pFVar13->UpdateBuildCallback = 0;
          if ((*(char *)(lVar6 + 0x40) != '\0') &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!PakFile->bIsCached",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\Download.cpp"
                                  ,0x12,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((*(char *)(*(longlong *)&(pFVar13->OnDownloadAnalytics).field_0x10 + 0x42) != '\0') &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!PakFile->bIsEmbedded",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\Download.cpp"
                                  ,0x13,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((*(char *)(*(longlong *)&(pFVar13->OnDownloadAnalytics).field_0x10 + 0x41) != '\0') &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!PakFile->bIsMounted",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\Download.cpp"
                                  ,0x14,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar16 = &pFVar13->OnChunkMounted;
          pFVar15 = pFVar13;
          if (pTVar16 !=
              (TMulticastDelegate<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy> *)0x0)
          goto LAB_14f027261;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L"");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (pFVar15 != (FChunkDownloader *)0x0) {
          LOCK();
          *(int *)&pFVar15->_padding_ = (int)pFVar15->_padding_ + 1;
          UNLOCK();
        }
        piVar1 = &pFVar5[5].Data.ArrayNum;
        local_38 = pTVar16;
        local_30.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
        if ((TMulticastDelegate<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy> **)
            piVar1 != &local_38) {
          *(TMulticastDelegate<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy> **)piVar1
               = pTVar16;
          local_38 = (TMulticastDelegate<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy>
                      *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar5 + 6),&local_30);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar14);
        lVar8._0_4_ = pFVar5[5].Data.ArrayNum;
        lVar8._4_4_ = pFVar5[5].Data.ArrayMax;
        if ((lVar8 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FDownload::Start(*(FDownload **)&pFVar5[5].Data.ArrayNum);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      local_res8 = local_res8 + 0x10;
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < (this->DownloadRequests).ArrayNum);
  }
  return;
}

// LoadCachedBuild @ 14f0273c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FChunkDownloader::LoadCachedBuild(FChunkDownloader *this,FString *param_1)

{
  longlong lVar1;
  ForAnyElementType FVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 auStackY_e8 [32];
  FString local_a8;
  TArray<FPakFileEntry,TSizedDefaultAllocator<32>_> local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  iVar6 = (this->CacheFolder).Data.ArrayNum;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  iVar5 = CACHED_BUILD_MANIFEST.Data.ArrayNum + -1;
  if (CACHED_BUILD_MANIFEST.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_a8.Data.ArrayNum = iVar6;
  if ((iVar6 == 0) && (iVar5 != -1)) {
    pFVar7 = (this->CacheFolder).Data.AllocatorInstance.Data;
    iVar3 = iVar5 + 2;
LAB_14f027469:
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar3 == 0) {
      local_a8.Data.ArrayMax = 0;
      goto LAB_14f0274bb;
    }
  }
  else {
    pFVar7 = (this->CacheFolder).Data.AllocatorInstance.Data;
    iVar3 = iVar5 + 1;
    if (iVar6 == 0) goto LAB_14f027469;
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar4 = iVar6 + iVar3;
  if ((int)uVar4 < iVar6) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar4,0,(ForAnyElementType *)&local_a8,iVar6,&local_a8.Data.ArrayMax);
  if (iVar6 != 0) {
    memcpy(local_a8.Data.AllocatorInstance.Data,pFVar7,(longlong)iVar6 * 2);
  }
LAB_14f0274bb:
  ::FString::PathAppend
            (&local_a8,(wchar_t *)CACHED_BUILD_MANIFEST.Data.AllocatorInstance.Data,iVar5);
  ParseManifest(&local_98,&local_a8,
                (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                 *)local_88);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  iVar6 = BUILD_ID_KEY.Data.ArrayNum + -1;
  FVar2.Data = BUILD_ID_KEY.Data.AllocatorInstance.Data;
  if (BUILD_ID_KEY.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
  if (local_88._8_4_ != local_54) {
    puVar8 = local_50;
    if (local_48 != (undefined1 *)0x0) {
      puVar8 = local_48;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)(local_40 - 1U & uVar4) * 4);
    uVar9 = BUILD_ID_KEY.Data._8_8_;
    pFVar7 = (FScriptContainerElement *)local_88._0_8_;
    while (iVar6 != -1) {
      lVar1 = (longlong)iVar6 * 0x28;
      iVar5 = *(int *)(pFVar7 + lVar1 + 8);
      if (iVar5 == (int)uVar9) {
        if (1 < iVar5) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar7 + lVar1),
                             (wchar_t *)BUILD_ID_KEY.Data.AllocatorInstance.Data);
          bVar11 = iVar5 == 0;
          pFVar7 = (FScriptContainerElement *)local_88._0_8_;
          uVar9 = BUILD_ID_KEY.Data._8_8_;
          goto LAB_14f027599;
        }
LAB_14f027689:
        if (iVar6 != -1) {
          pFVar10 = pFVar7 + lVar1 + 0x10;
          if (pFVar7 + lVar1 == (FScriptContainerElement *)0x0) {
            pFVar10 = (FScriptContainerElement *)0x0;
          }
          if ((pFVar10 != (FScriptContainerElement *)0x0) && (1 < *(int *)(pFVar10 + 8))) {
            SetContentBuildId(this,param_1,(FString *)pFVar10);
            LoadManifest(this,&local_98);
            bVar11 = true;
            goto LAB_14f0275af;
          }
        }
        break;
      }
      bVar11 = iVar5 + (int)uVar9 == 1;
LAB_14f027599:
      if (bVar11) goto LAB_14f027689;
      iVar6 = *(int *)(pFVar7 + lVar1 + 0x20);
    }
  }
  bVar11 = false;
LAB_14f0275af:
  DestructItems<FPakFileEntry,int>
            ((FPakFileEntry *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FPakFileEntry *)local_98.AllocatorInstance.Data != (FPakFileEntry *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  local_40 = 0;
  if (local_48 != (undefined1 *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar6 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return bVar11;
}

// LoadManifest @ 14f0276f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChunkDownloader::LoadManifest
          (FChunkDownloader *this,TArray<FPakFileEntry,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  FPakFileEntry *pFVar3;
  FString *this_00;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FChunkDownloader *pFVar7;
  TArray<FPakFileEntry,TSizedDefaultAllocator<32>_> *pTVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  atomic<int> aVar16;
  int iVar17;
  TArray<FPakFileEntry,TSizedDefaultAllocator<32>_> *pTVar18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  uint *puVar21;
  IFileManager *pIVar22;
  byte bVar23;
  uint *puVar24;
  longlong lVar25;
  ForElementType<FSetElementId> FVar26;
  longlong *plVar27;
  wchar_t *pwVar28;
  undefined8 *puVar29;
  ForAnyElementType FVar30;
  longlong lVar31;
  FPakFileEntry *pFVar32;
  TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
  *this_01;
  longlong *plVar33;
  FScriptContainerElement *_Src;
  uint uVar34;
  FPakFileEntry *pFVar35;
  undefined8 uVar36;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar37;
  uint *puVar38;
  longlong *plVar39;
  FString *pFVar40;
  longlong lVar41;
  uint uVar42;
  FString *pFVar43;
  undefined1 auStackY_3b8 [32];
  TReferenceControllerBase<1> *local_368;
  FSharedReferencer<1> FStack_360;
  undefined1 local_358;
  undefined1 local_357;
  undefined1 local_356;
  undefined1 local_355;
  uint local_354;
  TReferenceControllerBase<1> *local_350;
  TReferenceControllerBase<1> *pTStack_348;
  int local_340;
  int local_33c;
  FString local_338;
  FChunkDownloader *local_328;
  TSharedRef<FChunkDownloader::FPakFile,1> *local_320;
  longlong *local_318;
  undefined8 uStack_310;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  int local_2f0;
  undefined4 uStack_2ec;
  uint local_2e8 [2];
  uint local_2e0;
  TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
  *local_2d8;
  undefined8 local_2d0;
  TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
  *local_2c8;
  TArray<FPakFileEntry,TSizedDefaultAllocator<32>_> *local_2c0;
  undefined8 local_2b8;
  FSharedReferencer<1> local_2b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2a8;
  undefined1 local_288 [8];
  TPairInitializer<FString_const_&,TSharedRef<FChunkDownloader::FPakFile,1>_const_&> local_280;
  FSharedReferencer<1> local_270;
  TReferenceControllerBase<1> *local_268;
  TReferenceControllerBase<1> *pTStack_260;
  int local_258;
  longlong local_250;
  longlong *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  undefined8 uStack_220;
  longlong *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_210;
  undefined8 uStack_1f0;
  TReferenceControllerBase<1> *local_1e8;
  TReferenceControllerBase<1> **local_1e0;
  TReferenceControllerBase<1> *local_1d8;
  TReferenceControllerBase<1> **local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong lStack_1b0;
  TBitArray<FDefaultBitArrayAllocator> *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  uint local_188 [4];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_178;
  undefined4 local_13c;
  undefined1 local_138 [32];
  undefined8 local_118;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_328 = this;
  local_2c0 = param_1;
  if (3 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
  WaitForMounts(this);
  CollectGarbage(RF_NoFlags,true);
  pTVar8 = local_2c0;
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  local_118 = 0;
  iVar15 = local_2c0->ArrayNum;
  pFVar35 = (FPakFileEntry *)(local_2c0->AllocatorInstance).Data;
  pFVar32 = pFVar35 + iVar15;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  while( true ) {
    if (pTVar8->ArrayNum != iVar15) {
      local_358 = 0;
      `TCheckedPointerIterator<FPakFileEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_358);
    }
    pFVar7 = local_328;
    if (pFVar35 == pFVar32) break;
    if ((pFVar35->ChunkId < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("FileEntry.ChunkId >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                            ,0x4e3,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar18 = TMapBase<int,TArray<FPakFileEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FPakFileEntry,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<int_const_&>
                        ((TMapBase<int,TArray<FPakFileEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FPakFileEntry,TSizedDefaultAllocator<32>_>,0>_>
                          *)local_138,pFVar35->ChunkId,&pFVar35->ChunkId);
    pFVar3 = (FPakFileEntry *)(pTVar18->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar35) && (pFVar35 < pFVar3 + pTVar18->ArrayMax)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar12 = pTVar18->ArrayNum;
    if (iVar12 == pTVar18->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&pTVar18->AllocatorInstance,&pTVar18->ArrayMax);
    }
    pTVar18->ArrayNum = iVar12 + 1;
    FPakFileEntry::FPakFileEntry
              ((FPakFileEntry *)((pTVar18->AllocatorInstance).Data + (longlong)iVar12 * 0x40),
               pFVar35);
    pFVar35 = pFVar35 + 1;
  }
  this_01 = (TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
             *)&local_328->Chunks;
  local_2c8 = this_01;
  TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
            (&local_98,this_01);
  local_2d8 = (TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
               *)&pFVar7->PakFiles;
  TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
              *)local_e8,local_2d8);
  local_2a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
  local_33c = 0;
  local_340 = 0;
  local_2a8._padding_._0_4_ = 0;
  local_2d0 = 1;
  local_2a8._padding_._4_4_ = 1;
  local_2a8.UnvisitedBitMask = 0xffffffff;
  local_2a8.CurrentBitIndex = 0;
  local_2a8.BaseBitIndex = 0;
  if (local_110 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2a8);
  }
  uStack_310 = CONCAT44(local_2a8._padding_._4_4_,(undefined4)local_2a8._padding_);
  local_318 = (longlong *)local_138;
  uStack_300._4_4_ = local_2a8.CurrentBitIndex;
  uStack_300._0_4_ = local_2a8.UnvisitedBitMask;
  uStack_2f8._4_4_ = local_2a8._28_4_;
  uStack_2f8._0_4_ = local_2a8.BaseBitIndex;
  local_2f0 = local_138._8_4_ - local_104;
  pTStack_308 = local_2a8.Array;
  uStack_220 = CONCAT44(uStack_2ec,local_2f0);
  TStack_240.Array = local_2a8.Array;
  local_248 = local_318;
  TStack_240._padding_ = uStack_310;
  TStack_240._16_8_ = uStack_300;
  TStack_240._24_8_ = uStack_2f8;
  pTVar19 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_178,(TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),
                       local_110);
  pTVar6 = _UNK_150651568;
  pTVar5 = ___xmm_00000000000000000000000000000010;
  local_318 = (longlong *)local_138;
  uStack_310 = pTVar19->_padding_;
  pTStack_308 = pTVar19->Array;
  uStack_300._0_4_ = pTVar19->UnvisitedBitMask;
  uStack_300._4_4_ = pTVar19->CurrentBitIndex;
  uStack_2f8 = *(undefined8 *)&pTVar19->BaseBitIndex;
  local_2f0 = local_138._8_4_ - local_104;
  uStack_190 = CONCAT44(uStack_2ec,local_2f0);
  uVar36 = 1;
  local_1b8 = local_318;
  lStack_1b0 = uStack_310;
  local_1a8 = pTStack_308;
  uStack_1a0 = uStack_300;
  local_198 = uStack_2f8;
  while( true ) {
    plVar27 = local_248;
    puVar38 = (uint *)0x0;
    aVar16 = SUB84(uVar36,0);
    if ((int)local_248[1] - *(int *)((longlong)local_248 + 0x34) != (int)uStack_220) {
      local_357 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<FPakFileEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_357);
    }
    uVar13 = 0;
    if (((TStack_240.CurrentBitIndex == uStack_1a0._4_4_) && (TStack_240.Array == local_1a8)) &&
       (plVar27 == local_1b8)) break;
    local_250 = *plVar27;
    FStack_360.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_320 = (TSharedRef<FChunkDownloader::FPakFile,1> *)0x0;
    local_354 = 0;
    uVar13 = *(uint *)((longlong)TStack_240.CurrentBitIndex * 0x20 + local_250);
    local_250 = (longlong)TStack_240.CurrentBitIndex * 0x20 + local_250;
    local_2e0 = uVar13;
    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
      FVar26 = (ForElementType<FSetElementId>)&local_98.Hash;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar26 = local_98.Hash.SecondaryData;
      }
      uVar42 = *(uint *)((longlong)FVar26 + (ulonglong)(local_98.HashSize - 1U & uVar13) * 4);
      while (uVar42 != 0xffffffff) {
        puVar24 = (uint *)((longlong)(int)uVar42 * 0x20 + local_98.Elements._0_8_);
        if (*puVar24 == uVar13) {
          puVar21 = puVar24 + 2;
          if (puVar24 == (uint *)0x0) {
            puVar21 = puVar38;
          }
          if (puVar21 != (uint *)0x0) {
            local_270.ReferenceController = *(TReferenceControllerBase<1> **)(puVar21 + 2);
            local_368 = *(TReferenceControllerBase<1> **)puVar21;
            if (local_270.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_270.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_270.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_280.Value = (TSharedRef<FChunkDownloader::FPakFile,1> *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_360,&local_270);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_270.ReferenceController);
            if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (((uint)local_368->_padding_ != uVar13) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Chunk->ChunkId == ChunkId",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                                    ,0x4fb,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_2e8[0] = uVar13;
            if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
              TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<int>(&local_98,uVar13,(int *)local_2e8);
            }
            if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((atomic<int> *)local_188 != &local_368->SharedReferenceCount) {
              DestructItems<TSharedRef<FChunkDownloader::FPakFile,1>,int>
                        ((TSharedRef<FChunkDownloader::FPakFile,1> *)0x0,0);
              local_320 = *(TSharedRef<FChunkDownloader::FPakFile,1> **)
                           &local_368->SharedReferenceCount;
              local_368->SharedReferenceCount = (atomic<int>)0x0;
              local_368->WeakReferenceCount = (atomic<int>)0x0;
              local_354 = (uint)local_368[1]._padding_;
              local_368[1]._padding_ = 0;
            }
            goto LAB_14f027c85;
          }
          break;
        }
        uVar42 = puVar24[6];
      }
    }
    pTVar20 = ::operator_new(0x30);
    if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
      local_368 = (TReferenceControllerBase<1> *)&DAT_00000010;
      local_2b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar20->SharedReferenceCount = aVar16;
      local_368 = pTVar20 + 1;
      pTVar20->WeakReferenceCount = aVar16;
      pTVar20->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFChunk_FChunkDownloader___00_SharedPointerInternals__6B_
      ;
      *(undefined2 *)((longlong)&pTVar20[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pTVar20[1]._padding_ + 7) = 0;
      *(undefined4 *)&pTVar20[1]._padding_ = 0xffffffff;
      *(undefined1 *)((longlong)&pTVar20[1]._padding_ + 4) = 0;
      pTVar20[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar20[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar20[2]._padding_ = 0;
      pTVar20[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar20[2].WeakReferenceCount = (atomic<int>)0x0;
      if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
      local_2b0.ReferenceController = pTVar20;
    }
    FVar9.ReferenceController = local_2b0.ReferenceController;
    local_2b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_360,&local_2b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
    if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(uint *)&local_368->_padding_ = uVar13;
    this_01 = local_2c8;
LAB_14f027c85:
    if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_268 = local_368;
    pTStack_260 = FStack_360.ReferenceController;
    if (FStack_360.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_360.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_360.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_1d0 = &local_268;
    local_1d8 = local_368;
    TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,TSharedRef<FChunkDownloader::FChunk,1>_&&>_>
              (this_01,(TPairInitializer<int_const_&,TSharedRef<FChunkDownloader::FChunk,1>_&&> *)
                       local_288,(bool *)&local_1d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_260)
    ;
    if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((int)local_368[1]._padding_ != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Chunk->PakFiles.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                            ,0x50e,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar41 = local_250;
    iVar15 = *(int *)(local_250 + 0x10);
    pFVar40 = *(FString **)(local_250 + 8);
    pFVar43 = pFVar40 + (longlong)iVar15 * 4;
    while( true ) {
      plVar27 = (longlong *)0x0;
      if (*(int *)(lVar41 + 0x10) != iVar15) {
        local_356 = 0;
        `TCheckedPointerIterator<FPakFileEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_356);
      }
      uVar13 = 0;
      if (pFVar40 == pFVar43) break;
      iVar12 = (pFVar40->Data).ArrayNum;
      if (iVar12 == 0) {
        pwVar28 = L"";
      }
      else {
        pwVar28 = (wchar_t *)(pFVar40->Data).AllocatorInstance.Data;
        uVar13 = iVar12 - 1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar28);
      iVar12 = TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
                           *)local_e8,uVar13,pFVar40);
      if (iVar12 == -1) {
LAB_14f0280ce:
        pTStack_348 = ::operator_new(0x88);
        if (pTStack_348 == (TReferenceControllerBase<1> *)0x0) {
          local_350 = pTVar5;
          pTStack_348 = pTVar6;
        }
        else {
          pTStack_348->SharedReferenceCount = SUB84(local_2d0,0);
          pTStack_348->WeakReferenceCount = SUB84(local_2d0,0);
          pTStack_348->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFPakFile_FChunkDownloader___00_SharedPointerInternals__6B_
          ;
          pTStack_348[3].WeakReferenceCount = (atomic<int>)0x0;
          *(undefined4 *)((longlong)&pTStack_348[5]._padding_ + 3) = 0;
          *(undefined1 *)((longlong)&pTStack_348[5]._padding_ + 7) = 0;
          pTStack_348[1]._padding_ = 0;
          pTStack_348[2]._padding_ = 0;
          pTStack_348[2].SharedReferenceCount = (atomic<int>)0x0;
          pTStack_348[2].WeakReferenceCount = (atomic<int>)0x0;
          pTStack_348[4]._padding_ = 0;
          pTStack_348[5].SharedReferenceCount = (atomic<int>)0x0;
          pTStack_348[5].WeakReferenceCount = (atomic<int>)0x0;
          pTStack_348[6].SharedReferenceCount = (atomic<int>)0x0;
          pTStack_348[6].WeakReferenceCount = (atomic<int>)0x0;
          pTStack_348[7]._padding_ = 0;
          pTStack_348[7].SharedReferenceCount = (atomic<int>)0x0;
          pTStack_348[7].WeakReferenceCount = (atomic<int>)0x0;
          local_350 = pTStack_348 + 1;
          pTStack_348[6]._padding_ = 0;
          pTStack_348[1].SharedReferenceCount = (atomic<int>)0x0;
          pTStack_348[1].WeakReferenceCount = (atomic<int>)0x0;
          pTStack_348[3]._padding_ = 0;
          pTStack_348[3].SharedReferenceCount = (atomic<int>)0xffffffff;
          pTStack_348[4].SharedReferenceCount = (atomic<int>)0x0;
          pTStack_348[4].WeakReferenceCount = (atomic<int>)0x0;
          *(undefined2 *)&pTStack_348[5]._padding_ = 0;
          *(undefined1 *)((longlong)&pTStack_348[5]._padding_ + 2) = 0;
          pTStack_348[8]._padding_ = 0;
          if ((local_350 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pTVar20 = local_350;
        ::FString::operator=((FString *)local_350,pFVar40);
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar20[1]._padding_)->AllocatorInstance).
        Data = pFVar40[1].Data.AllocatorInstance.Data;
        ::FString::operator=
                  ((FString *)&pTVar20[1].SharedReferenceCount,(FString *)&pFVar40[1].Data.ArrayNum)
        ;
        pTVar20[2].SharedReferenceCount = (atomic<int>)pFVar40[2].Data.ArrayNum;
        ::FString::operator=((FString *)(pTVar20 + 3),pFVar40 + 3);
        if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((*(TReferenceControllerBase<1> ***)&local_368->SharedReferenceCount <= &local_350) &&
            (&local_350 <
             *(TReferenceControllerBase<1> ***)&local_368->SharedReferenceCount +
             (longlong)*(int *)((longlong)&local_368[1]._padding_ + 4) * 2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = (int)local_368[1]._padding_;
        piVar1 = (int *)((longlong)&local_368[1]._padding_ + 4);
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)&local_368->SharedReferenceCount,piVar1);
        }
        *(int *)&local_368[1]._padding_ = iVar12 + 1;
        puVar29 = (undefined8 *)
                  (*(longlong *)&local_368->SharedReferenceCount + (longlong)iVar12 * 0x10);
        *puVar29 = local_350;
        puVar29[1] = pTStack_348;
        if (pTStack_348 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_348->SharedReferenceCount =
               (atomic<int>)((int)pTStack_348->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1e8 = local_350;
        local_1e0 = &local_350;
        TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_const_&,TSharedRef<FChunkDownloader::FPakFile,1>_const_&>_>
                  (local_2d8,&local_280,(bool *)&local_1e8);
        pFVar7 = local_328;
        iVar17 = (pFVar40->Data).ArrayNum;
        iVar12 = iVar17 + -1;
        if (iVar17 == 0) {
          pwVar28 = L"";
          iVar12 = 0;
        }
        else {
          pwVar28 = (wchar_t *)(pFVar40->Data).AllocatorInstance.Data;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar28);
        iVar12 = TSet<TTuple<FString,FPakFileEntry>,TDefaultMapHashableKeyFuncs<FString,FPakFileEntry,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,FPakFileEntry>,TDefaultMapHashableKeyFuncs<FString,FPakFileEntry,0>,FDefaultSetAllocator>
                             *)&pFVar7->EmbeddedPaks,uVar13,pFVar40);
        if (iVar12 != -1) {
          lVar25 = (longlong)iVar12 * 0x58 + *(longlong *)&pFVar7->EmbeddedPaks;
          lVar31 = lVar25 + 0x10;
          if (lVar25 == 0) {
            lVar31 = 0;
          }
          if (lVar31 != 0) {
            iVar12 = *(int *)(lVar31 + 0x20);
            iVar17 = *(int *)&pFVar40[2].Data.AllocatorInstance.Data;
            if (iVar12 == iVar17) {
              if (1 < iVar12) {
                iVar12 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(lVar31 + 0x18),
                                    *(wchar_t **)&pFVar40[1].Data.ArrayNum);
                bVar10 = iVar12 == 0;
                goto LAB_14f02836b;
              }
            }
            else {
              bVar10 = iVar12 + iVar17 == 1;
LAB_14f02836b:
              if (!bVar10) goto LAB_14f028391;
            }
            *(undefined1 *)
             ((longlong)
              &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_350[4]._padding_)->
               AllocatorInstance).Data + 2) = 1;
            *(undefined1 *)
             &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_350[4]._padding_)->
              AllocatorInstance).Data = 1;
            uVar36 = *(undefined8 *)(lVar31 + 0x10);
            local_350[4].SharedReferenceCount = (atomic<int>)(int)uVar36;
            local_350[4].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar36 >> 0x20);
          }
        }
LAB_14f028391:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_348);
LAB_14f02839b:
        pFVar40 = pFVar40 + 4;
      }
      else {
        lVar31 = local_e8._0_8_ + (longlong)iVar12 * 0x28;
        plVar33 = (longlong *)(lVar31 + 0x10);
        if (lVar31 == 0) {
          plVar33 = plVar27;
        }
        if (plVar33 == (longlong *)0x0) goto LAB_14f0280ce;
        iVar12 = *(int *)&pFVar40[2].Data.AllocatorInstance.Data;
        iVar17 = *(int *)(*plVar33 + 0x20);
        if (iVar17 == iVar12) {
          if (1 < iVar17) {
            iVar12 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(*plVar33 + 0x18),
                                *(wchar_t **)&pFVar40[1].Data.ArrayNum);
            bVar10 = iVar12 == 0;
            goto LAB_14f027efe;
          }
        }
        else {
          bVar10 = iVar17 + iVar12 == 1;
LAB_14f027efe:
          if (!bVar10) goto LAB_14f0280ce;
        }
        if ((*(FScriptContainerElement **)(*plVar33 + 0x10) !=
             pFVar40[1].Data.AllocatorInstance.Data) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ExistingFile->Entry.FileSize == FileEntry.FileSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                                ,0x519,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (FString *)*plVar33;
        ::FString::operator=(this_00,pFVar40);
        this_00[1].Data.AllocatorInstance.Data = pFVar40[1].Data.AllocatorInstance.Data;
        ::FString::operator=
                  ((FString *)&this_00[1].Data.ArrayNum,(FString *)&pFVar40[1].Data.ArrayNum);
        this_00[2].Data.ArrayNum = pFVar40[2].Data.ArrayNum;
        ::FString::operator=(this_00 + 3,pFVar40 + 3);
        if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((*(longlong **)&local_368->SharedReferenceCount <= plVar33) &&
            (plVar33 < *(longlong **)&local_368->SharedReferenceCount +
                       (longlong)*(int *)((longlong)&local_368[1]._padding_ + 4) * 2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = (int)local_368[1]._padding_;
        piVar1 = (int *)((longlong)&local_368[1]._padding_ + 4);
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)&local_368->SharedReferenceCount,piVar1);
        }
        *(int *)&local_368[1]._padding_ = iVar12 + 1;
        plVar27 = (longlong *)
                  (*(longlong *)&local_368->SharedReferenceCount + (longlong)iVar12 * 0x10);
        *plVar27 = *plVar33;
        lVar31 = plVar33[1];
        plVar27[1] = lVar31;
        if (lVar31 != 0) {
          LOCK();
          *(int *)(lVar31 + 8) = *(int *)(lVar31 + 8) + 1;
          UNLOCK();
        }
        local_1c8 = *plVar33;
        local_1c0 = plVar33;
        TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_const_&,TSharedRef<FChunkDownloader::FPakFile,1>_const_&>_>
                  (local_2d8,
                   (TPairInitializer<FString_const_&,TSharedRef<FChunkDownloader::FPakFile,1>_const_&>
                    *)(local_288 + 4),(bool *)&local_1c8);
        if (local_e8._8_4_ == local_b4) goto LAB_14f02839b;
        iVar17 = (pFVar40->Data).ArrayNum;
        iVar12 = iVar17 + -1;
        if (iVar17 == 0) {
          pwVar28 = L"";
          iVar12 = 0;
        }
        else {
          pwVar28 = (wchar_t *)(pFVar40->Data).AllocatorInstance.Data;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar28);
        TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
                    *)local_e8,uVar13,pFVar40);
        pFVar40 = pFVar40 + 4;
      }
    }
    if (5 < (byte)LogChunkDownloader._0_1_) {
      if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
    local_33c = local_33c + 1;
    if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_340 = local_340 + (int)local_368[1]._padding_;
    lVar41._0_4_ = local_368[1].SharedReferenceCount;
    lVar41._4_4_ = local_368[1].WeakReferenceCount;
    if ((lVar41 != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Chunk->MountTask == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                            ,0x53c,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar42 = local_354;
    if (*(char *)((longlong)&local_368->_padding_ + 4) != '\0') {
      plVar33 = plVar27;
      plVar39 = plVar27;
      if (0 < (int)local_354) {
        do {
          uVar42 = local_354;
          uVar13 = (uint)plVar39;
          if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar34 = (uint)plVar27;
          if ((int)local_368[1]._padding_ <= (int)uVar34) break;
          uVar14 = 0;
          if ((int)uVar34 < (int)uVar42) {
            uVar14 = ~uVar34 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar41 = *(longlong *)((longlong)&local_320->Object + (longlong)plVar33);
          if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar42 = 0;
          if ((int)uVar34 < (int)local_368[1]._padding_) {
            uVar42 = ~uVar34 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar15 = *(int *)(lVar41 + 0x20);
          lVar31 = *(longlong *)(*(longlong *)&local_368->SharedReferenceCount + (longlong)plVar33);
          iVar12 = *(int *)(lVar31 + 0x20);
          if (iVar12 == iVar15) {
            if (1 < iVar12) {
              iVar15 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)(lVar31 + 0x18),*(wchar_t **)(lVar41 + 0x18));
              bVar10 = iVar15 == 0;
              goto LAB_14f0285fc;
            }
          }
          else {
            bVar10 = iVar12 + iVar15 == 1;
LAB_14f0285fc:
            uVar42 = local_354;
            if (!bVar10) break;
          }
          plVar27 = (longlong *)(ulonglong)(uVar34 + 1);
          uVar13 = uVar13 + 1;
          plVar33 = plVar33 + 2;
          plVar39 = (longlong *)(ulonglong)uVar13;
          uVar42 = local_354;
        } while ((int)(uVar34 + 1) < (int)local_354);
      }
      if (uVar13 == uVar42) {
        if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar13 == (uint)local_368[1]._padding_) goto LAB_14f028803;
      }
      if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = local_328;
      uVar13 = uVar42 - 1;
      *(undefined1 *)((longlong)&local_368->_padding_ + 4) = 0;
      if (-1 < (int)uVar13) {
        pTVar37 = local_320 + (int)uVar13;
        do {
          uVar34 = 0;
          if ((int)uVar13 < (int)uVar42) {
            uVar34 = ~uVar13 >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          UnmountPakFile(pFVar7,pTVar37);
          pTVar37 = pTVar37 + -1;
          uVar13 = uVar13 - 1;
        } while (-1 < (int)uVar13);
      }
      if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar13 = (int)local_368[1]._padding_ - 1;
      if (-1 < (int)uVar13) {
        lVar41 = (longlong)(int)uVar13 << 4;
        do {
          if ((local_368 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar42 = 0;
          if ((int)uVar13 < (int)local_368[1]._padding_) {
            uVar42 = ~uVar13 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          UnmountPakFile(pFVar7,(TSharedRef<FChunkDownloader::FPakFile,1> *)
                                (*(longlong *)&local_368->SharedReferenceCount + lVar41));
          lVar41 = lVar41 + -0x10;
          uVar13 = uVar13 - 1;
          uVar42 = local_354;
        } while (-1 < (int)uVar13);
      }
    }
LAB_14f028803:
    pTVar37 = local_320;
    DestructItems<TSharedRef<FChunkDownloader::FPakFile,1>,int>(local_320,uVar42);
    if (pTVar37 != (TSharedRef<FChunkDownloader::FPakFile,1> *)0x0) {
      FMemory::Free(pTVar37);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_360.ReferenceController);
    TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
    this_01 = local_2c8;
    uVar36 = local_2d0;
  }
  pIVar22 = IFileManager::Get();
  uVar42 = local_c0;
  uStack_300._4_4_ = uVar13;
  uStack_2f8._0_4_ = uVar13;
  if (local_c0 != 0) {
    puVar24 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar24 = local_c8;
    }
    uVar34 = *puVar24;
    puVar21 = puVar38;
    while( true ) {
      uVar13 = (uint)puVar38;
      uStack_2f8._0_4_ = (uint)puVar21;
      if (uVar34 != 0) break;
      lVar41 = (longlong)(int)uVar13;
      uStack_2f8._0_4_ = (uint)uStack_2f8 + 0x20;
      puVar21 = (uint *)(ulonglong)(uint)uStack_2f8;
      uVar13 = uVar13 + 1;
      puVar38 = (uint *)(ulonglong)uVar13;
      uStack_300._4_4_ = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
      goto LAB_14f0288d2;
      uVar34 = puVar24[lVar41 + 1];
    }
    aVar16 = (atomic<int>)(-uVar34 & uVar34);
    uVar2 = (ulonglong)(uint)aVar16 * 2 + 1;
    lVar41 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar41 == 0; lVar41 = lVar41 + -1) {
      }
    }
    local_280.Key._4_4_ = (int)lVar41;
    uStack_300._4_4_ = local_280.Key._4_4_ + -1 + (uint)uStack_2f8;
    if ((int)local_c0 < (int)uStack_300._4_4_) {
      uStack_300._4_4_ = local_c0;
    }
  }
LAB_14f0288d2:
  local_318 = (longlong *)local_e8;
  pTStack_308 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  uVar34 = local_c0 & 0xffffffe0;
  local_2f0 = local_e8._8_4_ - local_b4;
  uStack_300._0_4_ = 0xffffffff;
  uStack_310 = CONCAT44(aVar16,uVar13);
  uStack_2f8._4_4_ = local_13c;
  TStack_210._padding_ = uStack_310;
  iVar15 = (int)local_c0 >> 5;
  uStack_1f0 = CONCAT44(uStack_2ec,local_2f0);
  bVar23 = (byte)local_c0;
  TStack_210.UnvisitedBitMask = 0xffffffff;
  TStack_210.CurrentBitIndex = uStack_300._4_4_;
  TStack_210.BaseBitIndex = (uint)uStack_2f8;
  TStack_210._28_4_ = local_13c;
  local_218 = local_318;
  TStack_210.Array = pTStack_308;
  if (((int)local_c0 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = local_328;
  if (uVar42 != local_c0) {
    puVar38 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar38 = local_c8;
    }
    uVar13 = -1 << (bVar23 & 0x1f) & puVar38[iVar15];
    while (uVar13 == 0) {
      lVar41 = (longlong)iVar15;
      uVar34 = uVar34 + 0x20;
      iVar15 = iVar15 + 1;
      uVar42 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14f028a00;
      uVar13 = puVar38[lVar41 + 1];
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar41 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar41 == 0; lVar41 = lVar41 + -1) {
      }
    }
    local_258 = (int)lVar41;
    uVar42 = (uVar34 - 1) + local_258;
    if ((int)local_c0 < (int)uVar42) {
      uVar42 = local_c0;
    }
  }
LAB_14f028a00:
  do {
    plVar27 = local_218;
    if ((int)local_218[1] - *(int *)((longlong)local_218 + 0x34) != (int)uStack_1f0) {
      local_355 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_355);
    }
    if (((TStack_210.CurrentBitIndex == uVar42) &&
        (TStack_210.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar27 == (longlong *)local_e8)) {
      SaveLocalManifest(pFVar7,false);
      if ((local_2c0->ArrayNum != local_340) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ManifestPakFiles.Num() == NumPaks",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                              ,0x584,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (3 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      local_f0 = 0;
      if (local_f8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TArray<FPakFileEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FPakFileEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TArray<FPakFileEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_138);
      return;
    }
    lVar41 = *plVar27 + (longlong)TStack_210.CurrentBitIndex * 0x28;
    if (4 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
    if (*(longlong *)(*(longlong *)(lVar41 + 0x10) + 0x58) != 0) {
      CancelDownload(pFVar7,(TSharedRef<FChunkDownloader::FPakFile,1> *)(lVar41 + 0x10),true);
    }
    if (*(char *)(*(longlong *)(lVar41 + 0x10) + 0x41) != '\0') {
      UnmountPakFile(pFVar7,(TSharedRef<FChunkDownloader::FPakFile,1> *)(lVar41 + 0x10));
    }
    if ((*(longlong *)(*(longlong *)(lVar41 + 0x10) + 0x48) != 0) &&
       (*(char *)(*(longlong *)(lVar41 + 0x10) + 0x42) == '\0')) {
      pFVar7->bNeedsManifestSave = true;
      puVar29 = *(undefined8 **)(lVar41 + 0x10);
      iVar12 = (pFVar7->CacheFolder).Data.ArrayNum;
      iVar17 = *(int *)(puVar29 + 1);
      iVar15 = iVar17 + -1;
      if (iVar17 == 0) {
        iVar15 = 0;
      }
      local_338.Data.ArrayNum = iVar12;
      if ((iVar12 == 0) && (iVar15 != -1)) {
        _Src = (pFVar7->CacheFolder).Data.AllocatorInstance.Data;
        iVar17 = iVar15 + 2;
LAB_14f028b41:
        local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar17 != 0) goto LAB_14f028b4a;
        local_338.Data.ArrayMax = 0;
      }
      else {
        _Src = (pFVar7->CacheFolder).Data.AllocatorInstance.Data;
        iVar17 = iVar15 + 1;
        if (iVar12 == 0) goto LAB_14f028b41;
LAB_14f028b4a:
        local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar13 = iVar12 + iVar17;
        if ((int)uVar13 < iVar12) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar13,0,(ForAnyElementType *)&local_338,iVar12,&local_338.Data.ArrayMax);
        if (iVar12 != 0) {
          memcpy(local_338.Data.AllocatorInstance.Data,_Src,(longlong)iVar12 * 2);
        }
      }
      ::FString::PathAppend(&local_338,(wchar_t *)*puVar29,iVar15);
      FVar30.Data = (FScriptContainerElement *)L"";
      if (local_338.Data.ArrayNum != 0) {
        FVar30.Data = local_338.Data.AllocatorInstance.Data;
      }
      cVar11 = (**(code **)((longlong)*pIVar22 + 0x38))(pIVar22,FVar30.Data,0);
      if (cVar11 == '\0') {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<639807134757815673>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                            ,0x579,"FileManager.Delete(*FullPathOnDisk)");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (1 < (byte)LogChunkDownloader._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
        }
      }
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
    }
    TStack_210.UnvisitedBitMask = TStack_210.UnvisitedBitMask & ~TStack_210._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_210);
  } while( true );
}

// MountChunk @ 14f028d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChunkDownloader::MountChunk
          (FChunkDownloader *this,int param_1,TFunction<void___cdecl(bool)> *param_2)

{
  FChunk *pFVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->Chunks).field_0x8 != *(int *)&(this->Chunks).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Chunks).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Chunks).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->Chunks).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&this->Chunks);
        if (*piVar4 == param_1) {
          piVar3 = piVar4 + 2;
          if (piVar4 == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          if ((piVar3 != (int *)0x0) &&
             (pFVar1 = *(FChunk **)piVar3, 0 < (pFVar1->PakFiles).ArrayNum)) {
            if (pFVar1->bIsMounted == false) {
              MountChunkInternal(this,pFVar1,param_2);
              SaveLocalManifest(this,false);
              ComputeLoadingStats(this);
              return;
            }
            goto LAB_14f028df5;
          }
          break;
        }
        iVar2 = piVar4[6];
      } while (iVar2 != -1);
    }
  }
  if (2 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
LAB_14f028df5:
  ExecuteNextTick(this,param_2,true);
  return;
}

// MountChunkInternal @ 14f028e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChunkDownloader::MountChunkInternal
          (FChunkDownloader *this,FChunk *param_1,TFunction<void___cdecl(bool)> *param_2)

{
  int *piVar1;
  TArray<TSharedRef<FChunkDownloader::FPakFile,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TWeakPtr<FTSTicker::FElement,1> *pTVar3;
  atomic<int> aVar4;
  TFunction<void___cdecl(bool)> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FChunkDownloader *pFVar7;
  code *pcVar8;
  void *pvVar9;
  uint uVar10;
  FChunkDownloader *pFVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  TSharedRef<FChunkDownloader,1> *pTVar16;
  code **ppcVar17;
  FAsyncTask<FChunkDownloader::FPakMountWork> *pFVar18;
  FName *pFVar19;
  TStatIdData *pTVar20;
  undefined8 *puVar21;
  ulong64 uVar22;
  TWeakPtr<FTSTicker::FElement,1> *pTVar23;
  longlong *plVar24;
  ulonglong uVar25;
  TArray<TFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_> *pTVar26;
  FScriptContainerElement *pFVar27;
  FAsyncTask<FChunkDownloader::FPakMountWork> *pFVar28;
  FScriptContainerElement *pFVar29;
  atomic<int> *paVar30;
  FTSTicker *pFVar31;
  FElement *pFVar32;
  FName FVar33;
  undefined1 auStackY_1d8 [32];
  undefined1 local_178;
  undefined1 local_177 [7];
  undefined1 local_170 [8];
  FDelegateAllocation local_168;
  uint local_158;
  FTSTicker *local_150;
  FChunkDownloader *local_148;
  FName local_140;
  FDestructionSentinel local_138;
  FDestructionSentinel local_120;
  FDelegateAllocation *local_108;
  TSharedRef<FChunkDownloader,1> local_100;
  TSharedRef<FChunkDownloader,1> local_f0;
  TWeakPtr<FTSTicker::FElement,1> local_e0;
  FChunkDownloader *local_c8;
  TReferenceControllerBase<1> *local_c0;
  int local_b8;
  code *local_a8;
  longlong local_98 [3];
  longlong *local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_158 = 0;
  local_148 = this;
  if ((param_1->bIsMounted != false) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Chunk.bIsMounted",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                          ,0x5b2,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar28 = param_1->MountTask;
  if (pFVar28 == (FAsyncTask<FChunkDownloader::FPakMountWork> *)0x0) {
    pFVar27 = (param_1->PakFiles).AllocatorInstance.Data;
    iVar13 = (param_1->PakFiles).ArrayNum;
    pFVar29 = pFVar27 + (longlong)iVar13 * 0x10;
    while( true ) {
      if ((param_1->PakFiles).ArrayNum != iVar13) {
        local_178 = 0;
        `TCheckedPointerIterator<TSharedRef<FChunkDownloader::FPakFile,1>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_178);
      }
      if (pFVar27 == pFVar29) {
        if (4 < (byte)LogChunkDownloader._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
        }
        if ((param_1->MountTask != (FAsyncTask<FChunkDownloader::FPakMountWork> *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Chunk.MountTask == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                                ,0x5d0,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar18 = ::operator_new(200);
        pFVar28 = (FAsyncTask<FChunkDownloader::FPakMountWork> *)0x0;
        if (pFVar18 != (FAsyncTask<FChunkDownloader::FPakMountWork> *)0x0) {
          uVar25 = (ulonglong)_tls_index;
          pFVar18->_padding_ = 0;
          pFVar18->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
          pFVar18->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
          pFVar18->_padding_ = (longlong)&___7__FAsyncTask_VFPakMountWork_FChunkDownloader____6B_;
          *(undefined4 *)&pFVar18->_padding_ = 0;
          pFVar18->_padding_ = 0;
          pFVar18->_padding_ = 0;
          *(undefined2 *)&pFVar18->_padding_ = 3;
          pFVar18->_padding_ = -1;
          pFVar18->_padding_ = 0;
          *(undefined8 *)&pFVar18->Task = 0;
          pvVar9 = ThreadLocalStoragePointer;
          (pFVar18->Task).CacheFolder.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar18->Task).CacheFolder.Data.ArrayNum = 0;
          (pFVar18->Task).CacheFolder.Data.ArrayMax = 0;
          (pFVar18->Task).EmbeddedFolder.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          lVar15 = *(longlong *)((longlong)pvVar9 + uVar25 * 8);
          (pFVar18->Task).EmbeddedFolder.Data.ArrayNum = 0;
          (pFVar18->Task).EmbeddedFolder.Data.ArrayMax = 0;
          (pFVar18->Task).PakFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar18->Task).PakFiles.ArrayNum = 0;
          (pFVar18->Task).PakFiles.ArrayMax = 0;
          (pFVar18->Task).PostMountCallbacks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
          (pFVar18->Task).PostMountCallbacks.ArrayNum = 0;
          (pFVar18->Task).PostMountCallbacks.ArrayMax = 0;
          (pFVar18->Task).MountedPakFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar18->Task).MountedPakFiles.ArrayNum = 0;
          (pFVar18->Task).MountedPakFiles.ArrayMax = 0;
          if ((*(int *)(lVar15 + 0x9d4c) <
               `public:_struct_TStatId___cdecl_FChunkDownloader::FPakMountWork::GetStatId(void)const___ptr64'
               ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_struct_TStatId___cdecl_FChunkDownloader::FPakMountWork::GetStatId(void)const___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_struct_TStatId___cdecl_FChunkDownloader::FPakMountWork::GetStatId(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            FThreadSafeStaticStat<`FChunkDownloader::FPakMountWork::GetStatId'::__l2::FStat_FPakMountWork>
            ::
            FThreadSafeStaticStat<_FChunkDownloader::FPakMountWork::GetStatId_::__l2::FStat_FPakMountWork>
                      (&`public:_struct_TStatId___cdecl_FChunkDownloader::FPakMountWork::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FPakMountWork);
            _Init_thread_footer(&`public:_struct_TStatId___cdecl_FChunkDownloader::FPakMountWork::GetStatId(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          pTVar20 = _StatPtr_FPakMountWork;
          if (_StatPtr_FPakMountWork == (TStatIdData *)0x0) {
            pFVar19 = ::FName::FName(&local_140,"FPakMountWork");
            pTVar20 = FThreadSafeStaticStatBase::DoSetup
                                ((FThreadSafeStaticStatBase *)
                                 &`public:_struct_TStatId___cdecl_FChunkDownloader::FPakMountWork::GetStatId(void)const___ptr64'
                                  ::__l2::StatPtr_FPakMountWork,*pFVar19,L"FPakMountWork",
                                 "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                                 L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid
                                );
          }
          pFVar18->_padding_ = (longlong)pTVar20;
          pFVar28 = pFVar18;
        }
        param_1->MountTask = pFVar28;
        FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar28);
        pFVar11 = local_148;
        (pFVar28->Task).ChunkId = param_1->ChunkId;
        iVar13 = (local_148->CacheFolder).Data.ArrayNum;
        iVar14 = iVar13 + -1;
        if (iVar13 == 0) {
          iVar14 = 0;
        }
        ::FString::AssignRange
                  (&(pFVar28->Task).CacheFolder,
                   (wchar_t *)(local_148->CacheFolder).Data.AllocatorInstance.Data,iVar14);
        iVar14 = (pFVar11->EmbeddedFolder).Data.ArrayNum;
        iVar13 = iVar14 + -1;
        if (iVar14 == 0) {
          iVar13 = 0;
        }
        ::FString::AssignRange
                  (&(pFVar28->Task).EmbeddedFolder,
                   (wchar_t *)(pFVar11->EmbeddedFolder).Data.AllocatorInstance.Data,iVar13);
        iVar13 = (param_1->PakFiles).ArrayNum;
        pFVar27 = (param_1->PakFiles).AllocatorInstance.Data;
        pFVar31 = (FTSTicker *)(pFVar27 + (longlong)iVar13 * 0x10);
        local_150 = pFVar31;
        while( true ) {
          if ((param_1->PakFiles).ArrayNum != iVar13) {
            local_177[0] = 0;
            `TCheckedPointerIterator<TSharedRef<FChunkDownloader::FPakFile,1>,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_177);
          }
          uVar10 = local_158;
          if ((FTSTicker *)pFVar27 == pFVar31) break;
          if (*(char *)(*(longlong *)pFVar27 + 0x41) == '\0') {
            pTVar2 = &(pFVar28->Task).PakFiles;
            pFVar29 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar29 <= pFVar27) &&
                (pFVar27 < pFVar29 + (longlong)(pFVar28->Task).PakFiles.ArrayMax * 0x10)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar14 = (pFVar28->Task).PakFiles.ArrayNum;
            piVar1 = &(pFVar28->Task).PakFiles.ArrayMax;
            if (iVar14 == *piVar1) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar2->AllocatorInstance,piVar1);
            }
            (pFVar28->Task).PakFiles.ArrayNum = iVar14 + 1;
            pFVar29 = (pTVar2->AllocatorInstance).Data;
            *(longlong *)(pFVar29 + (longlong)iVar14 * 0x10) = *(longlong *)pFVar27;
            lVar15 = *(longlong *)(pFVar27 + 8);
            *(longlong *)(pFVar29 + (longlong)iVar14 * 0x10 + 8) = lVar15;
            pFVar31 = local_150;
            if (lVar15 != 0) {
              LOCK();
              *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
              UNLOCK();
            }
          }
          pFVar27 = pFVar27 + 0x10;
        }
        pFVar32 = (FElement *)(ulonglong)local_158;
        if (*(longlong *)param_2 != 0) {
          pTVar26 = &(pFVar28->Task).PostMountCallbacks;
          pTVar5 = (TFunction<void___cdecl(bool)> *)(pTVar26->AllocatorInstance).Data;
          if (((pTVar5 <= param_2) &&
              (param_2 < pTVar5 + (pFVar28->Task).PostMountCallbacks.ArrayMax)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar13 = (pFVar28->Task).PostMountCallbacks.ArrayNum;
          piVar1 = &(pFVar28->Task).PostMountCallbacks.ArrayMax;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1030,&pTVar26->AllocatorInstance,piVar1);
          }
          (pFVar28->Task).PostMountCallbacks.ArrayNum = iVar13 + 1;
          pFVar27 = (pTVar26->AllocatorInstance).Data;
          lVar15 = (longlong)iVar13 * 0x30;
          *(undefined8 *)(pFVar27 + lVar15) = *(undefined8 *)param_2;
          *(undefined8 *)(pFVar27 + lVar15 + 0x28) = 0;
          if (*(longlong *)(pFVar27 + lVar15) != 0) {
            puVar21 = (undefined8 *)&param_2->field_0x10;
            if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
              puVar21 = *(undefined8 **)&param_2->field_0x28;
            }
            (**(code **)*puVar21)();
          }
        }
        FAsyncTaskBase::Start
                  ((FAsyncTaskBase *)param_1->MountTask,false,GThreadPool,Normal,
                   (EQueuedWorkFlags)uVar10,-1,(wchar_t *)0x0);
        pFVar11 = local_148;
        pTVar3 = &local_148->MountTicker;
        if (((pTVar3->Object != pFVar32) &&
            (pTVar6 = (local_148->MountTicker).WeakReferenceCount.ReferenceController,
            pTVar6 != (TReferenceControllerBase<1> *)0x0)) &&
           (0 < (int)pTVar6->SharedReferenceCount)) {
          return;
        }
        pFVar31 = FTSTicker::GetCoreTicker();
        local_170 = (undefined1  [8])0x0;
        local_168.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_168.DelegateSize = 0;
        local_150 = pFVar31;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_170,
                   (FWriteAccessScope *)&local_120);
        local_108 = &local_168;
        puVar21 = UE::Core::Private::DelegateAllocate(0x30,&local_168);
        FVar33 = local_140;
        if (puVar21 != (undefined8 *)0x0) {
          pTVar16 = TSharedFromThis<FChunkDownloader,1>::AsShared
                              ((TSharedFromThis<FChunkDownloader,1> *)pFVar11,&local_f0);
          FVar33 = (FName)(pTVar16->SharedReferenceCount).ReferenceController;
          pFVar7 = pTVar16->Object;
          if (FVar33 != (FName)0x0) {
            LOCK();
            *(atomic<int> *)((longlong)FVar33 + 8) =
                 (atomic<int>)((int)*(atomic<int> *)((longlong)FVar33 + 8) + 1);
            UNLOCK();
            LOCK();
            *(atomic<int> *)((longlong)FVar33 + 8) =
                 (atomic<int>)((int)*(atomic<int> *)((longlong)FVar33 + 8) + 1);
            UNLOCK();
          }
          *puVar21 = &
                     ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar22 = FDelegateHandle::GenerateNewID();
          puVar21[2] = uVar22;
          *puVar21 = &
                     ___7__TBaseSPMethodDelegateInstance__0A_VFChunkDownloader___00__A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar21[3] = pFVar7;
          *(FName *)(puVar21 + 4) = FVar33;
          if (FVar33 != (FName)0x0) {
            LOCK();
            *(atomic<int> *)((longlong)FVar33 + 0xc) =
                 (atomic<int>)((int)*(atomic<int> *)((longlong)FVar33 + 0xc) + 1);
            UNLOCK();
          }
          puVar21[5] = UpdateMountTasks;
          pFVar32 = (FElement *)0x7;
          pFVar31 = local_150;
        }
        if (((ulonglong)pFVar32 & 4) != 0) {
          pFVar32 = (FElement *)(ulonglong)((uint)pFVar32 & 0xfffffffb);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)FVar33);
        }
        if (((ulonglong)pFVar32 & 2) != 0) {
          pFVar32 = (FElement *)(ulonglong)((uint)pFVar32 & 0xfffffffd);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)FVar33);
        }
        if (((ulonglong)pFVar32 & 1) != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f0.SharedReferenceCount.ReferenceController);
        }
        if (local_120.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
        }
        pTVar23 = FTSTicker::AddTicker
                            (pFVar31,&local_e0,
                             (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_170,
                             0.0);
        if (pTVar3 != pTVar23) {
          pTVar3->Object = pTVar23->Object;
          pTVar23->Object = (FElement *)0x0;
          pTVar6 = (pFVar11->MountTicker).WeakReferenceCount.ReferenceController;
          (pFVar11->MountTicker).WeakReferenceCount.ReferenceController =
               (pTVar23->WeakReferenceCount).ReferenceController;
          (pTVar23->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar30 = &pTVar6->WeakReferenceCount;
            aVar4 = *paVar30;
            *paVar30 = (atomic<int>)((int)*paVar30 + -1);
            UNLOCK();
            if (aVar4 == (atomic<int>)0x1) {
              (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
            }
          }
        }
        if (local_e0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar30 = &(local_e0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar4 = *paVar30;
          *paVar30 = (atomic<int>)((int)*paVar30 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)((local_e0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_e0.WeakReferenceCount.ReferenceController,1);
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_170,
                   (FWriteAccessScope *)&local_138);
        if ((local_168.DelegateSize != 0) &&
           (local_168.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_168.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_168,0,0,0x10);
          local_168.DelegateSize = 0;
        }
        if (local_138.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
        }
        if (local_168.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_168.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_170);
        return;
      }
      if (*(char *)(*(longlong *)pFVar27 + 0x40) == '\0') break;
      pFVar27 = pFVar27 + 0x10;
    }
    pTVar16 = TSharedFromThis<FChunkDownloader,1>::AsShared
                        ((TSharedFromThis<FChunkDownloader,1> *)this,&local_100);
    pTVar6 = (pTVar16->SharedReferenceCount).ReferenceController;
    local_c8 = pTVar16->Object;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      paVar30 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      paVar30 = &pTVar6->WeakReferenceCount;
      LOCK();
      *paVar30 = (atomic<int>)((int)*paVar30 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_100.SharedReferenceCount.ReferenceController);
    local_b8 = param_1->ChunkId;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar30 = (atomic<int>)((int)*paVar30 + 1);
      UNLOCK();
    }
    local_a8 = *(code **)param_2;
    local_80 = (longlong *)0x0;
    local_c0 = pTVar6;
    if (local_a8 != (code *)0x0) {
      puVar21 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar21 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar21)(puVar21,local_98);
    }
    local_78[0] = (code *)0x0;
    ppcVar17 = FMemory::Malloc(0x60,0x10);
    local_50 = ppcVar17;
    *ppcVar17 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FChunkDownloader::MountChunkInternal'::`65'::<lambda_1>,0,1>
                         ::_vftable_;
    ppcVar17[2] = (code *)local_c8;
    ppcVar17[3] = (code *)local_c0;
    local_c0 = (TReferenceControllerBase<1> *)0x0;
    local_c8 = (FChunkDownloader *)0x0;
    *(int *)(ppcVar17 + 4) = local_b8;
    ppcVar17[6] = local_a8;
    ppcVar17[0xb] = (code *)0x0;
    if (local_a8 != (code *)0x0) {
      plVar24 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar24 = local_80;
      }
      (**(code **)*plVar24)();
    }
    if (ppcVar17 + 2 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FChunkDownloader::MountChunkInternal'::__l65::<lambda_1>,void,bool>
                    ::Call;
    }
    DownloadChunkInternal(this,param_1,(TFunction<void___cdecl(bool)> *)local_78,0x7fffffff);
    if (local_78[0] != (code *)0x0) {
      ppcVar17 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar17 = local_50;
      }
      (**(code **)(*ppcVar17 + 0x10))();
    }
    if (local_a8 != (code *)0x0) {
      plVar24 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar24 = local_80;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(local_c0->_padding_ + 8))(local_c0,1);
      }
    }
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar30 = &pTVar6->WeakReferenceCount;
      aVar4 = *paVar30;
      *paVar30 = (atomic<int>)((int)*paVar30 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
  }
  else if (*(longlong *)param_2 != 0) {
    FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar28);
    pTVar26 = &(pFVar28->Task).PostMountCallbacks;
    pTVar5 = (TFunction<void___cdecl(bool)> *)(pTVar26->AllocatorInstance).Data;
    if (((pTVar5 <= param_2) && (param_2 < pTVar5 + (pFVar28->Task).PostMountCallbacks.ArrayMax)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar13 = (pFVar28->Task).PostMountCallbacks.ArrayNum;
    piVar1 = &(pFVar28->Task).PostMountCallbacks.ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1030,&pTVar26->AllocatorInstance,piVar1);
    }
    lVar15 = (longlong)iVar13;
    (pFVar28->Task).PostMountCallbacks.ArrayNum = iVar13 + 1;
    pFVar27 = (pTVar26->AllocatorInstance).Data;
    *(undefined8 *)(pFVar27 + lVar15 * 0x30) = *(undefined8 *)param_2;
    *(undefined8 *)(pFVar27 + lVar15 * 0x30 + 0x28) = 0;
    if (*(longlong *)(pFVar27 + lVar15 * 0x30) != 0) {
      puVar21 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar21 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar21)(puVar21,pFVar27 + lVar15 * 0x30 + 0x10);
    }
  }
  return;
}

// SaveLocalManifest @ 14f02b7d0

void __thiscall FChunkDownloader::SaveLocalManifest(FChunkDownloader *this,bool param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *pTVar5;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *_Src;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  FString local_178;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *local_168;
  ulonglong local_160;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *local_158;
  int iStack_150;
  uint uStack_14c;
  undefined1 *local_148;
  undefined4 uStack_140;
  int iStack_13c;
  int local_138;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  int local_124;
  FString local_120;
  FString local_110;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  if ((!param_1) && (this->bNeedsManifestSave == false)) {
    return;
  }
  puVar1 = &(this->PakFiles).field_0x10;
  iVar12 = *(int *)&(this->PakFiles).field_0x28;
  iStack_150 = 0;
  local_168 = &this->PakFiles;
  local_160 = 1;
  local_138 = 0;
  uStack_14c = 1;
  iStack_13c = 0;
  if (iVar12 != 0) {
    puVar14 = *(uint **)&(this->PakFiles).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uStack_14c = *puVar14;
    local_138 = 0;
    while (uStack_14c == 0) {
      lVar9 = (longlong)iStack_150;
      local_138 = local_138 + 0x20;
      iStack_150 = iStack_150 + 1;
      uStack_14c = 1;
      iStack_13c = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_150) goto LAB_14f02b8c1;
      uStack_14c = puVar14[lVar9 + 1];
    }
    uStack_14c = -uStack_14c & uStack_14c;
    uVar2 = (ulonglong)uStack_14c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_13c = local_138 + -1 + local_res20;
    if (iVar12 < iStack_13c) {
      iStack_13c = iVar12;
    }
  }
LAB_14f02b8c1:
  uVar11 = *(uint *)&(this->PakFiles).field_0x28;
  iStack_130 = *(int *)&(this->PakFiles).field_0x8 - *(int *)&(this->PakFiles).field_0x34;
  uVar15 = uVar11 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uStack_14c,iStack_150);
  uStack_140 = 0xffffffff;
  TStack_c8.CurrentBitIndex = iStack_13c;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = local_138;
  uStack_a8 = CONCAT44(uStack_12c,iStack_130);
  local_158 = local_168;
  local_148 = puVar1;
  local_d0 = local_168;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar12 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar5 = local_168;
  uVar3 = *(uint *)&(this->PakFiles).field_0x28;
  if (uVar11 != uVar3) {
    puVar13 = *(undefined1 **)&(this->PakFiles).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14f02b9e0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_128 = (int)lVar9;
    uVar11 = local_128 + -1 + uVar15;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_14f02b9e0:
  while( true ) {
    pTVar6 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_c8.CurrentBitIndex == uVar11) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar5))
    break;
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  ::FString::PrintfImpl(&local_110,L"$NUM_ENTRIES = %d\n");
  iVar12 = *(int *)&(this->PakFiles).field_0x28;
  iStack_f8 = 0;
  local_e0 = 0;
  iStack_e4 = 0;
  if (iVar12 != 0) {
    puVar14 = *(uint **)&(this->PakFiles).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    local_e0 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14f02bae0;
      uVar11 = puVar14[lVar9 + 1];
    }
    local_160 = (ulonglong)(-uVar11 & uVar11);
    uVar2 = local_160 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_124 = (int)lVar9;
    iStack_e4 = local_e0 + -1 + local_124;
    if (iVar12 < iStack_e4) {
      iStack_e4 = iVar12;
    }
  }
LAB_14f02bae0:
  uStack_f4 = (undefined4)local_160;
  uVar11 = *(uint *)&(this->PakFiles).field_0x28;
  iStack_dc = iStack_13c;
  iStack_d8 = *(int *)&(this->PakFiles).field_0x8 - *(int *)&(this->PakFiles).field_0x34;
  local_100 = pTVar5;
  uVar15 = uVar11 & 0xffffffe0;
  uStack_e8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_98.CurrentBitIndex = iStack_e4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  local_a0 = pTVar5;
  iVar10 = (int)uVar11 >> 5;
  TStack_98._28_4_ = iStack_13c;
  TStack_98.BaseBitIndex = local_e0;
  uStack_78 = CONCAT44(uStack_d4,iStack_d8);
  local_f0 = puVar1;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar12 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->PakFiles).field_0x28;
  if (uVar11 != uVar3) {
    puVar13 = *(undefined1 **)&(this->PakFiles).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14f02bc00;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_14f02bc00:
  while( true ) {
    pTVar6 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_98.CurrentBitIndex == uVar11) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar5))
    break;
    lVar9 = *(longlong *)(*(longlong *)pTVar6 + 0x10 + (longlong)TStack_98.CurrentBitIndex * 0x28);
    if ((*(char *)(lVar9 + 0x42) == '\0') &&
       ((*(longlong *)(lVar9 + 0x48) != 0 || (*(longlong *)(lVar9 + 0x58) != 0)))) {
      ::FString::PrintfImpl(&local_120,L"%s\t%llu\t%s\t-1\t/\n");
      iVar12 = local_120.Data.ArrayNum + -1;
      if (local_120.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      ::FString::AppendChars(&local_110,(wchar_t *)local_120.Data.AllocatorInstance.Data,iVar12);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  iVar12 = (this->CacheFolder).Data.ArrayNum;
  iVar10 = LOCAL_MANIFEST.Data.ArrayNum + -1;
  if (LOCAL_MANIFEST.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  local_178.Data.ArrayNum = iVar12;
  if ((iVar12 == 0) && (iVar10 != -1)) {
    _Src = (this->CacheFolder).Data.AllocatorInstance.Data;
    iVar8 = iVar10 + 2;
LAB_14f02bd26:
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar8 == 0) {
      local_178.Data.ArrayMax = 0;
      goto LAB_14f02bd7b;
    }
  }
  else {
    _Src = (this->CacheFolder).Data.AllocatorInstance.Data;
    iVar8 = iVar10 + 1;
    if (iVar12 == 0) goto LAB_14f02bd26;
  }
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar11 = iVar12 + iVar8;
  if ((int)uVar11 < iVar12) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar11,0,(ForAnyElementType *)&local_178,iVar12,&local_178.Data.ArrayMax);
  if (iVar12 != 0) {
    memcpy(local_178.Data.AllocatorInstance.Data,_Src,(longlong)iVar12 * 2);
  }
LAB_14f02bd7b:
  ::FString::PathAppend(&local_178,(wchar_t *)LOCAL_MANIFEST.Data.AllocatorInstance.Data,iVar10);
  bVar7 = WriteStringAsUtf8TextFile(&local_110,&local_178);
  if (bVar7) {
    this->bNeedsManifestSave = false;
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  return;
}

// SetContentBuildId @ 14f02be00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChunkDownloader::SetContentBuildId(FChunkDownloader *this,FString *param_1,FString *param_2)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong local_res10;
  FString local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  ::FString::operator=(&this->ContentBuildId,param_2);
  ::FString::operator=(&this->LastDeploymentName,param_1);
  if (3 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
  uVar14 = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  ::FString::PrintfImpl(&local_48,L"/Script/Plugins.ChunkDownloader %s");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar9.Data = local_48.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::GetArray(GConfig,(wchar_t *)FVar9.Data,L"CdnBaseUrls",&local_58,&GGameIni);
  if (local_58.ArrayNum < 1) {
    FConfigCacheIni::GetArray
              (GConfig,L"/Script/Plugins.ChunkDownloader",L"CdnBaseUrls",&local_58,&GGameIni);
    if ((local_58.ArrayNum < 1) && (2 < (byte)LogChunkDownloader._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
  }
  pTVar2 = &this->BuildBaseUrls;
  DestructItems<FString,int>
            ((FString *)(pTVar2->AllocatorInstance).Data,(this->BuildBaseUrls).ArrayNum);
  piVar1 = &(this->BuildBaseUrls).ArrayMax;
  (this->BuildBaseUrls).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar10 = (ulonglong)local_58.ArrayNum;
  if (0 < local_58.ArrayNum) {
    local_res10 = 0;
    uVar11 = uVar10;
    uVar16 = uVar14;
    do {
      uVar15 = (uint)uVar16;
      uVar7 = 0;
      if ((int)uVar15 < (int)uVar11) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = local_58.AllocatorInstance.Data + local_res10;
      if ((*(int *)(pFVar12 + 8) < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!BaseUrl.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                             ,0x224,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->ContentBuildId).Data.ArrayNum;
      iVar8 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar8 = 0;
      }
      if ((*(int *)(pFVar12 + 8) != 0) || (iVar6 = 2, iVar8 == -1)) {
        iVar6 = 1;
      }
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = *(int *)(pFVar12 + 8);
      _Src = *(void **)pFVar12;
      local_68.Data.ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar8 + iVar6 == 0)) {
        local_68.Data.ArrayMax = 0;
      }
      else {
        uVar7 = iVar3 + iVar8 + iVar6;
        if ((int)uVar7 < iVar3) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar7,0,(ForAnyElementType *)&local_68,iVar3,&local_68.Data.ArrayMax);
        if (iVar3 != 0) {
          memcpy(local_68.Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
        }
      }
      ::FString::PathAppend
                (&local_68,(wchar_t *)(this->ContentBuildId).Data.AllocatorInstance.Data,iVar8);
      if (3 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
      pFVar12 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar12 + (longlong)*piVar1 * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (this->BuildBaseUrls).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      FVar9.Data = local_68.Data.AllocatorInstance.Data;
      pFVar12 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      (this->BuildBaseUrls).ArrayNum = iVar8 + 1;
      *(undefined8 *)pFVar12 = 0;
      lVar13 = (longlong)local_68.Data.ArrayNum;
      *(int *)(pFVar12 + 8) = local_68.Data.ArrayNum;
      if (local_68.Data.ArrayNum == 0) {
        *(int *)(pFVar12 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,local_68.Data.ArrayNum,
                   (int *)(pFVar12 + 0xc));
        memcpy(*(void **)pFVar12,FVar9.Data,lVar13 * 2);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar11 = local_58._8_8_ & 0xffffffff;
      local_res10 = local_res10 + 0x10;
      uVar14 = uVar14 + 1;
    } while ((longlong)uVar14 < (longlong)uVar10);
  }
  iVar8 = local_58.ArrayNum;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
    iVar8 = local_58.ArrayNum;
  }
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,iVar8);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// Shutdown @ 14f02c270

void __cdecl FChunkDownloader::Shutdown(void)

{
  FName FVar1;
  FModuleManager *this;
  IModuleInterface *pIVar2;
  IModuleInterface local_18;
  FSharedReferencer<1> FStack_10;
  
  FVar1 = ChunkDownloaderModuleName;
  this = FModuleManager::Get();
  pIVar2 = FModuleManager::LoadModule(this,FVar1,None);
  if (pIVar2 != (IModuleInterface *)0x0) {
    if (pIVar2[1] != (IModuleInterface)0x0) {
      Finalize((FChunkDownloader *)pIVar2[1]);
      local_18 = (IModuleInterface)0x0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pIVar2 + 1 != &local_18) {
        pIVar2[1] = (IModuleInterface)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pIVar2 + 2),&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
      return;
    }
  }
  return;
}

// TryDownloadBuildManifest @ 14f02c9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChunkDownloader::TryDownloadBuildManifest(FChunkDownloader *this,int param_1)

{
  atomic<int> *paVar1;
  TSharedPtr<IHttpRequest,1> *pTVar2;
  atomic<int> aVar3;
  int iVar4;
  void *_Src;
  FName FVar5;
  IHttpRequest *pIVar6;
  TReferenceControllerBase<1> *pTVar7;
  FChunkDownloader *pFVar8;
  code *pcVar9;
  ForAnyElementType _Src_00;
  bool bVar10;
  int iVar11;
  int iVar12;
  FName *pFVar13;
  FModuleManager *this_00;
  FHttpModule *pFVar14;
  undefined8 *puVar15;
  TSharedRef<FChunkDownloader,1> *pTVar16;
  LPCRITICAL_SECTION lpCriticalSection;
  ulong64 uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  FName local_res8;
  FString local_c8;
  FString local_b8;
  FChunkDownloader *local_a8;
  TReferenceControllerBase<1> *local_a0;
  int local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  IHttpRequest *local_80;
  FSharedReferencer<1> local_78;
  FString local_70;
  FString local_60;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  TSharedRef<FChunkDownloader,1> local_40;
  
  if (((this->BuildBaseUrls).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("BuildBaseUrls.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                          ,0x497,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  ::FString::PrintfImpl(&local_70,L"BuildManifest-%s.txt");
  iVar11 = (this->BuildBaseUrls).ArrayNum;
  uVar18 = param_1 % iVar11;
  uVar21 = 0;
  if ((int)uVar18 < iVar11) {
    uVar21 = ~uVar18 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar19 = (this->BuildBaseUrls).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10;
  uVar21 = local_70.Data.ArrayNum - 1;
  if (local_70.Data.ArrayNum == 0) {
    uVar21 = 0;
  }
  if ((*(int *)(pFVar19 + 8) != 0) || (iVar11 = 2, uVar21 == 0xffffffff)) {
    iVar11 = 1;
  }
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = *(int *)(pFVar19 + 8);
  _Src = *(void **)pFVar19;
  local_b8.Data.ArrayNum = iVar4;
  if ((iVar4 == 0) && (uVar21 + iVar11 == 0)) {
    local_b8.Data.ArrayMax = 0;
  }
  else {
    uVar18 = iVar4 + uVar21 + iVar11;
    if ((int)uVar18 < iVar4) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar18,0,(ForAnyElementType *)&local_b8,iVar4,&local_b8.Data.ArrayMax);
    if (iVar4 != 0) {
      memcpy(local_b8.Data.AllocatorInstance.Data,_Src,(longlong)iVar4 * 2);
    }
  }
  ::FString::PathAppend(&local_b8,(wchar_t *)local_70.Data.AllocatorInstance.Data,uVar21);
  if (4 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
  pFVar13 = ::FName::FName(&local_res8,"HTTP");
  FVar5 = *pFVar13;
  this_00 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(this_00,FVar5);
  pTVar2 = &this->ManifestRequest;
  if ((pTVar2->Object != (IHttpRequest *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ManifestRequest.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                          ,0x4a0,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar14 = FHttpModule::Get();
  puVar15 = (undefined8 *)(**(code **)(pFVar14->_padding_ + 0x40))(pFVar14,local_50);
  local_78.ReferenceController = (TReferenceControllerBase<1> *)puVar15[1];
  local_80 = (IHttpRequest *)*puVar15;
  if (local_78.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_78.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar2 != (TSharedPtr<IHttpRequest,1> *)&local_80) {
    pTVar2->Object = local_80;
    local_80 = (IHttpRequest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ManifestRequest).SharedReferenceCount,&local_78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  if ((pTVar2->Object == (IHttpRequest *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (**(code **)(*(longlong *)pTVar2->Object + 0x68))(pTVar2->Object,&local_b8);
  if ((pTVar2->Object == (IHttpRequest *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pIVar6 = pTVar2->Object;
  pcVar9 = *(code **)(*(longlong *)pIVar6 + 0x60);
  ::FString::FString(&local_60,L"GET");
  (*pcVar9)(pIVar6,&local_60);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  pTVar16 = TSharedFromThis<FChunkDownloader,1>::AsShared
                      ((TSharedFromThis<FChunkDownloader,1> *)this,&local_40);
  pTVar7 = (pTVar16->SharedReferenceCount).ReferenceController;
  pFVar8 = pTVar16->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  iVar11 = (this->CacheFolder).Data.ArrayNum;
  iVar4 = CACHED_BUILD_MANIFEST.Data.ArrayNum + -1;
  if (CACHED_BUILD_MANIFEST.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  local_c8.Data.ArrayNum = iVar11;
  if ((iVar11 == 0) && (iVar4 != -1)) {
    pFVar19 = (this->CacheFolder).Data.AllocatorInstance.Data;
    iVar12 = iVar4 + 2;
LAB_14f02cd64:
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar12 == 0) {
      local_c8.Data.ArrayMax = 0;
      goto LAB_14f02cdb5;
    }
  }
  else {
    pFVar19 = (this->CacheFolder).Data.AllocatorInstance.Data;
    iVar12 = iVar4 + 1;
    if (iVar11 == 0) goto LAB_14f02cd64;
  }
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar21 = iVar12 + iVar11;
  if ((int)uVar21 < iVar11) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar21,0,(ForAnyElementType *)&local_c8,iVar11,&local_c8.Data.ArrayMax);
  if (iVar11 != 0) {
    memcpy(local_c8.Data.AllocatorInstance.Data,pFVar19,(longlong)iVar11 * 2);
  }
LAB_14f02cdb5:
  ::FString::PathAppend
            (&local_c8,(wchar_t *)CACHED_BUILD_MANIFEST.Data.AllocatorInstance.Data,iVar4);
  if ((pTVar2->Object == (IHttpRequest *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pTVar2->Object + 0xf0))();
  _Src_00.Data = local_c8.Data.AllocatorInstance.Data;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
    UNLOCK();
  }
  lVar20 = (longlong)local_c8.Data.ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = CONCAT44(local_88._4_4_,local_c8.Data.ArrayNum);
  local_a8 = pFVar8;
  local_a0 = pTVar7;
  local_98 = param_1;
  if (local_c8.Data.ArrayNum == 0) {
    local_88 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_c8.Data.ArrayNum,0,&local_90,local_c8.Data.ArrayNum,
               (int *)((longlong)&local_88 + 4));
    memcpy(local_90.Data,_Src_00.Data,lVar20 * 2);
  }
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  puVar15 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)(lpCriticalSection + 1))
  ;
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar17;
    *puVar15 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,`FChunkDownloader::TryDownloadBuildManifest'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar15[3] = local_a8;
    puVar15[4] = local_a0;
    local_a0 = (TReferenceControllerBase<1> *)0x0;
    local_a8 = (FChunkDownloader *)0x0;
    puVar15[6] = 0;
    *(int *)(puVar15 + 5) = local_98;
    puVar15[6] = local_90.Data;
    local_90.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar15 + 7) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar15 + 0x3c) = local_88._4_4_;
    local_88 = 0;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_a0->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(local_a0->_padding_ + 8))(local_a0,1);
    }
  }
  if ((pTVar2->Object == (IHttpRequest *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (**(code **)(*(longlong *)pTVar2->Object + 0xe8))();
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return;
}

// TryLoadBuildManifest @ 14f02d0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChunkDownloader::TryLoadBuildManifest(FChunkDownloader *this,int param_1)

{
  int *piVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FChunkDownloader *pFVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FText *pFVar8;
  TSharedRef<FChunkDownloader,1> *pTVar9;
  FTSTicker *this_00;
  undefined8 *puVar10;
  ulong64 uVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *_Src;
  atomic<int> *paVar17;
  TReferenceControllerBase<1> *pTVar18;
  int iVar19;
  bool bVar20;
  float fVar21;
  undefined1 auStackY_188 [32];
  TSharedRef<FChunkDownloader,1> local_148;
  undefined1 local_138 [8];
  FDelegateAllocation local_130;
  int local_120 [2];
  TArray<FPakFileEntry,TSizedDefaultAllocator<32>_> local_118;
  undefined1 local_108 [16];
  longlong local_f8;
  FDelegateAllocation *pFStack_f0;
  undefined8 local_e8;
  longlong *local_e0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_d8;
  undefined1 local_88 [48];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  iVar7 = (this->CacheFolder).Data.ArrayNum;
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  iVar13 = 0;
  iVar19 = CACHED_BUILD_MANIFEST.Data.ArrayNum + -1;
  if (CACHED_BUILD_MANIFEST.Data.ArrayNum == 0) {
    iVar19 = iVar13;
  }
  local_d8.Elements._40_4_ = 0;
  local_d8.Elements._44_4_ = 0x80;
  local_d8.Elements._48_4_ = 0xffffffff;
  local_d8.Elements._52_4_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  iVar5 = iVar19 + 1;
  local_d8.HashSize = 0;
  local_148.SharedReferenceCount.ReferenceController._0_4_ = iVar7;
  if ((iVar7 == 0) && (iVar5 != 0)) {
    _Src = (this->CacheFolder).Data.AllocatorInstance.Data;
    iVar5 = iVar19 + 2;
LAB_14f02d14c:
    local_148.Object = (FChunkDownloader *)0x0;
    if (iVar5 != 0) goto LAB_14f02d157;
    local_148.SharedReferenceCount.ReferenceController._4_4_ = 0;
  }
  else {
    _Src = (this->CacheFolder).Data.AllocatorInstance.Data;
    if (iVar7 == 0) goto LAB_14f02d14c;
LAB_14f02d157:
    local_148.Object = (FChunkDownloader *)0x0;
    uVar6 = iVar7 + iVar5;
    if ((int)uVar6 < iVar7) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar6,0,(ForAnyElementType *)&local_148,iVar7,
               (int *)((longlong)&local_148.SharedReferenceCount.ReferenceController + 4));
    if (iVar7 != 0) {
      memcpy(local_148.Object,_Src,(longlong)iVar7 * 2);
    }
  }
  ::FString::PathAppend
            ((FString *)&local_148,(wchar_t *)CACHED_BUILD_MANIFEST.Data.AllocatorInstance.Data,
             iVar19);
  ParseManifest(&local_118,(FString *)&local_148,
                (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                 *)&local_d8);
  if (local_148.Object != (FChunkDownloader *)0x0) {
    FMemory::Free(local_148.Object);
  }
  if (BUILD_ID_KEY.Data.ArrayNum == 0) {
    FVar16.Data = (FScriptContainerElement *)L"";
  }
  else {
    iVar13 = BUILD_ID_KEY.Data.ArrayNum + -1;
    FVar16.Data = BUILD_ID_KEY.Data.AllocatorInstance.Data;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar16.Data);
  iVar7 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&local_d8,uVar6,&BUILD_ID_KEY);
  if ((iVar7 == -1) || (lVar14 = local_d8.Elements._0_8_ + (longlong)iVar7 * 0x28, lVar14 == 0)) {
    local_148.Object = (FChunkDownloader *)&BUILD_ID_KEY;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&local_d8,(uint)local_120,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar6,
               (bool *)&local_148);
    lVar14 = local_d8.Elements._0_8_ + (longlong)local_120[0] * 0x28;
  }
  iVar7 = *(int *)(lVar14 + 0x18);
  iVar19 = (this->ContentBuildId).Data.ArrayNum;
  if (iVar7 == iVar19) {
    if (1 < iVar7) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(lVar14 + 0x10),
                         (wchar_t *)(this->ContentBuildId).Data.AllocatorInstance.Data);
      bVar20 = iVar7 == 0;
      goto LAB_14f02d28e;
    }
LAB_14f02d57f:
    LoadManifest(this,&local_118);
    local_88._0_8_ = *(undefined8 *)&this->UpdateBuildCallback;
    local_88._40_8_ = *(undefined8 *)&(this->UpdateBuildCallback).field_0x28;
    *(undefined8 *)&(this->UpdateBuildCallback).field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&(this->UpdateBuildCallback).field_0x20;
    local_88._16_8_ = *(undefined8 *)&(this->UpdateBuildCallback).field_0x10;
    local_88._24_8_ = *(undefined8 *)&(this->UpdateBuildCallback).field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)&this->UpdateBuildCallback = 0;
    }
    ExecuteNextTick(this,(TFunction<void___cdecl(bool)> *)local_88,true);
    if (local_88._0_8_ == 0) goto LAB_14f02d5f7;
    plVar15 = (longlong *)(local_88 + 0x10);
    plVar12 = (longlong *)local_88._40_8_;
  }
  else {
    bVar20 = iVar7 + iVar19 == 1;
LAB_14f02d28e:
    if (bVar20) goto LAB_14f02d57f;
    if (0 < (this->BuildBaseUrls).ArrayNum) {
      if (param_1 < 1) {
        TryDownloadBuildManifest(this,param_1);
      }
      else {
        fVar21 = (float)param_1 * __real_40a00000;
        if (__real_42700000 <= (float)param_1 * __real_40a00000) {
          fVar21 = __real_42700000;
        }
        if (4 < (byte)LogChunkDownloader._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
        }
        pTVar9 = TSharedFromThis<FChunkDownloader,1>::AsShared
                           ((TSharedFromThis<FChunkDownloader,1> *)this,&local_148);
        pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
        pFVar4 = pTVar9->Object;
        if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
          paVar17 = (atomic<int> *)&DAT_0000000c;
        }
        else {
          paVar17 = &pTVar3->WeakReferenceCount;
          LOCK();
          *paVar17 = (atomic<int>)((int)*paVar17 + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(local_148.SharedReferenceCount.ReferenceController._4_4_,
                            (int)local_148.SharedReferenceCount.ReferenceController));
        this_00 = FTSTicker::GetCoreTicker();
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar17 = (atomic<int>)((int)*paVar17 + 1);
          UNLOCK();
        }
        local_138 = (undefined1  [8])0x0;
        local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_130.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
                   (FWriteAccessScope *)local_108);
        pFStack_f0 = &local_130;
        puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_130);
        pTVar18 = pTVar3;
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[2] = uVar11;
          pTVar18 = (TReferenceControllerBase<1> *)0x0;
          *puVar10 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FChunkDownloader::TryLoadBuildManifest'::`5'::<lambda_1>_>
                      ::_vftable_;
          puVar10[3] = pFVar4;
          puVar10[4] = pTVar3;
          *(int *)(puVar10 + 5) = param_1;
        }
        if (local_f8._0_1_ == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_108._8_8_,
                     (FDestructionSentinel *)local_108);
        }
        FTSTicker::AddTicker
                  (this_00,(TWeakPtr<FTSTicker::FElement,1> *)&local_148,
                   (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_138,fVar21);
        plVar15 = (longlong *)
                  CONCAT44(local_148.SharedReferenceCount.ReferenceController._4_4_,
                           (int)local_148.SharedReferenceCount.ReferenceController);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
                   (FWriteAccessScope *)local_108);
        if ((local_130.DelegateSize != 0) &&
           (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_130,0,0,0x10);
          local_130.DelegateSize = 0;
        }
        if (local_f8._0_1_ == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_108._8_8_,
                     (FDestructionSentinel *)local_108);
        }
        if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_130.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_138);
        if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar17 = &pTVar18->WeakReferenceCount;
          aVar2 = *paVar17;
          *paVar17 = (atomic<int>)((int)*paVar17 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar18->_padding_ + 8))(pTVar18,1);
          }
        }
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar17 = &pTVar3->WeakReferenceCount;
          aVar2 = *paVar17;
          *paVar17 = (atomic<int>)((int)*paVar17 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          }
        }
      }
      goto LAB_14f02d5f7;
    }
    if (1 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_148,L"ChunkDownloader",L"UnableToDownloadManifest",
                        L"Unable to download build manifest. (NoCDN)");
    FText::operator=(&(this->LoadingModeStats).LastError,pFVar8);
    if (local_148.Object != (FChunkDownloader *)0x0) {
      (**(code **)((((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(local_148.Object)->_padding_)
                   ->AllocatorInstance).Data + 0x10))();
    }
    local_108._0_8_ = *(undefined8 *)&this->UpdateBuildCallback;
    local_e0 = *(longlong **)&(this->UpdateBuildCallback).field_0x28;
    *(undefined8 *)&(this->UpdateBuildCallback).field_0x28 = 0;
    local_e8 = *(undefined8 *)&(this->UpdateBuildCallback).field_0x20;
    local_f8 = *(longlong *)&(this->UpdateBuildCallback).field_0x10;
    pFStack_f0 = *(FDelegateAllocation **)&(this->UpdateBuildCallback).field_0x18;
    if (local_108._0_8_ != 0) {
      *(undefined8 *)&this->UpdateBuildCallback = 0;
    }
    ExecuteNextTick(this,(TFunction<void___cdecl(bool)> *)local_108,false);
    if (local_108._0_8_ == 0) goto LAB_14f02d5f7;
    plVar15 = &local_f8;
    plVar12 = local_e0;
  }
  if (plVar12 != (longlong *)0x0) {
    plVar15 = plVar12;
  }
  (**(code **)(*plVar15 + 0x10))();
LAB_14f02d5f7:
  DestructItems<FPakFileEntry,int>
            ((FPakFileEntry *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
  if ((FPakFileEntry *)local_118.AllocatorInstance.Data != (FPakFileEntry *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  local_d8.HashSize = 0;
  if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8.Elements);
  return;
}

// UnmountPakFile @ 14f02e020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChunkDownloader::UnmountPakFile
          (FChunkDownloader *this,TSharedRef<FChunkDownloader::FPakFile,1> *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  FString local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if (param_1->Object->bIsMounted != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnUnmountPak,&local_38);
    if (((FCoreDelegates::OnUnmountPak._16_4_ == 0) || (FCoreDelegates::OnUnmountPak._8_8_ == 0)) ||
       (cVar2 = (**(code **)(*(longlong *)FCoreDelegates::OnUnmountPak._8_8_ + 0x38))(),
       cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<639807134757815005>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                         ,0x2dd,"FCoreDelegates::OnUnmountPak.IsBound()");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (1 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      lVar5 = 0x100;
      if (param_1->Object->bIsEmbedded == false) {
        lVar5 = 0xf0;
      }
      ::operator/(&local_48,(FString *)((longlong)&this->_padding_ + lVar5),
                  (FString *)param_1->Object);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreDelegates::OnUnmountPak,&local_20);
      plVar4 = (longlong *)0x0;
      if (FCoreDelegates::OnUnmountPak._16_4_ != 0) {
        plVar4 = (longlong *)FCoreDelegates::OnUnmountPak._8_8_;
      }
      cVar2 = (**(code **)(*plVar4 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      if (cVar2 == '\0') {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<639807134757815008>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                           ,0x2e0,"FCoreDelegates::OnUnmountPak.Execute(FullPathOnDisk)");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (1 < (byte)LogChunkDownloader._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
        }
      }
      else {
        param_1->Object->bIsMounted = false;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// UpdateBuild @ 14f02e1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChunkDownloader::UpdateBuild
          (FChunkDownloader *this,FString *param_1,FString *param_2,
          TFunction<void___cdecl(bool)> *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((param_2->Data).ArrayNum < 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!ContentBuildIdIn.IsEmpty()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                        ,0x22d,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar12 = (param_2->Data).ArrayNum;
  iVar1 = (this->ContentBuildId).Data.ArrayNum;
  if (iVar12 == iVar1) {
    if (1 < iVar12) {
      iVar12 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                          (wchar_t *)(this->ContentBuildId).Data.AllocatorInstance.Data);
      bVar11 = iVar12 == 0;
      goto LAB_14f02e25c;
    }
LAB_14f02e263:
    iVar12 = (this->LastDeploymentName).Data.ArrayNum;
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar12 == iVar1) {
      if (1 < iVar12) {
        iVar12 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(this->LastDeploymentName).Data.AllocatorInstance.Data,
                            (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar11 = iVar12 == 0;
        goto LAB_14f02e292;
      }
    }
    else {
      bVar11 = iVar12 + iVar1 == 1;
LAB_14f02e292:
      if (!bVar11) goto LAB_14f02e29d;
    }
    ExecuteNextTick(this,param_3,true);
  }
  else {
    bVar11 = iVar12 + iVar1 == 1;
LAB_14f02e25c:
    if (bVar11) goto LAB_14f02e263;
LAB_14f02e29d:
    SetContentBuildId(this,param_1,param_2);
    if (*(longlong *)&this->UpdateBuildCallback != 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!UpdateBuildCallback",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                          ,0x238,L"");
      if (bVar11) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(longlong *)param_3 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Callback",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                          ,0x239,L"");
      if (bVar11) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_68 = *(longlong *)param_3;
    uStack_40 = (longlong *)0x0;
    if (local_68 != 0) {
      puVar13 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar13 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar13)();
    }
    lVar9 = *(longlong *)&this->UpdateBuildCallback;
    uVar10 = *(undefined8 *)&(this->UpdateBuildCallback).field_0x8;
    uVar3 = *(undefined4 *)&(this->UpdateBuildCallback).field_0x10;
    uVar4 = *(undefined4 *)&(this->UpdateBuildCallback).field_0x14;
    uVar5 = *(undefined4 *)&(this->UpdateBuildCallback).field_0x18;
    uVar6 = *(undefined4 *)&(this->UpdateBuildCallback).field_0x1c;
    uVar7 = *(undefined8 *)&(this->UpdateBuildCallback).field_0x20;
    plVar8 = *(longlong **)&(this->UpdateBuildCallback).field_0x28;
    *(longlong *)&this->UpdateBuildCallback = local_68;
    *(undefined8 *)&(this->UpdateBuildCallback).field_0x8 = uStack_60;
    *(undefined4 *)&(this->UpdateBuildCallback).field_0x10 = local_58;
    *(undefined4 *)&(this->UpdateBuildCallback).field_0x14 = uStack_54;
    *(undefined4 *)&(this->UpdateBuildCallback).field_0x18 = uStack_50;
    *(undefined4 *)&(this->UpdateBuildCallback).field_0x1c = uStack_4c;
    *(undefined4 *)&(this->UpdateBuildCallback).field_0x20 = (undefined4)local_48;
    *(undefined4 *)&(this->UpdateBuildCallback).field_0x24 = local_48._4_4_;
    *(undefined4 *)&(this->UpdateBuildCallback).field_0x28 = (undefined4)uStack_40;
    *(undefined4 *)&(this->UpdateBuildCallback).field_0x2c = uStack_40._4_4_;
    local_58 = uVar3;
    uStack_54 = uVar4;
    uStack_50 = uVar5;
    uStack_4c = uVar6;
    local_48 = uVar7;
    uStack_40 = plVar8;
    local_68 = lVar9;
    uStack_60 = uVar10;
    if (lVar9 != 0) {
      plVar14 = (longlong *)&local_58;
      if (plVar8 != (longlong *)0x0) {
        plVar14 = plVar8;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    TryLoadBuildManifest(this,0);
  }
  return;
}

// UpdateLoadingMode @ 14f02e430

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FChunkDownloader::UpdateLoadingMode(FChunkDownloader *this)

{
  int *piVar1;
  TArray<TFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TFunction<void___cdecl(bool)> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TFunction<void___cdecl(bool)> *pTVar8;
  undefined1 local_res8 [8];
  
  ComputeLoadingStats(this);
  if (((this->LoadingModeStats).FilesDownloaded < (this->LoadingModeStats).TotalFilesToDownload) ||
     ((this->LoadingModeStats).ChunksMounted < (this->LoadingModeStats).TotalChunksToMount)) {
    this->LoadingCompleteLatch = 0;
  }
  else {
    this->LoadingCompleteLatch = this->LoadingCompleteLatch + 1;
    if (4 < this->LoadingCompleteLatch) {
      if (4 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
      pTVar2 = &this->PostLoadCallbacks;
      pTVar4 = (TFunction<void___cdecl(bool)> *)(pTVar2->AllocatorInstance).Data;
      piVar1 = &(this->PostLoadCallbacks).ArrayMax;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar3 = (this->PostLoadCallbacks).ArrayNum;
      (this->PostLoadCallbacks).ArrayNum = 0;
      *piVar1 = 0;
      if (0 < iVar3) {
        DestructItems<TFunction<void___cdecl(bool)>,int>
                  ((TFunction<void___cdecl(bool)> *)(pTVar2->AllocatorInstance).Data,0);
        (this->PostLoadCallbacks).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
        for (pTVar8 = pTVar4; pTVar8 != pTVar4 + iVar3; pTVar8 = pTVar8 + 1) {
          local_res8[0] = FText::IsEmpty(&(this->LoadingModeStats).LastError);
          UE::Core::Private::Function::CheckCallable(*(void **)pTVar8);
          pcVar5 = *(code **)pTVar8;
          plVar7 = (longlong *)&pTVar8->field_0x10;
          if (*(longlong **)&pTVar8->field_0x28 != (longlong *)0x0) {
            plVar7 = *(longlong **)&pTVar8->field_0x28;
          }
          uVar6 = (**(code **)(*plVar7 + 8))();
          (*pcVar5)(uVar6,local_res8);
        }
      }
      DestructItems<TFunction<void___cdecl(bool)>,int>(pTVar4,iVar3);
      if (pTVar4 != (TFunction<void___cdecl(bool)> *)0x0) {
        FMemory::Free(pTVar4);
      }
      return false;
    }
  }
  return true;
}

// UpdateMountTasks @ 14f02e5a0

bool __thiscall FChunkDownloader::UpdateMountTasks(FChunkDownloader *this,float param_1)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  atomic<int> aVar4;
  int iVar5;
  uint uVar6;
  FAsyncTaskBase *this_00;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined8 local_a8 [2];
  TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar2 = &(this->Chunks).field_0x10;
  bVar15 = false;
  iVar5 = *(int *)&(this->Chunks).field_0x28;
  local_98 = &this->Chunks;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar5 != 0) {
    puVar17 = *(uint **)&(this->Chunks).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar16 = *puVar17;
    while (uVar16 == 0) {
      lVar12 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar5;
      if ((int)((iVar5 + -1 >> 0x1f & 0x1fU) + iVar5 + -1) >> 5 < iStack_90) goto LAB_14f02e64e;
      uVar16 = puVar17[lVar12 + 1];
    }
    uStack_8c = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_7c = (int)lVar12 + -1 + local_78;
    if (iVar5 < iStack_7c) {
      iStack_7c = iVar5;
    }
  }
LAB_14f02e64e:
  uVar16 = *(uint *)&(this->Chunks).field_0x28;
  iStack_70 = *(int *)&(this->Chunks).field_0x8 - *(int *)&(this->Chunks).field_0x34;
  uStack_80 = 0xffffffff;
  uVar18 = uVar16 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = local_98;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar16 < 0) || (iVar5 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  uVar6 = *(uint *)&(this->Chunks).field_0x28;
  if (uVar16 != uVar6) {
    puVar13 = *(undefined1 **)&(this->Chunks).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar14) goto LAB_14f02e75a;
      uVar16 = *(uint *)(puVar13 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar18;
    if ((int)uVar6 < (int)uVar16) {
      uVar16 = uVar6;
    }
  }
LAB_14f02e75a:
  while( true ) {
    pTVar9 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar16) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar9 == &this->Chunks)) break;
    lVar12 = *(longlong *)pTVar9 + (longlong)TStack_60.CurrentBitIndex * 0x20;
    this_00 = *(FAsyncTaskBase **)(*(longlong *)(lVar12 + 8) + 0x18);
    if (this_00 != (FAsyncTaskBase *)0x0) {
      if ((this_00->WorkNotFinishedCounter).Counter == 0) {
        FAsyncTaskBase::SyncCompletion(this_00,false);
        CompleteMountTask(this,*(FChunk **)(lVar12 + 8));
      }
      else {
        bVar15 = true;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if ((bVar15 == false) && (&this->MountTicker != (TWeakPtr<FTSTicker::FElement,1> *)local_a8)) {
    pTVar7 = (this->MountTicker).WeakReferenceCount.ReferenceController;
    (this->MountTicker).Object = (FElement *)0x0;
    (this->MountTicker).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
  }
  return bVar15;
}

// ValidateCache @ 14f02e860

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FChunkDownloader::ValidateCache(FChunkDownloader *this)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  FString *pFVar4;
  code *pcVar5;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *pTVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  FString *pFVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  int local_res20;
  char *in_stack_ffffffffffffff18;
  FString local_d8;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  IFileManager *local_98;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FString local_60 [2];
  
  local_98 = IFileManager::Get();
  WaitForMounts(this);
  if (3 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
  iVar9 = *(int *)&(this->PakFiles).field_0x28;
  local_c8 = &this->PakFiles;
  local_res10 = 0;
  iStack_c0 = 0;
  local_a8 = 0;
  uStack_bc = 1;
  iStack_ac = 0;
  if (iVar9 != 0) {
    puVar17 = *(uint **)&(this->PakFiles).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)&(this->PakFiles).field_0x10;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14f02e944;
      uVar15 = puVar17[lVar11 + 1];
    }
    uStack_bc = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_bc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_ac = local_a8 + -1 + local_res18;
    if (iVar9 < iStack_ac) {
      iStack_ac = iVar9;
    }
  }
LAB_14f02e944:
  local_b8 = &(this->PakFiles).field_0x10;
  uVar15 = *(uint *)&(this->PakFiles).field_0x28;
  iStack_a0 = *(int *)&(this->PakFiles).field_0x8 - *(int *)&(this->PakFiles).field_0x34;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uStack_bc,iStack_c0);
  uStack_b0 = 0xffffffff;
  TStack_88.CurrentBitIndex = iStack_ac;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_88._28_4_ = iStack_ac;
  TStack_88.BaseBitIndex = local_a8;
  uStack_68 = CONCAT44(uStack_9c,iStack_a0);
  iStack_a4 = iStack_ac;
  local_90 = local_c8;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
  if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    iVar9 = (*pcVar5)();
    return iVar9;
  }
  uVar2 = *(uint *)&(this->PakFiles).field_0x28;
  if (uVar15 != uVar2) {
    puVar16 = *(undefined1 **)&(this->PakFiles).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->PakFiles).field_0x10;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14f02ea50;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar15 = local_res20 + -1 + uVar14;
    if ((int)uVar2 < (int)uVar15) {
      uVar15 = uVar2;
    }
  }
LAB_14f02ea50:
  while( true ) {
    pTVar6 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar15) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->PakFiles).field_0x10))
       && (pTVar6 == &this->PakFiles)) break;
    lVar3 = *(longlong *)pTVar6;
    lVar11 = lVar3 + (longlong)TStack_88.CurrentBitIndex * 0x28;
    lVar3 = *(longlong *)(lVar3 + 0x10 + (longlong)TStack_88.CurrentBitIndex * 0x28);
    if ((*(char *)(lVar3 + 0x40) != '\0') && (*(char *)(lVar3 + 0x42) == '\0')) {
      bVar7 = ::FString::StartsWith((FString *)(lVar3 + 0x18),L"SHA1:",5,IgnoreCase);
      if (bVar7) {
        pFVar4 = *(FString **)(lVar11 + 0x10);
        pFVar10 = ::operator/(local_60,&this->CacheFolder,pFVar4);
        bVar7 = CheckFileSha1Hash(pFVar10,(FString *)&pFVar4[1].Data.ArrayNum);
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          if (4 < (byte)LogChunkDownloader._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader)
            ;
          }
        }
        else {
          if (2 < (byte)LogChunkDownloader._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader)
            ;
          }
          local_res10 = local_res10 + 1;
          ::operator/(&local_d8,&this->CacheFolder,*(FString **)(lVar11 + 0x10));
          in_stack_ffffffffffffff18 =
               (char *)((ulonglong)in_stack_ffffffffffffff18 & 0xffffffffffffff00);
          FVar12.Data = (FScriptContainerElement *)L"";
          if (local_d8.Data.ArrayNum != 0) {
            FVar12.Data = local_d8.Data.AllocatorInstance.Data;
          }
          cVar8 = (**(code **)((longlong)*local_98 + 0x38))
                            (local_98,FVar12.Data,0,0,in_stack_ffffffffffffff18);
          if (cVar8 == '\0') {
            in_stack_ffffffffffffff18 = "FileManager.Delete(*FullPathOnDisk)";
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<639807134757815239>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                               ,0x3c7,"FileManager.Delete(*FullPathOnDisk)");
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              iVar9 = (*pcVar5)();
              return iVar9;
            }
          }
          else {
            if (4 < (byte)LogChunkDownloader._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
            }
            *(undefined1 *)(*(longlong *)(lVar11 + 0x10) + 0x40) = 0;
            *(undefined8 *)(*(longlong *)(lVar11 + 0x10) + 0x48) = 0;
            this->bNeedsManifestSave = true;
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (2 < (byte)LogChunkDownloader._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  SaveLocalManifest(this,false);
  if (3 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
  return local_res10;
}

// WaitForMounts @ 14f02ee00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChunkDownloader::WaitForMounts(FChunkDownloader *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar13 = 0;
  puVar1 = &(this->Chunks).field_0x10;
  iVar3 = *(int *)&(this->Chunks).field_0x28;
  bVar5 = false;
  uVar7 = 1;
  iVar15 = 0;
  iVar8 = iVar15;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->Chunks).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    iVar15 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14f02eead;
      uVar12 = puVar16[lVar9 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = iVar15 + -1 + local_res10;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14f02eead:
  uVar12 = *(uint *)&(this->Chunks).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar13);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Chunks).field_0x8 - *(int *)&(this->Chunks).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(this->Chunks).field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&(this->Chunks).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14f02efc0;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    uVar12 = local_res18 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_14f02efc0:
  do {
    if (*(int *)&(this->Chunks).field_0x8 - *(int *)&(this->Chunks).field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      if ((bVar5) && (3 < (byte)LogChunkDownloader._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      }
      return;
    }
    lVar10 = *(longlong *)&this->Chunks + (longlong)TStack_60.CurrentBitIndex * 0x20;
    lVar9 = *(longlong *)(lVar10 + 8);
    if (*(longlong *)(lVar9 + 0x18) != 0) {
      if (!bVar5) {
        if (3 < (byte)LogChunkDownloader._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
          lVar9 = *(longlong *)(lVar10 + 8);
        }
        bVar5 = true;
      }
      FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)(lVar9 + 0x18),true,false);
      CompleteMountTask(this,*(FChunk **)(lVar10 + 8));
      if ((*(longlong *)(*(longlong *)(lVar10 + 8) + 0x18) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chunk->MountTask == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                             ,0x2c3,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

