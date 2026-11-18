// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// StaticClass @ 1476741c0

UClass * __cdecl UCameraModifier_CameraShake::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraModifier_CameraShake.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraModifier_CameraShake",
               &Z_Registration_Info_UClass_UCameraModifier_CameraShake.InnerSingleton,
               StaticRegisterNativesUCameraModifier_CameraShake,200,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Camera",InternalConstructor<UCameraModifier_CameraShake>,
               InternalVTableHelperCtorCaller<UCameraModifier_CameraShake>,local_res8,
               UCameraModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraModifier_CameraShake.InnerSingleton;
}

// UCameraModifier_CameraShake @ 147688e40

UCameraModifier_CameraShake * __thiscall
UCameraModifier_CameraShake::UCameraModifier_CameraShake
          (UCameraModifier_CameraShake *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCameraModifier_CameraShake__6B_;
  this->_padding_ = 0;
  (this->ActiveShakes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveShakes).ArrayNum = 0;
  (this->ActiveShakes).ArrayMax = 0;
  *(undefined8 *)&this->ExpiredPooledShakesMap = 0;
  *(undefined8 *)&(this->ExpiredPooledShakesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ExpiredPooledShakesMap).field_0x20 = 0;
  *(undefined4 *)&(this->ExpiredPooledShakesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ExpiredPooledShakesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExpiredPooledShakesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExpiredPooledShakesMap).field_0x34 = 0;
  *(undefined8 *)&(this->ExpiredPooledShakesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ExpiredPooledShakesMap).field_0x48 = 0;
  (this->DebugShakes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugShakes).ArrayNum = 0;
  (this->DebugShakes).ArrayMax = 0;
  return this;
}

// UCameraModifier_CameraShake @ 147688ec0

UCameraModifier_CameraShake * __thiscall
UCameraModifier_CameraShake::UCameraModifier_CameraShake
          (UCameraModifier_CameraShake *this,FObjectInitializer *param_1)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0x7f;
  this->_padding_ = 0;
  (this->ActiveShakes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveShakes).ArrayNum = 0;
  (this->ActiveShakes).ArrayMax = 0;
  *(undefined8 *)&this->ExpiredPooledShakesMap = 0;
  *(undefined8 *)&(this->ExpiredPooledShakesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ExpiredPooledShakesMap).field_0x20 = 0;
  this->_padding_ = (longlong)&___7UCameraModifier_CameraShake__6B_;
  *(undefined4 *)&(this->ExpiredPooledShakesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ExpiredPooledShakesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExpiredPooledShakesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExpiredPooledShakesMap).field_0x34 = 0;
  *(undefined8 *)&(this->ExpiredPooledShakesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ExpiredPooledShakesMap).field_0x48 = 0;
  (this->DebugShakes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugShakes).ArrayNum = 0;
  (this->DebugShakes).ArrayMax = 0;
  this->bRecordDebugData = false;
  this->SplitScreenShakeScale = 0.5;
  this_00 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UCameraModifier_CameraShake>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_00,(UCameraModifier_CameraShake *)&stack0x00000008,(pmf_cd9e60c5)this);
  return this;
}

// ~UCameraModifier_CameraShake @ 14768aaf0

void __thiscall
UCameraModifier_CameraShake::~UCameraModifier_CameraShake(UCameraModifier_CameraShake *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UCameraModifier_CameraShake__6B_;
  DestructItems<FCameraShakeDebugData,int>
            ((FCameraShakeDebugData *)(this->DebugShakes).AllocatorInstance.Data,
             (this->DebugShakes).ArrayNum);
  pFVar1 = (this->DebugShakes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ExpiredPooledShakesMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ExpiredPooledShakesMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExpiredPooledShakesMap);
  pFVar1 = (this->ActiveShakes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UCameraModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddCameraShake @ 14768fcf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraShakeBase * __thiscall
UCameraModifier_CameraShake::AddCameraShake
          (UCameraModifier_CameraShake *this,TSubclassOf<UCameraShakeBase> param_1,
          FAddCameraShakeParams *param_2)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  longlong *plVar4;
  APlayerController *this_00;
  UGameViewportClient *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  UObject *pUVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_AddCameraShake> FVar18;
  UClass *pUVar19;
  UClass *pUVar20;
  ULocalPlayer *pUVar21;
  UCameraShakeBase *pUVar22;
  UClass *pUVar23;
  longlong lVar24;
  FScriptContainerElement FVar25;
  UClass *pUVar26;
  UObject *pUVar27;
  FActiveCameraShakeInfo *pFVar28;
  uint uVar29;
  float fVar30;
  undefined1 local_res20 [8];
  FName local_178;
  FWeakObjectPtr local_160;
  FScriptContainerElement local_158;
  undefined4 local_154;
  FColor_u_0 local_150 [2];
  UCameraShakeSourceComponent *local_148;
  UObject *local_140;
  FName local_138;
  FName local_130;
  FString local_128;
  FString local_118;
  FName local_108;
  UCameraShakeSourceComponent *local_100;
  UCameraShakeSourceComponent *local_f8;
  undefined8 local_f0;
  UCameraShakeSourceComponent *local_e8;
  FName local_e0;
  TObjectPtr<APlayerCameraManager>_u_0 local_d8;
  float local_d0;
  ECameraShakePlaySpace local_cc;
  double local_c8;
  double dStack_c0;
  double local_b8;
  float local_b0;
  undefined1 local_ac;
  FName local_a8 [2];
  TRotator<double> local_98;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  
  pUVar26 = (UClass *)0x0;
  FVar18 = StatPtr_STAT_AddCameraShake;
  if (StatPtr_STAT_AddCameraShake == (FThreadSafeStaticStat<FStat_STAT_AddCameraShake>)0x0) {
    pFVar17 = ::FName::FName(local_a8,"STAT_AddCameraShake");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_AddCameraShake>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddCameraShake,*pFVar17,
                        L"AddCameraShake","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  FVar3 = *(FName *)FVar18;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_150[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_150[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_138.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Camera\\CameraModifier_CameraShake.cpp"
                   ,0xcf);
        bVar9 = true;
        bVar8 = true;
      }
    }
    bVar10 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar10 = true;
      local_178 = FVar3;
    }
  }
  if (5 < (byte)LogCameraShake._0_1_) {
    lVar24 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar24 == 0) ||
       (pUVar19 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar19 == (UClass *)0x0)) {
LAB_14768fea6:
      ::FString::FString(&local_128,L"None");
    }
    else {
      iVar16 = (int)pUVar19->_padding_;
      if ((*(int *)(lVar24 + 0x38) < iVar16) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar24 + 0x30) + (longlong)iVar16 * 8) !=
          &pUVar19->_padding_)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if ((!bVar13) || (*(longlong *)param_1.Class.field0_0x0 == 0)) goto LAB_14768fea6;
      local_108 = *(FName *)(*(longlong *)param_1.Class.field0_0x0 + 0x18);
      ::FName::ToString(&local_108,&local_128);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCameraShake);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  lVar24 = *(longlong *)param_1.Class.field0_0x0;
  pUVar19 = pUVar26;
  if ((lVar24 != 0) &&
     (pUVar20 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar20 != (UClass *)0x0)) {
    iVar16 = (int)pUVar20->_padding_;
    if ((*(int *)(lVar24 + 0x38) < iVar16) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar24 + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar20->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if ((bVar13) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
      local_148 = param_2->SourceComponent;
      fVar30 = param_2->Scale;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Initializer,
                 &local_78);
      if ((*(int *)&(param_2->Initializer).field_0x10 == 0) ||
         ((plVar4 = *(longlong **)&(param_2->Initializer).field_0x8, plVar4 == (longlong *)0x0 ||
          (cVar12 = (**(code **)(*plVar4 + 0x38))(), cVar12 == '\0')))) {
        FVar25 = (FScriptContainerElement)0x0;
      }
      else {
        FVar25 = (FScriptContainerElement)0x1;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_78);
      if ((((this->_padding_ != 0) &&
           (this_00 = *(APlayerController **)(this->_padding_ + 0x2c0),
           this_00 != (APlayerController *)0x0)) &&
          (pUVar21 = APlayerController::GetLocalPlayer(this_00), pUVar21 != (ULocalPlayer *)0x0)) &&
         ((pUVar5 = (pUVar21->ViewportClient).field0_0x0.DebugPtr,
          pUVar5 != (UGameViewportClient *)0x0 && ((pUVar5->ActiveSplitscreenType).Value != '\0'))))
      {
        fVar30 = fVar30 * this->SplitScreenShakeScale;
      }
      lVar24 = *(longlong *)param_1.Class.field0_0x0;
      if ((lVar24 != 0) &&
         (pUVar20 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar20 != (UClass *)0x0)) {
        iVar16 = (int)pUVar20->_padding_;
        if ((*(int *)(lVar24 + 0x38) < iVar16) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar24 + 0x30) + (longlong)iVar16 * 8) !=
            &pUVar20->_padding_)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (bVar13) {
          pUVar19 = *(UClass **)param_1.Class.field0_0x0;
        }
      }
      if ((pUVar19->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar19);
      }
      pUVar27 = (pUVar19->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar20 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
      lVar24 = *(longlong *)&pUVar27->field_0x10;
      iVar16 = (int)pUVar20->_padding_;
      if (((*(int *)(lVar24 + 0x38) < iVar16) ||
          ((longlong *)*(undefined1 **)(*(longlong *)(lVar24 + 0x30) + (longlong)iVar16 * 8) !=
           &pUVar20->_padding_)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0x1469,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        pUVar22 = (UCameraShakeBase *)(*pcVar7)();
        return pUVar22;
      }
      if ((pUVar19->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar19);
      }
      pUVar27 = (pUVar19->ClassDefaultObject).field0_0x0.DebugPtr;
      if ((pUVar27 != (UObject *)0x0) && (*(char *)(pUVar27 + 1) != '\0')) {
        iVar16 = (this->ActiveShakes).ArrayNum;
        pUVar27 = (UObject *)(this->ActiveShakes).AllocatorInstance.Data;
        local_140 = (UObject *)((longlong)&pUVar27->field_0x0 + (longlong)iVar16 * 3 * 8);
        while( true ) {
          pUVar11 = local_140;
          if ((this->ActiveShakes).ArrayNum != iVar16) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FActiveCameraShakeInfo,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (pUVar27 == pUVar11) break;
          pUVar19 = *(UClass **)pUVar27;
          if (pUVar19 != (UClass *)0x0) {
            lVar24 = *(longlong *)param_1.Class.field0_0x0;
            pUVar20 = pUVar26;
            if ((lVar24 != 0) &&
               (pUVar23 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar23 != (UClass *)0x0
               )) {
              iVar2 = (int)pUVar23->_padding_;
              if ((*(int *)(lVar24 + 0x38) < iVar2) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar24 + 0x30) + (longlong)iVar2 * 8)
                  != &pUVar23->_padding_)) {
                bVar13 = false;
              }
              else {
                bVar13 = true;
              }
              if (bVar13) {
                pUVar20 = *(UClass **)param_1.Class.field0_0x0;
              }
            }
            if (pUVar20 == (UClass *)pUVar19->_padding_) {
              if ((pUVar27->field_0x10 == '\0') && (FVar25 == (FScriptContainerElement)0x0)) {
                local_100 = local_148;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_148 != (UCameraShakeSourceComponent *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_148);
                }
                FWeakObjectPtr::operator=
                          ((FWeakObjectPtr *)&pUVar27->field_0x8,(FObjectPtr)&local_100);
                local_98.Pitch = (param_2->UserPlaySpaceRot).Pitch;
                local_98.Yaw = (param_2->UserPlaySpaceRot).Yaw;
                local_98.Roll = (param_2->UserPlaySpaceRot).Roll;
                UCameraShakeBase::StartShake
                          ((UCameraShakeBase *)pUVar19,(APlayerCameraManager *)this->_padding_,
                           fVar30,param_2->PlaySpace,&local_98);
                goto LAB_1476905cd;
              }
              UCameraShakeBase::StopShake((UCameraShakeBase *)pUVar19,true);
              UCameraShakeBase::TeardownShake((UCameraShakeBase *)pUVar19);
              *(undefined8 *)pUVar27 = 0;
            }
          }
          pUVar27 = (UObject *)&pUVar27->field_0x18;
        }
      }
      local_140 = *(UObject **)param_1.Class.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_140 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_140);
      }
      pUVar19 = (UClass *)
                ReclaimShakeFromExpiredPool(this,(TSubclassOf<UCameraShakeBase>)&local_140);
      if (pUVar19 == (UClass *)0x0) {
        lVar24 = *(longlong *)param_1.Class.field0_0x0;
        local_130.ComparisonIndex.Value = 0;
        local_130.Number = 0;
        pUVar19 = pUVar26;
        if ((lVar24 != 0) &&
           (pUVar20 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar20 != (UClass *)0x0)) {
          iVar16 = (int)pUVar20->_padding_;
          if ((*(int *)(lVar24 + 0x38) < iVar16) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar24 + 0x30) + (longlong)iVar16 * 8) !=
              &pUVar20->_padding_)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          if (bVar13) {
            pUVar19 = *(UClass **)param_1.Class.field0_0x0;
          }
        }
        pUVar19 = (UClass *)
                  NewObject<UCameraShakeBase>
                            ((UObject *)this,pUVar19,local_130,RF_NoFlags,(UObject *)0x0,false,
                             (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        if (pUVar19 == (UClass *)0x0) goto LAB_1476905cd;
      }
      if (FVar25 != (FScriptContainerElement)0x0) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Initializer,
                   &local_60);
        pUVar20 = pUVar26;
        if (*(int *)&(param_2->Initializer).field_0x10 != 0) {
          pUVar20 = *(UClass **)&(param_2->Initializer).field_0x8;
        }
        (**(code **)(pUVar20->_padding_ + 0x60))(pUVar20,pUVar19);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_60);
      }
      local_ac = 0;
      local_c8 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      dStack_c0 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_b8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)this->_padding_ != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this->_padding_);
      }
      local_d8 = (TObjectPtr<APlayerCameraManager>_u_0)this->_padding_;
      local_c8 = (param_2->UserPlaySpaceRot).Pitch;
      dStack_c0 = (param_2->UserPlaySpaceRot).Yaw;
      local_cc = param_2->PlaySpace;
      local_b8 = (param_2->UserPlaySpaceRot).Roll;
      if ((&param_2->DurationOverride != (TOptional<float> *)&local_b0) &&
         ((param_2->DurationOverride).bIsSet != false)) {
        local_b0 = (param_2->DurationOverride).TypedValue;
        local_ac = 1;
      }
      local_d0 = fVar30;
      UCameraShakeBase::StartShake
                ((UCameraShakeBase *)pUVar19,(FCameraShakeBaseStartParams *)&local_d8.ObjectPtr);
      bVar13 = false;
      pUVar20 = pUVar26;
      if (0 < (this->ActiveShakes).ArrayNum) {
        do {
          uVar29 = (uint)pUVar26;
          uVar15 = 0;
          if ((int)uVar29 < (this->ActiveShakes).ArrayNum) {
            uVar15 = ~uVar29 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            pUVar22 = (UCameraShakeBase *)(*pcVar7)();
            return pUVar22;
          }
          pFVar28 = (FActiveCameraShakeInfo *)
                    ((longlong)&pUVar20->_padding_ +
                    (longlong)(this->ActiveShakes).AllocatorInstance.Data);
          if ((pFVar28->ShakeInstance).field0_0x0.DebugPtr == (UCameraShakeBase *)0x0) {
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar19);
            }
            (pFVar28->ShakeInstance).field0_0x0.DebugPtr = (UCameraShakeBase *)pUVar19;
            local_f8 = local_148;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_148 != (UCameraShakeSourceComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_148);
            }
            FWeakObjectPtr::operator=(&(pFVar28->ShakeSource).WeakPtr,(FObjectPtr)&local_f8);
            pFVar28->bIsCustomInitialized = (bool)FVar25;
            bVar13 = true;
            AddCameraShakeDebugData(this,pFVar28);
          }
          pUVar26 = (UClass *)(ulonglong)(uVar29 + 1);
          pUVar20 = (UClass *)&pUVar20->_padding_;
        } while ((int)(uVar29 + 1) < (this->ActiveShakes).ArrayNum);
        if (bVar13) goto LAB_1476905cd;
      }
      local_160.ObjectIndex = 0;
      local_160.ObjectSerialNumber = 0;
      local_f0 = 0;
      FWeakObjectPtr::operator=(&local_160,(FObjectPtr)&local_f0);
      local_158 = (FScriptContainerElement)0x0;
      local_154 = 0xffffffff;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      local_e8 = local_148;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_148 != (UCameraShakeSourceComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_148);
      }
      FWeakObjectPtr::operator=(&local_160,(FObjectPtr)&local_e8);
      piVar1 = &(this->ActiveShakes).ArrayMax;
      iVar16 = (this->ActiveShakes).ArrayNum;
      local_158 = FVar25;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(this->ActiveShakes).AllocatorInstance,piVar1);
      }
      pFVar6 = (this->ActiveShakes).AllocatorInstance.Data;
      lVar24 = (longlong)iVar16;
      (this->ActiveShakes).ArrayNum = iVar16 + 1;
      *(UClass **)(pFVar6 + lVar24 * 0x18) = pUVar19;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      *(FWeakObjectPtr *)(pFVar6 + lVar24 * 0x18 + 8) = local_160;
      pFVar6[lVar24 * 0x18 + 0x10] = local_158;
      *(undefined4 *)(pFVar6 + lVar24 * 0x18 + 0x14) = local_154;
      if (5 < (byte)LogCameraShake._0_1_) {
        if (pUVar19 == (UClass *)0x0) {
          ::FString::FString(&local_118,L"None");
        }
        else {
          local_e0 = (FName)pUVar19->_padding_;
          ::FName::ToString(&local_e0,&local_118);
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCameraShake);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      iVar16 = (this->ActiveShakes).ArrayNum;
      uVar29 = iVar16 - 1;
      uVar15 = 0;
      if ((int)uVar29 < iVar16) {
        uVar15 = ~uVar29 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pUVar22 = (UCameraShakeBase *)(*pcVar7)();
        return pUVar22;
      }
      AddCameraShakeDebugData
                (this,(FActiveCameraShakeInfo *)
                      ((this->ActiveShakes).AllocatorInstance.Data +
                      (longlong)((this->ActiveShakes).ArrayNum + -1) * 0x18));
    }
  }
LAB_1476905cd:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(local_178,CycleScopeEnd);
  }
  return (UCameraShakeBase *)pUVar19;
}

// AddCameraShakeDebugData @ 147690640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier_CameraShake::AddCameraShakeDebugData
          (UCameraModifier_CameraShake *this,FActiveCameraShakeInfo *param_1)

{
  int *piVar1;
  UCameraShakeBase *pUVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  void *_Src_00;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  FName local_res8;
  FActiveCameraShakeInfo *local_res10;
  FString local_78;
  UObject *local_68;
  FString local_60;
  void *local_50;
  undefined8 local_48;
  undefined4 local_40;
  FScriptContainerElement local_3c;
  
  pUVar2 = (param_1->ShakeInstance).field0_0x0.DebugPtr;
  local_res10 = param_1;
  if (pUVar2 == (UCameraShakeBase *)0x0) {
    ::FString::FString(&local_78,L"None");
  }
  else {
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
    local_res8.Number = *(uint *)&pUVar2->field_0x1c;
    ::FName::ToString(&local_res8,&local_78);
  }
  pUVar3 = *(UObject **)&((param_1->ShakeInstance).field0_0x0.DebugPtr)->field_0x10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  uVar14 = 0;
  uVar16 = uVar14;
  if (0 < (this->DebugShakes).ArrayNum) {
    do {
      uVar15 = (uint)uVar16;
      uVar7 = 0;
      if ((int)uVar15 < (this->DebugShakes).ArrayNum) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->DebugShakes).AllocatorInstance.Data;
      if (pFVar4[uVar14 + 0x2c] != (FScriptContainerElement)0x0) {
        lVar12 = *(longlong *)(pFVar4 + uVar14);
        if ((lVar12 == 0) ||
           (pUVar9 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar9 == (UClass *)0x0)) {
LAB_14769077d:
          pUVar11 = (UObject *)0x0;
        }
        else {
          iVar8 = (int)pUVar9->_padding_;
          if ((*(int *)(lVar12 + 0x38) < iVar8) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar9->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_14769077d;
          pUVar11 = *(UObject **)(pFVar4 + uVar14);
        }
        if ((pUVar3 == (UObject *)0x0) ||
           (pUVar9 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar9 == (UClass *)0x0)) {
LAB_1476907b8:
          pUVar10 = (UObject *)0x0;
        }
        else {
          iVar8 = (int)pUVar9->_padding_;
          if ((*(int *)&pUVar3[1].field_0x10 < iVar8) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar3[1].field_0x8 + (longlong)iVar8 * 8)
              != &pUVar9->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          pUVar10 = pUVar3;
          if (!bVar6) goto LAB_1476907b8;
        }
        if (pUVar11 == pUVar10) {
          iVar8 = *(int *)(pFVar4 + uVar14 + 0x10);
          if (iVar8 == local_78.Data.ArrayNum) {
            if (1 < iVar8) {
              iVar8 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)(pFVar4 + uVar14 + 8),
                                 (wchar_t *)local_78.Data.AllocatorInstance.Data);
              bVar6 = iVar8 == 0;
              goto LAB_1476907eb;
            }
          }
          else {
            bVar6 = iVar8 + local_78.Data.ArrayNum == 1;
LAB_1476907eb:
            if (!bVar6) goto LAB_1476907f8;
          }
          param_1->DebugDataIndex = uVar15;
          pFVar4[uVar14 + 0x2c] = (FScriptContainerElement)0x0;
          *(undefined4 *)(pFVar4 + uVar14 + 0x28) = 0;
          goto LAB_1476909c5;
        }
      }
LAB_1476907f8:
      uVar14 = uVar14 + 0x30;
      uVar16 = (ulonglong)(uVar15 + 1);
    } while ((int)(uVar15 + 1) < (this->DebugShakes).ArrayNum);
  }
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_3c = (FScriptContainerElement)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  iVar8 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  local_68 = pUVar3;
  ::FString::AssignRange(&local_60,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar8);
  iVar8 = (this->DebugShakes).ArrayNum;
  piVar1 = &(this->DebugShakes).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->DebugShakes).AllocatorInstance,piVar1);
  }
  pFVar4 = (this->DebugShakes).AllocatorInstance.Data;
  (this->DebugShakes).ArrayNum = iVar8 + 1;
  lVar12 = (longlong)iVar8 * 0x30;
  *(UObject **)(pFVar4 + lVar12) = local_68;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_68);
  }
  _Src.Data = local_60.Data.AllocatorInstance.Data;
  pFVar13 = pFVar4 + lVar12 + 8;
  *(undefined8 *)&pFVar13->field_0x0 = 0;
  lVar17 = (longlong)local_60.Data.ArrayNum;
  *(int *)&pFVar13[8].field_0x0 = local_60.Data.ArrayNum;
  if (local_60.Data.ArrayNum == 0) {
    *(int *)(pFVar13 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_60.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_60.Data.ArrayNum,
               (int *)(pFVar13 + 0xc));
    memcpy(*(void **)&pFVar13->field_0x0,_Src.Data,lVar17 * 2);
  }
  _Src_00 = local_50;
  pFVar13 = pFVar4 + lVar12 + 0x18;
  *(undefined8 *)&pFVar13->field_0x0 = 0;
  lVar17 = (longlong)(int)local_48;
  *(int *)&pFVar13[8].field_0x0 = (int)local_48;
  if ((int)local_48 == 0) {
    *(int *)(pFVar13 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,(int)local_48,0,(ForAnyElementType *)pFVar13,(int)local_48,
               (int *)(pFVar13 + 0xc));
    memcpy(*(void **)&pFVar13->field_0x0,_Src_00,lVar17 * 0x38);
  }
  *(undefined4 *)(pFVar4 + lVar12 + 0x28) = local_40;
  pFVar4[lVar12 + 0x2c] = local_3c;
  local_res10->DebugDataIndex = iVar8;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
LAB_1476909c5:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// BeginDestroy @ 147694ae0

void __thiscall UCameraModifier_CameraShake::BeginDestroy(UCameraModifier_CameraShake *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// DisplayDebug @ 14769fd70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCameraModifier_CameraShake::DisplayDebug
          (UCameraModifier_CameraShake *this,UCanvas *param_1,FDebugDisplayInfo *param_2,
          float *param_3,float *param_4)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  UFont *pUVar8;
  FCameraShakeDuration FVar9;
  FString *pFVar10;
  UObject *pUVar11;
  uint uVar12;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  int local_res8;
  FString local_1e8;
  FString local_1d8;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  UFont *local_1b0;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  TStringView<wchar_t> local_148;
  FString local_138;
  FString local_128;
  TStringView<wchar_t> local_118;
  FFontRenderInfo local_108;
  FFontRenderInfo local_c8 [2];
  ulonglong uVar13;
  
  uVar13 = 0;
  UCanvas::SetDrawColor(param_1,&FColor::Yellow);
  pUVar8 = UEngine::GetSmallFont();
  fVar1 = *param_3;
  local_108._0_4_ = local_108._0_4_ & 0xfffffffc;
  local_108.GlowInfo._0_4_ = local_108.GlowInfo._0_4_ & 0xfffffffe;
  local_108.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
  local_108.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
  local_108.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_108.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  iVar7 = -((int)ROUND(__real_bf000000 - (*param_4 + *param_4) / fVar1) >> 1);
  local_108.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_108.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  iVar17 = iVar7 + 1;
  local_1c8 = (FName)this->_padding_;
  local_1b0 = pUVar8;
  ::FName::ToString(&local_1c8,&local_198);
  ::FString::PrintfImpl(&local_1a8,L"Modifier_CameraShake %s, Alpha:%f");
  fVar5 = __real_3f800000;
  local_178 = local_1a8.Data.AllocatorInstance.Data;
  iStack_170 = local_1a8.Data.ArrayNum + -1;
  if (local_1a8.Data.ArrayNum == 0) {
    iStack_170 = 0;
  }
  local_148._12_4_ = uStack_16c;
  local_148.Size = iStack_170;
  local_148.DataPtr = (wchar_t *)local_1a8.Data.AllocatorInstance.Data;
  UCanvas::DrawText(param_1,pUVar8,&local_148,fVar1,(float)iVar7 * fVar1,__real_3f800000,
                    __real_3f800000,&local_108);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  uVar14 = uVar13;
  uVar16 = uVar13;
  local_res8 = iVar17;
  if (0 < (this->ActiveShakes).ArrayNum) {
    do {
      uVar15 = (uint)uVar16;
      uVar12 = 0;
      if ((int)uVar15 < (this->ActiveShakes).ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->ActiveShakes).AllocatorInstance.Data;
      if (*(UCameraShakeBase **)(pFVar2 + uVar14) != (UCameraShakeBase *)0x0) {
        FVar9 = UCameraShakeBase::GetCameraShakeDuration(*(UCameraShakeBase **)(pFVar2 + uVar14));
        if (*(char *)((longlong)FVar9 + 4) == '\x01') {
          uVar12 = (uint)uVar13 | 2;
          pFVar10 = ::FString::FString(&local_138,L"Infinite");
        }
        else {
          uVar12 = (uint)uVar13 | 1;
          FVar9 = UCameraShakeBase::GetCameraShakeDuration(*(UCameraShakeBase **)(pFVar2 + uVar14));
          if (((*(char *)((longlong)FVar9 + 4) != '\0') &&
              (*(char *)((longlong)FVar9 + 4) != '\x02')) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type == ECameraShakeDurationType::Fixed || Type == ECameraShakeDurationType::Custom"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Camera\\CameraShakeBase.h"
                                 ,0xf1,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar10 = ::FString::SanitizeFloat(&local_128,(double)*(float *)FVar9,1);
          iVar17 = local_res8;
        }
        uVar13 = (ulonglong)uVar12;
        pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
        if (((uVar12 & 2) != 0) &&
           (uVar13 = (ulonglong)(uVar12 & 0xfffffffd),
           local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (((uVar13 & 1) != 0) &&
           (uVar13 = (ulonglong)((uint)uVar13 & 0xfffffffe),
           local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        INSERT(local_c8[0]._0_4_,0,1,1);
        INSERT(local_c8[0]._0_4_,0,0,1);
        INSERT(local_c8[0].GlowInfo._0_4_,0,0,1);
        fVar1 = *param_3;
        local_res8 = iVar17 + 1;
        local_c8[0].GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
        local_c8[0].GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
        local_c8[0].GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
        local_c8[0].GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
        local_c8[0].GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
        local_c8[0].GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar2 + uVar14 + 8));
        if (pUVar11 == (UObject *)0x0) {
          ::FString::FString(&local_1d8,L"None");
        }
        else {
          local_1c0.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x18;
          local_1c0.Number = *(uint *)&pUVar11->field_0x1c;
          ::FName::ToString(&local_1c0,&local_1d8);
        }
        if (*(longlong *)(pFVar2 + uVar14) == 0) {
          ::FString::FString(&local_1e8,L"None");
        }
        else {
          local_1b8 = *(FName *)(*(longlong *)(pFVar2 + uVar14) + 0x18);
          ::FName::ToString(&local_1b8,&local_1e8);
        }
        ::FString::PrintfImpl(&local_188,L"[%d] %s Source:%s");
        local_168 = local_188.Data.AllocatorInstance.Data;
        iStack_160 = local_188.Data.ArrayNum + -1;
        if (local_188.Data.ArrayNum == 0) {
          iStack_160 = 0;
        }
        local_118._12_4_ = uStack_15c;
        local_118.Size = iStack_160;
        local_118.DataPtr = (wchar_t *)local_188.Data.AllocatorInstance.Data;
        UCanvas::DrawText(param_1,local_1b0,&local_118,fVar1 + fVar1,(float)iVar17 * fVar1,fVar5,
                          fVar5,local_c8);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        iVar17 = local_res8;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
      }
      uVar14 = uVar14 + 0x18;
      uVar16 = (ulonglong)(uVar15 + 1);
    } while ((int)(uVar15 + 1) < (this->ActiveShakes).ArrayNum);
  }
  *param_4 = (float)iVar17 * *param_3;
  DisplayDebugGraphs(this,param_1,param_2);
  return;
}

// DisplayDebugGraphs @ 1476a0240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCameraModifier_CameraShake::DisplayDebugGraphs
          (UCameraModifier_CameraShake *this,UCanvas *param_1,FDebugDisplayInfo *param_2)

{
  FActiveCameraShakeInfo *pFVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  HHitProxy *pHVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  TConsoleVariableData<bool> *pTVar9;
  TConsoleVariableData<bool> *pTVar10;
  TConsoleVariableData<float> *pTVar11;
  FBatchedElements *this_00;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  UFont *pUVar16;
  size_t sVar17;
  uint uVar18;
  FActiveCameraShakeInfo *pFVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  FHitProxyId FVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 local_6e7 [3];
  uint local_6e4;
  float local_6e0;
  float local_6dc;
  float local_6d8;
  float local_6d4;
  float local_6d0;
  UFont *local_6c8;
  FBatchedElements *local_6c0;
  int local_6b8;
  int local_6b4;
  int local_6b0;
  int local_6ac;
  int local_6a8;
  int local_6a4;
  int local_6a0;
  int local_69c;
  int local_698;
  float local_694;
  FString local_690;
  FString local_680;
  FString local_670;
  FString local_660;
  FString local_650;
  FString local_640;
  int local_630;
  int local_62c;
  int local_628 [4];
  wchar_t *local_618;
  uint uStack_610;
  undefined4 uStack_60c;
  TVector2<double>_u_0 local_608;
  TVector2<double>_u_0 local_5f8;
  FScriptContainerElement *local_5e8;
  int iStack_5e0;
  undefined4 uStack_5dc;
  FScriptContainerElement *local_5d8;
  int iStack_5d0;
  undefined4 uStack_5cc;
  FScriptContainerElement *local_5c8;
  int iStack_5c0;
  undefined4 uStack_5bc;
  FScriptContainerElement *local_5b8;
  int iStack_5b0;
  undefined4 uStack_5ac;
  FScriptContainerElement *local_5a8;
  int iStack_5a0;
  undefined4 uStack_59c;
  FScriptContainerElement *local_598;
  int iStack_590;
  undefined4 uStack_58c;
  TVector<double>_u_0 local_588;
  TVector<double>_u_0 local_570;
  TVector<double>_u_0 local_558;
  TVector<double>_u_0 local_540;
  TVector<double>_u_0 local_528;
  TVector<double>_u_0 local_510;
  TVector<double>_u_0 local_4f8;
  TVector<double>_u_0 local_4e0;
  TVector<double>_u_0 local_4c8;
  TVector<double>_u_0 local_4b0;
  TVector<double>_u_0 local_498;
  TVector<double>_u_0 local_480;
  FLinearColor_u_0 local_468;
  FLinearColor_u_0 local_458;
  FLinearColor_u_0 local_448;
  FLinearColor_u_0 local_438;
  FLinearColor_u_0 local_428;
  FLinearColor_u_0 local_418;
  TStringView<wchar_t> local_408;
  TStringView<wchar_t> local_3f8;
  TStringView<wchar_t> local_3e8;
  TStringView<wchar_t> local_3d8;
  TStringView<wchar_t> local_3c8;
  TStringView<wchar_t> local_3b8;
  TStringView<wchar_t> local_3a8;
  FLinearColor_u_0 local_398;
  FFontRenderInfo local_388;
  FFontRenderInfo local_348;
  FFontRenderInfo local_308;
  FFontRenderInfo local_2c8;
  FFontRenderInfo local_288;
  FFontRenderInfo local_248;
  FFontRenderInfo local_208;
  FDepthFieldGlowInfo local_1c8;
  FCanvasTileItem local_188;
  
  pTVar9 = GShowCameraShakeDebugCVar.Ref;
  bVar14 = this->bRecordDebugData;
  bVar12 = IsInParallelGameThread();
  if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar10 = GShowCameraShakeDebugLocationCVar.Ref;
  if (pTVar9->ShadowedValue[0] == false) {
LAB_1476a0304:
    bVar12 = false;
  }
  else {
    bVar12 = IsInParallelGameThread();
    if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pTVar10->ShadowedValue[0] == false) goto LAB_1476a0304;
    bVar12 = true;
  }
  pTVar9 = GShowCameraShakeDebugCVar.Ref;
  bVar13 = IsInParallelGameThread();
  if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar10 = GShowCameraShakeDebugRotationCVar.Ref;
  if (pTVar9->ShadowedValue[0] != false) {
    bVar13 = IsInParallelGameThread();
    if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pTVar10->ShadowedValue[0] != false) {
      bVar13 = true;
      goto LAB_1476a039c;
    }
  }
  bVar13 = false;
LAB_1476a039c:
  if ((bVar12) || (bVar13)) {
    this->bRecordDebugData = true;
    if (bVar14 == false) {
      iVar3 = (this->ActiveShakes).ArrayNum;
      pFVar19 = (FActiveCameraShakeInfo *)(this->ActiveShakes).AllocatorInstance.Data;
      pFVar1 = pFVar19 + iVar3;
      while( true ) {
        if ((this->ActiveShakes).ArrayNum != iVar3) {
          local_6e7[0] = 0;
          `TCheckedPointerIterator<FActiveCameraShakeInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_6e7);
        }
        if (pFVar19 == pFVar1) break;
        if (pFVar19->DebugDataIndex == -1) {
          AddCameraShakeDebugData(this,pFVar19);
        }
        pFVar19 = pFVar19 + 1;
      }
    }
    UCanvas::SetDrawColor(param_1,&FColor::Yellow);
    pUVar16 = UEngine::GetSmallFont();
    local_6c8 = pUVar16;
    fVar26 = UFont::GetMaxCharHeight(pUVar16);
    pTVar9 = GCameraShakeDebugLargeGraphCVar.Ref;
    local_6d0 = fVar26;
    bVar14 = IsInParallelGameThread();
    if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
       (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar11 = GCameraShakeDebugInfoRecordLimitCVar.Ref;
    fVar35 = __real_42700000;
    fVar32 = __real_43200000;
    if (pTVar9->ShadowedValue[0] != false) {
      fVar35 = __real_42f00000;
      fVar32 = __real_43a00000;
    }
    fVar31 = (float)(param_1->SizeX + -0x14) - fVar32;
    local_6e0 = fVar31;
    local_6dc = fVar32;
    local_6d8 = fVar35;
    bVar14 = IsInParallelGameThread();
    if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
       (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_694 = pTVar11->ShadowedValue[0];
    if (pTVar11->ShadowedValue[0] <= 0.0) {
      local_694 = __real_40400000;
    }
    uVar22 = 0;
    local_6e4 = 0;
    local_694 = fVar32 / local_694;
    uVar24 = uVar22;
    fVar30 = __real_3f800000;
    fVar37 = __real_41200000;
    if (0 < (this->DebugShakes).ArrayNum) {
      do {
        uVar18 = 0;
        uVar23 = (uint)uVar24;
        uVar15 = 0;
        uVar20 = uVar15;
        if ((int)uVar23 < (this->DebugShakes).ArrayNum) {
          uVar20 = ~uVar23 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), uVar23 = local_6e4, bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar4 = (this->DebugShakes).AllocatorInstance.Data;
        if (*(int *)(pFVar4 + uVar22 + 0x20) != 0) {
          local_608._s_0.Y = (double)fVar35;
          local_608._s_0.X = (double)fVar32;
          fVar26 = (fVar35 + fVar26 + __real_41a00000) * (float)(int)uVar23 + __real_41a00000;
          local_5f8._s_0.X = (double)fVar31;
          local_5f8._s_0.Y = (double)fVar26;
          local_418._0_8_ = ___xmm_3f333333000000000000000000000000;
          local_418._8_8_ = _UNK_15104e498;
          FCanvasTileItem::FCanvasTileItem
                    (&local_188,(TVector2<double> *)&local_5f8._s_0,
                     (TVector2<double> *)&local_608._s_0,(FLinearColor *)&local_418._s_0);
          local_188._padding_._4_4_ = 0xb;
          UCanvas::DrawItem(param_1,(FCanvasItem *)&local_188);
          local_388.bEnableShadow = 0;
          local_388.bClipText = 0;
          local_388.GlowInfo.bEnableGlow = 0;
          local_388.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
          local_388.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
          local_388.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
          local_388.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
          local_388.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
          local_388.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
          if (*(int *)(pFVar4 + uVar22 + 0x10) == 0) {
            local_618 = L"";
LAB_1476a0727:
            sVar17 = wcslen(local_618);
            uVar15 = (uint)sVar17;
          }
          else {
            local_618 = *(wchar_t **)(pFVar4 + uVar22 + 8);
            if (local_618 != (wchar_t *)0x0) goto LAB_1476a0727;
          }
          local_408._12_4_ = uStack_60c;
          local_408.Size = uVar15;
          fVar35 = fVar26 + fVar35;
          local_408.DataPtr = local_618;
          local_6d4 = fVar35;
          uStack_610 = uVar15;
          UCanvas::DrawText(param_1,pUVar16,&local_408,fVar31,fVar35 + fVar37,fVar30,fVar30,
                            &local_388);
          local_1c8.bEnableGlow = 0;
          local_1c8.GlowColor.field0_0x0._0_12_ = ZEXT812(0);
          local_1c8.GlowColor.field0_0x0._s_0.A = 0.0;
          local_1c8.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
          local_1c8.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
          local_1c8.GlowInnerRadius.field0_0x0 =
               (TVector2<double>_u_0)local_1c8.GlowColor.field0_0x0;
          local_6c0 = FCanvas::GetBatchedElements
                                (param_1->Canvas,ET_Line,(FBatchedElementParameters *)0x0,
                                 (FTexture *)0x0,SE_BLEND_MAX,&local_1c8,true);
          pHVar5 = (param_1->Canvas->CurrentHitProxy).Reference;
          if (pHVar5 == (HHitProxy *)0x0) {
            FVar25.Index = -1;
          }
          else {
            FVar25.Index = (pHVar5->Id).Index;
          }
          fVar33 = 0.0;
          fVar36 = 0.0;
          fVar34 = 0.0;
          fVar38 = 0.0;
          if (0 < *(int *)(pFVar4 + uVar22 + 0x20)) {
            lVar21 = 0;
            do {
              uVar20 = 0;
              if ((int)uVar18 < *(int *)(pFVar4 + uVar22 + 0x20)) {
                uVar20 = ~uVar18 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar6 = *(longlong *)(pFVar4 + uVar22 + 0x18);
              uVar18 = uVar18 + 1;
              dVar27 = *(double *)(lVar21 + 8 + lVar6);
              dVar28 = (double)fVar33;
              if ((double)fVar33 <= dVar27) {
                dVar28 = dVar27;
              }
              dVar27 = *(double *)(lVar21 + 0x10 + lVar6);
              dVar29 = (double)(float)dVar28;
              if ((double)(float)dVar28 <= dVar27) {
                dVar29 = dVar27;
              }
              dVar27 = *(double *)(lVar21 + 0x18 + lVar6);
              dVar28 = (double)(float)dVar29;
              if ((double)(float)dVar29 <= dVar27) {
                dVar28 = dVar27;
              }
              fVar33 = (float)dVar28;
              dVar27 = *(double *)(lVar21 + 8 + lVar6);
              dVar28 = (double)fVar36;
              if (dVar27 <= (double)fVar36) {
                dVar28 = dVar27;
              }
              dVar27 = *(double *)(lVar21 + 0x10 + lVar6);
              dVar29 = (double)(float)dVar28;
              if (dVar27 <= (double)(float)dVar28) {
                dVar29 = dVar27;
              }
              dVar27 = *(double *)(lVar21 + 0x18 + lVar6);
              dVar28 = (double)(float)dVar29;
              if (dVar27 <= (double)(float)dVar29) {
                dVar28 = dVar27;
              }
              fVar36 = (float)dVar28;
              dVar27 = *(double *)(lVar21 + 0x28 + lVar6);
              dVar28 = (double)fVar34;
              if ((double)fVar34 <= dVar27) {
                dVar28 = dVar27;
              }
              dVar27 = *(double *)(lVar21 + 0x20 + lVar6);
              dVar29 = (double)(float)dVar28;
              if ((double)(float)dVar28 <= dVar27) {
                dVar29 = dVar27;
              }
              dVar27 = *(double *)(lVar21 + 0x30 + lVar6);
              dVar28 = (double)(float)dVar29;
              if ((double)(float)dVar29 <= dVar27) {
                dVar28 = dVar27;
              }
              fVar34 = (float)dVar28;
              dVar27 = *(double *)(lVar21 + 0x28 + lVar6);
              dVar28 = (double)fVar38;
              if (dVar27 <= (double)fVar38) {
                dVar28 = dVar27;
              }
              dVar27 = *(double *)(lVar21 + 0x20 + lVar6);
              dVar29 = (double)(float)dVar28;
              if (dVar27 <= (double)(float)dVar28) {
                dVar29 = dVar27;
              }
              dVar27 = *(double *)(lVar21 + 0x30 + lVar6);
              dVar28 = (double)(float)dVar29;
              if (dVar27 <= (double)(float)dVar29) {
                dVar28 = dVar27;
              }
              lVar21 = lVar21 + 0x38;
              fVar38 = (float)dVar28;
            } while ((int)uVar18 < *(int *)(pFVar4 + uVar22 + 0x20));
          }
          if (fVar33 - fVar36 < __real_3c23d70a) {
            fVar33 = fVar33 + __real_3ba3d70a;
            fVar36 = fVar36 + __real_bba3d70a;
          }
          if (fVar34 - fVar38 < __real_3c23d70a) {
            fVar34 = fVar34 + __real_3ba3d70a;
            fVar38 = fVar38 + __real_bba3d70a;
          }
          if (bVar12) {
            if (bVar13) {
              ::FString::PrintfImpl(&local_680,L"L=%.02f R=%.02f");
              pUVar16 = local_6c8;
              UFont::GetStringHeightAndWidth(local_6c8,&local_680,&local_630,&local_6b8);
              ::FString::PrintfImpl(&local_690,L"L=%.02f R=%.02f");
              UFont::GetStringHeightAndWidth(pUVar16,&local_690,&local_6b4,&local_6b0);
              fVar30 = __real_3f800000;
              local_348.bEnableShadow = 0;
              local_348.bClipText = 0;
              local_348.GlowInfo.bEnableGlow = 0;
              local_5e8 = local_680.Data.AllocatorInstance.Data;
              local_348.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
              local_348.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
              iStack_5e0 = local_680.Data.ArrayNum + -1;
              if (local_680.Data.ArrayNum == 0) {
                iStack_5e0 = 0;
              }
              local_348.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
              local_348.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
              local_348.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
              local_348.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
              local_3f8._12_4_ = uStack_5dc;
              local_3f8.Size = iStack_5e0;
              local_3f8.DataPtr = (wchar_t *)local_680.Data.AllocatorInstance.Data;
              UCanvas::DrawText(param_1,pUVar16,&local_3f8,
                                (fVar31 - (float)local_6b8) - __real_41200000,fVar26,__real_3f800000
                                ,__real_3f800000,&local_348);
              local_308.GlowInfo.GlowColor.field0_0x0._0_12_ = ZEXT812(0);
              local_308.GlowInfo.GlowColor.field0_0x0._s_0.A = 0.0;
              local_308.bEnableShadow = 0;
              local_308.bClipText = 0;
              local_308.GlowInfo.bEnableGlow = 0;
              local_5d8 = local_690.Data.AllocatorInstance.Data;
              local_308.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
              local_308.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
              iStack_5d0 = local_690.Data.ArrayNum + -1;
              if (local_690.Data.ArrayNum == 0) {
                iStack_5d0 = 0;
              }
              local_3e8._12_4_ = uStack_5cc;
              local_3e8.Size = iStack_5d0;
              local_3e8.DataPtr = (wchar_t *)local_690.Data.AllocatorInstance.Data;
              local_308.GlowInfo.GlowInnerRadius.field0_0x0 =
                   (TVector2<double>_u_0)local_308.GlowInfo.GlowColor.field0_0x0;
              UCanvas::DrawText(param_1,pUVar16,&local_3e8,
                                (fVar31 - (float)local_6b0) - __real_41200000,
                                fVar35 - (float)local_6b4,fVar30,fVar30,&local_308);
              if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_690.Data.AllocatorInstance.Data);
              }
              if (local_680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_680.Data.AllocatorInstance.Data);
              }
            }
            else {
              ::FString::PrintfImpl(&local_660,L"%.02f");
              pUVar16 = local_6c8;
              UFont::GetStringHeightAndWidth(local_6c8,&local_660,&local_62c,&local_6ac);
              ::FString::PrintfImpl(&local_670,L"%.02f");
              UFont::GetStringHeightAndWidth(pUVar16,&local_670,&local_6a8,&local_6a4);
              fVar30 = __real_3f800000;
              local_2c8.bEnableShadow = 0;
              local_2c8.bClipText = 0;
              local_2c8.GlowInfo.bEnableGlow = 0;
              local_5c8 = local_660.Data.AllocatorInstance.Data;
              local_2c8.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
              local_2c8.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
              iStack_5c0 = local_660.Data.ArrayNum + -1;
              if (local_660.Data.ArrayNum == 0) {
                iStack_5c0 = 0;
              }
              local_2c8.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
              local_2c8.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
              local_2c8.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
              local_2c8.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
              local_3d8._12_4_ = uStack_5bc;
              local_3d8.Size = iStack_5c0;
              local_3d8.DataPtr = (wchar_t *)local_660.Data.AllocatorInstance.Data;
              UCanvas::DrawText(param_1,pUVar16,&local_3d8,
                                (fVar31 - (float)local_6ac) - __real_41200000,fVar26,__real_3f800000
                                ,__real_3f800000,&local_2c8);
              local_288.GlowInfo.GlowColor.field0_0x0._0_12_ = ZEXT812(0);
              local_288.GlowInfo.GlowColor.field0_0x0._s_0.A = 0.0;
              local_288.bEnableShadow = 0;
              local_288.bClipText = 0;
              local_288.GlowInfo.bEnableGlow = 0;
              local_5b8 = local_670.Data.AllocatorInstance.Data;
              local_288.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
              local_288.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
              iStack_5b0 = local_670.Data.ArrayNum + -1;
              if (local_670.Data.ArrayNum == 0) {
                iStack_5b0 = 0;
              }
              local_3c8._12_4_ = uStack_5ac;
              local_3c8.Size = iStack_5b0;
              local_3c8.DataPtr = (wchar_t *)local_670.Data.AllocatorInstance.Data;
              local_288.GlowInfo.GlowInnerRadius.field0_0x0 =
                   (TVector2<double>_u_0)local_288.GlowInfo.GlowColor.field0_0x0;
              UCanvas::DrawText(param_1,pUVar16,&local_3c8,
                                (fVar31 - (float)local_6a4) - __real_41200000,
                                fVar35 - (float)local_6a8,fVar30,fVar30,&local_288);
              if (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_670.Data.AllocatorInstance.Data);
              }
              if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_660.Data.AllocatorInstance.Data);
              }
            }
          }
          else if (bVar13) {
            ::FString::PrintfImpl(&local_640,L"%.02f");
            pUVar16 = local_6c8;
            UFont::GetStringHeightAndWidth(local_6c8,&local_640,local_628,&local_6a0);
            ::FString::PrintfImpl(&local_650,L"%.02f");
            UFont::GetStringHeightAndWidth(pUVar16,&local_650,&local_69c,&local_698);
            local_248.bEnableShadow = 0;
            local_248.bClipText = 0;
            local_248.GlowInfo.bEnableGlow = 0;
            local_5a8 = local_640.Data.AllocatorInstance.Data;
            local_248.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
            local_248.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
            iStack_5a0 = local_640.Data.ArrayNum + -1;
            if (local_640.Data.ArrayNum == 0) {
              iStack_5a0 = 0;
            }
            local_248.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
            local_248.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
            local_248.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
            local_248.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
            local_3b8._12_4_ = uStack_59c;
            local_3b8.Size = iStack_5a0;
            local_3b8.DataPtr = (wchar_t *)local_640.Data.AllocatorInstance.Data;
            UCanvas::DrawText(param_1,pUVar16,&local_3b8,
                              (fVar31 - (float)local_6a0) - __real_41200000,fVar26,fVar30,fVar30,
                              &local_248);
            local_208.GlowInfo.GlowColor.field0_0x0._0_12_ = ZEXT812(0);
            local_208.GlowInfo.GlowColor.field0_0x0._s_0.A = 0.0;
            local_208.bEnableShadow = 0;
            local_208.bClipText = 0;
            local_208.GlowInfo.bEnableGlow = 0;
            local_598 = local_650.Data.AllocatorInstance.Data;
            local_208.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
            local_208.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
            iStack_590 = local_650.Data.ArrayNum + -1;
            if (local_650.Data.ArrayNum == 0) {
              iStack_590 = 0;
            }
            local_3a8._12_4_ = uStack_58c;
            local_3a8.Size = iStack_590;
            local_3a8.DataPtr = (wchar_t *)local_650.Data.AllocatorInstance.Data;
            local_208.GlowInfo.GlowInnerRadius.field0_0x0 =
                 (TVector2<double>_u_0)local_208.GlowInfo.GlowColor.field0_0x0;
            UCanvas::DrawText(param_1,pUVar16,&local_3a8,
                              (fVar31 - (float)local_698) - __real_41200000,
                              fVar35 - (float)local_69c,fVar30,fVar30,&local_208);
            if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_650.Data.AllocatorInstance.Data);
            }
            if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_640.Data.AllocatorInstance.Data);
            }
          }
          fVar35 = fVar30 / local_6d8;
          local_398._0_8_ = ___xmm_3f8000003dcccccd3dcccccd3f800000;
          local_398._8_8_ = _UNK_15174b778;
          local_468._0_8_ = ___xmm_3f8000003dcccccd3f8000003dcccccd;
          local_468._8_8_ = _UNK_15174b798;
          local_458._0_8_ = ___xmm_3f8000003f8000003dcccccd3dcccccd;
          local_458._8_8_ = _UNK_15174b808;
          local_448._0_8_ = ___xmm_3f8000003dcccccd3f8000003f800000;
          local_448._8_8_ = _UNK_15174b7a8;
          local_438._0_8_ = ___xmm_3f8000003dcccccd3f0000003f800000;
          local_438._8_8_ = _UNK_15174b788;
          local_428._0_8_ = ___xmm_3f8000003f4ccccd3f4ccccd3dcccccd;
          local_428._8_8_ = _UNK_15174b7e8;
          if ((*(int *)(pFVar4 + uVar22 + 0x20) < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar20 = 1;
          fVar2 = **(float **)(pFVar4 + uVar22 + 0x18);
          pUVar16 = local_6c8;
          fVar32 = local_6dc;
          fVar26 = local_6d0;
          fVar37 = __real_41200000;
          uVar23 = local_6e4;
          if (1 < *(int *)(pFVar4 + uVar22 + 0x20)) {
            lVar21 = 0x38;
            do {
              uVar23 = 0;
              if ((int)(uVar20 - 1) < *(int *)(pFVar4 + uVar22 + 0x20)) {
                uVar23 = -uVar20 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              fVar26 = local_694;
              lVar6 = *(longlong *)(pFVar4 + uVar22 + 0x18);
              uVar23 = 0;
              if ((int)uVar20 < *(int *)(pFVar4 + uVar22 + 0x20)) {
                uVar23 = ~uVar20 >> 0x1f;
              }
              fVar32 = (*(float *)(lVar21 + -0x38 + lVar6) - fVar2) * local_694;
              if ((uVar23 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar7 = *(longlong *)(pFVar4 + uVar22 + 0x18);
              fVar26 = (*(float *)(lVar7 + lVar21) - fVar2) * fVar26;
              if (bVar12) {
                dVar28 = (double)local_6d4;
                dVar27 = __real_3ff0000000000000 / (double)((fVar33 - fVar36) * fVar35);
                local_540._s_0.Z = 0.0;
                dVar29 = (double)fVar36;
                local_588._s_0.X = (double)(fVar32 + local_6e0);
                local_588._s_0.Z = 0.0;
                local_510._s_0.Z = 0.0;
                local_558._s_0.Z = 0.0;
                local_540._s_0.Y = dVar28 - (*(double *)(lVar21 + -0x30 + lVar6) - dVar29) * dVar27;
                local_570._s_0.Z = 0.0;
                local_528._s_0.Z = 0.0;
                local_588._s_0.Y = dVar28 - (*(double *)(lVar21 + -0x28 + lVar6) - dVar29) * dVar27;
                local_510._s_0.Y = dVar28 - (*(double *)(lVar21 + -0x20 + lVar6) - dVar29) * dVar27;
                local_570._s_0.X = (double)(fVar26 + local_6e0);
                local_558._s_0.Y = dVar28 - (*(double *)(lVar7 + 8 + lVar21) - dVar29) * dVar27;
                local_570._s_0.Y = dVar28 - (*(double *)(lVar7 + 0x10 + lVar21) - dVar29) * dVar27;
                local_528._s_0.Y = dVar28 - (*(double *)(lVar7 + 0x18 + lVar21) - dVar29) * dVar27;
                local_558._s_0.X = local_570._s_0.X;
                local_540._s_0.X = local_588._s_0.X;
                local_528._s_0.X = local_570._s_0.X;
                local_510._s_0.X = local_588._s_0.X;
                FBatchedElements::AddLine
                          (local_6c0,(TVector<double> *)&local_540._s_0,
                           (TVector<double> *)&local_558._s_0,(FLinearColor *)&local_398._s_0,FVar25
                           ,0.0,0.0,false);
                FBatchedElements::AddLine
                          (local_6c0,(TVector<double> *)&local_588._s_0,
                           (TVector<double> *)&local_570._s_0,(FLinearColor *)&local_468._s_0,FVar25
                           ,0.0,0.0,false);
                FBatchedElements::AddLine
                          (local_6c0,(TVector<double> *)&local_510._s_0,
                           (TVector<double> *)&local_528._s_0,(FLinearColor *)&local_458._s_0,FVar25
                           ,0.0,0.0,false);
              }
              this_00 = local_6c0;
              fVar31 = local_6e0;
              if (bVar13) {
                dVar27 = (double)local_6d4;
                dVar29 = __real_3ff0000000000000 / (double)((fVar34 - fVar38) * fVar35);
                local_4e0._s_0.X = (double)(fVar32 + local_6e0);
                dVar28 = (double)fVar38;
                local_4e0._s_0.Z = 0.0;
                local_4f8._s_0.X = (double)(fVar26 + local_6e0);
                local_4b0._s_0.Z = 0.0;
                local_480._s_0.Z = 0.0;
                local_4e0._s_0.Y = dVar27 - (*(double *)(lVar21 + -0x10 + lVar6) - dVar28) * dVar29;
                local_4f8._s_0.Z = 0.0;
                local_4c8._s_0.Z = 0.0;
                local_498._s_0.Z = 0.0;
                local_4b0._s_0.Y = dVar27 - (*(double *)(lVar21 + -0x18 + lVar6) - dVar28) * dVar29;
                local_480._s_0.Y = dVar27 - (*(double *)(lVar21 + -8 + lVar6) - dVar28) * dVar29;
                local_4f8._s_0.Y = dVar27 - (*(double *)(lVar7 + 0x28 + lVar21) - dVar28) * dVar29;
                local_4c8._s_0.Y = dVar27 - (*(double *)(lVar7 + 0x20 + lVar21) - dVar28) * dVar29;
                local_498._s_0.Y = dVar27 - (*(double *)(lVar7 + 0x30 + lVar21) - dVar28) * dVar29;
                local_4c8._s_0.X = local_4f8._s_0.X;
                local_4b0._s_0.X = local_4e0._s_0.X;
                local_498._s_0.X = local_4f8._s_0.X;
                local_480._s_0.X = local_4e0._s_0.X;
                FBatchedElements::AddLine
                          (local_6c0,(TVector<double> *)&local_4e0._s_0,
                           (TVector<double> *)&local_4f8._s_0,(FLinearColor *)&local_448._s_0,FVar25
                           ,0.0,0.0,false);
                FBatchedElements::AddLine
                          (this_00,(TVector<double> *)&local_4b0._s_0,
                           (TVector<double> *)&local_4c8._s_0,(FLinearColor *)&local_438._s_0,FVar25
                           ,0.0,0.0,false);
                FBatchedElements::AddLine
                          (this_00,(TVector<double> *)&local_480._s_0,
                           (TVector<double> *)&local_498._s_0,(FLinearColor *)&local_428._s_0,FVar25
                           ,0.0,0.0,false);
              }
              uVar20 = uVar20 + 1;
              lVar21 = lVar21 + 0x38;
              pUVar16 = local_6c8;
              fVar30 = __real_3f800000;
              fVar32 = local_6dc;
              fVar26 = local_6d0;
              fVar37 = __real_41200000;
              uVar23 = local_6e4;
            } while ((int)uVar20 < *(int *)(pFVar4 + uVar22 + 0x20));
          }
        }
        local_6e4 = uVar23 + 1;
        uVar22 = uVar22 + 0x30;
        uVar24 = (ulonglong)local_6e4;
        fVar35 = local_6d8;
      } while ((int)local_6e4 < (this->DebugShakes).ArrayNum);
    }
  }
  else {
    this->bRecordDebugData = false;
  }
  return;
}

// GetActiveCameraShakes @ 1476ad5d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier_CameraShake::GetActiveCameraShakes
          (UCameraModifier_CameraShake *this,
          TArray<FActiveCameraShakeInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == &this->ActiveShakes) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->ActiveShakes).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar1,&param_1->AllocatorInstance,&param_1->ArrayNum,
                       &param_1->ArrayMax);
    ConstructItems<FActiveCameraShakeInfo,FActiveCameraShakeInfo,int>
              ((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x18,
               (FActiveCameraShakeInfo *)(this->ActiveShakes).AllocatorInstance.Data,iVar1);
  }
  return;
}

// GetPrivateStaticClass @ 1476b46a0

UClass * __cdecl UCameraModifier_CameraShake::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraModifier_CameraShake.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraModifier_CameraShake",
               &Z_Registration_Info_UClass_UCameraModifier_CameraShake.InnerSingleton,
               StaticRegisterNativesUCameraModifier_CameraShake,200,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Camera",InternalConstructor<UCameraModifier_CameraShake>,
               InternalVTableHelperCtorCaller<UCameraModifier_CameraShake>,local_res8,
               UCameraModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraModifier_CameraShake.InnerSingleton;
}

// ModifyCamera @ 1476bc8a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCameraModifier_CameraShake::ModifyCamera
          (UCameraModifier_CameraShake *this,float param_1,FMinimalViewInfo *param_2)

{
  int *piVar1;
  TArray<FCameraShakeDebugData,TSizedDefaultAllocator<32>_> *pTVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TConsoleVariableData<float> *pTVar15;
  bool bVar16;
  undefined1 uVar17;
  uint uVar18;
  int iVar19;
  UCameraShakeSourceComponent *this_00;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar39;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar46;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_1b8 [8];
  ulonglong local_1b0;
  longlong local_1a8;
  TObjectPtr<UCameraShakeBase>_u_0 local_1a0;
  FWeakObjectPtr local_198;
  FScriptContainerElement local_190;
  undefined4 local_18c;
  FString local_188;
  FName local_178;
  float local_170;
  undefined4 uStack_16c;
  double dStack_168;
  double local_160;
  double dStack_158;
  undefined1 local_150 [16];
  undefined8 local_140;
  float local_138;
  undefined4 uStack_134;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined1 local_100 [16];
  ulonglong local_f0;
  double local_d8;
  double local_c0;
  
  UCameraModifier::ModifyCamera((UCameraModifier *)this,param_1,param_2);
  pTVar15 = GCameraShakeDebugInfoRecordLimitCVar.Ref;
  if (0.0 < *(float *)&this->_padding_) {
    bVar16 = IsInParallelGameThread();
    if (((!bVar16) && (bVar16 = IsInGameThread(), !bVar16)) &&
       (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar16)) {
      pcVar7 = (code *)swi(3);
      uVar17 = (*pcVar7)();
      return (bool)uVar17;
    }
    iVar23 = (this->ActiveShakes).ArrayNum;
    fVar6 = pTVar15->ShadowedValue[0];
    if (0 < iVar23) {
      pFVar25 = (this->ActiveShakes).AllocatorInstance.Data;
      pFVar21 = pFVar25 + (longlong)iVar23 * 0x18;
      while( true ) {
        if ((this->ActiveShakes).ArrayNum != iVar23) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FActiveCameraShakeInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar25 == pFVar21) break;
        if (*(longlong *)pFVar25 != 0) {
          local_c0 = (param_2->Location).field0_0x0._s_0.Z;
          dVar13 = (param_2->Location).field0_0x0._s_0.X;
          dVar14 = (param_2->Location).field0_0x0._s_0.Y;
          dVar44 = (param_2->Rotation).Pitch;
          dVar8 = (param_2->Rotation).Yaw;
          fVar49 = *(float *)&this->_padding_;
          local_d8 = (param_2->Rotation).Roll;
          bVar16 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar25 + 8));
          if (bVar16) {
            this_00 = (UCameraShakeSourceComponent *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar25 + 8));
            fVar33 = UCameraShakeSourceComponent::GetAttenuationFactor(this_00,&param_2->Location);
            fVar49 = fVar49 * fVar33;
          }
          UCameraShakeBase::UpdateAndApplyCameraShake
                    (*(UCameraShakeBase **)pFVar25,param_1,fVar49,param_2);
          if ((this->bRecordDebugData != false) && (iVar19 = *(int *)(pFVar25 + 0x14), iVar19 != -1)
             ) {
            if (((iVar19 < 0) || ((this->DebugShakes).ArrayNum <= iVar19)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("DebugShakes.IsValidIndex(ShakeInfo.DebugDataIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Camera\\CameraModifier_CameraShake.cpp"
                                    ,0x6e,L""), bVar16)) {
              pcVar7 = (code *)swi(3);
              uVar17 = (*pcVar7)();
              return (bool)uVar17;
            }
            uVar28 = *(uint *)(pFVar25 + 0x14);
            lVar24 = (longlong)(int)uVar28;
            uVar18 = 0;
            if ((int)uVar28 < (this->DebugShakes).ArrayNum) {
              uVar18 = ~uVar28 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar7 = (code *)swi(3);
              uVar17 = (*pcVar7)();
              return (bool)uVar17;
            }
            pFVar27 = (this->DebugShakes).AllocatorInstance.Data;
            iVar19 = *(int *)(pFVar27 + lVar24 * 0x30 + 0x20);
            if (iVar19 < 1) {
              local_170 = 0.0;
            }
            else {
              uVar28 = 0;
              if ((int)(iVar19 - 1U) < iVar19) {
                uVar28 = ~(iVar19 - 1U) >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar7 = (code *)swi(3);
                uVar17 = (*pcVar7)();
                return (bool)uVar17;
              }
              local_170 = *(float *)((longlong)*(int *)(pFVar27 + lVar24 * 0x30 + 0x20) * 0x38 +
                                     -0x38 + *(longlong *)(pFVar27 + lVar24 * 0x30 + 0x18));
            }
            local_170 = local_170 + param_1;
            auVar35._0_8_ = (param_2->Rotation).Roll - local_d8;
            dVar44 = (param_2->Rotation).Pitch - dVar44;
            auVar40._0_8_ = (param_2->Rotation).Yaw - dVar8;
            auVar40._8_8_ = 0;
            auVar34._8_4_ = SUB84(auVar40._0_8_,0);
            auVar34._0_8_ = dVar44;
            auVar34._12_4_ = (int)((ulonglong)auVar40._0_8_ >> 0x20);
            auVar34 = divpd(auVar34,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64)
            ;
            auVar34 = roundpd(auVar40,auVar34,3);
            dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
            auVar41._0_8_ = auVar34._0_8_ * dVar8;
            dVar9 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
            auVar41._8_8_ = auVar34._8_8_ * dVar9;
            auVar35._8_8_ = 0;
            auVar34 = divpd(auVar35,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64)
            ;
            dVar44 = dVar44 - auVar41._0_8_;
            dVar46 = auVar40._0_8_ - auVar41._8_8_;
            auVar34 = roundpd(auVar41,auVar34,3);
            dVar10 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
            auVar36._8_4_ = SUB84(dVar46,0);
            auVar36._0_8_ = dVar44;
            auVar36._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            dVar11 = auVar35._0_8_ - auVar34._0_8_ * dVar10;
            dVar12 = 0.0 - auVar34._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
            dVar39 = auVar36._8_8_ + dVar9;
            uVar29 = -(ulonglong)(0.0 <= dVar44);
            uVar31 = -(ulonglong)(0.0 <= dVar46);
            auVar42._0_8_ = uVar29 & (ulonglong)dVar44;
            auVar42._8_4_ = (undefined4)(uVar31 & (ulonglong)dVar46);
            auVar42._12_4_ = (undefined4)((uVar31 & (ulonglong)dVar46) >> 0x20);
            auVar47._0_4_ = ~(uint)uVar29 & SUB84(dVar44 + dVar8,0);
            auVar47._4_4_ = ~(uint)(uVar29 >> 0x20) & (uint)((ulonglong)(dVar44 + dVar8) >> 0x20);
            auVar47._8_4_ = ~(uint)uVar31 & SUB84(dVar39,0);
            auVar47._12_4_ = ~(uint)(uVar31 >> 0x20) & (uint)((ulonglong)dVar39 >> 0x20);
            auVar37._8_4_ = SUB84(dVar12,0);
            auVar37._0_8_ = dVar11;
            auVar37._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            dVar44 = auVar37._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
            auVar47 = auVar47 | auVar42;
            uVar29 = -(ulonglong)(0.0 <= dVar11);
            uVar31 = -(ulonglong)(0.0 <= dVar12);
            auVar48._0_4_ = ~(uint)uVar29 & SUB84(dVar11 + dVar10,0);
            auVar48._4_4_ = ~(uint)(uVar29 >> 0x20) & (uint)((ulonglong)(dVar11 + dVar10) >> 0x20);
            auVar48._8_4_ = ~(uint)uVar31 & SUB84(dVar44,0);
            auVar48._12_4_ = ~(uint)(uVar31 >> 0x20) & (uint)((ulonglong)dVar44 >> 0x20);
            auVar43._0_8_ = uVar29 & (ulonglong)dVar11;
            auVar43._8_4_ = (undefined4)(uVar31 & (ulonglong)dVar12);
            auVar43._12_4_ = (undefined4)((uVar31 & (ulonglong)dVar12) >> 0x20);
            auVar48 = auVar48 | auVar43;
            uVar31 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar47._0_8_);
            uVar32 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar47._8_8_);
            uVar30 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar48._0_8_);
            auVar45._0_8_ = uVar31 & (ulonglong)(auVar47._0_8_ - dVar8);
            uVar29 = uVar32 & (ulonglong)(auVar47._8_8_ - dVar9);
            auVar45._8_4_ = (undefined4)uVar29;
            auVar45._12_4_ = (undefined4)(uVar29 >> 0x20);
            auVar38._0_4_ = ~(uint)uVar31 & auVar47._0_4_;
            auVar38._4_4_ = ~(uint)(uVar31 >> 0x20) & auVar47._4_4_;
            auVar38._8_4_ = ~(uint)uVar32 & auVar47._8_4_;
            auVar38._12_4_ = ~(uint)(uVar32 >> 0x20) & auVar47._12_4_;
            local_150 = auVar45 | auVar38;
            dStack_168 = (param_2->Location).field0_0x0._s_0.X - dVar13;
            dStack_158 = (param_2->Location).field0_0x0._s_0.Z - local_c0;
            local_140 = uVar30 & (ulonglong)(auVar48._0_8_ - dVar10) |
                        CONCAT44(~(uint)(uVar30 >> 0x20) & auVar48._4_4_,
                                 ~(uint)uVar30 & auVar48._0_4_);
            local_160 = (param_2->Location).field0_0x0._s_0.Y - dVar14;
            local_100 = local_150;
            local_f0 = local_140;
            if (((*(float **)(pFVar27 + lVar24 * 0x30 + 0x18) <= &local_170) &&
                (&local_170 <
                 *(float **)(pFVar27 + lVar24 * 0x30 + 0x18) +
                 (longlong)*(int *)(pFVar27 + lVar24 * 0x30 + 0x24) * 0xe)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar7 = (code *)swi(3);
              uVar17 = (*pcVar7)();
              return (bool)uVar17;
            }
            iVar19 = *(int *)(pFVar27 + lVar24 * 0x30 + 0x20);
            if (iVar19 == *(int *)(pFVar27 + lVar24 * 0x30 + 0x24)) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x838,(ForAnyElementType *)(pFVar27 + lVar24 * 0x30 + 0x18),
                                  (int *)(pFVar27 + lVar24 * 0x30 + 0x24));
              *(int *)(pFVar27 + lVar24 * 0x30 + 0x20) = iVar19;
            }
            *(int *)(pFVar27 + lVar24 * 0x30 + 0x20) = iVar19 + 1;
            lVar20 = (longlong)iVar19 * 0x38;
            lVar24 = *(longlong *)(pFVar27 + lVar24 * 0x30 + 0x18);
            *(undefined8 *)(lVar20 + lVar24) = CONCAT44(uStack_16c,local_170);
            ((undefined8 *)(lVar20 + lVar24))[1] = dStack_168;
            pdVar3 = (double *)(lVar20 + 0x10 + lVar24);
            *pdVar3 = local_160;
            pdVar3[1] = dStack_158;
            puVar4 = (undefined8 *)(lVar20 + 0x20 + lVar24);
            *puVar4 = local_150._0_8_;
            puVar4[1] = local_150._8_8_;
            puVar5 = (undefined4 *)(lVar20 + 0x30 + lVar24);
            *puVar5 = (undefined4)local_140;
            puVar5[1] = local_140._4_4_;
          }
        }
        pFVar25 = pFVar25 + 0x18;
      }
      iVar23 = (this->ActiveShakes).ArrayNum;
      uVar28 = iVar23 - 1;
      local_1b0 = CONCAT44(local_1b0._4_4_,iVar23);
      if (-1 < (int)uVar28) {
        local_1a8 = (longlong)(int)uVar28;
        lVar24 = local_1a8 * 0x18;
        do {
          uVar26 = ~uVar28 >> 0x1f;
          uVar18 = 0;
          if ((int)uVar28 < (this->ActiveShakes).ArrayNum) {
            uVar18 = uVar26;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            uVar17 = (*pcVar7)();
            return (bool)uVar17;
          }
          pFVar21 = (this->ActiveShakes).AllocatorInstance.Data;
          local_1a0 = (TObjectPtr<UCameraShakeBase>_u_0)
                      ((TObjectPtr<UCameraShakeBase>_u_0 *)(pFVar21 + lVar24))->DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_1a0.DebugPtr != (UCameraShakeBase *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_1a0.DebugPtr);
          }
          local_198 = *(FWeakObjectPtr *)(pFVar21 + lVar24 + 8);
          local_190 = pFVar21[lVar24 + 0x10];
          local_18c = *(undefined4 *)(pFVar21 + lVar24 + 0x14);
          if (local_1a0.DebugPtr == (UCameraShakeBase *)0x0) {
LAB_1476bce44:
            uVar18 = 0;
            if ((int)local_1b0 <= (this->ActiveShakes).ArrayNum) {
              uVar18 = uVar26;
            }
            if ((uVar18 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar16)) {
              pcVar7 = (code *)swi(3);
              uVar17 = (*pcVar7)();
              return (bool)uVar17;
            }
            pFVar21 = (this->ActiveShakes).AllocatorInstance.Data + lVar24;
            iVar23 = (this->ActiveShakes).ArrayNum + ~uVar28;
            if (iVar23 != 0) {
              memmove(pFVar21,pFVar21 + 0x18,(longlong)iVar23 * 0x18);
            }
            piVar1 = &(this->ActiveShakes).ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,&(this->ActiveShakes).AllocatorInstance,(this->ActiveShakes).ArrayNum,
                       &(this->ActiveShakes).ArrayMax);
            if (5 < (byte)LogCameraShake._0_1_) {
              if (local_1a0.DebugPtr == (UCameraShakeBase *)0x0) {
                ::FString::FString(&local_188,L"None");
              }
              else {
                local_178.ComparisonIndex.Value = *(undefined4 *)((longlong)local_1a0 + 0x18);
                local_178.Number = *(undefined4 *)((longlong)local_1a0 + 0x1c);
                ::FName::ToString(&local_178,&local_188);
              }
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCameraShake);
              if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
            }
            SaveShakeInExpiredPoolIfPossible(this,(FActiveCameraShakeInfo *)&local_1a0.ObjectPtr);
          }
          else {
            bVar16 = UCameraShakeBase::IsFinished(local_1a0.DebugPtr);
            if ((bVar16) || (bVar16 = FWeakObjectPtr::IsStale(&local_198,true,false), bVar16)) {
              if (local_1a0.DebugPtr != (UCameraShakeBase *)0x0) {
                UCameraShakeBase::TeardownShake(local_1a0.DebugPtr);
              }
              goto LAB_1476bce44;
            }
          }
          lVar24 = lVar24 + -0x18;
          local_1b0 = CONCAT44(local_1b0._4_4_,(int)local_1b0 + -1);
          local_1a8 = local_1a8 + -1;
          uVar28 = uVar28 - 1;
        } while (-1 < (int)uVar28);
      }
    }
    pTVar2 = &this->DebugShakes;
    uVar28 = (this->DebugShakes).ArrayNum - 1;
    if (-1 < (int)uVar28) {
      local_1b0 = (ulonglong)(int)uVar28;
      lVar24 = local_1b0 * 0x30;
      do {
        uVar26 = ~uVar28 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar28 < (this->DebugShakes).ArrayNum) {
          uVar18 = uVar26;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        pFVar21 = (pTVar2->AllocatorInstance).Data;
        if (pFVar21[lVar24 + 0x2c] != (FScriptContainerElement)0x0) {
          fVar49 = *(float *)(pFVar21 + lVar24 + 0x28);
          *(float *)(pFVar21 + lVar24 + 0x28) = param_1 + fVar49;
          if (param_1 + fVar49 < fVar6) {
            iVar23 = *(int *)(pFVar21 + lVar24 + 0x20);
            pFVar21 = pFVar21 + lVar24 + 0x18;
            if (iVar23 < 1) {
              local_138 = 0.0;
            }
            else {
              uVar18 = 0;
              if ((int)(iVar23 - 1U) < iVar23) {
                uVar18 = ~(iVar23 - 1U) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar7 = (code *)swi(3);
                uVar17 = (*pcVar7)();
                return (bool)uVar17;
              }
              local_138 = *(float *)((longlong)*(int *)(pFVar21 + 8) * 0x38 + -0x38 +
                                    *(longlong *)pFVar21);
            }
            local_138 = local_138 + param_1;
            local_118 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
            dStack_110 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
            dStack_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            dStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_108 = UE::Math::TRotator<double>::ZeroRotator.Roll;
            if (((*(float **)pFVar21 <= &local_138) &&
                (&local_138 < *(float **)pFVar21 + (longlong)*(int *)(pFVar21 + 0xc) * 0xe)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar7 = (code *)swi(3);
              uVar17 = (*pcVar7)();
              return (bool)uVar17;
            }
            iVar23 = *(int *)(pFVar21 + 8);
            if (iVar23 == *(int *)(pFVar21 + 0xc)) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x838,(ForAnyElementType *)pFVar21,(int *)(pFVar21 + 0xc));
              *(int *)(pFVar21 + 8) = iVar23;
            }
            *(int *)(pFVar21 + 8) = iVar23 + 1;
            lVar22 = (longlong)iVar23 * 0x38;
            lVar20 = *(longlong *)pFVar21;
            *(undefined8 *)(lVar22 + lVar20) = CONCAT44(uStack_134,local_138);
            ((undefined8 *)(lVar22 + lVar20))[1] = dStack_130;
            pdVar3 = (double *)(lVar22 + 0x10 + lVar20);
            *pdVar3 = dStack_128;
            pdVar3[1] = dStack_120;
            pdVar3 = (double *)(lVar22 + 0x20 + lVar20);
            *pdVar3 = local_118;
            pdVar3[1] = dStack_110;
            puVar5 = (undefined4 *)(lVar22 + 0x30 + lVar20);
            *puVar5 = (undefined4)local_108;
            puVar5[1] = local_108._4_4_;
          }
          else {
            uVar18 = 0;
            if ((int)uVar28 < (this->DebugShakes).ArrayNum) {
              uVar18 = uVar26;
            }
            if ((uVar18 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar7 = (code *)swi(3);
              uVar17 = (*pcVar7)();
              return (bool)uVar17;
            }
            pFVar21 = (pTVar2->AllocatorInstance).Data + lVar24;
            if (*(void **)(pFVar21 + 0x18) != (void *)0x0) {
              FMemory::Free(*(void **)(pFVar21 + 0x18));
            }
            if (*(void **)(pFVar21 + 8) != (void *)0x0) {
              FMemory::Free(*(void **)(pFVar21 + 8));
            }
            iVar23 = (this->DebugShakes).ArrayNum + ~uVar28;
            if (iVar23 != 0) {
              memmove(pFVar21,pFVar21 + 0x30,(longlong)iVar23 * 0x30);
            }
            piVar1 = &(this->DebugShakes).ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,&pTVar2->AllocatorInstance,(this->DebugShakes).ArrayNum,
                       &(this->DebugShakes).ArrayMax);
            iVar23 = (this->ActiveShakes).ArrayNum;
            pFVar25 = (this->ActiveShakes).AllocatorInstance.Data;
            pFVar21 = pFVar25 + (longlong)iVar23 * 0x18;
            while( true ) {
              if ((this->ActiveShakes).ArrayNum != iVar23) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<FActiveCameraShakeInfo,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res20);
              }
              if (pFVar25 == pFVar21) break;
              if ((*(uint *)(pFVar25 + 0x14) == uVar28) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ShakeInfo.DebugDataIndex != Index",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Camera\\CameraModifier_CameraShake.cpp"
                                      ,0xa0,L""), bVar16)) {
                pcVar7 = (code *)swi(3);
                uVar17 = (*pcVar7)();
                return (bool)uVar17;
              }
              if ((int)uVar28 < *(int *)(pFVar25 + 0x14)) {
                *(int *)(pFVar25 + 0x14) = *(int *)(pFVar25 + 0x14) + -1;
              }
              pFVar25 = pFVar25 + 0x18;
            }
          }
        }
        local_1b0 = local_1b0 + -1;
        lVar24 = lVar24 + -0x30;
        uVar28 = uVar28 - 1;
      } while (-1 < (int)uVar28);
    }
    iVar23 = (this->DebugShakes).ArrayNum;
    uVar29 = (ulonglong)iVar23;
    pFVar25 = (pTVar2->AllocatorInstance).Data;
    local_1b0 = CONCAT44(local_1b0._4_4_,iVar23);
    pFVar21 = pFVar25 + 0x20;
    pFVar27 = pFVar25 + uVar29 * 0x30;
    while( true ) {
      if ((this->DebugShakes).ArrayNum != (int)uVar29) {
        local_1b8[0] = 0;
        `TCheckedPointerIterator<FCameraShakeDebugData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1b8);
      }
      if (pFVar25 == pFVar27) break;
      iVar23 = *(int *)pFVar21;
      if (iVar23 < 1) {
LAB_1476bd46c:
        uVar29 = local_1b0 & 0xffffffff;
        pFVar25 = pFVar25 + 0x30;
        pFVar21 = pFVar21 + 0x30;
      }
      else {
        uVar28 = 0;
        if ((int)(iVar23 - 1U) < iVar23) {
          uVar28 = ~(iVar23 - 1U) >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        lVar24 = (longlong)*(int *)pFVar21;
        uVar28 = 0;
        fVar49 = *(float *)(lVar24 * 0x38 + -0x38 + *(longlong *)(pFVar21 + -8));
        if (*(int *)pFVar21 < 1) goto LAB_1476bd46c;
        lVar20 = 0;
        do {
          uVar18 = 0;
          if ((int)uVar28 < (int)lVar24) {
            uVar18 = ~uVar28 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            uVar17 = (*pcVar7)();
            return (bool)uVar17;
          }
          iVar23 = *(int *)pFVar21;
          lVar24 = (longlong)iVar23;
          if (fVar49 - fVar6 < *(float *)(lVar20 + *(longlong *)(pFVar21 + -8))) {
            uVar18 = 0;
            if ((int)uVar28 <= iVar23) {
              uVar18 = ~uVar28 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar16)) {
              pcVar7 = (code *)swi(3);
              uVar17 = (*pcVar7)();
              return (bool)uVar17;
            }
            if (uVar28 != 0) {
              if (*(int *)pFVar21 - uVar28 != 0) {
                memmove(*(void **)(pFVar21 + -8),
                        (void *)((longlong)(int)uVar28 * 0x38 + (longlong)*(void **)(pFVar21 + -8)),
                        (longlong)(int)(*(int *)pFVar21 - uVar28) * 0x38);
              }
              *(uint *)pFVar21 = *(int *)pFVar21 - uVar28;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x38,8,(ForAnyElementType *)(pFVar21 + -8),*(int *)pFVar21,
                         (int *)(pFVar21 + 4));
            }
            goto LAB_1476bd46c;
          }
          uVar28 = uVar28 + 1;
          lVar20 = lVar20 + 0x38;
        } while ((int)uVar28 < iVar23);
        uVar29 = local_1b0 & 0xffffffff;
        pFVar25 = pFVar25 + 0x30;
        pFVar21 = pFVar21 + 0x30;
      }
    }
  }
  return false;
}

// OnPreGarbageCollect @ 1476bd9a0

void __thiscall UCameraModifier_CameraShake::OnPreGarbageCollect(UCameraModifier_CameraShake *this)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  longlong lStack_68;
  TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *plStack_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong lStack_38;
  TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
  *pTStack_28;
  char cStack_20;
  char cStack_1f;
  
  TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)auStack_88,
             (TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
              *)&this->ExpiredPooledShakesMap);
  cStack_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = auStack_88._16_16_;
  plStack_58 = (longlong *)auStack_88._0_8_;
  auStack_50._0_8_ = auStack_88._8_8_;
  lStack_38 = lStack_68;
  pTStack_30 = pTStack_60;
  uVar8 = auStack_88._24_8_ >> 0x20;
  if ((int)auStack_88._28_4_ < *(int *)(auStack_88._16_8_ + 0x18)) {
    iVar12 = 1;
    uVar9 = auStack_88._28_4_;
    pTStack_28 = (TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
                  *)&this->ExpiredPooledShakesMap;
    do {
      plVar3 = plStack_58;
      lVar11 = *plStack_58;
      lVar13 = *(longlong *)((longlong)(int)uVar9 * 0x20 + lVar11);
      bVar4 = true;
      if ((lVar13 == 0) ||
         (pUVar6 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_1476c2b42:
        TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_30,uVar9);
        cStack_20 = '\x01';
      }
      else {
        iVar7 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar13 + 0x38) < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        if (((!bVar4) || (lVar11 = *(longlong *)((longlong)(int)uVar8 * 0x20 + lVar11), lVar11 == 0)
            ) || ((*(uint *)(lVar11 + 8) >> 0x1e & 1) != 0)) goto LAB_1476c2b42;
        lVar11 = *plVar3 + (longlong)(int)uVar9 * 0x20;
        uVar9 = *(int *)(lVar11 + 0x10) - 1;
        if (-1 < (int)uVar9) {
          lVar10 = (longlong)(int)uVar9;
          lVar13 = lVar10 * 8;
          do {
            uVar5 = 0;
            if ((int)uVar9 < *(int *)(lVar11 + 0x10)) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            lVar1 = *(longlong *)(lVar13 + *(longlong *)(lVar11 + 8));
            if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0)) {
              uVar5 = 0;
              if ((int)uVar9 < *(int *)(lVar11 + 0x10)) {
                uVar5 = ~uVar9 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar7 = ~uVar9 + *(int *)(lVar11 + 0x10);
              if (1 < iVar7) {
                iVar7 = 1;
              }
              if (iVar7 != 0) {
                memmove((void *)(*(longlong *)(lVar11 + 8) + lVar10 * 8),
                        (void *)(*(longlong *)(lVar11 + 8) +
                                (longlong)(*(int *)(lVar11 + 0x10) - iVar7) * 8),
                        (longlong)iVar7 << 3);
              }
              *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,(ForAnyElementType *)(lVar11 + 8),*(int *)(lVar11 + 0x10),
                         (int *)(lVar11 + 0x14));
            }
            lVar10 = lVar10 + -1;
            lVar13 = lVar13 + -8;
            uVar9 = uVar9 - 1;
          } while (-1 < (int)uVar9);
        }
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar8 = (ulonglong)uStack_3c;
      uVar9 = uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((cStack_20 != '\0') && (cStack_1f != '\0')) {
      uVar9 = *(int *)&(pTStack_28->Elements).field_0x8 - *(int *)&(pTStack_28->Elements).field_0x34
      ;
      if (3 < uVar9) {
        uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar11 & 0x1f);
      }
      if (((0 < (int)uVar9) && (pTStack_28->HashSize < iVar12)) || (iVar12 < pTStack_28->HashSize))
      {
        pTStack_28->HashSize = iVar12;
        TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
        ::Rehash(pTStack_28);
      }
    }
  }
  return;
}

// ReclaimShakeFromExpiredPool @ 1476bfeb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraShakeBase * __thiscall
UCameraModifier_CameraShake::ReclaimShakeFromExpiredPool
          (UCameraModifier_CameraShake *this,TSubclassOf<UCameraShakeBase> param_1)

{
  void *_Dst;
  TObjectPtr<UClass>_u_0 TVar1;
  UObject *pUVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UCameraShakeBase *pUVar7;
  uint uVar8;
  UClass *pUVar9;
  longlong lVar10;
  TObjectPtr<UClass>_u_0 local_res8;
  
  TVar1 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (TVar1.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar1.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar8 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  iVar5 = TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSubclassOf<UCameraShakeBase_const_>_>
                    ((TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
                      *)&this->ExpiredPooledShakesMap,uVar8 >> 0x10 ^ uVar8,
                     (TSubclassOf<UCameraShakeBase_const_> *)&local_res8.ObjectPtr);
  if (iVar5 != -1) {
    pUVar9 = (UClass *)0x0;
    lVar10 = (longlong)iVar5 * 0x20 + *(longlong *)&this->ExpiredPooledShakesMap;
    pUVar6 = (UClass *)(lVar10 + 8);
    if (lVar10 == 0) {
      pUVar6 = pUVar9;
    }
    if ((pUVar6 != (UClass *)0x0) && (iVar5 = (int)pUVar6->_padding_, 0 < iVar5)) {
      pUVar2 = *(UObject **)(pUVar6->_padding_ + -8 + (longlong)iVar5 * 8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      iVar5 = (int)pUVar6->_padding_;
      uVar8 = iVar5 - 1;
      _Dst = (void *)(pUVar6->_padding_ + (longlong)(int)uVar8 * 8);
      iVar5 = ~uVar8 + iVar5;
      if (iVar5 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
      }
      *(int *)&pUVar6->_padding_ = (int)pUVar6->_padding_ + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)pUVar6,(int)pUVar6->_padding_,
                 (int *)((longlong)&pUVar6->_padding_ + 4));
      lVar10 = *(longlong *)param_1.Class.field0_0x0;
      FVar3.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      FVar3.Number = *(uint *)&pUVar2->field_0x1c;
      if ((lVar10 != 0) &&
         (pUVar6 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar6 != (UClass *)0x0)) {
        iVar5 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar10 + 0x38) < iVar5) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar9 = *(UClass **)param_1.Class.field0_0x0;
        }
      }
      pUVar7 = NewObject<UCameraShakeBase>
                         ((UObject *)this,pUVar9,FVar3,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      return pUVar7;
    }
  }
  return (UCameraShakeBase *)0x0;
}

// RemoveAllCameraShakes @ 1476c1210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier_CameraShake::RemoveAllCameraShakes(UCameraModifier_CameraShake *this,bool param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FActiveCameraShakeInfo *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FActiveCameraShakeInfo *pFVar6;
  undefined1 local_res10 [8];
  
  iVar4 = (this->ActiveShakes).ArrayNum;
  pFVar5 = (this->ActiveShakes).AllocatorInstance.Data;
  pFVar2 = pFVar5 + (longlong)iVar4 * 0x18;
  while( true ) {
    if ((this->ActiveShakes).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FActiveCameraShakeInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar2) break;
    UCameraShakeBase::StopShake(*(UCameraShakeBase **)pFVar5,param_1);
    pFVar5 = pFVar5 + 0x18;
  }
  if (param_1) {
    iVar4 = (this->ActiveShakes).ArrayNum;
    pFVar6 = (FActiveCameraShakeInfo *)(this->ActiveShakes).AllocatorInstance.Data;
    pFVar3 = pFVar6 + iVar4;
    while( true ) {
      if ((this->ActiveShakes).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FActiveCameraShakeInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar6 == pFVar3) break;
      UCameraShakeBase::TeardownShake((pFVar6->ShakeInstance).field0_0x0.DebugPtr);
      SaveShakeInExpiredPoolIfPossible(this,pFVar6);
      pFVar6 = pFVar6 + 1;
    }
    piVar1 = &(this->ActiveShakes).ArrayMax;
    (this->ActiveShakes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->ActiveShakes).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// RemoveAllCameraShakesFromSource @ 1476c1300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier_CameraShake::RemoveAllCameraShakesFromSource
          (UCameraModifier_CameraShake *this,UCameraShakeSourceComponent *param_1,bool param_2)

{
  TArray<FActiveCameraShakeInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  UCameraShakeBase *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UCameraShakeSourceComponent *pUVar7;
  FScriptContainerElement *_Dst;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FActiveCameraShakeInfo *pFVar11;
  int iVar12;
  longlong lVar13;
  FName local_res20;
  FString local_58;
  
  iVar12 = (this->ActiveShakes).ArrayNum;
  uVar10 = iVar12 - 1;
  if (-1 < (int)uVar10) {
    pTVar1 = &this->ActiveShakes;
    lVar13 = (longlong)(int)uVar10 * 0x18;
    do {
      uVar9 = ~uVar10 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar10 < (this->ActiveShakes).ArrayNum) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = (FActiveCameraShakeInfo *)((pTVar1->AllocatorInstance).Data + lVar13);
      pUVar7 = (UCameraShakeSourceComponent *)FWeakObjectPtr::Get(&(pFVar11->ShakeSource).WeakPtr);
      if (((pUVar7 == param_1) &&
          (pUVar3 = (pFVar11->ShakeInstance).field0_0x0.DebugPtr, pUVar3 != (UCameraShakeBase *)0x0)
          ) && (UCameraShakeBase::StopShake(pUVar3,param_2), param_2)) {
        UCameraShakeBase::TeardownShake((pFVar11->ShakeInstance).field0_0x0.DebugPtr);
        SaveShakeInExpiredPoolIfPossible(this,pFVar11);
        uVar6 = 0;
        if (iVar12 <= (this->ActiveShakes).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Dst = (pTVar1->AllocatorInstance).Data + lVar13;
        iVar8 = (this->ActiveShakes).ArrayNum + ~uVar10;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + 0x18,(longlong)iVar8 * 0x18);
        }
        piVar2 = &(this->ActiveShakes).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&pTVar1->AllocatorInstance,(this->ActiveShakes).ArrayNum,
                   &(this->ActiveShakes).ArrayMax);
        if (5 < (byte)LogCameraShake._0_1_) {
          pUVar3 = (pFVar11->ShakeInstance).field0_0x0.DebugPtr;
          if (pUVar3 == (UCameraShakeBase *)0x0) {
            ::FString::FString(&local_58,L"None");
          }
          else {
            local_res20.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
            local_res20.Number = *(uint *)&pUVar3->field_0x1c;
            ::FName::ToString(&local_res20,&local_58);
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCameraShake);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
      }
      iVar12 = iVar12 + -1;
      lVar13 = lVar13 + -0x18;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// RemoveAllCameraShakesOfClass @ 1476c1540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier_CameraShake::RemoveAllCameraShakesOfClass
          (UCameraModifier_CameraShake *this,TSubclassOf<UCameraShakeBase> param_1,bool param_2)

{
  TArray<FActiveCameraShakeInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  UCameraShakeBase *pUVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  UClass *pUVar9;
  FScriptContainerElement *_Dst;
  int iVar10;
  int iVar11;
  longlong lVar12;
  FActiveCameraShakeInfo *pFVar13;
  uint uVar14;
  uint uVar15;
  FName local_68;
  FString local_60 [2];
  
  iVar11 = (this->ActiveShakes).ArrayNum;
  uVar14 = iVar11 - 1;
  if (-1 < (int)uVar14) {
    pTVar1 = &this->ActiveShakes;
    lVar12 = (longlong)(int)uVar14 * 0x18;
    do {
      uVar15 = ~uVar14 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar14 < (this->ActiveShakes).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar13 = (FActiveCameraShakeInfo *)((pTVar1->AllocatorInstance).Data + lVar12);
      pUVar3 = (pFVar13->ShakeInstance).field0_0x0.DebugPtr;
      if (pUVar3 != (UCameraShakeBase *)0x0) {
        lVar4 = *(longlong *)param_1.Class.field0_0x0;
        lVar5 = *(longlong *)&pUVar3->field_0x10;
        if ((lVar4 != 0) &&
           (pUVar9 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar9 != (UClass *)0x0)) {
          iVar10 = (int)pUVar9->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar10) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar10 * 8) !=
              &pUVar9->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if ((bVar7) && (lVar4 = *(longlong *)param_1.Class.field0_0x0, lVar4 != 0)) {
            if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38)) ||
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
                lVar4 + 0x30)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if ((bVar7) && (UCameraShakeBase::StopShake(pUVar3,param_2), param_2)) {
              UCameraShakeBase::TeardownShake(pUVar3);
              SaveShakeInExpiredPoolIfPossible(this,pFVar13);
              uVar8 = 0;
              if (iVar11 <= (this->ActiveShakes).ArrayNum) {
                uVar8 = uVar15;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              _Dst = (pTVar1->AllocatorInstance).Data + lVar12;
              iVar10 = (this->ActiveShakes).ArrayNum + ~uVar14;
              if (iVar10 != 0) {
                memmove(_Dst,_Dst + 0x18,(longlong)iVar10 * 0x18);
              }
              piVar2 = &(this->ActiveShakes).ArrayNum;
              *piVar2 = *piVar2 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,&pTVar1->AllocatorInstance,(this->ActiveShakes).ArrayNum,
                         &(this->ActiveShakes).ArrayMax);
              if (5 < (byte)LogCameraShake._0_1_) {
                pUVar3 = (pFVar13->ShakeInstance).field0_0x0.DebugPtr;
                if (pUVar3 == (UCameraShakeBase *)0x0) {
                  ::FString::FString(local_60,L"None");
                }
                else {
                  local_68.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
                  local_68.Number = *(uint *)&pUVar3->field_0x1c;
                  ::FName::ToString(&local_68,local_60);
                }
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCameraShake)
                ;
                if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
                }
              }
            }
          }
        }
      }
      lVar12 = lVar12 + -0x18;
      iVar11 = iVar11 + -1;
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
  return;
}

// RemoveAllCameraShakesOfClassFromSource @ 1476c1870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier_CameraShake::RemoveAllCameraShakesOfClassFromSource
          (UCameraModifier_CameraShake *this,TSubclassOf<UCameraShakeBase> param_1,
          UCameraShakeSourceComponent *param_2,bool param_3)

{
  TArray<FActiveCameraShakeInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  UCameraShakeBase *pUVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  UCameraShakeSourceComponent *pUVar9;
  UClass *pUVar10;
  FScriptContainerElement *_Dst;
  int iVar11;
  uint uVar12;
  FActiveCameraShakeInfo *pFVar13;
  longlong lVar14;
  uint uVar15;
  int local_78;
  FName local_68;
  FString local_60 [2];
  
  local_78 = (this->ActiveShakes).ArrayNum;
  uVar12 = local_78 - 1;
  if (-1 < (int)uVar12) {
    pTVar1 = &this->ActiveShakes;
    lVar14 = (longlong)(int)uVar12 * 0x18;
    do {
      uVar15 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < (this->ActiveShakes).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar13 = (FActiveCameraShakeInfo *)((pTVar1->AllocatorInstance).Data + lVar14);
      pUVar9 = (UCameraShakeSourceComponent *)FWeakObjectPtr::Get(&(pFVar13->ShakeSource).WeakPtr);
      if ((pUVar9 == param_2) &&
         (pUVar3 = (pFVar13->ShakeInstance).field0_0x0.DebugPtr, pUVar3 != (UCameraShakeBase *)0x0))
      {
        lVar4 = *(longlong *)param_1.Class.field0_0x0;
        lVar5 = *(longlong *)&pUVar3->field_0x10;
        if ((lVar4 != 0) &&
           (pUVar10 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar10 != (UClass *)0x0)) {
          iVar11 = (int)pUVar10->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar11) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar11 * 8) !=
              &pUVar10->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if ((bVar7) && (lVar4 = *(longlong *)param_1.Class.field0_0x0, lVar4 != 0)) {
            if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38)) ||
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
                lVar4 + 0x30)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if ((bVar7) &&
               (UCameraShakeBase::StopShake((pFVar13->ShakeInstance).field0_0x0.DebugPtr,param_3),
               param_3)) {
              UCameraShakeBase::TeardownShake((pFVar13->ShakeInstance).field0_0x0.DebugPtr);
              SaveShakeInExpiredPoolIfPossible(this,pFVar13);
              uVar8 = 0;
              if (local_78 <= (this->ActiveShakes).ArrayNum) {
                uVar8 = uVar15;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              _Dst = (pTVar1->AllocatorInstance).Data + lVar14;
              iVar11 = (this->ActiveShakes).ArrayNum + ~uVar12;
              if (iVar11 != 0) {
                memmove(_Dst,_Dst + 0x18,(longlong)iVar11 * 0x18);
              }
              piVar2 = &(this->ActiveShakes).ArrayNum;
              *piVar2 = *piVar2 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,&pTVar1->AllocatorInstance,(this->ActiveShakes).ArrayNum,
                         &(this->ActiveShakes).ArrayMax);
              if (5 < (byte)LogCameraShake._0_1_) {
                pUVar3 = (pFVar13->ShakeInstance).field0_0x0.DebugPtr;
                if (pUVar3 == (UCameraShakeBase *)0x0) {
                  ::FString::FString(local_60,L"None");
                }
                else {
                  local_68.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
                  local_68.Number = *(uint *)&pUVar3->field_0x1c;
                  ::FName::ToString(&local_68,local_60);
                }
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCameraShake)
                ;
                if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
                }
              }
            }
          }
        }
      }
      lVar14 = lVar14 + -0x18;
      local_78 = local_78 + -1;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return;
}

// RemoveCameraShake @ 1476c1ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier_CameraShake::RemoveCameraShake
          (UCameraModifier_CameraShake *this,UCameraShakeBase *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  UCameraShakeBase *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  FActiveCameraShakeInfo *pFVar10;
  FName local_res8;
  FString local_48;
  
  uVar7 = 0;
  if (0 < (this->ActiveShakes).ArrayNum) {
    lVar8 = 0;
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < (this->ActiveShakes).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (FActiveCameraShakeInfo *)((this->ActiveShakes).AllocatorInstance.Data + lVar8);
      pUVar2 = (pFVar10->ShakeInstance).field0_0x0.DebugPtr;
      if (pUVar2 == (UCameraShakeBase *)0x0) {
        bVar4 = param_1 == (UCameraShakeBase *)0x0;
      }
      else {
        bVar4 = pUVar2 == param_1;
      }
      if (bVar4) {
        UCameraShakeBase::StopShake(param_1,param_2);
        if (!param_2) {
          return;
        }
        UCameraShakeBase::TeardownShake(param_1);
        SaveShakeInExpiredPoolIfPossible(this,pFVar10);
        uVar5 = 0;
        if ((int)(uVar7 + 1) <= (this->ActiveShakes).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (this->ActiveShakes).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x18;
        iVar6 = (this->ActiveShakes).ArrayNum + ~uVar7;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + 0x18,(longlong)iVar6 * 0x18);
        }
        piVar1 = &(this->ActiveShakes).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&(this->ActiveShakes).AllocatorInstance,(this->ActiveShakes).ArrayNum,
                   &(this->ActiveShakes).ArrayMax);
        if ((byte)LogCameraShake._0_1_ < 6) {
          return;
        }
        pUVar2 = (pFVar10->ShakeInstance).field0_0x0.DebugPtr;
        if (pUVar2 == (UCameraShakeBase *)0x0) {
          ::FString::FString(&local_48,L"None");
        }
        else {
          local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
          local_res8.Number = *(uint *)&pUVar2->field_0x1c;
          ::FName::ToString(&local_res8,&local_48);
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCameraShake);
        if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        return;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x18;
    } while ((int)uVar7 < (this->ActiveShakes).ArrayNum);
  }
  return;
}

// RemoveCameraShakeDebugData @ 1476c2120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier_CameraShake::RemoveCameraShakeDebugData
          (UCameraModifier_CameraShake *this,FActiveCameraShakeInfo *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  iVar1 = param_1->DebugDataIndex;
  if (iVar1 != -1) {
    if ((iVar1 < 0) || ((this->DebugShakes).ArrayNum <= iVar1)) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1065205026743385551>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Camera\\CameraModifier_CameraShake.cpp"
                         ,0x231,"DebugShakes.IsValidIndex(ShakeInfo.DebugDataIndex)");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar2 = param_1->DebugDataIndex;
    uVar5 = 0;
    if ((int)uVar2 < (this->DebugShakes).ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((this->DebugShakes).AllocatorInstance.Data[(longlong)(int)uVar2 * 0x30 + 0x2c] !=
        (FScriptContainerElement)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1065205026743385550>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Camera\\CameraModifier_CameraShake.cpp"
                         ,0x232,"DebugShakes[ShakeInfo.DebugDataIndex].bIsInactive == false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar2 = param_1->DebugDataIndex;
    uVar5 = 0;
    if ((int)uVar2 < (this->DebugShakes).ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (this->DebugShakes).AllocatorInstance.Data[(longlong)(int)uVar2 * 0x30 + 0x2c] =
         (FScriptContainerElement)0x1;
    uVar2 = param_1->DebugDataIndex;
    uVar5 = 0;
    if ((int)uVar2 < (this->DebugShakes).ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)((this->DebugShakes).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x30 + 0x28)
         = 0;
  }
  return;
}

// RemoveInvalidObjectsFromExpiredPool @ 1476c28f0

void __thiscall
UCameraModifier_CameraShake::RemoveInvalidObjectsFromExpiredPool(UCameraModifier_CameraShake *this)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
              *)&this->ExpiredPooledShakesMap);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar8 = local_88._24_8_ >> 0x20;
  if ((int)local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    iVar12 = 1;
    uVar9 = local_88._28_4_;
    local_28 = (TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
                *)&this->ExpiredPooledShakesMap;
    do {
      plVar3 = local_58;
      lVar11 = *local_58;
      lVar13 = *(longlong *)((longlong)(int)uVar9 * 0x20 + lVar11);
      bVar4 = true;
      if ((lVar13 == 0) ||
         (pUVar6 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_1476c2b42:
        TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_30,uVar9);
        local_20 = '\x01';
      }
      else {
        iVar7 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar13 + 0x38) < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        if (((!bVar4) || (lVar11 = *(longlong *)((longlong)(int)uVar8 * 0x20 + lVar11), lVar11 == 0)
            ) || ((*(uint *)(lVar11 + 8) >> 0x1e & 1) != 0)) goto LAB_1476c2b42;
        lVar11 = *plVar3 + (longlong)(int)uVar9 * 0x20;
        uVar9 = *(int *)(lVar11 + 0x10) - 1;
        if (-1 < (int)uVar9) {
          lVar10 = (longlong)(int)uVar9;
          lVar13 = lVar10 * 8;
          do {
            uVar5 = 0;
            if ((int)uVar9 < *(int *)(lVar11 + 0x10)) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            lVar1 = *(longlong *)(lVar13 + *(longlong *)(lVar11 + 8));
            if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0)) {
              uVar5 = 0;
              if ((int)uVar9 < *(int *)(lVar11 + 0x10)) {
                uVar5 = ~uVar9 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar7 = ~uVar9 + *(int *)(lVar11 + 0x10);
              if (1 < iVar7) {
                iVar7 = 1;
              }
              if (iVar7 != 0) {
                memmove((void *)(*(longlong *)(lVar11 + 8) + lVar10 * 8),
                        (void *)(*(longlong *)(lVar11 + 8) +
                                (longlong)(*(int *)(lVar11 + 0x10) - iVar7) * 8),
                        (longlong)iVar7 << 3);
              }
              *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,(ForAnyElementType *)(lVar11 + 8),*(int *)(lVar11 + 0x10),
                         (int *)(lVar11 + 0x14));
            }
            lVar10 = lVar10 + -1;
            lVar13 = lVar13 + -8;
            uVar9 = uVar9 - 1;
          } while (-1 < (int)uVar9);
        }
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar8 = (ulonglong)uStack_3c;
      uVar9 = uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar9 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (3 < uVar9) {
        uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar11 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_28->HashSize < iVar12)) || (iVar12 < local_28->HashSize)) {
        local_28->HashSize = iVar12;
        TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// SaveShakeInExpiredPool @ 1476c5850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier_CameraShake::SaveShakeInExpiredPool
          (UCameraModifier_CameraShake *this,UCameraShakeBase *param_1)

{
  TMap<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>_>
  *this_00;
  int iVar1;
  longlong lVar2;
  uint uVar3;
  TObjectPtr<UClass>_u_0 TVar4;
  int local_res8 [2];
  TObjectPtr<UClass>_u_0 local_res10;
  TObjectPtr<UClass>_u_0 *local_res18 [2];
  
  this_00 = &this->ExpiredPooledShakesMap;
  TVar4 = (TObjectPtr<UClass>_u_0)*(TObjectPtr<UClass>_u_0 *)&param_1->field_0x10;
  local_res10 = TVar4;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar4.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
    }
    TVar4 = local_res10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
    }
  }
  uVar3 = ((uint)((ulonglong)TVar4.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar4.DebugPtr >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  iVar1 = TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSubclassOf<UCameraShakeBase>_>
                    ((TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
                      *)this_00,uVar3,(TSubclassOf<UCameraShakeBase> *)&local_res10.ObjectPtr);
  if ((iVar1 == -1) ||
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&this_00->field_0x0, lVar2 == 0)) {
    local_res18[0] = &local_res10;
    TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TSubclassOf<UCameraShakeBase>_&&>_>
              ((TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
                *)this_00,(uint)local_res8,
               (TKeyInitializer<TSubclassOf<UCameraShakeBase>_&&> *)(ulonglong)uVar3,
               (bool *)local_res18);
    lVar2 = (longlong)local_res8[0] * 0x20 + *(longlong *)&this_00->field_0x0;
  }
  iVar1 = *(int *)(lVar2 + 0x10);
  if (iVar1 < 5) {
    if (iVar1 == *(int *)(lVar2 + 0x14)) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)(lVar2 + 8),(int *)(lVar2 + 0x14));
    }
    *(int *)(lVar2 + 0x10) = iVar1 + 1;
    *(UCameraShakeBase **)(((ForAnyElementType *)(lVar2 + 8))->Data + (longlong)iVar1 * 8) = param_1
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
      return;
    }
  }
  return;
}

// SaveShakeInExpiredPoolIfPossible @ 1476c5970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier_CameraShake::SaveShakeInExpiredPoolIfPossible
          (UCameraModifier_CameraShake *this,FActiveCameraShakeInfo *param_1)

{
  UCameraShakeBase *pUVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  TObjectPtr<UClass>_u_0 TVar5;
  int local_res10 [2];
  TObjectPtr<UClass>_u_0 local_res18;
  TObjectPtr<UClass>_u_0 *local_res20;
  
  pUVar1 = (param_1->ShakeInstance).field0_0x0.DebugPtr;
  if ((pUVar1 != (UCameraShakeBase *)0x0) && (param_1->bIsCustomInitialized == false)) {
    TVar5 = (TObjectPtr<UClass>_u_0)*(TObjectPtr<UClass>_u_0 *)&pUVar1->field_0x10;
    local_res18 = TVar5;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (TVar5.DebugPtr != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
      }
      TVar5 = local_res18;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res18.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
      }
    }
    uVar4 = ((uint)((ulonglong)TVar5.DebugPtr >> 0x14) & 0xffff ^
            (uint)((ulonglong)TVar5.DebugPtr >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    iVar2 = TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TSubclassOf<UCameraShakeBase>_>
                      ((TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
                        *)&this->ExpiredPooledShakesMap,uVar4,
                       (TSubclassOf<UCameraShakeBase> *)&local_res18.ObjectPtr);
    if ((iVar2 == -1) ||
       (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&this->ExpiredPooledShakesMap, lVar3 == 0)) {
      local_res20 = &local_res18;
      TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<TSubclassOf<UCameraShakeBase>_&&>_>
                ((TSet<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>,TDefaultMapHashableKeyFuncs<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes,0>,FDefaultSetAllocator>
                  *)&this->ExpiredPooledShakesMap,(uint)local_res10,
                 (TKeyInitializer<TSubclassOf<UCameraShakeBase>_&&> *)(ulonglong)uVar4,
                 (bool *)&local_res20);
      lVar3 = (longlong)local_res10[0] * 0x20 + *(longlong *)&this->ExpiredPooledShakesMap;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (iVar2 < 5) {
      if (iVar2 == *(int *)(lVar3 + 0x14)) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar3 + 8),(int *)(lVar3 + 0x14));
      }
      *(int *)(lVar3 + 0x10) = iVar2 + 1;
      *(UCameraShakeBase **)(((ForAnyElementType *)(lVar3 + 8))->Data + (longlong)iVar2 * 8) =
           pUVar1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
  }
  RemoveCameraShakeDebugData(this,param_1);
  return;
}

// StaticRegisterNativesUCameraModifier_CameraShake @ 1476ca440

void __cdecl UCameraModifier_CameraShake::StaticRegisterNativesUCameraModifier_CameraShake(void)

{
  return;
}

