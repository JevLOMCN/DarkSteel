// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 49

// StaticClass @ 14a784700

UClass * __cdecl UCommonVideoPlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonVideoPlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonVideoPlayer",
               &Z_Registration_Info_UClass_UCommonVideoPlayer.InnerSingleton,
               StaticRegisterNativesUCommonVideoPlayer,0x310,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonVideoPlayer>,
               InternalVTableHelperCtorCaller<UCommonVideoPlayer>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonVideoPlayer.InnerSingleton;
}

// UCommonVideoPlayer @ 14a7afc20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonVideoPlayer * __thiscall
UCommonVideoPlayer::UCommonVideoPlayer(UCommonVideoPlayer *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  (this->Video).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  this->bMatchSize = false;
  (this->MediaPlayer).field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  (this->MediaTexture).field0_0x0.DebugPtr = (UMediaTexture *)0x0;
  (this->VideoMaterial).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (this->SoundComponent).field0_0x0.DebugPtr = (UMediaSoundComponent *)0x0;
  FSlateBrush::FSlateBrush(&this->VideoBrush);
  *(undefined8 *)&this->OnPlaybackResumedEvent = 0;
  *(undefined8 *)&(this->OnPlaybackResumedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlaybackResumedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPlaybackResumedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnPlaybackPausedEvent = 0;
  *(undefined8 *)&(this->OnPlaybackPausedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlaybackPausedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPlaybackPausedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnPlaybackCompleteEvent = 0;
  *(undefined8 *)&(this->OnPlaybackCompleteEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlaybackCompleteEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPlaybackCompleteEvent).field_0x18 = 2;
  this->bIsMuted = false;
  (this->MyImage).Object = (SImage *)0x0;
  (this->MyImage).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UCommonVideoPlayer @ 14a7afd10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonVideoPlayer * __thiscall
UCommonVideoPlayer::UCommonVideoPlayer(UCommonVideoPlayer *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  void *pvVar2;
  TObjectPtr<UMaterial>_u_0 TVar3;
  ulonglong uVar4;
  FString local_18;
  
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  (this->Video).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  this->bMatchSize = false;
  (this->MediaPlayer).field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  (this->MediaTexture).field0_0x0.DebugPtr = (UMediaTexture *)0x0;
  (this->VideoMaterial).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (this->SoundComponent).field0_0x0.DebugPtr = (UMediaSoundComponent *)0x0;
  FSlateBrush::FSlateBrush(&this->VideoBrush);
  pvVar2 = ThreadLocalStoragePointer;
  uVar4 = (ulonglong)_tls_index;
  *(undefined8 *)&this->OnPlaybackResumedEvent = 0;
  *(undefined8 *)&(this->OnPlaybackResumedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlaybackResumedEvent).field_0x10 = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar4 * 8);
  *(undefined8 *)&(this->OnPlaybackResumedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnPlaybackPausedEvent = 0;
  *(undefined8 *)&(this->OnPlaybackPausedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlaybackPausedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPlaybackPausedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnPlaybackCompleteEvent = 0;
  *(undefined8 *)&(this->OnPlaybackCompleteEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlaybackCompleteEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPlaybackCompleteEvent).field_0x18 = 2;
  this->bIsMuted = false;
  (this->MyImage).Object = (SImage *)0x0;
  (this->MyImage).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGCObject::RegisterGCObject((FGCObject *)&VideoPlayerMaterialFinder);
      VideoPlayerMaterialFinder.Object.field0_0x0 = (TObjectPtr<UMaterial>_u_0)(FObjectPtr)0x0;
      VideoPlayerMaterialFinder._padding_ =
           (longlong)&___7__FObjectFinder_VUMaterial___ConstructorHelpers__6B_;
      ConstructorHelpers::CheckIfIsInConstructor(L"/CommonUI/VideoPlayerMaterial");
      ::FString::FString(&local_18,L"/CommonUI/VideoPlayerMaterial");
      ConstructorHelpers::StripObjectClass(&local_18,true);
      TVar3.DebugPtr = ConstructorHelpersInternal::FindOrLoadObject<UMaterial>(&local_18,0);
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (TVar3.DebugPtr == (UMaterial *)0x0)) {
        VideoPlayerMaterialFinder.Object.field0_0x0 =
             (TObjectPtr<UMaterial>_u_0)(TObjectPtr<UMaterial>_u_0)TVar3.DebugPtr;
        if (TVar3.DebugPtr == (UMaterial *)0x0) {
          ConstructorHelpers::FailedToFind(L"/CommonUI/VideoPlayerMaterial");
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
        VideoPlayerMaterialFinder.Object.field0_0x0 =
             (TObjectPtr<UMaterial>_u_0)(TObjectPtr<UMaterial>_u_0)TVar3.DebugPtr;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      atexit(`UCommonVideoPlayer::UCommonVideoPlayer'::__l2::
             _dynamic_atexit_destructor_for__VideoPlayerMaterialFinder__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (VideoPlayerMaterialFinder.Object.field0_0x0 != (UMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)VideoPlayerMaterialFinder.Object.field0_0x0);
  }
  (this->VideoMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)VideoPlayerMaterialFinder.Object.field0_0x0;
  return this;
}

// ~UCommonVideoPlayer @ 14a7b3ab0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::~UCommonVideoPlayer(UCommonVideoPlayer *this)

{
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyImage).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPlaybackCompleteEvent).field_0x8,
             *(int *)&(this->OnPlaybackCompleteEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnPlaybackCompleteEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlaybackCompleteEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPlaybackPausedEvent).field_0x8,
             *(int *)&(this->OnPlaybackPausedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnPlaybackPausedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlaybackPausedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPlaybackResumedEvent).field_0x8,
             *(int *)&(this->OnPlaybackResumedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnPlaybackResumedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlaybackResumedEvent);
  pTVar2 = (this->VideoBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->VideoBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// Close @ 14a7c49d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::Close(UCommonVideoPlayer *this)

{
  UMediaPlayer::Close((this->MediaPlayer).field0_0x0.DebugPtr);
  USynthComponent::Stop((USynthComponent *)(this->SoundComponent).field0_0x0.DebugPtr);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnPlaybackCompleteEvent);
  return;
}

// GetPlaybackRate @ 14a7e45e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall UCommonVideoPlayer::GetPlaybackRate(UCommonVideoPlayer *this)

{
  float fVar1;
  
  fVar1 = UMediaPlayer::GetRate((this->MediaPlayer).field0_0x0.DebugPtr);
  return fVar1;
}

// GetPlaybackTime @ 14a7e4600

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall UCommonVideoPlayer::GetPlaybackTime(UCommonVideoPlayer *this)

{
  FTimespan FVar1;
  
  FVar1 = UMediaPlayer::GetTime((this->MediaPlayer).field0_0x0.DebugPtr);
  return (float)((double)*(longlong *)FVar1.Ticks * __real_3e7ad7f29abcaf48);
}

// GetPrivateStaticClass @ 14a7e6be0

UClass * __cdecl UCommonVideoPlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonVideoPlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonVideoPlayer",
               &Z_Registration_Info_UClass_UCommonVideoPlayer.InnerSingleton,
               StaticRegisterNativesUCommonVideoPlayer,0x310,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonVideoPlayer>,
               InternalVTableHelperCtorCaller<UCommonVideoPlayer>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonVideoPlayer.InnerSingleton;
}

// GetVideoDuration @ 14a7e97e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall UCommonVideoPlayer::GetVideoDuration(UCommonVideoPlayer *this)

{
  FTimespan FVar1;
  
  FVar1 = UMediaPlayer::GetDuration((this->MediaPlayer).field0_0x0.DebugPtr);
  return (float)((double)*(longlong *)FVar1.Ticks * __real_3e7ad7f29abcaf48);
}

// HandleMediaPlayerEvent @ 14a7ed9f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UCommonVideoPlayer::HandleMediaPlayerEvent(UCommonVideoPlayer *this,EMediaEvent param_1)

{
  uint uVar1;
  bool bVar2;
  TIntPoint<int> TVar3;
  SImage *pSVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UCommonVideoPlayer *local_res18 [2];
  TSharedRef<FActiveTimerHandle,1> local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  switch(param_1) {
  case MediaClosed:
    Close(this);
    return;
  case MediaOpened:
  case TracksChanged:
    if (this->bMatchSize != false) {
      TVar3 = UMediaPlayer::GetVideoTrackDimensions
                        ((this->MediaPlayer).field0_0x0.DebugPtr,(int)local_res18,-1);
      *(float *)&(this->VideoBrush).ImageSize = (float)*(int *)TVar3.field0_0x0;
      *(float *)&(this->VideoBrush).ImageSize.field_0x4 =
           (float)*(int *)((longlong)TVar3.field0_0x0 + 4);
      if ((this->MyImage).Object != (SImage *)0x0) {
        pSVar4 = TSharedPtr<SImage,1>::operator->(&this->MyImage);
        SImage::InvalidateImage(pSVar4);
        return;
      }
    }
    break;
  case PlaybackEndReached:
    bVar2 = UMediaPlayer::IsLooping((this->MediaPlayer).field0_0x0.DebugPtr);
    if (!bVar2) {
      USynthComponent::Stop((USynthComponent *)(this->SoundComponent).field0_0x0.DebugPtr);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnPlaybackCompleteEvent);
      return;
    }
    break;
  case PlaybackResumed:
    if (this->bIsMuted == false) {
      USynthComponent::Start((USynthComponent *)(this->SoundComponent).field0_0x0.DebugPtr);
    }
    if ((this->MyImage).Object != (SImage *)0x0) {
      pSVar4 = TSharedPtr<SImage,1>::operator->(&this->MyImage);
      uVar1 = local_68.SharedReferenceCount.ReferenceController._4_4_;
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonVideoPlayer____A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar5[3] = 0;
        local_res18[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)local_res18);
        puVar5[4] = HandlePlaybackTick;
        puVar5[5] = (ulonglong)uVar1 << 0x20;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      SWidget::RegisterActiveTimer
                ((SWidget *)pSVar4,&local_68,0.0,
                 (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                  *)local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_68.SharedReferenceCount.ReferenceController._4_4_,
                          local_68.SharedReferenceCount.ReferenceController._0_4_));
      return;
    }
    break;
  case PlaybackSuspended:
    USynthComponent::Stop((USynthComponent *)(this->SoundComponent).field0_0x0.DebugPtr);
  }
  return;
}

// HandlePlaybackTick @ 14a7ee320

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

EActiveTimerReturnType __thiscall
UCommonVideoPlayer::HandlePlaybackTick(UCommonVideoPlayer *this,double param_1,float param_2)

{
  bool bVar1;
  
  (**(code **)(*(longlong *)this + 0x318))();
  bVar1 = UMediaPlayer::IsPlaying((this->MediaPlayer).field0_0x0.DebugPtr);
  return bVar1;
}

// IsLooping @ 14a7f62f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UCommonVideoPlayer::IsLooping(UCommonVideoPlayer *this)

{
  bool bVar1;
  
  bVar1 = UMediaPlayer::IsLooping((this->MediaPlayer).field0_0x0.DebugPtr);
  return bVar1;
}

// IsPaused @ 14a7f65a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UCommonVideoPlayer::IsPaused(UCommonVideoPlayer *this)

{
  bool bVar1;
  
  bVar1 = UMediaPlayer::IsPaused((this->MediaPlayer).field0_0x0.DebugPtr);
  return bVar1;
}

// IsPlaying @ 14a7f65d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UCommonVideoPlayer::IsPlaying(UCommonVideoPlayer *this)

{
  bool bVar1;
  
  bVar1 = UMediaPlayer::IsPlaying((this->MediaPlayer).field0_0x0.DebugPtr);
  return bVar1;
}

// Pause @ 14a801f40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::Pause(UCommonVideoPlayer *this)

{
  UMediaPlayer::Pause((this->MediaPlayer).field0_0x0.DebugPtr);
  return;
}

// Play @ 14a801f60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::Play(UCommonVideoPlayer *this)

{
  UMediaPlayer::SetRate((this->MediaPlayer).field0_0x0.DebugPtr,__real_3f800000);
  return;
}

// PlayFromStart @ 14a801f80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::PlayFromStart(UCommonVideoPlayer *this)

{
  UMediaPlayer::Rewind((this->MediaPlayer).field0_0x0.DebugPtr);
  UMediaPlayer::SetRate((this->MediaPlayer).field0_0x0.DebugPtr,__real_3f800000);
  return;
}

// PlayInternal @ 14a801fc0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::PlayInternal(UCommonVideoPlayer *this)

{
  bool bVar1;
  
  bVar1 = UMediaPlayer::IsReady((this->MediaPlayer).field0_0x0.DebugPtr);
  if (bVar1) {
    bVar1 = UMediaPlayer::IsPlaying((this->MediaPlayer).field0_0x0.DebugPtr);
    if (!bVar1) {
      UMediaPlayer::Play((this->MediaPlayer).field0_0x0.DebugPtr);
      return;
    }
  }
  return;
}

// PlaybackTick @ 14a802010

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UCommonVideoPlayer::PlaybackTick(UCommonVideoPlayer *this,double param_1,float param_2)

{
  if (this->bIsMuted == false) {
    UMediaSoundComponent::UpdatePlayer((this->SoundComponent).field0_0x0.DebugPtr);
    return;
  }
  return;
}

// PostInitProperties @ 14a8022c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::PostInitProperties(UCommonVideoPlayer *this)

{
  UMaterial *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UMediaPlayer *pUVar5;
  UMediaTexture *pUVar6;
  UMaterialInstanceDynamic *this_00;
  FName *pFVar7;
  UMediaSoundComponent *pUVar8;
  longlong *plVar9;
  undefined1 auStackY_208 [32];
  FName local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined1 local_1b8 [24];
  longlong lStack_1a0;
  undefined1 local_198 [128];
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_208;
  UObject::PostInitProperties((UObject *)this);
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar3) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UMediaPlayer_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_198,pUVar4);
    local_198._8_8_ = this;
    pUVar5 = (UMediaPlayer *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_198);
    if (local_198._64_8_ != 0) {
      plVar9 = (longlong *)(local_198 + 0x50);
      if ((longlong *)local_198._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_198._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->MediaPlayer).field0_0x0.DebugPtr = pUVar5;
    pUVar5->PlayOnOpen = false;
    local_1c8 = (FName)_vcall__784__flat______;
    uStack_1c0 = 0;
    lStack_1a0 = (ulonglong)uStack_1bc << 0x20;
    local_1b8._16_8_ = _vcall__784__flat______;
    TMulticastDelegateRegistration<void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>::
    AddUObject<UCommonVideoPlayer>
              (&((this->MediaPlayer).field0_0x0.DebugPtr)->MediaEvent,
               (UCommonVideoPlayer *)local_1b8,(pmf_08e38420 *)this);
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UMediaTexture_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_118,pUVar4);
    local_118._8_8_ = this;
    pUVar6 = (UMediaTexture *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
    if (local_118._64_8_ != 0) {
      plVar9 = (longlong *)(local_118 + 0x50);
      if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_118._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UMediaTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->MediaTexture).field0_0x0.DebugPtr = pUVar6;
    pUVar6->AutoClear = true;
    UMediaTexture::SetMediaPlayer
              ((this->MediaTexture).field0_0x0.DebugPtr,(this->MediaPlayer).field0_0x0.DebugPtr);
    (**(code **)(((this->MediaTexture).field0_0x0.DebugPtr)->_padding_ + 0x328))();
    pUVar1 = (this->VideoMaterial).field0_0x0.DebugPtr;
    if (pUVar1 == (UMaterial *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5645396299097309144>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonVideoPlayer.cpp"
                         ,0x28,"VideoMaterial");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      this_00 = UMaterialInstanceDynamic::Create
                          ((UMaterialInterface *)pUVar1,(UObject *)this,(FName)0x0);
      pUVar6 = (this->MediaTexture).field0_0x0.DebugPtr;
      pFVar7 = ::FName::FName(&local_1c8,L"MediaTexture");
      UMaterialInstanceDynamic::SetTextureParameterValue(this_00,*pFVar7,(UTexture *)pUVar6);
      FSlateBrush::SetResourceObject(&this->VideoBrush,(UObject *)this_00);
    }
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UMediaSoundComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar4);
    local_98._8_8_ = this;
    pUVar8 = (UMediaSoundComponent *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar9 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UMediaSoundComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->SoundComponent).field0_0x0.DebugPtr = pUVar8;
    pUVar8->Channels = Stereo;
    plVar9 = &((this->SoundComponent).field0_0x0.DebugPtr)->_padding_;
    *(byte *)plVar9 = (byte)*plVar9 | 1;
    UMediaSoundComponent::SetMediaPlayer
              ((this->SoundComponent).field0_0x0.DebugPtr,(this->MediaPlayer).field0_0x0.DebugPtr);
    USynthComponent::Initialize((USynthComponent *)(this->SoundComponent).field0_0x0.DebugPtr,-1);
    UMediaSoundComponent::UpdatePlayer((this->SoundComponent).field0_0x0.DebugPtr);
  }
  return;
}

// RebuildWidget @ 14a80ba80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UCommonVideoPlayer::RebuildWidget
          (UCommonVideoPlayer *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSharedRef<SImage,1> *pTVar3;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_318 [8];
  ForAnyElementType FStack_310;
  ulonglong local_308;
  SImage *local_300;
  FSharedReferencer<1> local_2f8;
  bool local_2f0;
  TSharedRef<SImage,1> local_2e8;
  FArguments local_2d8;
  
  pFVar2 = SImage::FArguments::FArguments(&local_2d8);
  local_308 = 0;
  local_318 = (undefined1  [8])0x0;
  FStack_310.Data = (FScriptContainerElement *)0x0;
  (pFVar2->_Image).Value = &this->VideoBrush;
  (pFVar2->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar2->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_318);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_318,
             (FWriteAccessScope *)&local_300);
  if (((int)local_308 != 0) && (FStack_310.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_310.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_310,0,0,0x10);
    local_308 = local_308 & 0xffffffff00000000;
  }
  if (local_2f0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2f8.ReferenceController,
               (FDestructionSentinel *)&local_300);
  }
  if (FStack_310.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_310.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_318);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_300,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonVideoPlayer.cpp"
             ,0xab,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  if (local_2f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2f8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->MyImage).SharedReferenceCount.ReferenceController;
  (this->MyImage).Object = local_300;
  (this->MyImage).SharedReferenceCount.ReferenceController = local_2f8.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar3 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_300,&local_2e8,
                      pFVar2);
  __return_storage_ptr__->Object = (SWidget *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.ReferenceController);
  SImage::FArguments::~FArguments(&local_2d8);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14a812050

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::ReleaseSlateResources(UCommonVideoPlayer *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyImage != (TSharedPtr<SImage,1> *)&local_18) {
    (this->MyImage).Object = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyImage).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// Reverse @ 14a814fe0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::Reverse(UCommonVideoPlayer *this)

{
  UMediaPlayer::SetRate((this->MediaPlayer).field0_0x0.DebugPtr,__real_bf800000);
  return;
}

// Seek @ 14a815350

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::Seek(UCommonVideoPlayer *this,float param_1)

{
  undefined1 auVar1 [16];
  FTimespan local_res8 [4];
  
  auVar1._0_8_ = (double)(param_1 * __real_4b189680 + __real_3f000000);
  auVar1._8_8_ = 0;
  auVar1 = roundpd(auVar1,auVar1,1);
  local_res8[0].Ticks = (long64)auVar1._0_8_;
  UMediaPlayer::Seek((this->MediaPlayer).field0_0x0.DebugPtr,local_res8);
  return;
}

// SetIsMuted @ 14a819570

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::SetIsMuted(UCommonVideoPlayer *this,bool param_1)

{
  bool bVar1;
  
  this->bIsMuted = param_1;
  if (param_1) {
    USynthComponent::Stop((USynthComponent *)(this->SoundComponent).field0_0x0.DebugPtr);
    return;
  }
  bVar1 = UMediaPlayer::IsPlaying((this->MediaPlayer).field0_0x0.DebugPtr);
  if (bVar1) {
    USynthComponent::Start((USynthComponent *)(this->SoundComponent).field0_0x0.DebugPtr);
    return;
  }
  return;
}

// SetLooping @ 14a81a260

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::SetLooping(UCommonVideoPlayer *this,bool param_1)

{
  UMediaPlayer::SetLooping((this->MediaPlayer).field0_0x0.DebugPtr,param_1);
  return;
}

// SetPlaybackRate @ 14a81a970

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::SetPlaybackRate(UCommonVideoPlayer *this,float param_1)

{
  UMediaPlayer::SetRate((this->MediaPlayer).field0_0x0.DebugPtr,param_1);
  return;
}

// SetShouldMatchSize @ 14a81b520

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::SetShouldMatchSize(UCommonVideoPlayer *this,bool param_1)

{
  bool bVar1;
  TIntPoint<int> TVar2;
  SImage *pSVar3;
  undefined1 local_res8 [32];
  
  if ((this->bMatchSize != param_1) && (this->bMatchSize = param_1, param_1)) {
    bVar1 = UMediaPlayer::IsReady((this->MediaPlayer).field0_0x0.DebugPtr);
    if (bVar1) {
      TVar2 = UMediaPlayer::GetVideoTrackDimensions
                        ((this->MediaPlayer).field0_0x0.DebugPtr,(int)local_res8,-1);
      pSVar3 = (this->MyImage).Object;
      *(float *)&(this->VideoBrush).ImageSize = (float)*(int *)TVar2.field0_0x0;
      *(float *)&(this->VideoBrush).ImageSize.field_0x4 =
           (float)*(int *)((longlong)TVar2.field0_0x0 + 4);
      if (pSVar3 != (SImage *)0x0) {
        pSVar3 = TSharedPtr<SImage,1>::operator->(&this->MyImage);
        SImage::InvalidateImage(pSVar3);
        return;
      }
    }
  }
  return;
}

// SetVideo @ 14a81cfb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::SetVideo(UCommonVideoPlayer *this,UMediaSource *param_1)

{
  UMediaPlayer *this_00;
  UMediaSource *pUVar1;
  
  this_00 = (this->MediaPlayer).field0_0x0.DebugPtr;
  UMediaPlayer::EnsurePlaylist(this_00);
  pUVar1 = UMediaPlaylist::Get((this_00->Playlist).field0_0x0.DebugPtr,0);
  if (pUVar1 != param_1) {
    UMediaPlayer::Close((this->MediaPlayer).field0_0x0.DebugPtr);
    UMediaPlayer::OpenSource((this->MediaPlayer).field0_0x0.DebugPtr,param_1);
  }
  return;
}

// StaticRegisterNativesUCommonVideoPlayer @ 14a81ea10

void __cdecl UCommonVideoPlayer::StaticRegisterNativesUCommonVideoPlayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UCommonVideoPlayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14a820b10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonVideoPlayer::SynchronizeProperties(UCommonVideoPlayer *this)

{
  UWidget::SynchronizeProperties((UWidget *)this);
  if ((this->MediaPlayer).field0_0x0.DebugPtr != (UMediaPlayer *)0x0) {
    SetVideo(this,(this->Video).field0_0x0.DebugPtr);
    return;
  }
  return;
}

// execClose @ 14a82cb00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execClose(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMediaPlayer::Close(*(UMediaPlayer **)&param_1[0xb].field_0x8);
  USynthComponent::Stop(*(USynthComponent **)&param_1[0xb].field_0x20);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(param_1 + 0x12));
  return;
}

// execGetPlaybackRate @ 14a82ec00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execGetPlaybackRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = UMediaPlayer::GetRate(*(UMediaPlayer **)&param_1[0xb].field_0x8);
  *(float *)param_3 = fVar1;
  return;
}

// execGetPlaybackTime @ 14a82ec40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execGetPlaybackTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FTimespan FVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1 = UMediaPlayer::GetTime(*(UMediaPlayer **)&param_1[0xb].field_0x8);
  *(float *)param_3 = (float)((double)*(longlong *)FVar1.Ticks * __real_3e7ad7f29abcaf48);
  return;
}

// execGetVideoDuration @ 14a82f6c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UCommonVideoPlayer::execGetVideoDuration(UObject *param_1,FFrame *param_2,void *param_3)

{
  FTimespan FVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1 = UMediaPlayer::GetDuration(*(UMediaPlayer **)&param_1[0xb].field_0x8);
  *(float *)param_3 = (float)((double)*(longlong *)FVar1.Ticks * __real_3e7ad7f29abcaf48);
  return;
}

// execIsLooping @ 14a8305d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execIsLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = UMediaPlayer::IsLooping(*(UMediaPlayer **)&param_1[0xb].field_0x8);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsMuted @ 14a830610

void __cdecl UCommonVideoPlayer::execIsMuted(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x12].field_0x20;
  return;
}

// execIsPaused @ 14a830640

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execIsPaused(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = UMediaPlayer::IsPaused(*(UMediaPlayer **)&param_1[0xb].field_0x8);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsPlaying @ 14a830680

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execIsPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = UMediaPlayer::IsPlaying(*(UMediaPlayer **)&param_1[0xb].field_0x8);
  *(bool *)param_3 = bVar1;
  return;
}

// execPause @ 14a830ff0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execPause(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMediaPlayer::Pause(*(UMediaPlayer **)&param_1[0xb].field_0x8);
  return;
}

// execPlay @ 14a831020

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  fVar1 = __real_3f800000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMediaPlayer::SetRate(*(UMediaPlayer **)&param_1[0xb].field_0x8,fVar1);
  return;
}

// execPlayFromStart @ 14a831050

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execPlayFromStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMediaPlayer::Rewind(*(UMediaPlayer **)&param_1[0xb].field_0x8);
  UMediaPlayer::SetRate(*(UMediaPlayer **)&param_1[0xb].field_0x8,__real_3f800000);
  return;
}

// execReverse @ 14a831970

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execReverse(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  fVar1 = __real_bf800000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMediaPlayer::SetRate(*(UMediaPlayer **)&param_1[0xb].field_0x8,fVar1);
  return;
}

// execSeek @ 14a8319a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execSeek(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float local_res8 [2];
  FTimespan local_res10;
  
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
  fVar2 = local_res8[0] * __real_4b189680 + __real_3f000000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  auVar3._0_8_ = (double)fVar2;
  auVar3._8_8_ = 0;
  auVar3 = roundpd(auVar3,auVar3,1);
  local_res10.Ticks = (long64)auVar3._0_8_;
  UMediaPlayer::Seek(*(UMediaPlayer **)&param_1[0xb].field_0x8,&local_res10);
  return;
}

// execSetIsMuted @ 14a833bb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execSetIsMuted(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x12].field_0x20 = local_res8[0] != 0;
  if (local_res8[0] != 0) {
    USynthComponent::Stop(*(USynthComponent **)&param_1[0xb].field_0x20);
    return;
  }
  bVar2 = UMediaPlayer::IsPlaying(*(UMediaPlayer **)&param_1[0xb].field_0x8);
  if (bVar2) {
    USynthComponent::Start(*(USynthComponent **)&param_1[0xb].field_0x20);
  }
  return;
}

// execSetLooping @ 14a834950

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execSetLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMediaPlayer::SetLooping(*(UMediaPlayer **)&param_1[0xb].field_0x8,local_res8[0] != 0);
  return;
}

// execSetPlaybackRate @ 14a834f70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execSetPlaybackRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMediaPlayer::SetRate(*(UMediaPlayer **)&param_1[0xb].field_0x8,local_res8[0]);
  return;
}

// execSetShouldMatchSize @ 14a835860

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UCommonVideoPlayer::execSetShouldMatchSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  TIntPoint<int> TVar3;
  SImage *this;
  bool bVar4;
  int local_res8 [4];
  
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
  bVar4 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((bool)*(char *)(param_1 + 0xb) != bVar4) && (*(bool *)(param_1 + 0xb) = bVar4, bVar4)) {
    bVar4 = UMediaPlayer::IsReady(*(UMediaPlayer **)&param_1[0xb].field_0x8);
    if (bVar4) {
      TVar3 = UMediaPlayer::GetVideoTrackDimensions
                        (*(UMediaPlayer **)&param_1[0xb].field_0x8,(int)&stack0x00000018 + -8,-1);
      lVar2 = *(longlong *)(param_1 + 0x13);
      *(float *)&param_1[0xc].field_0x20 = (float)*(int *)TVar3.field0_0x0;
      *(float *)&param_1[0xc].field_0x24 = (float)*(int *)((longlong)TVar3.field0_0x0 + 4);
      if (lVar2 != 0) {
        this = TSharedPtr<SImage,1>::operator->((TSharedPtr<SImage,1> *)(param_1 + 0x13));
        SImage::InvalidateImage(this);
      }
    }
  }
  return;
}

// execSetVideo @ 14a8368d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UCommonVideoPlayer::execSetVideo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMediaPlayer *this;
  UMediaSource *pUVar2;
  UMediaSource *pUVar3;
  UMediaSource *local_res8;
  
  local_res8 = (UMediaSource *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UMediaPlayer **)&param_1[0xb].field_0x8;
  UMediaPlayer::EnsurePlaylist(this);
  pUVar3 = UMediaPlaylist::Get((this->Playlist).field0_0x0.DebugPtr,0);
  if (pUVar3 != pUVar2) {
    UMediaPlayer::Close(*(UMediaPlayer **)&param_1[0xb].field_0x8);
    UMediaPlayer::OpenSource(*(UMediaPlayer **)&param_1[0xb].field_0x8,pUVar2);
  }
  return;
}

