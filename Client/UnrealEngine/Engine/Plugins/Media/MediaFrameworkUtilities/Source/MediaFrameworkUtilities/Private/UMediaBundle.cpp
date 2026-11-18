// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 25

// StaticClass @ 14d7cab30

UClass * __cdecl UMediaBundle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaBundle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaBundle",
               &Z_Registration_Info_UClass_UMediaBundle.InnerSingleton,
               StaticRegisterNativesUMediaBundle,0x120,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaBundle>,InternalVTableHelperCtorCaller<UMediaBundle>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaBundle.InnerSingleton;
}

// UMediaBundle @ 14d7d07e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaBundle * __thiscall UMediaBundle::UMediaBundle(UMediaBundle *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMediaBundle__6B_;
  (this->MediaSource).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  *(undefined8 *)&(this->LensParameters).field_0x30 = 0x3fe0000000000000;
  *(undefined8 *)&(this->LensParameters).field_0x38 = 0x3fe0000000000000;
  *(undefined8 *)&(this->CurrentLensParameters).field_0x30 = 0x3fe0000000000000;
  *(undefined8 *)&(this->CurrentLensParameters).field_0x38 = 0x3fe0000000000000;
  (this->MediaPlayer).field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  (this->MediaTexture).field0_0x0.DebugPtr = (UMediaTexture *)0x0;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)&this->LensParameters = 0;
  *(undefined8 *)&(this->LensParameters).field_0x8 = 0;
  *(undefined8 *)&(this->LensParameters).field_0x10 = 0;
  *(undefined8 *)&(this->LensParameters).field_0x18 = 0;
  *(undefined8 *)&(this->LensParameters).field_0x20 = 0x3ff0000000000000;
  *(undefined8 *)&(this->LensParameters).field_0x28 = 0x3ff0000000000000;
  (this->LensParameters).field_0x40 = 0;
  (this->UndistortedCameraViewInfo).HorizontalFOV = 0.0;
  (this->UndistortedCameraViewInfo).VerticalFOV = 0.0;
  (this->UndistortedCameraViewInfo).FocalLengthRatio = 0.0;
  *(undefined8 *)&this->CurrentLensParameters = 0;
  *(undefined8 *)&(this->CurrentLensParameters).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentLensParameters).field_0x10 = 0;
  *(undefined8 *)&(this->CurrentLensParameters).field_0x18 = 0;
  *(undefined8 *)&(this->CurrentLensParameters).field_0x20 = 0x3ff0000000000000;
  *(undefined8 *)&(this->CurrentLensParameters).field_0x28 = 0x3ff0000000000000;
  (this->CurrentLensParameters).field_0x40 = 0;
  (this->LensDisplacementMap).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  *(undefined8 *)&this->MediaStateChangedDelegate = 0;
  *(undefined8 *)&(this->MediaStateChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MediaStateChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->MediaStateChangedDelegate).field_0x18 = 2;
  return this;
}

// UMediaBundle @ 14d7d08d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaBundle * __thiscall UMediaBundle::UMediaBundle(UMediaBundle *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMediaBundle__6B_;
  (this->MediaSource).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  *(undefined8 *)&(this->LensParameters).field_0x30 = 0x3fe0000000000000;
  *(undefined8 *)&(this->LensParameters).field_0x38 = 0x3fe0000000000000;
  *(undefined8 *)&(this->CurrentLensParameters).field_0x30 = 0x3fe0000000000000;
  *(undefined8 *)&(this->CurrentLensParameters).field_0x38 = 0x3fe0000000000000;
  (this->MediaPlayer).field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  (this->MediaTexture).field0_0x0.DebugPtr = (UMediaTexture *)0x0;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)&this->LensParameters = 0;
  *(undefined8 *)&(this->LensParameters).field_0x8 = 0;
  *(undefined8 *)&(this->LensParameters).field_0x10 = 0;
  *(undefined8 *)&(this->LensParameters).field_0x18 = 0;
  *(undefined8 *)&(this->LensParameters).field_0x20 = 0x3ff0000000000000;
  *(undefined8 *)&(this->LensParameters).field_0x28 = 0x3ff0000000000000;
  (this->LensParameters).field_0x40 = 0;
  (this->UndistortedCameraViewInfo).HorizontalFOV = 0.0;
  (this->UndistortedCameraViewInfo).VerticalFOV = 0.0;
  (this->UndistortedCameraViewInfo).FocalLengthRatio = 0.0;
  *(undefined8 *)&this->CurrentLensParameters = 0;
  *(undefined8 *)&(this->CurrentLensParameters).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentLensParameters).field_0x10 = 0;
  *(undefined8 *)&(this->CurrentLensParameters).field_0x18 = 0;
  *(undefined8 *)&(this->CurrentLensParameters).field_0x20 = 0x3ff0000000000000;
  *(undefined8 *)&(this->CurrentLensParameters).field_0x28 = 0x3ff0000000000000;
  (this->CurrentLensParameters).field_0x40 = 0;
  (this->LensDisplacementMap).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  *(undefined8 *)&this->MediaStateChangedDelegate = 0;
  *(undefined8 *)&(this->MediaStateChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MediaStateChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->MediaStateChangedDelegate).field_0x18 = 2;
  return this;
}

// ~UMediaBundle @ 14d7d1b00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaBundle::~UMediaBundle(UMediaBundle *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMediaBundle__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MediaStateChangedDelegate).field_0x8,
             *(int *)&(this->MediaStateChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->MediaStateChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MediaStateChangedDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// CloseMediaSource @ 14d7d46b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaBundle::CloseMediaSource(UMediaBundle *this)

{
  int *piVar1;
  UMediaPlayer *this_00;
  TArray<UMediaBundle_*,TSizedDefaultAllocator<32>_> *this_01;
  IMediaProfileManager *pIVar2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_02;
  UMediaBundle *local_res8 [4];
  
  piVar1 = &this->ReferenceCount;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) &&
     (this_00 = (this->MediaPlayer).field0_0x0.DebugPtr, this_00 != (UMediaPlayer *)0x0)) {
    if (GIsGarbageCollecting == false) {
      UMediaPlayer::Close(this_00);
    }
    else {
      local_res8[0] = this;
      this_01 = &MediaBundlePrivate::FMediaBundleDeferredCloser::Get()->BundlesToClose;
      TArray<UMediaBundle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMediaBundle_*_const_&>
                (this_01,local_res8);
    }
    pIVar2 = IMediaProfileManager::Get();
    this_02 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_02,this);
    return;
  }
  return;
}

// GetPrivateStaticClass @ 14d7da7f0

UClass * __cdecl UMediaBundle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaBundle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaBundle",
               &Z_Registration_Info_UClass_UMediaBundle.InnerSingleton,
               StaticRegisterNativesUMediaBundle,0x120,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaBundle>,InternalVTableHelperCtorCaller<UMediaBundle>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaBundle.InnerSingleton;
}

// IsPlaying @ 14d7dbe30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaBundle::IsPlaying(UMediaBundle *this)

{
  UMediaPlayer *this_00;
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  TSharedRef<FMediaPlayerFacade,1> *pTVar8;
  longlong *plVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<FMediaPlayerFacade,1> local_28;
  TSharedRef<FMediaPlayerFacade,1> local_18;
  
  bVar4 = false;
  bVar5 = false;
  iVar7 = 0;
  if (((this->MediaSource).field0_0x0.DebugPtr != (UMediaSource *)0x0) &&
     (this_00 = (this->MediaPlayer).field0_0x0.DebugPtr, this_00 != (UMediaPlayer *)0x0)) {
    pTVar8 = UMediaPlayer::GetPlayerFacade(this_00,&local_18);
    pTVar1 = (pTVar8->Object->Player).SharedReferenceCount.ReferenceController;
    pIVar2 = (pTVar8->Object->Player).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pIVar2 == (IMediaPlayer *)0x0) {
      pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    }
    else {
      pTVar8 = UMediaPlayer::GetPlayerFacade((this->MediaPlayer).field0_0x0.DebugPtr,&local_28);
      pTVar10 = (pTVar8->Object->Player).SharedReferenceCount.ReferenceController;
      pIVar2 = (pTVar8->Object->Player).Object;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pIVar2 == (IMediaPlayer *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      iVar7 = (**(code **)(*plVar9 + 0x18))(plVar9);
      bVar4 = true;
      bVar5 = true;
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return iVar7 == 3;
  }
  return false;
}

// OnMediaClosed @ 14d7dcf30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaBundle::OnMediaClosed(UMediaBundle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  TSharedRef<FMediaPlayerFacade,1> *pTVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_c;
  TSharedRef<FMediaPlayerFacade,1> local_38;
  TSharedRef<FMediaPlayerFacade,1> local_28;
  
  bVar4 = false;
  bVar6 = false;
  uVar7 = 0;
  if ((this->MediaPlayer).field0_0x0.DebugPtr == (UMediaPlayer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MediaPlayer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaFrameworkUtilities\\Source\\MediaFrameworkUtilities\\Private\\MediaBundle.cpp"
                       ,200,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = UMediaPlayer::GetPlayerFacade((this->MediaPlayer).field0_0x0.DebugPtr,&local_28);
  pTVar1 = (pTVar8->Object->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (pTVar8->Object->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = UMediaPlayer::GetPlayerFacade((this->MediaPlayer).field0_0x0.DebugPtr,&local_38);
    pTVar11 = (pTVar8->Object->Player).SharedReferenceCount.ReferenceController;
    pIVar2 = (pTVar8->Object->Player).Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pIVar2 == (IMediaPlayer *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar9 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    uVar7 = (**(code **)(*plVar9 + 0x18))(plVar9);
    bVar4 = true;
    bVar6 = true;
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (uVar7 < 2) {
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              (&this->MediaStateChangedDelegate,false);
    if (((this->bReopenSourceOnError != false) && (0 < this->ReferenceCount)) &&
       ((this->MediaSource).field0_0x0.DebugPtr != (UMediaSource *)0x0)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
        if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
            _thread_safe_static_guard_0__ == -1) {
          pwVar10 = FCommandLine::Get();
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
               FParse::Param(pwVar10,L"nullrhi");
          _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__);
        }
      }
      if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
         && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
             == false)) {
        UMediaPlayer::OpenSource
                  ((this->MediaPlayer).field0_0x0.DebugPtr,(this->MediaSource).field0_0x0.DebugPtr);
        UMediaPlayer::SetLooping((this->MediaPlayer).field0_0x0.DebugPtr,this->bLoopMediaSource);
        return;
      }
    }
  }
  return;
}

// OnMediaOpenFailed @ 14d7dd150

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaBundle::OnMediaOpenFailed(UMediaBundle *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->MediaStateChangedDelegate,false);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// OnMediaOpenOpened @ 14d7dd190

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaBundle::OnMediaOpenOpened(UMediaBundle *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->MediaStateChangedDelegate,true);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// OnMediaProfileChanged @ 14d7dd1e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UMediaBundle::OnMediaProfileChanged
          (UMediaBundle *this,UMediaProfile *param_1,UMediaProfile *param_2)

{
  wchar_t *pwVar1;
  
  if (((0 < this->ReferenceCount) &&
      ((this->MediaPlayer).field0_0x0.DebugPtr != (UMediaPlayer *)0x0)) &&
     ((this->MediaSource).field0_0x0.DebugPtr != (UMediaSource *)0x0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar1 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar1,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      UMediaPlayer::OpenSource
                ((this->MediaPlayer).field0_0x0.DebugPtr,(this->MediaSource).field0_0x0.DebugPtr);
      UMediaPlayer::SetLooping((this->MediaPlayer).field0_0x0.DebugPtr,this->bLoopMediaSource);
      return;
    }
  }
  return;
}

// OpenMediaSource @ 14d7dde40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UMediaBundle::OpenMediaSource(UMediaBundle *this)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  IMediaPlayer *pIVar4;
  UMediaPlayer *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  TSharedRef<FMediaPlayerFacade,1> *pTVar14;
  longlong *plVar15;
  char *pcVar16;
  UObject *this_00;
  UFunction *pUVar17;
  FMediaBundleDeferredCloser *pFVar18;
  IMediaProfileManager *pIVar19;
  TMulticastDelegateRegistration<void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
  *this_01;
  wchar_t *pwVar20;
  char *pcVar21;
  FScriptContainerElement *pFVar22;
  TReferenceControllerBase<1> *pTVar23;
  uint uVar24;
  char *pcVar25;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FName local_res10;
  FName local_res18;
  UMediaBundle *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FWeakObjectPtr local_f0;
  FName local_e8;
  FName *local_e0;
  FName local_d8;
  FName local_d0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_c8;
  FDestructionSentinel local_b8;
  undefined1 local_a0 [16];
  TReferenceControllerBase<1> *local_90;
  TSharedRef<FMediaPlayerFacade,1> local_88;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  
  bVar8 = false;
  bVar9 = false;
  uVar12 = 0;
  local_res8 = 0;
  if (((this->MediaSource).field0_0x0.DebugPtr == (UMediaSource *)0x0) ||
     ((this->MediaPlayer).field0_0x0.DebugPtr == (UMediaPlayer *)0x0)) {
    return false;
  }
  bVar11 = true;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar20 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar20,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false)) {
    return true;
  }
  pTVar14 = UMediaPlayer::GetPlayerFacade((this->MediaPlayer).field0_0x0.DebugPtr,&local_88);
  pTVar3 = (pTVar14->Object->Player).SharedReferenceCount.ReferenceController;
  pIVar4 = (pTVar14->Object->Player).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar4 == (IMediaPlayer *)0x0) {
    pTVar23 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar14 = UMediaPlayer::GetPlayerFacade
                        ((this->MediaPlayer).field0_0x0.DebugPtr,
                         (TSharedRef<FMediaPlayerFacade,1> *)(local_a0 + 8));
    pTVar23 = (pTVar14->Object->Player).SharedReferenceCount.ReferenceController;
    pIVar4 = (pTVar14->Object->Player).Object;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar4 == (IMediaPlayer *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    plVar15 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    uVar12 = (**(code **)(*plVar15 + 0x18))(plVar15);
    bVar8 = true;
    bVar9 = true;
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (uVar12 < 2) {
    bVar11 = UMediaPlayer::OpenSource
                       ((this->MediaPlayer).field0_0x0.DebugPtr,
                        (this->MediaSource).field0_0x0.DebugPtr);
    UMediaPlayer::SetLooping((this->MediaPlayer).field0_0x0.DebugPtr,this->bLoopMediaSource);
    if (!bVar11) {
      return bVar11;
    }
  }
  pUVar5 = (this->MediaPlayer).field0_0x0.DebugPtr;
  pcVar16 = strstr("&UMediaBundle::OnMediaClosed","::");
  pcVar25 = &DAT_00000002;
  if (pcVar16 == (char *)0x0) {
LAB_14d7de02a:
    pcVar21 = &DAT_00000002;
LAB_14d7de02d:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  else {
    do {
      pcVar21 = pcVar16;
      pcVar16 = strstr(pcVar21 + 1,"::");
    } while (pcVar16 != (char *)0x0);
    if (pcVar21 == (char *)0x0) goto LAB_14d7de02a;
    pcVar21 = pcVar21 + 2;
    if (*pcVar21 == '0') goto LAB_14d7de02d;
  }
  ::FName::FName(&local_res18,pcVar21);
  local_res10 = local_res18;
  local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_f0.ObjectIndex = 0;
  local_f0.ObjectSerialNumber = 0;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMediaBundle *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)&local_res20);
  local_e8 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_f8,&local_78);
  if ((local_e8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_f0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
LAB_14d7de103:
    local_e0 = &local_res10;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::__Internal_BindDynamic<UMediaBundle>'::
    __l2::<lambda_1>::operator()(&local_e0);
  }
  else {
    pUVar17 = UObject::FindFunction(this_00,local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    if (pUVar17 == (UFunction *)0x0) goto LAB_14d7de103;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_f8,&local_60);
  local_c8.Object = local_f0;
  local_c8.FunctionName = local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar5->OnMediaClosed,
             (FWriteAccessScope *)&local_b8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar5->OnMediaClosed).field_0x8,&local_c8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar5->OnMediaClosed).field_0x8,(<lambda_1> *)&local_res8,Default);
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
  pUVar5 = (this->MediaPlayer).field0_0x0.DebugPtr;
  pcVar16 = strstr("&UMediaBundle::OnMediaOpenOpened","::");
  if (pcVar16 == (char *)0x0) {
LAB_14d7de1da:
    pcVar21 = &DAT_00000002;
LAB_14d7de1dd:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  else {
    do {
      pcVar21 = pcVar16;
      pcVar16 = strstr(pcVar21 + 1,"::");
    } while (pcVar16 != (char *)0x0);
    if (pcVar21 == (char *)0x0) goto LAB_14d7de1da;
    pcVar21 = pcVar21 + 2;
    if (*pcVar21 == '0') goto LAB_14d7de1dd;
  }
  ::FName::FName(&local_d8,pcVar21);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,FString>::
  __Internal_AddUniqueDynamic<UMediaBundle>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,FString> *)
             &pUVar5->OnMediaOpened,this,(pmf_82dfca73)0x14d7dd190,local_d8);
  pUVar5 = (this->MediaPlayer).field0_0x0.DebugPtr;
  pcVar16 = strstr("&UMediaBundle::OnMediaOpenFailed","::");
  if (pcVar16 != (char *)0x0) {
    do {
      pcVar21 = pcVar16;
      pcVar16 = strstr(pcVar21 + 1,"::");
    } while (pcVar16 != (char *)0x0);
    if ((pcVar21 != (char *)0x0) && (pcVar25 = pcVar21 + 2, pcVar21[2] != '0')) goto LAB_14d7de2b8;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
LAB_14d7de2b8:
  ::FName::FName(&local_d0,pcVar25);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,FString>::
  __Internal_AddUniqueDynamic<UMediaBundle>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,FString> *)
             &pUVar5->OnMediaOpenFailed,this,(pmf_82dfca73)0x14d7dd150,local_d0);
  this->ReferenceCount = this->ReferenceCount + 1;
  pFVar18 = MediaBundlePrivate::FMediaBundleDeferredCloser::Get();
  pFVar6 = (pFVar18->BundlesToClose).AllocatorInstance.Data;
  iVar13 = (pFVar18->BundlesToClose).ArrayNum;
  pFVar22 = pFVar6;
  do {
    if (pFVar22 == pFVar6 + (longlong)iVar13 * 8) {
LAB_14d7de3b1:
      if (this->ReferenceCount == 1) {
        pIVar19 = IMediaProfileManager::Get();
        this_01 = (TMulticastDelegateRegistration<void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
                   *)(**(code **)((longlong)*pIVar19 + 0x28))(pIVar19);
        TMulticastDelegateRegistration<void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
        ::AddUObject<UMediaBundle>(this_01,(UMediaBundle *)local_a0,(pmf_b9a200dd)this);
      }
      return bVar11;
    }
    if (*(UMediaBundle **)pFVar22 == this) {
      uVar12 = (uint)((longlong)pFVar22 - (longlong)pFVar6 >> 3);
      if (uVar12 != 0xffffffff) {
        uVar24 = 0;
        if ((int)(uVar12 + 1) <= iVar13) {
          uVar24 = ~uVar12 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        iVar2 = (pFVar18->BundlesToClose).ArrayNum;
        pFVar6 = (pFVar18->BundlesToClose).AllocatorInstance.Data;
        iVar13 = ~uVar12 + iVar2;
        if (1 < iVar13) {
          iVar13 = 1;
        }
        if (iVar13 != 0) {
          memmove(pFVar6 + (longlong)(int)uVar12 * 8,pFVar6 + (longlong)(iVar2 - iVar13) * 8,
                  (longlong)iVar13 << 3);
        }
        piVar1 = &(pFVar18->BundlesToClose).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      goto LAB_14d7de3b1;
    }
    pFVar22 = pFVar22 + 8;
  } while( true );
}

// PostDuplicate @ 14d7dec80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaBundle::PostDuplicate(UMediaBundle *this,bool param_1)

{
  return;
}

// PostLoad @ 14d7dec90

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

void __thiscall UMediaBundle::PostLoad(UMediaBundle *this)

{
  undefined8 uVar1;
  UTextureRenderTarget2D *this_00;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  UTexture2D *pUVar7;
  UWorld *pUVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  TIntPoint<int>_u_0 local_res8;
  
  UObject::PostLoad((UObject *)this);
  this_00 = (this->LensDisplacementMap).field0_0x0.DebugPtr;
  if (this_00 != (UTextureRenderTarget2D *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
    UTextureRenderTarget2D::UpdateResourceImmediate
              ((this->LensDisplacementMap).field0_0x0.DebugPtr,false);
    pvVar6 = ThreadLocalStoragePointer;
    if ((this->LensDisplacementMap).field0_0x0.DebugPtr != (UTextureRenderTarget2D *)0x0) {
      uVar1 = *(undefined8 *)&(this->LensParameters).field_0x8;
      uVar10 = (ulonglong)_tls_index;
      uVar3 = *(undefined8 *)&(this->LensParameters).field_0x10;
      uVar4 = *(undefined8 *)&(this->LensParameters).field_0x18;
      *(undefined8 *)&this->CurrentLensParameters = *(undefined8 *)&this->LensParameters;
      *(undefined8 *)&(this->CurrentLensParameters).field_0x8 = uVar1;
      uVar1 = *(undefined8 *)&(this->LensParameters).field_0x20;
      uVar5 = *(undefined8 *)&(this->LensParameters).field_0x28;
      lVar2 = *(longlong *)((longlong)pvVar6 + uVar10 * 8);
      *(undefined8 *)&(this->CurrentLensParameters).field_0x10 = uVar3;
      *(undefined8 *)&(this->CurrentLensParameters).field_0x18 = uVar4;
      uVar3 = *(undefined8 *)&(this->LensParameters).field_0x30;
      uVar4 = *(undefined8 *)&(this->LensParameters).field_0x38;
      *(undefined8 *)&(this->CurrentLensParameters).field_0x20 = uVar1;
      *(undefined8 *)&(this->CurrentLensParameters).field_0x28 = uVar5;
      uVar1 = *(undefined8 *)&(this->LensParameters).field_0x40;
      *(undefined8 *)&(this->CurrentLensParameters).field_0x30 = uVar3;
      *(undefined8 *)&(this->CurrentLensParameters).field_0x38 = uVar4;
      *(undefined8 *)&(this->CurrentLensParameters).field_0x40 = uVar1;
      if ((*(int *)(lVar2 + 0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar9 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar9,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
         && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
             == false)) {
        local_res8._s_0.X = 0x100;
        local_res8._s_0.Y = 0x100;
        pUVar7 = FOpenCVLensDistortionParameters::CreateUndistortUVDisplacementMap
                           (&this->CurrentLensParameters,(TIntPoint<int> *)&local_res8._s_0,0.0,
                            &this->UndistortedCameraViewInfo);
        if ((pUVar7 != (UTexture2D *)0x0) &&
           (pUVar8 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this), pUVar8 != (UWorld *)0x0
           )) {
          FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget
                    (pUVar8,(this->LensDisplacementMap).field0_0x0.DebugPtr,pUVar7);
        }
      }
    }
  }
  return;
}

// RefreshLensDisplacementMap @ 14d7df670

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

void __thiscall UMediaBundle::RefreshLensDisplacementMap(UMediaBundle *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  UTexture2D *pUVar6;
  UWorld *pUVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  TIntPoint<int>_u_0 local_res8;
  
  pvVar5 = ThreadLocalStoragePointer;
  if ((this->LensDisplacementMap).field0_0x0.DebugPtr != (UTextureRenderTarget2D *)0x0) {
    uVar1 = *(undefined8 *)&(this->LensParameters).field_0x8;
    uVar2 = *(undefined8 *)&(this->LensParameters).field_0x10;
    uVar3 = *(undefined8 *)&(this->LensParameters).field_0x18;
    *(undefined8 *)&this->CurrentLensParameters = *(undefined8 *)&this->LensParameters;
    *(undefined8 *)&(this->CurrentLensParameters).field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&(this->LensParameters).field_0x20;
    uVar4 = *(undefined8 *)&(this->LensParameters).field_0x28;
    *(undefined8 *)&(this->CurrentLensParameters).field_0x10 = uVar2;
    *(undefined8 *)&(this->CurrentLensParameters).field_0x18 = uVar3;
    uVar2 = *(undefined8 *)&(this->LensParameters).field_0x30;
    uVar3 = *(undefined8 *)&(this->LensParameters).field_0x38;
    *(undefined8 *)&(this->CurrentLensParameters).field_0x20 = uVar1;
    *(undefined8 *)&(this->CurrentLensParameters).field_0x28 = uVar4;
    uVar1 = *(undefined8 *)&(this->LensParameters).field_0x40;
    uVar9 = (ulonglong)_tls_index;
    *(undefined8 *)&(this->CurrentLensParameters).field_0x30 = uVar2;
    *(undefined8 *)&(this->CurrentLensParameters).field_0x38 = uVar3;
    *(undefined8 *)&(this->CurrentLensParameters).field_0x40 = uVar1;
    if ((*(int *)(*(longlong *)((longlong)pvVar5 + uVar9 * 8) + 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar8 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar8,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      local_res8._s_0.X = 0x100;
      local_res8._s_0.Y = 0x100;
      pUVar6 = FOpenCVLensDistortionParameters::CreateUndistortUVDisplacementMap
                         (&this->CurrentLensParameters,(TIntPoint<int> *)&local_res8._s_0,0.0,
                          &this->UndistortedCameraViewInfo);
      if ((pUVar6 != (UTexture2D *)0x0) &&
         (pUVar7 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this), pUVar7 != (UWorld *)0x0))
      {
        FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget
                  (pUVar7,(this->LensDisplacementMap).field0_0x0.DebugPtr,pUVar6);
      }
    }
  }
  return;
}

// StaticRegisterNativesUMediaBundle @ 14d7e1e50

void __cdecl UMediaBundle::StaticRegisterNativesUMediaBundle(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UMediaBundle_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetLensDisplacementTexture @ 14d7e28e0

void __cdecl
UMediaBundle::execGetLensDisplacementTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 6);
  return;
}

// execGetMaterial @ 14d7e2910

void __cdecl UMediaBundle::execGetMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x20;
  return;
}

// execGetMediaPlayer @ 14d7e2970

void __cdecl UMediaBundle::execGetMediaPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x10;
  return;
}

// execGetMediaSource @ 14d7e29e0

void __cdecl UMediaBundle::execGetMediaSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 1);
  return;
}

// execGetMediaTexture @ 14d7e2a10

void __cdecl UMediaBundle::execGetMediaTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x18;
  return;
}

// execGetUndistortedCameraViewInfo @ 14d7e2a40

void __cdecl
UMediaBundle::execGetUndistortedCameraViewInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[3].field_0x20;
  *(undefined4 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execOnMediaClosed @ 14d7e2b00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaBundle::execOnMediaClosed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnMediaClosed((UMediaBundle *)param_1);
  return;
}

// execOnMediaOpenFailed @ 14d7e2b20

void __cdecl UMediaBundle::execOnMediaOpenFailed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  void *local_28;
  undefined8 local_20;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,&local_18,(int)local_20,&local_c);
    memcpy(local_18.Data,_Src,lVar2 * 2);
  }
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &param_1[6].field_0x10,false);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execOnMediaOpenOpened @ 14d7e2c40

void __cdecl UMediaBundle::execOnMediaOpenOpened(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  void *local_28;
  undefined8 local_20;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,&local_18,(int)local_20,&local_c);
    memcpy(local_18.Data,_Src,lVar2 * 2);
  }
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &param_1[6].field_0x10,true);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

