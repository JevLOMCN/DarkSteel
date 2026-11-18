// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 38

// StaticClass @ 14b5d2450

UClass * __cdecl UDS_ViewerManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ViewerManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ViewerManager",
               &Z_Registration_Info_UClass_UDS_ViewerManager.InnerSingleton,
               StaticRegisterNativesUDS_ViewerManager,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ViewerManager>,
               InternalVTableHelperCtorCaller<UDS_ViewerManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ViewerManager.InnerSingleton;
}

// UDS_ViewerManager @ 14b5d9790

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_ViewerManager * __thiscall
UDS_ViewerManager::UDS_ViewerManager(UDS_ViewerManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->bIsCompleteGallerySequenceLoading = false;
  this->bEnableLookAt = true;
  this->_padding_ = (longlong)&___7UDS_ViewerManager__6B_;
  (this->ViewerSceneInfo).field0_0x0.DebugPtr = (UDS_ViewerSceneInfo *)0x0;
  (this->PreViewerSceneInfo).field0_0x0.DebugPtr = (UDS_ViewerSceneInfo *)0x0;
  this->GallerySequenceCharacterID = 0;
  (this->GallerySequencePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GallerySequencePath).AssetPath.PackageName.Number = 0;
  (this->GallerySequencePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GallerySequencePath).AssetPath.AssetName.Number = 0;
  (this->GallerySequencePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GallerySequencePath).SubPathString.Data.ArrayNum = 0;
  (this->GallerySequencePath).SubPathString.Data.ArrayMax = 0;
  (this->LoadHandle_GallerySequence).Object = (FStreamableHandle *)0x0;
  (this->LoadHandle_GallerySequence).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GallerySequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  (this->TimerHandle_BroadcastSelectViewerCharacterEnd).Handle = 0;
  *(undefined8 *)&this->SelectViewerCharacterDelegate = 0;
  *(undefined8 *)&(this->SelectViewerCharacterDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SelectViewerCharacterDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ChangedZoomInOutStateDelegate = 0;
  *(undefined8 *)&(this->ChangedZoomInOutStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedZoomInOutStateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->RotateViewerCharacterDelegate = 0;
  *(undefined8 *)&(this->RotateViewerCharacterDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->RotateViewerCharacterDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ChangedEnableLookAtDelegate = 0;
  *(undefined8 *)&(this->ChangedEnableLookAtDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedEnableLookAtDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->SelectViewerCharacterDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->ChangedZoomInOutStateDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->RotateViewerCharacterDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->ChangedEnableLookAtDelegate).field_0x18 = 2;
  return this;
}

// UDS_ViewerManager @ 14b5d9870

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_ViewerManager * __thiscall
UDS_ViewerManager::UDS_ViewerManager(UDS_ViewerManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->bIsCompleteGallerySequenceLoading = false;
  this->bEnableLookAt = true;
  this->_padding_ = (longlong)&___7UDS_ViewerManager__6B_;
  (this->ViewerSceneInfo).field0_0x0.DebugPtr = (UDS_ViewerSceneInfo *)0x0;
  (this->PreViewerSceneInfo).field0_0x0.DebugPtr = (UDS_ViewerSceneInfo *)0x0;
  this->GallerySequenceCharacterID = 0;
  (this->GallerySequencePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GallerySequencePath).AssetPath.PackageName.Number = 0;
  (this->GallerySequencePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GallerySequencePath).AssetPath.AssetName.Number = 0;
  (this->GallerySequencePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GallerySequencePath).SubPathString.Data.ArrayNum = 0;
  (this->GallerySequencePath).SubPathString.Data.ArrayMax = 0;
  (this->LoadHandle_GallerySequence).Object = (FStreamableHandle *)0x0;
  (this->LoadHandle_GallerySequence).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GallerySequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  (this->TimerHandle_BroadcastSelectViewerCharacterEnd).Handle = 0;
  *(undefined8 *)&this->SelectViewerCharacterDelegate = 0;
  *(undefined8 *)&(this->SelectViewerCharacterDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SelectViewerCharacterDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ChangedZoomInOutStateDelegate = 0;
  *(undefined8 *)&(this->ChangedZoomInOutStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedZoomInOutStateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->RotateViewerCharacterDelegate = 0;
  *(undefined8 *)&(this->RotateViewerCharacterDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->RotateViewerCharacterDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ChangedEnableLookAtDelegate = 0;
  *(undefined8 *)&(this->ChangedEnableLookAtDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedEnableLookAtDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->SelectViewerCharacterDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->ChangedZoomInOutStateDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->RotateViewerCharacterDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->ChangedEnableLookAtDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_ViewerManager @ 14b5da5b0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_ViewerManager::~UDS_ViewerManager(UDS_ViewerManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_ViewerManager__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedEnableLookAtDelegate).field_0x8,
             *(int *)&(this->ChangedEnableLookAtDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedEnableLookAtDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedEnableLookAtDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RotateViewerCharacterDelegate).field_0x8,
             *(int *)&(this->RotateViewerCharacterDelegate).field_0x10);
  pvVar1 = *(void **)&(this->RotateViewerCharacterDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RotateViewerCharacterDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedZoomInOutStateDelegate).field_0x8,
             *(int *)&(this->ChangedZoomInOutStateDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedZoomInOutStateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedZoomInOutStateDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SelectViewerCharacterDelegate).field_0x8,
             *(int *)&(this->SelectViewerCharacterDelegate).field_0x10);
  pvVar1 = *(void **)&(this->SelectViewerCharacterDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SelectViewerCharacterDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LoadHandle_GallerySequence).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->GallerySequencePath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5dba20

UClass * __cdecl UDS_ViewerManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ViewerManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ViewerManager",
               &Z_Registration_Info_UClass_UDS_ViewerManager.InnerSingleton,
               StaticRegisterNativesUDS_ViewerManager,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ViewerManager>,
               InternalVTableHelperCtorCaller<UDS_ViewerManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ViewerManager.InnerSingleton;
}

// StaticRegisterNativesUDS_ViewerManager @ 14b5dbe10

void __cdecl UDS_ViewerManager::StaticRegisterNativesUDS_ViewerManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_ViewerManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execFinishFadeOut @ 14b5dd8a0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UDS_ViewerManager::execFinishFadeOut(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FinishFadeOut((UDS_ViewerManager *)param_1);
  return;
}

// execOnCompleteGallerySequenceLoading @ 14b5dd8c0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDS_ViewerManager::execOnCompleteGallerySequenceLoading
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnCompleteGallerySequenceLoading((UDS_ViewerManager *)param_1);
  return;
}

// execOnCompleteWorldStreaming @ 14b5dd920

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDS_ViewerManager::execOnCompleteWorldStreaming(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnCompleteWorldStreaming((UDS_ViewerManager *)param_1);
  return;
}

// BroadcastSelectViewerCharacter @ 14bb52930

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UDS_ViewerManager::BroadcastSelectViewerCharacter(UDS_ViewerManager *this)

{
  FTimerManager *pFVar1;
  FTimerData *pFVar2;
  bool local_res8 [8];
  
  local_res8[0] = true;
  TMulticastDelegate<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->SelectViewerCharacterDelegate,local_res8);
  if ((this->TimerHandle_BroadcastSelectViewerCharacterEnd).Handle != 0) {
    pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(pFVar1,&this->TimerHandle_BroadcastSelectViewerCharacterEnd);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar1,(FTimerHandle)(this->TimerHandle_BroadcastSelectViewerCharacterEnd).Handle);
    }
    (this->TimerHandle_BroadcastSelectViewerCharacterEnd).Handle = 0;
  }
  pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimer<UDS_ViewerManager>
            (pFVar1,&this->TimerHandle_BroadcastSelectViewerCharacterEnd,this,
             (pmf_84d966d2)0x14bb52a00,__real_3dcccccd,false,__real_bf800000);
  return;
}

// BroadcastSelectViewerCharacterEnd @ 14bb52a00

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_ViewerManager::BroadcastSelectViewerCharacterEnd(UDS_ViewerManager *this)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TMulticastDelegate<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->SelectViewerCharacterDelegate,local_res8);
  return;
}

// CancelAsyncLoadGallerySequence @ 14bb53b80

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_ViewerManager::CancelAsyncLoadGallerySequence(UDS_ViewerManager *this)

{
  FStreamableHandle *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->GallerySequenceCharacterID = 0;
  (this->GallerySequencePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GallerySequencePath).AssetPath.AssetName.Number = 0;
  (this->GallerySequencePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GallerySequencePath).AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&(this->GallerySequencePath).SubPathString,0);
  this_00 = (this->LoadHandle_GallerySequence).Object;
  this->bIsCompleteGallerySequenceLoading = false;
  if (((this_00 != (FStreamableHandle *)0x0) && (this_00->bCanceled == false)) &&
     (this_00->bReleased == false)) {
    FStreamableHandle::CancelHandle(this_00);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LoadHandle_GallerySequence != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
    (this->LoadHandle_GallerySequence).Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LoadHandle_GallerySequence).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// CloseViewerScene @ 14bb55b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UDS_ViewerManager::CloseViewerScene(UDS_ViewerManager *this)

{
  UDS_ViewerSceneInfo *this_00;
  ULevelSequencePlayer *this_01;
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this_02;
  ADS_CameraManager *this_03;
  UObject *pUVar3;
  APlayerController *pAVar4;
  FTimerManager *this_04;
  FTimerData *pFVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_198 [32];
  float local_168;
  float local_164;
  FWeakObjectPtr local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this_00 = (this->ViewerSceneInfo).field0_0x0.DebugPtr;
  if ((this_00 == (UDS_ViewerSceneInfo *)0x0) ||
     ((this->PreViewerSceneInfo).field0_0x0.DebugPtr == (UDS_ViewerSceneInfo *)0x0)) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ViewerManager::CloseViewerScene",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,0x593,L"Invalid MemberVariables.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_ViewerSceneInfo::ClearInfo(this_00);
    UDS_ViewerSceneInfo::ClearInfo((this->PreViewerSceneInfo).field0_0x0.DebugPtr);
    CancelAsyncLoadGallerySequence(this);
    this_01 = (this->GallerySequencePlayer).field0_0x0.DebugPtr;
    if (this_01 != (ULevelSequencePlayer *)0x0) {
      UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)this_01);
    }
    (this->GallerySequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
    this_02 = UDS_WindowManager::GetInst();
    if (this_02 != (UDS_WindowManager *)0x0) {
      local_168 = 0.0;
      local_164 = 0.0;
      UDS_WindowManager::CloseWindow(this_02,0x387,(uint *)&local_164,&local_168);
    }
    GetCameraManager();
    bVar2 = TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr> *)&local_160,(void *)0x0);
    if (!bVar2) {
      this_03 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_160);
      local_164 = DS_CommonDataHelper::CharacterViewerFadeInDuration();
      local_168 = 1.4013e-45;
      ADS_CameraManager::RequestFade(this_03,(EDS_CameraFadeState *)&local_168,&local_164);
    }
    pUVar3 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    pAVar4 = UGameplayStatics::GetPlayerController(pUVar3,0);
    if (pAVar4 != (APlayerController *)0x0) {
      uStack_14c = uStack_13c & 0xfffffffe;
      pUVar3 = (UObject *)pAVar4->_padding_;
      uStack_144 = CONCAT31(uStack_144._1_3_,1);
      pcVar1 = *(code **)(pAVar4->_padding_ + 0xef8);
      uStack_154 = uStack_144;
      local_158 = 0;
      uStack_150 = 0x40000000;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      local_148 = local_158;
      uStack_144 = uStack_154;
      uStack_140 = uStack_150;
      uStack_13c = uStack_14c;
      (*pcVar1)(pAVar4,pUVar3,&local_148);
    }
    if ((this->TimerHandle_BroadcastSelectViewerCharacterEnd).Handle != 0) {
      this_04 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar5 = FTimerManager::FindTimer
                         (this_04,&this->TimerHandle_BroadcastSelectViewerCharacterEnd);
      if (pFVar5 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (this_04,(FTimerHandle)
                           (this->TimerHandle_BroadcastSelectViewerCharacterEnd).Handle);
      }
      (this->TimerHandle_BroadcastSelectViewerCharacterEnd).Handle = 0;
    }
  }
  return;
}

// Created @ 14bb5ca20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ViewerManager::Created(UDS_ViewerManager *this)

{
  bool bVar1;
  UDS_ViewerSceneInfo *pUVar2;
  UDS_AccountLocalSave *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  *(undefined1 *)&this->_padding_ = 0;
  pUVar2 = NewObject<UDS_ViewerSceneInfo>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar2 == (UDS_ViewerSceneInfo *)0x0)
     ) {
    (this->ViewerSceneInfo).field0_0x0.DebugPtr = pUVar2;
    if (pUVar2 != (UDS_ViewerSceneInfo *)0x0) goto LAB_14bb5ca70;
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = (longlong)pUVar2;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ViewerManager::Created",0x1a,Yes);
    pwVar5 = L"ViewerSceneInfo is nullptr.";
    uVar4 = 0x46c;
LAB_14bb5cb48:
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar4,pwVar5);
    if ((UDS_ViewerSceneInfo *)local_138._padding_ != (UDS_ViewerSceneInfo *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
    (this->ViewerSceneInfo).field0_0x0.DebugPtr = pUVar2;
LAB_14bb5ca70:
    pUVar2 = NewObject<UDS_ViewerSceneInfo>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar2 == (UDS_ViewerSceneInfo *)0x0)) {
      (this->PreViewerSceneInfo).field0_0x0.DebugPtr = pUVar2;
      if (pUVar2 == (UDS_ViewerSceneInfo *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = (longlong)pUVar2;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_ViewerManager::Created",0x1a,Yes);
        pwVar5 = L"PreViewerSceneInfo is nullptr.";
        uVar4 = 0x473;
        goto LAB_14bb5cb48;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      (this->PreViewerSceneInfo).field0_0x0.DebugPtr = pUVar2;
    }
    UDS_AccountLocalSave::GetInst();
    bVar1 = TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr> *)local_148,(void *)0x0)
    ;
    if (!bVar1) {
      this_00 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get(local_148);
      bVar1 = UDS_AccountLocalSave::GetViewerManagerEnableLookAt(this_00);
      this->bEnableLookAt = bVar1;
    }
  }
  return;
}

// Destroyed @ 14bb5d970

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_ViewerManager::Destroyed(UDS_ViewerManager *this)

{
  return;
}

// FinishFadeOut @ 14bb62d10

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_ViewerManager::FinishFadeOut(UDS_ViewerManager *this)

{
  PlayGallerySequence(this,this->GallerySequenceCharacterID);
  return;
}

// GetCameraManager @ 14bb63ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr> __cdecl UDS_ViewerManager::GetCameraManager(void)

{
  TObjectPtr<APlayerCameraManager> *this;
  bool bVar1;
  UWorld *pUVar2;
  APlayerController *pAVar3;
  UClass *pUVar4;
  FWeakObjectPtr in_RCX;
  APlayerCameraManager *pAVar5;
  APlayerCameraManager *local_res10;
  
  pUVar2 = UDS_GameInstance::GetGameInstanceWorld();
  pAVar3 = UGameplayStatics::GetPlayerController((UObject *)pUVar2,0);
  pAVar5 = (APlayerCameraManager *)0x0;
  if (pAVar3 != (APlayerController *)0x0) {
    this = &pAVar3->PlayerCameraManager;
    if ((this->field0_0x0).DebugPtr != (APlayerCameraManager *)0x0) {
      pUVar4 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this,pUVar4);
      if (bVar1) {
        pAVar5 = (this->field0_0x0).DebugPtr;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar5 != (APlayerCameraManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    *(undefined8 *)in_RCX = 0;
    local_res10 = pAVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar5 != (APlayerCameraManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res10);
    return (TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr>)in_RCX;
  }
  *(undefined8 *)in_RCX = 0;
  local_res10 = (APlayerCameraManager *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res10);
  return (TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr>)in_RCX;
}

// GetEnableLookAt @ 14bb651f0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDS_ViewerManager::GetEnableLookAt(UDS_ViewerManager *this)

{
  return this->bEnableLookAt;
}

// GetFadeTime @ 14bb65700

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall
UDS_ViewerManager::GetFadeTime(UDS_ViewerManager *this,EDS_CameraFadeState *param_1)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  if (*param_1 == FadeIn) {
    pFVar1 = FDS_CommonDataTableRow::GetRef(0x3f3,true);
    if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
      return 0.0;
    }
    if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
      dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
      return (float)dVar2;
    }
    dVar2 = _wtof(L"");
    return (float)dVar2;
  }
  if (*param_1 != FadeOut) {
    return 0.0;
  }
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x3f4,true);
  if (pFVar1 != &FDS_CommonDataTableRow::DefaultObject) {
    if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
      dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
      return (float)dVar2;
    }
    dVar2 = _wtof(L"");
    return (float)dVar2;
  }
  return 0.0;
}

// GetInst @ 14bb66420

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_ViewerManager * __cdecl UDS_ViewerManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_ViewerManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_ViewerManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_ViewerManager_NoRegister();
  pUVar3 = (UDS_ViewerManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_ViewerManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_ViewerManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_ViewerManager *)0x0;
}

// GetSelectedViewerCharacter @ 14bb67d90

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

TWeakObjectPtr<ADS_ViewerCharacter,FWeakObjectPtr> __thiscall
UDS_ViewerManager::GetSelectedViewerCharacter(UDS_ViewerManager *this)

{
  UDS_ViewerSceneInfo *pUVar1;
  UObject *pUVar2;
  int *piVar3;
  TObjectPtr<UDS_ViewerCharacterInfo>_u_0 *pTVar4;
  int iVar5;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = (this->ViewerSceneInfo).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_ViewerSceneInfo *)0x0) &&
     (((pUVar1->ViewerSceneType == CharacterEquip || (pUVar1->ViewerSceneType == MountManagement))
      && (*(int *)&(pUVar1->ViewerCharacterInfoMap).field_0x8 !=
          *(int *)&(pUVar1->ViewerCharacterInfoMap).field_0x34)))) {
    piVar3 = *(int **)&(pUVar1->ViewerCharacterInfoMap).field_0x40;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)&(pUVar1->ViewerCharacterInfoMap).field_0x38;
    }
    iVar5 = *piVar3;
    if (iVar5 != -1) {
      do {
        if (*(int *)(*(longlong *)&pUVar1->ViewerCharacterInfoMap + (longlong)iVar5 * 0x18) == 0) {
          pTVar4 = &TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                    ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                                   *)&pUVar1->ViewerCharacterInfoMap,0)->field0_0x0;
          if (pTVar4->DebugPtr != (UDS_ViewerCharacterInfo *)0x0) {
            pTVar4 = &TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                      ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                                     *)&((this->ViewerSceneInfo).field0_0x0.DebugPtr)->
                                        ViewerCharacterInfoMap,0)->field0_0x0;
            pUVar2 = *(UObject **)((longlong)pTVar4->DebugPtr + 0x98);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar2 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar2);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar2);
              }
            }
            *(undefined8 *)in_RDX = 0;
            local_res8 = pUVar2;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar2);
            }
            goto LAB_14bb67e00;
          }
          break;
        }
        iVar5 = *(int *)(*(longlong *)&pUVar1->ViewerCharacterInfoMap + 0x10 +
                        (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = (UObject *)0x0;
LAB_14bb67e00:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<ADS_ViewerCharacter,FWeakObjectPtr>)in_RDX;
}

// Init @ 14bb6a840

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_ViewerManager::Init(UDS_ViewerManager *this)

{
  return;
}

// IsValidMemberVariables @ 14bb6fb60

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDS_ViewerManager::IsValidMemberVariables(UDS_ViewerManager *this)

{
  if ((this->ViewerSceneInfo).field0_0x0.DebugPtr != (UDS_ViewerSceneInfo *)0x0) {
    return (this->PreViewerSceneInfo).field0_0x0.DebugPtr != (UDS_ViewerSceneInfo *)0x0;
  }
  return false;
}

// OnCompleteGallerySequenceLoading @ 14bb723a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ViewerManager::OnCompleteGallerySequenceLoading(UDS_ViewerManager *this)

{
  int iVar1;
  bool bVar2;
  ULevelSequence *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  ULevelSequencePlayer *pUVar6;
  UDS_LogManager *pUVar7;
  ADS_CameraManager *this_00;
  undefined1 auStackY_208 [32];
  uint uVar8;
  wchar_t *pwVar9;
  float local_1c8;
  EDS_CameraFadeState local_1c4;
  FString local_1c0;
  uint local_1b0;
  FMovieSceneSequenceLoopCount FStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined2 local_1a0;
  undefined2 uStack_19e;
  float fStack_19c;
  float fStack_198;
  uint uStack_194;
  uint local_190;
  uint uStack_18c;
  ALevelSequenceActor *local_188 [2];
  FMovieSceneSequencePlaybackSettings local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this->bIsCompleteGallerySequenceLoading = true;
  pUVar6 = (this->GallerySequencePlayer).field0_0x0.DebugPtr;
  if (pUVar6 != (ULevelSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)pUVar6);
  }
  (this->GallerySequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  pUVar3 = (ULevelSequence *)FSoftObjectPath::ResolveObject(&this->GallerySequencePath);
  if (pUVar3 == (ULevelSequence *)0x0) {
LAB_14bb72421:
    pUVar3 = (ULevelSequence *)
             FSoftObjectPath::TryLoad(&this->GallerySequencePath,(FUObjectSerializeContext *)0x0);
    if (pUVar3 != (ULevelSequence *)0x0) {
      pUVar4 = Z_Construct_UClass_ULevelSequence_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) goto LAB_14bb72463;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(&this->GallerySequencePath,&local_1c0);
    local_148._padding_._0_4_ = 0;
    local_148._padding_._4_4_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ViewerManager::OnCompleteGallerySequenceLoading",0x33,Yes);
    pwVar9 = L"Failed to TryLoad. (%s)";
    uVar8 = 0x5e9;
LAB_14bb726d8:
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,uVar8,pwVar9);
    if ((FWeakObjectPtr)local_148._padding_ != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  else {
    pUVar4 = Z_Construct_UClass_ULevelSequence_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_14bb72421;
LAB_14bb72463:
    uStack_194 = uStack_194 & 0xffffffc0;
    local_1b0 = local_1b0 & 0xfffffffe;
    uStack_18c = uStack_18c & 0xfffffffa | 2;
    FStack_1ac.Value = 0;
    fStack_1a8 = 0.0;
    fStack_1a4 = 0.0;
    local_1a0 = 0x100;
    fStack_19c = 1.0;
    fStack_198 = 0.0;
    local_190 = local_190 & 0xffffff00;
    local_188[0] = (ALevelSequenceActor *)0x0;
    pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    local_178.LoopCount.Value = FStack_1ac.Value;
    local_178._0_4_ = local_1b0;
    local_178.TickInterval.EvaluationBudgetMicroseconds = fStack_1a4;
    local_178.TickInterval.TickIntervalSeconds = fStack_1a8;
    local_178.TickInterval._10_2_ = uStack_19e;
    local_178.TickInterval.bTickWhenPaused = (bool)(undefined1)local_1a0;
    local_178.TickInterval.bAllowRounding = (bool)local_1a0._1_1_;
    local_178.PlayRate = fStack_19c;
    local_178._28_4_ = uStack_194;
    local_178.StartTime = fStack_198;
    local_178._36_4_ = uStack_18c;
    local_178._32_4_ = local_190;
    pUVar6 = ULevelSequencePlayer::CreateLevelSequencePlayer(pUVar5,pUVar3,&local_178,local_188);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar6 == (ULevelSequencePlayer *)0x0)) {
      (this->GallerySequencePlayer).field0_0x0.DebugPtr = pUVar6;
      if (pUVar6 == (ULevelSequencePlayer *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar7 = UDS_LogManager::GetInst();
        FSoftObjectPath::ToString(&this->GallerySequencePath,&local_1c0);
        local_148._padding_._0_4_ = 0;
        local_148._padding_._4_4_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_ViewerManager::OnCompleteGallerySequenceLoading",0x33,Yes);
        pwVar9 = L"Failed to CreateLevelSequencePlayer. (%s)";
        uVar8 = 0x5f4;
        goto LAB_14bb726d8;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
      (this->GallerySequencePlayer).field0_0x0.DebugPtr = pUVar6;
    }
    UMovieSceneSequencePlayer::PlayLooping((UMovieSceneSequencePlayer *)pUVar6,-1);
    if (((this->ViewerSceneInfo).field0_0x0.DebugPtr)->bIsStreamingComplete != true) {
      return;
    }
    GetCameraManager();
    bVar2 = TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr> *)&local_1c0,(void *)0x0);
    if (!bVar2) {
      this_00 = (ADS_CameraManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1c0);
      local_1c8 = DS_CommonDataHelper::CharacterViewerFadeInDuration();
      local_1c4 = FadeIn;
      ADS_CameraManager::RequestFade(this_00,&local_1c4,&local_1c8);
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_148._padding_._0_4_ = 0;
    local_148._padding_._4_4_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ViewerManager::OnCompleteGallerySequenceLoading",0x33,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,0x600,L"cameraMng is nullptr.");
    local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_148._padding_;
  }
  if ((FWeakObjectPtr)local_1c0.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  return;
}

// OnCompleteWorldStreaming @ 14bb72be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ViewerManager::OnCompleteWorldStreaming(UDS_ViewerManager *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  ADS_CameraManager *pAVar3;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  float local_148;
  float local_144;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (((this->ViewerSceneInfo).field0_0x0.DebugPtr == (UDS_ViewerSceneInfo *)0x0) ||
     ((this->PreViewerSceneInfo).field0_0x0.DebugPtr == (UDS_ViewerSceneInfo *)0x0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ViewerManager::OnCompleteWorldStreaming",0x2b,Yes);
    pwVar5 = L"Invalid MemberVariables.";
    uVar4 = 0x5be;
  }
  else {
    GetCameraManager();
    bVar1 = TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr> *)&local_140,(void *)0x0);
    if (!bVar1) {
      UDS_ViewerSceneInfo::ResetInfo((this->PreViewerSceneInfo).field0_0x0.DebugPtr);
      if (((this->ViewerSceneInfo).field0_0x0.DebugPtr)->ViewerSceneType != CharacterGallery) {
        pAVar3 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_140);
        local_144 = DS_CommonDataHelper::CharacterViewerFadeInDuration();
        local_148 = 1.4013e-45;
        ADS_CameraManager::RequestFade(pAVar3,(EDS_CameraFadeState *)&local_148,&local_144);
        return;
      }
      if (this->bIsCompleteGallerySequenceLoading != true) {
        return;
      }
      pAVar3 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_140);
      local_148 = DS_CommonDataHelper::CharacterViewerFadeInDuration();
      local_144 = 1.4013e-45;
      ADS_CameraManager::RequestFade(pAVar3,(EDS_CameraFadeState *)&local_144,&local_148);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ViewerManager::OnCompleteWorldStreaming",0x2b,Yes);
    pwVar5 = L"cameraMng is nullptr.";
    uVar4 = 0x5c5;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnZoomInOutEvent @ 14bb79510

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_ViewerManager::OnZoomInOutEvent(UDS_ViewerManager *this,bool param_1)

{
  bool bVar1;
  UDS_ViewerSceneInfo *pUVar2;
  UDS_ViewerManager *pUVar3;
  float fVar4;
  
  pUVar2 = (this->ViewerSceneInfo).field0_0x0.DebugPtr;
  if (((pUVar2 != (UDS_ViewerSceneInfo *)0x0) && (pUVar2->ViewerSceneType == CharacterEquip)) &&
     (bVar1 = pUVar2->bIsZoomIn, pUVar2->bIsZoomIn = param_1, bVar1 != param_1)) {
    bVar1 = pUVar2->bIsZoomInOutProcess;
    pUVar2->bIsZoomInOutProcess = true;
    fVar4 = DS_CommonDataHelper::CharViewerInitialZoomInOutSpeed();
    pUVar2->ZoomInOutSpeed = fVar4;
    if (bVar1 != true) {
      if (pUVar2->ViewerSceneType != CharacterEquip) {
        return;
      }
      pUVar3 = GetInst();
      if (pUVar3 != (UDS_ViewerManager *)0x0) {
        TMulticastDelegate<void___cdecl(bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>::
        Broadcast(&pUVar3->ChangedZoomInOutStateDelegate,&pUVar2->bIsZoomIn,
                  &pUVar2->bIsZoomInOutProcess);
      }
    }
    if ((pUVar2->ViewerSceneType == CharacterEquip) &&
       (pUVar3 = GetInst(), pUVar3 != (UDS_ViewerManager *)0x0)) {
      TMulticastDelegate<void___cdecl(bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&pUVar3->ChangedZoomInOutStateDelegate,&pUVar2->bIsZoomIn,
                &pUVar2->bIsZoomInOutProcess);
    }
  }
  return;
}

// OpenViewerScene @ 14bb7aa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_ViewerManager::OpenViewerScene(UDS_ViewerManager *this,EDS_ViewerSceneType *param_1)

{
  UDS_ViewerSceneInfo *this_00;
  UDS_ViewerSceneInfo *pUVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  UDS_ViewerSceneInfo *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (*param_1 == None) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ViewerManager::OpenViewerScene",0x22,Yes);
    pwVar5 = L"InViewerSceneType is None.";
    uVar4 = 0x4b6;
  }
  else {
    this_00 = (this->ViewerSceneInfo).field0_0x0.DebugPtr;
    if ((this_00 == (UDS_ViewerSceneInfo *)0x0) ||
       (pUVar1 = (this->PreViewerSceneInfo).field0_0x0.DebugPtr,
       pUVar1 == (UDS_ViewerSceneInfo *)0x0)) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ViewerManager::OpenViewerScene",0x22,Yes);
      pwVar5 = L"Invalid MemberVariables.";
      uVar4 = 0x4bc;
    }
    else {
      if (*param_1 == this_00->ViewerSceneType) {
        return true;
      }
      if ((this_00->ViewerSceneType != None) && (this_00->bIsStreamingComplete == true)) {
        local_148[0] = pUVar1;
        if (UE::GC::GIsIncrementalReachabilityPending) {
          UE::GC::MarkAsReachable((UObject *)pUVar1);
        }
        UDS_ViewerSceneInfo::SwitchInfo(this_00,(TObjectPtr<UDS_ViewerSceneInfo>)local_148);
      }
      bVar2 = UDS_ViewerSceneInfo::StartWorldStreaming
                        ((this->ViewerSceneInfo).field0_0x0.DebugPtr,param_1);
      if (bVar2) {
        return true;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ViewerManager::OpenViewerScene",0x22,Yes);
      pwVar5 = L"Failed to StartWorldStreaming().";
      uVar4 = 0x4d0;
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// PlayGallerySequence @ 14bb7d8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_ViewerManager::PlayGallerySequence(UDS_ViewerManager *this,int param_1)

{
  UDS_LogManager *pUVar1;
  FDS_CharacterBaseTableRow *pFVar2;
  FDS_CharacterSkinTableRow *pFVar3;
  FDS_ResourceSequenceTableRow *pFVar4;
  UAssetManager *pUVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  TSharedPtr<FStreamableHandle,1> *pTVar7;
  undefined1 auStackY_208 [32];
  uint uVar8;
  wchar_t *pwVar9;
  undefined1 local_1b8 [8];
  ForAnyElementType local_1b0;
  int local_1a8;
  undefined1 local_198 [32];
  FString local_178;
  TSharedPtr<FStreamableHandle,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  CancelAsyncLoadGallerySequence(this);
  if (param_1 < 1) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_ViewerManager::PlayGallerySequence",0x26,Yes);
    pwVar9 = L"Invalid InCharacterID. (%d)";
    uVar8 = 0x54a;
  }
  else {
    pFVar2 = FDS_CharacterBaseTableRow::Get((longlong)param_1,true);
    if (pFVar2 == (FDS_CharacterBaseTableRow *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar1 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_ViewerManager::PlayGallerySequence",0x26,Yes);
      pwVar9 = L"characterBaseTable is nullptr. (%d)";
      uVar8 = 0x551;
    }
    else if (pFVar2->ID_DefaultSkin < 1) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar1 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_ViewerManager::PlayGallerySequence",0x26,Yes);
      pwVar9 = L"Invalid characterSkinTID. (%d)";
      uVar8 = 0x558;
    }
    else {
      pFVar3 = FDS_CharacterSkinTableRow::Get((longlong)pFVar2->ID_DefaultSkin,true);
      if (pFVar3 == (FDS_CharacterSkinTableRow *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        if (pUVar1 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar1 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_ViewerManager::PlayGallerySequence",0x26,Yes);
        pwVar9 = L"characterSkinTable is nullptr. (%d)";
        uVar8 = 0x55f;
      }
      else if (pFVar3->ID_ResourceSequence < 1) {
        pUVar1 = UDS_LogManager::GetInst();
        if (pUVar1 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar1 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_ViewerManager::PlayGallerySequence",0x26,Yes);
        pwVar9 = L"Invalid resourceSequenceTID. (%d)";
        uVar8 = 0x566;
      }
      else {
        pFVar4 = FDS_ResourceSequenceTableRow::Get((longlong)pFVar3->ID_ResourceSequence,true);
        if (pFVar4 != (FDS_ResourceSequenceTableRow *)0x0) {
          this->GallerySequenceCharacterID = param_1;
          FSoftObjectPath::operator=(&this->GallerySequencePath,&pFVar4->SequenceResourcePath);
          pUVar5 = UAssetManager::Get();
          local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.Data.ArrayNum = 0;
          local_178.Data.ArrayMax = 0;
          pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                   CreateUObject<UDS_ViewerManager>
                             ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1b8,
                              this,(pmf_84d966d2)0x14bb723a0);
          local_198._0_4_ = 0x574;
          local_198._8_8_ =
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ViewerManager.cpp";
          local_198._4_4_ = 0x45;
          local_198._16_8_ = "bool __cdecl UDS_ViewerManager::PlayGallerySequence(int)";
          pTVar7 = FStreamableManager::
                   RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                             (&pUVar5->StreamableManager,&local_168,&this->GallerySequencePath,
                              pTVar6,0,false,false,&local_178,(FSourceLocation *)local_198);
          TSharedPtr<FStreamableHandle,1>::operator=(&this->LoadHandle_GallerySequence,pTVar7);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_168.SharedReferenceCount.ReferenceController);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                     (FWriteAccessScope *)local_198);
          if ((local_1a8 != 0) && (local_1b0.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_1b0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1b0,0,0,0x10);
            local_1a8 = 0;
          }
          if (local_198[0x10] == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)local_198._8_8_,
                       (FDestructionSentinel *)local_198);
          }
          if (local_1b0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_1b8);
          return true;
        }
        pUVar1 = UDS_LogManager::GetInst();
        if (pUVar1 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar1 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_ViewerManager::PlayGallerySequence",0x26,Yes);
        pwVar9 = L"resourceSequenceTable is nullptr. (%d)";
        uVar8 = 0x56d;
      }
    }
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,local_158.Ptr,uVar8,pwVar9);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

// PlayGallerySequenceWithFadeOut @ 14bb7dca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_ViewerManager::PlayGallerySequenceWithFadeOut(UDS_ViewerManager *this,int param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  ADS_CameraManager *pAVar3;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  float local_158 [2];
  FWeakObjectPtr local_150;
  undefined1 local_148 [272];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (((this->ViewerSceneInfo).field0_0x0.DebugPtr == (UDS_ViewerSceneInfo *)0x0) ||
     ((this->PreViewerSceneInfo).field0_0x0.DebugPtr == (UDS_ViewerSceneInfo *)0x0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_38 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
               "UDS_ViewerManager::PlayGallerySequenceWithFadeOut",0x31,Yes);
    pwVar5 = L"Invalid MemberVariables.";
    uVar4 = 0x520;
  }
  else {
    if ((this->GallerySequenceCharacterID < 1) || (this->bIsCompleteGallerySequenceLoading != true))
    {
      bVar1 = PlayGallerySequence(this,param_1);
      return bVar1;
    }
    GetCameraManager();
    bVar1 = TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr> *)&local_150,(void *)0x0);
    if (!bVar1) {
      this->GallerySequenceCharacterID = param_1;
      pAVar3 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_150);
      this_00 = ADS_CameraManager::GetFinishFadeDelegate(pAVar3);
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_ViewerManager>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 this_00,(UDS_ViewerManager *)local_148,(pmf_84d966d2)this);
      pAVar3 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_150);
      local_158[0] = DS_CommonDataHelper::CharacterViewerFadeOutDuration();
      local_148._0_4_ = FadeOut;
      ADS_CameraManager::RequestFade(pAVar3,(EDS_CameraFadeState *)local_148,local_158);
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_38 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
               "UDS_ViewerManager::PlayGallerySequenceWithFadeOut",0x31,Yes);
    pwVar5 = L"cameraMng is nullptr.";
    uVar4 = 0x52a;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_30,uVar4,pwVar5);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return false;
}

// PreDestroyed @ 14bb7e560

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ViewerManager::PreDestroyed(UDS_ViewerManager *this)

{
  UDS_ViewerSceneInfo *pUVar1;
  ULevelSequencePlayer *this_00;
  bool bVar2;
  UDS_AccountLocalSave *this_01;
  FWeakObjectPtr local_res8 [4];
  
  *(undefined1 *)&this->_padding_ = 1;
  pUVar1 = (this->ViewerSceneInfo).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_ViewerSceneInfo *)0x0) {
    UDS_ViewerSceneInfo::ClearInfo(pUVar1);
    (this->ViewerSceneInfo).field0_0x0.DebugPtr = (UDS_ViewerSceneInfo *)0x0;
  }
  pUVar1 = (this->PreViewerSceneInfo).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_ViewerSceneInfo *)0x0) {
    UDS_ViewerSceneInfo::ClearInfo(pUVar1);
    (this->PreViewerSceneInfo).field0_0x0.DebugPtr = (UDS_ViewerSceneInfo *)0x0;
  }
  CancelAsyncLoadGallerySequence(this);
  this_00 = (this->GallerySequencePlayer).field0_0x0.DebugPtr;
  if (this_00 != (ULevelSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)this_00);
  }
  (this->GallerySequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  UDS_AccountLocalSave::GetInst();
  bVar2 = TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (!bVar2) {
    this_01 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get(local_res8);
    UDS_AccountLocalSave::SetViewerManagerEnableLookAt(this_01,&this->bEnableLookAt);
  }
  return;
}

// RefreshViewerCamera @ 14bb7fca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_ViewerManager::RefreshViewerCamera(UDS_ViewerManager *this)

{
  UDS_ViewerSceneInfo *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = (this->ViewerSceneInfo).field0_0x0.DebugPtr;
  if (this_00 == (UDS_ViewerSceneInfo *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ViewerManager::RefreshViewerCamera",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x4db,L"ViewerSceneInfo is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if ((this_00->ViewerSceneType != None) && (this_00->bIsStreamingComplete != false)) {
    bVar1 = UDS_ViewerSceneInfo::ChangeToViewerCam(this_00);
    return bVar1;
  }
  return false;
}

// Reset @ 14bb864a0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_ViewerManager::Reset(UDS_ViewerManager *this)

{
  return;
}

// SetEnableLookAt @ 14bb8a4b0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_ViewerManager::SetEnableLookAt(UDS_ViewerManager *this,bool *param_1)

{
  this->bEnableLookAt = *param_1;
  TMulticastDelegate<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->ChangedEnableLookAtDelegate,&this->bEnableLookAt);
  return;
}

// SetViewerCharacter @ 14bb8c9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall
UDS_ViewerManager::SetViewerCharacter(UDS_ViewerManager *this,int *param_1,int *param_2)

{
  UDS_ViewerSceneInfo *pUVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  TObjectPtr<UDS_ViewerCharacterInfo>_u_0 *pTVar5;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  undefined1 *puVar7;
  undefined1 auStackY_1b8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  undefined1 local_188 [8];
  ForAnyElementType local_180;
  int local_178;
  FDestructionSentinel local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pUVar1 = (this->ViewerSceneInfo).field0_0x0.DebugPtr;
  if ((pUVar1 == (UDS_ViewerSceneInfo *)0x0) ||
     ((this->PreViewerSceneInfo).field0_0x0.DebugPtr == (UDS_ViewerSceneInfo *)0x0)) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_ViewerManager::SetViewerCharacter",0x25,Yes);
    pwVar9 = L"Invalid MemberVariables.";
    uVar8 = 0x4ec;
  }
  else {
    uVar8 = *param_2;
    if (((-1 < (int)uVar8) && ((int)uVar8 < pUVar1->ViewerCharacterCount)) &&
       (*(int *)&(pUVar1->ViewerCharacterInfoMap).field_0x8 !=
        *(int *)&(pUVar1->ViewerCharacterInfoMap).field_0x34)) {
      puVar7 = *(undefined1 **)&(pUVar1->ViewerCharacterInfoMap).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(pUVar1->ViewerCharacterInfoMap).field_0x38;
      }
      iVar3 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(pUVar1->ViewerCharacterInfoMap).field_0x48 - 1U & uVar8)
                                * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)(*(longlong *)&pUVar1->ViewerCharacterInfoMap + (longlong)iVar3 * 0x18) ==
              uVar8) {
            pTVar5 = &TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                      ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                                     *)&pUVar1->ViewerCharacterInfoMap,uVar8)->field0_0x0;
            if (pTVar5->DebugPtr != (UDS_ViewerCharacterInfo *)0x0) {
              pTVar5 = &TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                        ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                                       *)&pUVar1->ViewerCharacterInfoMap,*param_2)->field0_0x0;
              bVar2 = UDS_ViewerCharacterInfo::SetViewerCharacter(pTVar5->DebugPtr,param_1);
              if (bVar2) {
                TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                CreateUObject<UDS_ViewerSceneInfo>
                          ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                           local_188,pUVar1,(pmf_fd984b4d)0x14bb76540);
                pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                         TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                   ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                     *)&local_170,
                                    (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                     *)local_188);
                UDS_WindowManager::OpenCommonCenterLoading(pTVar6);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
                           (FWriteAccessScope *)&local_170);
                if ((local_178 != 0) && (local_180.Data != (FScriptContainerElement *)0x0)) {
                  (*(code *)**(undefined8 **)local_180.Data)();
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_180,0,0,0x10);
                  local_178 = 0;
                }
                if (local_170.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
                }
                if (local_180.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_180.Data);
                }
                FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                          ((FMRSWRecursiveAccessDetector *)local_188);
                return true;
              }
            }
            break;
          }
          iVar3 = *(int *)(*(longlong *)&pUVar1->ViewerCharacterInfoMap + 0x10 +
                          (longlong)iVar3 * 0x18);
        } while (iVar3 != -1);
      }
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_ViewerManager::SetViewerCharacter",0x25,Yes);
    pwVar9 = L"Failed to SetViewerCharacter().";
    uVar8 = 0x4f2;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,uVar8,pwVar9);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

// SetViewerNpc @ 14bb8d050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_ViewerManager::SetViewerNpc(UDS_ViewerManager *this,int *param_1,int param_2)

{
  UDS_ViewerSceneInfo *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  uint uVar3;
  wchar_t *pwVar4;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = (this->ViewerSceneInfo).field0_0x0.DebugPtr;
  if ((this_00 == (UDS_ViewerSceneInfo *)0x0) ||
     ((this->PreViewerSceneInfo).field0_0x0.DebugPtr == (UDS_ViewerSceneInfo *)0x0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ViewerManager::SetViewerNpc",0x1f,Yes);
    pwVar4 = L"Invalid MemberVariables.";
    uVar3 = 0x4fd;
  }
  else {
    bVar1 = UDS_ViewerSceneInfo::SetViewerNpc(this_00,param_1,param_2);
    if (bVar1) {
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ViewerManager::SetViewerNpc",0x1f,Yes);
    pwVar4 = L"Failed to SetViewerNpc().";
    uVar3 = 0x503;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// SetViewerPreset @ 14bb8d620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_ViewerManager::SetViewerPreset(UDS_ViewerManager *this,int *param_1,int param_2)

{
  UDS_ViewerSceneInfo *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  uint uVar3;
  wchar_t *pwVar4;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = (this->ViewerSceneInfo).field0_0x0.DebugPtr;
  if ((this_00 == (UDS_ViewerSceneInfo *)0x0) ||
     ((this->PreViewerSceneInfo).field0_0x0.DebugPtr == (UDS_ViewerSceneInfo *)0x0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ViewerManager::SetViewerPreset",0x22,Yes);
    pwVar4 = L"Invalid MemberVariables.";
    uVar3 = 0x50f;
  }
  else {
    bVar1 = UDS_ViewerSceneInfo::SetViewerPreset(this_00,param_1,param_2);
    if (bVar1) {
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ViewerManager::SetViewerPreset",0x22,Yes);
    pwVar4 = L"Failed to SetViewerPreset().";
    uVar3 = 0x515;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// StopGallerySequence @ 14bb918d0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ViewerManager::StopGallerySequence(UDS_ViewerManager *this)

{
  ULevelSequencePlayer *this_00;
  
  this_00 = (this->GallerySequencePlayer).field0_0x0.DebugPtr;
  if (this_00 != (ULevelSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)this_00);
  }
  (this->GallerySequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  return;
}

// Update @ 14bb96250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_ViewerManager::Update(UDS_ViewerManager *this,float *param_1)

{
  UDS_ViewerSceneInfo *pUVar1;
  bool bVar2;
  ADS_CameraActor *pAVar3;
  longlong lVar4;
  AActor *pAVar5;
  UDS_ViewerManager *pUVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStackY_238 [32];
  float fStack_208;
  float afStack_204 [3];
  TVector<double>_u_0 TStack_1f8;
  double dStack_1e0;
  TVector<double>_u_0 TStack_1d8;
  double dStack_1c0;
  TVector<double>_u_0 TStack_1b8;
  TQuat<double> TStack_198;
  TTransform<double> TStack_178;
  TTransform<double> TStack_118;
  TTransform<double> TStack_b8;
  ulonglong uStack_58;
  
  pUVar1 = (this->ViewerSceneInfo).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_ViewerSceneInfo *)0x0) && (pUVar1->bIsZoomInOutProcess == true)) {
    uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
    if ((pUVar1->bIsZoomInOutProcess != false) &&
       (bVar2 = TWeakObjectPtr<ADS_CameraActor_CharacterViewer,FWeakObjectPtr>::UEOpEquals
                          (&pUVar1->ViewerCam,(void *)0x0), !bVar2)) {
      pAVar3 = (ADS_CameraActor *)FWeakObjectPtr::Get(&(pUVar1->ViewerCam).WeakPtr);
      ADS_CameraActor::GetActorRelativeTransform(pAVar3,&TStack_b8);
      TStack_178.Rotation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      TStack_178.Rotation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      TStack_178.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      TStack_178.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      TStack_178.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      TStack_178.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      pAVar3 = (ADS_CameraActor *)FWeakObjectPtr::Get(&(pUVar1->ViewerCam).WeakPtr);
      fVar7 = ADS_CameraActor::GetFieldOfView(pAVar3);
      bVar2 = pUVar1->bIsZoomIn != true;
      if (bVar2) {
        TStack_178.Rotation.XY.m128d_f64[0] =
             (pUVar1->ZoomOutCamInfo).CamTrans.Rotation.XY.m128d_f64[0];
        TStack_178.Rotation.XY.m128d_f64[1] =
             *(double *)((longlong)(pUVar1->ZoomOutCamInfo).CamTrans.Rotation.XY.m128d_f64 + 8);
        TStack_178.Rotation.ZW.m128d_f64[0] =
             (pUVar1->ZoomOutCamInfo).CamTrans.Rotation.ZW.m128d_f64[0];
        TStack_178.Rotation.ZW.m128d_f64[1] =
             *(double *)((longlong)(pUVar1->ZoomOutCamInfo).CamTrans.Rotation.ZW.m128d_f64 + 8);
        TStack_178.Translation.XY.m128d_f64[0] =
             (pUVar1->ZoomOutCamInfo).CamTrans.Translation.XY.m128d_f64[0];
        TStack_178.Translation.XY.m128d_f64[1] =
             *(double *)((longlong)(pUVar1->ZoomOutCamInfo).CamTrans.Translation.XY.m128d_f64 + 8);
        TStack_178.Translation.ZW.m128d_f64 =
             *&(pUVar1->ZoomOutCamInfo).CamTrans.Translation.ZW.m128d_f64;
        TStack_178.Scale3D.XY.m128d_f64[0]._0_4_ =
             *(undefined4 *)(pUVar1->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64;
        TStack_178.Scale3D.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pUVar1->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 4);
        TStack_178.Scale3D.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((longlong)(pUVar1->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 8);
        TStack_178.Scale3D.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pUVar1->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 0xc)
        ;
        TStack_178.Scale3D.ZW.m128d_f64[0]._0_4_ =
             *(undefined4 *)(pUVar1->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64;
        TStack_178.Scale3D.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pUVar1->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 4);
        TStack_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((longlong)(pUVar1->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 8);
        TStack_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pUVar1->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 0xc)
        ;
      }
      else {
        TStack_178.Rotation.XY.m128d_f64[0] =
             (pUVar1->ZoomInCamInfo).CamTrans.Rotation.XY.m128d_f64[0];
        TStack_178.Rotation.XY.m128d_f64[1] =
             *(double *)((longlong)(pUVar1->ZoomInCamInfo).CamTrans.Rotation.XY.m128d_f64 + 8);
        TStack_178.Rotation.ZW.m128d_f64[0] =
             (pUVar1->ZoomInCamInfo).CamTrans.Rotation.ZW.m128d_f64[0];
        TStack_178.Rotation.ZW.m128d_f64[1] =
             *(double *)((longlong)(pUVar1->ZoomInCamInfo).CamTrans.Rotation.ZW.m128d_f64 + 8);
        TStack_178.Scale3D.XY.m128d_f64[0]._0_4_ =
             *(undefined4 *)(pUVar1->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64;
        TStack_178.Scale3D.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pUVar1->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 4);
        TStack_178.Scale3D.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((longlong)(pUVar1->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 8);
        TStack_178.Scale3D.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pUVar1->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 0xc);
        TStack_178.Translation.XY.m128d_f64[0] =
             (pUVar1->ZoomInCamInfo).CamTrans.Translation.XY.m128d_f64[0];
        TStack_178.Translation.XY.m128d_f64[1] =
             *(double *)((longlong)(pUVar1->ZoomInCamInfo).CamTrans.Translation.XY.m128d_f64 + 8);
        TStack_178.Translation.ZW.m128d_f64 =
             *&(pUVar1->ZoomInCamInfo).CamTrans.Translation.ZW.m128d_f64;
        TStack_178.Scale3D.ZW.m128d_f64[0]._0_4_ =
             *(undefined4 *)(pUVar1->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64;
        TStack_178.Scale3D.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pUVar1->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 4);
        TStack_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((longlong)(pUVar1->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 8);
        TStack_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pUVar1->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 0xc);
      }
      fVar9 = *param_1;
      lVar4 = 0x180;
      if (bVar2) {
        lVar4 = 0x110;
      }
      fStack_208 = *(float *)(&pUVar1->field_0x0 + lVar4);
      fVar8 = DS_CommonDataHelper::CharViewerZoomInOutAcceleration();
      TStack_1d8._s_0.Z = TStack_178.Translation.ZW.m128d_f64[0];
      TStack_1d8._s_0.X = TStack_178.Translation.XY.m128d_f64[0];
      TStack_1d8._s_0.Y = TStack_178.Translation.XY.m128d_f64[1];
      fVar9 = fVar8 * fVar9 + pUVar1->ZoomInOutSpeed;
      TStack_1f8._s_0.X = TStack_b8.Translation.XY.m128d_f64[0];
      TStack_1f8._s_0.Y = TStack_b8.Translation.XY.m128d_f64[1];
      TStack_1f8._s_0.Z = TStack_b8.Translation.ZW.m128d_f64[0];
      pUVar1->ZoomInOutSpeed = fVar9;
      FMath::VInterpTo((TVector<double> *)&TStack_1b8._s_0,(TVector<double> *)&TStack_1f8._s_0,
                       (TVector<double> *)&TStack_1d8._s_0,*param_1,fVar9);
      TStack_1f8._s_0.X = TStack_178.Rotation.XY.m128d_f64[0];
      TStack_1f8._s_0.Y = TStack_178.Rotation.XY.m128d_f64[1];
      TStack_1d8._s_0.X = TStack_b8.Rotation.XY.m128d_f64[0];
      TStack_1d8._s_0.Y = TStack_b8.Rotation.XY.m128d_f64[1];
      TStack_1f8._s_0.Z = TStack_178.Rotation.ZW.m128d_f64[0];
      dStack_1e0 = TStack_178.Rotation.ZW.m128d_f64[1];
      TStack_1d8._s_0.Z = TStack_b8.Rotation.ZW.m128d_f64[0];
      dStack_1c0 = TStack_b8.Rotation.ZW.m128d_f64[1];
      FMath::QInterpTo<double>
                (&TStack_198,(TQuat<double> *)&TStack_1d8._s_0,(TQuat<double> *)&TStack_1f8._s_0,
                 *param_1,pUVar1->ZoomInOutSpeed);
      afStack_204[0] = fStack_208;
      if ((0.0 < pUVar1->ZoomInOutSpeed) &&
         (fVar9 = fStack_208 - fVar7, __real_322bcc77 <= fVar9 * fVar9)) {
        fVar8 = pUVar1->ZoomInOutSpeed * *param_1;
        if (__real_3f800000 <= fVar8) {
          fVar8 = __real_3f800000;
        }
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        afStack_204[0] = fVar8 * fVar9 + fVar7;
      }
      if (__real_3f1a36e2e0000000 <=
          (TStack_178.Translation.XY.m128d_f64[1] - TStack_1b8._s_0.Y) *
          (TStack_178.Translation.XY.m128d_f64[1] - TStack_1b8._s_0.Y) +
          (TStack_178.Translation.XY.m128d_f64[0] - TStack_1b8._s_0.X) *
          (TStack_178.Translation.XY.m128d_f64[0] - TStack_1b8._s_0.X) +
          (TStack_178.Translation.ZW.m128d_f64[0] - TStack_1b8._s_0.Z) *
          (TStack_178.Translation.ZW.m128d_f64[0] - TStack_1b8._s_0.Z)) {
        TStack_118.Scale3D.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        TStack_118.Translation.ZW.m128d_f64[0] = TStack_1b8._s_0.Z;
        TStack_118.Translation.ZW.m128d_f64[1] = 0.0;
        TStack_118.Scale3D.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        TStack_118.Rotation.XY.m128d_f64[0] = TStack_198.X;
        TStack_118.Rotation.XY.m128d_f64[1] = TStack_198.Y;
        TStack_118.Translation.XY.m128d_f64[0] = TStack_1b8._s_0.X;
        TStack_118.Translation.XY.m128d_f64[1] = TStack_1b8._s_0.Y;
        TStack_118.Rotation.ZW.m128d_f64[0] = TStack_198.Z;
        TStack_118.Rotation.ZW.m128d_f64[1] = TStack_198.W;
        pAVar5 = (AActor *)FWeakObjectPtr::Get(&(pUVar1->ViewerCam).WeakPtr);
        AActor::SetActorRelativeTransform(pAVar5,&TStack_118,false,(FHitResult *)0x0,None);
        pAVar3 = (ADS_CameraActor *)FWeakObjectPtr::Get(&(pUVar1->ViewerCam).WeakPtr);
        ADS_CameraActor::SetFieldOfView(pAVar3,afStack_204);
      }
      else {
        pAVar5 = (AActor *)FWeakObjectPtr::Get(&(pUVar1->ViewerCam).WeakPtr);
        AActor::SetActorRelativeTransform(pAVar5,&TStack_178,false,(FHitResult *)0x0,None);
        pAVar3 = (ADS_CameraActor *)FWeakObjectPtr::Get(&(pUVar1->ViewerCam).WeakPtr);
        ADS_CameraActor::SetFieldOfView(pAVar3,&fStack_208);
        bVar2 = pUVar1->bIsZoomInOutProcess;
        pUVar1->bIsZoomInOutProcess = false;
        pUVar1->ZoomInOutSpeed = 0.0;
        if (((bVar2 != false) && (pUVar1->ViewerSceneType == CharacterEquip)) &&
           (pUVar6 = GetInst(), pUVar6 != (UDS_ViewerManager *)0x0)) {
          TMulticastDelegate<void___cdecl(bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>::
          Broadcast(&pUVar6->ChangedZoomInOutStateDelegate,&pUVar1->bIsZoomIn,
                    &pUVar1->bIsZoomInOutProcess);
        }
      }
    }
    return;
  }
  return;
}

