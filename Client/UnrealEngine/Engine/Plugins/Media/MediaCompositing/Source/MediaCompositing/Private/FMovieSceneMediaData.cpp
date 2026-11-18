// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 14

// FMovieSceneMediaData @ 14ea66f70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FMovieSceneMediaData * __thiscall
FMovieSceneMediaData::FMovieSceneMediaData(FMovieSceneMediaData *this)

{
  PropertyTemplate::FSectionData::FSectionData((FSectionData *)this);
  this->bIsAspectRatioSet = false;
  this->bHasBeenExecuted = false;
  this->bOverrideMediaPlayer = false;
  this->_padding_ = (longlong)&___7FMovieSceneMediaData__6B_;
  (this->SeekOnOpenTime).Ticks = -0x8000000000000000;
  this->MediaPlayer = (UMediaPlayer *)0x0;
  (this->PlayerProxy).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ProxyMediaTexture).WeakPtr = (FWeakObjectPtr)0x0;
  this->ProxyLayerIndex = 0;
  this->ProxyTextureIndex = 0;
  (this->SampleQueue).Object =
       (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
  (this->SampleQueue).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MediaPlayerStoreWeak).Object = (FMovieSceneMediaPlayerStore *)0x0;
  (this->MediaPlayerStoreWeak).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MediaSection).ObjectIndex = 0;
  (this->MediaSection).ObjectSerialNumber = 0;
  (this->PlaybackParams).bIsLooping = false;
  (this->PlaybackParams).SectionTimeRange.LowerBound.Type.Value = '\x02';
  (this->PlaybackParams).SectionTimeRange.LowerBound.Value.Ticks = 0;
  (this->PlaybackParams).SectionTimeRange.UpperBound.Type.Value = '\x02';
  (this->PlaybackParams).SectionTimeRange.UpperBound.Value.Ticks = 0;
  (this->PlaybackParams).FrameDuration.Ticks = 0;
  return this;
}

// ~FMovieSceneMediaData @ 14ea67ea0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FMovieSceneMediaData::~FMovieSceneMediaData(FMovieSceneMediaData *this)

{
  atomic<int> *paVar1;
  TMap<FObjectKey,UMediaPlayer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>_>
  *this_00;
  atomic<int> aVar2;
  UMediaPlayer *pUVar3;
  FMovieSceneMediaPlayerStore *pFVar4;
  atomic<int> aVar5;
  FUObjectItem *pFVar6;
  UMediaPlayer **ppUVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TPairInitializer<FObjectKey_const_&,UMediaPlayer_*_const_&> local_res8;
  FObjectKey *local_28;
  UMediaPlayer ***local_20;
  
  this->_padding_ = (longlong)&___7FMovieSceneMediaData__6B_;
  if (this->MediaPlayer == (UMediaPlayer *)0x0) goto LAB_14ea67f62;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->MediaPlayer->MediaEvent,
             this);
  pTVar8 = (this->MediaPlayerStoreWeak).WeakReferenceCount.ReferenceController;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_14ea67f04:
    pUVar3 = this->MediaPlayer;
    bVar9 = this->bOverrideMediaPlayer;
    if ((pUVar3 != (UMediaPlayer *)0x0) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) {
      UMediaPlayer::Close(pUVar3);
      if (bVar9 == false) {
        UMediaPlayer::CleanUpBeforeDestroy(pUVar3);
      }
      pFVar6 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
      FUObjectItem::ClearRootFlags(pFVar6,RootSet);
    }
  }
  else {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea67f04;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar9);
    pFVar4 = (this->MediaPlayerStoreWeak).Object;
    if (pFVar4 == (FMovieSceneMediaPlayerStore *)0x0) goto LAB_14ea67f04;
    local_res8.Value = (UMediaPlayer **)this->MediaPlayer;
    this_00 = &pFVar4->MediaPlayers;
    ppUVar7 = TMapBase<FObjectKey,UMediaPlayer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>_>
              ::Find((TMapBase<FObjectKey,UMediaPlayer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>_>
                      *)this_00,&this->MediaSection);
    if (((((ppUVar7 != (UMediaPlayer **)0x0) && (*ppUVar7 != (UMediaPlayer *)0x0)) &&
         (((uint)(*ppUVar7)->_padding_ >> 0x1e & 1) == 0)) &&
        ((pUVar3 = *ppUVar7, pUVar3 != (UMediaPlayer *)local_res8.Value &&
         (pUVar3 != (UMediaPlayer *)0x0)))) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) {
      UMediaPlayer::Close(pUVar3);
      UMediaPlayer::CleanUpBeforeDestroy(pUVar3);
      pFVar6 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
      FUObjectItem::ClearRootFlags(pFVar6,RootSet);
    }
    local_20 = &local_res8.Value;
    local_28 = &this->MediaSection;
    TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FObjectKey_const_&,UMediaPlayer_*_const_&>_>
              ((TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
                *)this_00,&local_res8,(bool *)&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_14ea67f62:
  pTVar8 = (this->MediaPlayerStoreWeak).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar8->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SampleQueue).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  this->_padding_ = (longlong)&___7IPersistentEvaluationData__6B_;
  return;
}

// GetMediaPlayer @ 14ea6c2e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaPlayer * __thiscall FMovieSceneMediaData::GetMediaPlayer(FMovieSceneMediaData *this)

{
  return this->MediaPlayer;
}

// GetProxyMediaTexture @ 14ea6cb20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaTexture * __thiscall FMovieSceneMediaData::GetProxyMediaTexture(FMovieSceneMediaData *this)

{
  bool bVar1;
  UObject *this_00;
  UClass *pUVar2;
  longlong *plVar3;
  UMediaTexture *pUVar4;
  UObject *local_res8;
  
  bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&this->PlayerProxy,(void *)0x0);
  if (((!bVar1) &&
      (bVar1 = TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>::UEOpEquals
                         (&this->ProxyMediaTexture,(void *)0x0), bVar1)) &&
     (this_00 = FWeakObjectPtr::Get(&(this->PlayerProxy).WeakPtr), this_00 != (UObject *)0x0)) {
    pUVar2 = Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      local_res8 = (UObject *)
                   (**(code **)(*plVar3 + 0x38))
                             (plVar3,this->ProxyLayerIndex,this->ProxyTextureIndex);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      FWeakObjectPtr::operator=(&(this->ProxyMediaTexture).WeakPtr,(FObjectPtr)&local_res8);
    }
  }
  pUVar4 = (UMediaTexture *)FWeakObjectPtr::Get(&(this->ProxyMediaTexture).WeakPtr);
  return pUVar4;
}

// HandleMediaPlayerEvent @ 14ea6ced0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMovieSceneMediaData::HandleMediaPlayerEvent(FMovieSceneMediaData *this,EMediaEvent param_1)

{
  bool bVar1;
  longlong lVar2;
  TEnumAsByte<ERangeBoundTypes::Type> TVar3;
  long64 lVar4;
  FTimespan *pFVar5;
  longlong local_res18;
  FTimespan local_res20;
  FTimespan local_50;
  undefined1 local_48;
  FTimespan local_40;
  TRange<FTimespan> local_38;
  
  if (param_1 != MediaOpened) {
    return;
  }
  if ((this->SeekOnOpenTime).Ticks < 0) {
    return;
  }
  bVar1 = UMediaPlayer::SupportsSeeking(this->MediaPlayer);
  if (!bVar1) {
    return;
  }
  UMediaPlayer::GetDuration(this->MediaPlayer);
  if (local_res18 == 0) {
    return;
  }
  UMediaPlayer::SetLooping(this->MediaPlayer,(this->PlaybackParams).bIsLooping);
  if ((this->PlaybackParams).bIsLooping == false) {
    lVar4 = (this->SeekOnOpenTime).Ticks;
  }
  else {
    lVar4 = (this->SeekOnOpenTime).Ticks % local_res18;
  }
  lVar2 = local_res18 -
          (longlong)((double)(this->PlaybackParams).FrameDuration.Ticks * __real_3fe0000000000000);
  if (lVar4 < lVar2) {
    lVar2 = lVar4;
  }
  local_res20.Ticks = 0;
  if (0 < lVar2) {
    local_res20.Ticks = lVar2;
  }
  bVar1 = TRange<FTimespan>::IsEmpty(&(this->PlaybackParams).SectionTimeRange);
  if ((bVar1) || (bVar1 = UMediaPlayer::SupportsPlaybackTimeRange(this->MediaPlayer), !bVar1))
  goto LAB_14ea6d082;
  UE::MovieSceneMediaPlayerUtils::AdjustPlaybackTimeRange
            (&local_38,&(this->PlaybackParams).SectionTimeRange,this->MediaPlayer,
             &(this->PlaybackParams).FrameDuration);
  bVar1 = TRange<FTimespan>::IsEmpty(&local_38);
  if (bVar1) goto LAB_14ea6d082;
  local_50.Ticks = local_res20.Ticks;
  TVar3.Value = local_38.LowerBound.Type.Value;
  if (local_38.LowerBound.Type.Value == '\x02') {
    pFVar5 = &local_38.LowerBound.Value;
LAB_14ea6d018:
    bVar1 = TVar3.Value != local_38.LowerBound.Type.Value;
    local_38.LowerBound.Type.Value = TVar3.Value;
    if (bVar1) goto LAB_14ea6d082;
  }
  else {
    if (local_res20.Ticks <= local_38.LowerBound.Value.Ticks) {
      if ((local_res20.Ticks < local_38.LowerBound.Value.Ticks) ||
         (local_38.LowerBound.Type.Value != '\x01')) {
        pFVar5 = &local_50;
        TVar3.Value = '\x01';
      }
      else {
        pFVar5 = &local_38.LowerBound.Value;
      }
      goto LAB_14ea6d018;
    }
    pFVar5 = &local_38.LowerBound.Value;
  }
  if ((local_38.LowerBound.Type.Value != '\x02') &&
     (pFVar5->Ticks != local_38.LowerBound.Value.Ticks)) goto LAB_14ea6d082;
  local_48 = 1;
  local_40.Ticks = local_res20.Ticks;
  TVar3.Value = local_38.UpperBound.Type.Value;
  if (local_38.UpperBound.Type.Value == '\x02') {
    pFVar5 = &local_38.UpperBound.Value;
LAB_14ea6d068:
    bVar1 = TVar3.Value != local_38.UpperBound.Type.Value;
    local_38.UpperBound.Type.Value = TVar3.Value;
    if (bVar1) goto LAB_14ea6d082;
  }
  else {
    if (local_38.UpperBound.Value.Ticks <= local_res20.Ticks) {
      if ((local_38.UpperBound.Value.Ticks < local_res20.Ticks) ||
         (local_38.UpperBound.Type.Value != '\x01')) {
        pFVar5 = &local_40;
        TVar3.Value = '\x01';
      }
      else {
        pFVar5 = &local_38.UpperBound.Value;
      }
      goto LAB_14ea6d068;
    }
    pFVar5 = &local_38.UpperBound.Value;
  }
  if ((local_38.UpperBound.Type.Value == '\x02') ||
     (pFVar5->Ticks == local_38.UpperBound.Value.Ticks)) {
    UE::MovieSceneMediaPlayerUtils::SetPlayerPlaybackTimeRange(this->MediaPlayer,&local_38);
  }
LAB_14ea6d082:
  UMediaPlayer::SetRate(this->MediaPlayer,0.0);
  UMediaPlayer::Seek(this->MediaPlayer,&local_res20);
  (this->SeekOnOpenTime).Ticks = -0x8000000000000000;
  return;
}

// Initialize @ 14ea6d240

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMovieSceneMediaData::Initialize(FMovieSceneMediaData *this,bool param_1)

{
  UMediaTexture *this_00;
  TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
  *pTVar1;
  TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
  local_18;
  
  if (param_1) {
    this_00 = GetProxyMediaTexture(this);
    if (this_00 != (UMediaTexture *)0x0) {
      pTVar1 = TransferSampleQueue(this,&local_18);
      UMediaTexture::SetMediaPlayer(this_00,this->MediaPlayer,pTVar1);
    }
    return;
  }
  StopUsingProxyMediaTexture(this);
  return;
}

// SeekOnOpen @ 14ea6ef50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMovieSceneMediaData::SeekOnOpen(FMovieSceneMediaData *this,FTimespan param_1)

{
  (this->SeekOnOpenTime).Ticks = param_1.Ticks;
  return;
}

// Setup @ 14ea6fb90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMovieSceneMediaData::Setup
          (FMovieSceneMediaData *this,TSharedPtr<FMovieSceneMediaPlayerStore,1> *param_1,
          UObject *param_2,UMediaPlayer *param_3,UObject *param_4,int param_5,int param_6)

{
  FMovieSceneMediaPlaybackParams local_38;
  
  local_38.bIsLooping = false;
  local_38._1_7_ = 0;
  local_38.SectionTimeRange.LowerBound.Type.Value = '\x02';
  local_38.SectionTimeRange.LowerBound._1_7_ = 0;
  local_38.SectionTimeRange.LowerBound.Value.Ticks = 0;
  local_38.SectionTimeRange.UpperBound.Type.Value = '\x02';
  local_38.SectionTimeRange.UpperBound._1_7_ = 0;
  local_38.SectionTimeRange.UpperBound.Value.Ticks = 0;
  local_38.FrameDuration.Ticks = 0;
  Setup(this,param_1,param_2,param_3,param_4,param_5,param_6,&local_38);
  return;
}

// Setup @ 14ea6fc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FMovieSceneMediaData::Setup
          (FMovieSceneMediaData *this,TSharedPtr<FMovieSceneMediaPlayerStore,1> *param_1,
          UObject *param_2,UMediaPlayer *param_3,UObject *param_4,int param_5,int param_6,
          FMovieSceneMediaPlaybackParams *param_7)

{
  atomic<int> *paVar1;
  TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
  *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMediaPlayerFacade *this_00;
  code *pcVar5;
  long64 lVar6;
  undefined7 uVar7;
  TEnumAsByte<ERangeBoundTypes::Type> TVar8;
  undefined7 uVar9;
  bool bVar10;
  FObjectKey FVar11;
  FMovieSceneMediaPlayerStore *pFVar12;
  UMediaPlayer **ppUVar13;
  FName FVar14;
  UClass *pUVar15;
  UPackage *pUVar16;
  FUObjectItem *this_01;
  TReferenceControllerBase<1> *pTVar17;
  TSharedRef<FMediaPlayerFacade,1> *pTVar18;
  longlong *plVar19;
  uint uVar20;
  TReferenceControllerBase<1> *pTVar21;
  uint uVar22;
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *pTVar23;
  uint uVar24;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  FObjectKey local_148;
  FWeakObjectPtr local_140;
  FWeakObjectPtr local_138;
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *local_130;
  FSharedReferencer<1> FStack_128;
  undefined8 local_120;
  undefined8 local_118;
  UObject *local_110;
  UObject *local_108;
  TSharedRef<TMediaSampleSink<IMediaTextureSample>,1> local_100;
  undefined1 local_f0 [16];
  TSharedRef<FMediaPlayerFacade,1> local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  if ((this->MediaPlayer != (UMediaPlayer *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!MediaPlayer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaCompositing\\Source\\MediaCompositing\\Private\\MovieScene\\MovieSceneMediaData.cpp"
                          ,0x45,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar21 = (TReferenceControllerBase<1> *)0x0;
  if (param_3 == (UMediaPlayer *)0x0) {
    param_3 = this->MediaPlayer;
    if (param_3 != (UMediaPlayer *)0x0) goto LAB_14ea6ff1b;
    (this->MediaPlayerStoreWeak).Object = param_1->Object;
    pTVar17 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar17 != (this->MediaPlayerStoreWeak).WeakReferenceCount.ReferenceController) {
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->MediaPlayerStoreWeak).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      (this->MediaPlayerStoreWeak).WeakReferenceCount.ReferenceController = pTVar17;
    }
    local_120 = 0;
    if (param_2 == (UObject *)0x0) {
      FVar11.ObjectIndex = 0;
      FVar11.ObjectSerialNumber = 0;
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      local_140.ObjectIndex = 0;
      local_140.ObjectSerialNumber = 0;
      local_110 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_110);
      FVar11 = (FObjectKey)local_140;
    }
    this->MediaSection = FVar11;
    uVar20 = 0;
    if (param_1->Object == (FMovieSceneMediaPlayerStore *)0x0) {
      this->MediaPlayer = (UMediaPlayer *)0x0;
    }
    else {
      pFVar12 = TSharedPtr<FMovieSceneMediaPlayerStore,1>::operator->(param_1);
      local_148.ObjectIndex = 0;
      local_148.ObjectSerialNumber = 0;
      uVar22 = uVar20;
      if (param_2 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_2);
        }
        local_138.ObjectIndex = 0;
        local_138.ObjectSerialNumber = 0;
        local_108 = param_2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_2);
        }
        FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_108);
        local_148.ObjectIndex = local_138.ObjectIndex;
        local_148.ObjectSerialNumber = local_138.ObjectSerialNumber;
        FVar11 = local_148;
        uVar20 = local_138.ObjectIndex;
        local_148.ObjectSerialNumber = local_138.ObjectSerialNumber;
        uVar22 = local_148.ObjectSerialNumber;
        local_148 = FVar11;
      }
      ppUVar13 = TMapBase<FObjectKey,UMediaPlayer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>_>
                 ::Find((TMapBase<FObjectKey,UMediaPlayer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>_>
                         *)&pFVar12->MediaPlayers,&local_148);
      if (ppUVar13 == (UMediaPlayer **)0x0) {
        param_3 = (UMediaPlayer *)0x0;
      }
      else {
        param_3 = *ppUVar13;
        if (*(int *)&(pFVar12->MediaPlayers).field_0x8 !=
            *(int *)&(pFVar12->MediaPlayers).field_0x34) {
          uVar24 = uVar20 - uVar22 ^ uVar22 >> 0xd;
          uVar20 = (-0x61c88647 - uVar24) - uVar22 ^ uVar24 << 8;
          uVar22 = (uVar22 - uVar20) - uVar24 ^ uVar20 >> 0xd;
          uVar24 = (uVar24 - uVar22) - uVar20 ^ uVar22 >> 0xc;
          uVar20 = (uVar20 - uVar22) - uVar24 ^ uVar24 << 0x10;
          uVar22 = (uVar22 - uVar20) - uVar24 ^ uVar20 >> 5;
          uVar24 = (uVar24 - uVar22) - uVar20 ^ uVar22 >> 3;
          uVar20 = (uVar20 - uVar24) - uVar22 ^ uVar24 << 10;
          TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
          ::RemoveImpl<FObjectKey>
                    ((TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
                      *)&pFVar12->MediaPlayers,uVar20 >> 0xf ^ (uVar22 - uVar20) - uVar24,&local_148
                    );
        }
      }
      this->MediaPlayer = param_3;
      if (param_3 != (UMediaPlayer *)0x0) goto LAB_14ea6ff1b;
    }
    local_118 = 0;
    FVar14 = (FName)Z_Construct_UClass_UMediaPlayer_NoRegister();
    pUVar15 = (UClass *)GetTransientPackage();
    local_158 = 0;
    FVar14 = MakeUniqueObjectName((UObject *)local_f0,pUVar15,FVar14,None);
    FVar14 = *(FName *)FVar14;
    pUVar16 = GetTransientPackage();
    if (FVar14 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar16,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar15 = Z_Construct_UClass_UMediaPlayer_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar15);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = pUVar16;
    local_c8._16_8_ = FVar14;
    param_3 = (UMediaPlayer *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar19 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar19 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
  }
  else {
    this->bOverrideMediaPlayer = true;
  }
  this->MediaPlayer = param_3;
LAB_14ea6ff1b:
  param_3->PlayOnOpen = false;
  TMulticastDelegateRegistration<void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>::
  AddRaw<FMovieSceneMediaData>
            (&this->MediaPlayer->MediaEvent,(FMovieSceneMediaData *)(local_f0 + 8),
             (pmf_28926db7)this);
  this_01 = FUObjectArray::IndexToObject
                      (&GUObjectArray,*(int *)((longlong)&this->MediaPlayer->_padding_ + 4));
  FUObjectItem::SetRootFlags(this_01,RootSet);
  (this->ProxyMediaTexture).WeakPtr = (FWeakObjectPtr)0x0;
  this->ProxyLayerIndex = param_5;
  this->ProxyTextureIndex = param_6;
  uVar7 = *(undefined7 *)&param_7->field_0x1;
  TVar8.Value = (param_7->SectionTimeRange).LowerBound.Type.Value;
  uVar9 = *(undefined7 *)&(param_7->SectionTimeRange).LowerBound.field_0x1;
  (this->PlaybackParams).bIsLooping = param_7->bIsLooping;
  *(undefined7 *)&(this->PlaybackParams).field_0x1 = uVar7;
  (this->PlaybackParams).SectionTimeRange.LowerBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)TVar8.Value;
  *(undefined7 *)&(this->PlaybackParams).SectionTimeRange.LowerBound.field_0x1 = uVar9;
  TVar8.Value = (param_7->SectionTimeRange).UpperBound.Type.Value;
  uVar7 = *(undefined7 *)&(param_7->SectionTimeRange).UpperBound.field_0x1;
  (this->PlaybackParams).SectionTimeRange.LowerBound.Value.Ticks =
       (param_7->SectionTimeRange).LowerBound.Value.Ticks;
  (this->PlaybackParams).SectionTimeRange.UpperBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)TVar8.Value;
  *(undefined7 *)&(this->PlaybackParams).SectionTimeRange.UpperBound.field_0x1 = uVar7;
  lVar6 = (param_7->FrameDuration).Ticks;
  (this->PlaybackParams).SectionTimeRange.UpperBound.Value.Ticks =
       (param_7->SectionTimeRange).UpperBound.Value.Ticks;
  (this->PlaybackParams).FrameDuration.Ticks = lVar6;
  UpdatePlayerProxy(this,param_4);
  pTVar17 = ::operator_new(0x88);
  if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
    local_130 = ___xmm_00000000000000000000000000000010;
    pTVar23 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)
              &DAT_00000010;
    FStack_128.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar17->SharedReferenceCount = (atomic<int>)0x1;
    pTVar17->WeakReferenceCount = (atomic<int>)0x1;
    pTVar17[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMediaSampleQueue_VIMediaTextureSample__V__TMediaSampleSink_VIMediaTextureSample_______00_SharedPointerInternals__6B_
    ;
    pTVar17[1]._padding_ =
         (longlong)
         &TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
          _vftable__for__TMediaSampleSink<IMediaTextureSample>__;
    *(undefined ***)&pTVar17[3].SharedReferenceCount =
         &TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
          _vftable__for__TMediaSampleSource<IMediaTextureSample>__;
    pTVar17[2]._padding_ = 0;
    pTVar17[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[3]._padding_ = 2;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar17 + 4),4000);
    pTVar23 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)
              (pTVar17 + 1);
    pTVar17[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[7]._padding_ = 0;
    pTVar17[7].SharedReferenceCount = (atomic<int>)0xffffffff;
    *(undefined8 *)&pTVar17[7].WeakReferenceCount = 0;
    if ((pTVar23 ==
         (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
    FStack_128.ReferenceController = pTVar17;
    pTVar21 = pTVar17;
    local_130 = pTVar23;
  }
  pTVar2 = &this->SampleQueue;
  if (pTVar2 != (TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
                 *)&local_130) {
    pTVar2->Object = pTVar23;
    local_130 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0
    ;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SampleQueue).SharedReferenceCount,&FStack_128);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_128.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  pTVar18 = UMediaPlayer::GetPlayerFacade(this->MediaPlayer,&local_e0);
  this_00 = pTVar18->Object;
  if ((pTVar2->Object ==
       (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar23 = pTVar2->Object;
  pTVar21 = (this->SampleQueue).SharedReferenceCount.ReferenceController;
  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pTVar23 ==
       (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_100.Object = (TMediaSampleSink<IMediaTextureSample> *)pTVar23;
  local_100.SharedReferenceCount.ReferenceController = pTVar21;
  FMediaPlayerFacade::AddVideoSampleSink(this_00,&local_100);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.SharedReferenceCount.ReferenceController);
  return;
}

// StartUsingProxyMediaTexture @ 14ea70300

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMovieSceneMediaData::StartUsingProxyMediaTexture(FMovieSceneMediaData *this)

{
  UMediaTexture *this_00;
  TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
  *pTVar1;
  TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
  local_18;
  
  this_00 = GetProxyMediaTexture(this);
  if (this_00 != (UMediaTexture *)0x0) {
    pTVar1 = TransferSampleQueue(this,&local_18);
    UMediaTexture::SetMediaPlayer(this_00,this->MediaPlayer,pTVar1);
  }
  return;
}

// StopUsingProxyMediaTexture @ 14ea70390

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMovieSceneMediaData::StopUsingProxyMediaTexture(FMovieSceneMediaData *this)

{
  UMediaPlayer *pUVar1;
  bool bVar2;
  UMediaTexture *pUVar3;
  UMediaPlayer *pUVar4;
  UObject *this_00;
  UClass *pUVar5;
  longlong *plVar6;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  bVar2 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&this->PlayerProxy,(void *)0x0);
  if ((!bVar2) &&
     (bVar2 = TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>::UEOpEquals
                        (&this->ProxyMediaTexture,(void *)0x0), !bVar2)) {
    pUVar3 = (UMediaTexture *)FWeakObjectPtr::Get(&(this->ProxyMediaTexture).WeakPtr);
    pUVar1 = this->MediaPlayer;
    pUVar4 = UMediaTexture::GetMediaPlayer(pUVar3);
    if (pUVar4 == pUVar1) {
      pUVar3 = (UMediaTexture *)FWeakObjectPtr::Get(&(this->ProxyMediaTexture).WeakPtr);
      UMediaTexture::SetMediaPlayer(pUVar3,(UMediaPlayer *)0x0);
    }
    this_00 = FWeakObjectPtr::Get(&(this->PlayerProxy).WeakPtr);
    if (this_00 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();
      plVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar5);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x40))(plVar6,this->ProxyLayerIndex,this->ProxyTextureIndex);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (this->ProxyMediaTexture).WeakPtr = local_res8;
  }
  return;
}

// TearDown @ 14ea70560

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMovieSceneMediaData::TearDown(FMovieSceneMediaData *this)

{
  UMediaPlayer *pUVar1;
  bool bVar2;
  UMediaTexture *pUVar3;
  UMediaPlayer *pUVar4;
  UObject *this_00;
  UClass *pUVar5;
  longlong *plVar6;
  FWeakObjectPtr FStackX_8;
  undefined8 uStackX_10;
  
  bVar2 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&this->PlayerProxy,(void *)0x0);
  if ((!bVar2) &&
     (bVar2 = TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>::UEOpEquals
                        (&this->ProxyMediaTexture,(void *)0x0), !bVar2)) {
    pUVar3 = (UMediaTexture *)FWeakObjectPtr::Get(&(this->ProxyMediaTexture).WeakPtr);
    pUVar1 = this->MediaPlayer;
    pUVar4 = UMediaTexture::GetMediaPlayer(pUVar3);
    if (pUVar4 == pUVar1) {
      pUVar3 = (UMediaTexture *)FWeakObjectPtr::Get(&(this->ProxyMediaTexture).WeakPtr);
      UMediaTexture::SetMediaPlayer(pUVar3,(UMediaPlayer *)0x0);
    }
    this_00 = FWeakObjectPtr::Get(&(this->PlayerProxy).WeakPtr);
    if (this_00 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();
      plVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar5);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x40))(plVar6,this->ProxyLayerIndex,this->ProxyTextureIndex);
      }
    }
    FStackX_8.ObjectIndex = 0;
    FStackX_8.ObjectSerialNumber = 0;
    uStackX_10 = 0;
    FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
    (this->ProxyMediaTexture).WeakPtr = FStackX_8;
  }
  return;
}

// TransferSampleQueue @ 14ea705e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1> *
__thiscall
FMovieSceneMediaData::TransferSampleQueue
          (FMovieSceneMediaData *this,
          TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  __return_storage_ptr__->Object = (this->SampleQueue).Object;
  pTVar1 = (this->SampleQueue).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SampleQueue !=
      (TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1> *
      )&local_18) {
    (this->SampleQueue).Object =
         (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SampleQueue).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return __return_storage_ptr__;
}

// UpdatePlayerProxy @ 14ea70c30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMovieSceneMediaData::UpdatePlayerProxy(FMovieSceneMediaData *this,UObject *param_1)

{
  UClass *this_00;
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UObject *local_res8;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->PlayerProxy).WeakPtr);
  if ((param_1 != (UObject *)0x0) &&
     (this_00 = *(UClass **)&param_1->field_0x10, this_00 != (UClass *)0x0)) {
    pUVar3 = Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();
    bVar1 = UClass::ImplementsInterface(this_00,pUVar3);
    if (bVar1) {
      local_res8 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=(&(this->PlayerProxy).WeakPtr,(FObjectPtr)&local_res8);
      goto LAB_14ea70ca9;
    }
  }
  (this->PlayerProxy).WeakPtr = (FWeakObjectPtr)0x0;
LAB_14ea70ca9:
  bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&this->PlayerProxy,(void *)0x0);
  if ((!bVar1) &&
     (bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        (&this->PlayerProxy,pUVar2), bVar1)) {
    return;
  }
  (this->ProxyMediaTexture).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

