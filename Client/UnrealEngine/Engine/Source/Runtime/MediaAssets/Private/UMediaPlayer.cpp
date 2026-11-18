// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 183

// StaticClass @ 146c15cb0

UClass * __cdecl UMediaPlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaPlayer",
               &Z_Registration_Info_UClass_UMediaPlayer.InnerSingleton,
               StaticRegisterNativesUMediaPlayer,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaPlayer>,InternalVTableHelperCtorCaller<UMediaPlayer>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlayer.InnerSingleton;
}

// UMediaPlayer @ 146c1d140

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaPlayer * __thiscall UMediaPlayer::UMediaPlayer(UMediaPlayer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->MediaEvent).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  *(undefined8 *)&this->OnEndReached = 0;
  *(undefined8 *)&(this->OnEndReached).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndReached).field_0x10 = 0;
  *(undefined8 *)&this->OnMediaClosed = 0;
  *(undefined8 *)&(this->OnMediaClosed).field_0x8 = 0;
  *(undefined8 *)&(this->OnMediaClosed).field_0x10 = 0;
  *(undefined8 *)&this->OnMediaOpened = 0;
  *(undefined8 *)&(this->OnMediaOpened).field_0x8 = 0;
  *(undefined8 *)&(this->OnMediaOpened).field_0x10 = 0;
  *(undefined8 *)&this->OnMediaOpenFailed = 0;
  *(undefined8 *)&(this->OnMediaOpenFailed).field_0x8 = 0;
  *(undefined8 *)&(this->OnMediaOpenFailed).field_0x10 = 0;
  *(undefined8 *)&this->OnPlaybackResumed = 0;
  *(undefined8 *)&(this->OnPlaybackResumed).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlaybackResumed).field_0x10 = 0;
  *(undefined8 *)&this->OnPlaybackSuspended = 0;
  *(undefined8 *)&(this->OnPlaybackSuspended).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlaybackSuspended).field_0x10 = 0;
  *(undefined8 *)&this->OnSeekCompleted = 0;
  *(undefined8 *)&(this->OnSeekCompleted).field_0x8 = 0;
  *(undefined8 *)&(this->OnSeekCompleted).field_0x10 = 0;
  *(undefined8 *)&this->OnTracksChanged = 0;
  *(undefined8 *)&(this->OnTracksChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTracksChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnMetadataChanged = 0;
  *(undefined8 *)&(this->OnMetadataChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnMetadataChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnBufferingStart = 0;
  *(undefined8 *)&(this->OnBufferingStart).field_0x8 = 0;
  *(undefined8 *)&(this->OnBufferingStart).field_0x10 = 0;
  *(undefined8 *)&this->OnBufferingCompleted = 0;
  *(undefined8 *)&(this->OnBufferingCompleted).field_0x8 = 0;
  *(undefined8 *)&(this->OnBufferingCompleted).field_0x10 = 0;
  (this->CacheAhead).Ticks = 0;
  (this->CacheBehind).Ticks = 0;
  (this->CacheBehindGame).Ticks = 0;
  (this->Playlist).field0_0x0.DebugPtr = (UMediaPlaylist *)0x0;
  (this->TimeDelay).Ticks = 0;
  *(undefined8 *)&this->MediaEvent = 0;
  *(undefined8 *)&(this->MediaEvent).field_0x8 = 0;
  *(undefined8 *)&(this->MediaEvent).field_0x10 = 0;
  (this->PlayerFacade).Object = (FMediaPlayerFacade *)0x0;
  (this->PlayerFacade).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->PlayerGuid).A = 0;
  (this->PlayerGuid).B = 0;
  (this->PlayerGuid).C = 0;
  (this->PlayerGuid).D = 0;
  (this->Proxy).Object = (FMediaPlayerProxy *)0x0;
  (this->Proxy).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMediaPlayer @ 146c1d2b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaPlayer * __thiscall UMediaPlayer::UMediaPlayer(UMediaPlayer *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  bool bVar8;
  FGuid *pFVar9;
  FMediaPlayerFacade *this_00;
  UMediaPlayer *pUVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  FWeakObjectPtr local_res8;
  UMediaPlayer *local_res18;
  TRawPtrProxy<FMediaPlayerFacade> local_res20;
  undefined1 local_58 [24];
  ulonglong uStack_40;
  code *local_38;
  ulonglong uStack_30;
  FGuid local_28;
  
  UObject::UObject((UObject *)this,param_1);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = __real_412e848100000000;
  *(undefined8 *)&this->OnEndReached = 0;
  *(undefined8 *)&(this->OnEndReached).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndReached).field_0x10 = 0;
  *(undefined8 *)&this->OnMediaClosed = 0;
  *(undefined8 *)&(this->OnMediaClosed).field_0x8 = 0;
  *(undefined8 *)&(this->OnMediaClosed).field_0x10 = 0;
  *(undefined8 *)&this->OnMediaOpened = 0;
  *(undefined8 *)&(this->OnMediaOpened).field_0x8 = 0;
  *(undefined8 *)&(this->OnMediaOpened).field_0x10 = 0;
  *(undefined8 *)&this->OnMediaOpenFailed = 0;
  *(undefined8 *)&(this->OnMediaOpenFailed).field_0x8 = 0;
  *(undefined8 *)&(this->OnMediaOpenFailed).field_0x10 = 0;
  *(undefined8 *)&this->OnPlaybackResumed = 0;
  *(undefined8 *)&(this->OnPlaybackResumed).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlaybackResumed).field_0x10 = 0;
  *(undefined8 *)&this->OnPlaybackSuspended = 0;
  *(undefined8 *)&(this->OnPlaybackSuspended).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlaybackSuspended).field_0x10 = 0;
  *(undefined8 *)&this->OnSeekCompleted = 0;
  *(undefined8 *)&(this->OnSeekCompleted).field_0x8 = 0;
  *(undefined8 *)&(this->OnSeekCompleted).field_0x10 = 0;
  *(undefined8 *)&this->OnTracksChanged = 0;
  *(undefined8 *)&(this->OnTracksChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTracksChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnMetadataChanged = 0;
  *(undefined8 *)&(this->OnMetadataChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnMetadataChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnBufferingStart = 0;
  *(undefined8 *)&(this->OnBufferingStart).field_0x8 = 0;
  *(undefined8 *)&(this->OnBufferingStart).field_0x10 = 0;
  *(undefined8 *)&this->OnBufferingCompleted = 0;
  *(undefined8 *)&(this->OnBufferingCompleted).field_0x8 = 0;
  *(undefined8 *)&(this->OnBufferingCompleted).field_0x10 = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  auVar11 = roundpd(auVar11,auVar11,1);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = __real_417c9c3808000000;
  (this->CacheAhead).Ticks = (longlong)auVar11._0_8_;
  auVar12 = roundpd(auVar12,auVar12,1);
  (this->CacheBehind).Ticks = (longlong)auVar12._0_8_;
  (this->CacheBehindGame).Ticks = (longlong)auVar11._0_8_;
  this->Shuffle = 0;
  this->Loop = 0;
  (this->Playlist).field0_0x0.DebugPtr = (UMediaPlaylist *)0x0;
  (this->TimeDelay).Ticks = 0;
  this->HorizontalFieldOfView = 90.0;
  this->VerticalFieldOfView = 60.0;
  this->PlayOnOpen = true;
  this->PlaylistIndex = -1;
  dVar7 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->ViewRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ViewRotation).Yaw = dVar7;
  (this->ViewRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)&this->MediaEvent = 0;
  *(undefined8 *)&(this->MediaEvent).field_0x8 = 0;
  *(undefined8 *)&(this->MediaEvent).field_0x10 = 0;
  *(undefined8 *)&(this->MediaEvent).field_0x18 = 2;
  (this->PlayerFacade).Object = (FMediaPlayerFacade *)0x0;
  (this->PlayerFacade).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  bVar8 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar8) {
    local_58._16_8_ = 0;
    pFVar9 = (FGuid *)(local_58 + 0x10);
    uStack_40 = 0;
  }
  else {
    pFVar9 = FGuid::NewGuid(&local_28);
  }
  uVar3 = pFVar9->A;
  uVar4 = pFVar9->B;
  uVar5 = pFVar9->C;
  uVar6 = pFVar9->D;
  this->PlayOnNext = false;
  this->RegisteredWithMediaModule = false;
  (this->PlayerGuid).A = uVar3;
  (this->PlayerGuid).B = uVar4;
  (this->PlayerGuid).C = uVar5;
  (this->PlayerGuid).D = uVar6;
  (this->Proxy).Object = (FMediaPlayerProxy *)0x0;
  (this->Proxy).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = ::operator_new(0x440);
    if (this_00 == (FMediaPlayerFacade *)0x0) {
      local_res20.Object = (FMediaPlayerFacade *)0x0;
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
      local_res20.Object =
           FMediaPlayerFacade::FMediaPlayerFacade
                     (this_00,(TWeakObjectPtr<UMediaPlayer,FWeakObjectPtr>)local_res8);
      if ((((local_res20.Object != (FMediaPlayerFacade *)0x0) &&
           ((local_res20.Object)->_padding_ != 0)) && ((local_res20.Object)->_padding_ != 0)) &&
         (0 < *(int *)((local_res20.Object)->_padding_ + 8))) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          pUVar10 = (UMediaPlayer *)(*pcVar2)();
          return pUVar10;
        }
      }
    }
    TSharedPtr<FMediaPlayerFacade,1>::operator=<FMediaPlayerFacade>
              (&this->PlayerFacade,&local_res20);
    if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        pUVar10 = (UMediaPlayer *)(*pcVar2)();
        return pUVar10;
      }
    }
    local_58._16_8_ = HandlePlayerMediaEvent;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    local_38 = HandlePlayerMediaEvent;
    uStack_30 = uStack_40;
    TMulticastDelegateRegistration<void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>::
    AddUObject<UMediaPlayer>
              (&((this->PlayerFacade).Object)->MediaEvent,(UMediaPlayer *)local_58,
               (pmf_5de57f8c *)this);
  }
  return this;
}

// ~UMediaPlayer @ 146c1e8a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaPlayer::~UMediaPlayer(UMediaPlayer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Proxy).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PlayerFacade).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->MediaEvent).field_0x8,
             *(int *)&(this->MediaEvent).field_0x10);
  pvVar1 = *(void **)&(this->MediaEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MediaEvent);
  pvVar1 = *(void **)&(this->OnBufferingCompleted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBufferingCompleted);
  pvVar1 = *(void **)&(this->OnBufferingStart).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBufferingStart);
  pvVar1 = *(void **)&(this->OnMetadataChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMetadataChanged);
  pvVar1 = *(void **)&(this->OnTracksChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTracksChanged);
  pvVar1 = *(void **)&(this->OnSeekCompleted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSeekCompleted);
  pvVar1 = *(void **)&(this->OnPlaybackSuspended).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlaybackSuspended);
  pvVar1 = *(void **)&(this->OnPlaybackResumed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlaybackResumed);
  pvVar1 = *(void **)&(this->OnMediaOpenFailed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMediaOpenFailed);
  pvVar1 = *(void **)&(this->OnMediaOpened).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMediaOpened);
  pvVar1 = *(void **)&(this->OnMediaClosed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMediaClosed);
  pvVar1 = *(void **)&(this->OnEndReached).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndReached);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 146c20ad0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaPlayer::BeginDestroy(UMediaPlayer *this)

{
  CleanUpBeforeDestroy(this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CanBeInCluster @ 146c20ff0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::CanBeInCluster(UMediaPlayer *this)

{
  return false;
}

// CanPause @ 146c21010

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::CanPause(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::CanPause((this->PlayerFacade).Object);
  return bVar2;
}

// CanPlaySource @ 146c21060

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::CanPlaySource(UMediaPlayer *this,UMediaSource *param_1)

{
  FMediaPlayerFacade *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  if ((param_1 == (UMediaSource *)0x0) ||
     (cVar2 = (**(code **)(param_1->_padding_ + 0x2b8))(param_1), cVar2 == '\0')) {
    return false;
  }
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = (FName)this->_padding_;
    ::FName::ToString(&local_res18,&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  this_00 = (this->PlayerFacade).Object;
  pFVar5 = (FString *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1,local_18);
  bVar3 = FMediaPlayerFacade::CanPlayUrl(this_00,pFVar5,(IMediaOptions *)&param_1->_padding_);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return bVar3;
}

// CanPlayUrl @ 146c211c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::CanPlayUrl(UMediaPlayer *this,FString *param_1)

{
  FMediaPlayerFacade *this_00;
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *this_01;
  UObject *pUVar5;
  FName local_res10;
  FString local_18;
  
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1->Data).ArrayNum < 2) {
    return false;
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  this_00 = (this->PlayerFacade).Object;
  this_01 = UMediaSource::StaticClass();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  pUVar1 = (this_01->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar5 = pUVar1 + 1;
  if (pUVar1 == (UObject *)0x0) {
    pUVar5 = (UObject *)0x0;
  }
  bVar3 = FMediaPlayerFacade::CanPlayUrl(this_00,param_1,(IMediaOptions *)pUVar5);
  return bVar3;
}

// CleanUpBeforeDestroy @ 146c21360

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaPlayer::CleanUpBeforeDestroy(UMediaPlayer *this)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMediaPlayerFacade *pFVar3;
  FName FVar4;
  bool bVar5;
  FModuleManager *this_00;
  IModuleInterface *pIVar6;
  IModuleInterface *pIVar7;
  longlong *plVar8;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  FMediaPlayerFacade *local_28;
  TReferenceControllerBase<1> *local_20;
  
  FVar4 = MediaModuleName;
  if ((this->_padding_ & 0x10) != 0) {
    return;
  }
  this_00 = FModuleManager::Get();
  pIVar6 = FModuleManager::LoadModule(this_00,FVar4,None);
  if (pIVar6 != (IModuleInterface *)0x0) {
    pIVar7 = FModuleManager::GetModulePtr_Internal(MediaModuleName);
    if (pIVar7 != (IModuleInterface *)0x0) {
      plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0xa8))(pIVar7);
      pcVar1 = *(code **)(*plVar8 + 0x18);
      if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pTVar2 = (this->PlayerFacade).SharedReferenceCount.ReferenceController;
      pFVar3 = (this->PlayerFacade).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 == (FMediaPlayerFacade *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28 = pFVar3;
      local_20 = pTVar2;
      (*pcVar1)(plVar8,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      this->RegisteredWithMediaModule = false;
    }
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar6 + 0xb0))(pIVar6);
    pcVar1 = *(code **)(*plVar8 + 8);
    if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar2 = (this->PlayerFacade).SharedReferenceCount.ReferenceController;
    pFVar3 = (this->PlayerFacade).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 == (FMediaPlayerFacade *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_38 = (longlong *)0x0;
    }
    else {
      local_38 = &pFVar3->_padding_;
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_30 = pTVar2;
    (*pcVar1)(plVar8,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMediaPlayerFacade::Close((this->PlayerFacade).Object);
  return;
}

// Close @ 146c219f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMediaPlayer::Close(UMediaPlayer *this)

{
  UMediaPlaylist *pUVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  FName local_res8 [4];
  FString local_18;
  
  if (6 < (byte)LogMediaAssets._0_1_) {
    local_res8[0] = (FName)this->_padding_;
    ::FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMediaPlayerFacade::Close((this->PlayerFacade).Object);
  pUVar1 = (this->Playlist).field0_0x0.DebugPtr;
  if ((pUVar1 != (UMediaPlaylist *)0x0) &&
     (pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar1->_padding_ + 4)),
     ((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0)) {
    pFVar4 = FUObjectArray::IndexToObject
                       (&GUObjectArray,
                        *(int *)((longlong)&((this->Playlist).field0_0x0.DebugPtr)->_padding_ + 4));
    FUObjectItem::ClearRootFlags(pFVar4,RootSet);
  }
  (this->Playlist).field0_0x0.DebugPtr = (UMediaPlaylist *)0x0;
  this->PlaylistIndex = -1;
  this->PlayOnNext = false;
  return;
}

// CreateProxyData @ 146c259c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TSharedPtr<Audio::IProxyData,1> * __thiscall
UMediaPlayer::CreateProxyData
          (UMediaPlayer *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,
          FProxyDataInitParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<Audio::IProxyData,1> *pTVar4;
  FMediaPlayerFacade *pFVar5;
  FMediaPlayerFacade *local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    pTVar3 = ::operator_new(0x38);
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      pTVar3 = (TReferenceControllerBase<1> *)0x0;
      local_18 = ___xmm_00000000000000000000000000000010;
      pFVar5 = (FMediaPlayerFacade *)&DAT_00000010;
      FStack_10.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFMediaPlayerProxy___00_SharedPointerInternals__6B_;
      FMediaPlayerProxy::FMediaPlayerProxy
                ((FMediaPlayerProxy *)(pTVar3 + 1),(UMediaPlayer *)&this[-1].PlayerGuid);
      pFVar5 = (FMediaPlayerFacade *)(pTVar3 + 1);
      if ((pFVar5 == (FMediaPlayerFacade *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar1)();
        return pTVar4;
      }
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      FStack_10.ReferenceController = pTVar3;
      local_18 = pFVar5;
    }
    if (&this->PlayerFacade != (TSharedPtr<FMediaPlayerFacade,1> *)&local_18) {
      (this->PlayerFacade).Object = pFVar5;
      local_18 = (FMediaPlayerFacade *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PlayerFacade).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  __return_storage_ptr__->Object = (IProxyData *)(this->PlayerFacade).Object;
  pTVar3 = (this->PlayerFacade).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// EnsurePlaylist @ 146c26c20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMediaPlayer::EnsurePlaylist(UMediaPlayer *this)

{
  UMediaPlaylist *pUVar1;
  UPackage *pUVar2;
  UMediaPlaylist *pUVar3;
  FUObjectItem *pFVar4;
  
  if ((this->Playlist).field0_0x0.DebugPtr == (UMediaPlaylist *)0x0) {
    pUVar2 = GetTransientPackage();
    pUVar3 = NewObject<UMediaPlaylist>
                       ((UObject *)pUVar2,(FName)0x0,RF_Transient|RF_Transactional,(UObject *)0x0,
                        false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar1 = (this->Playlist).field0_0x0.DebugPtr;
    if (((pUVar1 != (UMediaPlaylist *)0x0) && (pUVar1 != pUVar3)) &&
       (pFVar4 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&pUVar1->_padding_ + 4)),
       ((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0)) {
      pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,
                          *(int *)((longlong)&((this->Playlist).field0_0x0.DebugPtr)->_padding_ + 4)
                         );
      FUObjectItem::ClearRootFlags(pFVar4,RootSet);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UMediaPlaylist *)0x0)) {
      (this->Playlist).field0_0x0.DebugPtr = pUVar3;
      if (pUVar3 == (UMediaPlaylist *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      (this->Playlist).field0_0x0.DebugPtr = pUVar3;
    }
    if (*(int *)((longlong)&this->_padding_ + 4) <= GUObjectArray.ObjLastNonGCIndex) {
      pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar4,RootSet);
    }
  }
  return;
}

// GetAudioTrackChannels @ 146c28010

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall UMediaPlayer::GetAudioTrackChannels(UMediaPlayer *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar4 = FMediaPlayerFacade::GetAudioTrackChannels((this->PlayerFacade).Object,param_1,param_2);
  return uVar4;
}

// GetAudioTrackSampleRate @ 146c28080

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall UMediaPlayer::GetAudioTrackSampleRate(UMediaPlayer *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar4 = FMediaPlayerFacade::GetAudioTrackSampleRate((this->PlayerFacade).Object,param_1,param_2);
  return uVar4;
}

// GetAudioTrackType @ 146c280f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall
UMediaPlayer::GetAudioTrackType
          (UMediaPlayer *this,FString *__return_storage_ptr__,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  FMediaPlayerFacade::GetAudioTrackType
            ((this->PlayerFacade).Object,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetDesc @ 146c28890

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall UMediaPlayer::GetDesc(UMediaPlayer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"UMediaPlayer");
  return __return_storage_ptr__;
}

// GetDesiredPlayerName @ 146c28940

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FName __thiscall UMediaPlayer::GetDesiredPlayerName(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName in_RDX;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  *(FName *)in_RDX = ((this->PlayerFacade).Object)->DesiredPlayerName;
  return in_RDX;
}

// GetDisplayTime @ 146c28a00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FTimespan __thiscall UMediaPlayer::GetDisplayTime(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  FTimespan FVar3;
  longlong *in_RDX;
  FMediaTimeStamp local_18;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Ticks = (*pcVar1)();
      return (FTimespan)FVar3.Ticks;
    }
  }
  FMediaPlayerFacade::GetDisplayTimeStamp((this->PlayerFacade).Object,&local_18);
  FVar3.Ticks = 0;
  if (local_18.Time.Ticks != -0x8000000000000000) {
    FVar3.Ticks = local_18.Time.Ticks;
  }
  *in_RDX = FVar3.Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetDisplayTimeStamp @ 146c28a80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaTimeStampInfo * __thiscall UMediaPlayer::GetDisplayTimeStamp(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UMediaTimeStampInfo *pUVar4;
  FMediaTimeStamp local_18;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UMediaTimeStampInfo>(pUVar3);
  if (pUVar4 != (UMediaTimeStampInfo *)0x0) {
    if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMediaTimeStampInfo *)(*pcVar1)();
        return pUVar4;
      }
    }
    FMediaPlayerFacade::GetDisplayTimeStamp((this->PlayerFacade).Object,&local_18);
    (pUVar4->Time).Ticks = local_18.Time.Ticks;
    pUVar4->SequenceIndex = CONCAT44(local_18.SequenceIndex,local_18.LoopIndex);
  }
  return pUVar4;
}

// GetDuration @ 146c28b20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FTimespan __thiscall UMediaPlayer::GetDuration(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  FTimespan FVar3;
  long64 in_RDX;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Ticks = (*pcVar1)();
      return (FTimespan)FVar3.Ticks;
    }
  }
  FMediaPlayerFacade::GetDuration((this->PlayerFacade).Object);
  return (FTimespan)in_RDX;
}

// GetHorizontalFieldOfView @ 146c28cd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall UMediaPlayer::GetHorizontalFieldOfView(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float local_res8 [2];
  float local_res10 [6];
  
  local_res8[0] = 0.0;
  local_res10[0] = 0.0;
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  bVar2 = FMediaPlayerFacade::GetViewField((this->PlayerFacade).Object,local_res8,local_res10);
  if (!bVar2) {
    return 0.0;
  }
  return local_res8[0];
}

// GetMediaInfo @ 146c28da0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FVariant * __thiscall
UMediaPlayer::GetMediaInfo(UMediaPlayer *this,FVariant *__return_storage_ptr__,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  FVariant *pFVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FVariant *)(*pcVar1)();
      return pFVar3;
    }
  }
  FMediaPlayerFacade::GetMediaInfo((this->PlayerFacade).Object,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetMediaMetadata @ 146c28e20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TSharedPtr<TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>,1>
* __thiscall
UMediaPlayer::GetMediaMetadata
          (UMediaPlayer *this,
          TSharedPtr<TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>,1>
  *pTVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>,1>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  FMediaPlayerFacade::GetMediaMetadata((this->PlayerFacade).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMediaMetadataItems @ 146c28e90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
* __thiscall
UMediaPlayer::GetMediaMetadataItems
          (UMediaPlayer *this,
          TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  double dVar8;
  ForAnyElementType FVar9;
  float fVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
  *pTVar15;
  FMediaMetadataItemBPT *pFVar16;
  undefined8 *puVar17;
  EVariantTypes *pEVar18;
  FString *pFVar19;
  byte bVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  undefined7 uVar24;
  char *pcVar23;
  size_t sVar25;
  FScriptContainerElement *this_00;
  longlong *plVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  undefined1 *puVar30;
  uint *puVar31;
  int iVar32;
  longlong *plVar33;
  undefined1 local_res8 [8];
  TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
  *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ushort local_838 [2];
  ushort local_834 [2];
  undefined1 local_830 [8];
  FMediaMetadataItemBPT local_828;
  float local_7e8;
  uint local_7e4;
  uint local_7e0 [2];
  ForAnyElementType local_7d8;
  undefined8 local_7d0;
  FVariant local_7c8;
  ForAnyElementType local_7b0;
  undefined8 local_7a8;
  ulong64 local_7a0;
  int local_798;
  uint uStack_794;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_790;
  uint local_788;
  uint uStack_784;
  uint uStack_780;
  undefined4 uStack_77c;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>
  *local_6f8;
  undefined8 uStack_6f0;
  TBitArray<FDefaultBitArrayAllocator> *local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  int iStack_6d0;
  undefined4 uStack_6cc;
  longlong *local_6c8;
  int local_6c0;
  undefined1 local_6bc [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6a8;
  undefined8 uStack_688;
  TSharedPtr<TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>,1>
  local_680;
  longlong local_670;
  ForAnyElementType *local_668;
  FMemoryReader local_658;
  FMemoryReader local_5a8;
  FMemoryReader local_4f8;
  FMemoryReader local_448;
  FMemoryReader local_398;
  FMemoryReader local_2e8;
  FMemoryReader local_238;
  FMemoryReader local_188;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>
  *local_a8;
  undefined8 uStack_a0;
  TBitArray<FDefaultBitArrayAllocator> *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_5c;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  iVar29 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_res10 = (TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
                 *)__return_storage_ptr__;
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pTVar15 = (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
               *)(*pcVar7)();
    return pTVar15;
  }
  FMediaPlayerFacade::GetMediaMetadata((this->PlayerFacade).Object,&local_680);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_680.SharedReferenceCount.ReferenceController);
  if (local_680.Object !=
      (TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>
       *)0x0) {
    iVar14 = *(int *)&(local_680.Object)->field_0x28;
    uVar13 = 1;
    local_6d8._0_4_ = 0;
    puVar1 = &(local_680.Object)->field_0x10;
    uStack_6e0._4_4_ = (int)local_6d8;
    if (iVar14 != 0) {
      puVar31 = *(uint **)&(local_680.Object)->field_0x20;
      if (*(uint **)&(local_680.Object)->field_0x20 == (uint *)0x0) {
        puVar31 = (uint *)puVar1;
      }
      uVar3 = *puVar31;
      local_6d8._0_4_ = 0;
      iVar29 = 0;
      while (uVar3 == 0) {
        lVar21 = (longlong)iVar29;
        local_6d8._0_4_ = (int)local_6d8 + 0x20;
        iVar29 = iVar29 + 1;
        uStack_6e0._4_4_ = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar29) goto LAB_146c28fe0;
        uVar3 = puVar31[lVar21 + 1];
      }
      uVar13 = -uVar3 & uVar3;
      uVar2 = (ulonglong)uVar13 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_6c0 = (int)lVar21;
      uStack_6e0._4_4_ = local_6c0 + -1 + (int)local_6d8;
      if (iVar14 < uStack_6e0._4_4_) {
        uStack_6e0._4_4_ = iVar14;
      }
    }
LAB_146c28fe0:
    uVar3 = *(uint *)&(local_680.Object)->field_0x28;
    bVar20 = (byte)uVar3 & 0x1f;
    iStack_6d0 = *(int *)&(local_680.Object)->field_0x8 - *(int *)&(local_680.Object)->field_0x34;
    uVar28 = uVar3 & 0xffffffe0;
    iVar32 = (int)uVar3 >> 5;
    uStack_794 = 1 << bVar20;
    uVar27 = -1 << bVar20;
    local_6f8 = local_680.Object;
    uStack_6f0 = CONCAT44(uVar13,iVar29);
    uStack_6e0._0_4_ = 0xffffffff;
    local_6d8._4_4_ = local_5c;
    local_6bc._12_8_ = local_680.Object;
    TStack_6a8._padding_ = uStack_6f0;
    uStack_688 = CONCAT44(uStack_6cc,iStack_6d0);
    TStack_6a8.UnvisitedBitMask = 0xffffffff;
    TStack_6a8.CurrentBitIndex = uStack_6e0._4_4_;
    TStack_6a8.BaseBitIndex = (int)local_6d8;
    TStack_6a8._28_4_ = local_5c;
    local_798 = iVar32;
    pTStack_790 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    local_788 = uVar27;
    uStack_784 = uVar3;
    uStack_780 = uVar28;
    TStack_6a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar3 < 0) || (iVar14 < (int)uVar3)) &&
       (local_6e8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
       bVar12 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      pTVar15 = (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
                 *)(*pcVar7)();
      return pTVar15;
    }
    uVar13 = *(uint *)&(local_680.Object)->field_0x28;
    if (uVar3 != uVar13) {
      puVar30 = *(undefined1 **)&(local_680.Object)->field_0x20;
      if (*(undefined1 **)&(local_680.Object)->field_0x20 == (undefined1 *)0x0) {
        puVar30 = puVar1;
      }
      uVar27 = uVar27 & *(uint *)(puVar30 + (longlong)iVar32 * 4);
      while (uVar27 == 0) {
        uStack_780 = uVar28 + 0x20;
        local_798 = iVar32 + 1;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_798)
        goto LAB_146c2914b;
        uVar27 = *(uint *)(puVar30 + (longlong)iVar32 * 4 + 4);
        local_788 = 0xffffffff;
        uVar28 = uStack_780;
        iVar32 = local_798;
      }
      uStack_794 = -uVar27 & uVar27;
      uVar2 = (ulonglong)uStack_794 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_6bc._4_4_ = (undefined4)lVar21;
      uStack_784 = (uVar28 - 1) + local_6bc._4_4_;
      if ((int)uVar13 < (int)uStack_784) {
LAB_146c2914b:
        uStack_784 = uVar13;
      }
    }
    uStack_6f0 = CONCAT44(uStack_794,local_798);
    uStack_6e0 = CONCAT44(uStack_784,local_788);
    local_6d8 = CONCAT44(uStack_77c,uStack_780);
    iStack_6d0 = *(int *)&(local_680.Object)->field_0x8 - *(int *)&(local_680.Object)->field_0x34;
    local_6e8 = pTStack_790;
    local_6f8 = local_680.Object;
    local_a8 = local_680.Object;
    uStack_80 = CONCAT44(uStack_6cc,iStack_6d0);
    local_98 = pTStack_790;
    __return_storage_ptr__ =
         (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
          *)local_res10;
    uStack_a0 = uStack_6f0;
    uStack_90 = uStack_6e0;
    local_88 = local_6d8;
    while( true ) {
      uVar11 = local_6bc._12_8_;
      if (*(int *)(local_6bc._12_8_ + 8) - *(int *)(local_6bc._12_8_ + 0x34) != (int)uStack_688) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_6a8.CurrentBitIndex == uStack_90._4_4_) && (TStack_6a8.Array == local_98)) &&
         ((TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>
           *)uVar11 == local_a8)) break;
      lVar21 = *(longlong *)uVar11;
      plVar33 = *(longlong **)(lVar21 + 0x10 + (longlong)TStack_6a8.CurrentBitIndex * 0x28);
      lVar21 = lVar21 + (longlong)TStack_6a8.CurrentBitIndex * 0x28;
      iVar29 = *(int *)(lVar21 + 0x18);
      local_7d8.Data = (FScriptContainerElement *)0x0;
      local_7d0 = 0;
      plVar26 = plVar33 + iVar29;
      local_6c8 = plVar26;
      while( true ) {
        if (*(int *)(lVar21 + 0x18) != iVar29) {
          local_830[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_830);
        }
        __return_storage_ptr__ =
             (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
              *)local_res10;
        if (plVar33 == plVar26) break;
        plVar4 = (longlong *)*plVar33;
        if (plVar4 != (longlong *)0x0) {
          local_828.LanguageCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_828.LanguageCode.Data.ArrayNum = 0;
          local_828.LanguageCode.Data.ArrayMax = 0;
          local_828.MimeType.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_828.MimeType.Data.ArrayNum = 0;
          local_828.MimeType.Data.ArrayMax = 0;
          local_828.StringData.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_828.StringData.Data.ArrayNum = 0;
          local_828.StringData.Data.ArrayMax = 0;
          local_828.BinaryData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_828.BinaryData.ArrayNum = 0;
          local_828.BinaryData.ArrayMax = 0;
          pFVar16 = (FMediaMetadataItemBPT *)(**(code **)(*plVar4 + 8))(plVar4);
          if (&local_828 != pFVar16) {
            iVar14 = (pFVar16->LanguageCode).Data.ArrayNum;
            pFVar5 = (pFVar16->LanguageCode).Data.AllocatorInstance.Data;
            local_828.LanguageCode.Data.ArrayNum = iVar14;
            if ((iVar14 == 0) && (local_828.LanguageCode.Data.ArrayMax == 0)) {
              local_828.LanguageCode.Data.ArrayNum = 0;
              local_828.LanguageCode.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar14,local_828.LanguageCode.Data.ArrayMax,
                         (ForAnyElementType *)&local_828,iVar14,
                         &local_828.LanguageCode.Data.ArrayMax);
              if (iVar14 != 0) {
                memcpy(local_828.LanguageCode.Data.AllocatorInstance.Data,pFVar5,
                       (longlong)iVar14 * 2);
              }
            }
          }
          puVar17 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4);
          if (&local_828.MimeType != (FString *)puVar17) {
            iVar14 = *(int *)(puVar17 + 1);
            pvVar6 = (void *)*puVar17;
            local_828.MimeType.Data.ArrayNum = iVar14;
            if ((iVar14 == 0) && (local_828.MimeType.Data.ArrayMax == 0)) {
              local_828.MimeType.Data.ArrayNum = 0;
              local_828.MimeType.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar14,local_828.MimeType.Data.ArrayMax,
                         (ForAnyElementType *)&local_828.MimeType,iVar14,
                         &local_828.MimeType.Data.ArrayMax);
              if (iVar14 != 0) {
                memcpy(local_828.MimeType.Data.AllocatorInstance.Data,pvVar6,(longlong)iVar14 * 2);
              }
            }
          }
          pEVar18 = (EVariantTypes *)(**(code **)(*plVar4 + 0x18))(plVar4);
          local_7c8.Type = *pEVar18;
          local_7c8.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_7c8.Value.ArrayNum = pEVar18[4];
          sVar25 = (size_t)local_7c8.Value.ArrayNum;
          pvVar6 = *(void **)(pEVar18 + 2);
          if (local_7c8.Value.ArrayNum == Empty) {
            local_7c8.Value.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_7c8.Value.ArrayNum,0,&local_7c8.Value.AllocatorInstance,
                       local_7c8.Value.ArrayNum,&local_7c8.Value.ArrayMax);
            memcpy(local_7c8.Value.AllocatorInstance.Data,pvVar6,sVar25);
          }
          pcVar23 = (char *)(ulonglong)local_7c8.Type;
          switch(local_7c8.Type) {
          case Ansichar:
          case ByteArray:
            if ((local_7c8.Type != ByteArray) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type == EVariantTypes::ByteArray",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                                    ,0x195,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              pTVar15 = (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
                         *)(*pcVar7)();
              return pTVar15;
            }
            iVar14 = local_7c8.Value.ArrayNum;
            FVar9.Data = local_7c8.Value.AllocatorInstance.Data;
            local_7b0.Data = (FScriptContainerElement *)0x0;
            local_7a8._0_4_ = local_7c8.Value.ArrayNum;
            if (local_7c8.Value.ArrayNum == Empty) {
              local_7a8._0_4_ = 0;
              local_7a8._4_4_ = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,local_7c8.Value.ArrayNum,0,&local_7b0,local_7c8.Value.ArrayNum,
                         (int *)((longlong)&local_7a8 + 4));
              memcpy(local_7b0.Data,FVar9.Data,(longlong)iVar14);
            }
            if (local_828.BinaryData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_828.BinaryData.AllocatorInstance.Data);
            }
            local_828.BinaryData.AllocatorInstance.Data = local_7b0.Data;
            local_828.BinaryData.ArrayNum = (int)local_7a8;
            local_828.BinaryData.ArrayMax = local_7a8._4_4_;
            local_7a8 = 0;
            local_7b0.Data = (FScriptContainerElement *)0x0;
            break;
          case Bool:
            bVar12 = FVariant::GetValue<bool>(&local_7c8);
            pwVar22 = L"false";
            if (bVar12) {
              pwVar22 = L"true";
            }
            ::FString::operator=(&local_828.StringData,pwVar22);
            break;
          default:
            if (2 < (byte)LogMediaAssets._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
            }
            break;
          case Double:
            dVar8 = FVariant::GetValue<double>(&local_7c8);
            pFVar19 = ::FString::SanitizeFloat(&local_c8,dVar8,1);
            if (&local_828.StringData != pFVar19) {
              if (local_828.StringData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_828.StringData.Data.AllocatorInstance.Data);
              }
              local_828.StringData.Data.AllocatorInstance.Data =
                   (pFVar19->Data).AllocatorInstance.Data;
              (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_828.StringData.Data.ArrayNum = (pFVar19->Data).ArrayNum;
              local_828.StringData.Data.ArrayMax = (pFVar19->Data).ArrayMax;
              (pFVar19->Data).ArrayNum = 0;
              (pFVar19->Data).ArrayMax = 0;
            }
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            break;
          case Float:
            if (local_7c8.Type != Float) {
              pcVar23 = 
              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                                  ,0x164,L"");
              if (bVar12) {
                pcVar7 = (code *)swi(3);
                pTVar15 = (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
                           *)(*pcVar7)();
                return pTVar15;
              }
            }
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            local_658._padding_ = 0;
            FArchiveState::FArchiveState((FArchiveState *)&local_658);
            local_658._padding_ = 0;
            local_658._padding_ = (longlong)&___7FMemoryReader__6B_;
            local_658.Bytes = &local_7c8.Value;
            uVar24 = (undefined7)((ulonglong)pcVar23 >> 8);
            local_658.LimitSize = 0x7fffffffffffffff;
            FArchiveState::SetIsLoading((FArchiveState *)&local_658,true);
            (**(code **)(local_658._padding_ + 0x108))(&local_658,CONCAT71(uVar24,1));
            if (*(float **)(local_658._padding_ + 8) < *(float **)local_658._padding_ + 1) {
              if ((local_658._padding_ & 0x10000U) == 0) {
                if (*(code **)(local_658._padding_ + 0x188) == FMemoryReader::Serialize) {
                  FMemoryReader::Serialize(&local_658,&local_7e8,4);
                }
                else {
                  (**(code **)(local_658._padding_ + 0x188))();
                }
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)&local_658,(uint *)&local_7e8);
              }
            }
            else {
              local_7e8 = **(float **)local_658._padding_;
              *(longlong *)local_658._padding_ = *(longlong *)local_658._padding_ + 4;
            }
            fVar10 = local_7e8;
            FArchive::~FArchive((FArchive *)&local_658);
            pFVar19 = ::FString::SanitizeFloat(&local_b8,(double)fVar10,1);
            if (&local_828.StringData != pFVar19) {
              if (local_828.StringData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_828.StringData.Data.AllocatorInstance.Data);
              }
              local_828.StringData.Data.AllocatorInstance.Data =
                   (pFVar19->Data).AllocatorInstance.Data;
              (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_828.StringData.Data.ArrayNum = (pFVar19->Data).ArrayNum;
              local_828.StringData.Data.ArrayMax = (pFVar19->Data).ArrayMax;
              (pFVar19->Data).ArrayNum = 0;
              (pFVar19->Data).ArrayMax = 0;
            }
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            break;
          case Int8:
            if (local_7c8.Type != Int8) {
              pcVar23 = 
              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                                  ,0x164,L"");
              if (bVar12) {
                pcVar7 = (code *)swi(3);
                pTVar15 = (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
                           *)(*pcVar7)();
                return pTVar15;
              }
            }
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            local_188._padding_ = 0;
            FArchiveState::FArchiveState((FArchiveState *)&local_188);
            local_188._padding_ = 0;
            local_188._padding_ = (longlong)&___7FMemoryReader__6B_;
            local_188.Bytes = &local_7c8.Value;
            uVar24 = (undefined7)((ulonglong)pcVar23 >> 8);
            local_188.LimitSize = 0x7fffffffffffffff;
            FArchiveState::SetIsLoading((FArchiveState *)&local_188,true);
            (**(code **)(local_188._padding_ + 0x108))(&local_188,CONCAT71(uVar24,1));
            if (*(undefined1 **)(local_188._padding_ + 8) < *(undefined1 **)local_188._padding_ + 1)
            {
              if (*(code **)(local_188._padding_ + 0x188) == FMemoryReader::Serialize) {
                FMemoryReader::Serialize(&local_188,local_res18,1);
              }
              else {
                (**(code **)(local_188._padding_ + 0x188))();
              }
            }
            else {
              local_res18[0] = **(undefined1 **)local_188._padding_;
              *(longlong *)local_188._padding_ = *(longlong *)local_188._padding_ + 1;
            }
            FArchive::~FArchive((FArchive *)&local_188);
            ::FString::PrintfImpl(&local_758,L"%d");
            if (local_828.StringData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_828.StringData.Data.AllocatorInstance.Data);
            }
            local_828.StringData.Data.AllocatorInstance.Data = local_758.Data.AllocatorInstance.Data
            ;
            local_828.StringData.Data.ArrayNum = local_758.Data.ArrayNum;
            local_828.StringData.Data.ArrayMax = local_758.Data.ArrayMax;
            local_758.Data.ArrayNum = 0;
            local_758.Data.ArrayMax = 0;
            local_758.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            break;
          case Int16:
            if (local_7c8.Type != Int16) {
              pcVar23 = 
              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                                  ,0x164,L"");
              if (bVar12) {
                pcVar7 = (code *)swi(3);
                pTVar15 = (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
                           *)(*pcVar7)();
                return pTVar15;
              }
            }
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            local_4f8._padding_ = 0;
            FArchiveState::FArchiveState((FArchiveState *)&local_4f8);
            local_4f8._padding_ = 0;
            local_4f8._padding_ = (longlong)&___7FMemoryReader__6B_;
            local_4f8.Bytes = &local_7c8.Value;
            uVar24 = (undefined7)((ulonglong)pcVar23 >> 8);
            local_4f8.LimitSize = 0x7fffffffffffffff;
            FArchiveState::SetIsLoading((FArchiveState *)&local_4f8,true);
            (**(code **)(local_4f8._padding_ + 0x108))(&local_4f8,CONCAT71(uVar24,1));
            if (*(ushort **)(local_4f8._padding_ + 8) < *(ushort **)local_4f8._padding_ + 1) {
              if ((local_4f8._padding_ & 0x10000U) == 0) {
                if (*(code **)(local_4f8._padding_ + 0x188) == FMemoryReader::Serialize) {
                  FMemoryReader::Serialize(&local_4f8,local_834,2);
                }
                else {
                  (**(code **)(local_4f8._padding_ + 0x188))();
                }
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)&local_4f8,local_834);
              }
            }
            else {
              local_834[0] = **(ushort **)local_4f8._padding_;
              *(longlong *)local_4f8._padding_ = *(longlong *)local_4f8._padding_ + 2;
            }
            FArchive::~FArchive((FArchive *)&local_4f8);
            ::FString::PrintfImpl(&local_738,L"%d");
            if (local_828.StringData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_828.StringData.Data.AllocatorInstance.Data);
            }
            local_828.StringData.Data.AllocatorInstance.Data = local_738.Data.AllocatorInstance.Data
            ;
            local_828.StringData.Data.ArrayNum = local_738.Data.ArrayNum;
            local_828.StringData.Data.ArrayMax = local_738.Data.ArrayMax;
            local_738.Data.ArrayNum = 0;
            local_738.Data.ArrayMax = 0;
            local_738.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            break;
          case Int32:
            if (local_7c8.Type != UInt32) {
              pcVar23 = 
              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                                  ,0x164,L"");
              if (bVar12) {
                pcVar7 = (code *)swi(3);
                pTVar15 = (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
                           *)(*pcVar7)();
                return pTVar15;
              }
            }
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            local_398._padding_ = 0;
            FArchiveState::FArchiveState((FArchiveState *)&local_398);
            local_398._padding_ = 0;
            local_398._padding_ = (longlong)&___7FMemoryReader__6B_;
            local_398.Bytes = &local_7c8.Value;
            uVar24 = (undefined7)((ulonglong)pcVar23 >> 8);
            local_398.LimitSize = 0x7fffffffffffffff;
            FArchiveState::SetIsLoading((FArchiveState *)&local_398,true);
            (**(code **)(local_398._padding_ + 0x108))(&local_398,CONCAT71(uVar24,1));
            if (*(uint **)(local_398._padding_ + 8) < *(uint **)local_398._padding_ + 1) {
              if ((local_398._padding_ & 0x10000U) == 0) {
                if (*(code **)(local_398._padding_ + 0x188) == FMemoryReader::Serialize) {
                  FMemoryReader::Serialize(&local_398,local_7e0,4);
                }
                else {
                  (**(code **)(local_398._padding_ + 0x188))();
                }
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)&local_398,local_7e0);
              }
            }
            else {
              local_7e0[0] = **(uint **)local_398._padding_;
              *(longlong *)local_398._padding_ = *(longlong *)local_398._padding_ + 4;
            }
            FArchive::~FArchive((FArchive *)&local_398);
            ::FString::PrintfImpl(&local_718,L"%d");
            if (local_828.StringData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_828.StringData.Data.AllocatorInstance.Data);
            }
            local_828.StringData.Data.AllocatorInstance.Data = local_718.Data.AllocatorInstance.Data
            ;
            local_828.StringData.Data.ArrayNum = local_718.Data.ArrayNum;
            local_828.StringData.Data.ArrayMax = local_718.Data.ArrayMax;
            local_718.Data.ArrayNum = 0;
            local_718.Data.ArrayMax = 0;
            local_718.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            break;
          case Int64:
            FVariant::GetValue<__int64>(&local_7c8);
            ::FString::PrintfImpl(&local_778,L"%lld");
            if (local_828.StringData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_828.StringData.Data.AllocatorInstance.Data);
            }
            local_828.StringData.Data.AllocatorInstance.Data = local_778.Data.AllocatorInstance.Data
            ;
            local_828.StringData.Data.ArrayNum = local_778.Data.ArrayNum;
            local_828.StringData.Data.ArrayMax = local_778.Data.ArrayMax;
            local_778.Data.ArrayNum = 0;
            local_778.Data.ArrayMax = 0;
            local_778.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            break;
          case String:
            pFVar19 = FVariant::GetValue<FString>(&local_7c8,&local_d8);
            if (&local_828.StringData != pFVar19) {
              if (local_828.StringData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_828.StringData.Data.AllocatorInstance.Data);
              }
              local_828.StringData.Data.AllocatorInstance.Data =
                   (pFVar19->Data).AllocatorInstance.Data;
              (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_828.StringData.Data.ArrayNum = (pFVar19->Data).ArrayNum;
              local_828.StringData.Data.ArrayMax = (pFVar19->Data).ArrayMax;
              (pFVar19->Data).ArrayNum = 0;
              (pFVar19->Data).ArrayMax = 0;
            }
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            break;
          case UInt8:
            if ((local_7c8.Type != UInt8) && (local_7c8.Type != Enum)) {
              pcVar23 = 
              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                                  ,0x164,L"");
              if (bVar12) {
                pcVar7 = (code *)swi(3);
                pTVar15 = (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
                           *)(*pcVar7)();
                return pTVar15;
              }
            }
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            local_238._padding_ = 0;
            FArchiveState::FArchiveState((FArchiveState *)&local_238);
            local_238._padding_ = 0;
            local_238._padding_ = (longlong)&___7FMemoryReader__6B_;
            local_238.Bytes = &local_7c8.Value;
            uVar24 = (undefined7)((ulonglong)pcVar23 >> 8);
            local_238.LimitSize = 0x7fffffffffffffff;
            FArchiveState::SetIsLoading((FArchiveState *)&local_238,true);
            (**(code **)(local_238._padding_ + 0x108))(&local_238,CONCAT71(uVar24,1));
            if (*(undefined1 **)(local_238._padding_ + 8) < *(undefined1 **)local_238._padding_ + 1)
            {
              if (*(code **)(local_238._padding_ + 0x188) == FMemoryReader::Serialize) {
                FMemoryReader::Serialize(&local_238,local_res8,1);
              }
              else {
                (**(code **)(local_238._padding_ + 0x188))();
              }
            }
            else {
              local_res8[0] = **(undefined1 **)local_238._padding_;
              *(longlong *)local_238._padding_ = *(longlong *)local_238._padding_ + 1;
            }
            FArchive::~FArchive((FArchive *)&local_238);
            ::FString::PrintfImpl(&local_768,L"%d");
            if (local_828.StringData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_828.StringData.Data.AllocatorInstance.Data);
            }
            local_828.StringData.Data.AllocatorInstance.Data = local_768.Data.AllocatorInstance.Data
            ;
            local_828.StringData.Data.ArrayNum = local_768.Data.ArrayNum;
            local_828.StringData.Data.ArrayMax = local_768.Data.ArrayMax;
            local_768.Data.ArrayNum = 0;
            local_768.Data.ArrayMax = 0;
            local_768.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            break;
          case UInt16:
            if (local_7c8.Type != UInt16) {
              pcVar23 = 
              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                                  ,0x164,L"");
              if (bVar12) {
                pcVar7 = (code *)swi(3);
                pTVar15 = (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
                           *)(*pcVar7)();
                return pTVar15;
              }
            }
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            local_5a8._padding_ = 0;
            FArchiveState::FArchiveState((FArchiveState *)&local_5a8);
            local_5a8._padding_ = 0;
            local_5a8._padding_ = (longlong)&___7FMemoryReader__6B_;
            local_5a8.Bytes = &local_7c8.Value;
            uVar24 = (undefined7)((ulonglong)pcVar23 >> 8);
            local_5a8.LimitSize = 0x7fffffffffffffff;
            FArchiveState::SetIsLoading((FArchiveState *)&local_5a8,true);
            (**(code **)(local_5a8._padding_ + 0x108))(&local_5a8,CONCAT71(uVar24,1));
            if (*(ushort **)(local_5a8._padding_ + 8) < *(ushort **)local_5a8._padding_ + 1) {
              if ((local_5a8._padding_ & 0x10000U) == 0) {
                if (*(code **)(local_5a8._padding_ + 0x188) == FMemoryReader::Serialize) {
                  FMemoryReader::Serialize(&local_5a8,local_838,2);
                }
                else {
                  (**(code **)(local_5a8._padding_ + 0x188))();
                }
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)&local_5a8,local_838);
              }
            }
            else {
              local_838[0] = **(ushort **)local_5a8._padding_;
              *(longlong *)local_5a8._padding_ = *(longlong *)local_5a8._padding_ + 2;
            }
            FArchive::~FArchive((FArchive *)&local_5a8);
            ::FString::PrintfImpl(&local_748,L"%d");
            if (local_828.StringData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_828.StringData.Data.AllocatorInstance.Data);
            }
            local_828.StringData.Data.AllocatorInstance.Data = local_748.Data.AllocatorInstance.Data
            ;
            local_828.StringData.Data.ArrayNum = local_748.Data.ArrayNum;
            local_828.StringData.Data.ArrayMax = local_748.Data.ArrayMax;
            local_748.Data.ArrayNum = 0;
            local_748.Data.ArrayMax = 0;
            local_748.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            break;
          case UInt32:
            if (local_7c8.Type != Int32) {
              pcVar23 = 
              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                                  ,0x164,L"");
              if (bVar12) {
                pcVar7 = (code *)swi(3);
                pTVar15 = (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
                           *)(*pcVar7)();
                return pTVar15;
              }
            }
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            local_448._padding_ = 0;
            FArchiveState::FArchiveState((FArchiveState *)&local_448);
            local_448._padding_ = 0;
            local_448._padding_ = (longlong)&___7FMemoryReader__6B_;
            local_448.Bytes = &local_7c8.Value;
            uVar24 = (undefined7)((ulonglong)pcVar23 >> 8);
            local_448.LimitSize = 0x7fffffffffffffff;
            FArchiveState::SetIsLoading((FArchiveState *)&local_448,true);
            (**(code **)(local_448._padding_ + 0x108))(&local_448,CONCAT71(uVar24,1));
            if (*(uint **)(local_448._padding_ + 8) < *(uint **)local_448._padding_ + 1) {
              if ((local_448._padding_ & 0x10000U) == 0) {
                if (*(code **)(local_448._padding_ + 0x188) == FMemoryReader::Serialize) {
                  FMemoryReader::Serialize(&local_448,&local_7e4,4);
                }
                else {
                  (**(code **)(local_448._padding_ + 0x188))();
                }
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)&local_448,&local_7e4);
              }
            }
            else {
              local_7e4 = **(uint **)local_448._padding_;
              *(longlong *)local_448._padding_ = *(longlong *)local_448._padding_ + 4;
            }
            FArchive::~FArchive((FArchive *)&local_448);
            ::FString::PrintfImpl(&local_728,L"%d");
            if (local_828.StringData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_828.StringData.Data.AllocatorInstance.Data);
            }
            local_828.StringData.Data.AllocatorInstance.Data = local_728.Data.AllocatorInstance.Data
            ;
            local_828.StringData.Data.ArrayNum = local_728.Data.ArrayNum;
            local_828.StringData.Data.ArrayMax = local_728.Data.ArrayMax;
            local_728.Data.ArrayNum = 0;
            local_728.Data.ArrayMax = 0;
            local_728.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            break;
          case UInt64:
            if (local_7c8.Type != UInt64) {
              pcVar23 = 
              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                                  ,0x164,L"");
              if (bVar12) {
                pcVar7 = (code *)swi(3);
                pTVar15 = (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
                           *)(*pcVar7)();
                return pTVar15;
              }
            }
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
            local_2e8.Bytes = &local_7c8.Value;
            uVar24 = (undefined7)((ulonglong)pcVar23 >> 8);
            local_2e8.LimitSize = 0x7fffffffffffffff;
            FArchiveState::SetIsLoading((FArchiveState *)&local_2e8,true);
            (**(code **)(local_2e8._padding_ + 0x108))(&local_2e8,CONCAT71(uVar24,1));
            if (*(ulong64 **)(local_2e8._padding_ + 8) < *(ulong64 **)local_2e8._padding_ + 1) {
              if ((local_2e8._padding_ & 0x10000U) == 0) {
                if (*(code **)(local_2e8._padding_ + 0x188) == FMemoryReader::Serialize) {
                  FMemoryReader::Serialize(&local_2e8,&local_7a0,8);
                }
                else {
                  (**(code **)(local_2e8._padding_ + 0x188))();
                }
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)&local_2e8,&local_7a0);
              }
            }
            else {
              local_7a0 = **(ulong64 **)local_2e8._padding_;
              *(longlong *)local_2e8._padding_ = *(longlong *)local_2e8._padding_ + 8;
            }
            FArchive::~FArchive((FArchive *)&local_2e8);
            ::FString::PrintfImpl(&local_708,L"%llu");
            if (local_828.StringData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_828.StringData.Data.AllocatorInstance.Data);
            }
            local_828.StringData.Data.AllocatorInstance.Data = local_708.Data.AllocatorInstance.Data
            ;
            local_828.StringData.Data.ArrayNum = local_708.Data.ArrayNum;
            local_828.StringData.Data.ArrayMax = local_708.Data.ArrayMax;
            local_708.Data.ArrayNum = 0;
            local_708.Data.ArrayMax = 0;
            local_708.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (((local_7d8.Data <= &local_828) &&
              (&local_828 <
               (FMediaMetadataItemBPT *)(local_7d8.Data + (longlong)local_7d0._4_4_ * 0x40))) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar7 = (code *)swi(3);
            pTVar15 = (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
                       *)(*pcVar7)();
            return pTVar15;
          }
          iVar14 = (int)local_7d0;
          if ((int)local_7d0 == local_7d0._4_4_) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&local_7d8,(int *)((longlong)&local_7d0 + 4));
          }
          local_7d0 = CONCAT44(local_7d0._4_4_,iVar14 + 1);
          this_00 = local_7d8.Data + (longlong)iVar14 * 0x40;
          ::FString::FString((FString *)this_00,&local_828.LanguageCode);
          ::FString::FString((FString *)(this_00 + 0x10),&local_828.MimeType);
          ::FString::FString((FString *)(this_00 + 0x20),&local_828.StringData);
          FVar9.Data = local_828.BinaryData.AllocatorInstance.Data;
          pFVar5 = this_00 + 0x30;
          *(FScriptContainerElement **)pFVar5 = (FScriptContainerElement *)0x0;
          sVar25 = (size_t)local_828.BinaryData.ArrayNum;
          *(int *)(this_00 + 0x38) = local_828.BinaryData.ArrayNum;
          if (local_828.BinaryData.ArrayNum == 0) {
            *(int *)(this_00 + 0x3c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_828.BinaryData.ArrayNum,0,(ForAnyElementType *)pFVar5,
                       local_828.BinaryData.ArrayNum,(int *)(this_00 + 0x3c));
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar5,FVar9.Data,sVar25);
          }
          if (local_7c8.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7c8.Value.AllocatorInstance.Data);
          }
          if (local_828.BinaryData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_828.BinaryData.AllocatorInstance.Data);
          }
          if (local_828.StringData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_828.StringData.Data.AllocatorInstance.Data);
          }
          if (local_828.MimeType.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_828.MimeType.Data.AllocatorInstance.Data);
          }
          plVar26 = local_6c8;
          if (local_828.LanguageCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_828.LanguageCode.Data.AllocatorInstance.Data);
            plVar26 = local_6c8;
          }
        }
        plVar33 = plVar33 + 1;
      }
      local_668 = &local_7d8;
      local_670 = lVar21;
      TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FMediaMetadataItemsBPT_const_&>_>
                (local_res10,
                 (TPairInitializer<FString_const_&,FMediaMetadataItemsBPT_const_&> *)local_6bc,
                 (bool *)&local_670);
      DestructItems<FMediaMetadataItemBPT,int>
                ((FMediaMetadataItemBPT *)local_7d8.Data,(int)local_7d0);
      if ((FMediaMetadataItemBPT *)local_7d8.Data != (FMediaMetadataItemBPT *)0x0) {
        FMemory::Free(local_7d8.Data);
      }
      TStack_6a8.UnvisitedBitMask = TStack_6a8.UnvisitedBitMask & ~TStack_6a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6a8);
    }
  }
  return (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
          *)(TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
             *)__return_storage_ptr__;
}

// GetMediaName @ 146c2a500

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FText * __thiscall UMediaPlayer::GetMediaName(UMediaPlayer *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  FMediaPlayerFacade::GetMediaName((this->PlayerFacade).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNumTrackFormats @ 146c2b2f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall
UMediaPlayer::GetNumTrackFormats(UMediaPlayer *this,EMediaPlayerTrack param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FMediaPlayerFacade::GetNumTrackFormats((this->PlayerFacade).Object,(uint)param_1,param_2);
  return iVar3;
}

// GetNumTracks @ 146c2b360

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall UMediaPlayer::GetNumTracks(UMediaPlayer *this,EMediaPlayerTrack param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FMediaPlayerFacade::GetNumTracks((this->PlayerFacade).Object,(uint)param_1);
  return iVar3;
}

// GetPlaybackTimeRange @ 146c2c300

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FFloatInterval __thiscall
UMediaPlayer::GetPlaybackTimeRange(UMediaPlayer *this,EMediaTimeRangeBPType param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  FFloatInterval FVar6;
  FTimespan *pFVar7;
  FTimespan *pFVar8;
  undefined7 in_register_00000011;
  byte in_R8B;
  TRange<FTimespan> local_58 [2];
  
  FVar6._1_7_ = in_register_00000011;
  FVar6._0_1_ = param_1;
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    FVar6 = (FFloatInterval)(*pcVar1)();
    return FVar6;
  }
  FMediaPlayerFacade::GetPlaybackTimeRange((this->PlayerFacade).Object,local_58,(uint)in_R8B);
  dVar2 = __real_bff0000000000000;
  dVar4 = __real_3e7ad7f29abcaf48;
  if ((local_58[0].LowerBound.Type.Value == '\x02') || (local_58[0].UpperBound.Type.Value == '\x02')
     ) {
LAB_146c2c42b:
    if ((local_58[0].LowerBound.Type.Value == '\x02') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      FVar6 = (FFloatInterval)(*pcVar1)();
      return FVar6;
    }
    dVar3 = (double)local_58[0].LowerBound.Value.Ticks * dVar4;
  }
  else {
    if ((local_58[0].LowerBound.Type.Value == '\x02') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      FVar6 = (FFloatInterval)(*pcVar1)();
      return FVar6;
    }
    if ((local_58[0].UpperBound.Type.Value == '\x02') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      FVar6 = (FFloatInterval)(*pcVar1)();
      return FVar6;
    }
    dVar3 = dVar2;
    if (local_58[0].LowerBound.Value.Ticks <= local_58[0].UpperBound.Value.Ticks) {
      pFVar7 = TRangeBound<FTimespan>::GetValue(&local_58[0].LowerBound);
      pFVar8 = TRangeBound<FTimespan>::GetValue(&local_58[0].UpperBound);
      if ((pFVar7->Ticks != pFVar8->Ticks) ||
         ((local_58[0].LowerBound.Type.Value != '\0' && (local_58[0].UpperBound.Type.Value != '\0'))
         )) goto LAB_146c2c42b;
    }
  }
  if (local_58[0].LowerBound.Type.Value == '\x02') {
LAB_146c2c50f:
    if (local_58[0].UpperBound.Type.Value == '\x02') goto LAB_146c2c516;
  }
  else {
    if (local_58[0].UpperBound.Type.Value != '\x02') {
      if ((local_58[0].LowerBound.Type.Value == '\x02') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        FVar6 = (FFloatInterval)(*pcVar1)();
        return FVar6;
      }
      if ((local_58[0].UpperBound.Type.Value == '\x02') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        FVar6 = (FFloatInterval)(*pcVar1)();
        return FVar6;
      }
      if (local_58[0].UpperBound.Value.Ticks < local_58[0].LowerBound.Value.Ticks)
      goto LAB_146c2c54b;
      pFVar7 = TRangeBound<FTimespan>::GetValue(&local_58[0].LowerBound);
      pFVar8 = TRangeBound<FTimespan>::GetValue(&local_58[0].UpperBound);
      if ((pFVar7->Ticks == pFVar8->Ticks) &&
         ((local_58[0].LowerBound.Type.Value == '\0' || (local_58[0].UpperBound.Type.Value == '\0'))
         )) goto LAB_146c2c54b;
      goto LAB_146c2c50f;
    }
LAB_146c2c516:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      FVar6 = (FFloatInterval)(*pcVar1)();
      return FVar6;
    }
  }
  dVar2 = (double)local_58[0].UpperBound.Value.Ticks * dVar4;
LAB_146c2c54b:
  *(float *)FVar6 = (float)dVar3;
  *(float *)((longlong)FVar6 + 4) = (float)dVar2;
  return FVar6;
}

// GetPlaybackTimeRange @ 146c2c590

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TRange<FTimespan> * __thiscall
UMediaPlayer::GetPlaybackTimeRange
          (UMediaPlayer *this,TRange<FTimespan> *__return_storage_ptr__,EMediaTimeRangeType param_1)

{
  code *pcVar1;
  bool bVar2;
  TRange<FTimespan> *pTVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TRange<FTimespan> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FMediaPlayerFacade::GetPlaybackTimeRange
            ((this->PlayerFacade).Object,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPlayerFacade @ 146c2c610

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TSharedRef<FMediaPlayerFacade,1> * __thiscall
UMediaPlayer::GetPlayerFacade
          (UMediaPlayer *this,TSharedRef<FMediaPlayerFacade,1> *__return_storage_ptr__)

{
  TSharedPtr<FMediaPlayerFacade,1>::ToSharedRef(&this->PlayerFacade,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPlayerName @ 146c2c640

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FName __thiscall UMediaPlayer::GetPlayerName(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName in_RDX;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  FMediaPlayerFacade::GetPlayerName((this->PlayerFacade).Object);
  return in_RDX;
}

// GetPrivateStaticClass @ 146c2ca70

UClass * __cdecl UMediaPlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaPlayer",
               &Z_Registration_Info_UClass_UMediaPlayer.InnerSingleton,
               StaticRegisterNativesUMediaPlayer,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaPlayer>,InternalVTableHelperCtorCaller<UMediaPlayer>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlayer.InnerSingleton;
}

// GetRate @ 146c2d370

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall UMediaPlayer::GetRate(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = FMediaPlayerFacade::GetRate((this->PlayerFacade).Object);
  return fVar3;
}

// GetSelectedTrack @ 146c2d450

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall UMediaPlayer::GetSelectedTrack(UMediaPlayer *this,EMediaPlayerTrack param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FMediaPlayerFacade::GetSelectedTrack((this->PlayerFacade).Object,(uint)param_1);
  return iVar3;
}

// GetSupportedRates @ 146c2daf0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UMediaPlayer::GetSupportedRates
          (UMediaPlayer *this,TArray<FFloatRange,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  TArray<FFloatRange,TSizedDefaultAllocator<32>_> local_18;
  
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMediaPlayerFacade::GetSupportedRates
            ((this->PlayerFacade).Object,(TRangeSet<float> *)&local_18,param_2);
  _Src.Data = local_18.AllocatorInstance.Data;
  if (param_1 != &local_18) {
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = local_18.ArrayNum;
    if ((local_18.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_18.ArrayNum,*piVar1,&param_1->AllocatorInstance,local_18.ArrayNum,
                 piVar1);
      if (local_18.ArrayNum != 0) {
        memcpy((param_1->AllocatorInstance).Data,_Src.Data,(longlong)local_18.ArrayNum << 4);
      }
    }
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetTime @ 146c2dc90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FTimespan __thiscall UMediaPlayer::GetTime(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  FTimespan FVar3;
  long64 in_RDX;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Ticks = (*pcVar1)();
      return (FTimespan)FVar3.Ticks;
    }
  }
  FMediaPlayerFacade::GetTime((this->PlayerFacade).Object);
  return (FTimespan)in_RDX;
}

// GetTimeDelay @ 146c2dd00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FTimespan __thiscall UMediaPlayer::GetTimeDelay(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  FTimespan FVar3;
  long64 *in_RDX;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Ticks = (*pcVar1)();
      return (FTimespan)FVar3.Ticks;
    }
  }
  *in_RDX = (((this->PlayerFacade).Object)->TimeDelay).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetTimeStamp @ 146c2dd70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaTimeStampInfo * __thiscall UMediaPlayer::GetTimeStamp(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UMediaTimeStampInfo *pUVar4;
  FMediaTimeStamp local_18;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UMediaTimeStampInfo>(pUVar3);
  if (pUVar4 != (UMediaTimeStampInfo *)0x0) {
    if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMediaTimeStampInfo *)(*pcVar1)();
        return pUVar4;
      }
    }
    FMediaPlayerFacade::GetTimeStamp((this->PlayerFacade).Object,&local_18);
    (pUVar4->Time).Ticks = local_18.Time.Ticks;
    pUVar4->SequenceIndex = CONCAT44(local_18.SequenceIndex,local_18.LoopIndex);
  }
  return pUVar4;
}

// GetTrackDisplayName @ 146c2de10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FText * __thiscall
UMediaPlayer::GetTrackDisplayName
          (UMediaPlayer *this,FText *__return_storage_ptr__,EMediaPlayerTrack param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  FMediaPlayerFacade::GetTrackDisplayName
            ((this->PlayerFacade).Object,__return_storage_ptr__,(uint)param_1,param_2);
  return __return_storage_ptr__;
}

// GetTrackFormat @ 146c2dea0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall
UMediaPlayer::GetTrackFormat(UMediaPlayer *this,EMediaPlayerTrack param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FMediaPlayerFacade::GetTrackFormat((this->PlayerFacade).Object,(uint)param_1,param_2);
  return iVar3;
}

// GetTrackLanguage @ 146c2df10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall
UMediaPlayer::GetTrackLanguage
          (UMediaPlayer *this,FString *__return_storage_ptr__,EMediaPlayerTrack param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  FMediaPlayerFacade::GetTrackLanguage
            ((this->PlayerFacade).Object,__return_storage_ptr__,(uint)param_1,param_2);
  return __return_storage_ptr__;
}

// GetUrl @ 146c2e0a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall UMediaPlayer::GetUrl(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->PlayerFacade).Object)->CurrentUrl;
}

// GetVerticalFieldOfView @ 146c2e3a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall UMediaPlayer::GetVerticalFieldOfView(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float local_res8 [2];
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  local_res8[0] = 0.0;
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  bVar2 = FMediaPlayerFacade::GetViewField((this->PlayerFacade).Object,local_res10,local_res8);
  if (!bVar2) {
    return 0.0;
  }
  return local_res8[0];
}

// GetVideoTimecode @ 146c2e430

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TOptional<FTimecode> * __thiscall
UMediaPlayer::GetVideoTimecode(UMediaPlayer *this,TOptional<FTimecode> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOptional<FTimecode> *pTVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TOptional<FTimecode> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FMediaPlayerFacade::GetVideoTimecode((this->PlayerFacade).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetVideoTrackAspectRatio @ 146c2e4a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall UMediaPlayer::GetVideoTrackAspectRatio(UMediaPlayer *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = FMediaPlayerFacade::GetVideoTrackAspectRatio((this->PlayerFacade).Object,param_1,param_2);
  return fVar3;
}

// GetVideoTrackDimensions @ 146c2e510

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TIntPoint<int> __thiscall
UMediaPlayer::GetVideoTrackDimensions(UMediaPlayer *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TIntPoint<int> TVar3;
  undefined4 in_register_00000014;
  TIntPoint<int>_u_0 TVar4;
  
  TVar4._s_0.Y = in_register_00000014;
  TVar4._s_0.X = param_1;
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
      return (TIntPoint<int>)TVar3.field0_0x0;
    }
  }
  FMediaPlayerFacade::GetVideoTrackDimensions((this->PlayerFacade).Object,param_1,param_2);
  return (TIntPoint<int>)TVar4;
}

// GetVideoTrackFrameRate @ 146c2e5a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall UMediaPlayer::GetVideoTrackFrameRate(UMediaPlayer *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = FMediaPlayerFacade::GetVideoTrackFrameRate((this->PlayerFacade).Object,param_1,param_2);
  return fVar3;
}

// GetVideoTrackFrameRates @ 146c2e610

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FFloatRange * __thiscall
UMediaPlayer::GetVideoTrackFrameRates
          (UMediaPlayer *this,FFloatRange *__return_storage_ptr__,int param_1,int param_2)

{
  code *pcVar1;
  undefined3 uVar2;
  float fVar3;
  TEnumAsByte<ERangeBoundTypes::Type> TVar4;
  undefined3 uVar5;
  float fVar6;
  bool bVar7;
  FFloatRange *pFVar8;
  TRange<float> *pTVar9;
  TRange<float> local_18;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FFloatRange *)(*pcVar1)();
      return pFVar8;
    }
  }
  pTVar9 = FMediaPlayerFacade::GetVideoTrackFrameRates
                     ((this->PlayerFacade).Object,&local_18,param_1,param_2);
  uVar2 = *(undefined3 *)&(pTVar9->LowerBound).field_0x1;
  fVar3 = (pTVar9->LowerBound).Value;
  TVar4.Value = (pTVar9->UpperBound).Type.Value;
  uVar5 = *(undefined3 *)&(pTVar9->UpperBound).field_0x1;
  fVar6 = (pTVar9->UpperBound).Value;
  __return_storage_ptr__->field_0x0 = (pTVar9->LowerBound).Type.Value;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar2;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar3;
  __return_storage_ptr__->field_0x8 = TVar4.Value;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = uVar5;
  *(float *)&__return_storage_ptr__->field_0xc = fVar6;
  return __return_storage_ptr__;
}

// GetVideoTrackType @ 146c2e6a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall
UMediaPlayer::GetVideoTrackType
          (UMediaPlayer *this,FString *__return_storage_ptr__,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  FMediaPlayerFacade::GetVideoTrackType
            ((this->PlayerFacade).Object,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetViewRotation @ 146c2e730

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TRotator<double> * __thiscall
UMediaPlayer::GetViewRotation(UMediaPlayer *this,TRotator<double> *__return_storage_ptr__)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TRotator<double> *pTVar4;
  TQuat<double> local_28;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRotator<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  bVar3 = FMediaPlayerFacade::GetViewOrientation((this->PlayerFacade).Object,&local_28);
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  if (!bVar3) {
    __return_storage_ptr__->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    __return_storage_ptr__->Yaw = dVar2;
    __return_storage_ptr__->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    return __return_storage_ptr__;
  }
  UE::Math::TQuat<double>::Rotator(&local_28,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandlePlayerMediaEvent @ 146c2e880

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaPlayer::HandlePlayerMediaEvent(UMediaPlayer *this,EMediaEvent param_1)

{
  undefined1 *puVar1;
  TSharedPtr<FMediaPlayerFacade,1> *this_00;
  longlong lVar2;
  longlong *plVar3;
  long64 lVar4;
  FScriptContainerElement *pFVar5;
  UMediaPlaylist *pUVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  FMediaPlayerOptions *pFVar11;
  FMediaPlayerFacade *pFVar12;
  TQuat<double> *pTVar13;
  FMediaPlayerFacade *pFVar14;
  FString *pFVar15;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_01;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  FString local_c8;
  FString local_b8;
  FDestructionSentinel local_a8;
  TQuat<double> local_88;
  FString local_68;
  FString local_58;
  TQuat<double> local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->MediaEvent,
             (FWriteAccessScope *)&local_a8);
  puVar1 = &(this->MediaEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar18 = false;
  uVar16 = *(int *)&(this->MediaEvent).field_0x10 - 1;
  if (-1 < (int)uVar16) {
    lVar17 = (longlong)(int)uVar16 << 4;
    bVar18 = false;
    do {
      uVar10 = 0;
      if ((int)uVar16 < *(int *)&(this->MediaEvent).field_0x10) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar2 = *(longlong *)&(this->MediaEvent).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar17) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar17), plVar3 == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*plVar3 + 0x68))(), cVar9 == '\0')) {
        bVar18 = true;
      }
      lVar17 = lVar17 + -0x10;
      uVar16 = uVar16 - 1;
    } while (-1 < (int)uVar16);
  }
  puVar1 = &(this->MediaEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar18) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->MediaEvent,false);
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  switch(param_1) {
  case MediaBuffering:
    this_01 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnBufferingStart;
    break;
  case MediaBufferingComplete:
    this_01 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnBufferingCompleted;
    break;
  case MediaClosed:
    this_01 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMediaClosed;
    break;
  default:
    goto switchD_146c2e9a3_caseD_3;
  case MediaOpened:
    this_00 = &this->PlayerFacade;
    pFVar14 = TSharedPtr<FMediaPlayerFacade,1>::operator->(this_00);
    FMediaPlayerFacade::SetCacheWindow
              (pFVar14,(FTimespan)(this->CacheAhead).Ticks,(FTimespan)(this->CacheBehindGame).Ticks)
    ;
    pFVar14 = TSharedPtr<FMediaPlayerFacade,1>::operator->(this_00);
    if ((pFVar14->ActivePlayerOptions).bIsSet != false) {
      pFVar14 = TSharedPtr<FMediaPlayerFacade,1>::operator->(this_00);
      pFVar11 = TOptional<FMediaPlayerOptions>::operator->(&pFVar14->ActivePlayerOptions);
      if (pFVar11->Loop != UseMediaPlayerSetting) {
        pFVar14 = TSharedPtr<FMediaPlayerFacade,1>::operator->(this_00);
        pFVar12 = TSharedPtr<FMediaPlayerFacade,1>::operator->(this_00);
        pFVar11 = TOptional<FMediaPlayerOptions>::operator->(&pFVar12->ActivePlayerOptions);
        bVar18 = pFVar11->Loop == Enabled;
        goto LAB_146c2ea4c;
      }
    }
    pFVar14 = TSharedPtr<FMediaPlayerFacade,1>::operator->(this_00);
    if ((this->Loop == 0) ||
       ((pUVar6 = (this->Playlist).field0_0x0.DebugPtr, pUVar6 != (UMediaPlaylist *)0x0 &&
        ((pUVar6->Items).ArrayNum != 1)))) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
LAB_146c2ea4c:
    FMediaPlayerFacade::SetLooping(pFVar14,bVar18);
    pFVar14 = TSharedPtr<FMediaPlayerFacade,1>::operator->(this_00);
    FMediaPlayerFacade::SetViewField
              (pFVar14,this->HorizontalFieldOfView,this->VerticalFieldOfView,true);
    pFVar14 = TSharedPtr<FMediaPlayerFacade,1>::operator->(this_00);
    pTVar13 = UE::Math::TRotator<double>::Quaternion(&this->ViewRotation,&local_48);
    local_88.X = pTVar13->X;
    local_88.Y = pTVar13->Y;
    local_88.Z = pTVar13->Z;
    local_88.W = pTVar13->W;
    FMediaPlayerFacade::SetViewOrientation(pFVar14,&local_88,true);
    lVar4 = (this->TimeDelay).Ticks;
    pFVar14 = TSharedPtr<FMediaPlayerFacade,1>::operator->(this_00);
    (pFVar14->TimeDelay).Ticks = lVar4;
    pFVar14 = TSharedPtr<FMediaPlayerFacade,1>::operator->(this_00);
    pFVar15 = ::FString::FString(&local_68,&pFVar14->CurrentUrl);
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    if (&local_c8 != pFVar15) {
      uVar16 = (pFVar15->Data).ArrayNum;
      pFVar5 = (pFVar15->Data).AllocatorInstance.Data;
      local_c8.Data.ArrayMax = 0;
      local_c8.Data.ArrayNum = uVar16;
      if (uVar16 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar16,0,(ForAnyElementType *)&local_c8,uVar16,&local_c8.Data.ArrayMax);
        memcpy(local_c8.Data.AllocatorInstance.Data,pFVar5,(longlong)(int)uVar16 * 2);
      }
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMediaOpened,
               &local_c8);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    pFVar5 = (pFVar15->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar14 = TSharedPtr<FMediaPlayerFacade,1>::operator->(this_00);
    if ((pFVar14->ActivePlayerOptions).bIsSet != false) {
      pFVar14 = TSharedPtr<FMediaPlayerFacade,1>::operator->(this_00);
      pFVar11 = TOptional<FMediaPlayerOptions>::operator->(&pFVar14->ActivePlayerOptions);
      if (pFVar11->PlayOnOpen != UseMediaPlayerSetting) {
        pFVar14 = TSharedPtr<FMediaPlayerFacade,1>::operator->(this_00);
        pFVar11 = TOptional<FMediaPlayerOptions>::operator->(&pFVar14->ActivePlayerOptions);
        if (pFVar11->PlayOnOpen != Enabled) {
          return;
        }
        PlayAndSeek(this);
        return;
      }
    }
    if ((this->PlayOnOpen == false) && (this->PlayOnNext == false)) {
      return;
    }
    PlayAndSeek(this);
    return;
  case MediaOpenFailed:
    pFVar14 = TSharedPtr<FMediaPlayerFacade,1>::operator->(&this->PlayerFacade);
    pFVar15 = ::FString::FString(&local_58,&pFVar14->CurrentUrl);
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    if (&local_b8 != pFVar15) {
      uVar16 = (pFVar15->Data).ArrayNum;
      pFVar5 = (pFVar15->Data).AllocatorInstance.Data;
      local_b8.Data.ArrayMax = 0;
      local_b8.Data.ArrayNum = uVar16;
      if (uVar16 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar16,0,(ForAnyElementType *)&local_b8,uVar16,&local_b8.Data.ArrayMax);
        memcpy(local_b8.Data.AllocatorInstance.Data,pFVar5,(longlong)(int)uVar16 * 2);
      }
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMediaOpenFailed,
               &local_b8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    pFVar5 = (pFVar15->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pUVar6 = (this->Playlist).field0_0x0.DebugPtr;
    if (pUVar6 == (UMediaPlaylist *)0x0) {
      return;
    }
    if (((this->Loop == 0) || ((pUVar6->Items).ArrayNum == 1)) &&
       ((pUVar6->Items).ArrayNum <= this->PlaylistIndex + 1)) {
      return;
    }
    Next(this);
    return;
  case PlaybackEndReached:
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnEndReached,
               (void *)0x0);
    pUVar6 = (this->Playlist).field0_0x0.DebugPtr;
    if (pUVar6 == (UMediaPlaylist *)0x0) {
      return;
    }
    if (((this->Loop == 0) || ((pUVar6->Items).ArrayNum == 1)) &&
       ((pUVar6->Items).ArrayNum <= this->PlaylistIndex + 1)) {
      return;
    }
    this->PlayOnNext = true;
    Next(this);
    return;
  case PlaybackResumed:
    this_01 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPlaybackResumed;
    break;
  case PlaybackSuspended:
    this_01 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPlaybackSuspended;
    break;
  case SeekCompleted:
    this_01 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSeekCompleted;
    break;
  case TracksChanged:
    this_01 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTracksChanged;
    break;
  case MetadataChanged:
    this_01 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMetadataChanged;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (this_01,(void *)0x0);
switchD_146c2e9a3_caseD_3:
  return;
}

// HasError @ 146c2eda0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::HasError(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::HasError((this->PlayerFacade).Object);
  return bVar2;
}

// IsBuffering @ 146c2f450

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::IsBuffering(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::IsBuffering((this->PlayerFacade).Object);
  return bVar2;
}

// IsClosed @ 146c2f4a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::IsClosed(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::IsClosed((this->PlayerFacade).Object);
  return bVar2;
}

// IsConnecting @ 146c2f510

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::IsConnecting(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::IsConnecting((this->PlayerFacade).Object);
  return bVar2;
}

// IsLooping @ 146c2f580

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::IsLooping(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::IsLooping((this->PlayerFacade).Object);
  return bVar2;
}

// IsPaused @ 146c2f5d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::IsPaused(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::IsPaused((this->PlayerFacade).Object);
  return bVar2;
}

// IsPlaying @ 146c2f620

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::IsPlaying(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::IsPlaying((this->PlayerFacade).Object);
  return bVar2;
}

// IsPreparing @ 146c2f680

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::IsPreparing(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::IsPreparing((this->PlayerFacade).Object);
  return bVar2;
}

// IsReady @ 146c2f6d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::IsReady(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::IsReady((this->PlayerFacade).Object);
  return bVar2;
}

// Next @ 146c2f8e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::Next(UMediaPlayer *this)

{
  UMediaPlaylist *pUVar1;
  FMediaPlayerFacade *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  UMediaSource *pUVar8;
  FString *pFVar9;
  int iVar10;
  FName local_res8;
  FString local_38;
  void *local_28 [2];
  
  bVar6 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pUVar1 = (this->Playlist).field0_0x0.DebugPtr;
  if ((pUVar1 == (UMediaPlaylist *)0x0) || (iVar10 = (pUVar1->Items).ArrayNum, iVar10 == 0)) {
LAB_146c2fa9a:
    bVar6 = false;
  }
  else {
    bVar7 = this->PlayOnNext;
    if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = FMediaPlayerFacade::IsPlaying((this->PlayerFacade).Object);
    this->PlayOnNext = (bool)(bVar3 | bVar7);
    RegisterWithMediaModule(this);
    do {
      if (iVar10 < 1) goto LAB_146c2fa9a;
      pUVar1 = (this->Playlist).field0_0x0.DebugPtr;
      iVar10 = iVar10 + -1;
      if (this->Shuffle == 0) {
        pUVar8 = UMediaPlaylist::GetNext(pUVar1,&this->PlaylistIndex);
      }
      else {
        pUVar8 = UMediaPlaylist::GetRandom(pUVar1,&this->PlaylistIndex);
      }
      if ((pUVar8 == (UMediaSource *)0x0) ||
         (cVar5 = (**(code **)(pUVar8->_padding_ + 0x2b8))(pUVar8), cVar5 == '\0')) {
LAB_146c2fa73:
        bVar7 = false;
      }
      else {
        if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        this_00 = (this->PlayerFacade).Object;
        bVar6 = true;
        pFVar9 = (FString *)(**(code **)(pUVar8->_padding_ + 0x2b0))(pUVar8,local_28);
        bVar7 = FMediaPlayerFacade::Open
                          (this_00,pFVar9,(IMediaOptions *)&pUVar8->_padding_,
                           (FMediaPlayerOptions *)0x0);
        if (!bVar7) goto LAB_146c2fa73;
        bVar7 = true;
      }
      if ((bVar6) && (bVar6 = false, local_28[0] != (void *)0x0)) {
        FMemory::Free(local_28[0]);
      }
    } while (!bVar7);
    bVar6 = true;
  }
  return bVar6;
}

// OpenFile @ 146c30460

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::OpenFile(UMediaPlayer *this,FString *param_1)

{
  UMediaPlaylist *this_00;
  bool bVar1;
  FName local_res8;
  FString local_18;
  
  Close(this);
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  EnsurePlaylist(this);
  this_00 = (this->Playlist).field0_0x0.DebugPtr;
  if ((this_00 != (UMediaPlaylist *)0x0) &&
     (bVar1 = UMediaPlaylist::AddFile(this_00,param_1), bVar1)) {
    bVar1 = Next(this);
    return bVar1;
  }
  return false;
}

// OpenPlaylistIndex @ 146c30540

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UMediaPlayer::OpenPlaylistIndex(UMediaPlayer *this,UMediaPlaylist *param_1,int param_2)

{
  UMediaPlaylist *pUVar1;
  char cVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  UMediaSource *pUVar5;
  FMediaPlayerFacade *this_00;
  FString *pFVar6;
  FName local_res10 [2];
  FName local_res20;
  FString local_48;
  FString local_38;
  
  Close(this);
  if (param_1 == (UMediaPlaylist *)0x0) {
    if ((byte)LogMediaAssets._0_1_ < 3) {
      return false;
    }
    local_res10[0] = (FName)this->_padding_;
    ::FName::ToString(local_res10,&local_48);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    if (5 < (byte)LogMediaAssets._0_1_) {
      local_res10[0] = (FName)param_1->_padding_;
      ::FName::ToString(local_res10,&local_38);
      local_res20 = (FName)this->_padding_;
      ::FName::ToString(&local_res20,&local_48);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pUVar1 = (this->Playlist).field0_0x0.DebugPtr;
    if (((pUVar1 != (UMediaPlaylist *)0x0) && (pUVar1 != param_1)) &&
       (pFVar4 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&pUVar1->_padding_ + 4)),
       ((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0)) {
      pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,
                          *(int *)((longlong)&((this->Playlist).field0_0x0.DebugPtr)->_padding_ + 4)
                         );
      FUObjectItem::ClearRootFlags(pFVar4,RootSet);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->Playlist).field0_0x0.DebugPtr = param_1;
    if (*(int *)((longlong)&this->_padding_ + 4) <= GUObjectArray.ObjLastNonGCIndex) {
      pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar4,RootSet);
    }
    if (param_2 == -1) {
      return true;
    }
    pUVar5 = UMediaPlaylist::Get((this->Playlist).field0_0x0.DebugPtr,param_2);
    if (pUVar5 == (UMediaSource *)0x0) {
      if ((byte)LogMediaAssets._0_1_ < 3) {
        return false;
      }
      local_res10[0] = (FName)this->_padding_;
      ::FName::ToString(local_res10,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    }
    else {
      this->PlaylistIndex = param_2;
      cVar2 = (**(code **)(pUVar5->_padding_ + 0x2b8))(pUVar5);
      if (cVar2 != '\0') {
        RegisterWithMediaModule(this);
        this_00 = TSharedPtr<FMediaPlayerFacade,1>::operator->(&this->PlayerFacade);
        pFVar6 = (FString *)(**(code **)(pUVar5->_padding_ + 0x2b0))(pUVar5,&local_38);
        bVar3 = FMediaPlayerFacade::Open
                          (this_00,pFVar6,(IMediaOptions *)&pUVar5->_padding_,
                           (FMediaPlayerOptions *)0x0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        return bVar3;
      }
      if ((byte)LogMediaAssets._0_1_ < 2) {
        return false;
      }
      (**(code **)(pUVar5->_padding_ + 0x2b0))(pUVar5,&local_38);
      local_res10[0] = (FName)pUVar5->_padding_;
      ::FName::ToString(local_res10,&local_48);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// OpenSource @ 146c30860

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::OpenSource(UMediaPlayer *this,UMediaSource *param_1)

{
  bool bVar1;
  
  bVar1 = OpenSourceInternal(this,param_1,(FMediaPlayerOptions *)0x0);
  return bVar1;
}

// OpenSourceInternal @ 146c30870

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMediaPlayer::OpenSourceInternal
          (UMediaPlayer *this,UMediaSource *param_1,FMediaPlayerOptions *param_2)

{
  UMediaPlaylist *pUVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  FMediaPlayerFacade *pFVar5;
  FString *pFVar6;
  FStaticBasicLogRecord *pFVar7;
  FName local_res10 [2];
  FName local_res20;
  FString local_48;
  FString local_38;
  
  Close(this);
  if (param_1 == (UMediaSource *)0x0) {
    if ((byte)LogMediaAssets._0_1_ < 3) {
      return false;
    }
    local_res10[0] = (FName)this->_padding_;
    ::FName::ToString(local_res10,&local_48);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    if (5 < (byte)LogMediaAssets._0_1_) {
      local_res10[0] = (FName)param_1->_padding_;
      ::FName::ToString(local_res10,&local_38);
      local_res20 = (FName)this->_padding_;
      ::FName::ToString(&local_res20,&local_48);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    cVar2 = (**(code **)(param_1->_padding_ + 0x2b8))(param_1);
    if (cVar2 == '\0') {
      if ((byte)LogMediaAssets._0_1_ < 2) {
        return false;
      }
      (**(code **)(param_1->_padding_ + 0x2b0))(param_1,&local_38);
      local_res10[0] = (FName)param_1->_padding_;
      ::FName::ToString(local_res10,&local_48);
      pFVar7 = &::LOG_Static;
    }
    else {
      EnsurePlaylist(this);
      pUVar1 = (this->Playlist).field0_0x0.DebugPtr;
      if (pUVar1 != (UMediaPlaylist *)0x0) {
        UMediaPlaylist::Add(pUVar1,param_1);
        bVar4 = this->PlayOnNext;
        pFVar5 = TSharedPtr<FMediaPlayerFacade,1>::operator->(&this->PlayerFacade);
        bVar3 = FMediaPlayerFacade::IsPlaying(pFVar5);
        pUVar1 = (this->Playlist).field0_0x0.DebugPtr;
        this->PlayOnNext = (bool)(bVar3 | bVar4);
        UMediaPlaylist::GetNext(pUVar1,&this->PlaylistIndex);
        RegisterWithMediaModule(this);
        pFVar5 = TSharedPtr<FMediaPlayerFacade,1>::operator->(&this->PlayerFacade);
        pFVar6 = (FString *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1,&local_38);
        bVar4 = FMediaPlayerFacade::Open(pFVar5,pFVar6,(IMediaOptions *)&param_1->_padding_,param_2)
        ;
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        return bVar4;
      }
      if ((byte)LogMediaAssets._0_1_ < 2) {
        return false;
      }
      (**(code **)(param_1->_padding_ + 0x2b0))(param_1,&local_38);
      local_res10[0] = (FName)param_1->_padding_;
      ::FName::ToString(local_res10,&local_48);
      pFVar7 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&LogMediaAssets);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// OpenSourceLatent @ 146c30b20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMediaPlayer::OpenSourceLatent
          (UMediaPlayer *this,UObject *param_1,FLatentActionInfo *param_2,UMediaSource *param_3,
          FMediaPlayerOptions *param_4,bool *param_5)

{
  bool *pbVar1;
  UWorld *this_00;
  FLatentActionManager *this_01;
  FLatentOpenMediaSourceAction *pFVar2;
  FLatentOpenMediaSourceAction *this_02;
  
  pbVar1 = param_5;
  *param_5 = false;
  this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (this_00 != (UWorld *)0x0) {
    this_01 = UWorld::GetLatentActionManager(this_00);
    pFVar2 = FLatentActionManager::
             FindExistingActionWithPredicate<FLatentOpenMediaSourceAction,_FLatentActionManager::FindExistingAction<FLatentOpenMediaSourceAction>_::__l2::FFirstItemPredicate>
                       (this_01,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,
                        (FFirstItemPredicate *)&param_5);
    if (pFVar2 == (FLatentOpenMediaSourceAction *)0x0) {
      this_02 = ::operator_new(0x110);
      pFVar2 = (FLatentOpenMediaSourceAction *)0x0;
      if (this_02 != (FLatentOpenMediaSourceAction *)0x0) {
        pFVar2 = FLatentOpenMediaSourceAction::FLatentOpenMediaSourceAction
                           (this_02,param_2,this,param_3,param_4,pbVar1);
      }
      FLatentActionManager::AddNewAction
                (this_01,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,
                 (FPendingLatentAction *)pFVar2);
    }
  }
  return;
}

// OpenSourceWithOptions @ 146c30bf0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMediaPlayer::OpenSourceWithOptions
          (UMediaPlayer *this,UMediaSource *param_1,FMediaPlayerOptions *param_2)

{
  UMediaPlaylist *pUVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  FMediaPlayerFacade *pFVar5;
  FString *pFVar6;
  FStaticBasicLogRecord *pFVar7;
  FName aFStackX_10 [2];
  FName FStackX_20;
  FString FStack_48;
  FString FStack_38;
  
  Close(this);
  if (param_1 == (UMediaSource *)0x0) {
    if ((byte)LogMediaAssets._0_1_ < 3) {
      return false;
    }
    aFStackX_10[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_10,&FStack_48);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    FStack_38.Data.AllocatorInstance.Data = FStack_48.Data.AllocatorInstance.Data;
  }
  else {
    if (5 < (byte)LogMediaAssets._0_1_) {
      aFStackX_10[0] = (FName)param_1->_padding_;
      ::FName::ToString(aFStackX_10,&FStack_38);
      FStackX_20 = (FName)this->_padding_;
      ::FName::ToString(&FStackX_20,&FStack_48);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
      if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
      }
    }
    cVar2 = (**(code **)(param_1->_padding_ + 0x2b8))(param_1);
    if (cVar2 == '\0') {
      if ((byte)LogMediaAssets._0_1_ < 2) {
        return false;
      }
      (**(code **)(param_1->_padding_ + 0x2b0))(param_1,&FStack_38);
      aFStackX_10[0] = (FName)param_1->_padding_;
      ::FName::ToString(aFStackX_10,&FStack_48);
      pFVar7 = &::LOG_Static;
    }
    else {
      EnsurePlaylist(this);
      pUVar1 = (this->Playlist).field0_0x0.DebugPtr;
      if (pUVar1 != (UMediaPlaylist *)0x0) {
        UMediaPlaylist::Add(pUVar1,param_1);
        bVar4 = this->PlayOnNext;
        pFVar5 = TSharedPtr<FMediaPlayerFacade,1>::operator->(&this->PlayerFacade);
        bVar3 = FMediaPlayerFacade::IsPlaying(pFVar5);
        pUVar1 = (this->Playlist).field0_0x0.DebugPtr;
        this->PlayOnNext = (bool)(bVar3 | bVar4);
        UMediaPlaylist::GetNext(pUVar1,&this->PlaylistIndex);
        RegisterWithMediaModule(this);
        pFVar5 = TSharedPtr<FMediaPlayerFacade,1>::operator->(&this->PlayerFacade);
        pFVar6 = (FString *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1,&FStack_38);
        bVar4 = FMediaPlayerFacade::Open(pFVar5,pFVar6,(IMediaOptions *)&param_1->_padding_,param_2)
        ;
        if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
        }
        return bVar4;
      }
      if ((byte)LogMediaAssets._0_1_ < 2) {
        return false;
      }
      (**(code **)(param_1->_padding_ + 0x2b0))(param_1,&FStack_38);
      aFStackX_10[0] = (FName)param_1->_padding_;
      ::FName::ToString(aFStackX_10,&FStack_48);
      pFVar7 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&LogMediaAssets);
    if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// OpenUrl @ 146c30c00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::OpenUrl(UMediaPlayer *this,FString *param_1)

{
  UMediaPlaylist *this_00;
  bool bVar1;
  FName local_res8;
  FString local_18;
  
  Close(this);
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  EnsurePlaylist(this);
  this_00 = (this->Playlist).field0_0x0.DebugPtr;
  if ((this_00 != (UMediaPlaylist *)0x0) && (bVar1 = UMediaPlaylist::AddUrl(this_00,param_1), bVar1)
     ) {
    bVar1 = Next(this);
    return bVar1;
  }
  return false;
}

// Pause @ 146c30ce0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::Pause(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName local_res8 [4];
  FString local_18;
  
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res8[0] = (FName)this->_padding_;
    ::FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FMediaPlayerFacade::SetRate((this->PlayerFacade).Object,0.0);
  return bVar2;
}

// Play @ 146c30d90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::Play(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName local_res8 [4];
  FString local_18;
  
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res8[0] = (FName)this->_padding_;
    ::FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FMediaPlayerFacade::SetRate((this->PlayerFacade).Object,__real_3f800000);
  return bVar2;
}

// PlayAndSeek @ 146c30e40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaPlayer::PlayAndSeek(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  FMediaPlayerFacade *pFVar3;
  FMediaPlayerOptions *pFVar4;
  
  this->PlayOnNext = false;
  bVar2 = Play(this);
  if (bVar2) {
    if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3 = (this->PlayerFacade).Object;
    if ((pFVar3->ActivePlayerOptions).bIsSet != false) {
      if ((pFVar3 == (FMediaPlayerFacade *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3 = (this->PlayerFacade).Object;
      if (((pFVar3->ActivePlayerOptions).bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((pFVar3->ActivePlayerOptions).TypedValue.SeekTime.Ticks != 0) &&
         (bVar2 = SupportsSeeking(this), bVar2)) {
        pFVar3 = TSharedPtr<FMediaPlayerFacade,1>::operator->(&this->PlayerFacade);
        pFVar4 = TOptional<FMediaPlayerOptions>::operator->(&pFVar3->ActivePlayerOptions);
        if (pFVar4->SeekTimeType == RelativeToStartTime) {
          pFVar3 = TSharedPtr<FMediaPlayerFacade,1>::operator->(&this->PlayerFacade);
          pFVar4 = TOptional<FMediaPlayerOptions>::operator->(&pFVar3->ActivePlayerOptions);
          Seek(this,&pFVar4->SeekTime);
        }
      }
    }
  }
  return;
}

// PostDuplicate @ 146c30f80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaPlayer::PostDuplicate(UMediaPlayer *this,bool param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FGuid *pFVar6;
  UPackage *pUVar7;
  UMediaPlaylist *pUVar8;
  FGuid local_18;
  
  if ((this->_padding_ & 0x10) == 0) {
    pFVar6 = FGuid::NewGuid(&local_18);
    uVar2 = pFVar6->B;
    uVar3 = pFVar6->C;
    uVar4 = pFVar6->D;
    (this->PlayerGuid).A = pFVar6->A;
    (this->PlayerGuid).B = uVar2;
    (this->PlayerGuid).C = uVar3;
    (this->PlayerGuid).D = uVar4;
    if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FMediaPlayerFacade::SetGuid((this->PlayerFacade).Object,&this->PlayerGuid);
    if ((this->Playlist).field0_0x0.DebugPtr == (UMediaPlaylist *)0x0) {
      pUVar7 = GetTransientPackage();
      pUVar8 = NewObject<UMediaPlaylist>
                         ((UObject *)pUVar7,(FName)0x0,RF_Transient|RF_Transactional,(UObject *)0x0,
                          false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UMediaPlaylist *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (this->Playlist).field0_0x0.DebugPtr = pUVar8;
    }
  }
  return;
}

// PostInitProperties @ 146c31060

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaPlayer::PostInitProperties(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    return;
  }
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMediaPlayerFacade::SetGuid((this->PlayerFacade).Object,&this->PlayerGuid);
  RegisterWithMediaModule(this);
  return;
}

// PostLoad @ 146c310f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaPlayer::PostLoad(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  UObject::PostLoad((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    return;
  }
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMediaPlayerFacade::SetGuid((this->PlayerFacade).Object,&this->PlayerGuid);
  return;
}

// Previous @ 146c31300

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::Previous(UMediaPlayer *this)

{
  int iVar1;
  UMediaPlaylist *pUVar2;
  FMediaPlayerFacade *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  UMediaSource *pUVar9;
  FString *pFVar10;
  FName local_res8;
  FString local_38;
  void *local_28 [2];
  
  bVar7 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pUVar2 = (this->Playlist).field0_0x0.DebugPtr;
  if ((pUVar2 == (UMediaPlaylist *)0x0) || (iVar1 = (pUVar2->Items).ArrayNum, iVar1 == 0)) {
LAB_146c314b8:
    bVar7 = false;
  }
  else {
    bVar8 = this->PlayOnNext;
    if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar4 = FMediaPlayerFacade::IsPlaying((this->PlayerFacade).Object);
    this->PlayOnNext = (bool)(bVar4 | bVar8);
    RegisterWithMediaModule(this);
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) goto LAB_146c314b8;
      pUVar2 = (this->Playlist).field0_0x0.DebugPtr;
      if (this->Shuffle == 0) {
        pUVar9 = UMediaPlaylist::GetPrevious(pUVar2,&this->PlaylistIndex);
      }
      else {
        pUVar9 = UMediaPlaylist::GetRandom(pUVar2,&this->PlaylistIndex);
      }
      if ((pUVar9 == (UMediaSource *)0x0) ||
         (cVar6 = (**(code **)(pUVar9->_padding_ + 0x2b8))(pUVar9), cVar6 == '\0')) {
LAB_146c31490:
        bVar8 = false;
      }
      else {
        if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        this_00 = (this->PlayerFacade).Object;
        bVar7 = true;
        pFVar10 = (FString *)(**(code **)(pUVar9->_padding_ + 0x2b0))(pUVar9,local_28);
        bVar8 = FMediaPlayerFacade::Open
                          (this_00,pFVar10,(IMediaOptions *)&pUVar9->_padding_,
                           (FMediaPlayerOptions *)0x0);
        if (!bVar8) goto LAB_146c31490;
        bVar8 = true;
      }
      if ((bVar7) && (bVar7 = false, local_28[0] != (void *)0x0)) {
        FMemory::Free(local_28[0]);
      }
    } while (!bVar8);
    bVar7 = true;
  }
  return bVar7;
}

// RegisterWithMediaModule @ 146c317a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaPlayer::RegisterWithMediaModule(UMediaPlayer *this)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMediaPlayerFacade *pFVar3;
  FName FVar4;
  bool bVar5;
  FModuleManager *this_00;
  IModuleInterface *pIVar6;
  longlong *plVar7;
  FName local_res8;
  FMediaPlayerFacade *local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  
  if (this->RegisteredWithMediaModule == false) {
    bVar5 = IsInGameThread();
    FVar4 = MediaModuleName;
    if (bVar5) {
      this_00 = FModuleManager::Get();
      pIVar6 = FModuleManager::LoadModule(this_00,FVar4,None);
    }
    else {
      pIVar6 = FModuleManager::GetModulePtr_Internal(MediaModuleName);
    }
    if (pIVar6 != (IModuleInterface *)0x0) {
      plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0xa8))(pIVar6);
      pcVar1 = *(code **)(*plVar7 + 0x10);
      if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pTVar2 = (this->PlayerFacade).SharedReferenceCount.ReferenceController;
      pFVar3 = (this->PlayerFacade).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3 == (FMediaPlayerFacade *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = pFVar3;
      local_30 = pTVar2;
      (*pcVar1)(plVar7,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      this->RegisteredWithMediaModule = true;
      return;
    }
    if (2 < (byte)LogMediaAssets._0_1_) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Reopen @ 146c34220

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::Reopen(UMediaPlayer *this)

{
  UMediaPlaylist *pUVar1;
  bool bVar2;
  FName local_res8 [4];
  FString local_18;
  
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res8[0] = (FName)this->_padding_;
    ::FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pUVar1 = (this->Playlist).field0_0x0.DebugPtr;
  if (pUVar1 == (UMediaPlaylist *)0x0) {
    return false;
  }
  bVar2 = OpenPlaylistIndex(this,pUVar1,this->PlaylistIndex);
  return bVar2;
}

// Rewind @ 146c35090

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::Rewind(UMediaPlayer *this)

{
  bool bVar1;
  FName local_res10 [3];
  FString local_18;
  
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res10[0] = (FName)this->_padding_;
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  bVar1 = Seek(this,(FTimespan *)local_res10);
  return bVar1;
}

// Scrub @ 146c35110

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::Scrub(UMediaPlayer *this,FTimespan *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FMediaPlayerFacade::IsSeeking((this->PlayerFacade).Object);
  if (!bVar2) {
    bVar2 = Seek(this,param_1);
    return bVar2;
  }
  if (6 < (byte)LogMediaAssets._0_1_) {
    FTimespan::ToString(param_1,&local_18,L"%h:%m:%s.%t");
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FMediaPlayerFacade::SetNextSeek((this->PlayerFacade).Object,param_1);
  return true;
}

// Seek @ 146c35270

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::Seek(UMediaPlayer *this,FTimespan *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (6 < (byte)LogMediaAssets._0_1_) {
    FTimespan::ToString(param_1,&local_18,L"%h:%m:%s.%t");
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FMediaPlayerFacade::Seek((this->PlayerFacade).Object,param_1);
  return bVar2;
}

// SelectTrack @ 146c35370

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::SelectTrack(UMediaPlayer *this,EMediaPlayerTrack param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UEnum *this_00;
  FName local_res8;
  FString local_58;
  wchar_t *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_48 = L"MediaAssets.EMediaPlayerTrack";
    iStack_40 = 0x1d;
    pUVar4 = Z_Construct_UClass_UEnum_NoRegister();
    local_38._12_4_ = uStack_3c;
    local_38.Size = iStack_40;
    local_38.DataPtr = local_48;
    this_00 = (UEnum *)StaticFindObject(pUVar4,(UObject *)0x0,&local_38,None);
    if (this_00 == (UEnum *)0x0) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`private:_static_class_FString___cdecl_UEnum::GetValueAsString_Internal(wchar_t_const*___ptr64,__int64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    }
    UEnum::GetNameStringByValue(this_00,&local_58,(ulonglong)param_1);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FMediaPlayerFacade::SelectTrack((this->PlayerFacade).Object,(uint)param_1,param_2);
  return bVar2;
}

// SetBlockOnTime @ 146c35820

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaPlayer::SetBlockOnTime(UMediaPlayer *this,FTimespan *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (6 < (byte)LogMediaAssets._0_1_) {
    FTimespan::ToString(param_1,&local_18,L"%h:%m:%s.%t");
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FMediaPlayerFacade::SetBlockOnTime((this->PlayerFacade).Object,param_1);
  return;
}

// SetBlockOnTimeRange @ 146c35920

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaPlayer::SetBlockOnTimeRange(UMediaPlayer *this,TRange<FTimespan> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (6 < (byte)LogMediaAssets._0_1_) {
    if (((param_1->UpperBound).Type.Value == '\x02') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FTimespan::ToString(&(param_1->UpperBound).Value,&local_18,L"%h:%m:%s.%t");
    if (((param_1->LowerBound).Type.Value == '\x02') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FTimespan::ToString(&(param_1->LowerBound).Value,&local_28,L"%h:%m:%s.%t");
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FMediaPlayerFacade::SetBlockOnTimeRange((this->PlayerFacade).Object,param_1);
  return;
}

// SetDesiredPlayerName @ 146c35ae0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaPlayer::SetDesiredPlayerName(UMediaPlayer *this,FName param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  if (5 < (byte)LogMediaAssets._0_1_) {
    ::FName::ToString(&local_res10,&local_18);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  FVar2 = local_res10;
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ((this->PlayerFacade).Object)->DesiredPlayerName = FVar2;
  return;
}

// SetLooping @ 146c36220

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::SetLooping(UMediaPlayer *this,bool param_1)

{
  UMediaPlaylist *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FCoreTexts *pFVar5;
  FName local_res8;
  FString local_18;
  
  pFVar5 = FCoreTexts::Get();
  if (5 < (byte)LogMediaAssets._0_1_) {
    if (!param_1) {
      pFVar5 = (FCoreTexts *)&pFVar5->False;
    }
    FText::ToString(pFVar5->True);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->Loop = 0;
  *(uint *)&this->field_0x154 = *(uint *)&this->field_0x154 | (uint)param_1 * 2;
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((this->Loop != 0) &&
     ((pUVar1 = (this->Playlist).field0_0x0.DebugPtr, pUVar1 == (UMediaPlaylist *)0x0 ||
      ((pUVar1->Items).ArrayNum == 1)))) {
    bVar3 = FMediaPlayerFacade::SetLooping((this->PlayerFacade).Object,true);
    return bVar3;
  }
  bVar3 = FMediaPlayerFacade::SetLooping((this->PlayerFacade).Object,false);
  return bVar3;
}

// SetMediaOptions @ 146c369d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaPlayer::SetMediaOptions(UMediaPlayer *this,UMediaSource *param_1)

{
  code *pcVar1;
  bool bVar2;
  IMediaOptions *pIVar3;
  FName local_res8;
  FString local_18;
  
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar3 = (IMediaOptions *)&param_1->_padding_;
  if (param_1 == (UMediaSource *)0x0) {
    pIVar3 = (IMediaOptions *)0x0;
  }
  FMediaPlayerFacade::SetMediaOptions((this->PlayerFacade).Object,pIVar3);
  return;
}

// SetNativeVolume @ 146c36bd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::SetNativeVolume(UMediaPlayer *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::SetNativeVolume((this->PlayerFacade).Object,param_1);
  return bVar2;
}

// SetPlaybackTimeRange @ 146c36c30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::SetPlaybackTimeRange(UMediaPlayer *this,TRange<FTimespan> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (6 < (byte)LogMediaAssets._0_1_) {
    if (((param_1->UpperBound).Type.Value == '\x02') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FTimespan::ToString(&(param_1->UpperBound).Value,&local_18,L"%h:%m:%s.%t");
    if (((param_1->LowerBound).Type.Value == '\x02') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FTimespan::ToString(&(param_1->LowerBound).Value,&local_28,L"%h:%m:%s.%t");
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FMediaPlayerFacade::SetPlaybackTimeRange((this->PlayerFacade).Object,param_1);
  return bVar2;
}

// SetPlaybackTimeRange @ 146c36dd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::SetPlaybackTimeRange(UMediaPlayer *this,FFloatInterval param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  FName local_res8 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  TRange<FTimespan> local_28;
  
  local_res8[0].Number = param_1._4_4_;
  local_28.LowerBound.Type.Value = '\x01';
  local_res8[0].ComparisonIndex.Value = param_1._0_4_;
  auVar4._0_8_ = (double)((float)local_res8[0].Number * __real_4b189680 + __real_3f000000);
  auVar4._8_8_ = 0;
  auVar4 = roundpd(auVar4,auVar4,1);
  local_28.UpperBound.Value.Ticks = (long64)auVar4._0_8_;
  auVar5._0_8_ = (double)((float)local_res8[0].ComparisonIndex.Value * __real_4b189680 +
                         __real_3f000000);
  auVar5._8_8_ = 0;
  auVar4 = roundpd(auVar5,auVar5,1);
  local_28.LowerBound.Value.Ticks = (long64)auVar4._0_8_;
  local_28.UpperBound.Type.Value = '\0';
  local_res8[0] = (FName)param_1;
  if (6 < (byte)LogMediaAssets._0_1_) {
    FTimespan::ToString(&local_28.UpperBound.Value,&local_38,L"%h:%m:%s.%t");
    if ((local_28.LowerBound.Type.Value == '\x02') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FTimespan::ToString(&local_28.LowerBound.Value,&local_48,L"%h:%m:%s.%t");
    local_res8[0] = (FName)this->_padding_;
    ::FName::ToString(local_res8,&local_58);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FMediaPlayerFacade::SetPlaybackTimeRange((this->PlayerFacade).Object,&local_28);
  return bVar2;
}

// SetPlaylistInternal @ 146c36fb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMediaPlayer::SetPlaylistInternal(UMediaPlayer *this,UMediaPlaylist *param_1)

{
  UMediaPlaylist *pUVar1;
  FUObjectItem *pFVar2;
  
  pUVar1 = (this->Playlist).field0_0x0.DebugPtr;
  if (((pUVar1 != (UMediaPlaylist *)0x0) && (pUVar1 != param_1)) &&
     (pFVar2 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar1->_padding_ + 4)),
     ((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0)) {
    pFVar2 = FUObjectArray::IndexToObject
                       (&GUObjectArray,
                        *(int *)((longlong)&((this->Playlist).field0_0x0.DebugPtr)->_padding_ + 4));
    FUObjectItem::ClearRootFlags(pFVar2,RootSet);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (UMediaPlaylist *)0x0)) {
    (this->Playlist).field0_0x0.DebugPtr = param_1;
    if (param_1 == (UMediaPlaylist *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Playlist).field0_0x0.DebugPtr = param_1;
  }
  if (*(int *)((longlong)&this->_padding_ + 4) <= GUObjectArray.ObjLastNonGCIndex) {
    pFVar2 = FUObjectArray::IndexToObject
                       (&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
    FUObjectItem::SetRootFlags(pFVar2,RootSet);
  }
  return;
}

// SetRate @ 146c37080

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlayer::SetRate(UMediaPlayer *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName local_res8 [4];
  FString local_28 [2];
  
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res8[0] = (FName)this->_padding_;
    ::FName::ToString(local_res8,local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FMediaPlayerFacade::SetRate((this->PlayerFacade).Object,param_1);
  return bVar2;
}

// SetTimeDelay @ 146c373f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaPlayer::SetTimeDelay(UMediaPlayer *this,FTimespan param_1)

{
  code *pcVar1;
  FTimespan FVar2;
  bool bVar3;
  FName local_res8;
  FTimespan local_res10;
  FString local_28;
  FString local_18;
  
  local_res10.Ticks = param_1.Ticks;
  if (5 < (byte)LogMediaAssets._0_1_) {
    FTimespan::ToString(&local_res10,&local_18);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  FVar2.Ticks = local_res10.Ticks;
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (((this->PlayerFacade).Object)->TimeDelay).Ticks = FVar2.Ticks;
  return;
}

// SetTrackFormat @ 146c374e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMediaPlayer::SetTrackFormat(UMediaPlayer *this,EMediaPlayerTrack param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UEnum *this_00;
  FName local_res8;
  FString local_58;
  wchar_t *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_48 = L"MediaAssets.EMediaPlayerTrack";
    iStack_40 = 0x1d;
    pUVar4 = Z_Construct_UClass_UEnum_NoRegister();
    local_38._12_4_ = uStack_3c;
    local_38.Size = iStack_40;
    local_38.DataPtr = local_48;
    this_00 = (UEnum *)StaticFindObject(pUVar4,(UObject *)0x0,&local_38,None);
    if (this_00 == (UEnum *)0x0) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`private:_static_class_FString___cdecl_UEnum::GetValueAsString_Internal(wchar_t_const*___ptr64,__int64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    }
    UEnum::GetNameStringByValue(this_00,&local_58,(ulonglong)param_1);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FMediaPlayerFacade::SetTrackFormat
                    ((this->PlayerFacade).Object,(uint)param_1,param_2,param_3);
  return bVar2;
}

// SetVideoTrackFrameRate @ 146c37660

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMediaPlayer::SetVideoTrackFrameRate(UMediaPlayer *this,int param_1,int param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName local_res8;
  FString local_28 [2];
  
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FMediaPlayerFacade::SetVideoTrackFrameRate
                    ((this->PlayerFacade).Object,param_1,param_2,param_3);
  return bVar2;
}

// SetViewField @ 146c37750

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMediaPlayer::SetViewField(UMediaPlayer *this,float param_1,float param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FCoreTexts *pFVar4;
  FName local_res8;
  FString local_38 [3];
  
  pFVar4 = FCoreTexts::Get();
  if (5 < (byte)LogMediaAssets._0_1_) {
    if (!param_3) {
      pFVar4 = (FCoreTexts *)&pFVar4->False;
    }
    FText::ToString(pFVar4->True);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FMediaPlayerFacade::SetViewField((this->PlayerFacade).Object,param_1,param_2,param_3);
  return bVar2;
}

// SetViewRotation @ 146c37880

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMediaPlayer::SetViewRotation(UMediaPlayer *this,TRotator<double> *param_1,bool param_2)

{
  FMediaPlayerFacade *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FCoreTexts *pFVar4;
  TQuat<double> *pTVar5;
  FName local_res8;
  FString local_78;
  FString local_68;
  TQuat<double> local_58;
  TQuat<double> local_38;
  
  pFVar4 = FCoreTexts::Get();
  if (5 < (byte)LogMediaAssets._0_1_) {
    if (!param_2) {
      pFVar4 = (FCoreTexts *)&pFVar4->False;
    }
    FText::ToString(pFVar4->True);
    ::FString::PrintfImpl(&local_78,L"P=%f Y=%f R=%f");
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_68);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  this_00 = (this->PlayerFacade).Object;
  pTVar5 = UE::Math::TRotator<double>::Quaternion(param_1,&local_38);
  local_58.X = pTVar5->X;
  local_58.Y = pTVar5->Y;
  local_58.Z = pTVar5->Z;
  local_58.W = pTVar5->W;
  bVar2 = FMediaPlayerFacade::SetViewOrientation(this_00,&local_58,param_2);
  return bVar2;
}

// StaticRegisterNativesUMediaPlayer @ 146c37ec0

void __cdecl UMediaPlayer::StaticRegisterNativesUMediaPlayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x4f;
  local_18.DataPtr = Z_Construct_UClass_UMediaPlayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsPlaybackTimeRange @ 146c38070

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::SupportsPlaybackTimeRange(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::SupportsPlaybackTimeRange((this->PlayerFacade).Object);
  return bVar2;
}

// SupportsRate @ 146c380c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::SupportsRate(UMediaPlayer *this,float param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::SupportsRate((this->PlayerFacade).Object,param_1,param_2);
  return bVar2;
}

// SupportsScrubbing @ 146c38140

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::SupportsScrubbing(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::CanScrub((this->PlayerFacade).Object);
  return bVar2;
}

// SupportsSeeking @ 146c38190

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaPlayer::SupportsSeeking(UMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FMediaPlayerFacade::CanSeek((this->PlayerFacade).Object);
  return bVar2;
}

// UnregisterWithMediaModule @ 146c39320

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaPlayer::UnregisterWithMediaModule(UMediaPlayer *this)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMediaPlayerFacade *pFVar3;
  bool bVar4;
  IModuleInterface *pIVar5;
  longlong *plVar6;
  FMediaPlayerFacade *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar5 = FModuleManager::GetModulePtr_Internal(MediaModuleName);
  if (pIVar5 != (IModuleInterface *)0x0) {
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0xa8))(pIVar5);
    pcVar1 = *(code **)(*plVar6 + 0x18);
    if ((this->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar2 = (this->PlayerFacade).SharedReferenceCount.ReferenceController;
    pFVar3 = (this->PlayerFacade).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 == (FMediaPlayerFacade *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = pFVar3;
    local_10 = pTVar2;
    (*pcVar1)(plVar6,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    this->RegisteredWithMediaModule = false;
  }
  return;
}

// __VTableCtorCaller @ 146c3b330

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UMediaPlayer::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &_vftable__for__IAudioProxyDataFactory__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined8 *)&pUVar1[10].field_0x8 = 0;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 2;
    *(undefined8 *)&pUVar1[10].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xc) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// execCanPause @ 146c3bcc0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execCanPause(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::CanPause(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(bool *)param_3 = bVar2;
  return;
}

// execCanPlaySource @ 146c3bd40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execCanPlaySource(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMediaPlayerFacade *this;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  FString *pFVar6;
  IMediaOptions *pIVar7;
  longlong *local_res10;
  FName local_res18;
  FName local_res20;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  plVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 == (longlong *)0x0) ||
     (cVar4 = (**(code **)(*local_res10 + 0x2b8))(local_res10), cVar4 == '\0')) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res18 = *(FName *)(plVar3 + 3);
    ::FName::ToString(&local_res18,&local_48);
    local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res20.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res20,&local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = *(FMediaPlayerFacade **)&param_1[10].field_0x20;
  pFVar6 = (FString *)(**(code **)(*plVar3 + 0x2b0))(plVar3,local_38);
  pIVar7 = (IMediaOptions *)(plVar3 + 5);
  if (plVar3 == (longlong *)0x0) {
    pIVar7 = (IMediaOptions *)0x0;
  }
  bVar5 = FMediaPlayerFacade::CanPlayUrl(this,pFVar6,pIVar7);
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  *(bool *)param_3 = bVar5;
  return;
}

// execCanPlayUrl @ 146c3bf10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execCanPlayUrl(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMediaPlayerFacade *this;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *this_00;
  UObject *pUVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res10.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res10,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.ArrayNum < 2) {
    bVar4 = false;
  }
  else {
    if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this = *(FMediaPlayerFacade **)&param_1[10].field_0x20;
    this_00 = UMediaSource::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar5 = pUVar2 + 1;
    if (pUVar2 == (UObject *)0x0) {
      pUVar5 = (UObject *)0x0;
    }
    bVar4 = FMediaPlayerFacade::CanPlayUrl(this,&local_28,(IMediaOptions *)pUVar5);
  }
  *(bool *)param_3 = bVar4;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execClose @ 146c3c0a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execClose(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Close((UMediaPlayer *)param_1);
  return;
}

// execGetAudioTrackChannels @ 146c3c500

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetAudioTrackChannels(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar4 = local_res10[0];
  iVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = FMediaPlayerFacade::GetAudioTrackChannels
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,iVar4,iVar3);
  *(uint *)param_3 = uVar6;
  return;
}

// execGetAudioTrackSampleRate @ 146c3c610

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UMediaPlayer::execGetAudioTrackSampleRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar4 = local_res10[0];
  iVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = FMediaPlayerFacade::GetAudioTrackSampleRate
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,iVar4,iVar3);
  *(uint *)param_3 = uVar6;
  return;
}

// execGetAudioTrackType @ 146c3c720

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetAudioTrackType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int local_res8 [2];
  int local_res10 [2];
  FString local_28;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar4 = local_res10[0];
  iVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMediaPlayerFacade::GetAudioTrackType
            (*(FMediaPlayerFacade **)&param_1[10].field_0x20,&local_28,iVar4,iVar3);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetDesiredPlayerName @ 146c3c880

void __cdecl UMediaPlayer::execGetDesiredPlayerName(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)&param_1[10].field_0x20 + 0x28);
  return;
}

// execGetDisplayTime @ 146c3c900

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetDisplayTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  FTimespan FVar3;
  FMediaTimeStamp local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMediaPlayerFacade::GetDisplayTimeStamp(*(FMediaPlayerFacade **)&param_1[10].field_0x20,&local_18)
  ;
  FVar3.Ticks = 0;
  if (local_18.Time.Ticks != -0x8000000000000000) {
    FVar3.Ticks = local_18.Time.Ticks;
  }
  *(long64 *)param_3 = FVar3.Ticks;
  return;
}

// execGetDisplayTimeStamp @ 146c3c9a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetDisplayTimeStamp(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UMediaTimeStampInfo *pUVar4;
  FMediaTimeStamp local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UMediaTimeStampInfo>(pUVar3);
  if (pUVar4 != (UMediaTimeStampInfo *)0x0) {
    if (*(longlong *)&param_1[10].field_0x20 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FMediaPlayerFacade::GetDisplayTimeStamp
              (*(FMediaPlayerFacade **)&param_1[10].field_0x20,&local_18);
    (pUVar4->Time).Ticks = local_18.Time.Ticks;
    pUVar4->SequenceIndex = CONCAT44(local_18.SequenceIndex,local_18.LoopIndex);
  }
  *(UMediaTimeStampInfo **)param_3 = pUVar4;
  return;
}

// execGetDuration @ 146c3ca60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetDuration(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 local_res8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMediaPlayerFacade::GetDuration(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(undefined8 *)param_3 = local_res8;
  return;
}

// execGetHorizontalFieldOfView @ 146c3cb50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UMediaPlayer::execGetHorizontalFieldOfView(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  float local_res8 [2];
  float local_res10 [2];
  
  local_res8[0] = 0.0;
  local_res10[0] = 0.0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::GetViewField
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,local_res8,local_res10);
  if (!bVar2) {
    *(undefined4 *)param_3 = 0;
    return;
  }
  *(float *)param_3 = local_res8[0];
  return;
}

// execGetMediaMetadataItems @ 146c3cc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetMediaMetadataItems(UObject *param_1,FFrame *param_2,void *param_3)

{
  TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
  *pTVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = (TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
            *)GetMediaMetadataItems
                        ((UMediaPlayer *)param_1,
                         (TMap<FString,FMediaMetadataItemsBPT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>_>
                          *)local_68);
  if (param_3 != pTVar1) {
    TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>_>
              (param_3,pTVar1);
  }
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FMediaMetadataItemsBPT>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FMediaMetadataItemsBPT>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FMediaMetadataItemsBPT>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return;
}

// execGetMediaName @ 146c3cca0

void __cdecl UMediaPlayer::execGetMediaName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  longlong *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = (FText *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)(*local_18[0] + 0x10))();
  }
  return;
}

// execGetNumTrackFormats @ 146c3cf10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetNumTrackFormats(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EMediaTrackType EVar5;
  byte local_res8 [8];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar5 = (EMediaTrackType)local_res8[0];
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = FMediaPlayerFacade::GetNumTrackFormats
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,EVar5,iVar4);
  *(int *)param_3 = iVar4;
  return;
}

// execGetNumTracks @ 146c3d020

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetNumTracks(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EMediaTrackType EVar5;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar5 = (EMediaTrackType)local_res8[0];
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = FMediaPlayerFacade::GetNumTracks(*(FMediaPlayerFacade **)&param_1[10].field_0x20,EVar5);
  *(int *)param_3 = iVar4;
  return;
}

// execGetPlaybackTimeRange @ 146c3d0f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetPlaybackTimeRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFloatInterval FVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2 = GetPlaybackTimeRange((UMediaPlayer *)param_1,(EMediaTimeRangeBPType)local_res18);
  *(undefined8 *)param_3 = *(undefined8 *)FVar2;
  return;
}

// execGetPlayerName @ 146c3d190

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetPlayerName(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 local_res8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMediaPlayerFacade::GetPlayerName(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(undefined8 *)param_3 = local_res8;
  return;
}

// execGetPlaylist @ 146c3d210

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetPlaylist(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EnsurePlaylist((UMediaPlayer *)param_1);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[8].field_0x18;
  return;
}

// execGetPlaylistIndex @ 146c3d260

void __cdecl UMediaPlayer::execGetPlaylistIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[8].field_0x20;
  return;
}

// execGetRate @ 146c3d3f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = FMediaPlayerFacade::GetRate(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(float *)param_3 = fVar3;
  return;
}

// execGetSelectedTrack @ 146c3d470

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetSelectedTrack(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EMediaTrackType EVar5;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar5 = (EMediaTrackType)local_res8[0];
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = FMediaPlayerFacade::GetSelectedTrack
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,EVar5);
  *(int *)param_3 = iVar4;
  return;
}

// execGetSupportedRates @ 146c3d5c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetSupportedRates(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int *piVar3;
  ForAnyElementType _Src;
  bool bVar4;
  TRangeSet<float> *pTVar5;
  bool bVar6;
  int local_res8 [2];
  TRangeSet<float> local_38;
  TRangeSet<float> local_28;
  
  local_38.Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Ranges.ArrayNum = 0;
  local_38.Ranges.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  pTVar5 = &local_38;
  if ((TRangeSet<float> *)param_2->MostRecentPropertyAddress != (TRangeSet<float> *)0x0) {
    pTVar5 = (TRangeSet<float> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar6 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMediaPlayerFacade::GetSupportedRates
            (*(FMediaPlayerFacade **)&param_1[10].field_0x20,&local_28,bVar6);
  _Src.Data = local_28.Ranges.AllocatorInstance.Data;
  local_28.Ranges.AllocatorInstance.Data = _Src.Data;
  if (pTVar5 != &local_28) {
    piVar3 = &(pTVar5->Ranges).ArrayMax;
    (pTVar5->Ranges).ArrayNum = local_28.Ranges.ArrayNum;
    if ((local_28.Ranges.ArrayNum == 0) && (*piVar3 == 0)) {
      *piVar3 = 0;
      local_28.Ranges.AllocatorInstance.Data = _Src.Data;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_28.Ranges.ArrayNum,*piVar3,(ForAnyElementType *)pTVar5,
                 local_28.Ranges.ArrayNum,piVar3);
      if (local_28.Ranges.ArrayNum != 0) {
        memcpy((pTVar5->Ranges).AllocatorInstance.Data,_Src.Data,
               (longlong)local_28.Ranges.ArrayNum << 4);
      }
    }
  }
  if (local_28.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ranges.AllocatorInstance.Data);
  }
  if (local_38.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Ranges.AllocatorInstance.Data);
  }
  return;
}

// execGetTime @ 146c3d7b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 local_res8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMediaPlayerFacade::GetTime(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(undefined8 *)param_3 = local_res8;
  return;
}

// execGetTimeDelay @ 146c3d830

void __cdecl UMediaPlayer::execGetTimeDelay(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)&param_1[10].field_0x20 + 0x30);
  return;
}

// execGetTimeStamp @ 146c3d8b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetTimeStamp(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UMediaTimeStampInfo *pUVar4;
  FMediaTimeStamp local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UMediaTimeStampInfo>(pUVar3);
  if (pUVar4 != (UMediaTimeStampInfo *)0x0) {
    if (*(longlong *)&param_1[10].field_0x20 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FMediaPlayerFacade::GetTimeStamp(*(FMediaPlayerFacade **)&param_1[10].field_0x20,&local_18);
    (pUVar4->Time).Ticks = local_18.Time.Ticks;
    pUVar4->SequenceIndex = CONCAT44(local_18.SequenceIndex,local_18.LoopIndex);
  }
  *(UMediaTimeStampInfo **)param_3 = pUVar4;
  return;
}

// execGetTrackDisplayName @ 146c3d970

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetTrackDisplayName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  byte local_res8 [8];
  int local_res10 [2];
  FText local_28;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar4 = local_res10[0];
  bVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMediaPlayerFacade::GetTrackDisplayName
            (*(FMediaPlayerFacade **)&param_1[10].field_0x20,&local_28,(uint)bVar3,iVar4);
  FText::operator=(param_3,&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execGetTrackFormat @ 146c3daa0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetTrackFormat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EMediaTrackType EVar5;
  byte local_res8 [8];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar5 = (EMediaTrackType)local_res8[0];
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = FMediaPlayerFacade::GetTrackFormat
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,EVar5,iVar4);
  *(int *)param_3 = iVar4;
  return;
}

// execGetTrackLanguage @ 146c3dbb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetTrackLanguage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  EMediaTrackType EVar5;
  byte local_res8 [8];
  int local_res10 [2];
  FString local_28;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res10[0];
  EVar5 = (EMediaTrackType)local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMediaPlayerFacade::GetTrackLanguage
            (*(FMediaPlayerFacade **)&param_1[10].field_0x20,&local_28,EVar5,iVar3);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetUrl @ 146c3dd20

void __cdecl UMediaPlayer::execGetUrl(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::FString::operator=(param_3,(FString *)(*(longlong *)&param_1[10].field_0x20 + 0x260));
  return;
}

// execGetVerticalFieldOfView @ 146c3de30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UMediaPlayer::execGetVerticalFieldOfView(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  float local_res8 [2];
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  local_res8[0] = 0.0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::GetViewField
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,local_res10,local_res8);
  if (!bVar2) {
    *(undefined4 *)param_3 = 0;
    return;
  }
  *(float *)param_3 = local_res8[0];
  return;
}

// execGetVideoTrackAspectRatio @ 146c3def0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UMediaPlayer::execGetVideoTrackAspectRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar4 = local_res10[0];
  iVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar6 = FMediaPlayerFacade::GetVideoTrackAspectRatio
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,iVar4,iVar3);
  *(float *)param_3 = fVar6;
  return;
}

// execGetVideoTrackDimensions @ 146c3e000

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UMediaPlayer::execGetVideoTrackDimensions(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_res8 [2];
  int local_res10 [2];
  undefined8 local_res18;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMediaPlayerFacade::GetVideoTrackDimensions
            (*(FMediaPlayerFacade **)&param_1[10].field_0x20,(int)&local_res18,iVar3);
  *(undefined8 *)param_3 = local_res18;
  return;
}

// execGetVideoTrackFrameRate @ 146c3e120

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UMediaPlayer::execGetVideoTrackFrameRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar4 = local_res10[0];
  iVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar6 = FMediaPlayerFacade::GetVideoTrackFrameRate
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,iVar4,iVar3);
  *(float *)param_3 = fVar6;
  return;
}

// execGetVideoTrackFrameRates @ 146c3e230

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UMediaPlayer::execGetVideoTrackFrameRates(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  TRangeBound<float> TVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  TRange<float> *pTVar7;
  int local_res8 [2];
  int local_res10 [2];
  TRange<float> local_28;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar5 = local_res10[0];
  iVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar7 = FMediaPlayerFacade::GetVideoTrackFrameRates
                     (*(FMediaPlayerFacade **)&param_1[10].field_0x20,&local_28,iVar5,iVar4);
  TVar3 = pTVar7->UpperBound;
  *(TRangeBound<float> *)param_3 = pTVar7->LowerBound;
  *(TRangeBound<float> *)((longlong)param_3 + 8) = TVar3;
  return;
}

// execGetVideoTrackType @ 146c3e340

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetVideoTrackType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int local_res8 [2];
  int local_res10 [2];
  FString local_28;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar4 = local_res10[0];
  iVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMediaPlayerFacade::GetVideoTrackType
            (*(FMediaPlayerFacade **)&param_1[10].field_0x20,&local_28,iVar4,iVar3);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetViewRotation @ 146c3e4a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execGetViewRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar4 = FMediaPlayerFacade::GetViewOrientation
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,&local_28);
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  if (!bVar4) {
    *(double *)param_3 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)((longlong)param_3 + 8) = dVar2;
    *(double *)((longlong)param_3 + 0x10) = dVar3;
    return;
  }
  UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
  *(double *)param_3 = local_48.Pitch;
  *(double *)((longlong)param_3 + 8) = local_48.Yaw;
  *(double *)((longlong)param_3 + 0x10) = local_48.Roll;
  return;
}

// execHasError @ 146c3e590

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execHasError(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::HasError(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(bool *)param_3 = bVar2;
  return;
}

// execIsBuffering @ 146c3e7e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execIsBuffering(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::IsBuffering(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(bool *)param_3 = bVar2;
  return;
}

// execIsClosed @ 146c3e860

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execIsClosed(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::IsClosed(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(bool *)param_3 = bVar2;
  return;
}

// execIsConnecting @ 146c3e8e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execIsConnecting(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::IsConnecting(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(bool *)param_3 = bVar2;
  return;
}

// execIsLooping @ 146c3e960

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execIsLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::IsLooping(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(bool *)param_3 = bVar2;
  return;
}

// execIsPaused @ 146c3e9e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execIsPaused(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::IsPaused(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(bool *)param_3 = bVar2;
  return;
}

// execIsPlaying @ 146c3ea60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execIsPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::IsPlaying(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(bool *)param_3 = bVar2;
  return;
}

// execIsPreparing @ 146c3eae0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execIsPreparing(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::IsPreparing(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(bool *)param_3 = bVar2;
  return;
}

// execIsReady @ 146c3eb60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execIsReady(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::IsReady(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(bool *)param_3 = bVar2;
  return;
}

// execNext @ 146c3ebe0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execNext(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = Next((UMediaPlayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOpenFile @ 146c3ec50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMediaPlayer::execOpenFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  UMediaPlaylist *this;
  FName FVar4;
  bool bVar5;
  FName *pFVar6;
  FName FVar7;
  UClass *pUVar8;
  UPackage *pUVar9;
  UFileMediaSource *pUVar10;
  FString *pFVar11;
  ForAnyElementType FVar12;
  int iVar13;
  FName local_res8;
  FName local_res10;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Close((UMediaPlayer *)param_1);
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res8.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res8,&local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  EnsurePlaylist((UMediaPlayer *)param_1);
  this = *(UMediaPlaylist **)&param_1[8].field_0x18;
  if ((this != (UMediaPlaylist *)0x0) && (1 < local_98.Data.ArrayNum)) {
    FPaths::GetBaseFilename(&local_58,&local_98,true);
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar12.Data = local_58.Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FName::FName(&local_res10,(wchar_t *)FVar12.Data);
    FVar4 = *pFVar6;
    FVar7 = (FName)UFileMediaSource::StaticClass();
    pUVar8 = (UClass *)GetTransientPackage();
    MakeUniqueObjectName((UObject *)&local_res8,pUVar8,FVar7,FVar4.ComparisonIndex.Value.Value);
    FVar4 = local_res8;
    pUVar9 = GetTransientPackage();
    pUVar10 = NewObject<UFileMediaSource>
                        ((UObject *)pUVar9,FVar4,RF_Transient|RF_Transactional,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    ::FString::Empty(&pUVar10->ResolvedFullPath);
    iVar13 = local_98.Data.ArrayNum;
    if (local_98.Data.ArrayNum < 2) {
LAB_146c3ef2b:
      FVar12.Data = local_98.Data.AllocatorInstance.Data;
      pFVar11 = &pUVar10->FilePath;
      if (pFVar11 != &local_98) {
        piVar1 = &(pUVar10->FilePath).Data.ArrayMax;
        iVar2 = *piVar1;
        (pUVar10->FilePath).Data.ArrayNum = iVar13;
        if ((iVar13 == 0) && (iVar2 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar13,iVar2,(ForAnyElementType *)pFVar11,iVar13,piVar1);
          if (iVar13 != 0) {
            memcpy((pFVar11->Data).AllocatorInstance.Data,FVar12.Data,(longlong)iVar13 * 2);
          }
        }
      }
    }
    else {
      bVar5 = ::FString::StartsWith(&local_98,L"./",2,IgnoreCase);
      if (bVar5) {
        iVar13 = local_98.Data.ArrayNum;
        goto LAB_146c3ef2b;
      }
      FPaths::ConvertRelativePathToFull(&local_88,&local_98);
      pFVar11 = FPaths::ProjectContentDir(&local_78);
      FPaths::ConvertRelativePathToFull(&local_68,pFVar11);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      iVar13 = local_68.Data.ArrayNum + -1;
      FVar12.Data = local_68.Data.AllocatorInstance.Data;
      if (local_68.Data.ArrayNum == 0) {
        iVar13 = 0;
        FVar12.Data = (FScriptContainerElement *)L"";
      }
      bVar5 = ::FString::StartsWith(&local_88,(wchar_t *)FVar12.Data,iVar13,IgnoreCase);
      if (bVar5) {
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar12.Data = local_68.Data.AllocatorInstance.Data;
        }
        FPaths::MakePathRelativeTo(&local_88,(wchar_t *)FVar12.Data);
        pFVar11 = ::FString::FString(&local_48,L"./");
        ::FString::ConcatFF(&local_78,pFVar11,&local_88);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        local_88.Data.ArrayNum = local_78.Data.ArrayNum;
        local_88.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
        local_88.Data.ArrayMax = local_78.Data.ArrayMax;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      iVar13 = local_88.Data.ArrayNum + -1;
      if (local_88.Data.ArrayNum == 0) {
        iVar13 = 0;
      }
      ::FString::AssignRange
                (&pUVar10->FilePath,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar13);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = UMediaPlaylist::Add(this,(UMediaSource *)pUVar10);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      bVar5 = Next((UMediaPlayer *)param_1);
      goto LAB_146c3efbe;
    }
  }
  bVar5 = false;
LAB_146c3efbe:
  *(bool *)param_3 = bVar5;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// execOpenPlaylist @ 146c3f010

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UMediaPlayer::execOpenPlaylist(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  longlong *plVar3;
  UObject *pUVar4;
  char cVar5;
  bool bVar6;
  FUObjectItem *pFVar7;
  FMediaPlayerFacade *this;
  FString *pFVar8;
  UObject *local_res10;
  FName local_res18;
  FName local_res20;
  FString local_48;
  FString local_38;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Close((UMediaPlayer *)param_1);
  if (pUVar4 == (UObject *)0x0) {
    if ((byte)LogMediaAssets._0_1_ < 3) goto LAB_146c3f36f;
    local_res18.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res18.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res18,&local_48);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    if (5 < (byte)LogMediaAssets._0_1_) {
      local_res18.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_res18.Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(&local_res18,&local_38);
      local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res20.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res20,&local_48);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pUVar2 = *(UObject **)&param_1[8].field_0x18;
    if (((pUVar2 != (UObject *)0x0) && (pUVar2 != pUVar4)) &&
       (pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc),
       ((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0)) {
      pFVar7 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)(*(longlong *)&param_1[8].field_0x18 + 0xc));
      FUObjectItem::ClearRootFlags(pFVar7,RootSet);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(UObject **)&param_1[8].field_0x18 = pUVar4;
    if (*(int *)&param_1->field_0xc <= GUObjectArray.ObjLastNonGCIndex) {
      pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar4->field_0xc);
      FUObjectItem::SetRootFlags(pFVar7,RootSet);
    }
    if ((*(int *)(*(longlong *)&param_1[8].field_0x18 + 0x30) < 1) ||
       (plVar3 = (longlong *)**(longlong **)(*(longlong *)&param_1[8].field_0x18 + 0x28),
       plVar3 == (longlong *)0x0)) {
      if ((byte)LogMediaAssets._0_1_ < 3) goto LAB_146c3f36f;
      local_res18.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res18.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res18,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    }
    else {
      *(undefined4 *)&param_1[8].field_0x20 = 0;
      cVar5 = (**(code **)(*plVar3 + 0x2b8))(plVar3);
      if (cVar5 != '\0') {
        RegisterWithMediaModule((UMediaPlayer *)param_1);
        this = TSharedPtr<FMediaPlayerFacade,1>::operator->
                         ((TSharedPtr<FMediaPlayerFacade,1> *)&param_1[10].field_0x20);
        pFVar8 = (FString *)(**(code **)(*plVar3 + 0x2b0))(plVar3,&local_38);
        bVar6 = FMediaPlayerFacade::Open
                          (this,pFVar8,(IMediaOptions *)(plVar3 + 5),(FMediaPlayerOptions *)0x0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        *(bool *)param_3 = bVar6;
        return;
      }
      if ((byte)LogMediaAssets._0_1_ < 2) goto LAB_146c3f36f;
      (**(code **)(*plVar3 + 0x2b0))(plVar3,&local_38);
      local_res18 = *(FName *)(plVar3 + 3);
      ::FName::ToString(&local_res18,&local_48);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_146c3f36f:
  *(undefined1 *)param_3 = 0;
  return;
}

// execOpenPlaylistIndex @ 146c3f390

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UMediaPlayer::execOpenPlaylistIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  uint uVar6;
  UObject *pUVar7;
  bool bVar8;
  char cVar9;
  FUObjectItem *pFVar10;
  FMediaPlayerFacade *this;
  FString *pFVar11;
  longlong lVar12;
  uint uVar13;
  uint local_res10 [2];
  UObject *local_res18;
  FName local_res20;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FScriptContainerElement *local_68 [2];
  void *local_58 [2];
  FString local_48;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar7 = local_res18;
  uVar6 = local_res10[0];
  lVar12 = (longlong)(int)local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Close((UMediaPlayer *)param_1);
  if (pUVar7 == (UObject *)0x0) {
    if (2 < (byte)LogMediaAssets._0_1_) {
      local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res20.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res20,&local_98);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_c8.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
    local_c8.Number = *(uint *)&pUVar7->field_0x1c;
    ::FName::ToString(&local_c8,&local_78);
    local_c0.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_c0.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_c0,&local_88);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pUVar2 = *(UObject **)&param_1[8].field_0x18;
  if (((pUVar2 != (UObject *)0x0) && (pUVar2 != pUVar7)) &&
     (pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc),
     ((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0)) {
    pFVar10 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)(*(longlong *)&param_1[8].field_0x18 + 0xc));
    FUObjectItem::ClearRootFlags(pFVar10,RootSet);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  *(UObject **)&param_1[8].field_0x18 = pUVar7;
  if (*(int *)&param_1->field_0xc <= GUObjectArray.ObjLastNonGCIndex) {
    pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar7->field_0xc);
    FUObjectItem::SetRootFlags(pFVar10,RootSet);
  }
  if (uVar6 == 0xffffffff) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  lVar3 = *(longlong *)&param_1[8].field_0x18;
  if (((int)uVar6 < 0) || (*(int *)(lVar3 + 0x30) <= (int)uVar6)) {
LAB_146c3f740:
    if ((byte)LogMediaAssets._0_1_ < 3) goto LAB_146c3f78e;
    local_b0.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_b0.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_b0,&local_48);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
  }
  else {
    uVar13 = 0;
    if ((int)uVar6 < *(int *)(lVar3 + 0x30)) {
      uVar13 = ~uVar6 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x28) + lVar12 * 8);
    if (plVar4 == (longlong *)0x0) goto LAB_146c3f740;
    *(uint *)&param_1[8].field_0x20 = uVar6;
    cVar9 = (**(code **)(*plVar4 + 0x2b8))(plVar4);
    if (cVar9 != '\0') {
      RegisterWithMediaModule((UMediaPlayer *)param_1);
      this = TSharedPtr<FMediaPlayerFacade,1>::operator->
                       ((TSharedPtr<FMediaPlayerFacade,1> *)&param_1[10].field_0x20);
      pFVar11 = (FString *)(**(code **)(*plVar4 + 0x2b0))(plVar4,local_58);
      bVar8 = FMediaPlayerFacade::Open
                        (this,pFVar11,(IMediaOptions *)(plVar4 + 5),(FMediaPlayerOptions *)0x0);
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
      *(bool *)param_3 = bVar8;
      return;
    }
    if ((byte)LogMediaAssets._0_1_ < 2) goto LAB_146c3f78e;
    (**(code **)(*plVar4 + 0x2b0))(plVar4,local_68);
    local_b8 = *(FName *)(plVar4 + 3);
    ::FName::ToString(&local_b8,&local_a8);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    local_48.Data.AllocatorInstance.Data = local_68[0];
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      local_48.Data.AllocatorInstance.Data = local_68[0];
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_146c3f78e:
  *(undefined1 *)param_3 = 0;
  return;
}

// execOpenSource @ 146c3f7b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMediaPlayer::execOpenSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  ForAnyElementType *pFVar1;
  byte bVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  UObject *pUVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FMediaPlayerFacade *pFVar10;
  FString *pFVar11;
  UObject *local_res10;
  FName local_res18;
  FName local_res20;
  UObject *local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FScriptContainerElement *local_58 [2];
  FScriptContainerElement *local_48 [2];
  void *local_38 [2];
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Close((UMediaPlayer *)param_1);
  if (pUVar6 == (UObject *)0x0) {
    if ((byte)LogMediaAssets._0_1_ < 3) goto LAB_146c3f885;
    local_res18.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res18.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res18,&local_88);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
  }
  else {
    if (5 < (byte)LogMediaAssets._0_1_) {
      local_res20.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res20.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_res20,&local_68);
      local_c0.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_c0.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_c0,&local_78);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    cVar7 = (**(code **)(*(longlong *)pUVar6 + 0x2b8))(pUVar6);
    if (cVar7 == '\0') {
      if ((byte)LogMediaAssets._0_1_ < 2) goto LAB_146c3f885;
      (**(code **)(*(longlong *)pUVar6 + 0x2b0))(pUVar6,local_58);
      local_b8.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_b8.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_b8,&local_a8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      local_88.Data.AllocatorInstance.Data = local_58[0];
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        local_88.Data.AllocatorInstance.Data = local_58[0];
      }
    }
    else {
      EnsurePlaylist((UMediaPlayer *)param_1);
      lVar4 = *(longlong *)&param_1[8].field_0x18;
      if (lVar4 != 0) {
        pFVar1 = (ForAnyElementType *)(lVar4 + 0x28);
        local_c8 = pUVar6;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        if (((pFVar1->Data <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 <
             pFVar1->Data + (longlong)*(int *)(lVar4 + 0x34) * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = *(int *)(lVar4 + 0x30);
        if (iVar9 == *(int *)(lVar4 + 0x34)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar1,(int *)(lVar4 + 0x34));
        }
        *(int *)(lVar4 + 0x30) = iVar9 + 1;
        *(UObject **)(pFVar1->Data + (longlong)iVar9 * 8) = local_c8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_c8);
        }
        bVar2 = param_1[0xb].field_0x18;
        pFVar10 = TSharedPtr<FMediaPlayerFacade,1>::operator->
                            ((TSharedPtr<FMediaPlayerFacade,1> *)&param_1[10].field_0x20);
        bVar8 = FMediaPlayerFacade::IsPlaying(pFVar10);
        param_1[0xb].field_0x18 = bVar8 | bVar2;
        UMediaPlaylist::GetNext
                  (*(UMediaPlaylist **)&param_1[8].field_0x18,(int *)&param_1[8].field_0x20);
        RegisterWithMediaModule((UMediaPlayer *)param_1);
        pFVar10 = TSharedPtr<FMediaPlayerFacade,1>::operator->
                            ((TSharedPtr<FMediaPlayerFacade,1> *)&param_1[10].field_0x20);
        pFVar11 = (FString *)(**(code **)(*(longlong *)pUVar6 + 0x2b0))(pUVar6,local_38);
        bVar8 = FMediaPlayerFacade::Open
                          (pFVar10,pFVar11,(IMediaOptions *)(pUVar6 + 1),(FMediaPlayerOptions *)0x0)
        ;
        if (local_38[0] != (void *)0x0) {
          FMemory::Free(local_38[0]);
        }
        *(bool *)param_3 = bVar8;
        return;
      }
      if ((byte)LogMediaAssets._0_1_ < 2) goto LAB_146c3f885;
      (**(code **)(*(longlong *)pUVar6 + 0x2b0))(pUVar6,local_48);
      local_b0.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_b0.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_b0,&local_98);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      local_88.Data.AllocatorInstance.Data = local_48[0];
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
        local_88.Data.AllocatorInstance.Data = local_48[0];
      }
    }
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_146c3f885:
  *(undefined1 *)param_3 = 0;
  return;
}

// execOpenSourceLatent @ 146c3fba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execOpenSourceLatent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMediaPlayerOptions *pFVar1;
  FProperty *pFVar2;
  UMediaSource *pUVar3;
  UObject *pUVar4;
  int iVar5;
  UObject *pUVar6;
  uint uVar7;
  UWorld *this;
  FLatentActionManager *this_00;
  FLatentOpenMediaSourceAction *pFVar8;
  FLatentOpenMediaSourceAction *this_01;
  bool *pbVar9;
  FMediaPlayerOptions *pFVar10;
  bool bVar11;
  undefined1 auStackY_198 [32];
  bool local_168;
  FFirstItemPredicate local_167 [7];
  UMediaSource *local_160;
  UObject *local_158;
  undefined8 local_150;
  FName local_148;
  UObject *local_140;
  FLatentActionInfo local_138;
  undefined1 local_118 [120];
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_150 = 0xffffffffffffffff;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  local_140 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_160 = (UMediaSource *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_118._0_4_ = ___xmm_ffffffffffffffffffffffff00000000;
  local_118._4_4_ = _UNK_15076cba4;
  local_118._8_4_ = _UNK_15076cba8;
  local_118._12_4_ = _UNK_15076cbac;
  local_78 = ___xmm_00000000ffffffff0000008000000000;
  uStack_70 = _UNK_150631d98;
  local_118._16_4_ = -1;
  local_118._20_4_ = -1;
  local_118._24_4_ = 0;
  local_118._32_8_ = (FScriptContainerElement *)0x0;
  local_118._40_4_ = 0;
  local_118._44_4_ = 0;
  local_118._48_8_ = (FScriptContainerElement *)0x0;
  local_118._56_4_ = 0;
  local_118._60_4_ = 0;
  local_118._64_8_ = (FScriptContainerElement *)0x0;
  local_118._72_4_ = 0;
  local_118._76_4_ = 0;
  local_118._80_8_ = (FScriptContainerElement *)0x0;
  local_118._88_4_ = 0;
  local_118._92_4_ = 0;
  local_118[0x60] = UseTrackOptionIndices;
  local_118._104_8_ = 0;
  local_118[0x70] = RelativeToStartTime;
  local_118[0x71] = UseMediaPlayerSetting;
  local_118[0x72] = UseMediaPlayerSetting;
  local_a0._0_8_ = (FScriptContainerElement *)0x0;
  local_a0._8_8_ = 0;
  local_80 = (void *)0x0;
  local_60 = (void *)0x0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  pFVar1 = (FMediaPlayerOptions *)param_2->MostRecentPropertyAddress;
  local_168 = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar10 = (FMediaPlayerOptions *)local_118;
  if (pFVar1 != (FMediaPlayerOptions *)0x0) {
    pFVar10 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  pUVar6 = local_140;
  pUVar3 = local_160;
  iVar5 = local_150._4_4_;
  pbVar9 = &local_168;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar9 = (bool *)param_2->MostRecentPropertyAddress;
  }
  local_138.UUID = local_150._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_138.Linkage = (int)local_150;
  local_138.ExecutionFunction = local_148;
  local_138.CallbackTarget.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)local_140;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_140 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_140);
  }
  pUVar4 = local_158;
  *pbVar9 = false;
  this = UEngine::GetWorldFromContextObject(GEngine,pUVar4,LogAndReturnNull);
  if (this != (UWorld *)0x0) {
    this_00 = UWorld::GetLatentActionManager(this);
    pFVar8 = FLatentActionManager::
             FindExistingActionWithPredicate<FLatentOpenMediaSourceAction,_FLatentActionManager::FindExistingAction<FLatentOpenMediaSourceAction>_::__l2::FFirstItemPredicate>
                       (this_00,pUVar6,iVar5,local_167);
    if (pFVar8 == (FLatentOpenMediaSourceAction *)0x0) {
      this_01 = ::operator_new(0x110);
      pFVar8 = (FLatentOpenMediaSourceAction *)0x0;
      if (this_01 != (FLatentOpenMediaSourceAction *)0x0) {
        pFVar8 = FLatentOpenMediaSourceAction::FLatentOpenMediaSourceAction
                           (this_01,&local_138,(UMediaPlayer *)param_1,pUVar3,pFVar10,pbVar9);
      }
      FLatentActionManager::AddNewAction(this_00,pUVar6,iVar5,(FPendingLatentAction *)pFVar8);
    }
  }
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a0,0,local_a0._8_4_);
  bVar11 = local_a0._12_4_ != 0;
  local_a0._8_8_ = (ulonglong)(uint)local_a0._12_4_ << 0x20;
  if (bVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
  }
  uVar7 = local_78._4_4_;
  uStack_70 = 0xffffffff;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  if (0x80 < uVar7) {
    local_78 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a0._0_8_);
  }
  if ((FScriptContainerElement *)local_118._80_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._80_8_);
  }
  if ((FScriptContainerElement *)local_118._64_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._64_8_);
  }
  if ((FScriptContainerElement *)local_118._48_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._48_8_);
  }
  if ((FScriptContainerElement *)local_118._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._32_8_);
  }
  return;
}

// execOpenSourceWithOptions @ 146c3ff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMediaPlayer::execOpenSourceWithOptions(UObject *param_1,FFrame *param_2,void *param_3)

{
  ForAnyElementType *pFVar1;
  byte bVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  UObject *pUVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  FMediaPlayerFacade *pFVar11;
  FString *pFVar12;
  FMediaPlayerOptions *pFVar13;
  undefined1 auStackY_228 [32];
  UObject *local_1d8;
  UObject *local_1d0;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FScriptContainerElement *local_150 [2];
  FScriptContainerElement *local_140 [2];
  void *local_130 [3];
  undefined1 local_118 [120];
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1d0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d0);
  }
  local_118._0_4_ = ___xmm_ffffffffffffffffffffffff00000000;
  local_118._4_4_ = _UNK_15076cba4;
  local_118._8_4_ = _UNK_15076cba8;
  local_118._12_4_ = _UNK_15076cbac;
  local_78 = ___xmm_00000000ffffffff0000008000000000;
  uStack_70 = _UNK_150631d98;
  local_118._16_4_ = -1;
  local_118._20_4_ = -1;
  local_118._24_4_ = 0;
  local_118._32_8_ = (FScriptContainerElement *)0x0;
  local_118._40_4_ = 0;
  local_118._44_4_ = 0;
  local_118._48_8_ = (FScriptContainerElement *)0x0;
  local_118._56_4_ = 0;
  local_118._60_4_ = 0;
  local_118._64_8_ = (FScriptContainerElement *)0x0;
  local_118._72_4_ = 0;
  local_118._76_4_ = 0;
  local_118._80_8_ = (FScriptContainerElement *)0x0;
  local_118._88_4_ = 0;
  local_118._92_4_ = 0;
  local_118[0x60] = UseTrackOptionIndices;
  local_118._104_8_ = 0;
  local_118[0x70] = RelativeToStartTime;
  local_118[0x71] = UseMediaPlayerSetting;
  local_118[0x72] = UseMediaPlayerSetting;
  local_a0._0_8_ = (FScriptContainerElement *)0x0;
  local_a0._8_8_ = 0;
  local_80 = (void *)0x0;
  local_60 = (void *)0x0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  pUVar6 = local_1d0;
  pFVar13 = (FMediaPlayerOptions *)local_118;
  if ((FMediaPlayerOptions *)param_2->MostRecentPropertyAddress != (FMediaPlayerOptions *)0x0) {
    pFVar13 = (FMediaPlayerOptions *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Close((UMediaPlayer *)param_1);
  if (pUVar6 == (UObject *)0x0) {
    if (2 < (byte)LogMediaAssets._0_1_) {
      local_1c8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_1c8.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_1c8,&local_180);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
LAB_146c4013b:
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if (5 < (byte)LogMediaAssets._0_1_) {
      local_1c0.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_1c0.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_1c0,&local_160);
      local_1b8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_1b8.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_1b8,&local_170);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
    }
    cVar8 = (**(code **)(*(longlong *)pUVar6 + 0x2b8))(pUVar6);
    if (cVar8 == '\0') {
      if (1 < (byte)LogMediaAssets._0_1_) {
        (**(code **)(*(longlong *)pUVar6 + 0x2b0))(pUVar6,local_150);
        local_1b0.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
        local_1b0.Number = *(uint *)&pUVar6->field_0x1c;
        ::FName::ToString(&local_1b0,&local_1a0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
        local_180.Data.AllocatorInstance.Data = local_150[0];
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
          local_180.Data.AllocatorInstance.Data = local_150[0];
        }
        goto LAB_146c4013b;
      }
    }
    else {
      EnsurePlaylist((UMediaPlayer *)param_1);
      lVar4 = *(longlong *)&param_1[8].field_0x18;
      if (lVar4 != 0) {
        pFVar1 = (ForAnyElementType *)(lVar4 + 0x28);
        local_1d8 = pUVar6;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        if (((pFVar1->Data <= (FScriptContainerElement *)&local_1d8) &&
            ((FScriptContainerElement *)&local_1d8 <
             pFVar1->Data + (longlong)*(int *)(lVar4 + 0x34) * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = *(int *)(lVar4 + 0x30);
        if (iVar10 == *(int *)(lVar4 + 0x34)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,pFVar1,(int *)(lVar4 + 0x34));
        }
        *(int *)(lVar4 + 0x30) = iVar10 + 1;
        *(UObject **)(pFVar1->Data + (longlong)iVar10 * 8) = local_1d8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1d8);
        }
        bVar2 = param_1[0xb].field_0x18;
        pFVar11 = TSharedPtr<FMediaPlayerFacade,1>::operator->
                            ((TSharedPtr<FMediaPlayerFacade,1> *)&param_1[10].field_0x20);
        bVar9 = FMediaPlayerFacade::IsPlaying(pFVar11);
        param_1[0xb].field_0x18 = bVar9 | bVar2;
        UMediaPlaylist::GetNext
                  (*(UMediaPlaylist **)&param_1[8].field_0x18,(int *)&param_1[8].field_0x20);
        RegisterWithMediaModule((UMediaPlayer *)param_1);
        pFVar11 = TSharedPtr<FMediaPlayerFacade,1>::operator->
                            ((TSharedPtr<FMediaPlayerFacade,1> *)&param_1[10].field_0x20);
        pFVar12 = (FString *)(**(code **)(*(longlong *)pUVar6 + 0x2b0))(pUVar6,local_130);
        bVar9 = FMediaPlayerFacade::Open(pFVar11,pFVar12,(IMediaOptions *)(pUVar6 + 1),pFVar13);
        if (local_130[0] != (void *)0x0) {
          FMemory::Free(local_130[0]);
        }
        goto LAB_146c40441;
      }
      if (1 < (byte)LogMediaAssets._0_1_) {
        (**(code **)(*(longlong *)pUVar6 + 0x2b0))(pUVar6,local_140);
        local_1a8.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
        local_1a8.Number = *(uint *)&pUVar6->field_0x1c;
        ::FName::ToString(&local_1a8,&local_190);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
        local_180.Data.AllocatorInstance.Data = local_140[0];
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
          local_180.Data.AllocatorInstance.Data = local_140[0];
        }
        goto LAB_146c4013b;
      }
    }
  }
  bVar9 = false;
LAB_146c40441:
  *(bool *)param_3 = bVar9;
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a0,0,local_a0._8_4_);
  iVar10 = SUB84(local_a0._8_8_,4);
  local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
  if (iVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
  }
  uVar7 = local_78._4_4_;
  uStack_70 = 0xffffffff;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  if (0x80 < uVar7) {
    local_78 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a0._0_8_);
  }
  if ((FScriptContainerElement *)local_118._80_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._80_8_);
  }
  if ((FScriptContainerElement *)local_118._64_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._64_8_);
  }
  if ((FScriptContainerElement *)local_118._48_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._48_8_);
  }
  if ((FScriptContainerElement *)local_118._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._32_8_);
  }
  return;
}

// execOpenUrl @ 146c40580

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMediaPlayer::execOpenUrl(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  FProperty *pFVar4;
  UMediaPlaylist *this;
  ForAnyElementType _Src;
  int iVar5;
  char cVar6;
  bool bVar7;
  UPackage *pUVar8;
  UStreamMediaSource *pUVar9;
  longlong lVar10;
  FName local_res8;
  ForAnyElementType local_48;
  undefined8 local_40;
  FString local_38;
  
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Close((UMediaPlayer *)param_1);
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res8.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res8,&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  EnsurePlaylist((UMediaPlayer *)param_1);
  this = *(UMediaPlaylist **)&param_1[8].field_0x18;
  if ((this != (UMediaPlaylist *)0x0) && (1 < (int)local_40)) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pUVar8 = GetTransientPackage();
    pUVar9 = NewObject<UStreamMediaSource>
                       ((UObject *)pUVar8,local_res8,RF_Transient|RF_Transactional,(UObject *)0x0,
                        false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    _Src.Data = local_48.Data;
    pFVar2 = &pUVar9->StreamUrl;
    if (pFVar2 != (FString *)&local_48) {
      iVar5 = (int)local_40;
      lVar10 = (longlong)(int)local_40;
      piVar1 = &(pUVar9->StreamUrl).Data.ArrayMax;
      iVar3 = *piVar1;
      (pUVar9->StreamUrl).Data.ArrayNum = (int)local_40;
      if (((int)local_40 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_40,iVar3,(ForAnyElementType *)pFVar2,(int)local_40,piVar1);
        if (iVar5 != 0) {
          memcpy((pFVar2->Data).AllocatorInstance.Data,_Src.Data,lVar10 * 2);
        }
      }
    }
    cVar6 = (**(code **)(pUVar9->_padding_ + 0x2b8))(pUVar9);
    if (cVar6 == '\0') {
      if (1 < (byte)LogMediaAssets._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      }
    }
    else {
      bVar7 = UMediaPlaylist::Add(this,(UMediaSource *)pUVar9);
      if (bVar7) {
        bVar7 = Next((UMediaPlayer *)param_1);
        goto LAB_146c40791;
      }
    }
  }
  bVar7 = false;
LAB_146c40791:
  *(bool *)param_3 = bVar7;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// execPause @ 146c40800

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execPause(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = Pause((UMediaPlayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execPlay @ 146c40840

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = Play((UMediaPlayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execPlayAndSeek @ 146c40880

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execPlayAndSeek(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PlayAndSeek((UMediaPlayer *)param_1);
  return;
}

// execPrevious @ 146c408a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execPrevious(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = Previous((UMediaPlayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execReopen @ 146c40c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execReopen(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  FName local_res8;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res8.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (*(UMediaPlaylist **)&param_1[8].field_0x18 == (UMediaPlaylist *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  bVar1 = OpenPlaylistIndex((UMediaPlayer *)param_1,*(UMediaPlaylist **)&param_1[8].field_0x18,
                            *(int *)&param_1[8].field_0x20);
  *(bool *)param_3 = bVar1;
  return;
}

// execRewind @ 146c40e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execRewind(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  FName local_res10 [3];
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res10[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res10[0].Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  bVar1 = Seek((UMediaPlayer *)param_1,(FTimespan *)local_res10);
  *(bool *)param_3 = bVar1;
  return;
}

// execScrub @ 146c40ef0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMediaPlayer::execScrub(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FTimespan *this;
  FTimespan local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  local_res8.Ticks = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  this = &local_res8;
  if ((FTimespan *)param_2->MostRecentPropertyAddress != (FTimespan *)0x0) {
    this = (FTimespan *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = FMediaPlayerFacade::IsSeeking(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  if (bVar3) {
    if (6 < (byte)LogMediaAssets._0_1_) {
      FTimespan::ToString(this,&local_28,L"%h:%m:%s.%t");
      local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res10.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res10,&local_38);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMediaPlayerFacade::SetNextSeek(*(FMediaPlayerFacade **)&param_1[10].field_0x20,this);
    *(undefined1 *)param_3 = 1;
  }
  else {
    bVar3 = Seek((UMediaPlayer *)param_1,this);
    *(bool *)param_3 = bVar3;
  }
  return;
}

// execSeek @ 146c410c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execSeek(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FTimespan *pFVar3;
  FTimespan local_res10;
  
  local_res10.Ticks = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FTimespan *)param_2->MostRecentPropertyAddress != (FTimespan *)0x0) {
    pFVar3 = (FTimespan *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = Seek((UMediaPlayer *)param_1,pFVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execSelectTrack @ 146c41170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execSelectTrack(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  UClass *pUVar6;
  UEnum *this;
  ulonglong uVar7;
  byte local_res8 [8];
  int local_res10 [2];
  FName local_res18;
  FString local_68;
  wchar_t *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar4 = local_res10[0];
  bVar3 = local_res8[0];
  uVar7 = (ulonglong)local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_58 = L"MediaAssets.EMediaPlayerTrack";
    iStack_50 = 0x1d;
    pUVar6 = Z_Construct_UClass_UEnum_NoRegister();
    local_48._12_4_ = uStack_4c;
    local_48.Size = iStack_50;
    local_48.DataPtr = local_58;
    this = (UEnum *)StaticFindObject(pUVar6,(UObject *)0x0,&local_48,None);
    if (this == (UEnum *)0x0) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`private:_static_class_FString___cdecl_UEnum::GetValueAsString_Internal(wchar_t_const*___ptr64,__int64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    }
    UEnum::GetNameStringByValue(this,&local_68,uVar7);
    local_res18.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res18.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res18,&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar5 = FMediaPlayerFacade::SelectTrack
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,(uint)bVar3,iVar4);
  *(bool *)param_3 = bVar5;
  return;
}

// execSetBlockOnTime @ 146c41390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execSetBlockOnTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FTimespan *this;
  FTimespan local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  local_res8.Ticks = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  this = &local_res8;
  if ((FTimespan *)param_2->MostRecentPropertyAddress != (FTimespan *)0x0) {
    this = (FTimespan *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (6 < (byte)LogMediaAssets._0_1_) {
    FTimespan::ToString(this,&local_28,L"%h:%m:%s.%t");
    local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res10.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res10,&local_38);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMediaPlayerFacade::SetBlockOnTime(*(FMediaPlayerFacade **)&param_1[10].field_0x20,this);
  return;
}

// execSetDesiredPlayerName @ 146c414f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMediaPlayer::execSetDesiredPlayerName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FName local_res8;
  FName local_res10 [2];
  FName local_res20;
  FString local_38;
  FString local_28;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10[0] = local_res8;
  if (5 < (byte)LogMediaAssets._0_1_) {
    ::FName::ToString(local_res10,&local_28);
    local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res20.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res20,&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  FVar3 = local_res10[0];
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(FName *)(*(longlong *)&param_1[10].field_0x20 + 0x28) = FVar3;
  return;
}

// execSetLooping @ 146c41b70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execSetLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetLooping((UMediaPlayer *)param_1,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetMediaOptions @ 146c42410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execSetMediaOptions(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  IMediaOptions *pIVar5;
  longlong local_res8;
  FName local_res10;
  FString local_18;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res10.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res10,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar5 = (IMediaOptions *)(lVar3 + 0x28);
  if (lVar3 == 0) {
    pIVar5 = (IMediaOptions *)0x0;
  }
  FMediaPlayerFacade::SetMediaOptions(*(FMediaPlayerFacade **)&param_1[10].field_0x20,pIVar5);
  return;
}

// execSetNativeVolume @ 146c426b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execSetNativeVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar4 = FMediaPlayerFacade::SetNativeVolume(*(FMediaPlayerFacade **)&param_1[10].field_0x20,fVar3)
  ;
  *(bool *)param_3 = bVar4;
  return;
}

// execSetPlaybackTimeRange @ 146c42790

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execSetPlaybackTimeRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFloatInterval FVar2;
  bool bVar3;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  local_res10 = 0x7f7fffff;
  uStackX_14 = 0xff7fffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar2._4_4_ = uStackX_14;
  FVar2._0_4_ = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = SetPlaybackTimeRange((UMediaPlayer *)param_1,FVar2);
  *(bool *)param_3 = bVar3;
  return;
}

// execSetRate @ 146c42830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execSetRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  float local_res8 [2];
  FName local_res10;
  FString local_28 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res10.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res10,local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FMediaPlayerFacade::SetRate(*(FMediaPlayerFacade **)&param_1[10].field_0x20,fVar3);
  *(bool *)param_3 = bVar4;
  return;
}

// execSetTimeDelay @ 146c42b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMediaPlayer::execSetTimeDelay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FTimespan FVar3;
  bool bVar4;
  long64 local_res8;
  FTimespan local_res10 [2];
  FName local_res20;
  FString local_38;
  FString local_28;
  
  local_res8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10[0].Ticks = local_res8;
  if (5 < (byte)LogMediaAssets._0_1_) {
    FTimespan::ToString(local_res10,&local_28);
    local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res20.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res20,&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  FVar3.Ticks = local_res10[0].Ticks;
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(long64 *)(*(longlong *)&param_1[10].field_0x20 + 0x30) = FVar3.Ticks;
  return;
}

// execSetTrackFormat @ 146c42cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execSetTrackFormat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  UClass *pUVar7;
  UEnum *this;
  ulonglong uVar8;
  byte local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  FString local_78;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  FString local_48;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar5 = local_res18[0];
  iVar4 = local_res10[0];
  bVar3 = local_res8[0];
  uVar8 = (ulonglong)local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_68 = L"MediaAssets.EMediaPlayerTrack";
    iStack_60 = 0x1d;
    pUVar7 = Z_Construct_UClass_UEnum_NoRegister();
    local_58._12_4_ = uStack_5c;
    local_58.Size = iStack_60;
    local_58.DataPtr = local_68;
    this = (UEnum *)StaticFindObject(pUVar7,(UObject *)0x0,&local_58,None);
    if (this == (UEnum *)0x0) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`private:_static_class_FString___cdecl_UEnum::GetValueAsString_Internal(wchar_t_const*___ptr64,__int64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    }
    UEnum::GetNameStringByValue(this,&local_78,uVar8);
    local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res20.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res20,&local_48);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar6 = FMediaPlayerFacade::SetTrackFormat
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,(uint)bVar3,iVar5,iVar4);
  *(bool *)param_3 = bVar6;
  return;
}

// execSetVideoTrackFrameRate @ 146c42f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UMediaPlayer::execSetVideoTrackFrameRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  FString local_48 [2];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar5 = local_res18[0];
  iVar4 = local_res10[0];
  fVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (5 < (byte)LogMediaAssets._0_1_) {
    local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res20.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res20,local_48);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar6 = FMediaPlayerFacade::SetVideoTrackFrameRate
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,iVar5,iVar4,fVar3);
  *(bool *)param_3 = bVar6;
  return;
}

// execSetViewField @ 146c43120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execSetViewField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  FCoreTexts *pFVar6;
  bool bVar7;
  int local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  FName local_res20;
  FString local_58 [3];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar4 = local_res18[0];
  fVar3 = local_res10[0];
  bVar7 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar6 = FCoreTexts::Get();
  if (5 < (byte)LogMediaAssets._0_1_) {
    if (!bVar7) {
      pFVar6 = (FCoreTexts *)&pFVar6->False;
    }
    FText::ToString(pFVar6->True);
    local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res20.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res20,local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar7 = FMediaPlayerFacade::SetViewField
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,fVar4,fVar3,bVar7);
  *(bool *)param_3 = bVar7;
  return;
}

// execSetViewRotation @ 146c43350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execSetViewRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMediaPlayerFacade *this;
  code *pcVar2;
  bool bVar3;
  FCoreTexts *pFVar4;
  TQuat<double> *pTVar5;
  TRotator<double> *this_00;
  bool bVar6;
  int local_res8 [2];
  FName local_res10;
  FString local_a8;
  FString local_98;
  TRotator<double> local_88;
  TQuat<double> local_68;
  TQuat<double> local_48;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res8[0] = 0;
  this_00 = &local_88;
  if ((TRotator<double> *)param_2->MostRecentPropertyAddress != (TRotator<double> *)0x0) {
    this_00 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar6 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FCoreTexts::Get();
  if (5 < (byte)LogMediaAssets._0_1_) {
    if (!bVar6) {
      pFVar4 = (FCoreTexts *)&pFVar4->False;
    }
    FText::ToString(pFVar4->True);
    ::FString::PrintfImpl(&local_a8,L"P=%f Y=%f R=%f");
    local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res10.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res10,&local_98);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if ((*(longlong *)&param_1[10].field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = *(FMediaPlayerFacade **)&param_1[10].field_0x20;
  pTVar5 = UE::Math::TRotator<double>::Quaternion(this_00,&local_48);
  local_68.X = pTVar5->X;
  local_68.Y = pTVar5->Y;
  local_68.Z = pTVar5->Z;
  local_68.W = pTVar5->W;
  bVar6 = FMediaPlayerFacade::SetViewOrientation(this,&local_68,bVar6);
  *(bool *)param_3 = bVar6;
  return;
}

// execSupportsPlaybackTimeRange @ 146c43590

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UMediaPlayer::execSupportsPlaybackTimeRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::SupportsPlaybackTimeRange
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(bool *)param_3 = bVar2;
  return;
}

// execSupportsRate @ 146c43610

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execSupportsRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  int local_res8 [2];
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar3 = local_res10[0];
  bVar5 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar5 = FMediaPlayerFacade::SupportsRate
                    (*(FMediaPlayerFacade **)&param_1[10].field_0x20,fVar3,bVar5);
  *(bool *)param_3 = bVar5;
  return;
}

// execSupportsScrubbing @ 146c43740

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execSupportsScrubbing(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::CanScrub(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(bool *)param_3 = bVar2;
  return;
}

// execSupportsSeeking @ 146c437c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlayer::execSupportsSeeking(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FMediaPlayerFacade::CanSeek(*(FMediaPlayerFacade **)&param_1[10].field_0x20);
  *(bool *)param_3 = bVar2;
  return;
}

