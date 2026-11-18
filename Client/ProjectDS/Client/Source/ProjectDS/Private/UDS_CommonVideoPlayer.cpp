// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 56

// SetVideoID_WrapperImpl @ 14b46afa0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UDS_CommonVideoPlayer::SetVideoID_WrapperImpl(void *param_1,void *param_2)

{
  SetVideoID(param_1,*(int *)param_2);
  return;
}

// StaticClass @ 14b46afb0

UClass * __cdecl UDS_CommonVideoPlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonVideoPlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonVideoPlayer",
               &Z_Registration_Info_UClass_UDS_CommonVideoPlayer.InnerSingleton,
               StaticRegisterNativesUDS_CommonVideoPlayer,0x330,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonVideoPlayer>,
               InternalVTableHelperCtorCaller<UDS_CommonVideoPlayer>,local_res8,UWidget::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonVideoPlayer.InnerSingleton;
}

// UDS_CommonVideoPlayer @ 14b470550

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_CommonVideoPlayer * __thiscall
UDS_CommonVideoPlayer::UDS_CommonVideoPlayer(UDS_CommonVideoPlayer *this,FVTableHelper *param_1)

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
  (this->AsyncLoadHandle).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->NextPlayMediaSource = (UMediaSource *)0x0;
  return this;
}

// ~UDS_CommonVideoPlayer @ 14b4721c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::~UDS_CommonVideoPlayer(UDS_CommonVideoPlayer *this)

{
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncLoadHandle).SharedReferenceCount.ReferenceController);
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

// GetFieldNotificationDescriptor @ 14b474e00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_CommonVideoPlayer::GetFieldNotificationDescriptor(UDS_CommonVideoPlayer *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_CommonVideoPlayer::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b474ee0

UClass * __cdecl UDS_CommonVideoPlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonVideoPlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonVideoPlayer",
               &Z_Registration_Info_UClass_UDS_CommonVideoPlayer.InnerSingleton,
               StaticRegisterNativesUDS_CommonVideoPlayer,0x330,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonVideoPlayer>,
               InternalVTableHelperCtorCaller<UDS_CommonVideoPlayer>,local_res8,UWidget::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonVideoPlayer.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonVideoPlayer @ 14b476bf0

void __cdecl UDS_CommonVideoPlayer::StaticRegisterNativesUDS_CommonVideoPlayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x13;
  local_18.DataPtr = Z_Construct_UClass_UDS_CommonVideoPlayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execClose @ 14b478e80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UDS_CommonVideoPlayer::execClose(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Close((UDS_CommonVideoPlayer *)param_1);
  return;
}

// execGetPlaybackRate @ 14b478ea0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UDS_CommonVideoPlayer::execGetPlaybackRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetPlaybackRate((UDS_CommonVideoPlayer *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetPlaybackTime @ 14b478ee0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UDS_CommonVideoPlayer::execGetPlaybackTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetPlaybackTime((UDS_CommonVideoPlayer *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetVideoDuration @ 14b478f20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UDS_CommonVideoPlayer::execGetVideoDuration(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetVideoDuration((UDS_CommonVideoPlayer *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execIsLooping @ 14b478f60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UDS_CommonVideoPlayer::execIsLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsLooping((UDS_CommonVideoPlayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsMuted @ 14b478fa0

void __cdecl UDS_CommonVideoPlayer::execIsMuted(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x12].field_0x20;
  return;
}

// execIsPaused @ 14b478fd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UDS_CommonVideoPlayer::execIsPaused(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsPaused((UDS_CommonVideoPlayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsPlaying @ 14b479010

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UDS_CommonVideoPlayer::execIsPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsPlaying((UDS_CommonVideoPlayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOnMediaClosed @ 14b4792c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UDS_CommonVideoPlayer::execOnMediaClosed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnMediaClosed((UDS_CommonVideoPlayer *)param_1);
  return;
}

// execPause @ 14b479300

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UDS_CommonVideoPlayer::execPause(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Pause((UDS_CommonVideoPlayer *)param_1);
  return;
}

// execPlay @ 14b479320

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UDS_CommonVideoPlayer::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Play((UDS_CommonVideoPlayer *)param_1);
  return;
}

// execPlayFromStart @ 14b479340

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UDS_CommonVideoPlayer::execPlayFromStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PlayFromStart((UDS_CommonVideoPlayer *)param_1);
  return;
}

// execReverse @ 14b479360

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UDS_CommonVideoPlayer::execReverse(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Reverse((UDS_CommonVideoPlayer *)param_1);
  return;
}

// execSeek @ 14b479380

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UDS_CommonVideoPlayer::execSeek(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Seek((UDS_CommonVideoPlayer *)param_1,local_res10[0]);
  return;
}

// execSetIsMuted @ 14b479410

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UDS_CommonVideoPlayer::execSetIsMuted(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  SetIsMuted((UDS_CommonVideoPlayer *)param_1,local_res10[0] != 0);
  return;
}

// execSetLooping @ 14b4794a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UDS_CommonVideoPlayer::execSetLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  SetLooping((UDS_CommonVideoPlayer *)param_1,local_res10[0] != 0);
  return;
}

// execSetPlaybackRate @ 14b479530

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UDS_CommonVideoPlayer::execSetPlaybackRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPlaybackRate((UDS_CommonVideoPlayer *)param_1,local_res10[0]);
  return;
}

// execSetShouldMatchSize @ 14b4795c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UDS_CommonVideoPlayer::execSetShouldMatchSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  SetShouldMatchSize((UDS_CommonVideoPlayer *)param_1,local_res10[0] != 0);
  return;
}

// execSetVideo @ 14b479650

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UDS_CommonVideoPlayer::execSetVideo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMediaSource *local_res10;
  
  local_res10 = (UMediaSource *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVideo((UDS_CommonVideoPlayer *)param_1,local_res10);
  return;
}

// UDS_CommonVideoPlayer @ 14bc83a50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_CommonVideoPlayer * __thiscall
UDS_CommonVideoPlayer::UDS_CommonVideoPlayer
          (UDS_CommonVideoPlayer *this,FObjectInitializer *param_1)

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
  (this->AsyncLoadHandle).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->NextPlayMediaSource = (UMediaSource *)0x0;
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
      atexit(`UDS_CommonVideoPlayer::UDS_CommonVideoPlayer'::__l2::
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

// CancleAsync @ 14bc8bcb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::CancleAsync(UDS_CommonVideoPlayer *this)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  FStreamableHandle *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->AsyncLoadHandle;
  this_00 = pTVar1->Object;
  if (((this_00 != (FStreamableHandle *)0x0) && (this_00->bCanceled == false)) &&
     (this_00->bReleased == false)) {
    FStreamableHandle::CancelHandle(this_00);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
    pTVar1->Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AsyncLoadHandle).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// Close @ 14bc8c590

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::Close(UDS_CommonVideoPlayer *this)

{
  UMediaPlayer::Close((this->MediaPlayer).field0_0x0.DebugPtr);
  USynthComponent::Stop((USynthComponent *)(this->SoundComponent).field0_0x0.DebugPtr);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnPlaybackCompleteEvent);
  return;
}

// GetPlaybackRate @ 14bca1740

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall UDS_CommonVideoPlayer::GetPlaybackRate(UDS_CommonVideoPlayer *this)

{
  float fVar1;
  
  fVar1 = UMediaPlayer::GetRate((this->MediaPlayer).field0_0x0.DebugPtr);
  return fVar1;
}

// GetPlaybackTime @ 14bca1760

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall UDS_CommonVideoPlayer::GetPlaybackTime(UDS_CommonVideoPlayer *this)

{
  FTimespan FVar1;
  
  FVar1 = UMediaPlayer::GetTime((this->MediaPlayer).field0_0x0.DebugPtr);
  return (float)((double)*(longlong *)FVar1.Ticks * __real_3e7ad7f29abcaf48);
}

// GetVideoDuration @ 14bca2600

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall UDS_CommonVideoPlayer::GetVideoDuration(UDS_CommonVideoPlayer *this)

{
  FTimespan FVar1;
  
  FVar1 = UMediaPlayer::GetDuration((this->MediaPlayer).field0_0x0.DebugPtr);
  return (float)((double)*(longlong *)FVar1.Ticks * __real_3e7ad7f29abcaf48);
}

// HandleMediaPlayerEvent @ 14bca2c10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UDS_CommonVideoPlayer::HandleMediaPlayerEvent(UDS_CommonVideoPlayer *this,EMediaEvent param_1)

{
  uint uVar1;
  bool bVar2;
  TIntPoint<int> TVar3;
  SImage *pSVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UDS_CommonVideoPlayer *local_res18 [2];
  TSharedRef<FActiveTimerHandle,1> local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  switch(param_1) {
  case MediaClosed:
    UMediaPlayer::Close((this->MediaPlayer).field0_0x0.DebugPtr);
    goto LAB_14bca2cb9;
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
    if (bVar2) {
      return;
    }
LAB_14bca2cb9:
    USynthComponent::Stop((USynthComponent *)(this->SoundComponent).field0_0x0.DebugPtr);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnPlaybackCompleteEvent);
    return;
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
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonVideoPlayer____A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// HandlePlaybackTick @ 14bca2f20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

EActiveTimerReturnType __thiscall
UDS_CommonVideoPlayer::HandlePlaybackTick(UDS_CommonVideoPlayer *this,double param_1,float param_2)

{
  bool bVar1;
  
  (**(code **)(*(longlong *)this + 0x318))();
  bVar1 = UMediaPlayer::IsPlaying((this->MediaPlayer).field0_0x0.DebugPtr);
  return bVar1;
}

// IsLooping @ 14bca8150

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UDS_CommonVideoPlayer::IsLooping(UDS_CommonVideoPlayer *this)

{
  bool bVar1;
  
  bVar1 = UMediaPlayer::IsLooping((this->MediaPlayer).field0_0x0.DebugPtr);
  return bVar1;
}

// IsPaused @ 14bca83f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UDS_CommonVideoPlayer::IsPaused(UDS_CommonVideoPlayer *this)

{
  bool bVar1;
  
  bVar1 = UMediaPlayer::IsPaused((this->MediaPlayer).field0_0x0.DebugPtr);
  return bVar1;
}

// IsPlaying @ 14bca8410

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UDS_CommonVideoPlayer::IsPlaying(UDS_CommonVideoPlayer *this)

{
  bool bVar1;
  
  bVar1 = UMediaPlayer::IsPlaying((this->MediaPlayer).field0_0x0.DebugPtr);
  return bVar1;
}

// OnLoadComplete @ 14bcb64f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::OnLoadComplete(UDS_CommonVideoPlayer *this)

{
  int iVar1;
  FDS_ResourceMovieTableRow *pFVar2;
  FString *pFVar3;
  UMediaSource *pUVar4;
  UClass *pUVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_1c8 [32];
  TStringView<wchar_t> local_198;
  FSoftObjectPath local_188;
  undefined8 local_168;
  FSharedReferencer<1> FStack_160;
  FString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_168 = 0;
  FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->AsyncLoadHandle != (TSharedPtr<FStreamableHandle,1> *)&local_168) {
    (this->AsyncLoadHandle).Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AsyncLoadHandle).SharedReferenceCount,&FStack_160);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_160.ReferenceController);
  pFVar2 = FDS_ResourceMovieTableRow::GetRef((longlong)this->VideoID,true);
  pFVar3 = FSoftObjectPath::ToString(&pFVar2->MoviePath,&local_148);
  pFVar3 = FWN_SoftObjectUtils::GetObjectPath(&local_158,pFVar3,false);
  local_188.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_188.AssetPath.PackageName.Number = 0;
  local_188.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_188.AssetPath.AssetName.Number = 0;
  local_188.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.SubPathString.Data.ArrayNum = 0;
  local_188.SubPathString.Data.ArrayMax = 0;
  local_198.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_198.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_198.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_188,&local_198);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  pUVar4 = (UMediaSource *)FSoftObjectPath::ResolveObject(&local_188);
  if (pUVar4 != (UMediaSource *)0x0) {
    pUVar5 = Z_Construct_UClass_UMediaSource_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      SetVideo(this,pUVar4);
      UMediaPlayer::SetLooping((this->MediaPlayer).field0_0x0.DebugPtr,true);
      UMediaPlayer::Rewind((this->MediaPlayer).field0_0x0.DebugPtr);
      UMediaPlayer::SetRate((this->MediaPlayer).field0_0x0.DebugPtr,__real_3f800000);
      goto LAB_14bcb66cb;
    }
  }
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 != (UDS_LogManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CommonVideoPlayer::OnLoadComplete",0x25,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,0x124,L"Video is Null");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
LAB_14bcb66cb:
  if (local_188.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnMediaClosed @ 14bcb6cc0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::OnMediaClosed(UDS_CommonVideoPlayer *this)

{
  if (this->NextPlayMediaSource != (UMediaSource *)0x0) {
    UMediaPlayer::OpenSource((this->MediaPlayer).field0_0x0.DebugPtr,this->NextPlayMediaSource);
    this->NextPlayMediaSource = (UMediaSource *)0x0;
  }
  return;
}

// Pause @ 14bcbcf20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::Pause(UDS_CommonVideoPlayer *this)

{
  UMediaPlayer::Pause((this->MediaPlayer).field0_0x0.DebugPtr);
  return;
}

// Play @ 14bcbcf40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::Play(UDS_CommonVideoPlayer *this)

{
  UMediaPlayer::SetRate((this->MediaPlayer).field0_0x0.DebugPtr,__real_3f800000);
  return;
}

// PlayFromStart @ 14bcbd020

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::PlayFromStart(UDS_CommonVideoPlayer *this)

{
  UMediaPlayer::Rewind((this->MediaPlayer).field0_0x0.DebugPtr);
  UMediaPlayer::SetRate((this->MediaPlayer).field0_0x0.DebugPtr,__real_3f800000);
  return;
}

// PlayInternal @ 14bcbd060

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::PlayInternal(UDS_CommonVideoPlayer *this)

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

// PlaybackTick @ 14bcbd0b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UDS_CommonVideoPlayer::PlaybackTick(UDS_CommonVideoPlayer *this,double param_1,float param_2)

{
  if (this->bIsMuted == false) {
    UMediaSoundComponent::UpdatePlayer((this->SoundComponent).field0_0x0.DebugPtr);
    return;
  }
  return;
}

// PostInitProperties @ 14bcbd0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::PostInitProperties(UDS_CommonVideoPlayer *this)

{
  UMaterial *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UMediaPlayer *pUVar5;
  char *pcVar6;
  UObject *this_00;
  UFunction *pUVar7;
  UMediaTexture *pUVar8;
  UMaterialInstanceDynamic *this_01;
  FName *pFVar9;
  UMediaSoundComponent *pUVar10;
  longlong *plVar11;
  TObjectPtr<UMediaSource>_u_0 TVar12;
  char *pcVar13;
  undefined1 auStackY_2b8 [32];
  <lambda_1> local_288 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_280;
  FWeakObjectPtr local_278;
  FName local_270;
  FName local_268;
  undefined8 local_260;
  FName local_258;
  UDS_CommonVideoPlayer *local_250;
  FName *local_248 [2];
  FName local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_228;
  FDestructionSentinel local_218;
  undefined1 local_200 [16];
  longlong lStack_1f0;
  FReadAccessScope local_1e8;
  FReadAccessScope local_1d0;
  undefined1 local_1b8 [128];
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  TObjectPtr<UMediaTexture>_u_0 local_38;
  
  local_38.DebugPtr = (UMediaTexture *)(__security_cookie.value ^ (ulonglong)auStackY_2b8);
  UObject::PostInitProperties((UObject *)this);
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar3) {
    return;
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UMediaPlayer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar4);
  local_1b8._8_8_ = this;
  pUVar5 = (UMediaPlayer *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar11 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UMediaPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->MediaPlayer).field0_0x0.DebugPtr = pUVar5;
  pUVar5->PlayOnOpen = true;
  local_238 = (FName)_vcall__784__flat______;
  uStack_230 = 0;
  lStack_1f0 = (ulonglong)uStack_22c << 0x20;
  local_200._8_8_ = _vcall__784__flat______;
  TMulticastDelegateRegistration<void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_CommonVideoPlayer>
            (&((this->MediaPlayer).field0_0x0.DebugPtr)->MediaEvent,
             (UDS_CommonVideoPlayer *)local_200,(pmf_4d4a2818 *)this);
  pUVar5 = (this->MediaPlayer).field0_0x0.DebugPtr;
  pcVar6 = strstr("&UDS_CommonVideoPlayer::OnMediaClosed","::");
  if (pcVar6 == (char *)0x0) {
LAB_14bcbd24b:
    pcVar13 = &DAT_00000002;
LAB_14bcbd250:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar13 = pcVar6;
      pcVar6 = strstr(pcVar13 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar13 == (char *)0x0) goto LAB_14bcbd24b;
    pcVar13 = pcVar13 + 2;
    if (*pcVar13 == '0') goto LAB_14bcbd250;
  }
  ::FName::FName(&local_258,pcVar13);
  local_250 = this;
  if (this == (UDS_CommonVideoPlayer *)0x0) {
    local_250 = (UDS_CommonVideoPlayer *)0x0;
  }
  local_280.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_278.ObjectIndex = 0;
  local_278.ObjectSerialNumber = 0;
  local_270.ComparisonIndex.Value = 0;
  local_270.Number = 0;
  local_268 = local_258;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_250 != (UDS_CommonVideoPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_250);
  }
  FWeakObjectPtr::operator=(&local_278,(FObjectPtr)&local_250);
  local_270 = local_268;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_280,&local_1e8);
  if ((local_270 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_278), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1e8);
  }
  else {
    pUVar7 = UObject::FindFunction(this_00,local_270);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1e8);
    if (pUVar7 != (UFunction *)0x0) goto LAB_14bcbd348;
  }
  local_248[0] = &local_268;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_BindDynamic<UDS_CommonVideoPlayer>'::__l2::<lambda_1>::operator()(local_248);
LAB_14bcbd348:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_280,&local_1d0);
  local_228.Object = local_278;
  local_228.FunctionName = local_270;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_1d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar5->OnMediaClosed,
             (FWriteAccessScope *)&local_218);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar5->OnMediaClosed).field_0x8,&local_228);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar5->OnMediaClosed).field_0x8,local_288,Default);
  if (local_218.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_280.AccessDetector);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UMediaTexture_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar4);
  local_138._8_8_ = this;
  pUVar8 = (UMediaTexture *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
  if (local_138._64_8_ != 0) {
    plVar11 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UMediaTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->MediaTexture).field0_0x0.DebugPtr = pUVar8;
  pUVar8->AutoClear = true;
  UMediaTexture::SetMediaPlayer
            ((this->MediaTexture).field0_0x0.DebugPtr,(this->MediaPlayer).field0_0x0.DebugPtr);
  (**(code **)(((this->MediaTexture).field0_0x0.DebugPtr)->_padding_ + 0x328))();
  pUVar1 = (this->VideoMaterial).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterial *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2656353116986802217>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\CommonUI\\DS_CommonVideoPlayer.cpp"
                       ,0x29,"VideoMaterial");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_260 = 0;
    this_01 = UMaterialInstanceDynamic::Create
                        ((UMaterialInterface *)pUVar1,(UObject *)this,(FName)0x0);
    pUVar8 = (this->MediaTexture).field0_0x0.DebugPtr;
    pFVar9 = ::FName::FName(&local_238,L"MediaTexture");
    UMaterialInstanceDynamic::SetTextureParameterValue(this_01,*pFVar9,(UTexture *)pUVar8);
    FSlateBrush::SetResourceObject(&this->VideoBrush,(UObject *)this_01);
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UMediaSoundComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar10 = (UMediaSoundComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    TVar12.DebugPtr = (UMediaSource *)(local_b8 + 0x50);
    if ((UMediaSource *)local_b8._104_8_ != (UMediaSource *)0x0) {
      TVar12 = (TObjectPtr<UMediaSource>_u_0)local_b8._104_8_;
    }
    (**(code **)((TVar12.DebugPtr)->_padding_ + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UMediaSoundComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->SoundComponent).field0_0x0.DebugPtr = pUVar10;
  pUVar10->Channels = Stereo;
  plVar11 = &((this->SoundComponent).field0_0x0.DebugPtr)->_padding_;
  *(byte *)plVar11 = (byte)*plVar11 | 1;
  UMediaSoundComponent::SetMediaPlayer
            ((this->SoundComponent).field0_0x0.DebugPtr,(this->MediaPlayer).field0_0x0.DebugPtr);
  USynthComponent::Initialize((USynthComponent *)(this->SoundComponent).field0_0x0.DebugPtr,-1);
  UMediaSoundComponent::UpdatePlayer((this->SoundComponent).field0_0x0.DebugPtr);
  return;
}

// RebuildWidget @ 14bcc0440

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UDS_CommonVideoPlayer::RebuildWidget
          (UDS_CommonVideoPlayer *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

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
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\CommonUI\\DS_CommonVideoPlayer.cpp"
             ,0xb5,local_res8);
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

// ReleaseSlateResources @ 14bcc3b40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UDS_CommonVideoPlayer::ReleaseSlateResources(UDS_CommonVideoPlayer *this,bool param_1)

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

// Reverse @ 14bcc4680

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::Reverse(UDS_CommonVideoPlayer *this)

{
  UMediaPlayer::SetRate((this->MediaPlayer).field0_0x0.DebugPtr,__real_bf800000);
  return;
}

// Seek @ 14bcc46a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::Seek(UDS_CommonVideoPlayer *this,float param_1)

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

// SetIsMuted @ 14bcc77a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::SetIsMuted(UDS_CommonVideoPlayer *this,bool param_1)

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

// SetLooping @ 14bcc7a90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::SetLooping(UDS_CommonVideoPlayer *this,bool param_1)

{
  UMediaPlayer::SetLooping((this->MediaPlayer).field0_0x0.DebugPtr,param_1);
  return;
}

// SetPlaybackRate @ 14bcc8600

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::SetPlaybackRate(UDS_CommonVideoPlayer *this,float param_1)

{
  UMediaPlayer::SetRate((this->MediaPlayer).field0_0x0.DebugPtr,param_1);
  return;
}

// SetShouldMatchSize @ 14bcc8810

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::SetShouldMatchSize(UDS_CommonVideoPlayer *this,bool param_1)

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

// SetVideo @ 14bcc9430

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::SetVideo(UDS_CommonVideoPlayer *this,UMediaSource *param_1)

{
  UMediaPlayer *pUVar1;
  bool bVar2;
  UMediaSource *pUVar3;
  
  pUVar1 = (this->MediaPlayer).field0_0x0.DebugPtr;
  UMediaPlayer::EnsurePlaylist(pUVar1);
  pUVar3 = UMediaPlaylist::Get((pUVar1->Playlist).field0_0x0.DebugPtr,0);
  if (pUVar3 != param_1) {
    bVar2 = UMediaPlayer::IsPlaying((this->MediaPlayer).field0_0x0.DebugPtr);
    pUVar1 = (this->MediaPlayer).field0_0x0.DebugPtr;
    if (bVar2) {
      UMediaPlayer::Close(pUVar1);
      this->NextPlayMediaSource = param_1;
      return;
    }
    UMediaPlayer::OpenSource(pUVar1,param_1);
  }
  return;
}

// SetVideoID @ 14bcc94c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::SetVideoID(UDS_CommonVideoPlayer *this,int param_1)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  FStreamableHandle *this_00;
  FDS_ResourceMovieTableRow *pFVar2;
  UAssetManager *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TSharedPtr<FStreamableHandle,1> *pTVar6;
  UDS_CommonVideoPlayer *local_res8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  undefined1 local_b0 [24];
  code *local_98;
  FMRSWRecursiveAccessDetector *pFStack_90;
  char *local_88;
  TSharedPtr<FStreamableHandle,1> local_78;
  FString local_68;
  TSharedPtr<FStreamableHandle,1> local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pTVar1 = &this->AsyncLoadHandle;
  this_00 = pTVar1->Object;
  this->VideoID = param_1;
  if (((this_00 != (FStreamableHandle *)0x0) && (this_00->bCanceled == false)) &&
     (this_00->bReleased == false)) {
    FStreamableHandle::CancelHandle(this_00);
  }
  local_78.Object = (FStreamableHandle *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != &local_78) {
    pTVar1->Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AsyncLoadHandle).SharedReferenceCount,&local_78.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pFVar2 = FDS_ResourceMovieTableRow::GetRef((longlong)this->VideoID,true);
  pUVar3 = UAssetManager::Get();
  local_b0._0_4_ = 0x10c;
  local_b0._4_4_ = 0x3a;
  local_b0._8_8_ =
       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\CommonUI\\DS_CommonVideoPlayer.cpp"
  ;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0._16_8_ = "void __cdecl UDS_CommonVideoPlayer::SetVideoID(int)";
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_98 = OnLoadComplete;
  pFStack_90 = (FMRSWRecursiveAccessDetector *)
               ((ulonglong)local_58.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_c8 = (undefined1  [8])0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_c0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonVideoPlayer____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = local_98;
    puVar4[5] = pFStack_90;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_98._4_4_ = local_b0._4_4_;
  local_98._0_4_ = local_b0._0_4_;
  pFStack_90 = (FMRSWRecursiveAccessDetector *)local_b0._8_8_;
  local_88 = (char *)local_b0._16_8_;
  pTVar6 = FStreamableManager::
           RequestAsyncLoad<FSoftObjectPath_const_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                     (&pUVar3->StreamableManager,&local_58,&pFVar2->MoviePath,
                      (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_c8,0,false,
                      false,&local_68,(FSourceLocation *)&local_98);
  if (pTVar1 != pTVar6) {
    pTVar1->Object = pTVar6->Object;
    pTVar6->Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AsyncLoadHandle).SharedReferenceCount,&pTVar6->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_58.SharedReferenceCount.ReferenceController._4_4_,
                      local_58.SharedReferenceCount.ReferenceController._0_4_));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)local_b0);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_b0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b0._8_8_,(FDestructionSentinel *)local_b0);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  return;
}

// SynchronizeProperties @ 14bccaec0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonVideoPlayer::SynchronizeProperties(UDS_CommonVideoPlayer *this)

{
  UWidget::SynchronizeProperties((UWidget *)this);
  SetVideo(this,(this->Video).field0_0x0.DebugPtr);
  return;
}

