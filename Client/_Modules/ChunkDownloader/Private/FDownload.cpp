// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 12

// FDownload @ 14f01eb00

FDownload * __thiscall
FDownload::FDownload
          (FDownload *this,TSharedRef<FChunkDownloader,1> *param_1,
          TSharedRef<FChunkDownloader::FPakFile,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FPakFile *pFVar2;
  code *pcVar3;
  bool bVar4;
  FDownload *pFVar5;
  
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined ***)this = &___7FDownload__6B_;
  (this->Downloader).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Downloader).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->PakFile).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->PakFile).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::operator/(&this->TargetFile,&((this->Downloader).Object)->CacheFolder,(FString *)param_2->Object
             );
  *(undefined8 *)&this->CancelCallback = 0;
  *(undefined8 *)&(this->CancelCallback).field_0x28 = 0;
  (this->BeginTime).Ticks = 0;
  pFVar2 = (this->PakFile).Object;
  this->bIsCancelled = false;
  this->bHasCompleted = false;
  this->LastBytesReceived = 0;
  if (pFVar2->bIsCached != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PakFile->bIsCached",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\Download.cpp"
                       ,0x12,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDownload *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (((this->PakFile).Object)->bIsEmbedded != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PakFile->bIsEmbedded",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\Download.cpp"
                       ,0x13,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDownload *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (((this->PakFile).Object)->bIsMounted != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PakFile->bIsMounted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\Download.cpp"
                       ,0x14,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDownload *)(*pcVar3)();
      return pFVar5;
    }
  }
  return this;
}

// ~FDownload @ 14f01f3e0

void __thiscall FDownload::~FDownload(FDownload *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  *(undefined ***)this = &___7FDownload__6B_;
  if (*(longlong *)&this->CancelCallback != 0) {
    plVar3 = *(longlong **)&(this->CancelCallback).field_0x28;
    plVar5 = (longlong *)&(this->CancelCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  pFVar4 = (this->TargetFile).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PakFile).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Downloader).SharedReferenceCount.ReferenceController);
  plVar3 = *(longlong **)&this->field_0x18;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014f01f454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 14f01ff00

bool __thiscall `FDownload::Start'::__l12::<lambda_1>::operator()(void *this,float param_1)

{
  FDownload *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  FText *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FText local_18;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f01ff30;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    this_00 = *(FDownload **)this;
    if (this_00 != (FDownload *)0x0) {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"ChunkDownloader",L"NotEnoughSpace",
                          L"Not enough space on device.");
      FDownload::OnCompleted(this_00,false,pFVar3);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
  }
LAB_14f01ff30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// Cancel @ 14f021410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FDownload::Cancel(FDownload *this,bool param_1)

{
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
  
  if ((this->bHasCompleted != false) &&
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
  if (this->bIsCancelled == false) {
    this->bIsCancelled = true;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->CancelCallback);
    pcVar2 = *(code **)&this->CancelCallback;
    plVar1 = *(longlong **)&(this->CancelCallback).field_0x28;
    plVar8 = (longlong *)&(this->CancelCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar8 = plVar1;
    }
    uVar4 = (**(code **)(*plVar8 + 8))();
    (*pcVar2)(uVar4);
  }
  pFVar5 = FText::FromString(&local_28,(FString *)(this->PakFile).Object);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"ChunkDownloader",L"DownloadCanceled",
                      L"Download of \'%s\' was canceled.");
  pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar6,Default);
  pFVar5 = FText::Format<FText>(&local_48,pFVar7,pFVar5);
  OnCompleted(this,param_1,pFVar5);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// HasDeviceSpaceRequired @ 14f025f40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDownload::HasDeviceSpaceRequired(FDownload *this)

{
  FPakFile *pFVar1;
  bool bVar2;
  ulong64 local_res8 [4];
  
  local_res8[1] = 0;
  local_res8[0] = 0;
  bVar2 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace
                    (&((this->Downloader).Object)->CacheFolder,local_res8 + 1,local_res8);
  if ((bVar2) &&
     (pFVar1 = (this->PakFile).Object, local_res8[0] < (pFVar1->Entry).FileSize - pFVar1->SizeOnDisk
     )) {
    if (2 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
    return false;
  }
  return true;
}

// OnCompleted @ 14f029b50

void __thiscall FDownload::OnCompleted(FDownload *this,bool param_1,FText *param_2)

{
  ulong64 *puVar1;
  FStats *pFVar2;
  int *piVar3;
  FChunkDownloader *pFVar4;
  FPakFile *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  TSharedPtr<FDownload,1> *pTVar9;
  TFunction<void___cdecl(bool)> *pTVar10;
  TSharedRef<FChunkDownloader::FPakFile,1> *_Dst;
  int iVar11;
  TFunction<void___cdecl(bool)> *pTVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  
  if (this->bHasCompleted != false) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasCompleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\Download.cpp"
                       ,0xce,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  this->bHasCompleted = true;
  if (param_1) {
    iVar11 = (int)((this->PakFile).Object)->SizeOnDisk;
  }
  else {
    iVar11 = 0;
  }
  puVar1 = &(((this->Downloader).Object)->LoadingModeStats).BytesDownloaded;
  *puVar1 = *puVar1 - (longlong)this->LastBytesReceived;
  pFVar4 = (this->Downloader).Object;
  this->LastBytesReceived = iVar11;
  puVar1 = &(pFVar4->LoadingModeStats).BytesDownloaded;
  *puVar1 = *puVar1 + (longlong)iVar11;
  pFVar2 = &((this->Downloader).Object)->LoadingModeStats;
  pFVar2->FilesDownloaded = pFVar2->FilesDownloaded + 1;
  if (!param_1) {
    bVar8 = FText::IsEmpty(param_2);
    if (!bVar8) {
      FText::operator=(&(((this->Downloader).Object)->LoadingModeStats).LastError,param_2);
    }
  }
  pFVar5 = (this->PakFile).Object;
  iVar11 = (pFVar5->PostDownloadCallbacks).ArrayNum;
  pTVar10 = (TFunction<void___cdecl(bool)> *)(pFVar5->PostDownloadCallbacks).AllocatorInstance.Data;
  pTVar12 = pTVar10 + iVar11;
  while( true ) {
    if ((pFVar5->PostDownloadCallbacks).ArrayNum != iVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TFunction<void___cdecl(bool)>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pTVar10 == pTVar12) break;
    FChunkDownloader::ExecuteNextTick((this->Downloader).Object,pTVar10,param_1);
    pTVar10 = pTVar10 + 1;
  }
  pFVar5 = (this->PakFile).Object;
  DestructItems<TFunction<void___cdecl(bool)>,int>
            ((TFunction<void___cdecl(bool)> *)(pFVar5->PostDownloadCallbacks).AllocatorInstance.Data
             ,(pFVar5->PostDownloadCallbacks).ArrayNum);
  (pFVar5->PostDownloadCallbacks).ArrayNum = 0;
  if ((pFVar5->PostDownloadCallbacks).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,&(pFVar5->PostDownloadCallbacks).AllocatorInstance,0,
               &(pFVar5->PostDownloadCallbacks).ArrayMax);
  }
  pFVar4 = (this->Downloader).Object;
  pFVar6 = (pFVar4->DownloadRequests).AllocatorInstance.Data;
  if (pFVar6 != pFVar6 + (longlong)(pFVar4->DownloadRequests).ArrayNum * 0x10) {
    pFVar13 = pFVar6;
    do {
      if (*(FPakFile **)pFVar13 == (this->PakFile).Object) {
        iVar11 = (int)((longlong)pFVar13 - (longlong)pFVar6 >> 4);
        if (iVar11 != -1) {
          _Dst = (TSharedRef<FChunkDownloader::FPakFile,1> *)(pFVar6 + (longlong)iVar11 * 0x10);
          DestructItems<TSharedRef<FChunkDownloader::FPakFile,1>,int>(_Dst,1);
          memmove(_Dst,_Dst + 1,(longlong)(((pFVar4->DownloadRequests).ArrayNum - iVar11) + -1) << 4
                 );
          piVar3 = &(pFVar4->DownloadRequests).ArrayNum;
          *piVar3 = *piVar3 + -1;
          FChunkDownloader::IssueDownloads((this->Downloader).Object);
          goto LAB_14f029cff;
        }
        break;
      }
      pFVar13 = pFVar13 + 0x10;
    } while (pFVar13 != pFVar6 + (longlong)(pFVar4->DownloadRequests).ArrayNum * 0x10);
  }
  bVar8 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1231525303113744159>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\Download.cpp"
                     ,0xe1,"Downloader->DownloadRequests.RemoveSingle(PakFile) > 0");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14f029cff:
  pFVar5 = (this->PakFile).Object;
  pTVar9 = &pFVar5->Download;
  if (pTVar9->Object == this) {
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar9 != (TSharedPtr<FDownload,1> *)&local_28) {
      pTVar9->Object = (FDownload *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar5->Download).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
  return;
}

// OnDownloadComplete @ 14f029dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDownload::OnDownloadComplete(FDownload *this,FString *param_1,int param_2,int param_3)

{
  atomic<int> aVar1;
  FChunkDownloader *pFVar2;
  FPakFile *pFVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  FDownload *pFVar6;
  code *pcVar7;
  bool bVar8;
  IFileManager *pIVar9;
  ulong64 uVar10;
  FDateTime FVar11;
  undefined8 uVar12;
  IPlatformFile *pIVar13;
  FText *pFVar14;
  TSharedRef<FDownload,1> *pTVar15;
  FTSTicker *this_00;
  undefined8 *puVar16;
  ulong64 uVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  atomic<int> *paVar20;
  TReferenceControllerBase<1> *pTVar21;
  float fVar22;
  int local_res20 [2];
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  longlong local_e0;
  ulong64 local_d8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  FText local_90;
  FText local_80;
  TSharedRef<FDownload,1> local_70;
  TWeakPtr<FTSTicker::FElement,1> local_60 [2];
  
  if ((this->bHasCompleted != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasCompleted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\Download.cpp"
                         ,0x95,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pIVar9 = IFileManager::Get();
  if ((this->TargetFile).Data.ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(this->TargetFile).Data.AllocatorInstance.Data;
  }
  uVar10 = (**(code **)((longlong)*pIVar9 + 0x110))(pIVar9,pwVar19);
  uVar17 = 0;
  if (0 < (longlong)uVar10) {
    uVar17 = uVar10;
  }
  ((this->PakFile).Object)->SizeOnDisk = uVar17;
  pFVar2 = (this->Downloader).Object;
  if (*(longlong *)&pFVar2->OnDownloadAnalytics != 0) {
    FVar11 = FDateTime::UtcNow();
    pFVar3 = (this->PakFile).Object;
    local_e0 = *(longlong *)FVar11.Ticks - (this->BeginTime).Ticks;
    local_d8 = pFVar3->SizeOnDisk;
    local_res20[0] = param_3;
    UE::Core::Private::Function::CheckCallable(*(void **)&pFVar2->OnDownloadAnalytics);
    pcVar7 = *(code **)&pFVar2->OnDownloadAnalytics;
    plVar4 = *(longlong **)&(pFVar2->OnDownloadAnalytics).field_0x28;
    plVar18 = (longlong *)&(pFVar2->OnDownloadAnalytics).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar18 = plVar4;
    }
    uVar12 = (**(code **)(*plVar18 + 8))();
    (*pcVar7)(uVar12,pFVar3,param_1,&local_d8,&local_e0,local_res20);
  }
  if (6 < param_3 - 200U) goto LAB_14f029ff0;
  pFVar3 = (this->PakFile).Object;
  if (pFVar3->SizeOnDisk == (pFVar3->Entry).FileSize) {
    bVar8 = ::FString::StartsWith(&(pFVar3->Entry).FileVersion,L"SHA1:",5,IgnoreCase);
    if ((!bVar8) ||
       (bVar8 = FChunkDownloader::CheckFileSha1Hash
                          (&this->TargetFile,&(((this->PakFile).Object)->Entry).FileVersion), bVar8)
       ) {
      ((this->PakFile).Object)->bIsCached = true;
      pFVar14 = FText::FText(&local_90);
      OnCompleted(this,true,pFVar14);
      if (local_90.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      return;
    }
    if (1 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      goto LAB_14f029f90;
    }
  }
  else if (1 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
LAB_14f029f90:
    if (1 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
  }
  pIVar13 = IPlatformFile::GetPlatformPhysical();
  if ((this->TargetFile).Data.ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(this->TargetFile).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar13 + 0x88))(pIVar13,pwVar19);
LAB_14f029ff0:
  bVar8 = HasDeviceSpaceRequired(this);
  if (bVar8) {
    fVar22 = (float)(param_2 + 1) * __real_40a00000;
    if (__real_42700000 <= fVar22) {
      fVar22 = __real_42700000;
    }
    if (4 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
    pTVar15 = TSharedFromThis<FDownload,1>::AsShared
                        ((TSharedFromThis<FDownload,1> *)&this->field_0x10,&local_70);
    pTVar5 = (pTVar15->SharedReferenceCount).ReferenceController;
    pFVar6 = pTVar15->Object;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      paVar20 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      paVar20 = &pTVar5->WeakReferenceCount;
      LOCK();
      *paVar20 = (atomic<int>)((int)*paVar20 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
    this_00 = FTSTicker::GetCoreTicker();
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar20 = (atomic<int>)((int)*paVar20 + 1);
      UNLOCK();
    }
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b8);
    local_a0 = &local_f0;
    puVar16 = UE::Core::Private::DelegateAllocate(0x30,&local_f0);
    pTVar21 = pTVar5;
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar17 = FDelegateHandle::GenerateNewID();
      puVar16[2] = uVar17;
      *puVar16 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FDownload::OnDownloadComplete'::`2'::<lambda_1>_>
                  ::_vftable_;
      *(int *)(puVar16 + 5) = param_2;
      puVar16[3] = pFVar6;
      puVar16[4] = pTVar5;
      pTVar21 = (TReferenceControllerBase<1> *)0x0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    FTSTicker::AddTicker
              (this_00,local_60,
               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_f8,fVar22);
    if (local_60[0].WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar20 = &(local_60[0].WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar1 = *paVar20;
      *paVar20 = (atomic<int>)((int)*paVar20 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)((local_60[0].WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_60[0].WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_d0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_f8);
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar20 = &pTVar21->WeakReferenceCount;
      aVar1 = *paVar20;
      *paVar20 = (atomic<int>)((int)*paVar20 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar21->_padding_ + 8))(pTVar21,1);
      }
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar20 = &pTVar5->WeakReferenceCount;
      aVar1 = *paVar20;
      *paVar20 = (atomic<int>)((int)*paVar20 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  else {
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_80,L"ChunkDownloader",L"NotEnoughSpace",
                         L"Not enough space on device.");
    OnCompleted(this,false,pFVar14);
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
  }
  return;
}

// OnDownloadProgress @ 14f02a2a0

void __thiscall FDownload::OnDownloadProgress(FDownload *this,int param_1)

{
  ulong64 *puVar1;
  
  puVar1 = &(((this->Downloader).Object)->LoadingModeStats).BytesDownloaded;
  *puVar1 = *puVar1 - (longlong)this->LastBytesReceived;
  this->LastBytesReceived = param_1;
  puVar1 = &(((this->Downloader).Object)->LoadingModeStats).BytesDownloaded;
  *puVar1 = *puVar1 + (longlong)param_1;
  return;
}

// Start @ 14f02c2f0

void __thiscall FDownload::Start(FDownload *this)

{
  atomic<int> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDownload *pFVar3;
  code *pcVar4;
  bool bVar5;
  TSharedRef<FDownload,1> *pTVar6;
  FTSTicker *this_00;
  undefined8 *puVar7;
  ulong64 uVar8;
  TReferenceControllerBase<1> *pTVar9;
  atomic<int> *paVar10;
  TSharedRef<FDownload,1> local_88;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if (this->bHasCompleted != false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasCompleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\Download.cpp"
                       ,0x1d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = HasDeviceSpaceRequired(this);
  if (!bVar5) {
    pTVar6 = TSharedFromThis<FDownload,1>::AsShared
                       ((TSharedFromThis<FDownload,1> *)&this->field_0x10,&local_88);
    pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar6->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      paVar10 = &pTVar2->WeakReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    this_00 = FTSTicker::GetCoreTicker();
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_38);
    local_20 = &local_60;
    puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    pTVar9 = pTVar2;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FDownload::Start'::`12'::<lambda_1>_>
                 ::_vftable_;
      puVar7[3] = pFVar3;
      puVar7[4] = pTVar2;
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    FTSTicker::AddTicker
              (this_00,&local_78,
               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,__real_3f800000
              );
    if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar10 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar1 = *paVar10;
      *paVar10 = (atomic<int>)((int)*paVar10 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_78.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar10 = &pTVar9->WeakReferenceCount;
      aVar1 = *paVar10;
      *paVar10 = (atomic<int>)((int)*paVar10 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
      }
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar10 = &pTVar2->WeakReferenceCount;
      aVar1 = *paVar10;
      *paVar10 = (atomic<int>)((int)*paVar10 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar2->_padding_ + 8))(pTVar2,1);
      }
    }
    return;
  }
  StartDownload(this,0);
  return;
}

// StartDownload @ 14f02c550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f02c8d2) */
/* WARNING: Removing unreachable block (ram,0x00014f02c8de) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDownload::StartDownload(FDownload *this,int param_1)

{
  ulong64 *puVar1;
  atomic<int> aVar2;
  int iVar3;
  FChunkDownloader *pFVar4;
  FPakFile *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FDownload *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ForAnyElementType _Src;
  bool bVar23;
  uint uVar24;
  FDateTime FVar25;
  TSharedRef<FDownload,1> *pTVar26;
  TFunction<void___cdecl(void)> *pTVar27;
  longlong *plVar28;
  undefined ***pppuVar29;
  code **ppcVar30;
  uint uVar31;
  atomic<int> *paVar32;
  undefined1 auStackY_168 [32];
  ForAnyElementType local_110;
  undefined8 local_108;
  FString local_100;
  TSharedRef<FDownload,1> local_e8;
  code *local_d8 [2];
  undefined **local_c8;
  FDownload *local_c0;
  TReferenceControllerBase<1> *local_b8;
  undefined ***local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((this->bHasCompleted != false) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bHasCompleted",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\Download.cpp"
                          ,0x73,L""), bVar23)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar25 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
  iVar3 = this->LastBytesReceived;
  (this->BeginTime).Ticks = *FVar25.Ticks;
  puVar1 = &(((this->Downloader).Object)->LoadingModeStats).BytesDownloaded;
  *puVar1 = *puVar1 - (longlong)iVar3;
  pFVar4 = (this->Downloader).Object;
  this->LastBytesReceived = 0;
  if (((pFVar4->BuildBaseUrls).ArrayNum < 1) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Downloader->BuildBaseUrls.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\Download.cpp"
                          ,0x78,L""), bVar23)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar4 = (this->Downloader).Object;
  pFVar5 = (this->PakFile).Object;
  iVar3 = (pFVar4->BuildBaseUrls).ArrayNum;
  uVar31 = param_1 % iVar3;
  uVar24 = 0;
  if ((int)uVar31 < iVar3) {
    uVar24 = ~uVar31 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  ::operator/(&local_100,
              (FString *)
              ((pFVar4->BuildBaseUrls).AllocatorInstance.Data + (longlong)(int)uVar31 * 0x10),
              &(pFVar5->Entry).RelativeUrl);
  if (4 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
  pTVar26 = TSharedFromThis<FDownload,1>::AsShared
                      ((TSharedFromThis<FDownload,1> *)&this->field_0x10,&local_e8);
  pTVar6 = (pTVar26->SharedReferenceCount).ReferenceController;
  pFVar7 = pTVar26->Object;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    paVar32 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar32 = &pTVar6->WeakReferenceCount;
    LOCK();
    *paVar32 = (atomic<int>)((int)*paVar32 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  _Src.Data = local_100.Data.AllocatorInstance.Data;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar32 = (atomic<int>)((int)*paVar32 + 1);
    UNLOCK();
  }
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = CONCAT44(local_108._4_4_,local_100.Data.ArrayNum);
  if (local_100.Data.ArrayNum == 0) {
    local_108 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_100.Data.ArrayNum,0,&local_110,local_100.Data.ArrayNum,
               (int *)((longlong)&local_108 + 4));
    memcpy(local_110.Data,_Src.Data,(longlong)local_100.Data.ArrayNum * 2);
  }
  local_a8[0] = (code *)0x0;
  local_80 = FMemory::Malloc(0x30,8);
  *local_80 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FDownload::StartDownload'::`2'::<lambda_2>,0,1>::
                       _vftable_;
  local_80[1] = (code *)pFVar7;
  local_80[2] = (code *)pTVar6;
  *(int *)(local_80 + 3) = param_1;
  local_80[4] = (code *)0x0;
  local_80[4] = (code *)local_110.Data;
  local_110.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(local_80 + 5) = (undefined4)local_108;
  *(undefined4 *)((longlong)local_80 + 0x2c) = local_108._4_4_;
  if (local_80 + 1 != (code **)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDownload::StartDownload'::__l2::<lambda_2>,void,int>::Call;
  }
  local_108 = 0;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_b0 = (undefined ***)0x0;
  local_c8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FDownload::StartDownload'::`2'::<lambda_1>,0,0>::_vftable_;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDownload::StartDownload'::__l2::<lambda_1>,void,unsigned___int64>
                ::Call;
  local_c0 = pFVar7;
  local_b8 = pTVar6;
  pTVar27 = PlatformStreamDownload
                      ((TFunction<void___cdecl(void)> *)local_78,&local_100,&this->TargetFile,
                       (TFunction<void___cdecl(unsigned___int64)> *)local_d8,
                       (TFunction<void___cdecl(int)> *)local_a8);
  uVar9 = *(undefined4 *)&this->CancelCallback;
  uVar10 = *(undefined4 *)&(this->CancelCallback).field_0x4;
  uVar11 = *(undefined4 *)&(this->CancelCallback).field_0x8;
  uVar12 = *(undefined4 *)&(this->CancelCallback).field_0xc;
  uVar13 = *(undefined4 *)&(this->CancelCallback).field_0x10;
  uVar14 = *(undefined4 *)&(this->CancelCallback).field_0x14;
  uVar15 = *(undefined4 *)&(this->CancelCallback).field_0x18;
  uVar16 = *(undefined4 *)&(this->CancelCallback).field_0x1c;
  uVar20 = *(undefined8 *)&(this->CancelCallback).field_0x20;
  uVar21 = *(undefined8 *)&(this->CancelCallback).field_0x28;
  uVar22 = *(undefined8 *)&pTVar27->field_0x8;
  *(undefined8 *)&this->CancelCallback = *(undefined8 *)pTVar27;
  *(undefined8 *)&(this->CancelCallback).field_0x8 = uVar22;
  uVar17 = *(undefined4 *)&pTVar27->field_0x14;
  uVar18 = *(undefined4 *)&pTVar27->field_0x18;
  uVar19 = *(undefined4 *)&pTVar27->field_0x1c;
  *(undefined4 *)&(this->CancelCallback).field_0x10 = *(undefined4 *)&pTVar27->field_0x10;
  *(undefined4 *)&(this->CancelCallback).field_0x14 = uVar17;
  *(undefined4 *)&(this->CancelCallback).field_0x18 = uVar18;
  *(undefined4 *)&(this->CancelCallback).field_0x1c = uVar19;
  uVar17 = *(undefined4 *)&pTVar27->field_0x24;
  uVar18 = *(undefined4 *)&pTVar27->field_0x28;
  uVar19 = *(undefined4 *)&pTVar27->field_0x2c;
  *(undefined4 *)&(this->CancelCallback).field_0x20 = *(undefined4 *)&pTVar27->field_0x20;
  *(undefined4 *)&(this->CancelCallback).field_0x24 = uVar17;
  *(undefined4 *)&(this->CancelCallback).field_0x28 = uVar18;
  *(undefined4 *)&(this->CancelCallback).field_0x2c = uVar19;
  *(undefined4 *)pTVar27 = uVar9;
  *(undefined4 *)&pTVar27->field_0x4 = uVar10;
  *(undefined4 *)&pTVar27->field_0x8 = uVar11;
  *(undefined4 *)&pTVar27->field_0xc = uVar12;
  *(undefined4 *)&pTVar27->field_0x10 = uVar13;
  *(undefined4 *)&pTVar27->field_0x14 = uVar14;
  *(undefined4 *)&pTVar27->field_0x18 = uVar15;
  *(undefined4 *)&pTVar27->field_0x1c = uVar16;
  *(undefined8 *)&pTVar27->field_0x20 = uVar20;
  *(undefined8 *)&pTVar27->field_0x28 = uVar21;
  if (local_78._0_8_ != 0) {
    plVar28 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar28 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar28 + 0x10))();
  }
  if (local_d8[0] != (code *)0x0) {
    pppuVar29 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar29 = local_b0;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar30 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar30 = local_80;
    }
    (**(code **)(*ppcVar30 + 0x10))();
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar32 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar32;
    *paVar32 = (atomic<int>)((int)*paVar32 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateFileSize @ 14f02e3e0

void __thiscall FDownload::UpdateFileSize(FDownload *this)

{
  IFileManager *pIVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  wchar_t *pwVar4;
  
  pIVar1 = IFileManager::Get();
  if ((this->TargetFile).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(this->TargetFile).Data.AllocatorInstance.Data;
  }
  uVar2 = (**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,pwVar4);
  uVar3 = 0;
  if (0 < (longlong)uVar2) {
    uVar3 = uVar2;
  }
  ((this->PakFile).Object)->SizeOnDisk = uVar3;
  return;
}

// ValidateFile @ 14f02ed30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDownload::ValidateFile(FDownload *this)

{
  FPakFile *pFVar1;
  bool bVar2;
  
  pFVar1 = (this->PakFile).Object;
  if (pFVar1->SizeOnDisk == (pFVar1->Entry).FileSize) {
    bVar2 = ::FString::StartsWith(&(pFVar1->Entry).FileVersion,L"SHA1:",5,IgnoreCase);
    if ((!bVar2) ||
       (bVar2 = FChunkDownloader::CheckFileSha1Hash
                          (&this->TargetFile,&(((this->PakFile).Object)->Entry).FileVersion), bVar2)
       ) {
      return true;
    }
    if (1 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    }
  }
  else if (1 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
    return false;
  }
  return false;
}

