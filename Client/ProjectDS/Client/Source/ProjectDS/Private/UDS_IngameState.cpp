// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b4ab6c0

UClass * __cdecl UDS_IngameState::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_IngameState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_IngameState",
               &Z_Registration_Info_UClass_UDS_IngameState.InnerSingleton,
               StaticRegisterNativesUDS_IngameState,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_IngameState>,InternalVTableHelperCtorCaller<UDS_IngameState>,
               local_res8,UDS_GameStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_IngameState.InnerSingleton;
}

// UDS_IngameState @ 14b4b2860

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_IngameState * __thiscall
UDS_IngameState::UDS_IngameState(UDS_IngameState *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_GameStateBase::UDS_GameStateBase((UDS_GameStateBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_IngameState__6B_;
  (this->StreamingSourceActor).field0_0x0.DebugPtr = (ADS_StreamingSourceActor *)0x0;
  (this->ExecuteCommandOnWarpTimer).Handle = 0;
  (this->RestoreCommandOnWarpTimer).Handle = 0;
  this->bIsNpcTalking = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->bIsLevelSequencePlaying = false;
  (this->TeleportLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TeleportLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->TeleportLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// UDS_IngameState @ 14b4b28c0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_IngameState * __thiscall
UDS_IngameState::UDS_IngameState(UDS_IngameState *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_GameStateBase::UDS_GameStateBase((UDS_GameStateBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_IngameState__6B_;
  (this->StreamingSourceActor).field0_0x0.DebugPtr = (ADS_StreamingSourceActor *)0x0;
  (this->ExecuteCommandOnWarpTimer).Handle = 0;
  (this->RestoreCommandOnWarpTimer).Handle = 0;
  this->bIsNpcTalking = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->bIsLevelSequencePlaying = false;
  (this->TeleportLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TeleportLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->TeleportLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~UDS_IngameState @ 14b4b39b0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_IngameState::~UDS_IngameState(UDS_IngameState *this)

{
  this->_padding_ = (longlong)&___7UDS_IngameState__6B_;
  UDS_GameStateBase::~UDS_GameStateBase((UDS_GameStateBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b79c0

UClass * __cdecl UDS_IngameState::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_IngameState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_IngameState",
               &Z_Registration_Info_UClass_UDS_IngameState.InnerSingleton,
               StaticRegisterNativesUDS_IngameState,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_IngameState>,InternalVTableHelperCtorCaller<UDS_IngameState>,
               local_res8,UDS_GameStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_IngameState.InnerSingleton;
}

// StaticRegisterNativesUDS_IngameState @ 14b4b8610

void __cdecl UDS_IngameState::StaticRegisterNativesUDS_IngameState(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_IngameState_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnStreamingComplete_TeleportMainPlayer @ 14b4ba930

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDS_IngameState::execOnStreamingComplete_TeleportMainPlayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnStreamingComplete_TeleportMainPlayer((UDS_IngameState *)param_1);
  return;
}

// Created @ 14b9a6170

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_IngameState::Created(UDS_IngameState *this)

{
  return;
}

// Destroyed @ 14b9a6e40

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_IngameState::Destroyed(UDS_IngameState *this)

{
  return;
}

// DisableStreamingSource @ 14b9a6fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_IngameState::DisableStreamingSource(UDS_IngameState *this)

{
  int *piVar1;
  int iVar2;
  FWorldPartitionStreamingQuerySource *pFVar3;
  ADS_StreamingSourceActor *pAVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  pAVar4 = (this->StreamingSourceActor).field0_0x0.DebugPtr;
  if (pAVar4 == (ADS_StreamingSourceActor *)0x0) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (pAVar4->StreamingSourceComp == (UWorldPartitionStreamingSourceComponent *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"ADS_StreamingSourceActor::DisableStreamingSource",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,TStack_138.Ptr,0x7a,L"StreamingSourceComp is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    piVar1 = &(pAVar4->QuerySourceList).ArrayMax;
    pFVar3 = (FWorldPartitionStreamingQuerySource *)(pAVar4->QuerySourceList).AllocatorInstance.Data
    ;
    iVar2 = (pAVar4->QuerySourceList).ArrayNum;
    if ((pAVar4->QuerySourceList).ArrayMax < 0) {
      DestructItems<FWorldPartitionStreamingQuerySource,int>(pFVar3,iVar2);
      (pAVar4->QuerySourceList).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x108,8,0,&(pAVar4->QuerySourceList).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FWorldPartitionStreamingQuerySource,int>(pFVar3,iVar2);
      (pAVar4->QuerySourceList).ArrayNum = 0;
    }
    pAVar4->StreamingSourceComp->bStreamingSourceEnabled = false;
  }
  return;
}

// End @ 14b9a7340

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_IngameState::End(UDS_IngameState *this)

{
  ADS_StreamingSourceActor *this_00;
  UDS_HudManager *this_01;
  UDS_TencentCloudChatManager *this_02;
  
  this_01 = UDS_HudManager::GetInst();
  if (this_01 != (UDS_HudManager *)0x0) {
    UDS_HudManager::CloseHUD(this_01);
  }
  this_00 = (this->StreamingSourceActor).field0_0x0.DebugPtr;
  if (this_00 != (ADS_StreamingSourceActor *)0x0) {
    AActor::Destroy((AActor *)this_00,false,true);
    (this->StreamingSourceActor).field0_0x0.DebugPtr = (ADS_StreamingSourceActor *)0x0;
  }
  this_02 = UDS_TencentCloudChatManager::GetInst();
  if (this_02 != (UDS_TencentCloudChatManager *)0x0) {
    UDS_TencentCloudChatManager::Request_Logout(this_02);
    return;
  }
  return;
}

// ExecuteCommandOnWarp @ 14b9a83f0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UDS_IngameState::ExecuteCommandOnWarp(UDS_IngameState *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FTimerManager *pFVar4;
  FTimerData *pFVar5;
  FWeakObjectPtr local_res10;
  FString local_28;
  void *local_18 [2];
  
  ADS_PlayerController::GetPlayerController();
  bVar2 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_res10,(void *)0x0
                    );
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0xe00);
    ::FString::FString(&local_28,"r.Shadow.Virtual.Cache 0");
    (*pcVar1)(pUVar3,local_18,&local_28,1);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0xe00);
    ::FString::FString(&local_28,"r.EyeAdaptation.WN.DeltaTimeMultiplier 1000");
    (*pcVar1)(pUVar3,local_18,&local_28,1);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar5 = FTimerManager::FindTimer(pFVar4,&this->RestoreCommandOnWarpTimer);
    if (pFVar5 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar4,(FTimerHandle)(this->RestoreCommandOnWarpTimer).Handle);
    }
    (this->RestoreCommandOnWarpTimer).Handle = 0;
    pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
    FTimerManager::SetTimer<UDS_IngameState>
              (pFVar4,&this->RestoreCommandOnWarpTimer,this,(pmf_a90b2871)0x14b9c34c0,
               __real_3dcccccd,false,__real_bf800000);
  }
  return;
}

// GetInGameStageType @ 14b9ae360

EDS_InGameStageType __cdecl UDS_IngameState::GetInGameStageType(void)

{
  bool bVar1;
  UDS_DungeonManager *pUVar2;
  UDS_PhasingManager *this;
  
  pUVar2 = UDS_DungeonManager::GetInst();
  if (pUVar2 != (UDS_DungeonManager *)0x0) {
    bVar1 = UDS_DungeonManager::IsDungeonPlay();
    if (bVar1) {
      return InGameStage_Dungeon;
    }
  }
  this = UDS_PhasingManager::GetInst();
  if (this != (UDS_PhasingManager *)0x0) {
    bVar1 = UDS_PhasingManager::IsPhasingInProgress(this);
    return bVar1 + InGameStage_Field;
  }
  return InGameStage_Field;
}

// GetInst @ 14b9af270

TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr> __cdecl UDS_IngameState::GetInst(void)

{
  int iVar1;
  bool bVar2;
  ADS_GameMode *this;
  TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr in_RCX;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  undefined1 local_res20 [8];
  
  ADS_GameMode::GetInst();
  bVar2 = TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)in_RCX = 0;
    local_res18 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res18);
    return (TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr>)in_RCX;
  }
  this = (ADS_GameMode *)FWeakObjectPtr::Get(&local_res10);
  this_00 = ADS_GameMode::GetGameState(this,(EDS_GameStateType)local_res20);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_IngameState_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b9af2f2;
  }
  pUVar3 = (UObject *)0x0;
LAB_14b9af2f2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)in_RCX = 0;
  local_res18 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res18);
  return (TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr>)in_RCX;
}

// GetStreamingSourceActor @ 14b9b3e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TWeakObjectPtr<ADS_StreamingSourceActor,FWeakObjectPtr> __thiscall
UDS_IngameState::GetStreamingSourceActor(UDS_IngameState *this,TTransform<double> *param_1)

{
  int iVar1;
  TObjectPtr<ADS_StreamingSourceActor>_u_0 TVar2;
  UWorld *this_00;
  FActorSpawnParameters *pFVar3;
  UClass *pUVar4;
  ADS_StreamingSourceActor *pAVar5;
  FString *pFVar6;
  UDS_LogManager *pUVar7;
  double *pdVar8;
  ADS_StreamingSourceActor *pAVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  TTransform<double> *in_R8;
  undefined1 auStackY_238 [32];
  TObjectPtr<ADS_StreamingSourceActor>_u_0 local_208 [2];
  FString local_1f8 [2];
  undefined1 local_1d8 [56];
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pAVar9 = (ADS_StreamingSourceActor *)0x0;
  if ((this->StreamingSourceActor).field0_0x0.DebugPtr == (ADS_StreamingSourceActor *)0x0) {
    if ((UDS_GameInstance::StaticInstance == (UDS_GameInstance *)0x0) ||
       (this_00 = UGameInstance::GetWorld((UGameInstance *)UDS_GameInstance::StaticInstance),
       this_00 == (UWorld *)0x0)) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_IngameState::GetStreamingSourceActor",0x28,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,199,L"world is nullptr.");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
      (param_1->Rotation).XY.m128d_f64[0] = 0.0;
      local_208[0].DebugPtr = (ADS_StreamingSourceActor *)0x0;
      goto LAB_14b9b415c;
    }
    pFVar3 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_1d8);
    pUVar4 = Z_Construct_UClass_ADS_StreamingSourceActor_NoRegister();
    pAVar5 = (ADS_StreamingSourceActor *)UWorld::SpawnActor(this_00,pUVar4,in_R8,pFVar3);
    if (pAVar5 != (ADS_StreamingSourceActor *)0x0) {
      pUVar4 = Z_Construct_UClass_ADS_StreamingSourceActor_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar1) ||
         (pAVar9 = pAVar5,
         (longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar4->_padding_)) {
        pFVar6 = GetTypeName<ADS_StreamingSourceActor>((FString *)&local_208[0].ObjectPtr);
        pwVar11 = L"";
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        pFVar6 = GetFullNameForCastLogError<AActor>(local_1f8,(AActor *)pAVar5);
        if ((pFVar6->Data).ArrayNum != 0) {
          pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar11,pwVar10);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar9 != (ADS_StreamingSourceActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar9);
    }
    (this->StreamingSourceActor).field0_0x0.DebugPtr = pAVar9;
    if (local_198 != 0.0) {
      pdVar8 = &local_188;
      if (local_170 != (double *)0x0) {
        pdVar8 = local_170;
      }
      (**(code **)((longlong)*pdVar8 + 0x10))();
    }
  }
  pAVar9 = (this->StreamingSourceActor).field0_0x0.DebugPtr;
  if (pAVar9 != (ADS_StreamingSourceActor *)0x0) {
    local_1d8._0_8_ = (in_R8->Rotation).XY.m128d_f64[0];
    local_1d8._8_8_ = (in_R8->Rotation).XY.m128d_f64[1];
    local_1d8._16_8_ = (in_R8->Rotation).ZW.m128d_f64[0];
    local_1d8._24_8_ = (in_R8->Rotation).ZW.m128d_f64[1];
    local_1d8._32_8_ = (in_R8->Translation).XY.m128d_f64[0];
    local_1d8._40_8_ = (in_R8->Translation).XY.m128d_f64[1];
    local_1d8._48_8_ = (in_R8->Translation).ZW.m128d_f64[0];
    dStack_1a0 = (in_R8->Translation).ZW.m128d_f64[1];
    local_188 = __real_3ff0000000000000;
    dStack_180 = 0.0;
    local_198 = ___xmm_3ff00000000000003ff0000000000000;
    dStack_190 = _UNK_150689688;
    AActor::SetActorTransform
              ((AActor *)pAVar9,(TTransform<double> *)local_1d8,false,(FHitResult *)0x0,None);
    pAVar9 = (this->StreamingSourceActor).field0_0x0.DebugPtr;
    if (pAVar9->StreamingSourceComp == (UWorldPartitionStreamingSourceComponent *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"ADS_StreamingSourceActor::EnableStreamingSource",0x2f,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_168.Ptr,0x6d,L"StreamingSourceComp is nullptr.");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      pAVar9->bIsLoadComplete = false;
      ADS_StreamingSourceActor::MakeQueryByActorLocation(pAVar9);
      pAVar9->StreamingSourceComp->bStreamingSourceEnabled = true;
    }
  }
  TVar2 = (TObjectPtr<ADS_StreamingSourceActor>_u_0)(this->StreamingSourceActor).field0_0x0.DebugPtr
  ;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar2.DebugPtr != (ADS_StreamingSourceActor *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar2.DebugPtr != (ADS_StreamingSourceActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
  }
  (param_1->Rotation).XY.m128d_f64[0] = 0.0;
  local_208[0] = TVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar2.DebugPtr != (ADS_StreamingSourceActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
LAB_14b9b415c:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_208);
  return (TWeakObjectPtr<ADS_StreamingSourceActor,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// IsLevelSequencePlaying @ 14b9b74a0

bool __cdecl UDS_IngameState::IsLevelSequencePlaying(void)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  GetInst();
  bVar1 = TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    return (bool)pUVar2[1].field_0x9;
  }
  return false;
}

// IsNpcTalking @ 14b9b75f0

bool __cdecl UDS_IngameState::IsNpcTalking(void)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  GetInst();
  bVar1 = TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    return (bool)pUVar2[1].field_0x8;
  }
  return false;
}

// OnStreamingComplete_TeleportMainPlayer @ 14b9bf250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_IngameState::OnStreamingComplete_TeleportMainPlayer(UDS_IngameState *this)

{
  undefined8 uVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  AActor *this_00;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  ADS_MainCharacter::GetMainPlayer();
  bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_IngameState::OnStreamingComplete_TeleportMainPlayer",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x121,L"mainPlayer is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (AActor *)FWeakObjectPtr::Get(local_148);
    AActor::SetActorLocation(this_00,&this->TeleportLocation,false,(FHitResult *)0x0,None);
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->TeleportLocation).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->TeleportLocation).field0_0x0._s_0.Y = (double)uVar1;
    (this->TeleportLocation).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return;
}

// ReserveCommandOnWarp @ 14b9c2a60

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UDS_IngameState::ReserveCommandOnWarp(UDS_IngameState *this)

{
  FTimerManager *pFVar1;
  FTimerData *pFVar2;
  
  pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar2 = FTimerManager::FindTimer(pFVar1,&this->ExecuteCommandOnWarpTimer);
  if (pFVar2 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(pFVar1,(FTimerHandle)(this->ExecuteCommandOnWarpTimer).Handle)
    ;
  }
  (this->ExecuteCommandOnWarpTimer).Handle = 0;
  pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar2 = FTimerManager::FindTimer(pFVar1,&this->RestoreCommandOnWarpTimer);
  if (pFVar2 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(pFVar1,(FTimerHandle)(this->RestoreCommandOnWarpTimer).Handle)
    ;
  }
  (this->RestoreCommandOnWarpTimer).Handle = 0;
  pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimer<UDS_IngameState>
            (pFVar1,&this->ExecuteCommandOnWarpTimer,this,(pmf_a90b2871)0x14b9a83f0,__real_3dcccccd,
             false,__real_bf800000);
  return;
}

// RestoreCommandOnWarp @ 14b9c34c0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_IngameState::RestoreCommandOnWarp(UDS_IngameState *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  FString local_28;
  void *local_18 [2];
  
  ADS_PlayerController::GetPlayerController();
  bVar2 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)local_res10,(void *)0x0)
  ;
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0xe00);
    ::FString::FString(&local_28,"r.Shadow.Virtual.Cache 1");
    (*pcVar1)(pUVar3,local_18,&local_28,1);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0xe00);
    ::FString::FString(&local_28,"r.EyeAdaptation.WN.DeltaTimeMultiplier 1");
    (*pcVar1)(pUVar3,local_18,&local_28,1);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetLevelSequencePlaying @ 14b9c4820

void __cdecl
UDS_IngameState::SetLevelSequencePlaying
          (bool *param_1,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_EntityManager *this;
  FWeakObjectPtr local_res18 [2];
  
  GetInst();
  bVar1 = TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res18);
    if ((bool)pUVar2[1].field_0x9 != *param_1) {
      pUVar2 = FWeakObjectPtr::Get(local_res18);
      pUVar2[1].field_0x9 = *param_1;
      this = UDS_EntityManager::GetInst();
      if (this != (UDS_EntityManager *)0x0) {
        UDS_EntityManager::OnChangedLevelSequencePlaying(this,param_1,param_2);
      }
    }
  }
  return;
}

// SetNpcTalking @ 14b9c4a90

void __cdecl
UDS_IngameState::SetNpcTalking
          (bool *param_1,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_EntityManager *this;
  UDS_QuestManager *this_00;
  FWeakObjectPtr local_res18 [2];
  
  GetInst();
  bVar1 = TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res18);
    if ((bool)pUVar2[1].field_0x8 != *param_1) {
      pUVar2 = FWeakObjectPtr::Get(local_res18);
      pUVar2[1].field_0x8 = *param_1;
      this = UDS_EntityManager::GetInst();
      if (this != (UDS_EntityManager *)0x0) {
        UDS_EntityManager::OnChangedNpcTalking(this,param_1,param_2);
      }
      this_00 = UDS_QuestManager::GetInst();
      if (this_00 != (UDS_QuestManager *)0x0) {
        UDS_QuestManager::OnChangedNpcTalking(this_00,param_1);
      }
    }
  }
  return;
}

// Start @ 14b9c5c50

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UDS_IngameState::Start(UDS_IngameState *this)

{
  ADS_StreamingSourceActor *this_00;
  bool bVar1;
  UDS_EntityManager *this_01;
  UWorld *pUVar2;
  ADS_PlayerController *pAVar3;
  UDS_HudManager *this_02;
  FWeakObjectPtr local_res8;
  
  bVar1 = 1 < (int)UDS_CharInfoData::TeamGroupInfoMap._72_4_;
  if (!bVar1) {
    TSet<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
    ::UnhashElements(&UDS_CharInfoData::TeamGroupInfoMap);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&UDS_CharInfoData::TeamGroupInfoMap,0,UDS_CharInfoData::TeamGroupInfoMap._8_4_);
  UDS_CharInfoData::TeamGroupInfoMap._8_4_ = 0;
  if (UDS_CharInfoData::TeamGroupInfoMap._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)&UDS_CharInfoData::TeamGroupInfoMap,0,
               (int *)&UDS_CharInfoData::TeamGroupInfoMap.field_0xc);
  }
  UDS_CharInfoData::TeamGroupInfoMap._48_4_ = 0xffffffff;
  UDS_CharInfoData::TeamGroupInfoMap._52_4_ = 0;
  UDS_CharInfoData::TeamGroupInfoMap._40_4_ = 0;
  if (0x80 < (uint)UDS_CharInfoData::TeamGroupInfoMap._44_4_) {
    UDS_CharInfoData::TeamGroupInfoMap._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &UDS_CharInfoData::TeamGroupInfoMap.field_0x10,0);
  }
  if (bVar1) {
    UDS_CharInfoData::TeamGroupInfoMap._72_4_ = 1;
    TSet<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
    ::Rehash(&UDS_CharInfoData::TeamGroupInfoMap);
  }
  this_01 = UDS_EntityManager::GetInst();
  if (this_01 != (UDS_EntityManager *)0x0) {
    pUVar2 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    UDS_EntityManager::CreateMainCharacter(this_01,pUVar2);
  }
  ADS_PlayerController::GetPlayerController();
  bVar1 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_res8,(void *)0x0)
  ;
  if (!bVar1) {
    pAVar3 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res8);
    ADS_PlayerController::SetInputControlType(pAVar3,ActionMode,false);
    pAVar3 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res8);
    ADS_PlayerController::SetActionModeCursor(pAVar3,true);
  }
  this_00 = (this->StreamingSourceActor).field0_0x0.DebugPtr;
  if (this_00 != (ADS_StreamingSourceActor *)0x0) {
    ADS_StreamingSourceActor::DisableStreamingSource(this_00);
  }
  this_02 = UDS_HudManager::GetInst();
  if (this_02 != (UDS_HudManager *)0x0) {
    UDS_HudManager::OpenHUD(this_02);
  }
  return;
}

// TeleportMainPlayer @ 14b9c6d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_IngameState::TeleportMainPlayer(UDS_IngameState *this,TVector<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UFunction *pUVar9;
  undefined1 auStackY_588 [32];
  FWeakObjectPtr local_558;
  FName local_550;
  undefined1 local_548 [40];
  FMRSWRecursiveAccessDetector *local_520;
  char local_518;
  undefined1 *local_510;
  __m128d local_508;
  __m128d local_4f8;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  undefined8 uStack_4d0;
  double local_4c8 [2];
  double local_4b8 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_588;
  if (((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X == (param_1->field0_0x0)._s_0.X) &&
      (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y == (param_1->field0_0x0)._s_0.Y)) &&
     (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z == (param_1->field0_0x0)._s_0.Z)) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_4a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4a8,"UDS_IngameState::TeleportMainPlayer",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_4a8.Ptr,0x104,L"InLocation is ZeroVector.");
      if ((void *)local_4a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4a8._padding_);
      }
    }
  }
  else if (((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X ==
             (this->TeleportLocation).field0_0x0._s_0.X) &&
           (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y ==
            (this->TeleportLocation).field0_0x0._s_0.Y)) &&
          (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z ==
           (this->TeleportLocation).field0_0x0._s_0.Z)) {
    local_508.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_4f8.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_4c8 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_4e8 = (param_1->field0_0x0)._s_0.X;
    dStack_4e0 = (param_1->field0_0x0)._s_0.Y;
    local_4b8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_4d8 = (param_1->field0_0x0)._s_0.Z;
    uStack_4d0 = 0;
    GetStreamingSourceActor(this,(TTransform<double> *)local_548);
    bVar3 = TWeakObjectPtr<ADS_StreamingSourceActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_StreamingSourceActor,FWeakObjectPtr> *)local_548,
                       (void *)0x0);
    if (bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_388._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_388,"UDS_IngameState::TeleportMainPlayer",0x23,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_388.Ptr,0x114,L"streamingSourceActor is nullptr.");
        if ((void *)local_388._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_388._padding_);
        }
      }
    }
    else {
      dVar2 = (param_1->field0_0x0)._s_0.Y;
      (this->TeleportLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
      (this->TeleportLocation).field0_0x0._s_0.Y = dVar2;
      (this->TeleportLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_548);
      ::FName::FName(&local_550,"OnStreamingComplete_TeleportMainPlayer");
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_558.ObjectIndex = 0;
      local_558.ObjectSerialNumber = 0;
      local_548._16_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_558,(FObjectPtr)((longlong)local_548 + 0x10));
      local_548._8_4_ = local_558.ObjectIndex;
      local_548._12_4_ = local_558.ObjectSerialNumber;
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar5[0x12].field_0x18);
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_548 + 8));
      if (bVar3) {
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_548 + 8));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pUVar5[0x12].field_0x18,(FWriteAccessScope *)(local_548 + 0x20));
        local_510 = &pUVar5[0x12].field_0x20;
        puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_510);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBU__TTransform_N_Math_UE__AEBUFDS_StreamingCompleteNotifyData___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXAEBU__TTransform_N_Math_UE__AEBUFDS_StreamingCompleteNotifyData___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          *(FName *)(puVar7 + 4) = local_550;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          puVar7[5] = 0;
          local_548._24_8_ = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)(puVar7 + 5),(FObjectPtr)((longlong)local_548 + 0x18));
          if ((local_550 == (FName)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("InFunctionName != NAME_None",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                 ,0x56,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (pUVar6 != (UObject *)0x0) {
            pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar7 + 5));
            pUVar9 = UObject::FindFunctionChecked(pUVar5,local_550);
            puVar7[3] = pUVar9;
          }
        }
        if (local_518 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (local_520,(FDestructionSentinel *)(local_548 + 0x20));
        }
      }
      else {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_268,"ADS_StreamingSourceActor::BindStreamingCompleteNotify",0x35,Yes);
          UDS_LogManager::PrintLog(pUVar4,1,Display,local_268.Ptr,0x62,L"InOwnerPtr is invalid");
          if ((void *)local_268._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_268._padding_);
          }
        }
      }
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_IngameState::TeleportMainPlayer",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x10a,L"Already teleporting.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

