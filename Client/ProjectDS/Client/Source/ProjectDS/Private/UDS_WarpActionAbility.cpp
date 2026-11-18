// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 51

// StaticClass @ 14b756570

UClass * __cdecl UDS_WarpActionAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WarpActionAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WarpActionAbility",
               &Z_Registration_Info_UClass_UDS_WarpActionAbility.InnerSingleton,
               StaticRegisterNativesUDS_WarpActionAbility,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WarpActionAbility>,
               InternalVTableHelperCtorCaller<UDS_WarpActionAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WarpActionAbility.InnerSingleton;
}

// UDS_WarpActionAbility @ 14b75aeb0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_WarpActionAbility * __thiscall
UDS_WarpActionAbility::UDS_WarpActionAbility(UDS_WarpActionAbility *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->WarpActionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->WarpActionAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  this->CurState = None;
  this->bStateChanged = false;
  this->bUse_HideEntity = false;
  this->bUse_HideNameTag = false;
  this->bUse_CloseAllWindow = false;
  this->bReceive_WarpLoading = false;
  this->bReceive_WarpArrive = false;
  this->bComplete_Teleport = false;
  this->bUse_Fade = false;
  this->bComplete_EnterFade_FadeOut = false;
  this->bComplete_EnterFade_FadeIn = false;
  this->bComplete_ExitFade_FadeOut = false;
  this->bComplete_ExitFade_FadeIn = false;
  this->FadeTime = 0.0;
  this->EnterFadeDelayTime = 0.0;
  (this->EnterFadeDelayTimer).Handle = 0;
  this->bUse_Sequence = false;
  this->bComplete_LoadSequence = false;
  this->bComplete_SequenceMinHoldingTime = false;
  this->bComplete_SequenceVisuals = false;
  this->bAlready_StartSequence = false;
  this->bAlready_StartExitFade = false;
  this->SequenceID = 0;
  this->SequenceMinHoldingTime = 0.0;
  (this->SequenceMinHoldingTimer).Handle = 0;
  (this->SequenceAsyncLoadHandle).Object = (FStreamableHandle *)0x0;
  (this->SequenceAsyncLoadHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  this->bUse_SequenceStreaming = false;
  this->bComplete_SequenceStreaming = false;
  (this->SequenceStreamingSource).field0_0x0.DebugPtr = (ADS_StreamingSourceActor *)0x0;
  this->bUse_PostProcess = false;
  (this->PostProcessEffect).field0_0x0.DebugPtr = (UDS_PostProcessBreach *)0x0;
  this->bUse_WarpStartAni = false;
  this->bUse_WarpEndAni = false;
  this->bComplete_WarpStartAni = false;
  this->bComplete_WarpEndAni = false;
  this->WarpStartAniTime = 0.0;
  this->WarpEndAniTime = 0.0;
  (this->WarpStartAniTimer).Handle = 0;
  (this->WarpEndAniTimer).Handle = 0;
  return this;
}

// UDS_WarpActionAbility @ 14b75af90

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_WarpActionAbility * __thiscall
UDS_WarpActionAbility::UDS_WarpActionAbility
          (UDS_WarpActionAbility *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->WarpActionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->WarpActionAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  this->CurState = None;
  this->bStateChanged = false;
  this->bUse_HideEntity = false;
  this->bUse_HideNameTag = false;
  this->bUse_CloseAllWindow = false;
  this->bReceive_WarpLoading = false;
  this->bReceive_WarpArrive = false;
  this->bComplete_Teleport = false;
  this->bUse_Fade = false;
  this->bComplete_EnterFade_FadeOut = false;
  this->bComplete_EnterFade_FadeIn = false;
  this->bComplete_ExitFade_FadeOut = false;
  this->bComplete_ExitFade_FadeIn = false;
  this->FadeTime = 0.0;
  this->EnterFadeDelayTime = 0.0;
  (this->EnterFadeDelayTimer).Handle = 0;
  this->bUse_Sequence = false;
  this->bComplete_LoadSequence = false;
  this->bComplete_SequenceMinHoldingTime = false;
  this->bComplete_SequenceVisuals = false;
  this->bAlready_StartSequence = false;
  this->bAlready_StartExitFade = false;
  this->SequenceID = 0;
  this->SequenceMinHoldingTime = 0.0;
  (this->SequenceMinHoldingTimer).Handle = 0;
  (this->SequenceAsyncLoadHandle).Object = (FStreamableHandle *)0x0;
  (this->SequenceAsyncLoadHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  this->bUse_SequenceStreaming = false;
  this->bComplete_SequenceStreaming = false;
  (this->SequenceStreamingSource).field0_0x0.DebugPtr = (ADS_StreamingSourceActor *)0x0;
  this->bUse_PostProcess = false;
  (this->PostProcessEffect).field0_0x0.DebugPtr = (UDS_PostProcessBreach *)0x0;
  this->bUse_WarpStartAni = false;
  this->bUse_WarpEndAni = false;
  this->bComplete_WarpStartAni = false;
  this->bComplete_WarpEndAni = false;
  this->WarpStartAniTime = 0.0;
  this->WarpEndAniTime = 0.0;
  (this->WarpStartAniTimer).Handle = 0;
  (this->WarpEndAniTimer).Handle = 0;
  return this;
}

// ~UDS_WarpActionAbility @ 14b75c230

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::~UDS_WarpActionAbility(UDS_WarpActionAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SequenceAsyncLoadHandle).SharedReferenceCount.ReferenceController);
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b75d340

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDS_AbilityInputPolicy __thiscall
UDS_WarpActionAbility::GetDefaultInputPolicy(UDS_WarpActionAbility *this)

{
  return BlockInput;
}

// GetPrivateStaticClass @ 14b75edf0

UClass * __cdecl UDS_WarpActionAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WarpActionAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WarpActionAbility",
               &Z_Registration_Info_UClass_UDS_WarpActionAbility.InnerSingleton,
               StaticRegisterNativesUDS_WarpActionAbility,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WarpActionAbility>,
               InternalVTableHelperCtorCaller<UDS_WarpActionAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WarpActionAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_WarpActionAbility @ 14b75f0a0

void __cdecl UDS_WarpActionAbility::StaticRegisterNativesUDS_WarpActionAbility(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_WarpActionAbility_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnCompleteSequenceStreaming @ 14b760300

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDS_WarpActionAbility::execOnCompleteSequenceStreaming
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnCompleteSequenceStreaming((UDS_WarpActionAbility *)param_1);
  return;
}

// execOnCompleteTeleport @ 14b760320

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDS_WarpActionAbility::execOnCompleteTeleport(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnCompleteTeleport((UDS_WarpActionAbility *)param_1);
  return;
}

// ClearMemberVariables @ 14b86a2e0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::ClearMemberVariables(UDS_WarpActionAbility *this)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  ULevelSequencePlayer *this_00;
  ADS_StreamingSourceActor *this_01;
  UDS_GameInstance *pUVar2;
  FTimerManager *this_02;
  FTimerData *pFVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->SequenceAsyncLoadHandle;
  this->CurState = None;
  this->bStateChanged = false;
  this->bUse_HideEntity = false;
  this->bUse_HideNameTag = false;
  this->bUse_CloseAllWindow = false;
  this->bReceive_WarpLoading = false;
  this->bReceive_WarpArrive = false;
  this->bComplete_Teleport = false;
  this->bUse_Fade = false;
  this->bComplete_EnterFade_FadeOut = false;
  this->bComplete_EnterFade_FadeIn = false;
  this->bComplete_ExitFade_FadeOut = false;
  this->bComplete_ExitFade_FadeIn = false;
  this->FadeTime = 0.0;
  this->EnterFadeDelayTime = 0.0;
  this->bUse_Sequence = false;
  this->bComplete_LoadSequence = false;
  this->bComplete_SequenceMinHoldingTime = false;
  this->bComplete_SequenceVisuals = false;
  this->bAlready_StartSequence = false;
  this->bAlready_StartExitFade = false;
  this->SequenceID = 0;
  this->SequenceMinHoldingTime = 0.0;
  if (pTVar1->Object != (FStreamableHandle *)0x0) {
    FStreamableHandle::CancelHandle(pTVar1->Object);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
      pTVar1->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SequenceAsyncLoadHandle).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if (this_00 != (ULevelSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)this_00);
    (this->SequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  }
  this_01 = (this->SequenceStreamingSource).field0_0x0.DebugPtr;
  this->bUse_SequenceStreaming = false;
  this->bComplete_SequenceStreaming = false;
  if (this_01 != (ADS_StreamingSourceActor *)0x0) {
    AActor::Destroy((AActor *)this_01,false,true);
    (this->SequenceStreamingSource).field0_0x0.DebugPtr = (ADS_StreamingSourceActor *)0x0;
  }
  this->bUse_PostProcess = false;
  this->bUse_WarpStartAni = false;
  this->bUse_WarpEndAni = false;
  this->bComplete_WarpStartAni = false;
  this->bComplete_WarpEndAni = false;
  this->WarpStartAniTime = 0.0;
  this->WarpEndAniTime = 0.0;
  pUVar2 = UDS_GameInstance::GetInst();
  if (pUVar2 != (UDS_GameInstance *)0x0) {
    this_02 = FDS_TimerManager::Get((UObject *)0x0);
    if ((this->EnterFadeDelayTimer).Handle != 0) {
      pFVar3 = FTimerManager::FindTimer(this_02,&this->EnterFadeDelayTimer);
      if (pFVar3 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(this_02,(FTimerHandle)(this->EnterFadeDelayTimer).Handle);
      }
      (this->EnterFadeDelayTimer).Handle = 0;
    }
    if ((this->SequenceMinHoldingTimer).Handle != 0) {
      pFVar3 = FTimerManager::FindTimer(this_02,&this->SequenceMinHoldingTimer);
      if (pFVar3 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (this_02,(FTimerHandle)(this->SequenceMinHoldingTimer).Handle);
      }
      (this->SequenceMinHoldingTimer).Handle = 0;
    }
    if ((this->WarpStartAniTimer).Handle != 0) {
      pFVar3 = FTimerManager::FindTimer(this_02,&this->WarpStartAniTimer);
      if (pFVar3 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(this_02,(FTimerHandle)(this->WarpStartAniTimer).Handle);
      }
      (this->WarpStartAniTimer).Handle = 0;
    }
    if ((this->WarpEndAniTimer).Handle != 0) {
      pFVar3 = FTimerManager::FindTimer(this_02,&this->WarpEndAniTimer);
      if (pFVar3 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(this_02,(FTimerHandle)(this->WarpEndAniTimer).Handle);
      }
      (this->WarpEndAniTimer).Handle = 0;
    }
  }
  return;
}

// Deactivate @ 14b86e580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl UDS_WarpActionAbility::Deactivate(ulong64 *param_1,EDS_AbilityDeactivateType *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  undefined1 auStackY_188 [32];
  EDS_AbilityTagType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpActionAbility::Deactivate",0x21,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x135,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this != (FDS_EntityBase *)0x0) {
      local_148[0] = WarpAction;
      bVar1 = FDS_EntityBase::DeactivateAbility(this,local_148,param_2);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpActionAbility::Deactivate",0x21,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x13c,L"sourceEntity is nullptr. (%llu)");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// EndCommonProcess @ 14b86eff0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::EndCommonProcess(UDS_WarpActionAbility *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  UDS_HudManager *this_00;
  UObject *pUVar4;
  ADS_CameraManager *this_01;
  FDS_WarpLocationTableRow *pFVar5;
  bool local_res8 [8];
  TRotator<double> local_28;
  
  if (this->bUse_HideEntity == true) {
    local_28.Pitch = 0.0;
    local_28.Yaw = 0.0;
    local_res8[0] = false;
    UDS_IngameState::SetLevelSequencePlaying
              (local_res8,(TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)&local_28);
    if ((void *)local_28.Pitch != (void *)0x0) {
      FMemory::Free((void *)local_28.Pitch);
    }
  }
  if (this->bUse_HideNameTag == true) {
    UDS_NameTagDataAsset::SetDisplayNameTag(true);
  }
  if ((this->bUse_CloseAllWindow == true) &&
     (this_00 = UDS_HudManager::GetInst(), this_00 != (UDS_HudManager *)0x0)) {
    UDS_HudManager::OpenHUD(this_00);
  }
  bVar3 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->WarpActionAbilityData,(void *)0x0);
  if ((((!bVar3) &&
       (pUVar4 = FWeakObjectPtr::Get(&(this->WarpActionAbilityData).WeakPtr),
       0 < *(int *)&pUVar4[3].field_0x8)) &&
      (this_01 = ADS_CameraManager::GetInst(), this_01 != (ADS_CameraManager *)0x0)) &&
     ((pFVar5 = FDS_WarpLocationTableRow::Get((longlong)*(int *)&pUVar4[3].field_0x8,true),
      pFVar5 != (FDS_WarpLocationTableRow *)0x0 && (pFVar5->IsCameraSet == true)))) {
    uVar1 = pFVar5->CameraPitch;
    uVar2 = pFVar5->CameraYaw;
    local_28.Pitch = (double)(float)uVar1;
    local_28.Yaw = (double)(float)uVar2;
    local_28.Roll = 0.0;
    ADS_CameraManager::SetCameraRotation(this_01,&local_28);
    ADS_CameraManager::SetZoomInOutValue(this_01,(float)pFVar5->CameraDistance);
  }
  return;
}

// InitMemberVariables @ 14b87a640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall UDS_WarpActionAbility::InitMemberVariables(UDS_WarpActionAbility *this)

{
  TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr> *this_00;
  float fVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_WarpBaseTableRow *pFVar7;
  FDS_ResourceSequenceTableRow *pFVar8;
  UClass *pUVar9;
  UDS_PostProcessBreach *pUVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_238 [32];
  uint uVar14;
  wchar_t *pwVar15;
  FWeakObjectPtr local_1f8 [2];
  TVector<double>_u_0 local_1e8;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  ClearMemberVariables(this);
  this_00 = &this->WarpActionAbilityData;
  bVar4 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WarpActionAbility::InitMemberVariables",0x2a,Yes);
    pwVar15 = L"WarpActionAbilityData is nullptr.";
    uVar14 = 0x1ad;
LAB_14b87a9d3:
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar14,pwVar15);
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar7 = FDS_WarpBaseTableRow::Get((ulonglong)(byte)pUVar6[2].field_0xc,true);
    uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar13 = __real_322bcc77;
    if (pFVar7 == (FDS_WarpBaseTableRow *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar5 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_WarpActionAbility::InitMemberVariables",0x2a,Yes);
      pwVar15 = L"warpBaseTable is nullptr. (%d)";
      uVar14 = 0x1b4;
    }
    else {
      if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
        fVar1 = pFVar7->WarpStartAnimTime;
        this->WarpStartAniTime = fVar1;
        if (fVar13 < (float)((uint)fVar1 & uVar14)) {
          this->bUse_WarpStartAni = true;
        }
        fVar1 = pFVar7->WarpEndAnimTime;
        this->WarpEndAniTime = fVar1;
        if ((float)((uint)fVar1 & uVar14) <= fVar13) {
          return true;
        }
        this->bUse_WarpEndAni = true;
        return true;
      }
      this->bUse_HideEntity = pFVar7->IsHideActor;
      this->bUse_HideNameTag = pFVar7->IsHideNameTag;
      this->bUse_CloseAllWindow = pFVar7->IsUiHide;
      if (pFVar7->VisualEffectType != Sequence) {
        if (pFVar7->VisualEffectType != None) goto LAB_14b87aa72;
        this->FadeTime = pFVar7->FadeTime;
        pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        if ((pUVar6[2].field_0xc != '7') &&
           (pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr), pUVar6[2].field_0xc != '8'))
        goto LAB_14b87aa72;
        pUVar10 = (this->PostProcessEffect).field0_0x0.DebugPtr;
        this->bUse_PostProcess = true;
        if (pUVar10 == (UDS_PostProcessBreach *)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar9 = Z_Construct_UClass_UDS_PostProcessBreach_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_1c8,pUVar9);
          local_1c8._8_8_ = this;
          pUVar10 = (UDS_PostProcessBreach *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
          if (local_1c8._64_8_ != 0) {
            plVar11 = (longlong *)(local_1c8 + 0x50);
            if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
              plVar11 = (longlong *)local_1c8._104_8_;
            }
            (**(code **)(*plVar11 + 0x10))();
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar10 != (UDS_PostProcessBreach *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          (this->PostProcessEffect).field0_0x0.DebugPtr = pUVar10;
          (**(code **)(*(longlong *)pUVar10 + 0x2b0))(pUVar10);
          if ((this->PostProcessEffect).field0_0x0.DebugPtr == (UDS_PostProcessBreach *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar5 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_WarpActionAbility::InitMemberVariables",0x2a,Yes);
            pwVar15 = L"PostProcessEffect is nullptr.";
            uVar14 = 500;
            goto LAB_14b87a9d3;
          }
        }
        ADS_MainCharacter::GetMainPlayer();
        bVar4 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)local_1f8,(void *)0x0
                          );
        if (!bVar4) {
          pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          pUVar10 = (this->PostProcessEffect).field0_0x0.DebugPtr;
          if (pUVar6[2].field_0xc == '7') {
            pUVar6 = FWeakObjectPtr::Get(local_1f8);
            lVar3 = *(longlong *)(pUVar6 + 0xb);
            local_1e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_1e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_1e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            if (lVar3 != 0) {
              local_1e8._s_0.Z = *(double *)(lVar3 + 0x220);
              local_1e8._s_0.X = *(double *)(lVar3 + 0x210);
              local_1e8._s_0.Y = *(double *)(lVar3 + 0x218);
            }
            UDS_PostProcessBreach::ActivatePostProcessEffect
                      (pUVar10,(TVector<double> *)&local_1e8._s_0);
          }
          else {
            UDS_PostProcessBreach::DeactivatePostProcessEffect(pUVar10);
          }
LAB_14b87aa72:
          uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
          fVar1 = __real_322bcc77;
          fVar13 = pFVar7->WarpStartAnimTime;
          fVar12 = (float)((uint)fVar13 & __xmm_7fffffff7fffffff7fffffff7fffffff);
          this->WarpStartAniTime = fVar13;
          if (fVar1 < fVar12) {
            this->bUse_WarpStartAni = true;
          }
          fVar12 = pFVar7->WarpEndAnimTime;
          this->WarpEndAniTime = fVar12;
          if (fVar1 < (float)((uint)fVar12 & uVar14)) {
            this->bUse_WarpEndAni = true;
          }
          if (fVar1 < (float)((uint)this->FadeTime & uVar14)) {
            fVar13 = fVar13 - this->FadeTime;
            this->bUse_Fade = true;
            this->EnterFadeDelayTime = fVar13;
            if (fVar13 < 0.0) {
              this->EnterFadeDelayTime = 0.0;
            }
          }
          return true;
        }
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_WarpActionAbility::InitMemberVariables",0x2a,Yes);
        pwVar15 = L"mainCharacter is nullptr.";
        uVar14 = 0x1fb;
        goto LAB_14b87a9d3;
      }
      iVar2 = pFVar7->VisualEffectValue;
      this->SequenceID = iVar2;
      pFVar8 = FDS_ResourceSequenceTableRow::Get((longlong)iVar2,true);
      if (pFVar8 != (FDS_ResourceSequenceTableRow *)0x0) {
        this->bUse_Sequence = true;
        this->SequenceMinHoldingTime = pFVar8->MinHoldingTime;
        this->FadeTime = pFVar8->FadeInTime;
        goto LAB_14b87aa72;
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_WarpActionAbility::InitMemberVariables",0x2a,Yes);
      pwVar15 = L"resourceSequenceTable is nullptr. (%d)";
      uVar14 = 0x1ca;
    }
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar14,pwVar15);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// LoadSequence @ 14b87f660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_WarpActionAbility::LoadSequence(UDS_WarpActionAbility *this)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  ADS_StreamingSourceActor *this_00;
  FDS_ResourceSequenceTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  UAssetManager *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FString *pFVar7;
  TSharedPtr<FStreamableHandle,1> *pTVar8;
  undefined1 auStackY_258 [32];
  uint uVar9;
  wchar_t *pwVar10;
  undefined1 local_208 [8];
  FDelegateAllocation local_200;
  undefined1 local_1f0 [24];
  code *local_1d8;
  FMRSWRecursiveAccessDetector *pFStack_1d0;
  char *local_1c8;
  UDS_WarpActionAbility *local_1b8;
  FString local_1b0;
  FString local_1a0;
  FDestructionSentinel local_190;
  FDelegateAllocation *local_178;
  TSharedPtr<FStreamableHandle,1> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pFVar2 = FDS_ResourceSequenceTableRow::Get((longlong)this->SequenceID,true);
  if (pFVar2 == (FDS_ResourceSequenceTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_WarpActionAbility::LoadSequence",0x23,Yes);
    pwVar10 = L"resourceSequenceTable is nullptr. (%d)";
    uVar9 = 0x4c4;
  }
  else {
    pUVar4 = UAssetManager::Get();
    local_1f0._0_4_ = 0x4c9;
    local_1f0._4_4_ = 0x2a;
    local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0._8_8_ =
         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_WarpActionAbility.cpp";
    local_1b0.Data.ArrayNum = 0;
    local_1b0.Data.ArrayMax = 0;
    local_1f0._16_8_ = "bool __cdecl UDS_WarpActionAbility::LoadSequence(void)";
    local_1d8 = OnCompleteLoadSequence;
    pFStack_1d0 = (FMRSWRecursiveAccessDetector *)((ulonglong)(uint)local_1a0.Data.ArrayMax << 0x20)
    ;
    local_208 = (undefined1  [8])0x0;
    local_200.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_200.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
               (FWriteAccessScope *)&local_190);
    local_178 = &local_200;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_200);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WarpActionAbility____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_1b8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_1b8);
      puVar5[4] = local_1d8;
      puVar5[5] = pFStack_1d0;
    }
    if (local_190.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
    }
    pFVar7 = FSoftObjectPath::ToString(&pFVar2->SequenceResourcePath,&local_1a0);
    local_1d8._4_4_ = local_1f0._4_4_;
    local_1d8._0_4_ = local_1f0._0_4_;
    pFStack_1d0 = (FMRSWRecursiveAccessDetector *)local_1f0._8_8_;
    local_1c8 = (char *)local_1f0._16_8_;
    pTVar8 = FStreamableManager::
             RequestAsyncLoad<FString,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                       (&pUVar4->StreamableManager,&local_170,pFVar7,
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_208,0,
                        false,false,&local_1b0,(FSourceLocation *)&local_1d8);
    pTVar1 = &this->SequenceAsyncLoadHandle;
    if (pTVar1 != pTVar8) {
      pTVar1->Object = pTVar8->Object;
      pTVar8->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SequenceAsyncLoadHandle).SharedReferenceCount,&pTVar8->SharedReferenceCount
                );
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
               (FWriteAccessScope *)local_1f0);
    if ((local_200.DelegateSize != 0) &&
       (local_200.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_200.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_200,0,0,0x10);
      local_200.DelegateSize = 0;
    }
    if (local_1f0[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1f0._8_8_,(FDestructionSentinel *)local_1f0);
    }
    if (local_200.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_200.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_208);
    if (pTVar1->Object != (FStreamableHandle *)0x0) {
      if (this->bUse_SequenceStreaming != true) {
        return true;
      }
      this_00 = (this->SequenceStreamingSource).field0_0x0.DebugPtr;
      if (this_00 != (ADS_StreamingSourceActor *)0x0) {
        ADS_StreamingSourceActor::EnableStreamingSource(this_00);
        return true;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_WarpActionAbility::LoadSequence",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_158.Ptr,0x4d6,L"SequenceStreamingSource is nullptr.");
      goto LAB_14b87fa14;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_WarpActionAbility::LoadSequence",0x23,Yes);
    pwVar10 = L"SequenceAsyncLoadHandle is invalid. (%d)";
    uVar9 = 0x4cd;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,uVar9,pwVar10);
LAB_14b87fa14:
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

// OnAbilityRetryActivate @ 14b880cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnAbilityRetryActivate(UDS_WarpActionAbility *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar2 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->WarpActionAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpActionAbility::OnAbilityRetryActivate",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xd0,L"WarpActionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_148);
  }
  else {
    if ((*(char *)((longlong)&this->_padding_ + 1) == '\x01') &&
       (pUVar4 = FWeakObjectPtr::Get(&(this->WarpActionAbilityData).WeakPtr),
       pUVar4[2].field_0xd == '\0')) {
      if ((int)this->CurState < 4) {
        return;
      }
      this->bComplete_Teleport = false;
      if (this->CurState != SendWarpLoading_Process) {
        this->CurState = SendWarpLoading_Process;
        this->bStateChanged = true;
      }
      UpdateWarpActionState(this);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3041861023469404388>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_WarpActionAbility.cpp"
                       ,0xe4,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnCanActivate @ 14b8849b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_WarpActionAbility::OnCanActivate(UDS_WarpActionAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->WarpActionAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_WarpActionAbilityData>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->WarpActionAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->WarpActionAbilityData,(void *)0x0);
    if (!bVar1) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpActionAbility::OnCanActivate",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x3c,L"WarpActionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnChangedEnterFadePhase @ 14b886740

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_WarpActionAbility::OnChangedEnterFadePhase
          (UDS_WarpActionAbility *this,EDS_FadeInOutPhase param_1)

{
  if (param_1 == Waiting) {
    this->bComplete_EnterFade_FadeOut = true;
    UpdateWarpActionState(this);
    return;
  }
  if (param_1 == Finish) {
    this->bComplete_EnterFade_FadeIn = true;
    return;
  }
  return;
}

// OnChangedExitFadePhase @ 14b886770

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_WarpActionAbility::OnChangedExitFadePhase
          (UDS_WarpActionAbility *this,EDS_FadeInOutPhase param_1)

{
  if (param_1 == Waiting) {
    this->bComplete_ExitFade_FadeOut = true;
    this->bComplete_SequenceVisuals = true;
    UpdateWarpActionState(this);
    return;
  }
  if (param_1 == Finish) {
    this->bComplete_ExitFade_FadeIn = true;
    UpdateWarpActionState(this);
    return;
  }
  return;
}

// OnCompleteLoadSequence @ 14b887fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnCompleteLoadSequence(UDS_WarpActionAbility *this)

{
  int iVar1;
  FDS_ResourceSequenceTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  ULevelSequence *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  ULevelSequencePlayer *pUVar7;
  undefined1 auStackY_208 [32];
  uint uVar8;
  wchar_t *pwVar9;
  EDS_AbilityDeactivateType local_1c8 [8];
  uint local_1c0;
  FMovieSceneSequenceLoopCount FStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined2 local_1b0;
  undefined2 uStack_1ae;
  float fStack_1ac;
  float fStack_1a8;
  uint uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  ALevelSequenceActor *local_198;
  undefined8 local_190;
  FSharedReferencer<1> aFStack_188 [2];
  FMovieSceneSequencePlaybackSettings local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_190 = 0;
  aFStack_188[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SequenceAsyncLoadHandle != (TSharedPtr<FStreamableHandle,1> *)&local_190) {
    (this->SequenceAsyncLoadHandle).Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SequenceAsyncLoadHandle).SharedReferenceCount,aFStack_188);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_188[0].ReferenceController);
  pFVar2 = FDS_ResourceSequenceTableRow::Get((longlong)this->SequenceID,true);
  if (pFVar2 == (FDS_ResourceSequenceTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b88824d;
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WarpActionAbility::OnCompleteLoadSequence",0x2d,Yes);
    pwVar9 = L"resourceSequenceTable is nullptr. (%d)";
    uVar8 = 0x4e7;
  }
  else {
    pUVar4 = (ULevelSequence *)FSoftObjectPath::ResolveObject(&pFVar2->SequenceResourcePath);
    if (pUVar4 != (ULevelSequence *)0x0) {
      pUVar5 = Z_Construct_UClass_ULevelSequence_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        uStack_1a4 = uStack_1a4 & 0xffffffc0;
        local_1c0 = local_1c0 & 0xfffffffe;
        uStack_19c = uStack_19c & 0xfffffffa | 2;
        FStack_1bc.Value = 0;
        fStack_1b8 = 0.0;
        fStack_1b4 = 0.0;
        local_1b0 = 0x100;
        fStack_1ac = 1.0;
        fStack_1a8 = 0.0;
        local_1a0 = local_1a0 & 0xffffff00;
        local_198 = (ALevelSequenceActor *)0x0;
        pUVar6 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
        local_178.LoopCount.Value = FStack_1bc.Value;
        local_178._0_4_ = local_1c0;
        local_178.TickInterval.EvaluationBudgetMicroseconds = fStack_1b4;
        local_178.TickInterval.TickIntervalSeconds = fStack_1b8;
        local_178.TickInterval._10_2_ = uStack_1ae;
        local_178.TickInterval.bTickWhenPaused = (bool)(undefined1)local_1b0;
        local_178.TickInterval.bAllowRounding = (bool)local_1b0._1_1_;
        local_178.PlayRate = fStack_1ac;
        local_178._28_4_ = uStack_1a4;
        local_178.StartTime = fStack_1a8;
        local_178._36_4_ = uStack_19c;
        local_178._32_4_ = local_1a0;
        pUVar7 = ULevelSequencePlayer::CreateLevelSequencePlayer
                           (pUVar6,pUVar4,&local_178,&local_198);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar7 != (ULevelSequencePlayer *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
          (this->SequencePlayer).field0_0x0.DebugPtr = pUVar7;
LAB_14b888156:
          this->bComplete_LoadSequence = true;
          UpdateWarpActionState(this);
          return;
        }
        (this->SequencePlayer).field0_0x0.DebugPtr = pUVar7;
        if (pUVar7 != (ULevelSequencePlayer *)0x0) goto LAB_14b888156;
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b88824d;
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_WarpActionAbility::OnCompleteLoadSequence",0x2d,Yes);
        pwVar9 = L"SequencePlayer is nullptr. (%d)";
        uVar8 = 0x4fb;
        goto LAB_14b888222;
      }
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b88824d;
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WarpActionAbility::OnCompleteLoadSequence",0x2d,Yes);
    pwVar9 = L"levelSequence is nullptr. (%d)";
    uVar8 = 0x4ef;
  }
LAB_14b888222:
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar8,pwVar9);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14b88824d:
  local_1c8[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_1c8);
  return;
}

// OnCompleteSequenceStreaming @ 14b888290

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnCompleteSequenceStreaming(UDS_WarpActionAbility *this)

{
  this->bComplete_SequenceStreaming = true;
  UpdateWarpActionState(this);
  return;
}

// OnCompleteTeleport @ 14b8882b0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnCompleteTeleport(UDS_WarpActionAbility *this)

{
  this->bComplete_Teleport = true;
  UpdateWarpActionState(this);
  return;
}

// OnCompleteWarpEndAni @ 14b8882d0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnCompleteWarpEndAni(UDS_WarpActionAbility *this)

{
  EDS_AbilityDeactivateType local_res8 [32];
  
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    this->bComplete_WarpEndAni = true;
    UpdateWarpActionState(this);
    return;
  }
  local_res8[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnCompleteWarpStartAni @ 14b888310

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnCompleteWarpStartAni(UDS_WarpActionAbility *this)

{
  EDS_AbilityDeactivateType local_res8 [32];
  
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    this->bComplete_WarpStartAni = true;
    UpdateWarpActionState(this);
    return;
  }
  local_res8[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnDeactivateAbility @ 14b888f20

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_WarpActionAbility::OnDeactivateAbility(UDS_WarpActionAbility *this,bool *param_1)

{
  bool bVar1;
  ADS_MainCharacter *this_00;
  UObject *pUVar2;
  TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr> *this_01;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0].ObjectIndex._0_1_ = 0x6a;
  UDS_GameplayAbility::RemoveStateTagToASC
            ((UDS_GameplayAbility *)this,(EDS_StateTagType *)local_res8);
  local_res8[0].ObjectIndex._0_1_ = 0x67;
  UDS_GameplayAbility::RemoveStateTagToASC
            ((UDS_GameplayAbility *)this,(EDS_StateTagType *)local_res8);
  local_res8[0].ObjectIndex._0_1_ = 0x68;
  UDS_GameplayAbility::RemoveStateTagToASC
            ((UDS_GameplayAbility *)this,(EDS_StateTagType *)local_res8);
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    ADS_MainCharacter::GetMainPlayer();
    bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)local_res8,(void *)0x0);
    if (!bVar1) {
      this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(local_res8);
      ADS_MainCharacter::OnUnBindTeleportFinish(this_00,(UObject *)this);
    }
  }
  ClearMemberVariables(this);
  this_01 = &this->WarpActionAbilityData;
  bVar1 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals(this_01,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar2[3].field_0x10);
    pUVar2 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pUVar2 + 4));
    pUVar2 = FWeakObjectPtr::Get(&this_01->WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b888ff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x2c8));
    return;
  }
  return;
}

// OnOverSequenceMinHoldingTime @ 14b88c310

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnOverSequenceMinHoldingTime(UDS_WarpActionAbility *this)

{
  this->bComplete_SequenceMinHoldingTime = true;
  UpdateWarpActionState(this);
  return;
}

// OnPostActivateAbility @ 14b88ced0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnPostActivateAbility(UDS_WarpActionAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  ADS_MainCharacter *this_00;
  FName *pFVar6;
  undefined1 auStackY_1c8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  EDS_AbilityDeactivateType local_198 [8];
  FWeakObjectPtr local_190;
  FName local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  FDestructionSentinel local_178;
  undefined1 *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar1 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->WarpActionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_WarpActionAbility::OnPostActivateAbility",0x2c,Yes);
      pwVar8 = L"WarpActionAbilityData is nullptr.";
      uVar7 = 0x49;
LAB_14b88cf55:
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_158.Ptr,uVar7,pwVar8);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->WarpActionAbilityData).WeakPtr);
    uStack_180 = 0;
    local_188 = (FName)OnStartLoading;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3[3].field_0x10,
               (FWriteAccessScope *)&local_178);
    local_160 = &pUVar3[3].field_0x18;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_160);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WarpActionAbility____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_WarpActionAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_190 = (FWeakObjectPtr)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_WarpActionAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_190);
      *(FName *)(puVar4 + 4) = local_188;
      puVar4[5] = CONCAT44(uStack_17c,uStack_180);
    }
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
    pUVar3 = FWeakObjectPtr::Get(&(this->WarpActionAbilityData).WeakPtr);
    uStack_180 = 0;
    local_188 = (FName)OnWarpArrive;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 4),
               (FWriteAccessScope *)&local_178);
    local_160 = &pUVar3[4].field_0x8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_160);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WarpActionAbility____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_WarpActionAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_190 = (FWeakObjectPtr)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_WarpActionAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_190);
      *(FName *)(puVar4 + 4) = local_188;
      puVar4[5] = CONCAT44(uStack_17c,uStack_180);
    }
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
    bVar1 = InitMemberVariables(this);
    if (bVar1) {
      FDS_EntityBase::SetBattleState((FDS_EntityBase *)this->_padding_,false);
      if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
        ADS_MainCharacter::GetMainPlayer();
        bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_190,
                           (void *)0x0);
        if (!bVar1) {
          this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_190);
          pFVar6 = ::FName::FName(&local_188,"OnCompleteTeleport");
          ADS_MainCharacter::OnBindTeleportFinish(this_00,(UObject *)this,*pFVar6);
          pUVar3 = FWeakObjectPtr::Get(&(this->WarpActionAbilityData).WeakPtr);
          if (pUVar3[2].field_0xc == '\x02') {
            UDS_TimeCoolDownManager::StartCoolDown(ActionReturnHome,0,0.0);
          }
          if (this->CurState != Initializing) {
            this->CurState = Initializing;
            this->bStateChanged = true;
          }
          UpdateWarpActionState(this);
          goto LAB_14b88d29c;
        }
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_WarpActionAbility::OnPostActivateAbility",0x2c,Yes);
          pwVar8 = L"mainCharacter is nullptr.";
          uVar7 = 0x62;
          goto LAB_14b88cf55;
        }
      }
      else {
        pUVar3 = FWeakObjectPtr::Get(&(this->WarpActionAbilityData).WeakPtr);
        if (*(int *)&pUVar3[2].field_0x8 == 0) {
          if (this->bUse_WarpStartAni != true) {
LAB_14b88d39c:
            local_198[0] = 0x6a;
            UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_198);
            local_198[0] = Success;
            goto LAB_14b88d3b0;
          }
          bVar1 = StartWarpStartAni(this);
          if (bVar1) goto LAB_14b88d29c;
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 != (UDS_LogManager *)0x0) {
            pUVar2 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_WarpActionAbility::OnPostActivateAbility",0x2c,Yes);
            pwVar8 = L"Failed to StartWarpStartAni().";
            uVar7 = 0x80;
            goto LAB_14b88cf55;
          }
        }
        else {
          if (*(int *)&pUVar3[2].field_0x8 != 1) {
LAB_14b88d29c:
            local_198[0] = 0x6a;
            UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_198);
            return;
          }
          if (this->bUse_WarpEndAni != true) goto LAB_14b88d39c;
          bVar1 = StartWarpEndAni(this);
          if (bVar1) goto LAB_14b88d29c;
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 != (UDS_LogManager *)0x0) {
            pUVar2 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_WarpActionAbility::OnPostActivateAbility",0x2c,Yes);
            pwVar8 = L"Failed to StartWarpEndAni().";
            uVar7 = 0x96;
            goto LAB_14b88cf55;
          }
        }
      }
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_WarpActionAbility::OnPostActivateAbility",0x2c,Yes);
        pwVar8 = L"Failed to InitMemberVariables().";
        uVar7 = 0x53;
        goto LAB_14b88cf55;
      }
    }
  }
  local_198[0] = Cancel;
LAB_14b88d3b0:
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_198);
  return;
}

// OnStartLoading @ 14b892300

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnStartLoading(UDS_WarpActionAbility *this)

{
  this->bReceive_WarpLoading = true;
  UpdateWarpActionState(this);
  return;
}

// OnStateChanged_EndWarp_Process @ 14b892490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnStateChanged_EndWarp_Process(UDS_WarpActionAbility *this)

{
  FDS_EventDelegate<EDS_FadeInOutPhase_const_> *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  ULevelSequencePlayer *this_01;
  bool bVar3;
  UDS_HudManager *this_02;
  UObject *pUVar4;
  ADS_CameraManager *this_03;
  FDS_WarpLocationTableRow *pFVar5;
  UDS_IngameState *this_04;
  UDS_PhasingManager *this_05;
  UDS_LogManager *pUVar6;
  UDS_LoadingEvent *pUVar7;
  UDS_FadeInOutData *this_06;
  undefined1 auStackY_1c8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  bool local_198 [16];
  undefined1 local_188 [32];
  TRotator<double> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (this->bUse_HideEntity == true) {
    local_188._0_8_ = (FScriptContainerElement *)0x0;
    local_188._8_8_ = 0;
    local_198[0] = false;
    UDS_IngameState::SetLevelSequencePlaying
              (local_198,(TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)local_188);
    if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_188._0_8_);
    }
  }
  if (this->bUse_HideNameTag == true) {
    UDS_NameTagDataAsset::SetDisplayNameTag(true);
  }
  if ((this->bUse_CloseAllWindow == true) &&
     (this_02 = UDS_HudManager::GetInst(), this_02 != (UDS_HudManager *)0x0)) {
    UDS_HudManager::OpenHUD(this_02);
  }
  bVar3 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->WarpActionAbilityData,(void *)0x0);
  if ((((!bVar3) &&
       (pUVar4 = FWeakObjectPtr::Get(&(this->WarpActionAbilityData).WeakPtr),
       0 < *(int *)&pUVar4[3].field_0x8)) &&
      (this_03 = ADS_CameraManager::GetInst(), this_03 != (ADS_CameraManager *)0x0)) &&
     ((pFVar5 = FDS_WarpLocationTableRow::Get((longlong)*(int *)&pUVar4[3].field_0x8,true),
      pFVar5 != (FDS_WarpLocationTableRow *)0x0 && (pFVar5->IsCameraSet == true)))) {
    uVar1 = pFVar5->CameraPitch;
    uVar2 = pFVar5->CameraYaw;
    local_168.Yaw._0_4_ = SUB84((double)(float)uVar2,0);
    local_168.Pitch = (double)(float)uVar1;
    local_168.Yaw._4_4_ = (int)((ulonglong)(double)(float)uVar2 >> 0x20);
    local_168.Roll = 0.0;
    ADS_CameraManager::SetCameraRotation(this_03,&local_168);
    ADS_CameraManager::SetZoomInOutValue(this_03,(float)pFVar5->CameraDistance);
  }
  if ((this->bUse_Sequence == true) &&
     (this_01 = (this->SequencePlayer).field0_0x0.DebugPtr, this_01 != (ULevelSequencePlayer *)0x0))
  {
    UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)this_01);
    (this->SequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  }
  UDS_IngameState::GetInst();
  bVar3 = TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr> *)(local_188 + 0x10),
                     (void *)0x0);
  if (!bVar3) {
    this_04 = (UDS_IngameState *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_188 + 0x10));
    UDS_IngameState::ReserveCommandOnWarp(this_04);
  }
  this_05 = UDS_PhasingManager::GetInst();
  if (this_05 != (UDS_PhasingManager *)0x0) {
    UDS_PhasingManager::ClearScriptBlockingWallInfo(this_05);
  }
  if (this->bUse_Fade == true) {
    UDS_FadeInOutData::GetInst();
    bVar3 = TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr> *)(local_188 + 0x18),
                       (void *)0x0);
    if (bVar3) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14b8926b5;
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_WarpActionAbility::OnStateChanged_EndWarp_Process",0x35,Yes);
      pwVar9 = L"fadeData to nullptr.";
      uVar8 = 0x3a1;
    }
    else {
      pUVar7 = UDS_LoadingEvent::GetEvent();
      if (pUVar7 != (UDS_LoadingEvent *)0x0) {
        this_00 = &pUVar7->FadeInOutPhaseDelegate;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
        local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
        local_188._0_8_ = OnChangedExitFadePhase;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
        local_168.Yaw = (double)local_188._8_8_;
        local_168.Pitch = (double)local_188._0_8_;
        TMulticastDelegateRegistration<void___cdecl(enum_EDS_FadeInOutPhase),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_WarpActionAbility>
                  (this_00,(UDS_WarpActionAbility *)local_188,(pmf_cdc5ba5b *)this);
        this_06 = (UDS_FadeInOutData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_188 + 0x18));
        UDS_FadeInOutData::SetFadeInOutPhase(this_06,FadeIn);
        goto LAB_14b892789;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14b8926b5;
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_WarpActionAbility::OnStateChanged_EndWarp_Process",0x35,Yes);
      pwVar9 = L"loadingEvent to nullptr.";
      uVar8 = 0x3a9;
    }
  }
  else {
LAB_14b892789:
    if ((this->bUse_WarpEndAni != true) || (bVar3 = StartWarpEndAni(this), bVar3)) {
      if (this->CurState == EndWarp_Waiting) {
        return;
      }
      this->CurState = EndWarp_Waiting;
      this->bStateChanged = true;
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14b8926b5;
    pUVar6 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WarpActionAbility::OnStateChanged_EndWarp_Process",0x35,Yes);
    pwVar9 = L"Failed to StartWarpEndAni().";
    uVar8 = 0x3b9;
  }
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,uVar8,pwVar9);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14b8926b5:
  local_198[0] = true;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_198);
  return;
}

// OnStateChanged_EndWarp_Waiting @ 14b892840

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnStateChanged_EndWarp_Waiting(UDS_WarpActionAbility *this)

{
  bool bVar1;
  bool bVar2;
  EDS_AbilityDeactivateType local_res8 [32];
  
  if ((this->bUse_Fade == false) || (this->bComplete_ExitFade_FadeIn == true)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((this->bUse_WarpEndAni == false) || (this->bComplete_WarpEndAni == true)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar1) && (bVar2)) {
    local_res8[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  }
  return;
}

// OnStateChanged_Initializing @ 14b8928a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnStateChanged_Initializing(UDS_WarpActionAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((this->bUse_Sequence == true) && (bVar1 = LoadSequence(this), !bVar1)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpActionAbility::OnStateChanged_Initializing",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x2a3,L"Failed to LoadSequence().");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_148);
    return;
  }
  if (this->CurState != StartWarp_Process) {
    this->CurState = StartWarp_Process;
    this->bStateChanged = true;
  }
  return;
}

// OnStateChanged_MainWarp_Process @ 14b8929c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnStateChanged_MainWarp_Process(UDS_WarpActionAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  ADS_MainCharacter *this_00;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_1a8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_AbilityDeactivateType local_178 [8];
  FWeakObjectPtr local_170;
  TRotator<double> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (this->bUse_Sequence == true) {
    if (this->bAlready_StartSequence == false) {
      if ((this->bUse_SequenceStreaming == false) || (this->bComplete_SequenceStreaming == true)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (this->bComplete_LoadSequence == false) {
        return;
      }
      if (!bVar1) {
        return;
      }
      bVar1 = StartCommonProcess(this);
      if (bVar1) {
        bVar1 = StartSequence(this);
        if (bVar1) {
          this->bAlready_StartSequence = true;
          goto LAB_14b892b25;
        }
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b892aad;
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_WarpActionAbility::OnStateChanged_MainWarp_Process",0x36,Yes);
        pwVar6 = L"Failed to StartSequence().";
        uVar5 = 0x30e;
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b892aad;
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_WarpActionAbility::OnStateChanged_MainWarp_Process",0x36,Yes);
        pwVar6 = L"Failed to StartCommonProcess().";
        uVar5 = 0x307;
      }
LAB_14b892a88:
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar5,pwVar6);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
LAB_14b892aad:
      local_178[0] = Cancel;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_178);
      return;
    }
  }
  else {
    bVar1 = StartCommonProcess(this);
    if (!bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b892aad;
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_WarpActionAbility::OnStateChanged_MainWarp_Process",0x36,Yes);
      pwVar6 = L"Failed to StartCommonProcess().";
      uVar5 = 0x31b;
      goto LAB_14b892a88;
    }
  }
LAB_14b892b25:
  bVar1 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->WarpActionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b892c7a;
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WarpActionAbility::StartTeleport",0x24,Yes);
    pwVar6 = L"WarpActionAbilityData is nullptr.";
    uVar5 = 0x3e3;
  }
  else {
    ADS_MainCharacter::GetMainPlayer();
    bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_170,(void *)0x0);
    if (!bVar1) {
      this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_170);
      pUVar3 = FWeakObjectPtr::Get(&(this->WarpActionAbilityData).WeakPtr);
      pUVar4 = FWeakObjectPtr::Get(&(this->WarpActionAbilityData).WeakPtr);
      local_168.Yaw = (double)*(float *)(pUVar4 + 3);
      local_168.Pitch = 0.0;
      local_168.Roll = 0.0;
      pUVar4 = FWeakObjectPtr::Get(&(this->WarpActionAbilityData).WeakPtr);
      ADS_MainCharacter::OnTeleport
                (this_00,(TVector<double> *)&pUVar4[2].field_0x10,&local_168,
                 (uint *)&pUVar3[3].field_0x4);
      local_178[0] = 0x67;
      UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_178);
      if (this->CurState == MainWarp_Waiting) {
        return;
      }
      this->CurState = MainWarp_Waiting;
      this->bStateChanged = true;
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b892c7a;
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WarpActionAbility::StartTeleport",0x24,Yes);
    pwVar6 = L"mainCharacter is nullptr.";
    uVar5 = 0x3ea;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar5,pwVar6);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14b892c7a:
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WarpActionAbility::OnStateChanged_MainWarp_Process",0x36,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x324,L"Failed to StartTeleport().");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  local_178[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_178);
  return;
}

// OnStateChanged_MainWarp_Waiting @ 14b892dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnStateChanged_MainWarp_Waiting(UDS_WarpActionAbility *this)

{
  FDS_EventDelegate<EDS_FadeInOutPhase_const_> *this_00;
  bool bVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_LoadingEvent *pUVar4;
  UDS_FadeInOutData *this_01;
  undefined1 auStackY_198 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_AbilityDeactivateType local_168 [4];
  FDS_FadeInOutInfo local_164;
  FWeakObjectPtr local_160;
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar2 = this->bUse_Sequence;
  if ((bVar2 == false) || (this->bComplete_SequenceMinHoldingTime == true)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (this->bComplete_Teleport == false) {
    return;
  }
  if (!bVar1) {
    return;
  }
  if (bVar2 == true) {
    if (this->bUse_Fade == true) {
      if (this->bAlready_StartExitFade == false) {
        UDS_FadeInOutData::GetInst();
        bVar2 = TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr> *)&local_160,
                           (void *)0x0);
        if (bVar2) {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b892f31;
          pUVar3 = UDS_LogManager::GetInst();
          local_38 = (void *)0x0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                     "UDS_WarpActionAbility::StartExitFade",0x24,Yes);
          pwVar6 = L"fadeData to nullptr.";
          uVar5 = 0x476;
        }
        else {
          pUVar4 = UDS_LoadingEvent::GetEvent();
          if (pUVar4 != (UDS_LoadingEvent *)0x0) {
            this_00 = &pUVar4->FadeInOutPhaseDelegate;
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
            local_158._8_4_ = 0;
            local_158._0_8_ = OnChangedExitFadePhase;
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
            local_158._24_8_ = CONCAT44(local_158._12_4_,local_158._8_4_);
            local_158._16_8_ = local_158._0_8_;
            TMulticastDelegateRegistration<void___cdecl(enum_EDS_FadeInOutPhase),FDefaultDelegateUserPolicy>
            ::AddUObject<UDS_WarpActionAbility>
                      (this_00,(UDS_WarpActionAbility *)local_158,(pmf_cdc5ba5b *)this);
            local_164.FadeTime = this->FadeTime;
            this_01 = (UDS_FadeInOutData *)FWeakObjectPtr::Get(&local_160);
            UDS_FadeInOutData::StartFadeInOut(this_01,&local_164);
            this->bAlready_StartExitFade = true;
            return;
          }
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b892f31;
          pUVar3 = UDS_LogManager::GetInst();
          local_38 = (void *)0x0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                     "UDS_WarpActionAbility::StartExitFade",0x24,Yes);
          pwVar6 = L"loadingEvent to nullptr.";
          uVar5 = 0x47d;
        }
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_30,uVar5,pwVar6);
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
LAB_14b892f31:
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_38 = (void *)0x0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                     "UDS_WarpActionAbility::OnStateChanged_MainWarp_Waiting",0x36,Yes);
          UDS_LogManager::PrintLog(pUVar3,1,Warning,local_30,0x344,L"Failed to StartExitFade().");
          if (local_38 != (void *)0x0) {
            FMemory::Free(local_38);
          }
        }
        local_168[0] = Cancel;
        UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_168);
        return;
      }
    }
    else {
      this->bComplete_SequenceVisuals = true;
    }
  }
  else if (bVar2 == false) goto LAB_14b89307c;
  if (this->bComplete_SequenceVisuals != true) {
    return;
  }
LAB_14b89307c:
  if (this->CurState != SendWarpArrive_Process) {
    this->CurState = SendWarpArrive_Process;
    this->bStateChanged = true;
  }
  return;
}

// OnStateChanged_SendWarpArrive_Process @ 14b8930b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_WarpActionAbility::OnStateChanged_SendWarpArrive_Process(UDS_WarpActionAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this->bReceive_WarpArrive = false;
  bVar1 = FDS_WarpService::SendWarpArrive();
  if (bVar1) {
    if (this->CurState != SendWarpArrive_Waiting) {
      this->CurState = SendWarpArrive_Waiting;
      this->bStateChanged = true;
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpActionAbility::OnStateChanged_SendWarpArrive_Process",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x364,L"Failed to SendWarpArrive().");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_148);
  }
  return;
}

// OnStateChanged_SendWarpArrive_Waiting @ 14b8931c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_WarpActionAbility::OnStateChanged_SendWarpArrive_Waiting(UDS_WarpActionAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->WarpActionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpActionAbility::OnStateChanged_SendWarpArrive_Waiting",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x370,L"WarpActionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_148);
  }
  else if (this->bReceive_WarpArrive != false) {
    pUVar3 = FWeakObjectPtr::Get(&(this->WarpActionAbilityData).WeakPtr);
    pUVar3[2].field_0xd = 1;
    if (this->CurState != EndWarp_Process) {
      this->CurState = EndWarp_Process;
      this->bStateChanged = true;
    }
  }
  return;
}

// OnStateChanged_SendWarpLoading_Process @ 14b8932f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_WarpActionAbility::OnStateChanged_SendWarpLoading_Process(UDS_WarpActionAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this->bReceive_WarpLoading = false;
  bVar1 = FDS_WarpService::SendWarpLoading();
  if (bVar1) {
    if (this->CurState != SendWarpLoading_Waiting) {
      this->CurState = SendWarpLoading_Waiting;
      this->bStateChanged = true;
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpActionAbility::OnStateChanged_SendWarpLoading_Process",0x3d,Yes
                );
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x2e1,L"Failed to SendWarpLoading().")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_148);
  }
  return;
}

// OnStateChanged_SendWarpLoading_Waiting @ 14b893400

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_WarpActionAbility::OnStateChanged_SendWarpLoading_Waiting(UDS_WarpActionAbility *this)

{
  if ((this->bReceive_WarpLoading != false) && (this->CurState != MainWarp_Process)) {
    this->CurState = MainWarp_Process;
    this->bStateChanged = true;
  }
  return;
}

// OnStateChanged_StartWarp_Process @ 14b893430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnStateChanged_StartWarp_Process(UDS_WarpActionAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FTimerManager *this_00;
  undefined1 auStackY_198 [32];
  uint uVar3;
  wchar_t *pwVar4;
  EDS_AbilityDeactivateType local_158 [16];
  code *local_148;
  ulonglong uStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (this->bUse_Fade == true) {
    if (__real_322bcc77 <
        (float)((uint)this->EnterFadeDelayTime & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      this_00 = FDS_TimerManager::Get((UObject *)0x0);
      uStack_140 = uStack_140 & 0xffffffff00000000;
      local_148 = StartEnterFadeByTimer;
      FTimerManager::SetTimer<UDS_WarpActionAbility>
                (this_00,&this->EnterFadeDelayTimer,this,(pmf_1b3678dd *)&local_148,
                 this->EnterFadeDelayTime,false,__real_bf800000);
      goto LAB_14b893579;
    }
    bVar1 = StartEnterFade(this);
    if (bVar1) goto LAB_14b893579;
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpActionAbility::OnStateChanged_StartWarp_Process",0x37,Yes);
      pwVar4 = L"Failed to StartEnterFade().";
      uVar3 = 0x2b5;
LAB_14b8934d7:
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
LAB_14b893504:
    local_158[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_158);
  }
  else {
LAB_14b893579:
    if (this->bUse_WarpStartAni == true) {
      bVar1 = StartWarpStartAni(this);
      if (!bVar1) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_WarpActionAbility::OnStateChanged_StartWarp_Process",0x37,Yes);
          pwVar4 = L"Failed to StartWarpStartAni().";
          uVar3 = 0x2c5;
          goto LAB_14b8934d7;
        }
        goto LAB_14b893504;
      }
    }
    if (this->CurState != StartWarp_Waiting) {
      this->CurState = StartWarp_Waiting;
      this->bStateChanged = true;
    }
  }
  return;
}

// OnStateChanged_StartWarp_Waiting @ 14b893630

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnStateChanged_StartWarp_Waiting(UDS_WarpActionAbility *this)

{
  bool bVar1;
  bool bVar2;
  
  if ((this->bUse_Fade == false) || (this->bComplete_EnterFade_FadeOut == true)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((this->bUse_WarpStartAni == false) || (this->bComplete_WarpStartAni == true)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((bVar1) && (bVar2)) && (this->CurState != SendWarpLoading_Process)) {
    this->CurState = SendWarpLoading_Process;
    this->bStateChanged = true;
  }
  return;
}

// OnWarpArrive @ 14b895220

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::OnWarpArrive(UDS_WarpActionAbility *this)

{
  this->bReceive_WarpArrive = true;
  UpdateWarpActionState(this);
  return;
}

// SetWarpActionState @ 14b899af0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_WarpActionAbility::SetWarpActionState(UDS_WarpActionAbility *this,EDS_WarpActionState *param_1)

{
  if (this->CurState != *param_1) {
    this->CurState = *param_1;
    this->bStateChanged = true;
  }
  return;
}

// StartCommonProcess @ 14b899c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_WarpActionAbility::StartCommonProcess(UDS_WarpActionAbility *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_188 [32];
  bool local_158 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->bUse_HideEntity == true) {
    local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ArrayNum = 0;
    local_150.ArrayMax = 0;
    local_158[0] = true;
    UDS_IngameState::SetLevelSequencePlaying(local_158,&local_150);
    if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.AllocatorInstance.Data);
    }
  }
  if (this->bUse_HideNameTag == true) {
    UDS_NameTagDataAsset::SetDisplayNameTag(false);
  }
  if (this->bUse_CloseAllWindow == true) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_WarpActionAbility::StartCommonProcess",0x29,Yes);
        UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x412,L"windowMng is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      return false;
    }
    UDS_WindowManager::CloseAllWindow(this_00);
  }
  return true;
}

// StartEnterFade @ 14b899d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_WarpActionAbility::StartEnterFade(UDS_WarpActionAbility *this)

{
  FDS_EventDelegate<EDS_FadeInOutPhase_const_> *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_LoadingEvent *pUVar3;
  UDS_FadeInOutData *this_01;
  undefined1 auStackY_198 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FDS_FadeInOutInfo local_168 [2];
  FWeakObjectPtr local_160;
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_FadeInOutData::GetInst();
  bVar1 = TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr> *)&local_160,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_38 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
               "UDS_WarpActionAbility::StartEnterFade",0x25,Yes);
    pwVar5 = L"fadeData to nullptr.";
    uVar4 = 0x450;
  }
  else {
    pUVar3 = UDS_LoadingEvent::GetEvent();
    if (pUVar3 != (UDS_LoadingEvent *)0x0) {
      this_00 = &pUVar3->FadeInOutPhaseDelegate;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
      local_158._8_4_ = 0;
      local_158._0_8_ = OnChangedEnterFadePhase;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
      local_158._24_8_ = CONCAT44(local_158._12_4_,local_158._8_4_);
      local_158._16_8_ = local_158._0_8_;
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_FadeInOutPhase),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_WarpActionAbility>
                (this_00,(UDS_WarpActionAbility *)local_158,(pmf_cdc5ba5b *)this);
      local_168[0].FadeTime = this->FadeTime;
      this_01 = (UDS_FadeInOutData *)FWeakObjectPtr::Get(&local_160);
      UDS_FadeInOutData::StartFadeInOut(this_01,local_168);
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_38 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
               "UDS_WarpActionAbility::StartEnterFade",0x25,Yes);
    pwVar5 = L"loadingEvent to nullptr.";
    uVar4 = 0x457;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_30,uVar4,pwVar5);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return false;
}

// StartEnterFadeByTimer @ 14b899f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::StartEnterFadeByTimer(UDS_WarpActionAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = StartEnterFade(this);
  if (!bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpActionAbility::StartEnterFadeByTimer",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x46b,L"Failed to StartEnterFade().");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_148);
  }
  return;
}

// StartExitFade @ 14b899ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_WarpActionAbility::StartExitFade(UDS_WarpActionAbility *this)

{
  FDS_EventDelegate<EDS_FadeInOutPhase_const_> *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_LoadingEvent *pUVar3;
  UDS_FadeInOutData *this_01;
  undefined1 auStackY_198 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FDS_FadeInOutInfo local_168 [2];
  FWeakObjectPtr local_160;
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_FadeInOutData::GetInst();
  bVar1 = TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr> *)&local_160,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_38 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
               "UDS_WarpActionAbility::StartExitFade",0x24,Yes);
    pwVar5 = L"fadeData to nullptr.";
    uVar4 = 0x476;
  }
  else {
    pUVar3 = UDS_LoadingEvent::GetEvent();
    if (pUVar3 != (UDS_LoadingEvent *)0x0) {
      this_00 = &pUVar3->FadeInOutPhaseDelegate;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
      local_158._8_4_ = 0;
      local_158._0_8_ = OnChangedExitFadePhase;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
      local_158._24_8_ = CONCAT44(local_158._12_4_,local_158._8_4_);
      local_158._16_8_ = local_158._0_8_;
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_FadeInOutPhase),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_WarpActionAbility>
                (this_00,(UDS_WarpActionAbility *)local_158,(pmf_cdc5ba5b *)this);
      local_168[0].FadeTime = this->FadeTime;
      this_01 = (UDS_FadeInOutData *)FWeakObjectPtr::Get(&local_160);
      UDS_FadeInOutData::StartFadeInOut(this_01,local_168);
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_38 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
               "UDS_WarpActionAbility::StartExitFade",0x24,Yes);
    pwVar5 = L"loadingEvent to nullptr.";
    uVar4 = 0x47d;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_30,uVar4,pwVar5);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return false;
}

// StartSequence @ 14b89ae80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall UDS_WarpActionAbility::StartSequence(UDS_WarpActionAbility *this)

{
  ULevelSequencePlayer *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_ResourceSequenceTableRow *pFVar3;
  UDS_FadeInOutData *this_01;
  FTimerManager *this_02;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  code *local_148;
  undefined8 uStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((this->SequencePlayer).field0_0x0.DebugPtr == (ULevelSequencePlayer *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpActionAbility::StartSequence",0x24,Yes);
    pwVar5 = L"SequencePlayer is nullptr. (%d)";
    uVar4 = 0x50e;
  }
  else {
    pFVar3 = FDS_ResourceSequenceTableRow::Get((longlong)this->SequenceID,true);
    if (pFVar3 != (FDS_ResourceSequenceTableRow *)0x0) {
      this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
      if (pFVar3->MaxLoopCnt < 1) {
        UMovieSceneSequencePlayer::Play((UMovieSceneSequencePlayer *)this_00);
      }
      else {
        UMovieSceneSequencePlayer::PlayLooping
                  ((UMovieSceneSequencePlayer *)this_00,pFVar3->MaxLoopCnt);
      }
      if (this->bUse_Fade != true) {
LAB_14b89b07d:
        if (__real_322bcc77 <
            (float)((uint)this->SequenceMinHoldingTime & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          this_02 = FDS_TimerManager::Get((UObject *)0x0);
          uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
          local_148 = OnOverSequenceMinHoldingTime;
          FTimerManager::SetTimer<UDS_WarpActionAbility>
                    (this_02,&this->SequenceMinHoldingTimer,this,(pmf_1b3678dd *)&local_148,
                     this->SequenceMinHoldingTime,false,__real_bf800000);
        }
        else {
          this->bComplete_SequenceMinHoldingTime = true;
        }
        return true;
      }
      UDS_FadeInOutData::GetInst();
      bVar1 = TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr> *)&local_148,(void *)0x0)
      ;
      if (!bVar1) {
        this_01 = (UDS_FadeInOutData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_148);
        UDS_FadeInOutData::SetFadeInOutPhase(this_01,FadeIn);
        goto LAB_14b89b07d;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpActionAbility::StartSequence",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x528,L"fadeData to nullptr.");
      goto LAB_14b89b04d;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpActionAbility::StartSequence",0x24,Yes);
    pwVar5 = L"resourceSequenceTable is nullptr. (%d)";
    uVar4 = 0x515;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b89b04d:
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// StartTeleport @ 14b89b130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_WarpActionAbility::StartTeleport(UDS_WarpActionAbility *this)

{
  TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  ADS_MainCharacter *this_01;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_188 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_158;
  TRotator<double> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = &this->WarpActionAbilityData;
  bVar1 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpActionAbility::StartTeleport",0x24,Yes);
    pwVar6 = L"WarpActionAbilityData is nullptr.";
    uVar5 = 0x3e3;
  }
  else {
    ADS_MainCharacter::GetMainPlayer();
    bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_158,(void *)0x0);
    if (!bVar1) {
      this_01 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_158);
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_150.Yaw = (double)*(float *)(pUVar4 + 3);
      local_150.Pitch = 0.0;
      local_150.Roll = 0.0;
      pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      ADS_MainCharacter::OnTeleport
                (this_01,(TVector<double> *)&pUVar4[2].field_0x10,&local_150,
                 (uint *)&pUVar3[3].field_0x4);
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpActionAbility::StartTeleport",0x24,Yes);
    pwVar6 = L"mainCharacter is nullptr.";
    uVar5 = 0x3ea;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// StartWarpEndAni @ 14b89b2f0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UDS_WarpActionAbility::StartWarpEndAni(UDS_WarpActionAbility *this)

{
  FTimerManager *this_00;
  EDS_StateTagType local_res8 [32];
  code *local_18;
  undefined8 uStack_10;
  
  local_res8[0] = Warp_EndAni;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  local_18 = OnCompleteWarpEndAni;
  FTimerManager::SetTimer<UDS_WarpActionAbility>
            (this_00,&this->WarpEndAniTimer,this,(pmf_1b3678dd *)&local_18,this->WarpEndAniTime,
             false,__real_bf800000);
  return true;
}

// StartWarpStartAni @ 14b89b380

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UDS_WarpActionAbility::StartWarpStartAni(UDS_WarpActionAbility *this)

{
  FTimerManager *this_00;
  EDS_StateTagType local_res8 [32];
  code *local_18;
  undefined8 uStack_10;
  
  local_res8[0] = Warp_StartAni;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  local_18 = OnCompleteWarpStartAni;
  FTimerManager::SetTimer<UDS_WarpActionAbility>
            (this_00,&this->WarpStartAniTimer,this,(pmf_1b3678dd *)&local_18,this->WarpStartAniTime,
             false,__real_bf800000);
  return true;
}

// TryActivate_PrepareWarp @ 14b89b920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl
UDS_WarpActionAbility::TryActivate_PrepareWarp(ulong64 *param_1,PrepareWarpResponse *param_2)

{
  Warp *pWVar1;
  Vector *pVVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FDS_EntityBase *this;
  UObject *pUVar5;
  FDS_EntityBase *this_00;
  Warp *pWVar6;
  Vector *pVVar7;
  undefined1 auStackY_1c8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  EDS_AbilityDeactivateType local_188;
  EDS_AbilityTagType local_187 [7];
  FWeakObjectPtr local_180;
  undefined8 local_178;
  TVector<double>_u_0 local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (*param_1 == 0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_WarpActionAbility::TryActivate_PrepareWarp",0x2e,Yes);
    pwVar9 = L"Invalid parameter.";
    uVar8 = 0xec;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_WarpActionAbility::TryActivate_PrepareWarp",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_158.Ptr,0xf3,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b89baaf;
    }
    local_188 = 0x47;
    UDS_AbilityDataSet::GetAbilityData<UDS_WarpActionAbilityData>
              ((ulong64 *)&local_180,(EDS_AbilityTagType *)param_1);
    bVar3 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr> *)&local_180,
                       (void *)0x0);
    if (!bVar3) {
      if ((this->EntityType == MainCharacter) &&
         (pUVar5 = FWeakObjectPtr::Get(&local_180), pUVar5[2].field_0xd != '\x01'))
      goto LAB_14b89bbf3;
      local_188 = Cancel;
      if (*param_1 == 0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14b89bbf3;
        pUVar4 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_WarpActionAbility::Deactivate",0x21,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x135,L"Invalid parameter.");
      }
      else {
        this_00 = FDS_EntityBase::GetEntityBase(param_1);
        if (this_00 != (FDS_EntityBase *)0x0) {
          local_187[0] = WarpAction;
          FDS_EntityBase::DeactivateAbility(this_00,local_187,&local_188);
          goto LAB_14b89bbf3;
        }
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14b89bbf3;
        pUVar4 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_WarpActionAbility::Deactivate",0x21,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_158.Ptr,0x13c,L"sourceEntity is nullptr. (%llu)");
      }
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
LAB_14b89bbf3:
      pUVar5 = FWeakObjectPtr::Get(&local_180);
      *(undefined4 *)&pUVar5[2].field_0x8 = 0;
      pUVar5 = FWeakObjectPtr::Get(&local_180);
      pWVar1 = (param_2->_impl_).warp_info_;
      pWVar6 = &ds_proto::_Warp_default_instance_._instance;
      if (pWVar1 != (Warp *)0x0) {
        pWVar6 = pWVar1;
      }
      pUVar5[2].field_0xc = (char)(pWVar6->_impl_).warp_type_;
      pWVar1 = (param_2->_impl_).warp_info_;
      pWVar6 = &ds_proto::_Warp_default_instance_._instance;
      if (pWVar1 != (Warp *)0x0) {
        pWVar6 = pWVar1;
      }
      local_170._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_170._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_170._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pVVar2 = (pWVar6->_impl_).position_;
      pVVar7 = &_Vector_default_instance_._instance;
      if (pVVar2 != (Vector *)0x0) {
        pVVar7 = pVVar2;
      }
      DS_Util::SetFVector((TVector<double> *)&local_170._s_0,pVVar7);
      pUVar5 = FWeakObjectPtr::Get(&local_180);
      *(double *)&pUVar5[2].field_0x10 = local_170._s_0.X;
      *(double *)&pUVar5[2].field_0x18 = local_170._s_0.Y;
      *(double *)&pUVar5[2].field_0x20 = local_170._s_0.Z;
      pUVar5 = FWeakObjectPtr::Get(&local_180);
      pWVar1 = (param_2->_impl_).warp_info_;
      pWVar6 = &ds_proto::_Warp_default_instance_._instance;
      if (pWVar1 != (Warp *)0x0) {
        pWVar6 = pWVar1;
      }
      *(float *)(pUVar5 + 3) = (pWVar6->_impl_).direction_;
      pUVar5 = FWeakObjectPtr::Get(&local_180);
      pWVar1 = (param_2->_impl_).warp_info_;
      pWVar6 = &ds_proto::_Warp_default_instance_._instance;
      if (pWVar1 != (Warp *)0x0) {
        pWVar6 = pWVar1;
      }
      *(uint *)&pUVar5[3].field_0x4 = (pWVar6->_impl_).island_id_;
      pUVar5 = FWeakObjectPtr::Get(&local_180);
      pWVar1 = (param_2->_impl_).warp_info_;
      local_178 = 0;
      local_187[0] = WarpAction;
      pWVar6 = &ds_proto::_Warp_default_instance_._instance;
      if (pWVar1 != (Warp *)0x0) {
        pWVar6 = pWVar1;
      }
      *(int *)&pUVar5[3].field_0x8 = (pWVar6->_impl_).warp_location_id_;
      bVar3 = FDS_EntityBase::TryActivateAbility
                        (this,local_187,(TObjectPtr<UWN_AbilityContext>)&local_178);
      return bVar3;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_WarpActionAbility::TryActivate_PrepareWarp",0x2e,Yes);
    pwVar9 = L"abilityData is nullptr.";
    uVar8 = 0xfa;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,uVar8,pwVar9);
LAB_14b89baaf:
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

// TryActivate_WarpArrive @ 14b89c170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl
UDS_WarpActionAbility::TryActivate_WarpArrive(ulong64 *param_1,WarpArriveResponse *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  UObject *pUVar3;
  undefined1 auStackY_198 [32];
  uint uVar4;
  wchar_t *pwVar5;
  EDS_AbilityTagType local_158 [8];
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpActionAbility::TryActivate_WarpArrive",0x2d,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0x119;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpActionAbility::TryActivate_WarpArrive",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x120,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b89c315;
    }
    local_158[0] = WarpAction;
    UDS_AbilityDataSet::GetAbilityData<UDS_WarpActionAbilityData>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr> *)&local_150,
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      *(undefined4 *)&pUVar3[2].field_0x8 = 1;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = WarpAction;
      pUVar3[2].field_0xc = (char)(param_2->_impl_).warp_type_;
      bVar1 = FDS_EntityBase::TryActivateAbility
                        (this,local_158,(TObjectPtr<UWN_AbilityContext>)local_148);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpActionAbility::TryActivate_WarpArrive",0x2d,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0x127;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b89c315:
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// UpdateWarpActionState @ 14b8a3cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WarpActionAbility::UpdateWarpActionState(UDS_WarpActionAbility *this)

{
  bool bVar1;
  float fVar2;
  bool bVar3;
  FTimerManager *this_00;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_1d8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  EDS_AbilityDeactivateType local_198 [16];
  code *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  code *local_178;
  longlong lStack_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  fVar2 = __real_bf800000;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  do {
    this->bStateChanged = false;
    switch(this->CurState) {
    case Initializing:
      if ((this->bUse_Sequence != true) || (bVar3 = LoadSequence(this), bVar3)) {
        if (this->CurState != StartWarp_Process) {
          this->CurState = StartWarp_Process;
          this->bStateChanged = true;
        }
      }
      else {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_WarpActionAbility::OnStateChanged_Initializing",0x32,Yes);
          pwVar7 = L"Failed to LoadSequence().";
          uVar6 = 0x2a3;
LAB_14b8a3d9b:
          UDS_LogManager::PrintLog(pUVar4,1,Warning,local_168.Ptr,uVar6,pwVar7);
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
LAB_14b8a3dc0:
        local_198[0] = Cancel;
LAB_14b8a41b6:
        UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_198);
      }
      break;
    case StartWarp_Process:
      if (this->bUse_Fade == true) {
        if (__real_322bcc77 <
            (float)((uint)this->EnterFadeDelayTime & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          this_00 = FDS_TimerManager::Get((UObject *)0x0);
          local_188 = StartEnterFadeByTimer;
          uStack_180 = 0;
          lStack_170 = (ulonglong)uStack_17c << 0x20;
          local_178 = StartEnterFadeByTimer;
          FTimerManager::SetTimer<UDS_WarpActionAbility>
                    (this_00,&this->EnterFadeDelayTimer,this,(pmf_1b3678dd *)&local_178,
                     this->EnterFadeDelayTime,false,fVar2);
        }
        else {
          bVar3 = StartEnterFade(this);
          if (!bVar3) {
            pUVar4 = UDS_LogManager::GetInst();
            if (pUVar4 != (UDS_LogManager *)0x0) {
              pUVar4 = UDS_LogManager::GetInst();
              local_168._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_168,"UDS_WarpActionAbility::OnStateChanged_StartWarp_Process",0x37,
                         Yes);
              pwVar7 = L"Failed to StartEnterFade().";
              uVar6 = 0x2b5;
              goto LAB_14b8a3d9b;
            }
            goto LAB_14b8a3dc0;
          }
        }
      }
      if ((this->bUse_WarpStartAni == true) && (bVar3 = StartWarpStartAni(this), !bVar3)) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_WarpActionAbility::OnStateChanged_StartWarp_Process",0x37,Yes);
          pwVar7 = L"Failed to StartWarpStartAni().";
          uVar6 = 0x2c5;
          goto LAB_14b8a3d9b;
        }
        goto LAB_14b8a3dc0;
      }
      if (this->CurState != StartWarp_Waiting) {
        this->CurState = StartWarp_Waiting;
        this->bStateChanged = true;
      }
      break;
    case StartWarp_Waiting:
      if ((this->bUse_Fade == false) || (this->bComplete_EnterFade_FadeOut == true)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((this->bUse_WarpStartAni == false) || (this->bComplete_WarpStartAni == true)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((bVar3) && (bVar1)) {
        this->CurState = SendWarpLoading_Process;
        this->bStateChanged = true;
      }
      break;
    case SendWarpLoading_Process:
      this->bReceive_WarpLoading = false;
      bVar3 = FDS_WarpService::SendWarpLoading();
      if (!bVar3) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_WarpActionAbility::OnStateChanged_SendWarpLoading_Process",0x3d
                     ,Yes);
          pwVar7 = L"Failed to SendWarpLoading().";
          uVar6 = 0x2e1;
          goto LAB_14b8a3d9b;
        }
        goto LAB_14b8a3dc0;
      }
      if (this->CurState != SendWarpLoading_Waiting) {
        this->CurState = SendWarpLoading_Waiting;
        this->bStateChanged = true;
      }
      break;
    case SendWarpLoading_Waiting:
      if (this->bReceive_WarpLoading != false) {
        this->CurState = MainWarp_Process;
        this->bStateChanged = true;
      }
      break;
    case MainWarp_Process:
      OnStateChanged_MainWarp_Process(this);
      break;
    case MainWarp_Waiting:
      OnStateChanged_MainWarp_Waiting(this);
      break;
    case SendWarpArrive_Process:
      this->bReceive_WarpArrive = false;
      bVar3 = FDS_WarpService::SendWarpArrive();
      if (!bVar3) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_WarpActionAbility::OnStateChanged_SendWarpArrive_Process",0x3c,
                     Yes);
          pwVar7 = L"Failed to SendWarpArrive().";
          uVar6 = 0x364;
          goto LAB_14b8a3d9b;
        }
        goto LAB_14b8a3dc0;
      }
      if (this->CurState != SendWarpArrive_Waiting) {
        this->CurState = SendWarpArrive_Waiting;
        this->bStateChanged = true;
      }
      break;
    case SendWarpArrive_Waiting:
      bVar3 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                        (&this->WarpActionAbilityData,(void *)0x0);
      if (bVar3) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_WarpActionAbility::OnStateChanged_SendWarpArrive_Waiting",0x3c,
                     Yes);
          pwVar7 = L"WarpActionAbilityData is nullptr.";
          uVar6 = 0x370;
          goto LAB_14b8a3d9b;
        }
        goto LAB_14b8a3dc0;
      }
      if (this->bReceive_WarpArrive != false) {
        pUVar5 = FWeakObjectPtr::Get(&(this->WarpActionAbilityData).WeakPtr);
        pUVar5[2].field_0xd = 1;
        if (this->CurState != EndWarp_Process) {
          this->CurState = EndWarp_Process;
          this->bStateChanged = true;
        }
      }
      break;
    case EndWarp_Process:
      OnStateChanged_EndWarp_Process(this);
      break;
    case EndWarp_Waiting:
      if ((this->bUse_Fade == false) || (this->bComplete_ExitFade_FadeIn == true)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((this->bUse_WarpEndAni == false) || (this->bComplete_WarpEndAni == true)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((bVar3) && (bVar1)) {
        local_198[0] = Success;
        goto LAB_14b8a41b6;
      }
    }
    if (this->bStateChanged == false) {
      return;
    }
  } while( true );
}

