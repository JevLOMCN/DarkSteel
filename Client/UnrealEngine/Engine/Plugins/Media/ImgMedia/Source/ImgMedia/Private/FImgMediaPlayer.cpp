// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 54

// FImgMediaPlayer @ 14ea38a60

FImgMediaPlayer * __thiscall
FImgMediaPlayer::FImgMediaPlayer
          (FImgMediaPlayer *this,IMediaEventSink *param_1,TSharedRef<FImgMediaScheduler,1> *param_2,
          TSharedRef<FImgMediaGlobalCache,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&_vftable__for__IMediaPlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMediaCache__;
  this->_padding_ = (longlong)&_vftable__for__IMediaControls__;
  this->_padding_ = (longlong)&_vftable__for__IMediaSamples__;
  this->_padding_ = (longlong)&_vftable__for__IMediaTracks__;
  this->_padding_ = (longlong)&_vftable__for__IMediaView__;
  (this->CurrentDuration).Ticks = 0;
  (this->CurrentTime).Ticks = 0;
  this->CurrentRate = 0.0;
  this->LastNonZeroRate = 0.0;
  this->CurrentState = Closed;
  (this->LastFetchTime).Ticks = -0x8000000000000000;
  (this->CurrentUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentUrl).Data.ArrayNum = 0;
  (this->CurrentUrl).Data.ArrayMax = 0;
  this->CurrentSeekIndex = 0;
  this->DeltaTimeHackApplied = false;
  this->EventSink = param_1;
  (this->Loader).Object = (FImgMediaLoader *)0x0;
  (this->Loader).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->PlaybackRestarted = false;
  (this->Scheduler).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Scheduler).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->SelectedVideoTrack = -1;
  this->ShouldLoop = false;
  (this->GlobalCache).Object = param_3->Object;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  (this->GlobalCache).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->RequestFrameHasRun = true;
  this->PlaybackIsBlocking = false;
  (this->MediaTextureWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~FImgMediaPlayer @ 14ea3afe0

void __thiscall FImgMediaPlayer::~FImgMediaPlayer(FImgMediaPlayer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__IMediaPlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMediaCache__;
  this->_padding_ = (longlong)&_vftable__for__IMediaControls__;
  this->_padding_ = (longlong)&_vftable__for__IMediaSamples__;
  this->_padding_ = (longlong)&_vftable__for__IMediaTracks__;
  this->_padding_ = (longlong)&_vftable__for__IMediaView__;
  Close(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GlobalCache).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Scheduler).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Loader).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->CurrentUrl).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMediaView__6B_;
  this->_padding_ = (longlong)&___7IMediaTracks__6B_;
  this->_padding_ = (longlong)&___7IMediaSamples__6B_;
  this->_padding_ = (longlong)&___7IMediaControls__6B_;
  this->_padding_ = (longlong)&___7IMediaCache__6B_;
  this->_padding_ = (longlong)&___7IMediaPlayer__6B_;
  return;
}

// operator() @ 14ea3e690

double __thiscall
`FImgMediaPlayer::Open'::__l2::<lambda_2>::operator()
          (void *this,FMediaPlayerOptions *param_1,FName *param_2,double param_3)

{
  float fVar1;
  FVariant *pFVar2;
  FName FVar3;
  undefined7 uVar4;
  double local_res10 [3];
  FMemoryReader local_c8;
  
  if (param_1 != (FMediaPlayerOptions *)0x0) {
    FVar3 = *param_2;
    pFVar2 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
             ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                     *)&param_1->InternalCustomOptions,FVar3);
    if (pFVar2 != (FVariant *)0x0) {
      if (pFVar2->Type == Float) {
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        FArchiveState::FArchiveState((FArchiveState *)&local_c8);
        local_c8._padding_ = 0;
        local_c8._padding_ = (longlong)&___7FMemoryReader__6B_;
        local_c8.Bytes = &pFVar2->Value;
        uVar4 = FVar3._1_7_;
        local_c8.LimitSize = 0x7fffffffffffffff;
        FArchiveState::SetIsLoading((FArchiveState *)&local_c8,true);
        (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar4,1));
        if (*(undefined4 **)(local_c8._padding_ + 8) < *(undefined4 **)local_c8._padding_ + 1) {
          if ((local_c8._padding_ & 0x10000U) == 0) {
            if (*(code **)(local_c8._padding_ + 0x188) == FMemoryReader::Serialize) {
              FMemoryReader::Serialize(&local_c8,local_res10,4);
            }
            else {
              (**(code **)(local_c8._padding_ + 0x188))();
            }
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,(uint *)local_res10);
          }
        }
        else {
          local_res10[0] =
               (double)CONCAT44(local_res10[0]._4_4_,**(undefined4 **)local_c8._padding_);
          *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 4;
        }
        fVar1 = local_res10[0]._0_4_;
        FArchive::~FArchive((FArchive *)&local_c8);
        param_3 = (double)fVar1;
      }
      else if (pFVar2->Type == Double) {
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        FArchiveState::FArchiveState((FArchiveState *)&local_c8);
        local_c8._padding_ = 0;
        local_c8._padding_ = (longlong)&___7FMemoryReader__6B_;
        local_c8.Bytes = &pFVar2->Value;
        uVar4 = FVar3._1_7_;
        local_c8.LimitSize = 0x7fffffffffffffff;
        FArchiveState::SetIsLoading((FArchiveState *)&local_c8,true);
        (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar4,1));
        if (*(double **)(local_c8._padding_ + 8) < *(double **)local_c8._padding_ + 1) {
          if ((local_c8._padding_ & 0x10000U) == 0) {
            if (*(code **)(local_c8._padding_ + 0x188) == FMemoryReader::Serialize) {
              FMemoryReader::Serialize(&local_c8,local_res10,8);
            }
            else {
              (**(code **)(local_c8._padding_ + 0x188))();
            }
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,(ulong64 *)local_res10);
          }
        }
        else {
          local_res10[0] = **(double **)local_c8._padding_;
          *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 8;
        }
        param_3 = local_res10[0];
        FArchive::~FArchive((FArchive *)&local_c8);
      }
    }
  }
  return param_3;
}

// operator() @ 14ea3f650

void __thiscall `FImgMediaPlayer::Open'::__l2::<lambda_5>::operator()(void *this)

{
  int iVar1;
  FImgMediaLoader *this_00;
  FScriptContainerElement *_Src;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FString local_48;
  TStringView<wchar_t> local_38;
  undefined8 local_28;
  int local_20;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea3f68e;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this_00 = *(FImgMediaLoader **)((longlong)this + 8);
    if (this_00 != (FImgMediaLoader *)0x0) {
      local_38.DataPtr = *(wchar_t **)((longlong)this + 0x28);
      local_38.Size = *(int *)((longlong)this + 0x30) + -1;
      local_28 = *(undefined8 *)((longlong)this + 0x18);
      if (*(int *)((longlong)this + 0x30) == 0) {
        local_38.Size = 0;
      }
      local_20 = *(int *)((longlong)this + 0x20) + -1;
      if (*(int *)((longlong)this + 0x20) == 0) {
        local_20 = 0;
      }
      FPaths::CombineInternal(&local_48,&local_38,2);
      bVar5 = FPaths::DirectoryExists(&local_48);
      if ((!bVar5) && (&local_48 != (FString *)((longlong)this + 0x28))) {
        iVar1 = *(int *)((longlong)this + 0x30);
        _Src = (((FString *)((longlong)this + 0x28))->Data).AllocatorInstance.Data;
        local_48.Data.ArrayNum = iVar1;
        if ((iVar1 == 0) && (local_48.Data.ArrayMax == 0)) {
          local_48.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar1,local_48.Data.ArrayMax,(ForAnyElementType *)&local_48,iVar1,
                     &local_48.Data.ArrayMax);
          if (iVar1 != 0) {
            memcpy(local_48.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      FImgMediaLoader::Initialize
                (this_00,&local_48,this,*(bool *)((longlong)this + 0x38),
                 *(bool *)((longlong)this + 0x39));
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14ea3f68e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// CanControl @ 14ea451a0

bool __thiscall FImgMediaPlayer::CanControl(FImgMediaPlayer *this,EMediaControl param_1)

{
  int iVar1;
  
  if (param_1 != BlockOnFetch) {
    iVar1 = (int)(this->CurrentDuration).Ticks;
    if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 4)) {
      return false;
    }
    if (param_1 == Pause) {
      return iVar1 == 3;
    }
    if (param_1 == Resume) {
      return iVar1 != 3;
    }
    if (param_1 != Scrub) {
      return param_1 == Seek;
    }
  }
  return true;
}

// Close @ 14ea455a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FImgMediaPlayer::Close(FImgMediaPlayer *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  TSharedPtr<FImgMediaMipMapInfo,1> *this_00;
  atomic<int> aVar3;
  int iVar4;
  FImgMediaLoader *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FImgMediaScheduler *this_01;
  IMediaEventSink *pIVar7;
  code *pcVar8;
  FImgMediaMipMapInfo *this_02;
  bool bVar9;
  atomic<int> aVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_ImgMedia_PlayerClose> FVar12;
  UObject *pUVar13;
  FMediaTextureTracker *this_03;
  TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *pTVar14;
  AActor *pAVar15;
  FThreadStats *this_04;
  FThreadStatsPool *this_05;
  uint uVar16;
  FWeakObjectPtr *this_06;
  FNameEntryId FVar17;
  FName FVar18;
  byte bVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  LARGE_INTEGER local_res8;
  uint local_res10;
  uint uStackX_14;
  FImgMediaMipMapInfo *local_res18;
  FColor_u_0 local_res20 [2];
  FName local_a8;
  TSharedRef<FImgMediaLoader,1> local_a0;
  UObject *local_90;
  FName local_88;
  FName local_80;
  undefined8 local_70;
  FSharedReferencer<1> FStack_68;
  FStatMessage local_60 [2];
  
  FVar12 = StatPtr_STAT_ImgMedia_PlayerClose;
  local_res8 = (LARGE_INTEGER)this;
  if (StatPtr_STAT_ImgMedia_PlayerClose ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_PlayerClose>)0x0) {
    pFVar11 = ::FName::FName(&local_88,"STAT_ImgMedia_PlayerClose");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_ImgMedia_PlayerClose>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_PlayerClose,*pFVar11,
                        L"ImgMedia Player Close","STATGROUP_Media","STATCAT_Advanced",L"Media",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar19 = 0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  local_res10 = local_res10 & 0xffffff00;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar19 = 1;
      local_res10 = CONCAT31(local_res10._1_3_,1);
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar17.Value;
        local_a8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Player\\ImgMediaPlayer.cpp"
                   ,0x4a);
        bVar19 = 3;
        local_res10 = CONCAT31(local_res10._1_3_,3);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar17.Value;
      uStackX_14 = uVar16;
      local_a0.Object = (FImgMediaLoader *)FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      local_res10 = CONCAT31(local_res10._1_3_,bVar19) | 4;
      bVar19 = bVar19 | 4;
      goto LAB_14ea456f7;
    }
  }
  local_a0.Object = (FImgMediaLoader *)local_80;
  FVar18 = local_80;
LAB_14ea456f7:
  pFVar5 = (this->Loader).Object;
  if (pFVar5 != (FImgMediaLoader *)0x0) {
    this_00 = &pFVar5->MipMapInfo;
    if ((this_00->Object != (FImgMediaMipMapInfo *)0x0) &&
       (bVar9 = FWeakObjectPtr::IsValid(&(this->MediaTextureWeakPtr).WeakPtr), bVar9)) {
      local_res18 = TSharedPtr<FImgMediaMipMapInfo,1>::operator->(this_00);
      pUVar13 = FWeakObjectPtr::Get(&(this->MediaTextureWeakPtr).WeakPtr);
      this_03 = FMediaTextureTracker::Get();
      local_90 = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      pTVar14 = FMediaTextureTracker::GetObjects(this_03,(TObjectPtr<UMediaTexture>)&local_90);
      this_02 = local_res18;
      if (pTVar14 !=
          (TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *)0x0) {
        iVar4 = pTVar14->ArrayNum;
        pFVar20 = (pTVar14->AllocatorInstance).Data;
        pFVar21 = pFVar20 + (longlong)iVar4 * 0x10;
        while( true ) {
          if (pTVar14->ArrayNum != iVar4) {
            local_res18 = (FImgMediaMipMapInfo *)((ulonglong)local_res18 & 0xffffffffffffff00);
            `TCheckedPointerIterator<TWeakPtr<FMediaTextureTrackerObject,1>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_res18);
          }
          if (pFVar20 == pFVar21) break;
          pTVar6 = *(TReferenceControllerBase<1> **)(pFVar20 + 8);
          this_06 = *(FWeakObjectPtr **)pFVar20;
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
            UNLOCK();
            aVar3 = pTVar6->SharedReferenceCount;
            do {
              if (aVar3 == (atomic<int>)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
                goto LAB_14ea4582b;
              }
              LOCK();
              aVar10 = pTVar6->SharedReferenceCount;
              bVar9 = aVar3 == aVar10;
              if (bVar9) {
                pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
                aVar10 = aVar3;
              }
              UNLOCK();
              aVar3 = aVar10;
            } while (!bVar9);
          }
          if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
            this_06 = (FWeakObjectPtr *)0x0;
          }
          if (this_06 != (FWeakObjectPtr *)0x0) {
            pAVar15 = (AActor *)FWeakObjectPtr::Get(this_06);
            FImgMediaMipMapInfo::RemoveObject(this_02,pAVar15);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
LAB_14ea4582b:
            LOCK();
            paVar1 = &pTVar6->WeakReferenceCount;
            aVar3 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
            }
          }
          pFVar20 = pFVar20 + 0x10;
        }
        FVar18 = (FName)local_a0.Object;
        this = (FImgMediaPlayer *)local_res8;
        bVar19 = (byte)local_res10;
      }
    }
    if ((((TSharedPtr<FImgMediaScheduler,1> *)((longlong)this + 0x98))->Object ==
         (FImgMediaScheduler *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    this_01 = ((TSharedPtr<FImgMediaScheduler,1> *)((longlong)this + 0x98))->Object;
    if ((((TSharedPtr<FImgMediaLoader,1> *)((longlong)this + 0x80))->Object ==
         (FImgMediaLoader *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar6 = ((FSharedReferencer<1> *)((longlong)this + 0x88))->ReferenceController;
    local_a0.Object = *(FImgMediaLoader **)((longlong)this + 0x80);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a0.SharedReferenceCount.ReferenceController = pTVar6;
    if (((FName)local_a0.Object == (FName)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FImgMediaScheduler::UnregisterLoader(this_01,&local_a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    local_70 = 0;
    FStack_68.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((TSharedPtr<FImgMediaLoader,1> *)((longlong)this + 0x80) !=
        (TSharedPtr<FImgMediaLoader,1> *)&local_70) {
      ((TSharedPtr<FImgMediaLoader,1> *)((longlong)this + 0x80))->Object = (FImgMediaLoader *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)((longlong)this + 0x88),&FStack_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_68.ReferenceController);
    ((FTimespan *)((longlong)this + 0x30))->Ticks = 0;
    ::FString::Empty((FString *)((longlong)this + 0x58));
    pIVar7 = *(IMediaEventSink **)((longlong)this + 0x70);
    *(undefined8 *)((longlong)this + 0x38) = 0;
    *(EMediaState *)((longlong)this + 0x40) = Closed;
    ((FTimespan *)((longlong)this + 0x48))->Ticks = 0;
    *(int *)((longlong)this + 0x50) = 0;
    *(bool *)((longlong)this + 0x68) = false;
    ((FTimespan *)((longlong)this + 0x78))->Ticks = -0x8000000000000000;
    *(bool *)((longlong)this + 0x90) = false;
    *(int *)((longlong)this + 0xa8) = -1;
    *(bool *)((longlong)this + 0xc1) = false;
    (**(code **)*pIVar7)(pIVar7,10);
    (**(code **)**(IMediaEventSink **)((longlong)this + 0x70))
              (*(IMediaEventSink **)((longlong)this + 0x70),2);
  }
  if ((bVar19 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar19 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((((bVar19 & 4) != 0) && (FVar18 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_04 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_04 == (FThreadStats *)0x0) {
      this_05 = FThreadStatsPool::Get();
      this_04 = FThreadStatsPool::GetFromPool(this_05);
    }
    if (this_04->bWaitForExplicitFlush < this_04->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_60[0].StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_04,local_60);
      piVar2 = &this_04->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_04,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_04,false,false);
      }
    }
  }
  return;
}

// DiscardVideoSamples @ 14ea471b0

bool __thiscall
FImgMediaPlayer::DiscardVideoSamples
          (FImgMediaPlayer *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((((*(FImgMediaLoader **)&this->DeltaTimeHackApplied != (FImgMediaLoader *)0x0) &&
       (iVar1 = (int)this->_padding_, iVar1 != 0)) && (iVar1 != 1)) && (iVar1 != 4)) {
    bVar2 = FImgMediaLoader::DiscardVideoSamples
                      (*(FImgMediaLoader **)&this->DeltaTimeHackApplied,param_1,
                       (bool)this->field_0x94,*(float *)&this->_padding_);
    return bVar2;
  }
  return false;
}

// FetchBestVideoSampleForTimeRange @ 14ea48fe0

EFetchBestSampleResult __thiscall
FImgMediaPlayer::FetchBestVideoSampleForTimeRange
          (FImgMediaPlayer *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2,bool param_3,bool param_4)

{
  char cVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  EFetchBestSampleResult EVar6;
  int iVar7;
  int iVar8;
  long64 *plVar9;
  FImgMediaLoader *pFVar10;
  undefined1 local_18 [16];
  
  if ((((*(FImgMediaLoader **)&this->DeltaTimeHackApplied != (FImgMediaLoader *)0x0) &&
       (iVar7 = (int)this->_padding_, iVar7 != 0)) && (iVar7 != 1)) && (iVar7 != 4)) {
    EVar6 = FImgMediaLoader::FetchBestVideoSampleForTimeRange
                      (*(FImgMediaLoader **)&this->DeltaTimeHackApplied,param_1,param_2,
                       (bool)this->field_0x94,*(float *)((longlong)&this->_padding_ + 4));
    if ((this->Loader).Object == (FImgMediaLoader *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
    }
    pFVar10 = (this->Loader).Object;
    (**(code **)(pFVar10->_padding_ + 8))(pFVar10,0,0x8000000000000000);
    if (EVar6 == Ok) {
      if (param_2->Object == (IMediaTextureSample *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          EVar6 = (*pcVar4)();
          return EVar6;
        }
      }
      plVar9 = (long64 *)(**(code **)((longlong)*param_2->Object + 0x60))(param_2->Object,local_18);
      cVar1 = this->field_0x94;
      (this->CurrentDuration).Ticks = *plVar9;
      if (cVar1 == '\0') {
        if (0.0 < *(float *)&this->_padding_ || *(float *)&this->_padding_ == 0.0) {
          pFVar10 = TSharedPtr<FImgMediaLoader,1>::operator->
                              ((TSharedPtr<FImgMediaLoader,1> *)&this->DeltaTimeHackApplied);
          lVar2 = (this->CurrentDuration).Ticks;
          if (((lVar2 < 0) || ((pFVar10->SequenceDuration).Ticks <= lVar2)) ||
             (((pFVar10->ImagePaths).ArrayNum < 1 ||
              (*(int *)((pFVar10->ImagePaths).AllocatorInstance.Data + 8) < 1)))) {
            iVar7 = -1;
            if ((pFVar10->ImagePaths).ArrayNum < 1) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)((pFVar10->ImagePaths).AllocatorInstance.Data + 8);
            }
          }
          else {
            iVar7 = (int)(((pFVar10->SequenceFrameRate).Numerator * lVar2) /
                         ((longlong)(pFVar10->SequenceFrameRate).Denominator * 10000000));
            iVar8 = *(int *)((pFVar10->ImagePaths).AllocatorInstance.Data + 8);
          }
          bVar5 = iVar7 == iVar8 + -1;
        }
        else {
          pFVar10 = TSharedPtr<FImgMediaLoader,1>::operator->
                              ((TSharedPtr<FImgMediaLoader,1> *)&this->DeltaTimeHackApplied);
          lVar2 = (this->CurrentDuration).Ticks;
          if (((lVar2 < 0) || ((pFVar10->SequenceDuration).Ticks <= lVar2)) ||
             (((pFVar10->ImagePaths).ArrayNum < 1 ||
              (*(int *)((pFVar10->ImagePaths).AllocatorInstance.Data + 8) < 1)))) {
            bVar5 = false;
          }
          else {
            bVar5 = (int)(((pFVar10->SequenceFrameRate).Numerator * lVar2) /
                         ((longlong)(pFVar10->SequenceFrameRate).Denominator * 10000000)) == 0;
          }
        }
        if (bVar5) {
          pFVar3 = (this->CurrentUrl).Data.AllocatorInstance.Data;
          (*(code *)**(undefined8 **)pFVar3)(pFVar3,6);
          pFVar3 = (this->CurrentUrl).Data.AllocatorInstance.Data;
          *(undefined4 *)&this->_padding_ = 5;
          this->_padding_ = 0;
          (*(code *)**(undefined8 **)pFVar3)(pFVar3,8);
        }
      }
    }
    return EVar6;
  }
  return NoSample;
}

// FetchVideo @ 14ea49240

bool __thiscall
FImgMediaPlayer::FetchVideo
          (FImgMediaPlayer *this,TRange<FTimespan> *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2)

{
  return false;
}

// FlushOnSeekCompleted @ 14ea4a730

bool __thiscall FImgMediaPlayer::FlushOnSeekCompleted(FImgMediaPlayer *this)

{
  return false;
}

// FlushOnSeekStarted @ 14ea4a740

bool __thiscall FImgMediaPlayer::FlushOnSeekStarted(FImgMediaPlayer *this)

{
  return true;
}

// FlushSamples @ 14ea4a750

void __thiscall FImgMediaPlayer::FlushSamples(FImgMediaPlayer *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  iVar1 = (int)this->_padding_;
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) {
    (this->CurrentUrl).Data.ArrayNum = 0;
    (this->CurrentUrl).Data.ArrayMax = -0x80000000;
    this->CurrentRate = 0.0;
    if (*(longlong *)&this->DeltaTimeHackApplied == 0) {
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
    lVar2 = *(longlong *)&this->DeltaTimeHackApplied;
    *(undefined4 *)(lVar2 + 0x1d0) = 0;
    *(undefined8 *)(lVar2 + 0x1e4) = 0;
    *(undefined8 *)(lVar2 + 0x1c0) = 0;
  }
  return;
}

// GetAudioTrackFormat @ 14ea4b0a0

bool __thiscall
FImgMediaPlayer::GetAudioTrackFormat
          (FImgMediaPlayer *this,int param_1,int param_2,FMediaAudioTrackFormat *param_3)

{
  return false;
}

// GetCache @ 14ea4b3e0

IMediaCache * __thiscall FImgMediaPlayer::GetCache(FImgMediaPlayer *this)

{
  return (IMediaCache *)&this->_padding_;
}

// GetControls @ 14ea4b750

IMediaControls * __thiscall FImgMediaPlayer::GetControls(FImgMediaPlayer *this)

{
  return (IMediaControls *)&this->_padding_;
}

// GetDuration @ 14ea4ba80

FTimespan __thiscall FImgMediaPlayer::GetDuration(FImgMediaPlayer *this)

{
  longlong *in_RDX;
  
  *in_RDX = this->_padding_;
  return (FTimespan)(long64)in_RDX;
}

// GetInfo @ 14ea4cb60

FString * __thiscall FImgMediaPlayer::GetInfo(FImgMediaPlayer *this,FString *__return_storage_ptr__)

{
  FImgMediaLoader *pFVar1;
  FScriptContainerElement *_Src;
  ForAnyElementType FVar2;
  longlong lVar3;
  FString local_28;
  FString local_18;
  
  pFVar1 = (this->Loader).Object;
  if (pFVar1 == (FImgMediaLoader *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::FString::FString(__return_storage_ptr__,&local_18);
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  else {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    _Src = (pFVar1->Info).Data.AllocatorInstance.Data;
    local_28.Data.ArrayNum = (pFVar1->Info).Data.ArrayNum;
    lVar3 = (longlong)local_28.Data.ArrayNum;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return __return_storage_ptr__;
}

// GetMediaInfo @ 14ea4cee0

FVariant * __thiscall
FImgMediaPlayer::GetMediaInfo(FImgMediaPlayer *this,FVariant *__return_storage_ptr__,FName param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  FName FVar3;
  FImgMediaLoader *pFVar4;
  uint *puVar5;
  undefined7 uVar6;
  uint local_res10;
  uint auStackX_14 [5];
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_d8;
  
  pTVar1 = &__return_storage_ptr__->Value;
  __return_storage_ptr__->Type = Empty;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  puVar5 = &local_res10;
  (__return_storage_ptr__->Value).ArrayNum = 0;
  (__return_storage_ptr__->Value).ArrayMax = 0;
  FVar3 = FLazyName::Resolve(&UMediaPlayer::MediaInfoNameSourceNumMips);
  local_d8.Bytes = pTVar1;
  if (param_1 == *(FName *)FVar3) {
    pFVar4 = (this->Loader).Object;
    if (pFVar4 == (FImgMediaLoader *)0x0) {
      return __return_storage_ptr__;
    }
    local_res10 = pFVar4->NumMipLevels;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    auStackX_14[1] = 0;
    auStackX_14[2] = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_d8);
    local_d8._padding_ = 0;
    local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    uVar6 = (undefined7)((ulonglong)puVar5 >> 8);
    local_d8.ArchiveName.ComparisonIndex.Value = 0;
    local_d8.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_d8,true);
    (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar6,1));
    local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    if (*(uint **)(local_d8._padding_ + 8) < *(uint **)local_d8._padding_ + 1) {
      if ((local_d8._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_d8,&local_res10,4);
        __return_storage_ptr__->Type = Int32;
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,&local_res10);
        __return_storage_ptr__->Type = Int32;
      }
    }
    else {
      local_res10 = **(uint **)local_d8._padding_;
      *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
      __return_storage_ptr__->Type = Int32;
    }
  }
  else {
    puVar5 = &local_res10;
    FVar3 = FLazyName::Resolve(&UMediaPlayer::MediaInfoNameSourceNumTiles);
    if (param_1 != *(FName *)FVar3) {
      return __return_storage_ptr__;
    }
    pFVar4 = (this->Loader).Object;
    if (pFVar4 == (FImgMediaLoader *)0x0) {
      return __return_storage_ptr__;
    }
    uVar2 = (pFVar4->TilingDescription).TileNum.field0_0x0._s_0.Y;
    pFVar4 = TSharedPtr<FImgMediaLoader,1>::operator->(&this->Loader);
    auStackX_14[1] = 0;
    auStackX_14[2] = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_res10 = (pFVar4->TilingDescription).TileNum.field0_0x0._s_0.X;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    auStackX_14[0] = uVar2;
    FArchiveState::FArchiveState((FArchiveState *)&local_d8);
    local_d8._padding_ = 0;
    local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    uVar6 = (undefined7)((ulonglong)puVar5 >> 8);
    local_d8.ArchiveName.ComparisonIndex.Value = 0;
    local_d8.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_d8,true);
    (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar6,1));
    local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    if (*(uint **)(local_d8._padding_ + 8) < *(uint **)local_d8._padding_ + 1) {
      if ((local_d8._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_d8,&local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,&local_res10);
      }
    }
    else {
      local_res10 = **(uint **)local_d8._padding_;
      *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
    }
    if (*(uint **)(local_d8._padding_ + 8) < *(uint **)local_d8._padding_ + 1) {
      if ((local_d8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_d8._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_d8,auStackX_14,4);
        }
        else {
          (**(code **)(local_d8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,auStackX_14);
      }
    }
    else {
      auStackX_14[0] = **(uint **)local_d8._padding_;
      *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
    }
    __return_storage_ptr__->Type = IntPoint;
  }
  FArchive::~FArchive((FArchive *)&local_d8);
  return __return_storage_ptr__;
}

// GetNumTrackFormats @ 14ea4d8c0

int __thiscall
FImgMediaPlayer::GetNumTrackFormats(FImgMediaPlayer *this,EMediaTrackType param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = (**(code **)(this->_padding_ + 8))();
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}

// GetNumTracks @ 14ea4d8f0

int __thiscall FImgMediaPlayer::GetNumTracks(FImgMediaPlayer *this,EMediaTrackType param_1)

{
  longlong lVar1;
  
  lVar1._0_4_ = (this->CurrentUrl).Data.ArrayNum;
  lVar1._4_4_ = (this->CurrentUrl).Data.ArrayMax;
  if ((lVar1 != 0) && (param_1 == Video)) {
    return 1;
  }
  return 0;
}

// GetPlayerFeatureFlag @ 14ea4df50

bool __thiscall FImgMediaPlayer::GetPlayerFeatureFlag(FImgMediaPlayer *this,EFeatureFlag param_1)

{
  if ((param_1 != UsePlaybackTimingV2) && (param_1 != PlayerUsesInternalFlushOnSeek)) {
    return false;
  }
  return true;
}

// GetPlayerPluginGUID @ 14ea4df70

FGuid * __thiscall
FImgMediaPlayer::GetPlayerPluginGUID(FImgMediaPlayer *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = PlayerPluginGUID;
  return __return_storage_ptr__;
}

// GetRate @ 14ea4e400

float __thiscall FImgMediaPlayer::GetRate(FImgMediaPlayer *this)

{
  return *(float *)&this->_padding_;
}

// GetSamples @ 14ea4e8b0

IMediaSamples * __thiscall FImgMediaPlayer::GetSamples(FImgMediaPlayer *this)

{
  return (IMediaSamples *)&this->_padding_;
}

// GetSelectedTrack @ 14ea4e8c0

int __thiscall FImgMediaPlayer::GetSelectedTrack(FImgMediaPlayer *this,EMediaTrackType param_1)

{
  int iVar1;
  
  iVar1 = (int)this->_padding_;
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) && (param_1 == Video)) {
    return *(int *)&(this->Loader).SharedReferenceCount.ReferenceController;
  }
  return -1;
}

// GetState @ 14ea4eb90

EMediaState __thiscall FImgMediaPlayer::GetState(FImgMediaPlayer *this)

{
  return (EMediaState)(this->CurrentDuration).Ticks;
}

// GetStats @ 14ea4eba0

FString * __thiscall
FImgMediaPlayer::GetStats(FImgMediaPlayer *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::AppendChars(__return_storage_ptr__,L"not implemented yet",0x13);
  ::FString::AppendChars(__return_storage_ptr__,L"\n",1);
  return __return_storage_ptr__;
}

// GetStatus @ 14ea4ebf0

EMediaStatus __thiscall FImgMediaPlayer::GetStatus(FImgMediaPlayer *this)

{
  return None;
}

// GetSupportedRates @ 14ea4ec10

TRangeSet<float> * __thiscall
FImgMediaPlayer::GetSupportedRates
          (FImgMediaPlayer *this,TRangeSet<float> *__return_storage_ptr__,EMediaRateThinning param_1
          )

{
  int iVar1;
  TRangeBound<float> local_res8;
  TRangeBound<float> local_res10 [3];
  TRange<float> local_18;
  
  (__return_storage_ptr__->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Ranges).ArrayNum = 0;
  (__return_storage_ptr__->Ranges).ArrayMax = 0;
  iVar1 = (int)(this->CurrentDuration).Ticks;
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) {
    local_18.LowerBound.Type.Value = '\x01';
    local_18.LowerBound._1_3_ = local_res8._1_3_;
    local_18.UpperBound.Type.Value = '\x01';
    local_18.UpperBound._1_3_ = local_res10[0]._1_3_;
    local_18.LowerBound.Value = -100000.0;
    local_18.UpperBound.Value = 100000.0;
    TRangeSet<float>::Add(__return_storage_ptr__,&local_18);
  }
  return __return_storage_ptr__;
}

// GetTime @ 14ea4ed80

FTimespan __thiscall FImgMediaPlayer::GetTime(FImgMediaPlayer *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)&this->CurrentRate;
  return (FTimespan)(long64)in_RDX;
}

// GetTrackDisplayName @ 14ea4ee40

FText * __thiscall
FImgMediaPlayer::GetTrackDisplayName
          (FImgMediaPlayer *this,FText *__return_storage_ptr__,EMediaTrackType param_1,int param_2)

{
  int iVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) && ((param_1 == Video && (param_2 == 0)))) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"FImgMediaPlayer",L"DefaultVideoTrackName",L"Video Track");
    return __return_storage_ptr__;
  }
  pFVar3 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar3->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar3->Flags;
  return __return_storage_ptr__;
}

// GetTrackFormat @ 14ea4eee0

int __thiscall
FImgMediaPlayer::GetTrackFormat(FImgMediaPlayer *this,EMediaTrackType param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x18))();
  return (iVar1 != -1) - 1;
}

// GetTrackLanguage @ 14ea4ef00

FString * __thiscall
FImgMediaPlayer::GetTrackLanguage
          (FImgMediaPlayer *this,FString *__return_storage_ptr__,EMediaTrackType param_1,int param_2
          )

{
  int iVar1;
  
  iVar1 = (int)this->_padding_;
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) && ((param_1 == Video && (param_2 == 0)))) {
    ::FString::FString(__return_storage_ptr__,L"und");
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTrackName @ 14ea4ef60

FString * __thiscall
FImgMediaPlayer::GetTrackName
          (FImgMediaPlayer *this,FString *__return_storage_ptr__,EMediaTrackType param_1,int param_2
          )

{
  int iVar1;
  
  iVar1 = (int)this->_padding_;
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) && ((param_1 == Video && (param_2 == 0)))) {
    ::FString::FString(__return_storage_ptr__,L"VideoTrack");
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTracks @ 14ea4efc0

IMediaTracks * __thiscall FImgMediaPlayer::GetTracks(FImgMediaPlayer *this)

{
  return (IMediaTracks *)&this->_padding_;
}

// GetUrl @ 14ea4f000

FString * __thiscall FImgMediaPlayer::GetUrl(FImgMediaPlayer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->CurrentUrl);
  return __return_storage_ptr__;
}

// GetVideoTrackFormat @ 14ea4f0a0

bool __thiscall
FImgMediaPlayer::GetVideoTrackFormat
          (FImgMediaPlayer *this,int param_1,int param_2,FMediaVideoTrackFormat *param_3)

{
  int *this_00;
  int iVar1;
  float fVar2;
  FImgMediaLoader *pFVar3;
  undefined4 local_18;
  undefined4 uStack_10;
  
  iVar1 = (int)this->_padding_;
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) && ((param_1 == 0 && (param_2 == 0)))) {
    this_00 = &(this->CurrentUrl).Data.ArrayNum;
    pFVar3 = TSharedPtr<FImgMediaLoader,1>::operator->((TSharedPtr<FImgMediaLoader,1> *)this_00);
    (param_3->Dim).field0_0x0 = (pFVar3->SequenceDim).field0_0x0;
    pFVar3 = TSharedPtr<FImgMediaLoader,1>::operator->((TSharedPtr<FImgMediaLoader,1> *)this_00);
    local_18 = CONCAT31(local_18._1_3_,1);
    uStack_10 = CONCAT31(uStack_10._1_3_,1);
    fVar2 = (float)(pFVar3->SequenceFrameRate).Numerator /
            (float)(pFVar3->SequenceFrameRate).Denominator;
    param_3->FrameRate = fVar2;
    *(undefined4 *)&(param_3->FrameRates).LowerBound = local_18;
    (param_3->FrameRates).LowerBound.Value = fVar2;
    *(undefined4 *)&(param_3->FrameRates).UpperBound = uStack_10;
    (param_3->FrameRates).UpperBound.Value = fVar2;
    ::FString::operator=(&param_3->TypeName,L"Image");
    return true;
  }
  return false;
}

// GetView @ 14ea4f180

IMediaView * __thiscall FImgMediaPlayer::GetView(FImgMediaPlayer *this)

{
  return (IMediaView *)&this->_padding_;
}

// IsInitialized @ 14ea51bf0

bool __thiscall FImgMediaPlayer::IsInitialized(FImgMediaPlayer *this)

{
  EMediaState EVar1;
  
  EVar1 = this->CurrentState;
  if (((EVar1 != Closed) && (EVar1 != Error)) && (EVar1 != Preparing)) {
    return true;
  }
  return false;
}

// IsLooping @ 14ea51c10

bool __thiscall FImgMediaPlayer::IsLooping(FImgMediaPlayer *this)

{
  return (bool)*(undefined1 *)((longlong)&(this->Scheduler).Object + 4);
}

// Open @ 14ea53af0

bool __thiscall
FImgMediaPlayer::Open
          (FImgMediaPlayer *this,TSharedRef<FArchive,1> *param_1,FString *param_2,
          IMediaOptions *param_3)

{
  return false;
}

// Open @ 14ea53b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FImgMediaPlayer::Open(FImgMediaPlayer *this,FString *param_1,IMediaOptions *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 auStackY_138 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (4 < (byte)LogImgMedia._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
  }
  local_108 = ___xmm_ffffffffffffffffffffffff00000000;
  uStack_100 = _UNK_15076cba8;
  local_a0 = 0x8000000000000000;
  local_f8 = 0xffffffffffffffff;
  local_f0 = 0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_90._8_8_ = 0;
  local_70 = (void *)0x0;
  local_68 = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_96 = 0;
  uVar3 = (**(code **)(this->_padding_ + 0x50))(this,param_1,param_2,&local_108);
  local_48 = 0;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90,0,local_90._8_4_);
  iVar1 = SUB84(local_90._8_8_,4);
  local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
  }
  uVar2 = local_68._4_4_;
  uStack_60 = 0xffffffff;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_68 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  return (bool)uVar3;
}

// Open @ 14ea53ce0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FImgMediaPlayer::Open
          (FImgMediaPlayer *this,FString *param_1,IMediaOptions *param_2,
          FMediaPlayerOptions *param_3)

{
  uint *puVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar3;
  TSharedPtr<FImgMediaLoader,1> *pTVar4;
  atomic<int> aVar5;
  uint uVar6;
  FImgMediaPlayer *pFVar7;
  longlong *plVar8;
  FImgMediaScheduler *pFVar9;
  code *pcVar10;
  FImgMediaMipMapInfo *this_00;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  undefined8 *puVar14;
  UImgMediaSettings *pUVar15;
  FVariant *pFVar16;
  UObject *pUVar17;
  UClass *pUVar18;
  UMediaTexture *pUVar19;
  FMediaTextureTracker *pFVar20;
  UMediaPlayer *this_01;
  TSharedRef<FMediaPlayerFacade,1> *pTVar21;
  FNativeMediaSourceColorSettings **ppFVar22;
  TReferenceControllerBase<1> *pTVar23;
  FName FVar24;
  undefined7 uVar25;
  ForAnyElementType FVar26;
  FName *pFVar27;
  TReferenceControllerBase<1> *pTVar28;
  longlong lVar29;
  FImgMediaLoader *pFVar30;
  FScriptContainerElement *pFVar31;
  FName *pFVar32;
  byte bVar33;
  FScriptContainerElement *pFVar34;
  double dVar35;
  byte local_res8;
  byte local_res10;
  bool local_4a8;
  undefined1 local_4a7;
  undefined1 local_4a6;
  uint local_4a4;
  undefined1 local_4a0 [4];
  int local_49c;
  FName local_498;
  FName local_490;
  FScriptContainerElement *local_488;
  FString local_480;
  FString local_470;
  FNativeMediaSourceColorSettings *local_458;
  FSharedReferencer<1> FStack_450;
  FImgMediaLoader *local_448;
  FSharedReferencer<1> local_440;
  TSharedPtr<FImgMediaMipMapInfo,1> local_438;
  FImgMediaLoader *local_428;
  TReferenceControllerBase<1> *local_420;
  undefined8 local_418;
  FImgMediaLoaderSmartCacheSettings local_410;
  undefined8 local_408;
  undefined8 local_400;
  <lambda_5> local_3f8;
  FSoftObjectPath local_3b8;
  void *local_398;
  undefined8 local_390;
  undefined8 local_388;
  FSharedReferencer<1> FStack_380;
  undefined8 local_378;
  FSharedReferencer<1> FStack_370;
  TSharedPtr<FNativeMediaSourceColorSettings,1> local_368;
  UObject *local_358;
  TSharedRef<FImgMediaScheduler,1> local_350;
  TSharedRef<FImgMediaGlobalCache,1> local_340;
  FString local_330;
  undefined8 local_320;
  TReferenceControllerBase<1> *pTStack_318;
  FName *local_310;
  undefined8 local_308;
  undefined8 local_300;
  FScriptContainerElement *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  FMemoryReader local_2e8;
  void *local_238 [2];
  TSharedRef<FMediaPlayerFacade,1> local_228;
  undefined1 local_218 [8];
  TReferenceControllerBase<1> *local_210;
  undefined1 local_208 [16];
  TStringView<wchar_t> local_1f8;
  FMemoryArchive local_1e8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_150;
  undefined8 local_148;
  FArchiveState local_138;
  undefined8 local_a8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_a0;
  undefined8 local_98;
  undefined8 local_88 [2];
  TUniqueFunction<void___cdecl(void)> local_78;
  
  pFVar34 = (FScriptContainerElement *)0x0;
  (**(code **)this->_padding_)();
  if (((param_1->Data).ArrayNum < 2) ||
     (bVar11 = ::FString::StartsWith(param_1,L"img://",6,IgnoreCase), !bVar11)) {
    return false;
  }
  this->CurrentState = Preparing;
  ::FString::operator=(&this->CurrentUrl,param_1);
  local_488 = (FScriptContainerElement *)0x0;
  iVar13 = 0;
  local_49c = 0;
  pFVar31 = pFVar34;
  if (param_2 == (IMediaOptions *)0x0) {
LAB_14ea53ded:
    pUVar15 = GetDefault<UImgMediaSettings>();
    if (pUVar15->UseDefaultProxy == false) {
      local_480.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_480.Data.ArrayNum = 0;
      local_480.Data.ArrayMax = 0;
    }
    else {
      ::FString::FString(&local_480,&pUVar15->DefaultProxy);
    }
    if (pFVar31 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar31);
    }
    local_488 = local_480.Data.AllocatorInstance.Data;
    local_480.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_49c = local_480.Data.ArrayNum;
    local_480.Data.ArrayNum = 0;
    local_480.Data.ArrayMax = 0;
  }
  else {
    local_398 = (void *)0x0;
    local_390 = 0;
    puVar14 = (undefined8 *)
              (**(code **)((longlong)*param_2 + 0x18))
                        (param_2,local_238,&ImgMedia::ProxyOverrideOption,&local_398);
    if (local_88 != puVar14) {
      pFVar31 = (FScriptContainerElement *)*puVar14;
      *puVar14 = 0;
      iVar13 = *(int *)(puVar14 + 1);
      puVar14[1] = 0;
      local_49c = iVar13;
      local_488 = pFVar31;
    }
    if (local_238[0] != (void *)0x0) {
      FMemory::Free(local_238[0]);
    }
    if (local_398 != (void *)0x0) {
      FMemory::Free(local_398);
    }
    if (iVar13 < 2) goto LAB_14ea53ded;
  }
  local_408 = (ulonglong)local_408._4_4_ << 0x20;
  local_400 = (ulonglong)local_400._4_4_ << 0x20;
  lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_438.Object = (FImgMediaMipMapInfo *)0x0;
  local_438.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_368.Object = (FNativeMediaSourceColorSettings *)0x0;
  local_368.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((*(int *)(lVar29 + 0x9d4c) <
       `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
                    ::__l2::OptName,L"ImgMediaSmartCacheEnabled");
    _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((param_3 == (FMediaPlayerOptions *)0x0) ||
      (FVar24 = `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
                ::__l2::OptName,
      pFVar16 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                        *)&param_3->InternalCustomOptions,
                       `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
                       ::__l2::OptName), pFVar16 == (FVariant *)0x0)) || (pFVar16->Type != Bool)) {
    local_res8 = 0;
  }
  else {
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_2e8);
    local_2e8._padding_ = 0;
    local_2e8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_2e8.Bytes = &pFVar16->Value;
    uVar25 = FVar24._1_7_;
    local_2e8.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_2e8,true);
    (**(code **)(local_2e8._padding_ + 0x108))(&local_2e8,CONCAT71(uVar25,1));
    puVar1 = *(uint **)local_2e8._padding_ + 1;
    if (*(uint **)(local_2e8._padding_ + 8) < puVar1) {
      local_4a4 = 0;
      local_res10 = (byte)param_1;
      if ((local_2e8._padding_ & 1U) == 0) {
        local_4a4 = (uint)(local_res10 != 0);
      }
      if (*(code **)(local_2e8._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_2e8,&local_4a4,4);
      }
      else {
        (**(code **)(local_2e8._padding_ + 0x188))();
      }
      if (1 < local_4a4) {
        FArchiveState::SetError((FArchiveState *)&local_2e8);
      }
      uVar6 = local_4a4;
      if ((local_2e8._padding_ & 1U) != 0) goto LAB_14ea53ff4;
    }
    else {
      uVar6 = **(uint **)local_2e8._padding_;
      *(uint **)local_2e8._padding_ = puVar1;
LAB_14ea53ff4:
      local_res10 = uVar6 != 0;
    }
    pFVar34 = (FScriptContainerElement *)(ulonglong)local_res10;
    FArchive::~FArchive((FArchive *)&local_2e8);
    local_res8 = local_res10;
  }
  bVar33 = (byte)pFVar34;
  if ((*(int *)(lVar29 + 0x9d4c) <
       `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'
                    ::__l2::OptName,L"Environment");
    _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((param_3 == (FMediaPlayerOptions *)0x0) ||
      (FVar24 = `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'::
                __l2::OptName,
      pFVar16 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                        *)&param_3->InternalCustomOptions,
                       `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'
                       ::__l2::OptName), pFVar16 == (FVariant *)0x0)) || (pFVar16->Type != Name)) {
    local_418 = 0;
    FVar24.ComparisonIndex.Value = 0;
    FVar24.Number = 0;
  }
  else {
    local_490.ComparisonIndex.Value = 0;
    local_490.Number = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_1e8);
    local_1e8.Offset = 0;
    uVar25 = FVar24._1_7_;
    local_1e8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_150 = &pFVar16->Value;
    local_148 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_1e8,true);
    (**(code **)(local_1e8._padding_ + 0x108))(&local_1e8,CONCAT71(uVar25,1));
    if (*(code **)(local_1e8._padding_ + 0x178) == FMemoryArchive::operator<<) {
      FMemoryArchive::operator<<(&local_1e8,&local_490);
      FArchive::~FArchive((FArchive *)&local_1e8);
      FVar24 = local_490;
    }
    else {
      (**(code **)(local_1e8._padding_ + 0x178))();
      FArchive::~FArchive((FArchive *)&local_1e8);
      FVar24 = local_490;
    }
  }
  local_498 = FVar24;
  if ((*(int *)(lVar29 + 0x9d4c) <
       `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Sequencer(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Sequencer(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Sequencer(void)'::__l2
     ::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Sequencer(void)'
                    ::__l2::OptName,L"Sequencer");
    _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Sequencer(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (FVar24.ComparisonIndex.Value.Value ==
      `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Sequencer(void)'::
      __l2::OptName.ComparisonIndex.Value) {
    local_4a8 = true;
    if (local_498.Number !=
        `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Sequencer(void)'::
        __l2::OptName.Number) goto LAB_14ea5419f;
  }
  else {
LAB_14ea5419f:
    local_4a8 = false;
  }
  if ((*(int *)(lVar29 + 0x9d4c) <
       `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
                    ::__l2::OptName,L"ImgMediaSmartCacheTimeToLookAhead");
    _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  dVar35 = `FImgMediaPlayer::Open'::__l2::<lambda_2>::operator()
                     (local_4a0,param_3,
                      &`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
                       ::__l2::OptName,0.0);
  if ((*(int *)(lVar29 + 0x9d4c) <
       `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ViewMediaTexture(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ViewMediaTexture(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ViewMediaTexture(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ViewMediaTexture(void)'
                    ::__l2::OptName,L"ViewMediaTexture");
    _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ViewMediaTexture(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((param_3 == (FMediaPlayerOptions *)0x0) ||
      (FVar24 = `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ViewMediaTexture(void)'
                ::__l2::OptName,
      pFVar16 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                        *)&param_3->InternalCustomOptions,
                       `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ViewMediaTexture(void)'
                       ::__l2::OptName), pFVar16 == (FVariant *)0x0)) || (pFVar16->Type != String))
  {
    FVar26.Data = (FScriptContainerElement *)0x0;
    iVar13 = 0;
    local_308 = 0;
    local_300 = 0;
  }
  else {
    local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_470.Data.ArrayNum = 0;
    local_470.Data.ArrayMax = 0;
    local_138._padding_ = 0;
    local_138.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_138.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_138.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_138.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_138._40_8_ = 0;
    local_138.ArSerializingDefaults = 0;
    local_138.ArPortFlags = 0;
    local_138.ArMaxSerializeSize = 0;
    local_138.ArUEVer.FileVersionUE4 = 0;
    local_138.ArUEVer.FileVersionUE5 = 0;
    local_138.ArLicenseeUEVer = 0;
    local_138.ArEngineVer.Major = 0;
    local_138.ArEngineVer.Minor = 0;
    local_138.ArEngineVer.Patch = 0;
    local_138.ArEngineVer._6_2_ = 0;
    local_138.ArEngineVer.Changelist = 0;
    local_138.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_138.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_138.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_138.SerializedProperty = (FProperty *)0x0;
    local_138.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_138.bCustomVersionsAreReset = false;
    local_138._129_7_ = 0;
    local_138.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_138);
    local_a8 = 0;
    local_138._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_a0 = &pFVar16->Value;
    uVar25 = FVar24._1_7_;
    local_98 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_138,true);
    (**(code **)(local_138._padding_ + 0x108))(&local_138,CONCAT71(uVar25,1));
    ::operator<<((FArchive *)&local_138,&local_470);
    FArchive::~FArchive((FArchive *)&local_138);
    FVar26.Data = local_470.Data.AllocatorInstance.Data;
    iVar13 = local_470.Data.ArrayNum;
    local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_470.Data.ArrayNum = 0;
    local_470.Data.ArrayMax = 0;
  }
  iStack_2f0 = iVar13 + -1;
  local_3b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_3b8.AssetPath.PackageName.Number = 0;
  local_3b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_3b8.AssetPath.AssetName.Number = 0;
  if (iVar13 == 0) {
    iStack_2f0 = 0;
  }
  local_3b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8._12_4_ = uStack_2ec;
  local_1f8.Size = iStack_2f0;
  local_3b8.SubPathString.Data.ArrayNum = 0;
  local_3b8.SubPathString.Data.ArrayMax = 0;
  local_2f8 = FVar26.Data;
  local_1f8.DataPtr = (wchar_t *)FVar26.Data;
  FSoftObjectPath::SetPath(&local_3b8,&local_1f8);
  if (FVar26.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar26.Data);
  }
  pUVar17 = FSoftObjectPath::ResolveObject(&local_3b8);
  if (pUVar17 == (UObject *)0x0) {
LAB_14ea54394:
    pUVar17 = (UObject *)0x0;
  }
  else {
    pUVar18 = Z_Construct_UClass_UMediaTexture_NoRegister();
    iVar13 = (int)pUVar18->_padding_;
    if ((*(int *)(*(longlong *)&pUVar17->field_0x10 + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar17->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar18->_padding_)) goto LAB_14ea54394;
  }
  if (local_3b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (param_2 == (IMediaOptions *)0x0) {
    uVar12 = true;
  }
  else {
    local_400 = (**(code **)((longlong)*param_2 + 0x20))
                          (param_2,&ImgMedia::FrameRateOverrideDenonimatorOption,0);
    local_408 = (**(code **)((longlong)*param_2 + 0x20))
                          (param_2,&ImgMedia::FrameRateOverrideNumeratorOption,0);
    uVar12 = (**(code **)((longlong)*param_2 + 0x30))(param_2,&ImgMedia::FillGapsInSequenceOption,1)
    ;
    local_320 = 0;
    pTStack_318 = (TReferenceControllerBase<1> *)0x0;
    local_4a6 = uVar12;
    (**(code **)((longlong)*param_2 + 8))(param_2,&local_458,&ImgMedia::MipMapInfoOption,&local_320)
    ;
    if (local_458 != (FNativeMediaSourceColorSettings *)0x0) {
      FStack_380.ReferenceController = FStack_450.ReferenceController;
      if (FStack_450.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_450.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_450.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_438.Object = (FImgMediaMipMapInfo *)local_458;
      local_388 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_438.SharedReferenceCount,&FStack_380);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_380.ReferenceController);
      this_00 = local_438.Object;
      if ((FNativeMediaSourceColorSettings *)local_438.Object !=
          (FNativeMediaSourceColorSettings *)0x0) {
        if (pUVar17 == (UObject *)0x0) {
          pFVar20 = FMediaTextureTracker::Get();
          pFVar32 = (FName *)(pFVar20->MediaTextures).AllocatorInstance.Data;
          iVar13 = (pFVar20->MediaTextures).ArrayNum;
          pFVar27 = pFVar32 + iVar13;
          local_310 = pFVar27;
          while( true ) {
            if ((pFVar20->MediaTextures).ArrayNum != iVar13) {
              local_4a7 = 0;
              `TCheckedPointerIterator<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_4a7);
            }
            bVar33 = local_res8;
            uVar12 = local_4a6;
            if (pFVar32 == pFVar27) break;
            local_498 = *pFVar32;
            pUVar19 = (UMediaTexture *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_498);
            if ((pUVar19 != (UMediaTexture *)0x0) &&
               (this_01 = UMediaTexture::GetMediaPlayer(pUVar19), this_01 != (UMediaPlayer *)0x0)) {
              pTVar21 = UMediaPlayer::GetPlayerFacade(this_01,&local_228);
              pTVar28 = (pTVar21->Object->Player).SharedReferenceCount.ReferenceController;
              pFVar7 = (FImgMediaPlayer *)(pTVar21->Object->Player).Object;
              if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar28->SharedReferenceCount =
                     (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_228.SharedReferenceCount.ReferenceController);
              if ((pFVar7 != (FImgMediaPlayer *)0x0) && (pFVar7 == this)) {
                (this->MediaTextureWeakPtr).WeakPtr = (FWeakObjectPtr)local_498;
                if (((FNativeMediaSourceColorSettings *)this_00 ==
                     (FNativeMediaSourceColorSettings *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar10 = (code *)swi(3);
                  uVar12 = (*pcVar10)();
                  return (bool)uVar12;
                }
                pUVar19 = (UMediaTexture *)FWeakObjectPtr::Get(&(this->MediaTextureWeakPtr).WeakPtr)
                ;
                FImgMediaMipMapInfo::AddObjectsUsingThisMediaTexture(this_00,pUVar19);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar28);
              pFVar27 = local_310;
            }
            pFVar32 = pFVar32 + 1;
          }
        }
        else {
          local_358 = pUVar17;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar17);
          }
          FWeakObjectPtr::operator=(&(this->MediaTextureWeakPtr).WeakPtr,(FObjectPtr)&local_358);
          pUVar19 = (UMediaTexture *)FWeakObjectPtr::Get(&(this->MediaTextureWeakPtr).WeakPtr);
          FImgMediaMipMapInfo::AddObjectsUsingThisMediaTexture(this_00,pUVar19);
        }
      }
    }
    ppFVar22 = (FNativeMediaSourceColorSettings **)
               (**(code **)((longlong)*param_2 + 8))
                         (param_2,local_218,&ImgMedia::SourceColorSettingsOption,&local_320);
    if (&local_458 != ppFVar22) {
      local_458 = *ppFVar22;
      *ppFVar22 = (FNativeMediaSourceColorSettings *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_450,(FSharedReferencer<1> *)(ppFVar22 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_210);
    if (local_458 != (FNativeMediaSourceColorSettings *)0x0) {
      FStack_370.ReferenceController = FStack_450.ReferenceController;
      if (FStack_450.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_450.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_450.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_368.Object = local_458;
      local_378 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_368.SharedReferenceCount,&FStack_370);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_370.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_450.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_318)
    ;
  }
  pTVar28 = (TReferenceControllerBase<1> *)0x0;
  local_410.TimeToLookAhead = (float)dVar35;
  local_410.bIsEnabled = (bool)bVar33;
  if (((this->GlobalCache).Object == (FImgMediaGlobalCache *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  local_340.SharedReferenceCount.ReferenceController =
       (this->GlobalCache).SharedReferenceCount.ReferenceController;
  local_340.Object = (this->GlobalCache).Object;
  if (local_340.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_340.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_340.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_340.Object == (FImgMediaGlobalCache *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  if (((this->Scheduler).Object == (FImgMediaScheduler *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  local_350.SharedReferenceCount.ReferenceController =
       (this->Scheduler).SharedReferenceCount.ReferenceController;
  local_350.Object = (this->Scheduler).Object;
  if (local_350.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_350.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_350.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_350.Object == (FImgMediaScheduler *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  pTVar23 = ::operator_new(0x208);
  if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
    pFVar30 = (FImgMediaLoader *)&DAT_00000010;
  }
  else {
    pTVar23->SharedReferenceCount = (atomic<int>)0x1;
    pTVar23->WeakReferenceCount = (atomic<int>)0x1;
    pTVar23->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFImgMediaLoader___00_SharedPointerInternals__6B_;
    FImgMediaLoader::FImgMediaLoader
              ((FImgMediaLoader *)(pTVar23 + 1),&local_350,&local_340,&local_438,&local_368,
               (bool)uVar12,&local_410);
    pFVar30 = (FImgMediaLoader *)(pTVar23 + 1);
    pTVar28 = pTVar23;
    if (pFVar30 == (FImgMediaLoader *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      goto LAB_14ea548de;
    }
  }
  if (((pFVar30->_padding_ == 0) || (pFVar30->_padding_ == 0)) ||
     (*(int *)(pFVar30->_padding_ + 8) < 1)) {
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar30->_padding_ = (longlong)pFVar30;
    if (pTVar28 != (TReferenceControllerBase<1> *)pFVar30->_padding_) {
      if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar28->WeakReferenceCount = (atomic<int>)((int)pTVar28->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar8 = (longlong *)pFVar30->_padding_;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      pFVar30->_padding_ = (longlong)pTVar28;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
LAB_14ea548de:
  if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = &this->Loader;
  local_448 = pFVar30;
  local_440.ReferenceController = pTVar28;
  if (pTVar4 != (TSharedPtr<FImgMediaLoader,1> *)&local_448) {
    pTVar4->Object = pFVar30;
    local_448 = (FImgMediaLoader *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Loader).SharedReferenceCount,&local_440);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_440.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_350.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_340.SharedReferenceCount.ReferenceController);
  if (((this->Scheduler).Object == (FImgMediaScheduler *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  pFVar9 = (this->Scheduler).Object;
  if ((pTVar4->Object == (FImgMediaLoader *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  pTVar28 = (this->Loader).SharedReferenceCount.ReferenceController;
  pFVar30 = pTVar4->Object;
  if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar30 == (FImgMediaLoader *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  lpCriticalSection = &pFVar9->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar28->WeakReferenceCount = (atomic<int>)((int)pTVar28->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar34 = (pFVar9->Loaders).AllocatorInstance.Data;
  local_428 = pFVar30;
  local_420 = pTVar28;
  if (((pFVar34 <= (FScriptContainerElement *)&local_428) &&
      ((FScriptContainerElement *)&local_428 < pFVar34 + (longlong)(pFVar9->Loaders).ArrayMax * 0x10
      )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  iVar13 = (pFVar9->Loaders).ArrayNum;
  piVar2 = &(pFVar9->Loaders).ArrayMax;
  if (iVar13 == *piVar2) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(pFVar9->Loaders).AllocatorInstance,piVar2);
  }
  (pFVar9->Loaders).ArrayNum = iVar13 + 1;
  pFVar34 = (pFVar9->Loaders).AllocatorInstance.Data;
  *(FImgMediaLoader **)(pFVar34 + (longlong)iVar13 * 0x10) = local_428;
  *(TReferenceControllerBase<1> **)(pFVar34 + (longlong)iVar13 * 0x10 + 8) = local_420;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  ::FString::RightChop(param_1,&local_330,6);
  local_3f8.LoaderPtr.WeakReferenceCount.ReferenceController =
       (this->Loader).SharedReferenceCount.ReferenceController;
  local_3f8.LoaderPtr.Object = (this->Loader).Object;
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  if (local_3f8.LoaderPtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3f8.LoaderPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_3f8.LoaderPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1)
    ;
    UNLOCK();
  }
  lVar29 = (longlong)local_49c;
  bVar11 = this->ShouldLoop;
  local_3f8.FrameRateOverride.Numerator = (int)local_408;
  local_3f8.FrameRateOverride.Denominator = (int)local_400;
  local_3f8.Proxy.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3f8.Proxy.Data.ArrayNum = local_49c;
  if (local_49c == 0) {
    local_3f8.Proxy.Data.ArrayMax = 0;
    pFVar34 = local_488;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_49c,0,(ForAnyElementType *)&local_3f8.Proxy,local_49c,
               &local_3f8.Proxy.Data.ArrayMax);
    pFVar34 = local_488;
    memcpy(local_3f8.Proxy.Data.AllocatorInstance.Data,local_488,lVar29 * 2);
  }
  FVar26.Data = local_330.Data.AllocatorInstance.Data;
  local_3f8.SequencePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3f8.SequencePath.Data.ArrayNum = local_330.Data.ArrayNum;
  if (local_330.Data.ArrayNum == 0) {
    local_3f8.SequencePath.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_330.Data.ArrayNum,0,(ForAnyElementType *)&local_3f8.SequencePath,
               local_330.Data.ArrayNum,&local_3f8.SequencePath.Data.ArrayMax);
    memcpy(local_3f8.SequencePath.Data.AllocatorInstance.Data,FVar26.Data,
           (longlong)local_330.Data.ArrayNum * 2);
  }
  local_3f8.bIsSequencerEnvironment = local_4a8;
  local_3f8.Loop = bVar11;
  Async<_FImgMediaPlayer::Open_::__l2::<lambda_5>_>
            ((TFuture<void> *)local_208,ThreadPool,&local_3f8,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_208._8_8_);
  if (local_3f8.SequencePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.SequencePath.Data.AllocatorInstance.Data);
  }
  if (local_3f8.Proxy.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Proxy.Data.AllocatorInstance.Data);
  }
  if (local_3f8.LoaderPtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &(local_3f8.LoaderPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar5 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if ((aVar5 == (atomic<int>)0x1) &&
       (local_3f8.LoaderPtr.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)((local_3f8.LoaderPtr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_3f8.LoaderPtr.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_368.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_438.SharedReferenceCount.ReferenceController);
  if (pFVar34 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar34);
  }
  return true;
}

// PeekVideoSampleTime @ 14ea55050

bool __thiscall FImgMediaPlayer::PeekVideoSampleTime(FImgMediaPlayer *this,FMediaTimeStamp *param_1)

{
  int iVar1;
  FImgMediaLoader *this_00;
  bool bVar2;
  FTimespan *pFVar3;
  undefined1 local_res8 [8];
  
  this_00 = *(FImgMediaLoader **)&this->DeltaTimeHackApplied;
  if ((((this_00 != (FImgMediaLoader *)0x0) && (iVar1 = (int)this->_padding_, iVar1 != 0)) &&
      (iVar1 != 1)) && (iVar1 != 4)) {
    pFVar3 = (FTimespan *)
             (**(code **)(*(longlong *)&this[-1].MediaTextureWeakPtr.WeakPtr.ObjectSerialNumber +
                         0x30))(&this[-1].MediaTextureWeakPtr.WeakPtr.ObjectSerialNumber,local_res8)
    ;
    bVar2 = FImgMediaLoader::PeekVideoSampleTime
                      (this_00,param_1,(bool)this->field_0x94,
                       *(float *)((longlong)&this->_padding_ + 4),pFVar3);
    return bVar2;
  }
  return false;
}

// QueryCacheState @ 14ea55210

bool __thiscall
FImgMediaPlayer::QueryCacheState
          (FImgMediaPlayer *this,EMediaCacheState param_1,TRangeSet<FTimespan> *param_2)

{
  FWindowsRecursiveMutex *pFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FImgMediaLoader *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  pFVar9 = (FImgMediaLoader *)(this->LastFetchTime).Ticks;
  if (pFVar9 != (FImgMediaLoader *)0x0) {
    if (param_1 == Loading) {
      pFVar1 = &pFVar9->CriticalSection;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      uVar3 = (pFVar9->QueuedFrameNumbers).ArrayNum;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      if (-1 < (int)uVar3) {
        if (0 < (int)uVar3) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar3,&local_28.AllocatorInstance,0,&local_28.ArrayMax);
        }
        pFVar11 = (pFVar9->QueuedFrameNumbers).AllocatorInstance.Data;
        iVar4 = (pFVar9->QueuedFrameNumbers).ArrayNum;
        pFVar2 = pFVar11 + (longlong)iVar4 * 8;
        while( true ) {
          if ((pFVar9->QueuedFrameNumbers).ArrayNum != iVar4) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FImgMediaLoader::FFrameNumberJobInfo_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_res8);
          }
          if (pFVar11 == pFVar2) break;
          if ((local_28.AllocatorInstance.Data <= pFVar11) &&
             (pFVar11 < local_28.AllocatorInstance.Data + (longlong)local_28.ArrayMax * 4)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
          }
          if (local_28.ArrayNum == local_28.ArrayMax) {
            local_28.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_28.AllocatorInstance,&local_28.ArrayMax);
          }
          lVar10 = (longlong)local_28.ArrayNum;
          local_28.ArrayNum = local_28.ArrayNum + 1;
          uVar5 = *(undefined4 *)pFVar11;
          pFVar11 = pFVar11 + 8;
          *(undefined4 *)(local_28.AllocatorInstance.Data + lVar10 * 4) = uVar5;
        }
        FImgMediaLoader::FrameNumbersToTimeRanges(pFVar9,&local_28,param_2);
        if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.AllocatorInstance.Data);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        return true;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (param_1 == Loaded) {
      pFVar9 = TSharedPtr<FImgMediaLoader,1>::operator->
                         ((TSharedPtr<FImgMediaLoader,1> *)&this->LastFetchTime);
      FImgMediaLoader::GetCompletedTimeRanges(pFVar9,param_2);
      return true;
    }
    if (param_1 == Pending) {
      pFVar9 = TSharedPtr<FImgMediaLoader,1>::operator->
                         ((TSharedPtr<FImgMediaLoader,1> *)&this->LastFetchTime);
      pFVar1 = &pFVar9->CriticalSection;
      if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        FImgMediaLoader::FrameNumbersToTimeRanges(pFVar9,&pFVar9->PendingFrameNumbers,param_2);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        return true;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
  }
  return false;
}

// Seek @ 14ea5b920

bool __thiscall FImgMediaPlayer::Seek(FImgMediaPlayer *this,FTimespan *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"You have to call the override with additional options!\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Internal\\Player\\ImgMediaPlayer.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// Seek @ 14ea5b960

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FImgMediaPlayer::Seek(FImgMediaPlayer *this,FTimespan *param_1,FMediaSeekParams *param_2)

{
  IMediaEventSink *pIVar1;
  IMediaEventSink IVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  FImgMediaLoader *this_00;
  EMediaState EVar6;
  FString local_28;
  FString local_18;
  
  iVar5 = (int)(this->CurrentDuration).Ticks;
  if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 4)) {
    if (2 < (byte)LogImgMedia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
    }
  }
  else {
    if ((-1 < param_1->Ticks) && (param_1->Ticks < this->_padding_)) {
      if (iVar5 == 5) {
        pIVar1 = this->EventSink;
        *(undefined4 *)&(this->CurrentDuration).Ticks = 2;
        if (pIVar1 != (IMediaEventSink *)0x0) {
          TSharedPtr<FImgMediaLoader,1>::operator->
                    ((TSharedPtr<FImgMediaLoader,1> *)&this->EventSink);
        }
      }
      IVar2 = (IMediaEventSink)param_1->Ticks;
      *(IMediaEventSink *)&this->CurrentRate = IVar2;
      EVar6 = Closed;
      if ((param_2->NewSequenceIndex).bIsSet != false) {
        EVar6 = (param_2->NewSequenceIndex).TypedValue;
      }
      pIVar1 = this->EventSink;
      this->CurrentState = EVar6;
      if (pIVar1 != (IMediaEventSink *)0x0) {
        *(undefined4 *)(pIVar1 + 0x3a) = 0;
        *(undefined8 *)&pIVar1[0x3c].field_0x4 = 0;
        pIVar1[0x37] = IVar2;
        *(EMediaState *)(pIVar1 + 0x38) = EVar6;
        *(undefined4 *)&pIVar1[0x38].field_0x4 = 0;
        pIVar1[0x39] = (IMediaEventSink)0x0;
      }
      if ((int)(this->CurrentDuration).Ticks == 2) {
        this_00 = TSharedPtr<FImgMediaLoader,1>::operator->
                            ((TSharedPtr<FImgMediaLoader,1> *)&this->EventSink);
        lVar3 = *(longlong *)&this->CurrentRate;
        if (((lVar3 < 0) || ((this_00->SequenceDuration).Ticks <= lVar3)) ||
           (((this_00->ImagePaths).ArrayNum < 1 ||
            (*(int *)((this_00->ImagePaths).AllocatorInstance.Data + 8) < 1)))) {
          iVar5 = -1;
        }
        else {
          iVar5 = (int)(((this_00->SequenceFrameRate).Numerator * lVar3) /
                       ((longlong)(this_00->SequenceFrameRate).Denominator * 10000000));
        }
        FImgMediaLoader::RequestFrame
                  (this_00,iVar5,*(float *)&this->_padding_,
                   *(bool *)((longlong)&(this->Scheduler).Object + 4));
      }
      puVar4 = *(undefined8 **)&(this->CurrentUrl).Data.ArrayNum;
      *(undefined8 *)&this->DeltaTimeHackApplied = 0x8000000000000000;
      (**(code **)*puVar4)(puVar4,9);
      return true;
    }
    if (2 < (byte)LogImgMedia._0_1_) {
      FTimespan::ToString((FTimespan *)&this->_padding_,&local_18);
      FTimespan::ToString(param_1,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return false;
      }
    }
  }
  return false;
}

// SelectTrack @ 14ea5bb90

bool __thiscall
FImgMediaPlayer::SelectTrack(FImgMediaPlayer *this,EMediaTrackType param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)this->_padding_;
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) && ((param_1 == Video && (param_2 + 1U < 2)))
     ) {
    *(int *)&(this->Loader).SharedReferenceCount.ReferenceController = param_2;
    return true;
  }
  return false;
}

// SetBlockingPlaybackHint @ 14ea5bc10

void __thiscall FImgMediaPlayer::SetBlockingPlaybackHint(FImgMediaPlayer *this,bool param_1)

{
  bool bVar1;
  int iVar2;
  FImgMediaLoader *pFVar3;
  
  if ((bool)*(char *)((longlong)&(this->GlobalCache).Object + 1) != param_1) {
    *(bool *)((longlong)&(this->GlobalCache).Object + 1) = param_1;
    if ((((this->EventSink != (IMediaEventSink *)0x0) &&
         (iVar2 = (int)(this->CurrentDuration).Ticks, iVar2 != 0)) && (iVar2 != 1)) && (iVar2 != 4))
    {
      pFVar3 = TSharedPtr<FImgMediaLoader,1>::operator->
                         ((TSharedPtr<FImgMediaLoader,1> *)&this->EventSink);
      bVar1 = *(bool *)((longlong)&(this->GlobalCache).Object + 1);
      pFVar3->bIsPlaybackBlocking = bVar1;
      if ((pFVar3->bIsBandwidthThrottlingEnabled != false) && (bVar1 == false)) {
        pFVar3->bIsSkipFramesEnabled = true;
        return;
      }
      pFVar3->bIsSkipFramesEnabled = false;
      pFVar3->SkipFramesCounter = 0;
      pFVar3->SkipFramesLevel = 0;
    }
  }
  return;
}

// SetLooping @ 14ea5bd50

bool __thiscall FImgMediaPlayer::SetLooping(FImgMediaPlayer *this,bool param_1)

{
  *(bool *)((longlong)&(this->Scheduler).Object + 4) = param_1;
  return true;
}

// SetMinExpectedNextSequenceIndex @ 14ea5bd60

void __thiscall
FImgMediaPlayer::SetMinExpectedNextSequenceIndex(FImgMediaPlayer *this,TOptional<int> param_1)

{
  return;
}

// SetRate @ 14ea5bd70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FImgMediaPlayer::SetRate(FImgMediaPlayer *this,float param_1)

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar2 = (int)(this->CurrentDuration).Ticks;
  if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 4)) {
    if (2 < (byte)LogImgMedia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
    }
  }
  else {
    fVar1 = *(float *)&this->_padding_;
    if (param_1 == fVar1) {
      return true;
    }
    if (this->_padding_ != 0) {
      if (fVar1 == 0.0) {
        if (param_1 != 0.0) {
          if (iVar2 == 5) {
            *(undefined1 *)&(this->Loader).Object = 1;
          }
          *(float *)&this->_padding_ = param_1;
          *(float *)((longlong)&this->_padding_ + 4) = param_1;
          *(undefined4 *)&(this->CurrentDuration).Ticks = 3;
          puVar3 = *(undefined8 **)&(this->CurrentUrl).Data.ArrayNum;
          (**(code **)*puVar3)(puVar3,7);
          return true;
        }
      }
      else {
        if (param_1 == 0.0) {
          *(float *)((longlong)&this->_padding_ + 4) = fVar1;
          *(float *)&this->_padding_ = param_1;
          *(undefined4 *)&(this->CurrentDuration).Ticks = 2;
          puVar3 = *(undefined8 **)&(this->CurrentUrl).Data.ArrayNum;
          (**(code **)*puVar3)(puVar3,8);
          return true;
        }
        *(float *)((longlong)&this->_padding_ + 4) = param_1;
      }
      *(float *)&this->_padding_ = param_1;
      return true;
    }
  }
  return false;
}

// SetTrackFormat @ 14ea5bf80

bool __thiscall
FImgMediaPlayer::SetTrackFormat
          (FImgMediaPlayer *this,EMediaTrackType param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)this->_padding_;
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) && ((param_2 == 0 && (param_3 == 0)))) {
    return true;
  }
  return false;
}

// TickInput @ 14ea5cbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FImgMediaPlayer::TickInput(FImgMediaPlayer *this,FTimespan param_1,FTimespan param_2)

{
  int *piVar1;
  int iVar2;
  FImgMediaScheduler *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ImgMedia_PlayerTickInput> FVar10;
  FImgMediaLoader *pFVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  undefined8 uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  int iVar16;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  LARGE_INTEGER local_48;
  FName local_40;
  FName local_38;
  FStatMessage local_28;
  
  FVar10 = StatPtr_STAT_ImgMedia_PlayerTickInput;
  if (StatPtr_STAT_ImgMedia_PlayerTickInput ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_PlayerTickInput>)0x0) {
    pFVar9 = ::FName::FName(&local_40,"STAT_ImgMedia_PlayerTickInput");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ImgMedia_PlayerTickInput>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_PlayerTickInput,*pFVar9,
                        L"ImgMedia Player TickInput","STATGROUP_Media","STATCAT_Advanced",L"Media",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar12 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar14.Value;
        local_res20.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Player\\ImgMediaPlayer.cpp"
                   ,0x162);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_48.s.LowPart = FVar14.Value;
      local_48.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_14ea5cd19;
    }
  }
  bVar6 = false;
  FVar15 = local_38;
LAB_14ea5cd19:
  if (((this->Loader).Object != (FImgMediaLoader *)0x0) && (this->CurrentState != Error)) {
    if (this->CurrentState == Preparing) {
      pFVar11 = TSharedPtr<FImgMediaLoader,1>::operator->(&this->Loader);
      if (pFVar11->Initialized != false) {
        pFVar11 = TSharedPtr<FImgMediaLoader,1>::operator->(&this->Loader);
        iVar16 = (pFVar11->SequenceDim).field0_0x0._s_0.Y;
        iVar2 = (pFVar11->SequenceDim).field0_0x0._s_0.X;
        if (iVar2 < iVar16) {
          iVar16 = iVar2;
        }
        if (iVar16 == 0) {
          this->CurrentState = Error;
          uVar13 = 5;
        }
        else {
          pFVar11 = TSharedPtr<FImgMediaLoader,1>::operator->(&this->Loader);
          (this->CurrentDuration).Ticks = (pFVar11->SequenceDuration).Ticks;
          this->CurrentState = Stopped;
          (**(code **)*this->EventSink)(this->EventSink,10);
          uVar13 = 4;
        }
        (**(code **)*this->EventSink)(this->EventSink,uVar13);
      }
    }
    if ((this->Scheduler).Object == (FImgMediaScheduler *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->Scheduler).Object;
    (**(code **)(pFVar3->_padding_ + 8))(pFVar3,0);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_28.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_48);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_48.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_48.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_48.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_48.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

