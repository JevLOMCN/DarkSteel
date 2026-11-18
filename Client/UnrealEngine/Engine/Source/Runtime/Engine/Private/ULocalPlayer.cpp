// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 59

// ULocalPlayer @ 147ea7040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall ULocalPlayer::ULocalPlayer(ULocalPlayer *this,FVTableHelper *param_1)

{
  UClass *pUVar1;
  
  UPlayer::UPlayer((UPlayer *)this,param_1);
  this->ControllerId = -1;
  this->bEmulateSplitscreen = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  (this->CachedUniqueNetId)._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (this->CachedUniqueNetId)._padding_ = 0;
  (this->CachedUniqueNetId)._padding_ = 0;
  *(undefined1 *)&(this->CachedUniqueNetId)._padding_ = 0;
  (this->CachedUniqueNetId).ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CachedUniqueNetId).ReplicationBytes.ArrayNum = 0;
  (this->CachedUniqueNetId).ReplicationBytes.ArrayMax = 0;
  (this->ViewportClient).field0_0x0.DebugPtr = (UGameViewportClient *)0x0;
  (this->PendingLevelPlayerControllerClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ViewStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewStates).ArrayNum = 0;
  (this->ViewStates).ArrayMax = 0;
  *(undefined8 *)&this->OnControllerIdChangedEvent = 0;
  *(undefined8 *)&(this->OnControllerIdChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnControllerIdChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnControllerIdChangedEvent).field_0x18 = 2;
  this->ConnectionIdentifier = 0;
  (this->PlatformUserId).InternalId = -1;
  *(undefined8 *)&this->OnPlatformUserIdChangedEvent = 0;
  *(undefined8 *)&(this->OnPlatformUserIdChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlatformUserIdChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPlatformUserIdChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnPlayerControllerChangedEvent = 0;
  *(undefined8 *)&(this->OnPlayerControllerChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlayerControllerChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPlayerControllerChangedEvent).field_0x18 = 2;
  pUVar1 = Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister();
  FSubsystemCollectionBase::FSubsystemCollectionBase
            ((FSubsystemCollectionBase *)&this->SubsystemCollection,pUVar1);
  *(undefined ***)&this->SubsystemCollection =
       &___7__FObjectSubsystemCollection_VULocalPlayerSubsystem____6B_;
  FReply::FReply(&this->SlateOperations,false);
  return this;
}

// ULocalPlayer @ 147ea7170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall ULocalPlayer::ULocalPlayer(ULocalPlayer *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UPlayer::UPlayer((UPlayer *)this,param_1);
  this->ControllerId = -1;
  this->bEmulateSplitscreen = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  (this->CachedUniqueNetId)._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (this->CachedUniqueNetId)._padding_ = 0;
  (this->CachedUniqueNetId)._padding_ = 0;
  *(undefined1 *)&(this->CachedUniqueNetId)._padding_ = 0;
  (this->CachedUniqueNetId).ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CachedUniqueNetId).ReplicationBytes.ArrayNum = 0;
  (this->CachedUniqueNetId).ReplicationBytes.ArrayMax = 0;
  (this->ViewportClient).field0_0x0.DebugPtr = (UGameViewportClient *)0x0;
  (this->PendingLevelPlayerControllerClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ViewStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewStates).ArrayNum = 0;
  (this->ViewStates).ArrayMax = 0;
  *(undefined8 *)&this->OnControllerIdChangedEvent = 0;
  *(undefined8 *)&(this->OnControllerIdChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnControllerIdChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnControllerIdChangedEvent).field_0x18 = 2;
  this->ConnectionIdentifier = 0;
  (this->PlatformUserId).InternalId = -1;
  *(undefined8 *)&this->OnPlatformUserIdChangedEvent = 0;
  *(undefined8 *)&(this->OnPlatformUserIdChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlatformUserIdChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPlatformUserIdChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnPlayerControllerChangedEvent = 0;
  *(undefined8 *)&(this->OnPlayerControllerChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlayerControllerChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPlayerControllerChangedEvent).field_0x18 = 2;
  pUVar1 = Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister();
  FSubsystemCollectionBase::FSubsystemCollectionBase
            ((FSubsystemCollectionBase *)&this->SubsystemCollection,pUVar1);
  *(undefined ***)&this->SubsystemCollection =
       &___7__FObjectSubsystemCollection_VULocalPlayerSubsystem____6B_;
  FReply::FReply(&this->SlateOperations,false);
  pUVar1 = Z_Construct_UClass_APlayerController_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->PendingLevelPlayerControllerClass).Class.field0_0x0.DebugPtr = pUVar1;
  (this->ViewportOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return this;
}

// ~ULocalPlayer @ 147ea96e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayer::~ULocalPlayer(ULocalPlayer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  FReply::~FReply(&this->SlateOperations);
  FSubsystemCollectionBase::~FSubsystemCollectionBase
            ((FSubsystemCollectionBase *)&this->SubsystemCollection);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPlayerControllerChangedEvent).field_0x8,
             *(int *)&(this->OnPlayerControllerChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnPlayerControllerChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlayerControllerChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPlatformUserIdChangedEvent).field_0x8,
             *(int *)&(this->OnPlatformUserIdChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnPlatformUserIdChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlatformUserIdChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnControllerIdChangedEvent).field_0x8,
             *(int *)&(this->OnControllerIdChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnControllerIdChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerIdChangedEvent);
  DestructItems<FSceneViewStateReference,int>
            ((FSceneViewStateReference *)(this->ViewStates).AllocatorInstance.Data,
             (this->ViewStates).ArrayNum);
  pFVar2 = (this->ViewStates).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl(&this->CachedUniqueNetId);
  UPlayer::~UPlayer((UPlayer *)this);
  return;
}

// AddReferencedObjects @ 147eae9d0

void __cdecl ULocalPlayer::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  FString *pFVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<ULocalPlayer>(&local_38);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar3 = GetPrivateStaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    lVar5 = *(longlong *)&param_1[5].field_0x18;
    iVar1 = *(int *)&param_1[5].field_0x20;
    lVar7 = (longlong)iVar1 * 0x38 + lVar5;
    while( true ) {
      if (*(int *)&param_1[5].field_0x20 != iVar1) {
        `TCheckedPointerIterator<FSceneViewStateReference,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (lVar5 == lVar7) break;
      plVar2 = *(longlong **)(lVar5 + 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      }
      lVar5 = lVar5 + 0x38;
    }
    FSubsystemCollectionBase::AddReferencedObjects
              ((FSubsystemCollectionBase *)&param_1[8].field_0x20,param_1,param_2);
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar4 = GetTypeName<ULocalPlayer>(&local_38);
  pwVar6 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_28,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar8);
}

// CalcSceneView @ 147eb1460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

FSceneView * __thiscall
ULocalPlayer::CalcSceneView
          (ULocalPlayer *this,FSceneViewFamily *param_1,TVector<double> *param_2,
          TRotator<double> *param_3,FViewport *param_4,FViewElementDrawer *param_5,int param_6)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  APlayerCameraManager *this_00;
  longlong *plVar4;
  IStereoRendering *pIVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  UEngine *pUVar12;
  FName FVar13;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar14;
  TRotator<double> *pTVar15;
  FSceneViewFamily *pFVar16;
  undefined4 uVar17;
  bool bVar18;
  char cVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_CalcSceneView> FVar25;
  FThreadSafeStaticStat<_public:_virtual_class_FSceneView_*___cdecl_ULocalPlayer::CalcSceneView(FSceneViewFamily_*,UE::Math::TVector<double>_&,UE::Math::TRotator<double>_&,FViewport_*,FViewElementDrawer_*,int)_::_10_::FStat_STAT_BuildHiddenComponentList>
  FVar26;
  FSceneView *pFVar27;
  FSceneView *pFVar28;
  FThreadSafeStaticStat<_public:_virtual_class_FSceneView_*___cdecl_ULocalPlayer::CalcSceneView(FSceneViewFamily_*,UE::Math::TVector<double>_&,UE::Math::TRotator<double>_&,FViewport_*,FViewElementDrawer_*,int)_::_11_::FStat_STAT_PostprocessSettings>
  FVar29;
  UClass *pUVar30;
  FNameEntryId FVar31;
  FName FVar32;
  uint uVar33;
  FName FVar34;
  ulonglong uVar35;
  uint uVar36;
  ULocalPlayer *pUVar37;
  longlong lVar38;
  undefined1 auStackY_1518 [32];
  FSceneView *local_14b0;
  FName local_14a8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_14a0;
  TRotator<double> *local_1498;
  float local_1490;
  ULocalPlayer *local_1488;
  FColor_u_0 local_1480;
  FColor_u_0 local_147c;
  FColor_u_0 local_1478 [2];
  FName local_1470;
  FName local_1468;
  FName local_1460;
  uint local_1458;
  uint uStack_1454;
  FViewport *local_1450;
  FName local_1448;
  FName local_1438;
  FName local_1428;
  FSceneViewFamily *local_1418;
  undefined8 local_1410;
  uint local_1408;
  FName local_1404;
  FName local_13fc;
  FName local_13f4;
  FName local_13ec;
  FName local_13e4;
  TVector<double>_u_0 local_13d8;
  undefined1 local_13b8 [592];
  undefined1 local_1168 [80];
  TIntPoint<int>_u_0 local_1118;
  float local_1110;
  float local_110c;
  TVector<double>_u_0 local_1108;
  ushort local_10f0;
  float local_10ec;
  float local_10e8;
  float fStack_10e4;
  float fStack_10e0;
  uint uStack_10dc;
  undefined4 local_10d8;
  undefined2 local_10d4;
  float local_10d0;
  float local_10cc;
  float local_10c8;
  TVector4<float>_u_0 local_10b8;
  TVector<double>_u_0 local_10a8;
  double local_1090;
  double dStack_1088;
  double local_1080;
  float local_1078;
  float local_1074;
  float local_106c;
  uint local_1040;
  float local_1038;
  FPostProcessSettings local_1028;
  double local_8a8;
  double dStack_8a0;
  double local_898;
  double dStack_890;
  double local_888;
  double dStack_880;
  double local_878;
  double dStack_870;
  double local_868;
  double dStack_860;
  double local_858;
  double dStack_850;
  char local_848;
  float local_838;
  float local_834;
  undefined8 local_828;
  undefined8 uStack_820;
  FPostProcessSettings local_7d8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1518;
  local_1450 = param_4;
  FVar25 = StatPtr_STAT_CalcSceneView;
  local_1498 = param_3;
  local_1488 = this;
  local_1418 = param_1;
  if (StatPtr_STAT_CalcSceneView == (FThreadSafeStaticStat<FStat_STAT_CalcSceneView>)0x0) {
    pFVar24 = ::FName::FName(&local_1404,"STAT_CalcSceneView");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_CalcSceneView>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CalcSceneView,*pFVar24,
                        L"CalcSceneView","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  bVar10 = false;
  bVar11 = false;
  local_1448.ComparisonIndex.Value = 0;
  local_1448.Number = 0;
  FVar34 = *(FName *)FVar25;
  bVar18 = false;
  bVar20 = false;
  if ((FVar34.ComparisonIndex.Value.Value == 0) && (FVar34.Number == 0)) {
LAB_147eb1607:
    bVar11 = bVar20;
    bVar10 = bVar18;
    bVar18 = false;
    FVar34 = local_1448;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1480.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1480._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar18 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1470.ComparisonIndex.Value = FVar34.ComparisonIndex.Value.Value;
        local_1470.Number = FVar34.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1470,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                   ,0x373);
        bVar10 = true;
        bVar11 = true;
        bVar18 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147eb1607;
    local_14a8 = FVar34;
    FThreadStats::AddMessage(FVar34,CycleScopeStart);
    bVar18 = true;
  }
  FSceneViewProjectionData::FSceneViewProjectionData((FSceneViewProjectionData *)local_13b8);
  pFVar27 = (FSceneView *)0x0;
  local_13b8._352_8_ = (FSceneViewStateInterface *)0x0;
  local_13b8._360_8_ = (FSceneViewStateInterface *)0x0;
  local_13b8._344_8_ = (FSceneViewFamily *)0x0;
  FSceneViewOwner::FSceneViewOwner((FSceneViewOwner *)(local_13b8 + 0x170),(AActor *)0x0);
  pUVar37 = local_1488;
  local_13b8._400_16_ = (undefined1  [16])FLinearColor::Transparent.field0_0x0;
  local_13b8._416_16_ = (undefined1  [16])FLinearColor::Transparent.field0_0x0;
  local_1108._s_0.Z = 0.0;
  local_13b8._432_16_ = (undefined1  [16])FLinearColor::White.field0_0x0;
  local_13b8._464_8_ = 0.0;
  local_13b8._472_8_ = 0.0;
  local_13b8._496_8_ = 0.0;
  local_13b8._504_8_ = 0.0;
  local_10e8 = (float)___xmm_00000000000000000000000042b40000;
  local_13b8._480_8_ = 0.0;
  local_13b8._488_8_ = 0.0;
  local_1108._s_0.X = 0.0;
  local_1108._s_0.Y = 0.0;
  local_10b8._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_10b8._8_8_ = _UNK_15076b1f8;
  local_13b8._384_4_ = -1;
  local_13b8._392_8_ = (FViewElementDrawer *)0x0;
  local_13b8._448_4_ = eSSP_FULL;
  local_13b8._452_4_ = -1;
  local_13b8._456_4_ = 100.0;
  local_13b8._512_8_ = 0;
  local_13b8._520_8_ = 0;
  local_13b8._544_8_ = 0;
  local_13b8._552_4_ = 0;
  local_13b8._556_4_ = 0x80;
  local_13b8._560_4_ = 0xffffffff;
  local_13b8._564_4_ = 0;
  local_13b8._576_8_ = (ForElementType<FSetElementId>)0x0;
  local_13b8._584_4_ = 0;
  local_1168._0_8_ = (FScriptContainerElement *)0x0;
  local_1168._8_8_ = 0xffffffff00000000;
  local_1168._32_8_ = (void *)0x0;
  local_1168._40_8_ = 0x8000000000;
  local_1168._48_8_ = 0xffffffff;
  local_1168._64_8_ = (ForElementType<FSetElementId>)0x0;
  local_1168._72_4_ = 0;
  local_1118 = (TIntPoint<int>_u_0)0xffffffffffffffff;
  local_1110 = 1.0;
  local_110c = -1.0;
  local_10f0 = 0x100;
  local_10ec = 90.0;
  fStack_10e4 = 1.0;
  fStack_10e0 = 1.0;
  uStack_10dc._1_3_ = (uint3)((ulonglong)_UNK_150ee30d8 >> 0x28);
  uStack_10dc = (uint)uStack_10dc._1_3_ << 8;
  local_10d8._0_1_ = false;
  local_10d8._1_1_ = false;
  local_10d8._2_1_ = false;
  local_10d8._3_1_ = false;
  local_10d4._0_1_ = false;
  local_10d4._1_1_ = false;
  local_10d0 = -1.0;
  local_10cc = 1.0;
  local_10c8 = 1.0;
  cVar19 = (**(code **)(local_1488->_padding_ + 0x2d8))(local_1488,local_13b8,local_1450,param_5);
  if (cVar19 == '\0') goto LAB_147eb240a;
  FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_10a8._s_0);
  (**(code **)(pUVar37->_padding_ + 0x2c0))(pUVar37,&local_10a8);
  local_13b8._464_8_ = local_10a8._s_0.X;
  local_13b8._472_8_ = local_10a8._s_0.Y;
  local_13b8._480_8_ = local_10a8._s_0.Z;
  local_13b8._488_8_ = local_1090;
  local_13b8._496_8_ = dStack_1088;
  local_13b8._504_8_ = local_1080;
  local_10ec = local_1078;
  local_10e8 = local_1074;
  local_10f0 = CONCAT11((char)(local_1040 >> 2),local_10f0._0_1_) & 0x1ff;
  fStack_10e4 = FMinimalViewInfo::CalculateFirstPersonFOVCorrectionFactor
                          ((FMinimalViewInfo *)&local_10a8._s_0);
  local_1410 = CONCAT44(local_106c,fStack_10e4);
  fStack_10e0 = local_106c;
  local_10cc = local_838;
  local_1408 = CONCAT31(local_1408._1_3_,(char)(local_1040 >> 1)) & 0xffffff01;
  uStack_10dc = local_1408;
  uVar35 = (ulonglong)_tls_index;
  local_10b8._0_8_ = local_828;
  local_10b8._8_8_ = uStack_820;
  local_10c8 = local_834;
  local_13b8._344_8_ = param_1;
  if (*(char *)(pUVar37->_padding_ + 0x400) == '\0') {
    local_1168._72_8_ = (ulonglong)(uint)local_1168._76_4_ << 0x20;
    if ((ForElementType<FSetElementId>)local_1168._64_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1168._64_8_);
    }
    iVar22 = SUB84(local_1168._8_8_,4);
    local_1168._8_8_ = local_1168._8_8_ & 0xffffffff00000000;
    if (iVar22 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_1168,0,(int *)(local_1168 + 0xc));
    }
    uVar17 = local_1168._44_4_;
    local_1168._48_8_ = 0xffffffff;
    local_1168._40_8_ = (ulonglong)(uint)local_1168._44_4_ << 0x20;
    if (0x80 < (uint)uVar17) {
      local_1168._40_8_ = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1168 + 0x10),0);
    }
    if ((void *)local_1168._32_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1168._32_8_);
    }
    if ((FScriptContainerElement *)local_1168._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1168._0_8_);
    }
    local_1168._32_8_ = (void *)0x0;
    local_1168._0_8_ = (FScriptContainerElement *)0x0;
    local_1168._56_8_ = 0;
    local_1168._8_8_ = 0;
    local_1168._40_8_ = 0x8000000000;
    local_1168._48_8_ = 0xffffffff;
    local_1168._64_8_ = (ForElementType<FSetElementId>)0x0;
    local_1168._76_4_ = 0;
    local_1168._72_4_ = 0;
    local_1168._16_8_ = 0;
    local_1168._24_8_ = 0;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar35 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_BuildHiddenComponentList ==
          (FThreadSafeStaticStat<_public:_virtual_class_FSceneView_*___cdecl_ULocalPlayer::CalcSceneView(FSceneViewFamily_*,UE::Math::TVector<double>_&,UE::Math::TRotator<double>_&,FViewport_*,FViewElementDrawer_*,int)_::_10_::FStat_STAT_BuildHiddenComponentList>
           )0x0) {
        pFVar24 = ::FName::FName(&local_13fc,"STAT_BuildHiddenComponentList");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BuildHiddenComponentList,*pFVar24,
                   L"STAT_BuildHiddenComponentList","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS0);
      }
      else {
        _Init_thread_footer(&::_TSS0);
      }
    }
    FVar26 = StatPtr_STAT_BuildHiddenComponentList;
    if (StatPtr_STAT_BuildHiddenComponentList ==
        (FThreadSafeStaticStat<_public:_virtual_class_FSceneView_*___cdecl_ULocalPlayer::CalcSceneView(FSceneViewFamily_*,UE::Math::TVector<double>_&,UE::Math::TRotator<double>_&,FViewport_*,FViewElementDrawer_*,int)_::_10_::FStat_STAT_BuildHiddenComponentList>
         )0x0) {
      pFVar24 = ::FName::FName(&local_13f4,"STAT_BuildHiddenComponentList");
      FVar26 = (FThreadSafeStaticStat<_public:_virtual_class_FSceneView_*___cdecl_ULocalPlayer::CalcSceneView(FSceneViewFamily_*,UE::Math::TVector<double>_&,UE::Math::TRotator<double>_&,FViewport_*,FViewElementDrawer_*,int)_::_10_::FStat_STAT_BuildHiddenComponentList>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BuildHiddenComponentList,
                            *pFVar24,L"STAT_BuildHiddenComponentList","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar32 = *(FName *)FVar26;
    local_1438.ComparisonIndex.Value = 0;
    local_1438.Number = 0;
    bVar8 = false;
    bVar20 = false;
    if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_147eb1b6e:
      bVar9 = false;
      FVar32 = local_1438;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_147c.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_147c._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
        bVar8 = false;
        bVar20 = true;
        if (-1 < CpuChannel->Enabled) {
          local_1468.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
          local_1468.Number = FVar32.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1468,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                     ,0x394);
          bVar8 = true;
          bVar20 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147eb1b6e;
      local_14a8 = FVar32;
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      bVar9 = true;
    }
    APlayerController::BuildHiddenComponentList
              ((APlayerController *)local_1488->_padding_,(TVector<double> *)&local_10a8._s_0,
               (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                *)(local_13b8 + 0x200));
    if (bVar20) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    param_3 = local_1498;
    if (bVar9) {
      FThreadStats::AddMessage(FVar32,CycleScopeEnd);
      param_3 = local_1498;
    }
  }
  pFVar28 = (FSceneView *)0x0;
  EngineShowFlagOrthographicOverride
            ((double)local_13b8._280_8_ < __real_3ff0000000000000,&param_1->EngineShowFlags);
  pFVar27 = ::operator_new(0x1c30);
  if (pFVar27 != (FSceneView *)0x0) {
    pFVar28 = FSceneView::FSceneView(pFVar27,(FSceneViewInitOptions *)local_13b8);
  }
  dVar7 = (pFVar28->ViewLocation).field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = (pFVar28->ViewLocation).field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar7;
  (param_2->field0_0x0)._s_0.Z = (pFVar28->ViewLocation).field0_0x0._s_0.Z;
  dVar7 = (pFVar28->ViewRotation).Yaw;
  param_3->Pitch = (pFVar28->ViewRotation).Pitch;
  param_3->Yaw = dVar7;
  param_3->Roll = (pFVar28->ViewRotation).Roll;
  if ((TOptional<UE::Math::TTransform<double>_> *)&local_8a8 != &pFVar28->PreviousViewTransform) {
    if (local_848 == '\0') {
      if ((pFVar28->PreviousViewTransform).bIsSet != false) {
        (pFVar28->PreviousViewTransform).bIsSet = false;
      }
    }
    else {
      (pFVar28->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[0] = local_8a8;
      (pFVar28->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[1] = dStack_8a0;
      (pFVar28->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[0] = local_898;
      (pFVar28->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dStack_890;
      (pFVar28->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[0] = local_888;
      (pFVar28->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[1] = dStack_880;
      (pFVar28->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[0] = local_878;
      (pFVar28->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[1] = dStack_870;
      (pFVar28->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[0] = local_868;
      (pFVar28->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dStack_860;
      (pFVar28->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[0] = local_858;
      (pFVar28->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dStack_850;
      (pFVar28->PreviousViewTransform).bIsSet = true;
    }
  }
  pFVar3 = (param_1->Views).AllocatorInstance.Data;
  local_14b0 = pFVar28;
  if (((pFVar3 <= (FScriptContainerElement *)&local_14b0) &&
      ((FScriptContainerElement *)&local_14b0 < pFVar3 + (longlong)(param_1->Views).ArrayMax * 8))
     && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar20)) {
    pcVar6 = (code *)swi(3);
    pFVar27 = (FSceneView *)(*pcVar6)();
    return pFVar27;
  }
  iVar22 = (param_1->Views).ArrayNum;
  piVar1 = &(param_1->Views).ArrayMax;
  if (iVar22 == *piVar1) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(param_1->Views).AllocatorInstance,piVar1);
  }
  (param_1->Views).ArrayNum = iVar22 + 1;
  *(FSceneView **)((param_1->Views).AllocatorInstance.Data + (longlong)iVar22 * 8) = local_14b0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar35 * 8) + 0x9d4c) < ::_TSS1)
     && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_PostprocessSettings ==
        (FThreadSafeStaticStat<_public:_virtual_class_FSceneView_*___cdecl_ULocalPlayer::CalcSceneView(FSceneViewFamily_*,UE::Math::TVector<double>_&,UE::Math::TRotator<double>_&,FViewport_*,FViewElementDrawer_*,int)_::_11_::FStat_STAT_PostprocessSettings>
         )0x0) {
      pFVar24 = ::FName::FName(&local_13ec,"STAT_PostprocessSettings");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostprocessSettings,*pFVar24,
                 L"STAT_PostprocessSettings","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                 ,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS1);
    }
    else {
      _Init_thread_footer(&::_TSS1);
    }
  }
  FVar29 = StatPtr_STAT_PostprocessSettings;
  if (StatPtr_STAT_PostprocessSettings ==
      (FThreadSafeStaticStat<_public:_virtual_class_FSceneView_*___cdecl_ULocalPlayer::CalcSceneView(FSceneViewFamily_*,UE::Math::TVector<double>_&,UE::Math::TRotator<double>_&,FViewport_*,FViewElementDrawer_*,int)_::_11_::FStat_STAT_PostprocessSettings>
       )0x0) {
    pFVar24 = ::FName::FName(&local_13e4,"STAT_PostprocessSettings");
    FVar29 = (FThreadSafeStaticStat<_public:_virtual_class_FSceneView_*___cdecl_ULocalPlayer::CalcSceneView(FSceneViewFamily_*,UE::Math::TVector<double>_&,UE::Math::TRotator<double>_&,FViewport_*,FViewElementDrawer_*,int)_::_11_::FStat_STAT_PostprocessSettings>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostprocessSettings,*pFVar24,
                          L"STAT_PostprocessSettings","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar29;
  bVar9 = false;
  bVar20 = false;
  local_1428.ComparisonIndex.Value = 0;
  local_1428.Number = 0;
  bVar21 = false;
  bVar8 = false;
  FVar31 = FVar32.ComparisonIndex.Value;
  uVar33 = FVar32.Number;
  if ((FVar31.Value == 0) && (uVar33 == 0)) {
LAB_147eb1e93:
    bVar9 = bVar21;
    bVar20 = bVar8;
    bVar8 = false;
    FVar32 = local_1428;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1478[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1478[0]._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
      bVar9 = false;
      bVar20 = true;
      bVar21 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1460.ComparisonIndex.Value = FVar31.Value;
        local_1460.Number = uVar33;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1460,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                   ,0x3a5);
        bVar9 = true;
        bVar20 = true;
        bVar21 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147eb1e93;
    local_1458 = FVar31.Value;
    uStack_1454 = uVar33;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar8 = true;
  }
  if (__CsvProfilerStat934 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("PostProcessSettings");
    __CsvProfilerStat934 = true;
  }
  FCsvProfiler::BeginExclusiveStat("PostProcessSettings","CSV_PostProcessSettings");
  local_13d8._s_0.X = local_10a8._s_0.X;
  local_13d8._s_0.Y = local_10a8._s_0.Y;
  local_13d8._s_0.Z = local_10a8._s_0.Z;
  FSceneView::StartFinalPostprocessSettings(local_14b0,(TVector<double> *)&local_13d8._s_0);
  pUVar37 = local_1488;
  local_14a8.ComparisonIndex.Value = 0;
  local_14a8.Number = 0;
  local_14a0 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
  local_1498 = (TRotator<double> *)0x0;
  this_00 = *(APlayerCameraManager **)(local_1488->_padding_ + 0x390);
  if (this_00 != (APlayerCameraManager *)0x0) {
    APlayerCameraManager::GetCachedPostProcessBlends
              (this_00,(TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> **)&local_14a8,
               &local_14a0,(TArray<EViewTargetBlendOrder,TSizedDefaultAllocator<32>_> **)&local_1498
              );
    uVar33 = 0;
    if (0 < local_14a0->ArrayNum) {
      lVar38 = 0;
      do {
        pTVar15 = local_1498;
        uVar36 = ~uVar33 >> 0x1f;
        uVar23 = 0;
        if ((int)uVar33 < *(int *)&local_1498->Yaw) {
          uVar23 = uVar36;
        }
        if ((uVar23 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          pFVar27 = (FSceneView *)(*pcVar6)();
          return pFVar27;
        }
        pTVar14 = local_14a0;
        if (*(int *)(lVar38 + (longlong)pTVar15->Pitch) == 0) {
          uVar23 = 0;
          if ((int)uVar33 < local_14a0->ArrayNum) {
            uVar23 = uVar36;
          }
          if ((uVar23 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar6 = (code *)swi(3);
            pFVar27 = (FSceneView *)(*pcVar6)();
            return pFVar27;
          }
          FVar13 = local_14a8;
          fVar2 = *(float *)((pTVar14->AllocatorInstance).Data + lVar38);
          uVar23 = 0;
          if ((int)uVar33 < *(int *)((longlong)local_14a8 + 8)) {
            uVar23 = uVar36;
          }
          if ((uVar23 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar6 = (code *)swi(3);
            pFVar27 = (FSceneView *)(*pcVar6)();
            return pFVar27;
          }
          FSceneView::OverridePostProcessSettings
                    (local_14b0,
                     (FPostProcessSettings *)((longlong)(int)uVar33 * 0x770 + *(longlong *)FVar13),
                     fVar2);
        }
        uVar33 = uVar33 + 1;
        lVar38 = lVar38 + 4;
        pUVar37 = local_1488;
      } while ((int)uVar33 < local_14a0->ArrayNum);
    }
  }
  FSceneView::OverridePostProcessSettings(local_14b0,&local_1028,local_1038);
  if (*(longlong *)(pUVar37->_padding_ + 0x390) != 0) {
    uVar33 = 0;
    if (0 < local_14a0->ArrayNum) {
      lVar38 = 0;
      do {
        pTVar15 = local_1498;
        uVar36 = ~uVar33 >> 0x1f;
        uVar23 = 0;
        if ((int)uVar33 < *(int *)&local_1498->Yaw) {
          uVar23 = uVar36;
        }
        if ((uVar23 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          pFVar27 = (FSceneView *)(*pcVar6)();
          return pFVar27;
        }
        pTVar14 = local_14a0;
        if (*(int *)(lVar38 + (longlong)pTVar15->Pitch) == 1) {
          uVar23 = 0;
          if ((int)uVar33 < local_14a0->ArrayNum) {
            uVar23 = uVar36;
          }
          if ((uVar23 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar6 = (code *)swi(3);
            pFVar27 = (FSceneView *)(*pcVar6)();
            return pFVar27;
          }
          FVar13 = local_14a8;
          fVar2 = *(float *)((pTVar14->AllocatorInstance).Data + lVar38);
          uVar23 = 0;
          if ((int)uVar33 < *(int *)((longlong)local_14a8 + 8)) {
            uVar23 = uVar36;
          }
          if ((uVar23 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar6 = (code *)swi(3);
            pFVar27 = (FSceneView *)(*pcVar6)();
            return pFVar27;
          }
          FSceneView::OverridePostProcessSettings
                    (local_14b0,
                     (FPostProcessSettings *)((longlong)(int)uVar33 * 0x770 + *(longlong *)FVar13),
                     fVar2);
        }
        uVar33 = uVar33 + 1;
        lVar38 = lVar38 + 4;
        pUVar37 = local_1488;
      } while ((int)uVar33 < local_14a0->ArrayNum);
    }
    plVar4 = *(longlong **)(pUVar37->_padding_ + 0x390);
    (**(code **)(*plVar4 + 0x868))(plVar4,&local_14b0->FinalPostProcessSettings);
  }
  bVar21 = UEngine::IsStereoscopic3D(GEngine,local_1450);
  if (bVar21) {
    FPostProcessSettings::FPostProcessSettings(&local_7d8);
    pUVar12 = GEngine;
    local_1490 = 1.0;
    if (((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar6 = (code *)swi(3);
      pFVar27 = (FSceneView *)(*pcVar6)();
      return pFVar27;
    }
    pIVar5 = (pUVar12->StereoRenderingDevice).Object;
    cVar19 = (**(code **)((longlong)*pIVar5 + 0x98))
                       (pIVar5,&local_7d8,local_14b0->StereoPass,local_14b0->StereoViewIndex);
    if (cVar19 != '\0') {
      FSceneView::OverridePostProcessSettings(local_14b0,&local_7d8,local_1490);
    }
    if (local_7d8.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_7d8.WeightedBlendables.Array.AllocatorInstance.Data);
    }
  }
  if (pUVar37->_padding_ != 0) {
    pUVar30 = Z_Construct_UClass_ADebugCameraController_NoRegister();
    bVar21 = FObjectPtr::IsA((FObjectPtr *)&pUVar37->_padding_,pUVar30);
    if ((bVar21) && ((ADebugCameraController *)pUVar37->_padding_ != (ADebugCameraController *)0x0))
    {
      ADebugCameraController::UpdateVisualizeBufferPostProcessing
                ((ADebugCameraController *)pUVar37->_padding_,&local_14b0->FinalPostProcessSettings)
      ;
    }
  }
  FSceneView::EndFinalPostprocessSettings(local_14b0,(FSceneViewInitOptions *)local_13b8);
  FCsvProfiler::EndExclusiveStat("PostProcessSettings");
  if (bVar20) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  pFVar16 = local_1418;
  uVar33 = 0;
  if (0 < (local_1418->ViewExtensions).ArrayNum) {
    lVar38 = 0;
    do {
      uVar23 = 0;
      if ((int)uVar33 < (pFVar16->ViewExtensions).ArrayNum) {
        uVar23 = ~uVar33 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar6 = (code *)swi(3);
        pFVar27 = (FSceneView *)(*pcVar6)();
        return pFVar27;
      }
      plVar4 = *(longlong **)((pFVar16->ViewExtensions).AllocatorInstance.Data + lVar38);
      (**(code **)(*plVar4 + 8))(plVar4,pFVar16,local_14b0);
      uVar33 = uVar33 + 1;
      lVar38 = lVar38 + 0x10;
    } while ((int)uVar33 < (pFVar16->ViewExtensions).ArrayNum);
  }
  pFVar27 = local_14b0;
  if (local_1028.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_1028.WeightedBlendables.Array.AllocatorInstance.Data);
  }
LAB_147eb240a:
  if (local_1168._12_4_ != -1) {
    local_1168._72_4_ = 0;
    if ((ForElementType<FSetElementId>)local_1168._64_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1168._64_8_);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1168);
  }
  local_13b8._584_4_ = 0;
  if ((ForElementType<FSetElementId>)local_13b8._576_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_13b8._576_8_);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_13b8 + 0x200));
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  return pFVar27;
}

// CalcSceneViewInitOptions @ 147eb2650

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

bool __thiscall
ULocalPlayer::CalcSceneViewInitOptions
          (ULocalPlayer *this,FSceneViewInitOptions *param_1,FViewport *param_2,
          FViewElementDrawer *param_3,int param_4)

{
  int *piVar1;
  TArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  EStereoscopicPass EVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_ULocalPlayer::CalcSceneViewInitOptions(FSceneViewInitOptions_&,FViewport_*,FViewElementDrawer_*,int)_::_2_::FStat_STAT_CalcSceneViewInitOptions>
  FVar18;
  double *pdVar19;
  double dVar20;
  IStereoRendering *pIVar21;
  UWorld *pUVar22;
  longlong lVar23;
  AActor *pAVar24;
  AWorldSettings *pAVar25;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  IConsoleManager *pIVar26;
  longlong *plVar27;
  TConsoleVariableData<int> *pTVar28;
  int iVar29;
  uint uVar30;
  TIntPoint<int>_u_0 TVar31;
  FName FVar32;
  uint uVar33;
  TConsoleVariableData<int> *pTVar34;
  uint uVar35;
  float fVar36;
  Type local_f4;
  FColor_u_0 local_f0 [2];
  FName local_e8;
  FName local_e0;
  longlong local_d0;
  LARGE_INTEGER local_c8;
  FStatMessage local_c0;
  FName local_b0;
  FName local_a8;
  double local_a0;
  undefined8 uStack_98;
  double local_90 [3];
  undefined8 uStack_78;
  double local_70 [3];
  undefined8 uStack_58;
  double local_50 [3];
  
  lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar35 = 0;
  if ((*(int *)(lVar23 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_CalcSceneViewInitOptions ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_ULocalPlayer::CalcSceneViewInitOptions(FSceneViewInitOptions_&,FViewport_*,FViewElementDrawer_*,int)_::_2_::FStat_STAT_CalcSceneViewInitOptions>
         )0x0) {
      pFVar17 = ::FName::FName(&local_b0,"STAT_CalcSceneViewInitOptions");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CalcSceneViewInitOptions,*pFVar17,
                 L"STAT_CalcSceneViewInitOptions","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                 ,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar18 = StatPtr_STAT_CalcSceneViewInitOptions;
  if (StatPtr_STAT_CalcSceneViewInitOptions ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_ULocalPlayer::CalcSceneViewInitOptions(FSceneViewInitOptions_&,FViewport_*,FViewElementDrawer_*,int)_::_2_::FStat_STAT_CalcSceneViewInitOptions>
       )0x0) {
    pFVar17 = ::FName::FName(&local_a8,"STAT_CalcSceneViewInitOptions");
    FVar18 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_ULocalPlayer::CalcSceneViewInitOptions(FSceneViewInitOptions_&,FViewport_*,FViewElementDrawer_*,int)_::_2_::FStat_STAT_CalcSceneViewInitOptions>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CalcSceneViewInitOptions,
                          *pFVar17,L"STAT_CalcSceneViewInitOptions","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar18;
  bVar7 = false;
  bVar6 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_147eb27d2:
    bVar7 = bVar9;
    bVar6 = bVar8;
    bVar8 = false;
    FVar32 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f0[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_e8.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                   ,0x2f8);
        bVar7 = true;
        bVar6 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147eb27d2;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar8 = true;
  }
  if ((((this->_padding_ != 0) && (0.0 < (this->Size).field0_0x0._s_0.X)) &&
      (0.0 < (this->Size).field0_0x0._s_0.Y)) && (param_2 != (FViewport *)0x0)) {
    if (this->bEmulateSplitscreen != false) {
      if ((*(int *)(lVar23 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        pIVar26 = IConsoleManager::Get();
        plVar27 = (longlong *)
                  (**(code **)((longlong)*pIVar26 + 0xc0))
                            (pIVar26,L"r.ScreenshotTest.EmulateSplitscreenMode",1);
        pTVar28 = (TConsoleVariableData<int> *)0x0;
        if (plVar27 != (longlong *)0x0) {
          pTVar28 = (TConsoleVariableData<int> *)(**(code **)(*plVar27 + 0x68))(plVar27);
        }
        CVarEmulateSplitscreenMode = pTVar28;
        _Init_thread_footer(&::_TSS1);
      }
      pTVar28 = CVarEmulateSplitscreenMode;
      uVar33 = uVar35;
      if (CVarEmulateSplitscreenMode == (TConsoleVariableData<int> *)0x0) {
LAB_147eb286a:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("EmulateSplitscreenMode >= 1 && EmulateSplitscreenMode <= 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                           ,0x304,
                           L"bEmulateSplitscreen should only be set by screenshot functional tests via r.ScreenshotTest.EmulateSplitscreenMode"
                          );
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
      }
      else {
        bVar9 = IsInParallelGameThread();
        if (bVar9) {
LAB_147eb2856:
          pTVar34 = (TConsoleVariableData<int> *)0x0;
        }
        else {
          bVar9 = IsInGameThread();
          pTVar34 = (TConsoleVariableData<int> *)&DAT_00000004;
          if (bVar9) goto LAB_147eb2856;
        }
        uVar33 = *(uint *)((longlong)pTVar34->ShadowedValue + (longlong)pTVar28->ShadowedValue);
        if (2 < uVar33 - 1) goto LAB_147eb286a;
      }
      if ((1 < (uint)param_4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(StereoViewIndex == 0 || StereoViewIndex == 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                             ,0x305,L"bEmulateSplitscreen only supports two splitscreen views"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      if (uVar33 == 1) {
        pdVar19 = local_50;
        if (param_4 == 0) {
          local_50[0] = 0.0;
          local_50[1] = 0.0;
        }
        else {
          local_70[2] = (double)___xmm_00000000000000003fe0000000000000;
          uStack_58 = _UNK_150978bb8;
          pdVar19 = local_70 + 2;
        }
        dVar20 = pdVar19[1];
        (this->Origin).field0_0x0._s_0.X = *pdVar19;
        (this->Origin).field0_0x0._s_0.Y = dVar20;
        (this->Size).field0_0x0._s_0.X = 0.5;
        dVar20 = 1.0;
      }
      else if (uVar33 == 2) {
        pdVar19 = local_70;
        if (param_4 == 0) {
          local_70[0] = 0.0;
          local_70[1] = 0.0;
        }
        else {
          local_90[2] = (double)___xmm_3fe00000000000000000000000000000;
          uStack_78 = _UNK_15076b778;
          pdVar19 = local_90 + 2;
        }
        dVar20 = pdVar19[1];
        (this->Origin).field0_0x0._s_0.X = *pdVar19;
        (this->Origin).field0_0x0._s_0.Y = dVar20;
        (this->Size).field0_0x0._s_0.X = 1.0;
        dVar20 = 0.5;
      }
      else {
        if (uVar33 != 3) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                             ,0x317,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          goto LAB_147eb29ec;
        }
        pdVar19 = local_90;
        if (param_4 == 0) {
          local_90[0] = 0.0;
          local_90[1] = 0.0;
        }
        else {
          local_a0 = ___xmm_3fe00000000000003fe0000000000000;
          uStack_98 = _UNK_150689678;
          pdVar19 = &local_a0;
        }
        dVar3 = pdVar19[1];
        dVar20 = 0.5;
        (this->Origin).field0_0x0._s_0.X = *pdVar19;
        (this->Origin).field0_0x0._s_0.Y = dVar3;
        (this->Size).field0_0x0._s_0.X = 0.5;
      }
      (this->Size).field0_0x0._s_0.Y = dVar20;
    }
LAB_147eb29ec:
    cVar11 = (**(code **)(this->_padding_ + 0x368))(this,param_2,param_1,param_4);
    if ((((cVar11 != '\0') && (iVar29 = (int)param_1->_padding_, -1 < iVar29)) &&
        (iVar13 = *(int *)((longlong)&param_1->_padding_ + 4), -1 < iVar13)) &&
       ((0 < (int)param_1->_padding_ - iVar29 &&
        (0 < *(int *)((longlong)&param_1->_padding_ + 4) - iVar13)))) {
      lVar23 = *(longlong *)(this->_padding_ + 0x390);
      if (lVar23 != 0) {
        if ((*(byte *)(lVar23 + 0x2810) & 8) != 0) {
          uVar5 = *(undefined8 *)(lVar23 + 0x2f4);
          *(undefined8 *)&(param_1->OverlayColor).field0_0x0 = *(undefined8 *)(lVar23 + 0x2ec);
          *(undefined8 *)((longlong)&(param_1->OverlayColor).field0_0x0 + 8) = uVar5;
          fVar36 = *(float *)(*(longlong *)(this->_padding_ + 0x390) + 0x2fc);
          if (__real_3f800000 <= fVar36) {
            fVar36 = __real_3f800000;
          }
          if (fVar36 <= 0.0) {
            fVar36 = 0.0;
          }
          (param_1->OverlayColor).field0_0x0._s_0.A = fVar36;
        }
        lVar23 = *(longlong *)(this->_padding_ + 0x390);
        if ((*(byte *)(lVar23 + 0x2810) & 0x20) != 0) {
          dVar20 = *(double *)(lVar23 + 0x308);
          dVar3 = *(double *)(lVar23 + 0x310);
          (param_1->ColorScale).field0_0x0._s_0.R = (float)*(double *)(lVar23 + 0x300);
          (param_1->ColorScale).field0_0x0._s_0.G = (float)dVar20;
          (param_1->ColorScale).field0_0x0._s_0.B = (float)dVar3;
          (param_1->ColorScale).field0_0x0._s_0.A = 1.0;
        }
        param_1->bInCameraCut =
             (bool)((byte)(*(uint *)(*(longlong *)(this->_padding_ + 0x390) + 0x2810) >> 0xb) & 1);
      }
      bVar9 = UEngine::IsStereoscopic3D(GEngine,param_2);
      if (bVar9) {
        pIVar21 = TSharedPtr<IStereoRendering,1>::operator->(&GEngine->StereoRenderingDevice);
        EVar12 = (**(code **)((longlong)*pIVar21 + 0x28))(pIVar21,param_4 != -1);
        param_1->StereoPass = EVar12;
      }
      if ((((AActor *)this->_padding_ == (AActor *)0x0) ||
          (pUVar22 = AActor::GetWorld((AActor *)this->_padding_), pUVar22 == (UWorld *)0x0)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PlayerController && PlayerController->GetWorld()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                             ,0x345,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      piVar1 = &(this->ViewStates).ArrayNum;
      pTVar2 = &this->ViewStates;
      uVar33 = 0;
      if (param_4 != -1) {
        uVar33 = param_4;
      }
      iVar29 = (uVar33 - *piVar1) + 1;
      if (0 < iVar29) {
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x38,8,iVar29,&pTVar2->AllocatorInstance,piVar1,
                            &(this->ViewStates).ArrayMax);
        DefaultConstructItems<FSceneViewStateReference,int>
                  ((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x38,iVar29);
      }
      uVar30 = ~uVar33 >> 0x1f;
      uVar14 = uVar35;
      if ((int)uVar33 < (this->ViewStates).ArrayNum) {
        uVar14 = uVar30;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      local_d0 = (longlong)(int)uVar33 * 0x38;
      if (*(longlong *)((pTVar2->AllocatorInstance).Data + local_d0 + 8) == 0) {
        lVar23 = (**(code **)(this->_padding_ + 0x180))(this);
        if (lVar23 == 0) {
          local_f4 = GMaxRHIFeatureLevel;
        }
        else {
          local_f4 = (Type)*(byte *)(lVar23 + 0x188);
        }
        uVar14 = uVar35;
        if ((int)uVar33 < (this->ViewStates).ArrayNum) {
          uVar14 = uVar30;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        FSceneViewStateReference::Allocate
                  ((FSceneViewStateReference *)((pTVar2->AllocatorInstance).Data + local_d0),
                   local_f4);
      }
      if ((int)uVar33 < (this->ViewStates).ArrayNum) {
        uVar35 = uVar30;
      }
      if ((uVar35 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      param_1->SceneViewStateInterface =
           *(FSceneViewStateInterface **)
            ((this->ViewStates).AllocatorInstance.Data + (longlong)(int)uVar33 * 0x38 + 8);
      pAVar24 = (AActor *)(**(code **)(*(longlong *)this->_padding_ + 0x7e0))();
      FSceneViewOwner::operator=(&param_1->ViewActor,pAVar24);
      param_1->PlayerIndex = this->ControllerId;
      param_1->ViewElementDrawer = param_3;
      (param_1->BackgroundColor).field0_0x0._s_0 =
           (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
      param_1->LODDistanceFactor = *(float *)(this->_padding_ + 0x3dc);
      param_1->StereoViewIndex = param_4;
      pAVar25 = AActor::GetWorldSettings((AActor *)this->_padding_);
      param_1->WorldToMetersScale = pAVar25->WorldToMeters;
      cVar11 = (**(code **)(param_2->_padding_ + 0x98))(param_2);
      if (cVar11 == '\0') {
        uVar15 = (**(code **)(param_2->_padding_ + 0x108))(param_2);
        uVar16 = (**(code **)(param_2->_padding_ + 0x100))(param_2);
        TVar31._s_0.Y = uVar15;
        TVar31._s_0.X = uVar16;
      }
      else {
        TVar31 = (TIntPoint<int>_u_0)0xffffffffffffffff;
      }
      (param_1->CursorPos).field0_0x0 = TVar31;
      pUVar22 = AActor::GetWorld((AActor *)this->_padding_);
      bVar9 = true;
      dVar20 = (pUVar22->OriginOffsetThisFrame).field0_0x0._s_0.Y;
      (param_1->OriginOffsetThisFrame).field0_0x0._s_0.X =
           (pUVar22->OriginOffsetThisFrame).field0_0x0._s_0.X;
      (param_1->OriginOffsetThisFrame).field0_0x0._s_0.Y = dVar20;
      (param_1->OriginOffsetThisFrame).field0_0x0._s_0.Z =
           (pUVar22->OriginOffsetThisFrame).field0_0x0._s_0.Z;
      goto LAB_147eb2e2f;
    }
  }
  bVar9 = false;
LAB_147eb2e2f:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar32 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c0.NameAndInfo.Index = FVar32.ComparisonIndex.Value;
      local_c0.NameAndInfo.Number = FVar32.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c8);
      local_c0.StatData.Pad[4] = '\0';
      local_c0.StatData.Pad[5] = '\0';
      local_c0.StatData.Pad[6] = '\0';
      local_c0.StatData.Pad[7] = '\0';
      local_c0.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_c0.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_c0.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_c0.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c0);
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
  return bVar9;
}

// CleanupViewState @ 147eb3d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayer::CleanupViewState(ULocalPlayer *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar1 = (this->ViewStates).ArrayNum;
  pFVar3 = (this->ViewStates).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->ViewStates).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSceneViewStateReference,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    plVar2 = *(longlong **)(pFVar3 + 8);
    if (plVar2 != (longlong *)0x0) {
      local_28 = *(undefined4 *)&param_1->DataPtr;
      uStack_24 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
      iStack_20 = param_1->Size;
      uStack_1c = *(undefined4 *)&param_1->field_0xc;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
    }
    pFVar3 = pFVar3 + 0x38;
  }
  return;
}

// Exec @ 147eb9170

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

bool __thiscall
ULocalPlayer::Exec(ULocalPlayer *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  FLockedViewState *pFVar10;
  ForAnyElementType FVar11;
  FName FVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined1 auStackY_508 [32];
  wchar_t *local_4b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_4b0;
  undefined1 local_4a0 [8];
  FString local_498;
  TArray<FString,TSizedDefaultAllocator<32>_> local_488;
  wchar_t *local_478;
  wchar_t *local_470;
  wchar_t local_468 [512];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_508;
  local_4b8 = param_2;
  bVar5 = FParse::Command(&local_4b8,L"LISTMOVEBODY",true);
  if (bVar5) {
    GShouldLogOutAFrameOfSetBodyTransform = true;
    return true;
  }
  bVar5 = FParse::Command(&local_4b8,L"r.LockView",true);
  if (bVar5) {
    uVar14 = 0;
    local_4b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4b0.ArrayNum = 0;
    local_4b0.ArrayMax = 0;
    ::FString::FString(&local_498,local_4b8);
    for (FVar11.Data = local_498.Data.AllocatorInstance.Data;
        FVar11.Data != local_498.Data.AllocatorInstance.Data + (longlong)local_498.Data.ArrayNum * 2
        ; FVar11.Data = FVar11.Data + 2) {
      if (*(short *)FVar11.Data == 0x3b) {
        if ((int)((longlong)FVar11.Data - (longlong)local_498.Data.AllocatorInstance.Data >> 1) !=
            -1) {
          ::FString::ParseIntoArray(&local_498,&local_4b0,L";",true);
          goto LAB_147eb936b;
        }
        break;
      }
    }
    if (((local_4b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_498) &&
        ((FScriptContainerElement *)&local_498 <
         local_4b0.AllocatorInstance.Data + (longlong)local_4b0.ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    iVar8 = local_4b0.ArrayNum;
    if (local_4b0.ArrayNum == local_4b0.ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_4b0.AllocatorInstance,&local_4b0.ArrayMax);
    }
    FVar11.Data = local_498.Data.AllocatorInstance.Data;
    pFVar15 = local_4b0.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    local_4b0.ArrayNum = iVar8 + 1;
    *(FScriptContainerElement **)pFVar15 = (FScriptContainerElement *)0x0;
    *(int *)(pFVar15 + 8) = local_498.Data.ArrayNum;
    if (local_498.Data.ArrayNum == 0) {
      *(int *)(pFVar15 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_498.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,local_498.Data.ArrayNum,
                 (int *)(pFVar15 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar15,FVar11.Data,(longlong)local_498.Data.ArrayNum * 2);
    }
LAB_147eb936b:
    pvVar4 = ThreadLocalStoragePointer;
    uVar3 = _UNK_150631d98;
    uVar2 = ___xmm_00000000ffffffff0000008000000000;
    if (0 < local_4b0.ArrayNum) {
      do {
        local_488.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_488.ArrayNum = 0;
        local_488.ArrayMax = 0;
        uVar9 = 0;
        if ((int)uVar14 < local_4b0.ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
        ::FString::ParseIntoArrayWS
                  ((FString *)(local_4b0.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10),
                   &local_488,(wchar_t *)0x0,true);
        if ((*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x9d4c) <
             `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::
             __l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::
           __l2::_thread_safe_static_guard_0__ == -1)) {
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.Viewpoints._0_8_ = 0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationCacheValue.ViewPoint.Location.field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationCacheValue.ViewPoint.Location.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationCacheValue.ViewPoint.Location.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationCacheValue.ViewPoint.Rotation.Roll =
               UE::Math::TRotator<double>::ZeroRotator.Roll;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.Viewpoints._8_8_ = 0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.Viewpoints._32_8_ = 0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.Viewpoints._40_4_ = 0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.Viewpoints._44_4_ = 0x80;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.Viewpoints._48_4_ = 0xffffffff;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.Viewpoints._52_4_ = 0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.Viewpoints._64_8_ = 0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.Viewpoints._72_4_ = 0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates._padding_ =
               (longlong)&___7__FUObjectAnnotationSparse_UFPlayerState_FLockedViewState___00__6B_;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationMapCritical.Mutex.Mutex.Ptr =
               (FWindowsSharedMutex)(SRWLOCK)0x0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationCacheCritical.Mutex.Mutex.Ptr =
               (FWindowsSharedMutex)(SRWLOCK)0x0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationMap._0_8_ = 0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationMap._8_8_ = 0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationMap._32_8_ = 0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationMap._40_8_ = uVar2;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationMap._48_8_ = uVar3;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationMap._64_8_ = 0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationMap._72_4_ = 0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationCacheKey = (UObjectBase *)0x0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationCacheValue.ViewPoint.FOV = 90.0;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationCacheValue.ViewPoint.Rotation.Pitch =
               UE::Math::TRotator<double>::ZeroRotator.Pitch;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationCacheValue.ViewPoint.Rotation.Yaw =
               UE::Math::TRotator<double>::ZeroRotator.Yaw;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.AnnotationCacheValue.bLocked = false;
          `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State.PlayerStates.bRegistered = false;
          atexit(`FLockedViewState::Get'::__l2::_dynamic_atexit_destructor_for__State__);
          _Init_thread_footer(&`public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        FLockedViewState::LockView
                  (&`public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'
                    ::__l2::State,
                   (ULocalPlayer *)&this[-1].SlateOperations.DetectDragForMouseButton.KeyDetails,
                   &local_488);
        DestructItems<FString,int>((FString *)local_488.AllocatorInstance.Data,local_488.ArrayNum);
        if (local_488.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_488.AllocatorInstance.Data);
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < local_4b0.ArrayNum);
    }
    iVar8 = local_4b0.ArrayNum;
    if (1 < local_4b0.ArrayNum) {
      pFVar10 = FLockedViewState::Get();
      FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::RemoveAnnotation
                (&pFVar10->PlayerStates,
                 (UObjectBase *)&this[-1].SlateOperations.DetectDragForMouseButton.KeyDetails);
      iVar8 = local_4b0.ArrayNum;
    }
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
      iVar8 = local_4b0.ArrayNum;
    }
    DestructItems<FString,int>((FString *)local_4b0.AllocatorInstance.Data,iVar8);
    if (local_4b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b0.AllocatorInstance.Data);
      return true;
    }
  }
  else {
    bVar5 = FParse::Command(&local_4b8,L"r.ResetViewState",true);
    if (bVar5) {
      iVar8 = *(int *)((longlong)&(this->ViewportOffset).field0_0x0 + 8);
      lVar13 = *(longlong *)&(this->ViewportOffset).field0_0x0;
      lVar16 = (longlong)iVar8 * 0x38 + lVar13;
      while( true ) {
        if (*(int *)((longlong)&(this->ViewportOffset).field0_0x0 + 8) != iVar8) {
          `TCheckedPointerIterator<FSceneViewStateReference,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_4a0);
        }
        if (lVar13 == lVar16) break;
        if (*(longlong **)(lVar13 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar13 + 8) + 0x50))();
        }
        lVar13 = lVar13 + 0x38;
      }
    }
    else {
      bVar5 = FParse::Command(&local_4b8,L"LISTAWAKEBODIES",true);
      if (bVar5) {
        lVar13 = (*(code *)this[-1].SlateOperations.DetectDragForMouseButton.KeyDetails.Object[2].
                           Key.KeyName)
                           (&this[-1].SlateOperations.DetectDragForMouseButton.KeyDetails);
        FPhysScene_Chaos::ListAwakeRigidBodies(*(FPhysScene_Chaos **)(lVar13 + 0x2a0),true);
        return true;
      }
      bVar5 = FParse::Command(&local_4b8,L"LISTSIMBODIES",true);
      if (bVar5) {
        lVar13 = (*(code *)this[-1].SlateOperations.DetectDragForMouseButton.KeyDetails.Object[2].
                           Key.KeyName)
                           (&this[-1].SlateOperations.DetectDragForMouseButton.KeyDetails);
        FPhysScene_Chaos::ListAwakeRigidBodies(*(FPhysScene_Chaos **)(lVar13 + 0x2a0),false);
        return true;
      }
      bVar5 = FParse::Command(&local_4b8,L"MOVECOMPTIMES",true);
      if (bVar5) {
        GShouldLogOutAFrameOfMoveComponent = true;
      }
      else {
        bVar5 = FParse::Command(&local_4b8,L"LISTSKELMESHES",true);
        if (bVar5) {
          bVar5 = HandleListSkelMeshesCommand
                            ((ULocalPlayer *)
                             &this[-1].SlateOperations.DetectDragForMouseButton.KeyDetails,local_4b8
                             ,param_3);
          return bVar5;
        }
        bVar5 = FParse::Command(&local_4b8,L"LISTPAWNCOMPONENTS",true);
        if (bVar5) {
          bVar5 = HandleListPawnComponentsCommand
                            ((ULocalPlayer *)
                             &this[-1].SlateOperations.DetectDragForMouseButton.KeyDetails,local_4b8
                             ,param_3);
          return bVar5;
        }
        bVar5 = FParse::Command(&local_4b8,L"EXEC",true);
        if (bVar5) {
          local_470 = local_4b8;
          bVar5 = FParse::Token(&local_470,local_468,0x200,false,L'\0');
          if (bVar5) {
            ExecMacro((ULocalPlayer *)&this[-1].SlateOperations.DetectDragForMouseButton.KeyDetails,
                      local_468,param_3);
            return true;
          }
        }
        else {
          bVar5 = FParse::Command(&local_4b8,L"TOGGLEDRAWEVENTS",true);
          if (bVar5) {
            bVar5 = GetEmitDrawEvents();
            if (bVar5) {
              SetEmitDrawEvents(false);
              if (2 < (byte)LogEngine._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
                return true;
              }
            }
            else {
              SetEmitDrawEvents(true);
              if (2 < (byte)LogEngine._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
                return true;
              }
            }
          }
          else {
            bVar5 = FParse::Command(&local_4b8,L"TOGGLESTREAMINGVOLUMES",true);
            if (bVar5) {
              local_478 = local_4b8;
              bVar5 = FParse::Command(&local_478,L"ON",true);
              if (bVar5) {
                lVar13 = (*(code *)this[-1].SlateOperations.DetectDragForMouseButton.KeyDetails.
                                   Object[2].Key.KeyName)
                                   (&this[-1].SlateOperations.DetectDragForMouseButton.KeyDetails);
                *(undefined4 *)(lVar13 + 0x88c) = 0;
                return true;
              }
              bVar5 = FParse::Command(&local_478,L"OFF",true);
              FVar12 = this[-1].SlateOperations.DetectDragForMouseButton.KeyDetails.Object[2].Key.
                       KeyName;
              if (!bVar5) {
                lVar13 = (*(code *)FVar12)(&this[-1].SlateOperations.DetectDragForMouseButton.
                                            KeyDetails);
                FVar12 = this[-1].SlateOperations.DetectDragForMouseButton.KeyDetails.Object[2].Key.
                         KeyName;
                if (*(int *)(lVar13 + 0x88c) == -1) {
                  lVar13 = (*(code *)FVar12)();
                  *(undefined4 *)(lVar13 + 0x88c) = 0;
                  return true;
                }
              }
              lVar13 = (*(code *)FVar12)(&this[-1].SlateOperations.DetectDragForMouseButton.
                                          KeyDetails);
              *(undefined4 *)(lVar13 + 0x88c) = 0xffffffff;
              return true;
            }
            lVar13 = (this->CachedUniqueNetId)._padding_;
            if ((lVar13 == 0) ||
               (cVar7 = (**(code **)(*(longlong *)(lVar13 + 0x68) + 8))
                                  (lVar13 + 0x68,param_1,local_4b8,param_3), cVar7 == '\0')) {
              bVar5 = UPlayer::Exec((UPlayer *)this,param_1,local_4b8,param_3);
              return bVar5;
            }
          }
        }
      }
    }
  }
  return true;
}

// ExecMacro @ 147eb9950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayer::ExecMacro(ULocalPlayer *this,wchar_t *param_1,FOutputDevice *param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FVar10.Data = (FScriptContainerElement *)0x0;
  if (param_1 != (wchar_t *)0x0) {
    wVar1 = *param_1;
    pwVar3 = param_1;
    while (wVar1 != L'\0') {
      pwVar8 = pwVar3 + 1;
      if (((wchar_t)(wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20)) == 0x42) &&
         (iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar8,L"inaries",7), iVar5 == 0)) {
        if (pwVar3 != (wchar_t *)0x0) goto LAB_147eb9a22;
        break;
      }
      pwVar3 = pwVar8;
      wVar1 = *pwVar8;
    }
  }
  pFVar6 = ::FString::FString(&local_38,L"../../Binaries/");
  ::FString::ConcatFC(&local_58,pFVar6,param_1);
  iVar5 = local_58.Data.ArrayNum;
  FVar10.Data = local_58.Data.AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  param_1 = L"";
  if (iVar5 != 0) {
    param_1 = (wchar_t *)FVar10.Data;
  }
LAB_147eb9a22:
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar4 = FFileHelper::LoadFileToString(&local_48,param_1,None,0);
  if (bVar4) {
    if (4 < (byte)LogPlayerManagement._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_res10 = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      local_res10 = local_48.Data.AllocatorInstance.Data;
    }
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    bVar4 = FParse::Line((wchar_t **)&local_res10,&local_58,false);
    if (bVar4) {
      do {
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar9.Data = local_58.Data.AllocatorInstance.Data;
        }
        pcVar2 = *(code **)(this->_padding_ + 8);
        uVar7 = (**(code **)(this->_padding_ + 0x180))(this);
        (*pcVar2)(&this->_padding_,uVar7,FVar9.Data,param_2);
        bVar4 = FParse::Line((wchar_t **)&local_res10,&local_58,false);
      } while (bVar4);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else if (2 < (byte)LogExec._0_1_) {
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              ((FLogScopedCategoryAndVerbosityOverride *)&local_58,(FName)LogExec._4_8_,Warning);
    FOutputDevice::LogfImpl(param_2,L"Can\'t find file \'%s\'");
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
              ((FLogScopedCategoryAndVerbosityOverride *)&local_58);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  return;
}

// Exec_Editor @ 147eb9b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ULocalPlayer::Exec_Editor
          (ULocalPlayer *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  return false;
}

// GetCachedUniqueNetId @ 147ebef90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUniqueNetIdRepl * __thiscall
ULocalPlayer::GetCachedUniqueNetId(ULocalPlayer *this,FUniqueNetIdRepl *__return_storage_ptr__)

{
  __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  ::
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&__return_storage_ptr__->_padding_,
             (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&(this->CachedUniqueNetId)._padding_);
  __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (__return_storage_ptr__->ReplicationBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ReplicationBytes).ArrayNum = 0;
  (__return_storage_ptr__->ReplicationBytes).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetConnectionIdentifier @ 147ebf3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall ULocalPlayer::GetConnectionIdentifier(ULocalPlayer *this)

{
  return this->ConnectionIdentifier;
}

// GetGameInstance @ 147ec02f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameInstance * __thiscall ULocalPlayer::GetGameInstance(ULocalPlayer *this)

{
  UGameViewportClient *pUVar1;
  
  pUVar1 = (this->ViewportClient).field0_0x0.DebugPtr;
  if (pUVar1 == (UGameViewportClient *)0x0) {
    return (UGameInstance *)0x0;
  }
  return (pUVar1->GameInstance).field0_0x0.DebugPtr;
}

// GetGameLoginOptions @ 147ec0310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
ULocalPlayer::GetGameLoginOptions(ULocalPlayer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetIndexInGameInstance @ 147ec0460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall ULocalPlayer::GetIndexInGameInstance(ULocalPlayer *this)

{
  UGameViewportClient *this_00;
  FScriptContainerElement *pFVar1;
  UGameInstance *this_01;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  this_00 = (this->ViewportClient).field0_0x0.DebugPtr;
  if ((this_00 != (UGameViewportClient *)0x0) &&
     (this_01 = UGameViewportClient::GetGameInstance(this_00), this_01 != (UGameInstance *)0x0)) {
    pTVar2 = UGameInstance::GetLocalPlayers(this_01);
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    for (pFVar3 = pFVar1; pFVar3 != pFVar1 + (longlong)pTVar2->ArrayNum * 8; pFVar3 = pFVar3 + 8) {
      if (*(ULocalPlayer **)pFVar3 == this) {
        return (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
      }
    }
  }
  return -1;
}

// GetLocalPlayerIndex @ 147ec14a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall ULocalPlayer::GetLocalPlayerIndex(ULocalPlayer *this)

{
  UGameViewportClient *this_00;
  FScriptContainerElement *pFVar1;
  UGameInstance *this_01;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  this_00 = (this->ViewportClient).field0_0x0.DebugPtr;
  if ((this_00 != (UGameViewportClient *)0x0) &&
     (this_01 = UGameViewportClient::GetGameInstance(this_00), this_01 != (UGameInstance *)0x0)) {
    pTVar2 = UGameInstance::GetLocalPlayers(this_01);
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    for (pFVar3 = pFVar1; pFVar3 != pFVar1 + (longlong)pTVar2->ArrayNum * 8; pFVar3 = pFVar3 + 8) {
      if (*(ULocalPlayer **)pFVar3 == this) {
        return (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
      }
    }
  }
  return -1;
}

// GetNickname @ 147ec2340

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

FString * __thiscall ULocalPlayer::GetNickname(ULocalPlayer *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  UOnlineEngineInterface *pUVar5;
  FString *pFVar6;
  undefined1 auStack_78 [32];
  ForAnyElementType local_58;
  undefined8 local_50;
  FUniqueNetIdWrapper local_48;
  void *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar4 = (**(code **)(this->_padding_ + 0x180))();
  if (lVar4 != 0) {
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    pUVar5 = UOnlineEngineInterface::Get();
    cVar2 = (**(code **)(*(longlong *)pUVar5 + 0x310))
                      (pUVar5,lVar4,(this->PlatformUserId).InternalId,&local_58);
    if (cVar2 != '\0') {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data;
      (__return_storage_ptr__->Data).ArrayNum = (int)local_50;
      (__return_storage_ptr__->Data).ArrayMax = local_50._4_4_;
      return __return_storage_ptr__;
    }
    (**(code **)(this->_padding_ + 0x360))(this,&local_48);
    bVar3 = FUniqueNetIdWrapper::IsValid(&local_48);
    if (bVar3) {
      pUVar5 = UOnlineEngineInterface::Get();
      (**(code **)(*(longlong *)pUVar5 + 0x308))(pUVar5,__return_storage_ptr__,lVar4,&local_48);
      local_48._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
      if (local_28 != (void *)0x0) {
        FMemory::Free(local_28);
      }
      if ((1 < local_48.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_48.Variant.TypeIndex])(&local_48.Variant);
      if (local_58.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_58.Data);
      return __return_storage_ptr__;
    }
    local_48._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
    if ((1 < local_48.Variant.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar1)();
      return pFVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_48.Variant.TypeIndex])(&local_48.Variant);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetPixelBoundingBox @ 147ec2e50

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

bool __thiscall
ULocalPlayer::GetPixelBoundingBox
          (ULocalPlayer *this,TBox<double> *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,TVector2<float> *param_4)

{
  UGameViewportClient *pUVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStackY_1c8 [32];
  FSceneViewProjectionData local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pUVar1 = (this->ViewportClient).field0_0x0.DebugPtr;
  if (((pUVar1 != (UGameViewportClient *)0x0) && (pUVar1->Viewport != (FViewport *)0x0)) &&
     (this->_padding_ != 0)) {
    FSceneViewProjectionData::FSceneViewProjectionData(&local_198);
    cVar2 = (**(code **)(this->_padding_ + 0x368))
                      (this,((this->ViewportClient).field0_0x0.DebugPtr)->Viewport,&local_198,
                       0xffffffff);
    if (cVar2 != '\0') {
      bVar3 = GetPixelBoundingBox(&local_198,param_1,param_2,param_3,param_4);
      return bVar3;
    }
  }
  return false;
}

// GetPixelBoundingBox @ 147ec2f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
ULocalPlayer::GetPixelBoundingBox
          (FSceneViewProjectionData *param_1,TBox<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,TVector2<float> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double *pdVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined4 local_240;
  int iStack_23c;
  int local_238;
  int iStack_234;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_268;
  uVar7 = *(ulonglong *)&(param_1->ConstrainedViewRect).field0_0x0;
  uVar8 = *(undefined8 *)((longlong)&(param_1->ConstrainedViewRect).field0_0x0 + 8);
  uVar10 = 0;
  local_240 = (undefined4)uVar7;
  iStack_23c = (int)(uVar7 >> 0x20);
  local_238 = (int)uVar8;
  iStack_234 = (int)((ulonglong)uVar8 >> 0x20);
  if (param_5 != (TVector2<float> *)0x0) {
    local_238 = (int)(param_5->field0_0x0)._s_0.X;
    local_240 = 0;
    iStack_23c = 0;
    iStack_234 = (int)(param_5->field0_0x0)._s_0.Y;
    local_248 = CONCAT44(iStack_234,local_238);
    uVar7 = uVar10;
    uVar8 = local_248;
  }
  local_210 = (param_2->Min).field0_0x0._s_0.X;
  local_208 = (param_2->Min).field0_0x0._s_0.Y;
  local_200 = (param_2->Max).field0_0x0._s_0.Z;
  local_1f0 = (param_2->Max).field0_0x0._s_0.Y;
  local_228 = (param_2->Min).field0_0x0._s_0.X;
  dStack_220 = (param_2->Min).field0_0x0._s_0.Y;
  local_218 = (param_2->Min).field0_0x0._s_0.Z;
  local_1e0 = (param_2->Max).field0_0x0._s_0.X;
  local_1e8 = (param_2->Min).field0_0x0._s_0.Z;
  local_180 = (param_2->Max).field0_0x0._s_0.X;
  dStack_178 = (param_2->Max).field0_0x0._s_0.Y;
  local_170 = (param_2->Max).field0_0x0._s_0.Z;
  local_1f8 = local_210;
  local_1d8 = local_208;
  local_1d0 = local_1e8;
  local_1c8 = local_1e0;
  local_1c0 = local_1f0;
  local_1b8 = local_1e8;
  local_1b0 = local_1e0;
  local_1a8 = local_208;
  local_1a0 = local_200;
  local_198 = local_210;
  local_190 = local_1f0;
  local_188 = local_200;
  FSceneViewProjectionData::ComputeViewProjectionMatrix(param_1,&local_168);
  pdVar6 = &dStack_220;
  (param_3->field0_0x0)._s_0.X = 3.4028234663852886e+38;
  lVar9 = 8;
  (param_3->field0_0x0)._s_0.Y = 3.4028234663852886e+38;
  (param_4->field0_0x0)._s_0.X = 1.1754943508222875e-38;
  (param_4->field0_0x0)._s_0.Y = 1.1754943508222875e-38;
  dVar4 = __real_3fe0000000000000;
  dVar3 = __real_3ff0000000000000;
  do {
    dVar16 = pdVar6[-1];
    dVar2 = *pdVar6;
    dVar1 = pdVar6[1];
    dVar15 = dVar2 * local_168.M[1][3] + dVar16 * local_168.M[0][3] + dVar1 * local_168.M[2][3] +
             dVar3 * local_168.M[3][3];
    if (0.0 < dVar15) {
      iVar5 = (int)uVar8 - (int)uVar7;
      uVar10 = (ulonglong)((int)uVar10 + 1);
      dVar15 = (double)(float)(dVar3 / dVar15);
      fVar11 = (float)iVar5;
      fVar14 = (float)(((dVar2 * local_168.M[1][0] + dVar16 * local_168.M[0][0] +
                         dVar1 * local_168.M[2][0] + dVar3 * local_168.M[3][0]) * dVar4 * dVar15 +
                       dVar4) * (double)iVar5 + (double)(int)uVar7);
      if (fVar11 <= fVar14) {
        fVar14 = fVar11;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      dVar17 = (double)fVar14;
      fVar11 = (float)(iStack_234 - iStack_23c);
      fVar14 = (float)((dVar4 - (dVar2 * local_168.M[1][1] + dVar16 * local_168.M[0][1] +
                                 dVar1 * local_168.M[2][1] + dVar3 * local_168.M[3][1]) * dVar4 *
                                dVar15) * (double)(iStack_234 - iStack_23c) + (double)iStack_23c);
      if (fVar11 <= fVar14) {
        fVar14 = fVar11;
      }
      dVar1 = (param_3->field0_0x0)._s_0.X;
      dVar15 = dVar17;
      if (dVar1 <= dVar17) {
        dVar15 = dVar1;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      (param_3->field0_0x0)._s_0.X = dVar15;
      dVar16 = (double)fVar14;
      dVar1 = (param_3->field0_0x0)._s_0.Y;
      dVar15 = dVar16;
      if (dVar1 <= dVar16) {
        dVar15 = dVar1;
      }
      (param_3->field0_0x0)._s_0.Y = dVar15;
      dVar1 = *(double *)((longlong)&param_4->field0_0x0 + 8);
      uVar12 = SUB84(dVar1,0);
      dVar15 = (param_4->field0_0x0)._s_0.X;
      if (dVar17 <= dVar15) {
        dVar17 = dVar15;
      }
      uVar13 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= dVar16) {
        uVar12 = SUB84(dVar16,0);
        uVar13 = (int)((ulonglong)dVar16 >> 0x20);
      }
      (param_4->field0_0x0)._s_0.X = dVar17;
      (param_4->field0_0x0)._s_0.Y = (double)CONCAT44(uVar13,uVar12);
    }
    pdVar6 = pdVar6 + 3;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  return 1 < (int)uVar10;
}

// GetPixelPoint @ 147ec32d0

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

bool __thiscall
ULocalPlayer::GetPixelPoint
          (ULocalPlayer *this,TVector<double> *param_1,TVector2<double> *param_2,
          TVector2<float> *param_3)

{
  UGameViewportClient *pUVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_1a8 [32];
  FSceneViewProjectionData local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pUVar1 = (this->ViewportClient).field0_0x0.DebugPtr;
  if (((pUVar1 != (UGameViewportClient *)0x0) && (pUVar1->Viewport != (FViewport *)0x0)) &&
     (this->_padding_ != 0)) {
    FSceneViewProjectionData::FSceneViewProjectionData(&local_188);
    cVar2 = (**(code **)(this->_padding_ + 0x368))
                      (this,((this->ViewportClient).field0_0x0.DebugPtr)->Viewport,&local_188,
                       0xffffffff);
    if (cVar2 != '\0') {
      bVar3 = GetPixelPoint(&local_188,param_1,param_2,param_3);
      return bVar3;
    }
  }
  return false;
}

// GetPixelPoint @ 147ec3390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
ULocalPlayer::GetPixelPoint
          (FSceneViewProjectionData *param_1,TVector<double> *param_2,TVector2<double> *param_3,
          TVector2<float> *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_138 [32];
  int local_118;
  int local_114;
  ulonglong local_110;
  TVector<double> *local_108;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar5 = *(undefined8 *)&(param_1->ConstrainedViewRect).field0_0x0;
  uVar4 = *(ulonglong *)((longlong)&(param_1->ConstrainedViewRect).field0_0x0 + 8);
  iVar6 = (int)((ulonglong)uVar5 >> 0x20);
  local_114 = (int)uVar5;
  if (param_4 != (TVector2<float> *)0x0) {
    uVar5 = 0;
    iVar6 = 0;
    local_114 = 0;
    uVar4 = CONCAT44((int)(param_4->field0_0x0)._s_0.Y,(int)(param_4->field0_0x0)._s_0.X);
  }
  iVar3 = local_114;
  local_110 = uVar4 >> 0x20;
  local_118 = local_114;
  local_108 = param_2;
  FSceneViewProjectionData::ComputeViewProjectionMatrix(param_1,&local_f8);
  dVar10 = (local_108->field0_0x0)._s_0.X;
  dVar2 = (local_108->field0_0x0)._s_0.Y;
  dVar8 = (local_108->field0_0x0)._s_0.Z;
  dVar1 = local_f8.M[1][3] * dVar2 + local_f8.M[0][3] * dVar10 + local_f8.M[2][3] * dVar8 +
          local_f8.M[3][3] * __real_3ff0000000000000;
  iVar7 = (int)uVar5;
  if (dVar1 == 0.0) {
    local_118 = local_114;
    iVar7 = iVar3;
    dVar1 = __real_3f1a36e2e0000000;
  }
  dVar9 = __real_3fe0000000000000 -
          (local_f8.M[1][1] * dVar2 + local_f8.M[0][1] * dVar10 + local_f8.M[2][1] * dVar8 +
          local_f8.M[3][1] * __real_3ff0000000000000) * __real_3fe0000000000000 *
          (double)(float)(__real_3ff0000000000000 / dVar1);
  dVar8 = ((local_f8.M[1][0] * dVar2 + local_f8.M[0][0] * dVar10 + local_f8.M[2][0] * dVar8 +
           local_f8.M[3][0] * __real_3ff0000000000000) * __real_3fe0000000000000 *
           (double)(float)(__real_3ff0000000000000 / dVar1) + __real_3fe0000000000000) *
          (double)((int)uVar4 - iVar7) + (double)local_118;
  (param_3->field0_0x0)._s_0.X = dVar8;
  dVar10 = dVar9 * (double)((int)local_110 - iVar6) + (double)iVar6;
  (param_3->field0_0x0)._s_0.Y = dVar10;
  if (0.0 > dVar1) {
    (param_3->field0_0x0)._s_0.X = (double)(int)uVar4 - dVar8;
    (param_3->field0_0x0)._s_0.Y = (double)(int)local_110 - dVar10;
  }
  return 0.0 <= dVar1;
}

// GetPlatformUserIndex @ 147ec3620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall ULocalPlayer::GetPlatformUserIndex(ULocalPlayer *this)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  IPlatformInputDeviceMapper *pIVar2;
  
  iVar1 = (this->PlatformUserId).InternalId;
  pIVar2 = IPlatformInputDeviceMapper::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000147ec3645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)(pIVar2,iVar1,UNRECOVERED_JUMPTABLE);
  return iVar1;
}

// GetPreferredUniqueNetId @ 147ec3bf0

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

FUniqueNetIdRepl * __thiscall
ULocalPlayer::GetPreferredUniqueNetId(ULocalPlayer *this,FUniqueNetIdRepl *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  FUniqueNetIdRepl *pFVar4;
  undefined1 auStack_98 [32];
  FUniqueNetIdWrapper local_78;
  void *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  ::
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            (&local_78.Variant,
             (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&(this->CachedUniqueNetId)._padding_);
  local_78._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  local_58 = (void *)0x0;
  local_50 = 0;
  bVar2 = FUniqueNetIdWrapper::IsValid(&local_78);
  local_78._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (1 < local_78.Variant.TypeIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FUniqueNetIdRepl *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_78.Variant.TypeIndex])(&local_78.Variant);
  if (bVar2) {
    __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
    ::
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)&__return_storage_ptr__->_padding_,
               (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)&(this->CachedUniqueNetId)._padding_);
    __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    (__return_storage_ptr__->ReplicationBytes).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ReplicationBytes).ArrayNum = 0;
    (__return_storage_ptr__->ReplicationBytes).ArrayMax = 0;
  }
  else {
    (**(code **)(this->_padding_ + 0x358))(this,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147ec46b0

UClass * __cdecl ULocalPlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalPlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalPlayer",
               &Z_Registration_Info_UClass_ULocalPlayer.InnerSingleton,
               StaticRegisterNativesULocalPlayer,0x2e0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalPlayer>,InternalVTableHelperCtorCaller<ULocalPlayer>,
               local_res8,UPlayer::StaticClass,UEngine::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalPlayer.InnerSingleton;
}

// GetProjectionData @ 147ec48e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

bool __thiscall
ULocalPlayer::GetProjectionData
          (ULocalPlayer *this,FViewport *param_1,FSceneViewProjectionData *param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  TIntPoint<int>_u_0 TVar4;
  TIntPoint<int>_u_0 TVar5;
  TIntPoint<int>_u_0 TVar6;
  TIntPoint<int>_u_0 TVar7;
  TConsoleVariableData<int> *pTVar8;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  bool bVar13;
  int *piVar14;
  longlong lVar15;
  IXRTrackingSystem *pIVar16;
  undefined8 uVar17;
  IStereoRendering *pIVar18;
  longlong *plVar19;
  UWorld *this_00;
  AWorldSettings *pAVar20;
  TInverseRotationMatrix<double> *pTVar21;
  FSceneViewExtensions *this_01;
  double *pdVar22;
  undefined1 *puVar23;
  ForAnyElementType FVar24;
  TSharedRef<ISceneViewExtension,1> *pTVar25;
  uint uVar26;
  uint uVar27;
  TReferenceControllerBase<1> *pTVar28;
  float fVar29;
  undefined1 auStackY_c18 [32];
  int local_be8;
  int local_be4;
  uint local_be0;
  uint local_bdc;
  undefined1 local_bd8 [4];
  int local_bd4;
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> local_bd0;
  int local_bc0;
  int iStack_bbc;
  int local_bb8;
  int iStack_bb4;
  int local_bb0;
  int iStack_bac;
  int local_ba8;
  int iStack_ba4;
  undefined4 local_ba0;
  undefined4 uStack_b9c;
  undefined4 uStack_b98;
  undefined4 uStack_b94;
  double local_b90;
  FSceneViewExtensionContext local_b88;
  undefined1 local_b68 [8];
  undefined1 local_b60 [8];
  undefined1 local_b58 [8];
  undefined1 local_b50 [8];
  undefined1 local_b48 [8];
  undefined1 local_b40 [8];
  undefined1 local_b38 [8];
  TReferenceControllerBase<1> *local_b30;
  TMatrix<double> local_b28;
  TMatrix<double> local_aa8;
  TInverseRotationMatrix<double> local_a28;
  undefined1 local_9a8 [128];
  TVector<double>_u_0 local_928;
  TRotator<double> local_910;
  float local_8f8;
  void *local_150;
  double local_138;
  double dStack_130;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_c18;
  if (((((param_1 == (FViewport *)0x0) || (this->_padding_ == 0)) ||
       (local_bd4 = param_3,
       piVar14 = (int *)(**(code **)(param_1->_padding_ + 0x28))(param_1,local_b68), *piVar14 == 0))
      || ((lVar15 = (**(code **)(param_1->_padding_ + 0x28))(param_1,local_b60),
          *(int *)(lVar15 + 4) == 0 || ((this->Size).field0_0x0._s_0.X == 0.0)))) ||
     ((this->Size).field0_0x0._s_0.Y == 0.0)) {
    return false;
  }
  piVar14 = (int *)(**(code **)(param_1->_padding_ + 0x28))(param_1,local_b58);
  local_be8 = (int)(longlong)((double)*piVar14 * (this->Origin).field0_0x0._s_0.X);
  lVar15 = (**(code **)(param_1->_padding_ + 0x28))(param_1,local_b50);
  local_be8 = local_be8 + param_1->InitialPositionX;
  local_be4 = (int)(longlong)((double)*(int *)(lVar15 + 4) * (this->Origin).field0_0x0._s_0.Y) +
              param_1->InitialPositionY;
  piVar14 = (int *)(**(code **)(param_1->_padding_ + 0x28))(param_1,local_b48);
  local_be0 = (uint)(longlong)((double)*piVar14 * (this->Size).field0_0x0._s_0.X);
  lVar15 = (**(code **)(param_1->_padding_ + 0x28))(param_1,local_b40);
  pTVar8 = CVarViewportTest.Ref;
  local_bdc = (uint)(longlong)((double)*(int *)(lVar15 + 4) * (this->Size).field0_0x0._s_0.Y);
  if ((local_be0 < 0x33) || (local_bdc < 0x33)) goto switchD_147ec4ad6_default;
  bVar10 = IsInParallelGameThread();
  if ((!bVar10) &&
     ((bVar10 = IsInGameThread(), !bVar10 &&
      (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar10)))) {
    pcVar2 = (code *)swi(3);
    uVar11 = (*pcVar2)();
    return (bool)uVar11;
  }
  if (pTVar8->ShadowedValue[0] == 0) goto switchD_147ec4ad6_default;
  uVar26 = local_be0 >> 2;
  uVar27 = local_bdc >> 2;
  switch(pTVar8->ShadowedValue[0]) {
  case 1:
    local_be8 = local_be8 + uVar26;
    local_be4 = local_be4 + uVar27;
    local_be0 = local_be0 + uVar26 * -2;
    local_bdc = local_bdc + uVar27 * -2;
    break;
  case 2:
    local_be4 = local_be4 + uVar27;
    local_bdc = local_bdc + uVar27 * -2;
    break;
  case 3:
    local_be8 = local_be8 + uVar26;
    local_be0 = local_be0 + uVar26 * -2;
    break;
  case 4:
    local_be0 = local_be0 >> 1;
    local_bdc = local_bdc >> 1;
    break;
  case 5:
    local_be0 = local_be0 >> 1;
    local_bdc = local_bdc >> 1;
    local_be8 = local_be8 + local_be0;
    break;
  case 6:
    goto LAB_147ec4b31;
  case 7:
    local_be8 = local_be8 + (local_be0 >> 1);
LAB_147ec4b31:
    local_be0 = local_be0 >> 1;
    local_bdc = local_bdc >> 1;
    local_be4 = local_be4 + local_bdc;
  }
switchD_147ec4ad6_default:
  local_bc0 = local_be8;
  local_bb8 = local_be8 + local_be0;
  iStack_bbc = local_be4;
  iStack_bb4 = local_bdc + local_be4;
  TVar4._s_0.Y = local_be4;
  TVar4._s_0.X = local_be8;
  (param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0 = TVar4;
  TVar5._s_0.Y = iStack_bb4;
  TVar5._s_0.X = local_bb8;
  (param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0 = TVar5;
  (param_2->ConstrainedViewRect).field0_0x0._s_0.Min.field0_0x0 = TVar4;
  (param_2->ConstrainedViewRect).field0_0x0._s_0.Max.field0_0x0 = TVar5;
  FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_928._s_0);
  (**(code **)(this->_padding_ + 0x2c0))(this);
  if ((param_3 == -1) || (bVar10 = UEngine::IsStereoscopic3D(GEngine,(FViewport *)0x0), !bVar10)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
LAB_147ec4c3b:
    bVar13 = false;
  }
  else {
    lVar15 = (**(code **)(this->_padding_ + 0x180))(this);
    if (lVar15 == 0) {
      pIVar16 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
      cVar12 = (**(code **)((longlong)*pIVar16 + 0x148))(pIVar16);
    }
    else {
      pIVar16 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
      pcVar2 = *(code **)((longlong)*pIVar16 + 0x150);
      uVar17 = (**(code **)(this->_padding_ + 0x180))(this);
      cVar12 = (*pcVar2)(pIVar16,uVar17);
    }
    if (cVar12 == '\0') goto LAB_147ec4c3b;
    bVar13 = true;
  }
  if (bVar10) {
    pIVar18 = TSharedPtr<IStereoRendering,1>::operator->(&GEngine->StereoRenderingDevice);
    (**(code **)((longlong)*pIVar18 + 0x40))(pIVar18,param_3,&local_be8,&local_be4);
  }
  fVar29 = __real_3f800000;
  if (GCalcLocalPlayerCachedLODDistanceFactor != 0) {
    lVar15 = *(longlong *)(this->_padding_ + 0x390);
    fVar29 = __real_42b40000;
    if (lVar15 != 0) {
      fVar29 = *(float *)(lVar15 + 0x2d8);
    }
    if (fVar29 <= __real_3c23d70a) {
      fVar29 = __real_3c23d70a;
    }
    fVar29 = local_8f8 / fVar29;
  }
  *(float *)(this->_padding_ + 0x3dc) = fVar29;
  local_b90 = local_928._s_0.Z;
  local_ba0 = local_928._0_4_;
  uStack_b9c = local_928._4_4_;
  uStack_b98 = local_928._8_4_;
  uStack_b94 = local_928._12_4_;
  if ((!bVar10) && (!bVar13)) goto LAB_147ec4e1c;
  if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
    pTVar28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pIVar16 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
    puVar23 = local_b38;
    plVar19 = (longlong *)(**(code **)((longlong)*pIVar16 + 0x110))(pIVar16,puVar23,0);
    plVar1 = (longlong *)*plVar19;
    pTVar28 = (TReferenceControllerBase<1> *)plVar19[1];
    plVar19[1] = 0;
    *plVar19 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b30);
    if (plVar1 != (longlong *)0x0) {
      plVar19 = (longlong *)(**(code **)(*(longlong *)this->_padding_ + 0x7e0))();
      if (plVar19 != (longlong *)0x0) {
        puVar23 = (undefined1 *)0x0;
        cVar12 = (**(code **)(*plVar19 + 0x6e0))(plVar19,0);
        if (cVar12 != '\0') {
          (**(code **)(*plVar1 + 0x10))(plVar1,1);
          goto LAB_147ec4d95;
        }
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,(ulonglong)puVar23 & 0xffffffffffffff00);
    }
  }
LAB_147ec4d95:
  bVar13 = UEngine::IsStereoscopic3D(GEngine,param_1);
  if (bVar13) {
    pIVar18 = TSharedPtr<IStereoRendering,1>::operator->(&GEngine->StereoRenderingDevice);
    pcVar2 = *(code **)((longlong)*pIVar18 + 0x58);
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pAVar20 = UWorld::GetWorldSettings(this_00,false,true);
    (*pcVar2)(pIVar18,local_bd4,&local_910,pAVar20->WorldToMeters);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  param_3 = local_bd4;
LAB_147ec4e1c:
  *(undefined4 *)&(param_2->ViewOrigin).field0_0x0 = local_ba0;
  *(undefined4 *)((longlong)&(param_2->ViewOrigin).field0_0x0 + 4) = uStack_b9c;
  *(undefined4 *)((longlong)&(param_2->ViewOrigin).field0_0x0 + 8) = uStack_b98;
  *(undefined4 *)((longlong)&(param_2->ViewOrigin).field0_0x0 + 0xc) = uStack_b94;
  (param_2->ViewOrigin).field0_0x0._s_0.Z = local_b90;
  pTVar21 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                      (&local_a28,&local_910);
  local_b28.M[0][2] = ___xmm_00000000000000003ff0000000000000;
  local_b28.M[0][3] = _UNK_150689518;
  local_b28.M[1][0] = ___xmm_00000000000000003ff0000000000000;
  local_b28.M[1][1] = _UNK_150689518;
  local_b28.M[0][0] = 0.0;
  local_b28.M[0][1] = 0.0;
  local_b28.M[3][0] = 0.0;
  local_b28.M[3][1] = 0.0;
  local_b28.M[1][2] = 0.0;
  local_b28.M[1][3] = 0.0;
  local_b28.M[2][0] = ___xmm_3ff00000000000000000000000000000;
  local_b28.M[2][1] = _UNK_15061cbc8;
  local_b28.M[2][2] = 0.0;
  local_b28.M[2][3] = 0.0;
  local_b28.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_b28.M[3][3] = _UNK_15061cbc8;
  VectorMatrixMultiply(&local_aa8,(TMatrix<double> *)pTVar21,&local_b28);
  (param_2->ViewRotationMatrix).M[0][0] = local_aa8.M[0][0];
  (param_2->ViewRotationMatrix).M[0][1] = local_aa8.M[0][1];
  (param_2->ViewRotationMatrix).M[0][2] = local_aa8.M[0][2];
  (param_2->ViewRotationMatrix).M[0][3] = local_aa8.M[0][3];
  (param_2->ViewRotationMatrix).M[1][0] = local_aa8.M[1][0];
  (param_2->ViewRotationMatrix).M[1][1] = local_aa8.M[1][1];
  (param_2->ViewRotationMatrix).M[1][2] = local_aa8.M[1][2];
  (param_2->ViewRotationMatrix).M[1][3] = local_aa8.M[1][3];
  (param_2->ViewRotationMatrix).M[2][0] = local_aa8.M[2][0];
  (param_2->ViewRotationMatrix).M[2][1] = local_aa8.M[2][1];
  (param_2->ViewRotationMatrix).M[2][2] = local_aa8.M[2][2];
  (param_2->ViewRotationMatrix).M[2][3] = local_aa8.M[2][3];
  (param_2->ViewRotationMatrix).M[3][0] = local_aa8.M[3][0];
  (param_2->ViewRotationMatrix).M[3][1] = local_aa8.M[3][1];
  (param_2->ViewRotationMatrix).M[3][2] = local_aa8.M[3][2];
  (param_2->ViewRotationMatrix).M[3][3] = local_aa8.M[3][3];
  local_138 = (this->ViewportOffset).field0_0x0._s_0.X;
  dStack_130 = (this->ViewportOffset).field0_0x0._s_0.Y;
  if (bVar10) {
    pIVar18 = TSharedPtr<IStereoRendering,1>::operator->(&GEngine->StereoRenderingDevice);
    pdVar22 = (double *)(**(code **)((longlong)*pIVar18 + 0x60))(pIVar18,local_9a8,param_3);
    local_bb0 = local_be8;
    dVar3 = pdVar22[1];
    local_ba8 = local_be8 + local_be0;
    (param_2->ProjectionMatrix).M[0][0] = *pdVar22;
    (param_2->ProjectionMatrix).M[0][1] = dVar3;
    dVar3 = pdVar22[3];
    (param_2->ProjectionMatrix).M[0][2] = pdVar22[2];
    (param_2->ProjectionMatrix).M[0][3] = dVar3;
    iStack_ba4 = local_bdc + local_be4;
    iStack_bac = local_be4;
    dVar3 = pdVar22[5];
    (param_2->ProjectionMatrix).M[1][0] = pdVar22[4];
    (param_2->ProjectionMatrix).M[1][1] = dVar3;
    dVar3 = pdVar22[7];
    TVar6._s_0.Y = local_be4;
    TVar6._s_0.X = local_be8;
    (param_2->ProjectionMatrix).M[1][2] = pdVar22[6];
    (param_2->ProjectionMatrix).M[1][3] = dVar3;
    dVar3 = pdVar22[9];
    (param_2->ProjectionMatrix).M[2][0] = pdVar22[8];
    (param_2->ProjectionMatrix).M[2][1] = dVar3;
    dVar3 = pdVar22[0xb];
    (param_2->ProjectionMatrix).M[2][2] = pdVar22[10];
    (param_2->ProjectionMatrix).M[2][3] = dVar3;
    dVar3 = pdVar22[0xd];
    (param_2->ProjectionMatrix).M[3][0] = pdVar22[0xc];
    (param_2->ProjectionMatrix).M[3][1] = dVar3;
    dVar3 = pdVar22[0xf];
    TVar7._s_0.Y = iStack_ba4;
    TVar7._s_0.X = local_ba8;
    (param_2->ProjectionMatrix).M[3][2] = pdVar22[0xe];
    (param_2->ProjectionMatrix).M[3][3] = dVar3;
    (param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0 = TVar6;
    (param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0 = TVar7;
    (param_2->ConstrainedViewRect).field0_0x0._s_0.Min.field0_0x0 = TVar6;
    (param_2->ConstrainedViewRect).field0_0x0._s_0.Max.field0_0x0 = TVar7;
  }
  else {
    FMinimalViewInfo::CalculateProjectionMatrixGivenView
              ((FMinimalViewInfo *)&local_928._s_0,
               (TEnumAsByte<EAspectRatioAxisConstraint>)(this->AspectRatioAxisConstraint).Value,
               param_1,param_2);
    this_01 = TSharedPtr<FSceneViewExtensions,1>::operator->(&GEngine->ViewExtensions);
    local_b88._padding_ = (longlong)&___7FSceneViewExtensionContext__6B_;
    local_b88.Scene = (FSceneInterface *)0x0;
    local_b88.bStereoEnabled = false;
    local_b88.Viewport = param_1;
    FSceneViewExtensions::GatherActiveExtensions(this_01,&local_bd0,&local_b88);
    iVar9 = local_bd0.ArrayNum;
    pTVar25 = (TSharedRef<ISceneViewExtension,1> *)
              (local_bd0.AllocatorInstance.Data + (longlong)local_bd0.ArrayNum * 0x10);
    FVar24.Data = local_bd0.AllocatorInstance.Data;
    while( true ) {
      if (local_bd0.ArrayNum != iVar9) {
        `TCheckedPointerIterator<TSharedRef<ISceneViewExtension,1>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_bd8);
      }
      if ((TSharedRef<ISceneViewExtension,1> *)FVar24.Data == pTVar25) break;
      (**(code **)((longlong)*((TSharedRef<ISceneViewExtension,1> *)FVar24.Data)->Object + 0x18))
                (((TSharedRef<ISceneViewExtension,1> *)FVar24.Data)->Object,param_2);
      FVar24.Data = FVar24.Data + 0x10;
    }
    DestructItems<TSharedRef<ISceneViewExtension,1>,int>
              ((TSharedRef<ISceneViewExtension,1> *)local_bd0.AllocatorInstance.Data,
               local_bd0.ArrayNum);
    if ((TSharedRef<ISceneViewExtension,1> *)local_bd0.AllocatorInstance.Data !=
        (TSharedRef<ISceneViewExtension,1> *)0x0) {
      FMemory::Free(local_bd0.AllocatorInstance.Data);
    }
  }
  if (local_150 != (void *)0x0) {
    FMemory::Free(local_150);
  }
  return true;
}

// GetSlateUser @ 147ec6290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FSlateUser,1> * __thiscall
ULocalPlayer::GetSlateUser(ULocalPlayer *this,TSharedPtr<FSlateUser,1> *__return_storage_ptr__)

{
  FSlateApplication *this_00;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::GetUserFromControllerId(this_00,__return_storage_ptr__,this->ControllerId);
  return __return_storage_ptr__;
}

// GetSlateUser @ 147ec62d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FSlateUser_const_,1> * __thiscall
ULocalPlayer::GetSlateUser
          (ULocalPlayer *this,TSharedPtr<FSlateUser_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateApplication *this_00;
  TSharedPtr<FSlateUser,1> *pTVar2;
  TSharedPtr<FSlateUser,1> local_18;
  
  this_00 = FSlateApplication::Get();
  pTVar2 = FSlateApplication::GetUserFromControllerId(this_00,&local_18,this->ControllerId);
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetUniqueNetIdForPlatformUser @ 147ec71d0

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

FUniqueNetIdRepl * __thiscall
ULocalPlayer::GetUniqueNetIdForPlatformUser
          (ULocalPlayer *this,FUniqueNetIdRepl *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  UOnlineEngineInterface *pUVar4;
  FUniqueNetIdRepl *pFVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar3 = (**(code **)(this->_padding_ + 0x180))();
  if (lVar3 == 0) {
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    (__return_storage_ptr__->ReplicationBytes).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ReplicationBytes).ArrayNum = 0;
    (__return_storage_ptr__->ReplicationBytes).ArrayMax = 0;
  }
  else {
    pUVar4 = UOnlineEngineInterface::Get();
    local_48 = 0;
    local_58 = 0;
    lVar3 = (**(code **)(*(longlong *)pUVar4 + 0x300))
                      (pUVar4,local_40,lVar3,(this->PlatformUserId).InternalId);
    __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
    ::
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)&__return_storage_ptr__->_padding_,
               (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)(lVar3 + 8));
    __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    (__return_storage_ptr__->ReplicationBytes).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ReplicationBytes).ArrayNum = 0;
    (__return_storage_ptr__->ReplicationBytes).ArrayMax = 0;
    if (1 < local_28) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FUniqueNetIdRepl *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_28])(local_38);
  }
  return __return_storage_ptr__;
}

// GetUniqueNetIdFromCachedControllerId @ 147ec72f0

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

FUniqueNetIdRepl * __thiscall
ULocalPlayer::GetUniqueNetIdFromCachedControllerId
          (ULocalPlayer *this,FUniqueNetIdRepl *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  UOnlineEngineInterface *pUVar4;
  FUniqueNetIdRepl *pFVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar3 = (**(code **)(this->_padding_ + 0x180))();
  if (lVar3 == 0) {
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    (__return_storage_ptr__->ReplicationBytes).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ReplicationBytes).ArrayNum = 0;
    (__return_storage_ptr__->ReplicationBytes).ArrayMax = 0;
  }
  else {
    pUVar4 = UOnlineEngineInterface::Get();
    local_48 = 0;
    local_58 = 0;
    lVar3 = (**(code **)(*(longlong *)pUVar4 + 0x300))(pUVar4,local_40,lVar3,this->ControllerId);
    __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
    ::
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)&__return_storage_ptr__->_padding_,
               (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)(lVar3 + 8));
    __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    (__return_storage_ptr__->ReplicationBytes).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ReplicationBytes).ArrayNum = 0;
    (__return_storage_ptr__->ReplicationBytes).ArrayMax = 0;
    if (1 < local_28) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FUniqueNetIdRepl *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_28])(local_38);
  }
  return __return_storage_ptr__;
}

// GetViewPoint @ 147ec8470

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayer::GetViewPoint(ULocalPlayer *this,FMinimalViewInfo *param_1)

{
  longlong *plVar1;
  UGameViewportClient *pUVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  UEngine *pUVar8;
  int iVar9;
  bool bVar10;
  FLockedViewState *pFVar11;
  double *pdVar12;
  uint uVar13;
  longlong *plVar14;
  TSharedRef<ISceneViewExtension,1> *pTVar15;
  ForAnyElementType FVar16;
  float fVar17;
  undefined1 local_res8 [8];
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> local_88;
  FSceneViewExtensionContext local_78;
  TVector<double>_u_0 local_58;
  float local_40;
  double local_38;
  double dStack_30;
  double local_28;
  char local_20;
  
  pFVar11 = FLockedViewState::Get();
  FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::GetAnnotation
            (&pFVar11->PlayerStates,(FPlayerState *)&local_58._s_0,(UObjectBase *)this);
  if (local_20 == '\0') {
    plVar14 = (longlong *)this->_padding_;
    if (plVar14 != (longlong *)0x0) {
      plVar1 = (longlong *)plVar14[0x72];
      if (plVar1 != (longlong *)0x0) {
        pdVar12 = (double *)(**(code **)(*plVar1 + 0x798))(plVar1);
        dVar7 = pdVar12[1];
        (param_1->Location).field0_0x0._s_0.X = *pdVar12;
        (param_1->Location).field0_0x0._s_0.Y = dVar7;
        (param_1->Location).field0_0x0._s_0.Z = pdVar12[2];
        dVar7 = pdVar12[4];
        (param_1->Rotation).Pitch = pdVar12[3];
        (param_1->Rotation).Yaw = dVar7;
        (param_1->Rotation).Roll = pdVar12[5];
        param_1->FOV = *(float *)(pdVar12 + 6);
        param_1->DesiredFOV = *(float *)((longlong)pdVar12 + 0x34);
        param_1->FirstPersonFOV = *(float *)(pdVar12 + 7);
        param_1->FirstPersonScale = *(float *)((longlong)pdVar12 + 0x3c);
        param_1->OrthoWidth = *(float *)(pdVar12 + 8);
        param_1->bAutoCalculateOrthoPlanes = *(bool *)((longlong)pdVar12 + 0x44);
        param_1->AutoPlaneShift = *(float *)(pdVar12 + 9);
        param_1->bUpdateOrthoPlanes = *(bool *)((longlong)pdVar12 + 0x4c);
        param_1->bUseCameraHeightAsViewTarget = *(bool *)((longlong)pdVar12 + 0x4d);
        param_1->OrthoNearClipPlane = *(float *)(pdVar12 + 10);
        param_1->OrthoFarClipPlane = *(float *)((longlong)pdVar12 + 0x54);
        param_1->PerspectiveNearClipPlane = *(float *)(pdVar12 + 0xb);
        param_1->AspectRatio = *(float *)((longlong)pdVar12 + 0x5c);
        if ((TOptional<EAspectRatioAxisConstraint> *)(pdVar12 + 0xc) !=
            &param_1->AspectRatioAxisConstraint) {
          if (*(char *)((longlong)pdVar12 + 100) == '\0') {
            if ((param_1->AspectRatioAxisConstraint).bIsSet != false) {
              (param_1->AspectRatioAxisConstraint).bIsSet = false;
            }
          }
          else {
            (param_1->AspectRatioAxisConstraint).TypedValue =
                 *(EAspectRatioAxisConstraint *)(pdVar12 + 0xc);
            (param_1->AspectRatioAxisConstraint).bIsSet = true;
          }
        }
        uVar13 = (param_1->bConstrainAspectRatio ^ *(uint *)(pdVar12 + 0xd)) & 1 ^
                 *(uint *)&param_1->field_0x68;
        *(uint *)&param_1->field_0x68 = uVar13;
        uVar13 = (uVar13 ^ *(uint *)(pdVar12 + 0xd)) & 2 ^ uVar13;
        *(uint *)&param_1->field_0x68 = uVar13;
        *(uint *)&param_1->field_0x68 = (uVar13 ^ *(uint *)(pdVar12 + 0xd)) & 4 ^ uVar13;
        (param_1->ProjectionMode).Value = *(uchar *)((longlong)pdVar12 + 0x6c);
        param_1->PostProcessBlendWeight = *(float *)(pdVar12 + 0xe);
        FPostProcessSettings::operator=
                  (&param_1->PostProcessSettings,(FPostProcessSettings *)(pdVar12 + 0x10));
        dVar7 = pdVar12[0xff];
        (param_1->OffCenterProjectionOffset).field0_0x0._s_0.X = pdVar12[0xfe];
        (param_1->OffCenterProjectionOffset).field0_0x0._s_0.Y = dVar7;
        if ((TOptional<UE::Math::TTransform<double>_> *)(pdVar12 + 0x100) !=
            &param_1->PreviousViewTransform) {
          if (*(char *)(pdVar12 + 0x10c) == '\0') {
            if ((param_1->PreviousViewTransform).bIsSet != false) {
              (param_1->PreviousViewTransform).bIsSet = false;
            }
          }
          else {
            dVar7 = pdVar12[0x101];
            (param_1->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[0] = pdVar12[0x100];
            (param_1->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar7;
            dVar7 = pdVar12[0x103];
            (param_1->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[0] = pdVar12[0x102];
            (param_1->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar7;
            dVar7 = pdVar12[0x105];
            (param_1->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[0] = pdVar12[0x104]
            ;
            (param_1->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar7;
            dVar7 = pdVar12[0x107];
            (param_1->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[0] = pdVar12[0x106]
            ;
            (param_1->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar7;
            dVar7 = pdVar12[0x109];
            (param_1->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[0] = pdVar12[0x108];
            (param_1->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar7;
            dVar7 = pdVar12[0x10b];
            (param_1->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[0] = pdVar12[0x10a];
            (param_1->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar7;
            (param_1->PreviousViewTransform).bIsSet = true;
          }
        }
        param_1->OverscanResolutionFraction = *(float *)(pdVar12 + 0x10e);
        param_1->CropFraction = *(float *)((longlong)pdVar12 + 0x874);
        dVar7 = pdVar12[0x111];
        *(double *)&(param_1->AsymmetricCropFraction).field0_0x0 = pdVar12[0x110];
        *(double *)((longlong)&(param_1->AsymmetricCropFraction).field0_0x0 + 8) = dVar7;
        param_1->Overscan = *(float *)(pdVar12 + 0x112);
        dVar7 = pdVar12[0x115];
        *(double *)&(param_1->AsymmetricOverscan).field0_0x0 = pdVar12[0x114];
        *(double *)((longlong)&(param_1->AsymmetricOverscan).field0_0x0 + 8) = dVar7;
        uVar4 = *(undefined4 *)((longlong)pdVar12 + 0x8b4);
        uVar5 = *(undefined4 *)(pdVar12 + 0x117);
        uVar6 = *(undefined4 *)((longlong)pdVar12 + 0x8bc);
        *(undefined4 *)&(param_1->CameraToViewTarget).field0_0x0 = *(undefined4 *)(pdVar12 + 0x116);
        *(undefined4 *)((longlong)&(param_1->CameraToViewTarget).field0_0x0 + 4) = uVar4;
        *(undefined4 *)((longlong)&(param_1->CameraToViewTarget).field0_0x0 + 8) = uVar5;
        *(undefined4 *)((longlong)&(param_1->CameraToViewTarget).field0_0x0 + 0xc) = uVar6;
        (param_1->CameraToViewTarget).field0_0x0._s_0.Z = pdVar12[0x118];
        fVar17 = (float)(**(code **)(**(longlong **)(this->_padding_ + 0x390) + 0x800))();
        param_1->FOV = fVar17;
        plVar14 = (longlong *)this->_padding_;
      }
      (**(code **)(*plVar14 + 0x840))(plVar14,param_1,&param_1->Rotation);
    }
  }
  else {
    (param_1->Location).field0_0x0._s_0.X = local_58._s_0.X;
    (param_1->Location).field0_0x0._s_0.Y = local_58._s_0.Y;
    (param_1->Rotation).Pitch = local_38;
    (param_1->Rotation).Yaw = dStack_30;
    (param_1->Location).field0_0x0._s_0.Z = local_58._s_0.Z;
    param_1->FOV = local_40;
    (param_1->Rotation).Roll = local_28;
  }
  pUVar8 = GEngine;
  pUVar2 = (this->ViewportClient).field0_0x0.DebugPtr;
  if (pUVar2 != (UGameViewportClient *)0x0) {
    local_78.Viewport = pUVar2->Viewport;
    local_78._padding_ = (longlong)&___7FSceneViewExtensionContext__6B_;
    local_78.Scene = (FSceneInterface *)0x0;
    local_78.bStereoEnabled = true;
    if ((GEngine->ViewExtensions).Object == (FSceneViewExtensions *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FSceneViewExtensions::GatherActiveExtensions
              ((pUVar8->ViewExtensions).Object,&local_88,&local_78);
    iVar9 = local_88.ArrayNum;
    pTVar15 = (TSharedRef<ISceneViewExtension,1> *)
              (local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 0x10);
    FVar16.Data = local_88.AllocatorInstance.Data;
    while( true ) {
      if (local_88.ArrayNum != iVar9) {
        `TCheckedPointerIterator<TSharedRef<ISceneViewExtension,1>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if ((TSharedRef<ISceneViewExtension,1> *)FVar16.Data == pTVar15) break;
      (**(code **)((longlong)*((TSharedRef<ISceneViewExtension,1> *)FVar16.Data)->Object + 0x10))
                (((TSharedRef<ISceneViewExtension,1> *)FVar16.Data)->Object,this->_padding_,param_1)
      ;
      FVar16.Data = FVar16.Data + 0x10;
    }
    DestructItems<TSharedRef<ISceneViewExtension,1>,int>
              ((TSharedRef<ISceneViewExtension,1> *)local_88.AllocatorInstance.Data,
               local_88.ArrayNum);
    if ((TSharedRef<ISceneViewExtension,1> *)local_88.AllocatorInstance.Data !=
        (TSharedRef<ISceneViewExtension,1> *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  param_1->DesiredFOV = param_1->FOV;
  return;
}

// GetWorld @ 147ec8a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall ULocalPlayer::GetWorld(ULocalPlayer *this)

{
  UGameViewportClient *pUVar1;
  UWorld *pUVar2;
  
  pUVar1 = (this->ViewportClient).field0_0x0.DebugPtr;
  if (pUVar1 != (UGameViewportClient *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ec8a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UWorld *)(**(code **)(pUVar1->_padding_ + 0x180))();
    return pUVar2;
  }
  return (UWorld *)0x0;
}

// HandleDNCommand @ 147ec8cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ULocalPlayer::HandleDNCommand(ULocalPlayer *this,wchar_t *param_1,FOutputDevice *param_2)

{
  int *piVar1;
  double dVar2;
  APlayerController *this_00;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  UEngine *pUVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  APawn *pAVar12;
  double *pdVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  int iVar16;
  FString local_48;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  if (this->_padding_ != 0) {
    ::FString::FString(&local_48,param_1);
    pUVar7 = GEngine;
    uVar10 = (GEngine->PendingDroppedNotes).ArrayNum;
    piVar1 = &(GEngine->PendingDroppedNotes).ArrayMax;
    if (uVar10 == *piVar1) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&(GEngine->PendingDroppedNotes).AllocatorInstance,piVar1);
    }
    (pUVar7->PendingDroppedNotes).ArrayNum = uVar10 + 1;
    pFVar14 = (pUVar7->PendingDroppedNotes).AllocatorInstance.Data;
    lVar15 = (longlong)(int)uVar10 * 0x40;
    *(undefined8 *)(pFVar14 + lVar15) = 0;
    *(undefined8 *)(pFVar14 + lVar15 + 8) = 0;
    *(undefined8 *)(pFVar14 + lVar15 + 0x10) = 0;
    *(undefined8 *)(pFVar14 + lVar15 + 0x10 + 8) = 0;
    *(undefined8 *)(pFVar14 + lVar15 + 0x20) = 0;
    *(undefined8 *)(pFVar14 + lVar15 + 0x20 + 8) = 0;
    *(undefined8 *)(pFVar14 + lVar15 + 0x30) = 0;
    *(undefined8 *)(pFVar14 + lVar15 + 0x30 + 8) = 0;
    pUVar7 = GEngine;
    uVar11 = 0;
    if ((int)uVar10 < (GEngine->PendingDroppedNotes).ArrayNum) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    pFVar14 = (pUVar7->PendingDroppedNotes).AllocatorInstance.Data + lVar15;
    pAVar12 = APlayerController::GetPawnOrSpectator((APlayerController *)this->_padding_);
    this_00 = (APlayerController *)this->_padding_;
    if (pAVar12 == (APawn *)0x0) {
      (**(code **)(this_00->_padding_ + 0x840))(this_00,pFVar14,local_38);
    }
    else {
      pAVar12 = APlayerController::GetPawnOrSpectator(this_00);
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      lVar15 = pAVar12->_padding_;
      if (lVar15 == 0) {
        *(double *)pFVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        *(undefined8 *)(pFVar14 + 8) = uVar5;
        *(undefined8 *)(pFVar14 + 0x10) = uVar6;
      }
      else {
        dVar4 = *(double *)(lVar15 + 0x218);
        dVar2 = *(double *)(lVar15 + 0x220);
        *(double *)pFVar14 = *(double *)(lVar15 + 0x210);
        *(double *)(pFVar14 + 8) = dVar4;
        *(double *)(pFVar14 + 0x10) = dVar2;
      }
    }
    pdVar13 = (double *)
              (**(code **)(*(longlong *)this->_padding_ + 0x7a8))
                        ((longlong *)this->_padding_,local_20);
    dVar2 = pdVar13[1];
    *(double *)(pFVar14 + 0x18) = *pdVar13;
    *(double *)(pFVar14 + 0x20) = dVar2;
    *(double *)(pFVar14 + 0x28) = pdVar13[2];
    iVar16 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    ::FString::AssignRange
              ((FString *)(pFVar14 + 0x30),(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar16);
    if (4 < (byte)LogPlayerManagement._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// HandleExecCommand @ 147ec8ed0

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

bool __thiscall
ULocalPlayer::HandleExecCommand(ULocalPlayer *this,wchar_t *param_1,FOutputDevice *param_2)

{
  bool bVar1;
  undefined1 auStackY_458 [32];
  wchar_t *local_428 [2];
  wchar_t local_418 [512];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_458;
  local_428[0] = param_1;
  bVar1 = FParse::Token(local_428,local_418,0x200,false,L'\0');
  if (bVar1) {
    ExecMacro(this,local_418,param_2);
  }
  return true;
}

// HandleExitCommand @ 147ec8f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ULocalPlayer::HandleExitCommand(ULocalPlayer *this,wchar_t *param_1,FOutputDevice *param_2)

{
  UGameViewportClient *pUVar1;
  FGameDelegates *this_00;
  
  pUVar1 = (this->ViewportClient).field0_0x0.DebugPtr;
  if ((pUVar1 != (UGameViewportClient *)0x0) && (pUVar1->Viewport != (FViewport *)0x0)) {
    (**(code **)(pUVar1->_padding_ + 0x118))(&pUVar1->_padding_);
  }
  this_00 = FGameDelegates::Get();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this_00->ExitCommandDelegate);
  return true;
}

// HandleListAwakeBodiesCommand @ 147eca540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ULocalPlayer::HandleListAwakeBodiesCommand
          (ULocalPlayer *this,wchar_t *param_1,FOutputDevice *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x180))(this,(char)param_1);
  FPhysScene_Chaos::ListAwakeRigidBodies(*(FPhysScene_Chaos **)(lVar1 + 0x2a0),true);
  return true;
}

// HandleListMoveBodyCommand @ 147eca570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ULocalPlayer::HandleListMoveBodyCommand(ULocalPlayer *this,wchar_t *param_1,FOutputDevice *param_2)

{
  GShouldLogOutAFrameOfSetBodyTransform = true;
  return true;
}

// HandleListPawnComponentsCommand @ 147eca580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
ULocalPlayer::HandleListPawnComponentsCommand
          (ULocalPlayer *this,wchar_t *param_1,FOutputDevice *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  code *pcVar7;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  EInternalObjectFlags EVar11;
  UClass *pUVar12;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res20 [8];
  TObjectIterator<APawn> local_118;
  int local_100;
  int local_fc;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  undefined4 local_34;
  
  local_118.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ObjectArray.ArrayNum = 0;
  local_118.ObjectArray.ArrayMax = 0;
  local_118.Index = 0xffffffff;
  EVar11 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar12 = Z_Construct_UClass_APawn_NoRegister();
  GetObjectsOfClass(pUVar12,&local_118.ObjectArray,true,RF_ClassDefaultObject,
                    EVar11 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  do {
    TObjectIterator<APawn>::Advance(&local_118);
    lVar15 = (longlong)local_118.Index;
    if ((local_118.Index < 0) || (local_118.ObjectArray.ArrayNum <= local_118.Index)) {
      if (local_118.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.ObjectArray.AllocatorInstance.Data);
      }
      return true;
    }
    uVar17 = 0;
    if (local_118.Index < local_118.ObjectArray.ArrayNum) {
      uVar17 = (uint)~local_118.Index >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    lVar15 = *(longlong *)(local_118.ObjectArray.AllocatorInstance.Data + lVar15 * 8);
    if (4 < (byte)LogPlayerManagement._0_1_) {
      local_f8 = *(FName *)(*(longlong *)(lVar15 + 0x1b8) + 0x18);
      ::FName::ToString(&local_f8,&local_d0);
      local_f0 = *(FName *)(lVar15 + 0x18);
      ::FName::ToString(&local_f0,&local_e0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    pTVar13 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                          *)(lVar15 + 0x248));
    iVar3 = *(int *)&(pTVar13->Elements).field_0x28;
    iStack_a8 = 0;
    local_90 = 0;
    uStack_a4 = 1;
    puVar1 = &(pTVar13->Elements).field_0x10;
    iStack_94 = 0;
    if (iVar3 != 0) {
      puVar5 = *(uint **)&(pTVar13->Elements).field_0x20;
      puVar19 = (uint *)puVar1;
      if (puVar5 != (uint *)0x0) {
        puVar19 = puVar5;
      }
      uVar17 = *puVar19;
      while (uVar17 == 0) {
        lVar15 = (longlong)iStack_a8;
        local_90 = local_90 + 0x20;
        iStack_a8 = iStack_a8 + 1;
        iStack_94 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_147eca78e;
        uVar17 = puVar19[lVar15 + 1];
      }
      uStack_a4 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uStack_a4 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_100 = (int)lVar15;
      iStack_94 = local_90 + -1 + local_100;
      if (iVar3 < iStack_94) {
        iStack_94 = iVar3;
      }
    }
LAB_147eca78e:
    uVar17 = *(uint *)&(pTVar13->Elements).field_0x28;
    uStack_8c = local_34;
    uVar16 = uVar17 & 0xffffffe0;
    iStack_88 = *(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34;
    TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
    uStack_98 = 0xffffffff;
    TStack_78.CurrentBitIndex = iStack_94;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar17 >> 5;
    TStack_78._28_4_ = local_34;
    TStack_78.BaseBitIndex = local_90;
    uStack_58 = CONCAT44(uStack_84,iStack_88);
    local_b0 = pTVar13;
    local_a0 = puVar1;
    local_80 = pTVar13;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    uVar4 = *(uint *)&(pTVar13->Elements).field_0x28;
    if (uVar17 != uVar4) {
      puVar6 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
      puVar18 = puVar1;
      if (puVar6 != (undefined1 *)0x0) {
        puVar18 = puVar6;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
      while (uVar17 == 0) {
        lVar15 = (longlong)iVar14;
        uVar16 = uVar16 + 0x20;
        iVar14 = iVar14 + 1;
        uVar17 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_147eca890;
        uVar17 = *(uint *)(puVar18 + lVar15 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_fc = (int)lVar15;
      uVar17 = local_fc + -1 + uVar16;
      if ((int)uVar4 < (int)uVar17) {
        uVar17 = uVar4;
      }
    }
LAB_147eca890:
    while( true ) {
      pTVar8 = local_80;
      if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
          (int)uStack_58) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_78.CurrentBitIndex == uVar17) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar8 == pTVar13)) break;
      lVar15 = *(longlong *)
                (*(longlong *)&pTVar8->Elements + (longlong)TStack_78.CurrentBitIndex * 0x10);
      if (((lVar15 != 0) && ((*(byte *)(lVar15 + 0x98) & 1) != 0)) &&
         (4 < (byte)LogPlayerManagement._0_1_)) {
        local_e8 = *(FName *)(lVar15 + 0x18);
        ::FName::ToString(&local_e8,&local_c0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  } while( true );
}

// HandleListSimBodiesCommand @ 147eca990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ULocalPlayer::HandleListSimBodiesCommand(ULocalPlayer *this,wchar_t *param_1,FOutputDevice *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x180))();
  FPhysScene_Chaos::ListAwakeRigidBodies(*(FPhysScene_Chaos **)(lVar1 + 0x2a0),false);
  return true;
}

// HandleListSkelMeshesCommand @ 147eca9c0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
ULocalPlayer::HandleListSkelMeshesCommand
          (ULocalPlayer *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  UObjectBaseUtility *this_00;
  UPrimitiveComponent *this_01;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  EInternalObjectFlags EVar10;
  int iVar11;
  UClass *pUVar12;
  UWorld *pUVar13;
  uint uVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auStackY_208 [32];
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  TObjectIterator<USkeletalMeshComponent> local_1a8;
  TObjectIterator<USkeletalMesh> local_190;
  USkeletalMeshComponent *local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  double local_160;
  TPairInitializer<USkeletalMesh_*_const_&,USkeletalMeshComponent_*_const_&> local_158;
  USkeletalMeshComponent ***local_148;
  USkeletalMeshComponent **local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  TSet<TTuple<USkeletalMesh_*,USkeletalMeshComponent_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,USkeletalMeshComponent_*,1>,FDefaultSetAllocator>
  local_e8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar20 = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  local_1a8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ObjectArray.ArrayNum = 0;
  local_1a8.ObjectArray.ArrayMax = 0;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_1a8.Index = 0xffffffff;
  EVar10 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar12 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  GetObjectsOfClass(pUVar12,&local_1a8.ObjectArray,true,RF_ClassDefaultObject,
                    EVar10 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<USkeletalMeshComponent>::Advance(&local_1a8);
    lVar17 = (longlong)local_1a8.Index;
    if ((local_1a8.Index < 0) || (local_1a8.ObjectArray.ArrayNum <= local_1a8.Index)) break;
    uVar14 = 0;
    if (local_1a8.Index < local_1a8.ObjectArray.ArrayNum) {
      uVar14 = (uint)~local_1a8.Index >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    local_178 = *(USkeletalMeshComponent **)
                 (local_1a8.ObjectArray.AllocatorInstance.Data + lVar17 * 8);
    local_158.Value =
         (USkeletalMeshComponent **)USkeletalMeshComponent::GetSkeletalMeshAsset(local_178);
    bVar8 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)local_178,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar8) {
      local_148 = &local_158.Value;
      local_140 = &local_178;
      TSet<TTuple<USkeletalMesh_*,USkeletalMeshComponent_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,USkeletalMeshComponent_*,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<USkeletalMesh_*_const_&,USkeletalMeshComponent_*_const_&>_>
                (&local_e8,&local_158,(bool *)&local_148);
    }
  }
  if (local_1a8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.ObjectArray.AllocatorInstance.Data);
  }
  local_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uStack_16c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uStack_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uStack_164 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if ((this->_padding_ != 0) &&
     (pUVar2 = *(UObject **)(this->_padding_ + 0x310), pUVar2 != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    pUVar2 = *(UObject **)(this->_padding_ + 0x310);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    lVar17 = *(longlong *)(pUVar2 + 0xb);
    local_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_16c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_164 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar17 != 0) {
      local_170 = *(undefined4 *)(lVar17 + 0x210);
      uStack_16c = *(undefined4 *)(lVar17 + 0x214);
      uStack_168 = *(undefined4 *)(lVar17 + 0x218);
      uStack_164 = *(undefined4 *)(lVar17 + 0x21c);
      local_160 = *(double *)(lVar17 + 0x220);
      local_108 = local_170;
      uStack_104 = uStack_16c;
      uStack_100 = uStack_168;
      uStack_fc = uStack_164;
      local_f8 = local_160;
    }
  }
  local_190.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ObjectArray.ArrayNum = 0;
  local_190.ObjectArray.ArrayMax = 0;
  local_190.Index = 0xffffffff;
  EVar10 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar12 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  GetObjectsOfClass(pUVar12,&local_190.ObjectArray,true,RF_ClassDefaultObject,
                    EVar10 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<USkeletalMesh>::Advance(&local_190);
  dVar7 = local_160;
  dVar6 = (double)CONCAT44(uStack_164,uStack_168);
  dVar5 = (double)CONCAT44(uStack_16c,local_170);
  do {
    lVar17 = (longlong)local_190.Index;
    if ((local_190.Index < 0) || (local_190.ObjectArray.ArrayNum <= local_190.Index)) {
      if (local_190.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.ObjectArray.AllocatorInstance.Data);
      }
      local_e8.HashSize = 0;
      if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<USkeletalMesh_*,USkeletalMeshComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<USkeletalMesh_*,USkeletalMeshComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8.Elements);
      return true;
    }
    uVar14 = 0;
    if (local_190.Index < local_190.ObjectArray.ArrayNum) {
      uVar14 = (uint)~local_190.Index >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    this_00 = *(UObjectBaseUtility **)(local_190.ObjectArray.AllocatorInstance.Data + lVar17 * 8);
    local_1b8.Data = (FScriptContainerElement *)0x0;
    local_1b0 = 0;
    uVar19 = uVar20;
    if (local_e8.HashSize != 0) {
      uVar14 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_00 >> 4)) *
               -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      FVar15 = (ForElementType<FSetElementId>)&local_e8.Hash;
      if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar15 = local_e8.Hash.SecondaryData;
      }
      iVar16 = *(int *)((longlong)FVar15 +
                       (longlong)(int)(local_e8.HashSize - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
      do {
        iVar11 = iVar16;
        iVar16 = iVar11;
        if (iVar11 == -1) break;
        iVar16 = *(int *)(local_e8.Elements._0_8_ + 0x10 + (longlong)iVar11 * 0x18);
      } while (*(UObjectBaseUtility **)(local_e8.Elements._0_8_ + (longlong)iVar11 * 0x18) !=
               this_00);
      uVar18 = uVar20;
      uVar19 = 0;
      if (iVar11 != -1) {
        do {
          pFVar1 = (FScriptContainerElement *)
                   (local_e8.Elements._0_8_ + ((longlong)iVar11 * 3 + 1) * 8);
          iVar11 = (int)uVar18;
          if ((local_1b8.Data <= pFVar1) &&
             (pFVar1 < local_1b8.Data + (longlong)local_1b0._4_4_ * 8)) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar3 = (code *)swi(3);
              uVar9 = (*pcVar3)();
              return (bool)uVar9;
            }
            iVar11 = (int)local_1b0;
          }
          if (iVar11 == local_1b0._4_4_) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_1b8,(int *)((longlong)&local_1b0 + 4));
          }
          uVar14 = iVar11 + 1;
          local_1b0 = CONCAT44(local_1b0._4_4_,uVar14);
          *(undefined8 *)(local_1b8.Data + (longlong)iVar11 * 8) = *(undefined8 *)pFVar1;
          do {
            iVar11 = iVar16;
            if (iVar11 == -1) {
              uVar19 = (ulonglong)uVar14;
              goto LAB_147ecae52;
            }
            iVar16 = *(int *)(local_e8.Elements._0_8_ + 0x10 + (longlong)iVar11 * 0x18);
          } while (*(UObjectBaseUtility **)(local_e8.Elements._0_8_ + (longlong)iVar11 * 0x18) !=
                   this_00);
          uVar18 = (ulonglong)uVar14;
        } while( true );
      }
    }
LAB_147ecae52:
    if ((this_00 != (UObjectBaseUtility *)0x0) && ((int)uVar19 != 0)) {
      lVar17 = (**(code **)(*(longlong *)this_00 + 0x398))(this_00);
      if ((*(int *)(lVar17 + 8) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("SkelMeshRenderData->LODRenderData.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                             ,0x56d,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      if (4 < (byte)LogPlayerManagement._0_1_) {
        UObjectBaseUtility::GetFullName(this_00,&local_138,(UObject *)0x0,None);
        if ((*(int *)(lVar17 + 8) < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
      }
      uVar19 = uVar20;
      uVar18 = uVar20;
      if (0 < (int)local_1b0) {
        do {
          uVar21 = (uint)uVar19;
          uVar14 = 0;
          if ((int)uVar21 < (int)local_1b0) {
            uVar14 = ~uVar21 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          this_01 = *(UPrimitiveComponent **)(local_1b8.Data + uVar18);
          if ((this_01 == (UPrimitiveComponent *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("SkeletalMeshComponent",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                                 ,0x574,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          if (((*(longlong *)&this_01->field_0xb0 == 0) &&
              (pUVar13 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01),
              pUVar13 == (UWorld *)0x0)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("World",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                                 ,0x576,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          UPrimitiveComponent::GetLastRenderTime(this_01);
          if (4 < (byte)LogPlayerManagement._0_1_) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_01,&local_128,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
          }
          if (*(UObjectBaseUtility **)&this_01->field_0xa8 == (UObjectBaseUtility *)0x0) {
LAB_147ecb107:
            if ((4 < (byte)LogPlayerManagement._0_1_) &&
               (UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement),
               4 < (byte)LogPlayerManagement._0_1_)) {
              dVar4 = *(double *)&this_01->field_0x110 - dVar5;
              dVar23 = *(double *)&this_01->field_0x118 - dVar6;
              dVar22 = *(double *)&this_01->field_0x120 - dVar7;
              auVar24._0_8_ = dVar23 * dVar23 + dVar4 * dVar4 + dVar22 * dVar22;
              auVar24._8_8_ = 0;
              sqrtpd(auVar24,auVar24);
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
            }
          }
          else if (4 < (byte)LogPlayerManagement._0_1_) {
            UObjectBaseUtility::GetFullName
                      (*(UObjectBaseUtility **)&this_01->field_0xa8,&local_118,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
            if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.Data.AllocatorInstance.Data);
            }
            goto LAB_147ecb107;
          }
          uVar19 = (ulonglong)(uVar21 + 1);
          uVar18 = uVar18 + 8;
        } while ((int)(uVar21 + 1) < (int)local_1b0);
      }
    }
    if (local_1b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data);
    }
    TObjectIterator<USkeletalMesh>::Advance(&local_190);
  } while( true );
}

// HandleMoveComponentTimesCommand @ 147ecb270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ULocalPlayer::HandleMoveComponentTimesCommand
          (ULocalPlayer *this,wchar_t *param_1,FOutputDevice *param_2)

{
  GShouldLogOutAFrameOfMoveComponent = true;
  return true;
}

// HandleToggleDrawEventsCommand @ 147ecb280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ULocalPlayer::HandleToggleDrawEventsCommand
          (ULocalPlayer *this,wchar_t *param_1,FOutputDevice *param_2)

{
  bool bVar1;
  
  bVar1 = GetEmitDrawEvents();
  if (bVar1) {
    SetEmitDrawEvents(false);
    if (2 < (byte)LogEngine._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
      return true;
    }
  }
  else {
    SetEmitDrawEvents(true);
    if (2 < (byte)LogEngine._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
    }
  }
  return true;
}

// HandleToggleStreamingVolumesCommand @ 147ecb2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ULocalPlayer::HandleToggleStreamingVolumesCommand
          (ULocalPlayer *this,wchar_t *param_1,FOutputDevice *param_2)

{
  bool bVar1;
  longlong lVar2;
  code *pcVar3;
  wchar_t *local_res10 [3];
  
  local_res10[0] = param_1;
  bVar1 = FParse::Command(local_res10,L"ON",true);
  if (bVar1) {
    lVar2 = (**(code **)(this->_padding_ + 0x180))(this);
    *(undefined4 *)(lVar2 + 0x88c) = 0;
    return true;
  }
  bVar1 = FParse::Command(local_res10,L"OFF",true);
  pcVar3 = *(code **)(this->_padding_ + 0x180);
  if (!bVar1) {
    lVar2 = (*pcVar3)(this);
    pcVar3 = *(code **)(this->_padding_ + 0x180);
    if (*(int *)(lVar2 + 0x88c) == -1) {
      lVar2 = (*pcVar3)();
      *(undefined4 *)(lVar2 + 0x88c) = 0;
      return true;
    }
  }
  lVar2 = (*pcVar3)(this);
  *(undefined4 *)(lVar2 + 0x88c) = 0xffffffff;
  return true;
}

// InitOnlineSession @ 147ecb900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayer::InitOnlineSession(ULocalPlayer *this)

{
  return;
}

// IsPrimaryPlayer @ 147ecde20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULocalPlayer::IsPrimaryPlayer(ULocalPlayer *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x340))();
  return iVar1 == 0;
}

// PlayerAdded @ 147ed12e0

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
ULocalPlayer::PlayerAdded(ULocalPlayer *this,UGameViewportClient *param_1,int param_2)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UGameViewportClient *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ViewportClient).field0_0x0.DebugPtr = param_1;
  (**(code **)(this->_padding_ + 0x328))(this,param_2);
  FSubsystemCollectionBase::Initialize
            ((FSubsystemCollectionBase *)&this->SubsystemCollection,(UObject *)this);
  return;
}

// PlayerAdded @ 147ed1350

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
ULocalPlayer::PlayerAdded(ULocalPlayer *this,UGameViewportClient *param_1,FPlatformUserId param_2)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UGameViewportClient *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ViewportClient).field0_0x0.DebugPtr = param_1;
  (**(code **)(this->_padding_ + 0x330))(this,param_2.InternalId);
  FSubsystemCollectionBase::Initialize
            ((FSubsystemCollectionBase *)&this->SubsystemCollection,(UObject *)this);
  return;
}

// PlayerRemoved @ 147ed13c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayer::PlayerRemoved(ULocalPlayer *this)

{
  int iVar1;
  bool bVar2;
  FSceneViewStateReference *this_00;
  FSceneViewStateReference *pFVar3;
  undefined1 local_res8 [8];
  
  FSubsystemCollectionBase::Deinitialize((FSubsystemCollectionBase *)&this->SubsystemCollection);
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar2) {
    this_00 = (FSceneViewStateReference *)(this->ViewStates).AllocatorInstance.Data;
    iVar1 = (this->ViewStates).ArrayNum;
    pFVar3 = this_00 + iVar1;
    while( true ) {
      if ((this->ViewStates).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSceneViewStateReference,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this_00 == pFVar3) break;
      FSceneViewStateReference::Destroy(this_00);
      this_00 = this_00 + 1;
    }
  }
  return;
}

// PreBeginHandshake @ 147ed24d0

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
ULocalPlayer::PreBeginHandshake
          (ULocalPlayer *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  if ((*(int *)&param_1->field_0x10 != 0) && (*(longlong **)&param_1->field_0x8 != (longlong *)0x0))
  {
    (**(code **)(**(longlong **)&param_1->field_0x8 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ReceivedPlayerController @ 147ed48f0

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
ULocalPlayer::ReceivedPlayerController(ULocalPlayer *this,APlayerController *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_ULocalPlayer::ReceivedPlayerController(APlayerController_*)_::_2_::FStat_STAT_LocalPlayer_HandlePlayerControllerChanged>
  FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  longlong lVar16;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_c8;
  APlayerController *local_b0;
  LARGE_INTEGER local_a8;
  FStatMessage local_a0;
  code *local_90;
  APlayerController **local_88;
  code *local_80;
  code **local_78;
  FDestructionSentinel local_70;
  FName local_58;
  FName local_50 [2];
  
  bVar6 = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_LocalPlayer_HandlePlayerControllerChanged ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ULocalPlayer::ReceivedPlayerController(APlayerController_*)_::_2_::FStat_STAT_LocalPlayer_HandlePlayerControllerChanged>
         )0x0) {
      pFVar13 = ::FName::FName(&local_58,"STAT_LocalPlayer_HandlePlayerControllerChanged");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_LocalPlayer_HandlePlayerControllerChanged,*pFVar13,
                 L"STAT_LocalPlayer_HandlePlayerControllerChanged","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_LocalPlayer_HandlePlayerControllerChanged;
  if (StatPtr_STAT_LocalPlayer_HandlePlayerControllerChanged ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ULocalPlayer::ReceivedPlayerController(APlayerController_*)_::_2_::FStat_STAT_LocalPlayer_HandlePlayerControllerChanged>
       )0x0) {
    pFVar13 = ::FName::FName(local_50,"STAT_LocalPlayer_HandlePlayerControllerChanged");
    FVar14 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ULocalPlayer::ReceivedPlayerController(APlayerController_*)_::_2_::FStat_STAT_LocalPlayer_HandlePlayerControllerChanged>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_LocalPlayer_HandlePlayerControllerChanged,*pFVar13,
                          L"STAT_LocalPlayer_HandlePlayerControllerChanged","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_c8 = *(FName *)FVar14;
  bVar7 = false;
  bVar9 = false;
  if ((local_c8.ComparisonIndex.Value.Value != 0) || (local_c8.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = local_c8.ComparisonIndex.Value.Value;
        local_res20.Number = local_c8.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                   ,0x2e5);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_c8,CycleScopeStart);
      bVar8 = true;
      goto LAB_147ed4a66;
    }
  }
  bVar8 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
LAB_147ed4a66:
  UPlayer::ReceivedPlayerController((UPlayer *)this,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnPlayerControllerChangedEvent,(FWriteAccessScope *)&local_70);
  puVar1 = &(this->OnPlayerControllerChangedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  uVar15 = *(int *)&(this->OnPlayerControllerChangedEvent).field_0x10 - 1;
  if (-1 < (int)uVar15) {
    lVar16 = (longlong)(int)uVar15 << 4;
    do {
      uVar12 = 0;
      if ((int)uVar15 < *(int *)&(this->OnPlayerControllerChangedEvent).field_0x10) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)&(this->OnPlayerControllerChangedEvent).field_0x8;
      if (((*(int *)(lVar16 + 8 + lVar3) == 0) ||
          (plVar4 = *(longlong **)(lVar16 + lVar3), plVar4 == (longlong *)0x0)) ||
         (cVar11 = (**(code **)(*plVar4 + 0x68))(), cVar11 == '\0')) {
        bVar6 = true;
      }
      lVar16 = lVar16 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  puVar1 = &(this->OnPlayerControllerChangedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnPlayerControllerChangedEvent,false);
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`ULocalPlayer::ReceivedPlayerController'::__l2::<lambda_1>,void,ULocalPlayerSubsystem_*>
             ::Call;
  local_88 = &local_b0;
  local_78 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`FObjectSubsystemCollection<ULocalPlayerSubsystem>::ForEachSubsystem'::__l2::<lambda_1>,void,USubsystem_*>
             ::Call;
  local_b0 = param_1;
  FSubsystemCollectionBase::ForEachSubsystemOfClass
            ((FSubsystemCollectionBase *)&this->SubsystemCollection,(UClass *)0x0,
             (TFunctionRef<void___cdecl(USubsystem_*)> *)&local_80);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (local_c8 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a0.NameAndInfo.Index = local_c8.ComparisonIndex.Value;
      local_a0.NameAndInfo.Number = local_c8.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_a0.StatData.Pad[4] = '\0';
      local_a0.StatData.Pad[5] = '\0';
      local_a0.StatData.Pad[6] = '\0';
      local_a0.StatData.Pad[7] = '\0';
      local_a0.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_a0.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_a0.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_a0.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a0);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SendSplitJoin @ 147eda3f0

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
ULocalPlayer::SendSplitJoin(ULocalPlayer *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x180))();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x000147eda437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x318))(this,param_1,uVar2,0);
  return;
}

// SendSplitJoin @ 147eda450

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

void __thiscall
ULocalPlayer::SendSplitJoin
          (ULocalPlayer *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UNetDriver *param_2,EJoinFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  EConnectionState EVar3;
  uint uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  UNetConnection *pUVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  undefined1 local_168 [8];
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  void *local_110;
  int local_108;
  void *local_100;
  int local_f8;
  FURL local_e8;
  FUniqueNetIdRepl local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  if ((param_2 != (UNetDriver *)0x0) &&
     (pUVar10 = (param_2->ServerConnection).field0_0x0.DebugPtr, pUVar10 != (UNetConnection *)0x0))
  {
    EVar3 = UNetConnection::GetConnectionState(pUVar10);
    if (EVar3 == USOCK_Open) {
      if (this->bSentSplitJoin != 0) {
        return;
      }
      if (this->_padding_ != 0) {
        pUVar10 = (param_2->ServerConnection).field0_0x0.DebugPtr;
        if (pUVar10->_padding_ == this->_padding_) {
          return;
        }
        uVar7 = 0;
        if (0 < (pUVar10->Children).ArrayNum) {
          lVar9 = 0;
          do {
            iVar5 = (pUVar10->Children).ArrayNum;
            uVar4 = 0;
            if ((int)uVar7 < iVar5) {
              uVar4 = ~uVar7 >> 0x1f;
            }
            if (uVar4 == 0) {
              local_178 = (longlong)(int)uVar7;
              local_170 = (longlong)iVar5;
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            if (*(longlong *)
                 (*(longlong *)((pUVar10->Children).AllocatorInstance.Data + lVar9) + 0x30) ==
                this->_padding_) {
              return;
            }
            pUVar10 = (param_2->ServerConnection).field0_0x0.DebugPtr;
            uVar7 = uVar7 + 1;
            lVar9 = lVar9 + 8;
          } while ((int)uVar7 < (pUVar10->Children).ArrayNum);
        }
      }
      FURL::FURL(&local_e8,(wchar_t *)0x0);
      FURL::LoadURLConfig(&local_e8,L"DefaultPlayer",&GGameIni);
      (**(code **)(this->_padding_ + 0x348))(this,&local_100);
      iVar5 = local_f8 + -1;
      if (local_f8 == 0) {
        iVar5 = 0;
      }
      if (0 < iVar5) {
        ::FString::PrintfImpl(&local_160,L"Name=%s");
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_160.Data.ArrayNum != 0) {
          FVar6.Data = local_160.Data.AllocatorInstance.Data;
        }
        FURL::AddOption(&local_e8,(wchar_t *)FVar6.Data);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
      }
      ::FString::PrintfImpl(&local_150,L"LocalPlayerId=%d");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_150.Data.ArrayNum != 0) {
        FVar6.Data = local_150.Data.AllocatorInstance.Data;
      }
      FURL::AddOption(&local_e8,(wchar_t *)FVar6.Data);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      (**(code **)(this->_padding_ + 0x350))(this,&local_110);
      iVar5 = local_108 + -1;
      if (local_108 == 0) {
        iVar5 = 0;
      }
      if (0 < iVar5) {
        ::FString::PrintfImpl(&local_140,L"%s");
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_140.Data.ArrayNum != 0) {
          FVar6.Data = local_140.Data.AllocatorInstance.Data;
        }
        FURL::AddOption(&local_e8,(wchar_t *)FVar6.Data);
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
      }
      iVar5 = param_1->ArrayNum;
      pFVar8 = (param_1->AllocatorInstance).Data;
      pFVar11 = pFVar8 + (longlong)iVar5 * 0x10;
      while( true ) {
        if (param_1->ArrayNum != iVar5) {
          local_168[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_168);
        }
        if (pFVar8 == pFVar11) break;
        ::FString::PrintfImpl(&local_130,L"%s");
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_130.Data.ArrayNum != 0) {
          FVar6.Data = local_130.Data.AllocatorInstance.Data;
        }
        FURL::AddOption(&local_e8,(wchar_t *)FVar6.Data);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        pFVar8 = pFVar8 + 0x10;
      }
      (**(code **)(this->_padding_ + 0x360))(this,&local_78);
      FURL::ToString(&local_e8,&local_120,false);
      pUVar10 = (param_2->ServerConnection).field0_0x0.DebugPtr;
      if ((param_3 & NoPawn) == None) {
        UE::Net::TNetControlMessageImpl<10,FString,FUniqueNetIdRepl>::Send
                  (pUVar10,&local_120,&local_78);
      }
      else {
        UE::Net::TNetControlMessageImpl<32,FString,FUniqueNetIdRepl>::Send
                  (pUVar10,&local_120,&local_78);
      }
      this->bSentSplitJoin = 1;
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      local_78._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
      if (local_78.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.ReplicationBytes.AllocatorInstance.Data);
      }
      if ((1 < (byte)local_78._padding_) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_78._padding_])(&local_78._padding_);
      if (local_110 != (void *)0x0) {
        FMemory::Free(local_110);
      }
      if (local_100 != (void *)0x0) {
        FMemory::Free(local_100);
      }
      if (local_e8.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Portal.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_e8.Op.AllocatorInstance.Data,local_e8.Op.ArrayNum)
      ;
      if (local_e8.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Op.AllocatorInstance.Data);
      }
      if (local_e8.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.RedirectURL.Data.AllocatorInstance.Data);
      }
      if (local_e8.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Map.Data.AllocatorInstance.Data);
      }
      if (local_e8.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Host.Data.AllocatorInstance.Data);
      }
      if (local_e8.Protocol.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_e8.Protocol.Data.AllocatorInstance.Data);
      return;
    }
  }
  if (2 < (byte)LogPlayerManagement._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
  }
  return;
}

// SetCachedUniqueNetId @ 147edbf30

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

void __thiscall ULocalPlayer::SetCachedUniqueNetId(ULocalPlayer *this,FUniqueNetIdRepl *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  byte bVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  plVar1 = &(this->CachedUniqueNetId)._padding_;
  if (&param_1->_padding_ != plVar1) {
    bVar3 = (byte)param_1->_padding_;
    local_38 = CONCAT71(local_38._1_7_,bVar3);
    if (1 < (ulonglong)bVar3) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xec,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[bVar3])(&local_48,&param_1->_padding_);
    uVar2 = (this->CachedUniqueNetId)._padding_;
    lVar5 = *plVar1;
    lVar6 = (this->CachedUniqueNetId)._padding_;
    *plVar1 = local_48;
    (this->CachedUniqueNetId)._padding_ = lStack_40;
    (this->CachedUniqueNetId)._padding_ = local_38;
    local_48 = lVar5;
    lStack_40 = lVar6;
    local_38 = uVar2;
    if (1 < (uVar2 & 0xff)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar2 & 0xff])(&local_48);
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&(this->CachedUniqueNetId).ReplicationBytes,&param_1->ReplicationBytes);
  return;
}

// SetConnectionIdentifier @ 147edc1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayer::SetConnectionIdentifier(ULocalPlayer *this,int param_1)

{
  this->ConnectionIdentifier = param_1;
  return;
}

// SetControllerId @ 147edc1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayer::SetControllerId(ULocalPlayer *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  IPlatformInputDeviceMapper *pIVar10;
  undefined4 *puVar11;
  uint uVar12;
  longlong lVar13;
  FName local_res8;
  undefined1 local_res10 [8];
  FString local_68;
  FDestructionSentinel local_58;
  
  if (this->ControllerId != param_1) {
    if (4 < (byte)LogPlayerManagement._0_1_) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_68);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    iVar2 = this->ControllerId;
    this->ControllerId = -1;
    UEngine::SwapControllerId(GEngine,this,iVar2,param_1);
    this->ControllerId = param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnControllerIdChangedEvent,(FWriteAccessScope *)&local_58);
    puVar1 = &(this->OnControllerIdChangedEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar12 = *(int *)&(this->OnControllerIdChangedEvent).field_0x10 - 1;
    if (-1 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar12 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&(this->OnControllerIdChangedEvent).field_0x10) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->OnControllerIdChangedEvent).field_0x8;
        if (((*(int *)(lVar13 + 8 + lVar3) == 0) ||
            (plVar4 = *(longlong **)(lVar13 + lVar3), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,param_1,iVar2), cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar13 = lVar13 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    puVar1 = &(this->OnControllerIdChangedEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnControllerIdChangedEvent,false);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    cVar8 = (**(code **)(GEngine->_padding_ + 0x350))();
    if (cVar8 != '\0') {
      pcVar5 = *(code **)(this->_padding_ + 0x330);
      pIVar10 = IPlatformInputDeviceMapper::Get();
      puVar11 = (undefined4 *)(**(code **)(pIVar10->_padding_ + 0xb8))(pIVar10,local_res10,param_1);
      (*pcVar5)(this,*puVar11);
    }
  }
  return;
}

// SetPlatformUserId @ 147edcaa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayer::SetPlatformUserId(ULocalPlayer *this,FPlatformUserId param_1)

{
  undefined1 *puVar1;
  FPlatformUserId FVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  IPlatformInputDeviceMapper *pIVar11;
  uint uVar12;
  longlong lVar13;
  FDestructionSentinel local_48;
  
  FVar2.InternalId = (this->PlatformUserId).InternalId;
  if (param_1.InternalId != FVar2.InternalId) {
    (this->PlatformUserId).InternalId = -1;
    UEngine::SwapPlatformUserId(GEngine,this,FVar2,param_1);
    (this->PlatformUserId).InternalId = param_1.InternalId;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnPlatformUserIdChangedEvent,(FWriteAccessScope *)&local_48);
    puVar1 = &(this->OnPlatformUserIdChangedEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar12 = *(int *)&(this->OnPlatformUserIdChangedEvent).field_0x10 - 1;
    if (-1 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar12 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&(this->OnPlatformUserIdChangedEvent).field_0x10) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->OnPlatformUserIdChangedEvent).field_0x8;
        if (((*(int *)(lVar13 + 8 + lVar3) == 0) ||
            (plVar4 = *(longlong **)(lVar13 + lVar3), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,param_1.InternalId,FVar2.InternalId),
           cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar13 = lVar13 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    puVar1 = &(this->OnPlatformUserIdChangedEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnPlatformUserIdChangedEvent,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    cVar8 = (**(code **)(GEngine->_padding_ + 0x350))();
    if (cVar8 != '\0') {
      pcVar5 = *(code **)(this->_padding_ + 0x328);
      pIVar11 = IPlatformInputDeviceMapper::Get();
      uVar10 = (**(code **)(pIVar11->_padding_ + 0xa8))(pIVar11,(this->PlatformUserId).InternalId);
      (*pcVar5)(this,uVar10);
    }
  }
  return;
}

// SpawnPlayActor @ 147ede690

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

bool __thiscall
ULocalPlayer::SpawnPlayActor(ULocalPlayer *this,FString *param_1,FString *param_2,UWorld *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ENetMode EVar7;
  UClass *pUVar8;
  AActor *pAVar9;
  UClass *pUVar10;
  FString *pFVar11;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar12;
  APlayerController *pAVar13;
  uchar uVar14;
  FScriptContainerElement *pFVar15;
  longlong *plVar16;
  ForAnyElementType FVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  undefined1 auStackY_1f8 [32];
  FString local_1b8;
  FString local_1a8;
  void *local_198;
  int local_190;
  void *local_188;
  int local_180;
  FURL local_178;
  FString local_108;
  FString local_f8;
  FUniqueNetIdRepl local_e8;
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pwVar19 = L"";
  if ((param_3 == (UWorld *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InWorld",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                         ,0x11c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  EVar7 = UWorld::InternalGetNetMode(param_3);
  if (EVar7 != NM_Client) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    FURL::FURL(&local_178,(FURL *)0x0,pwVar19,TRAVEL_Absolute);
    (**(code **)(this->_padding_ + 0x348))(this,&local_188);
    if ((local_180 != 0) && (0 < local_180 + -1)) {
      ::FString::PrintfImpl(&local_1b8,L"Name=%s");
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_1b8.Data.ArrayNum != 0) {
        FVar17.Data = local_1b8.Data.AllocatorInstance.Data;
      }
      FURL::AddOption(&local_178,(wchar_t *)FVar17.Data);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(this->_padding_ + 0x350))(this,&local_198);
    if ((local_190 != 0) && (0 < local_190 + -1)) {
      ::FString::PrintfImpl(&local_1a8,L"%s");
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_1a8.Data.ArrayNum != 0) {
        FVar17.Data = local_1a8.Data.AllocatorInstance.Data;
      }
      FURL::AddOption(&local_178,(wchar_t *)FVar17.Data);
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(this->_padding_ + 0x360))(this,&local_e8);
    pTVar12 = UEngine::GetGamePlayers(GEngine,param_3);
    pFVar2 = (pTVar12->AllocatorInstance).Data;
    for (pFVar15 = pFVar2; pFVar15 != pFVar2 + (longlong)pTVar12->ArrayNum * 8;
        pFVar15 = pFVar15 + 8) {
      if (*(ULocalPlayer **)pFVar15 == this) {
        uVar14 = (uchar)((longlong)pFVar15 - (longlong)pFVar2 >> 3);
        goto LAB_147ede97a;
      }
    }
    uVar14 = 0xff;
LAB_147ede97a:
    pAVar13 = UWorld::SpawnPlayActor
                        (param_3,(UPlayer *)this,ROLE_SimulatedProxy,&local_178,&local_e8,param_2,
                         uVar14,0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar13 != (APlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar13);
    }
    this->_padding_ = (longlong)pAVar13;
    local_e8._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    if (local_e8.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.ReplicationBytes.AllocatorInstance.Data);
    }
    if ((1 < (ulonglong)(byte)local_e8._padding_) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_e8._padding_])(&local_e8._padding_);
    if (local_198 != (void *)0x0) {
      FMemory::Free(local_198);
    }
    if (local_188 != (void *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_178.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Portal.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_178.Op.AllocatorInstance.Data,local_178.Op.ArrayNum)
    ;
    if (local_178.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Op.AllocatorInstance.Data);
    }
    if (local_178.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.RedirectURL.Data.AllocatorInstance.Data);
    }
    if (local_178.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Map.Data.AllocatorInstance.Data);
    }
    if (local_178.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Host.Data.AllocatorInstance.Data);
    }
    if (local_178.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Protocol.Data.AllocatorInstance.Data);
    }
    goto LAB_147edea9d;
  }
  pUVar10 = (this->PendingLevelPlayerControllerClass).Class.field0_0x0.DebugPtr;
  if ((pUVar10 == (UClass *)0x0) ||
     (pUVar8 = Z_Construct_UClass_APlayerController_NoRegister(), pUVar8 == (UClass *)0x0)) {
LAB_147ede747:
    pUVar10 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar8->_padding_;
    if (((int)pUVar10->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar1 * 8) != &pUVar8->_padding_
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_147ede747;
    pUVar10 = (this->PendingLevelPlayerControllerClass).Class.field0_0x0.DebugPtr;
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_b8);
  local_b8._52_4_ = local_b8._52_4_ | RF_Transient;
  pAVar9 = UWorld::SpawnActor(param_3,pUVar10,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                              (FActorSpawnParameters *)local_b8);
  if (pAVar9 == (AActor *)0x0) {
    pAVar9 = (AActor *)0x0;
  }
  else {
    pUVar10 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar10->_padding_;
    if ((*(int *)(pAVar9->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar10->_padding_)) {
      pFVar11 = GetTypeName<APlayerController>(&local_108);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      pFVar11 = GetFullNameForCastLogError<AActor>(&local_f8,pAVar9);
      if ((pFVar11->Data).ArrayNum != 0) {
        pwVar19 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar19,pwVar18);
    }
  }
  plVar16 = &this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar9 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar9);
  }
  *plVar16 = (longlong)pAVar9;
  pTVar12 = UEngine::GetGamePlayers(GEngine,param_3);
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  for (pFVar15 = pFVar2; pFVar15 != pFVar2 + (longlong)pTVar12->ArrayNum * 8; pFVar15 = pFVar15 + 8)
  {
    if (*(ULocalPlayer **)pFVar15 == this) {
      uVar6 = (undefined1)((longlong)pFVar15 - (longlong)pFVar2 >> 3);
      goto LAB_147ede807;
    }
  }
  uVar6 = 0xff;
LAB_147ede807:
  *(undefined1 *)(*plVar16 + 0x4fc) = uVar6;
  lVar3 = *plVar16;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  *(ULocalPlayer **)(lVar3 + 0x378) = this;
  if (local_b8._64_8_ != 0) {
    plVar16 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
LAB_147edea9d:
  return this->_padding_ != 0;
}

// StaticRegisterNativesULocalPlayer @ 147edf180

void __cdecl ULocalPlayer::StaticRegisterNativesULocalPlayer(void)

{
  return;
}

// GetOuterUEngine @ 1483856f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UEngine * __thiscall ULocalPlayer::GetOuterUEngine(ULocalPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  UEngine *pUVar3;
  
  if ((this->_padding_ & 0x10) == 0) {
    return (UEngine *)this->_padding_;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1063830263546511530>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\LocalPlayer.h"
                     ,0xaa,"false || !HasAnyFlags(RF_ClassDefaultObject)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UEngine *)(*pcVar1)();
    return pUVar3;
  }
  return (UEngine *)0x0;
}

// GetSubsystemBase @ 148843510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayerSubsystem * __thiscall
ULocalPlayer::GetSubsystemBase(ULocalPlayer *this,TSubclassOf<ULocalPlayerSubsystem> param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  TObjectPtr<USubsystem> TVar6;
  FSubsystemArray *pFVar7;
  ULocalPlayerSubsystem *pUVar8;
  undefined1 local_res10 [8];
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar5 = ULocalPlayerSubsystem::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (pUVar5 = *(UClass **)param_1.Class.field0_0x0, pUVar5 != (UClass *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      TVar6 = TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
              ::FindRef((TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                         *)&(this->SubsystemCollection).field_0x8,
                        (TObjectPtr<UClass_const_>)local_res10);
      if (*(ULocalPlayerSubsystem **)TVar6.field0_0x0 == (ULocalPlayerSubsystem *)0x0) {
        pFVar7 = FSubsystemCollectionBase::FindAndPopulateSubsystemArrayInternal
                           ((FSubsystemCollectionBase *)&this->SubsystemCollection,pUVar5);
        if ((pFVar7->Subsystems).ArrayNum < 1) {
          return (ULocalPlayerSubsystem *)0x0;
        }
        return *(ULocalPlayerSubsystem **)(pFVar7->Subsystems).AllocatorInstance.Data;
      }
      return *(ULocalPlayerSubsystem **)TVar6.field0_0x0;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3014280564560625717>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                     ,0x35,"SubsystemClass");
  if (!bVar4) {
    return (ULocalPlayerSubsystem *)0x0;
  }
  pcVar3 = (code *)swi(3);
  pUVar8 = (ULocalPlayerSubsystem *)(*pcVar3)();
  return pUVar8;
}

