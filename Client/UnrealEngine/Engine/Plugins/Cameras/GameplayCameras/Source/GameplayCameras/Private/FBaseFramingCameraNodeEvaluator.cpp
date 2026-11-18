// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 17

// GetTypeID @ 14d5e1210

FCameraObjectTypeID * __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::GetTypeID(FBaseFramingCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5e1220

bool __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::IsKindOf
          (FBaseFramingCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FBaseFramingCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d5e1240

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::OnInitialize
          (FBaseFramingCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  int *piVar1;
  int iVar2;
  FCameraContextDataID FVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  int iVar5;
  bool bVar6;
  UClass *pUVar7;
  ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> _Dst;
  longlong lVar8;
  TArray<UE::Cameras::FCameraActorComputedTargetInfo,TSizedDefaultAllocator<32>_> local_58;
  FCameraActorTargetInfo *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_38;
  TArrayView<FCameraActorTargetInfo_const_,int> local_28;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ != 0) {
    pUVar7 = UBaseFramingCameraNode::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar7);
    if (bVar6) {
      lVar8 = this->_padding_;
      goto LAB_14d5e128f;
    }
  }
  lVar8 = 0;
LAB_14d5e128f:
  local_48 = *(FCameraActorTargetInfo **)(lVar8 + 0x50);
  iVar2 = *(int *)(lVar8 + 0x58);
  FVar3.Value = *(uint *)(lVar8 + 0x60);
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar2;
  local_28.DataPtr = local_48;
  iStack_40 = iVar2;
  FCameraActorTargetInfoArrayReader::Initialize(&(this->Readers).TargetInfos,&local_28,FVar3);
  (this->Readers).IdealFramingLocation.DefaultValuePtr = (TVector2<double> *)(lVar8 + 0x88);
  (this->Readers).IdealFramingLocation.VariableID.Value = *(uint *)(lVar8 + 0x98);
  (this->Readers).InitializeWithIdealFraming.DefaultValuePtr = (bool *)(lVar8 + 0x78);
  (this->Readers).InitializeWithIdealFraming.VariableID.Value = *(uint *)(lVar8 + 0x7c);
  (this->Readers).SetTargetDistance.DefaultValuePtr = (bool *)(lVar8 + 0x68);
  (this->Readers).SetTargetDistance.VariableID.Value = *(uint *)(lVar8 + 0x6c);
  (this->Readers).ReframeDampingFactor.DefaultValuePtr = (float *)(lVar8 + 0xa8);
  (this->Readers).ReframeDampingFactor.VariableID.Value = *(uint *)(lVar8 + 0xac);
  (this->Readers).LowReframeDampingFactor.DefaultValuePtr = (float *)(lVar8 + 0xb8);
  (this->Readers).LowReframeDampingFactor.VariableID.Value = *(uint *)(lVar8 + 0xbc);
  (this->Readers).ReengageTime.DefaultValuePtr = (float *)(lVar8 + 200);
  (this->Readers).ReengageTime.VariableID.Value = *(uint *)(lVar8 + 0xcc);
  (this->Readers).DisengageTime.DefaultValuePtr = (float *)(lVar8 + 0xd8);
  (this->Readers).DisengageTime.VariableID.Value = *(uint *)(lVar8 + 0xdc);
  (this->Readers).TargetMovementAnticipationTime.DefaultValuePtr = (float *)(lVar8 + 0xe8);
  (this->Readers).TargetMovementAnticipationTime.VariableID.Value = *(uint *)(lVar8 + 0xec);
  (this->Readers).DeadZone.DefaultValuePtr = (FCameraFramingZone *)(lVar8 + 0xf8);
  (this->Readers).DeadZone.VariableID.Value = *(uint *)(lVar8 + 0x118);
  (this->Readers).SoftZone.DefaultValuePtr = (FCameraFramingZone *)(lVar8 + 0x120);
  (this->Readers).SoftZone.VariableID.Value = *(uint *)(lVar8 + 0x140);
  if (GFramingNumTargetMovementSamples < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)GFramingNumTargetMovementSamples);
  }
  piVar1 = &(this->ScreenTargetHistory).History.ArrayMax;
  if (*piVar1 < GFramingNumTargetMovementSamples) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TVector2<double>,float>_>_>
              (0x18,8,GFramingNumTargetMovementSamples,
               &(this->ScreenTargetHistory).History.AllocatorInstance,
               (this->ScreenTargetHistory).History.ArrayNum,piVar1);
  }
  local_38.Object = (param_1->EvaluationContext).Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AcquireTargetInfo(this,&local_38,param_2,&local_58);
  _Src.Data = local_58.AllocatorInstance.Data;
  iVar5 = local_58.ArrayNum;
  lVar8 = (longlong)local_58.ArrayNum;
  piVar1 = &(this->WorldTargets).TargetInfos.ArrayMax;
  iVar2 = *piVar1;
  (this->WorldTargets).TargetInfos.ArrayNum = local_58.ArrayNum;
  if ((local_58.ArrayNum == 0) && (iVar2 == 0)) {
    *piVar1 = 4;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>_>
              (0xa0,0x10,local_58.ArrayNum,iVar2,
               (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> *)&this->WorldTargets,
               local_58.ArrayNum,piVar1);
    _Dst = (this->WorldTargets).TargetInfos.AllocatorInstance.SecondaryData;
    if (iVar5 != 0) {
      if (_Dst == (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)0x0) {
        _Dst = (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)&this->WorldTargets;
      }
      memcpy((void *)_Dst,_Src.Data,lVar8 * 0xa0);
    }
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// OnBuildDebugBlocks @ 14d5e14f0

void __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::OnBuildDebugBlocks
          (FBaseFramingCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TArray<UE::Cameras::FFramingZone,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1
  ;
  TArray<UE::Cameras::FFramingZone,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar2
  ;
  int *piVar3;
  int iVar4;
  int iVar5;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  double dVar6;
  float fVar7;
  undefined7 uVar8;
  FBaseFramingCameraDebugBlock *pFVar9;
  ForElementType<UE::Cameras::FFramingZone> _Dst;
  ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> _Dst_00;
  ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> _Src;
  ForElementType<UE::Cameras::FFramingZone> _Src_00;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar9 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x490,0x10);
  memset(pFVar9,0,0x490);
  pFVar9 = FBaseFramingCameraDebugBlock::FBaseFramingCameraDebugBlock(pFVar9);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            (this_00,(FCameraDebugBlock *)pFVar9);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,(FCameraDebugBlock *)pFVar9);
  dVar6 = (this->State).IdealTarget.field0_0x0._s_0.Y;
  pTVar1 = &(pFVar9->State).DebugAllScreenTargetBounds;
  (pFVar9->State).IdealTarget.field0_0x0._s_0.X = (this->State).IdealTarget.field0_0x0._s_0.X;
  (pFVar9->State).IdealTarget.field0_0x0._s_0.Y = dVar6;
  (pFVar9->State).ReframeDampingFactor = (this->State).ReframeDampingFactor;
  pTVar2 = &(this->State).DebugAllScreenTargetBounds;
  (pFVar9->State).LowReframeDampingFactor = (this->State).LowReframeDampingFactor;
  (pFVar9->State).ReframeDampingFactorAlpha = (this->State).ReframeDampingFactorAlpha;
  (pFVar9->State).ReengageTime = (this->State).ReengageTime;
  (pFVar9->State).DisengageTime = (this->State).DisengageTime;
  (pFVar9->State).ToggleEngageTimeLeft = (this->State).ToggleEngageTimeLeft;
  (pFVar9->State).ToggleEngageAlpha = (this->State).ToggleEngageAlpha;
  (pFVar9->State).TargetMovementAnticipationTime = (this->State).TargetMovementAnticipationTime;
  dVar6 = (this->State).DeadZone.TopBound;
  (pFVar9->State).DeadZone.LeftBound = (this->State).DeadZone.LeftBound;
  (pFVar9->State).DeadZone.TopBound = dVar6;
  dVar6 = (this->State).DeadZone.BottomBound;
  (pFVar9->State).DeadZone.RightBound = (this->State).DeadZone.RightBound;
  (pFVar9->State).DeadZone.BottomBound = dVar6;
  dVar6 = (this->State).SoftZone.TopBound;
  (pFVar9->State).SoftZone.LeftBound = (this->State).SoftZone.LeftBound;
  (pFVar9->State).SoftZone.TopBound = dVar6;
  dVar6 = (this->State).SoftZone.BottomBound;
  (pFVar9->State).SoftZone.RightBound = (this->State).SoftZone.RightBound;
  (pFVar9->State).SoftZone.BottomBound = dVar6;
  dVar6 = (this->State).WorldTarget.field0_0x0._s_0.Y;
  (pFVar9->State).WorldTarget.field0_0x0._s_0.X = (this->State).WorldTarget.field0_0x0._s_0.X;
  (pFVar9->State).WorldTarget.field0_0x0._s_0.Y = dVar6;
  (pFVar9->State).WorldTarget.field0_0x0._s_0.Z = (this->State).WorldTarget.field0_0x0._s_0.Z;
  dVar6 = (this->State).ScreenTarget.field0_0x0._s_0.Y;
  (pFVar9->State).ScreenTarget.field0_0x0._s_0.X = (this->State).ScreenTarget.field0_0x0._s_0.X;
  (pFVar9->State).ScreenTarget.field0_0x0._s_0.Y = dVar6;
  dVar6 = (this->State).ScreenTargetBounds.TopBound;
  (pFVar9->State).ScreenTargetBounds.LeftBound = (this->State).ScreenTargetBounds.LeftBound;
  (pFVar9->State).ScreenTargetBounds.TopBound = dVar6;
  dVar6 = (this->State).ScreenTargetBounds.BottomBound;
  (pFVar9->State).ScreenTargetBounds.RightBound = (this->State).ScreenTargetBounds.RightBound;
  (pFVar9->State).ScreenTargetBounds.BottomBound = dVar6;
  dVar6 = (this->State).EffectiveDeadZone.TopBound;
  (pFVar9->State).EffectiveDeadZone.LeftBound = (this->State).EffectiveDeadZone.LeftBound;
  (pFVar9->State).EffectiveDeadZone.TopBound = dVar6;
  dVar6 = (this->State).EffectiveDeadZone.BottomBound;
  (pFVar9->State).EffectiveDeadZone.RightBound = (this->State).EffectiveDeadZone.RightBound;
  (pFVar9->State).EffectiveDeadZone.BottomBound = dVar6;
  (pFVar9->State).TargetFramingState = (this->State).TargetFramingState;
  (pFVar9->State).bIsReframingTarget = (this->State).bIsReframingTarget;
  fVar7 = (this->State).ReframeDamper.X0;
  (pFVar9->State).ReframeDamper.W0 = (this->State).ReframeDamper.W0;
  (pFVar9->State).ReframeDamper.X0 = fVar7;
  (pFVar9->State).ReframeDamper.X0Derivative = (this->State).ReframeDamper.X0Derivative;
  dVar6 = (this->State).DebugDeadZoneEdgePoint.field0_0x0._s_0.Y;
  (pFVar9->State).DebugDeadZoneEdgePoint.field0_0x0._s_0.X =
       (this->State).DebugDeadZoneEdgePoint.field0_0x0._s_0.X;
  (pFVar9->State).DebugDeadZoneEdgePoint.field0_0x0._s_0.Y = dVar6;
  dVar6 = (this->State).DebugHardZoneEdgePoint.field0_0x0._s_0.Y;
  (pFVar9->State).DebugHardZoneEdgePoint.field0_0x0._s_0.X =
       (this->State).DebugHardZoneEdgePoint.field0_0x0._s_0.X;
  (pFVar9->State).DebugHardZoneEdgePoint.field0_0x0._s_0.Y = dVar6;
  if (pTVar1 != pTVar2) {
    _Src_00 = (this->State).DebugAllScreenTargetBounds.AllocatorInstance.SecondaryData;
    piVar3 = &(pFVar9->State).DebugAllScreenTargetBounds.ArrayMax;
    iVar4 = (this->State).DebugAllScreenTargetBounds.ArrayNum;
    iVar5 = *piVar3;
    if (_Src_00 == (ForElementType<UE::Cameras::FFramingZone>)0x0) {
      _Src_00 = (ForElementType<UE::Cameras::FFramingZone>)pTVar2;
    }
    (pFVar9->State).DebugAllScreenTargetBounds.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 4;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FFramingZone>_>
                (0x20,8,iVar4,iVar5,&pTVar1->AllocatorInstance,iVar4,piVar3);
      _Dst = (pFVar9->State).DebugAllScreenTargetBounds.AllocatorInstance.SecondaryData;
      if (iVar4 != 0) {
        if (_Dst == (ForElementType<UE::Cameras::FFramingZone>)0x0) {
          _Dst = (ForElementType<UE::Cameras::FFramingZone>)pTVar1;
        }
        memcpy((void *)_Dst,(void *)_Src_00,(longlong)iVar4 << 5);
      }
    }
  }
  dVar6 = (this->Desired).ScreenTarget.field0_0x0._s_0.Y;
  (pFVar9->Desired).ScreenTarget.field0_0x0._s_0.X = (this->Desired).ScreenTarget.field0_0x0._s_0.X;
  (pFVar9->Desired).ScreenTarget.field0_0x0._s_0.Y = dVar6;
  dVar6 = (this->Desired).FramingCorrection.field0_0x0._s_0.Y;
  (pFVar9->Desired).FramingCorrection.field0_0x0._s_0.X =
       (this->Desired).FramingCorrection.field0_0x0._s_0.X;
  (pFVar9->Desired).FramingCorrection.field0_0x0._s_0.Y = dVar6;
  uVar8 = *(undefined7 *)&(this->Desired).field_0x21;
  (pFVar9->Desired).bHasCorrection = (this->Desired).bHasCorrection;
  *(undefined7 *)&(pFVar9->Desired).field_0x21 = uVar8;
  if (pFVar9 != (FBaseFramingCameraDebugBlock *)
                &(this->Readers).TargetMovementAnticipationTime.VariableID) {
    _Src = (this->WorldTargets).TargetInfos.AllocatorInstance.SecondaryData;
    piVar3 = &(pFVar9->WorldTargets).TargetInfos.ArrayMax;
    iVar4 = (this->WorldTargets).TargetInfos.ArrayNum;
    iVar5 = *piVar3;
    if (_Src == (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)0x0) {
      _Src = (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)&this->WorldTargets;
    }
    (pFVar9->WorldTargets).TargetInfos.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 4;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>_>
                (0xa0,0x10,iVar4,iVar5,
                 (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> *)
                 &pFVar9->WorldTargets,iVar4,piVar3);
      _Dst_00 = (pFVar9->WorldTargets).TargetInfos.AllocatorInstance.SecondaryData;
      if (iVar4 != 0) {
        if (_Dst_00 == (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)0x0) {
          _Dst_00 = (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)
                    &pFVar9->WorldTargets;
        }
        memcpy((void *)_Dst_00,(void *)_Src,(longlong)iVar4 * 0xa0);
      }
    }
  }
  return;
}

// AcquireTargetInfo @ 14d605900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::AcquireTargetInfo
          (FBaseFramingCameraNodeEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1,
          FCameraNodeEvaluationResult *param_2,
          TArray<UE::Cameras::FCameraActorComputedTargetInfo,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  longlong lVar9;
  TVector<double> *pTVar10;
  FScriptContainerElement *pFVar11;
  FCameraEvaluationContext *pFVar12;
  UObject *pUVar13;
  FScriptContainerElement *pFVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_218 [32];
  FScriptContainerElement *local_1f8;
  FScriptContainerElement *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  FScriptContainerElement local_198 [16];
  double local_188;
  double dStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  FScriptContainerElement local_f8 [16];
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_218;
  if (this->_padding_ == 0) {
LAB_14d605957:
    lVar9 = 0;
  }
  else {
    pUVar8 = UBaseFramingCameraNode::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (!bVar5) goto LAB_14d605957;
    lVar9 = this->_padding_;
  }
  if (*(int *)(lVar9 + 0x40) == -1) {
    if ((*(int *)(lVar9 + 0x58) < 1) && (*(int *)(lVar9 + 0x60) == -1)) {
      pFVar12 = TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>::operator->(param_1);
      pUVar13 = FWeakObjectPtr::Get(&(pFVar12->WeakPlayerController).WeakPtr);
      if (pUVar13 != (UObject *)0x0) {
        pUVar13 = *(UObject **)&pUVar13[0x13].field_0x18;
        if (GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar13 == (UObject *)0x0) goto LAB_14d605d0c;
          GC::MarkAsReachable(pUVar13);
        }
        if (pUVar13 != (UObject *)0x0) {
          lVar9 = *(longlong *)(pUVar13 + 0xb);
          local_100 = 0x3f800000;
          dVar2 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          uVar17 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          uVar18 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          if (lVar9 == 0) {
            uVar15 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar16 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uStack_174 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uStack_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uStack_16c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          }
          else {
            local_1b0 = *(undefined4 *)(lVar9 + 0x210);
            uStack_1ac = *(undefined4 *)(lVar9 + 0x214);
            uStack_1a8 = *(undefined4 *)(lVar9 + 0x218);
            uStack_1a4 = *(undefined4 *)(lVar9 + 0x21c);
            local_1a0 = *(undefined8 *)(lVar9 + 0x220);
            uVar15 = (undefined4)local_1a0;
            uVar16 = (undefined4)((ulonglong)local_1a0 >> 0x20);
            local_178 = local_1b0;
            uStack_174 = uStack_1ac;
            uStack_170 = uStack_1a8;
            uStack_16c = uStack_1a4;
          }
          local_1b8 = CONCAT44(uVar16,uVar15);
          local_148._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_148._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_148._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          local_168 = local_1b8;
          uStack_160 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_138 = 0;
          local_108 = 0;
          local_198[0] = (FScriptContainerElement)SUB81(dVar2,0);
          local_198[1] = (FScriptContainerElement)(char)((ulonglong)dVar2 >> 8);
          local_198[2] = (FScriptContainerElement)(char)((ulonglong)dVar2 >> 0x10);
          local_198[3] = (FScriptContainerElement)(char)((ulonglong)dVar2 >> 0x18);
          local_198[4] = (FScriptContainerElement)(char)((ulonglong)dVar2 >> 0x20);
          local_198[5] = (FScriptContainerElement)(char)((ulonglong)dVar2 >> 0x28);
          local_198[6] = (FScriptContainerElement)(char)((ulonglong)dVar2 >> 0x30);
          local_198[7] = (FScriptContainerElement)(char)((ulonglong)dVar2 >> 0x38);
          local_198[8] = (FScriptContainerElement)(char)uVar17;
          local_198[9] = (FScriptContainerElement)(char)((uint)uVar17 >> 8);
          local_198[10] = (FScriptContainerElement)(char)((uint)uVar17 >> 0x10);
          local_198[0xb] = (FScriptContainerElement)(char)((uint)uVar17 >> 0x18);
          local_198[0xc] = (FScriptContainerElement)(char)uVar18;
          local_198[0xd] = (FScriptContainerElement)(char)((uint)uVar18 >> 8);
          local_198[0xe] = (FScriptContainerElement)(char)((uint)uVar18 >> 0x10);
          local_198[0xf] = (FScriptContainerElement)(char)((uint)uVar18 >> 0x18);
          local_188 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          dStack_180 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_158 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          dStack_150 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          uStack_130 = 0;
          local_128 = 0;
          uStack_120 = 0;
          if (lVar9 != 0) {
            local_138 = *(undefined8 *)(lVar9 + 0x110);
            uStack_130 = *(undefined8 *)(lVar9 + 0x118);
            local_128 = *(undefined8 *)(lVar9 + 0x120);
            uStack_120 = *(undefined8 *)(lVar9 + 0x128);
            local_118 = *(undefined8 *)(lVar9 + 0x130);
            uStack_110 = *(undefined8 *)(lVar9 + 0x138);
            local_108 = *(undefined8 *)(lVar9 + 0x140);
          }
          pFVar11 = (param_3->AllocatorInstance).Data;
          if ((pFVar11 <= local_198) && (local_198 < pFVar11 + (longlong)param_3->ArrayMax * 0xa0))
          {
            local_1e0 = (longlong)param_3->ArrayNum;
            local_1d8 = 0xa0;
            local_1f8 = local_198;
            local_1f0 = pFVar11;
            local_1e8 = (longlong)param_3->ArrayMax;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar1 = (code *)swi(3);
              uVar6 = (*pcVar1)();
              return (bool)uVar6;
            }
          }
          iVar7 = param_3->ArrayNum;
          if (iVar7 == param_3->ArrayMax) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10a0,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          pFVar11 = local_198;
          goto LAB_14d605a90;
        }
      }
    }
    else {
      bVar5 = FCameraActorTargetInfoArrayReader::ComputeTargetInfos
                        (&(this->Readers).TargetInfos,&param_2->ContextDataTable,param_3);
      if (bVar5) goto LAB_14d605af4;
    }
LAB_14d605d0c:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar5 = false;
  }
  else {
    pTVar10 = FVector3dCameraVariableReference::GetValue
                        ((FVector3dCameraVariableReference *)(lVar9 + 0x40),&param_2->VariableTable)
    ;
    if (pTVar10 == (TVector<double> *)0x0) goto LAB_14d605d0c;
    pFVar11 = (param_3->AllocatorInstance).Data;
    dVar2 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    uVar17 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    uVar18 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    uStack_60 = 0x3f800000;
    uStack_90 = 0;
    local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
    ;
    local_d8 = (pTVar10->field0_0x0)._s_0.X;
    dStack_d0 = (pTVar10->field0_0x0)._s_0.Y;
    local_f8[0] = (FScriptContainerElement)SUB81(dVar2,0);
    local_f8[1] = (FScriptContainerElement)(char)((ulonglong)dVar2 >> 8);
    local_f8[2] = (FScriptContainerElement)(char)((ulonglong)dVar2 >> 0x10);
    local_f8[3] = (FScriptContainerElement)(char)((ulonglong)dVar2 >> 0x18);
    local_f8[4] = (FScriptContainerElement)(char)((ulonglong)dVar2 >> 0x20);
    local_f8[5] = (FScriptContainerElement)(char)((ulonglong)dVar2 >> 0x28);
    local_f8[6] = (FScriptContainerElement)(char)((ulonglong)dVar2 >> 0x30);
    local_f8[7] = (FScriptContainerElement)(char)((ulonglong)dVar2 >> 0x38);
    local_f8[8] = (FScriptContainerElement)(char)uVar17;
    local_f8[9] = (FScriptContainerElement)(char)((uint)uVar17 >> 8);
    local_f8[10] = (FScriptContainerElement)(char)((uint)uVar17 >> 0x10);
    local_f8[0xb] = (FScriptContainerElement)(char)((uint)uVar17 >> 0x18);
    local_f8[0xc] = (FScriptContainerElement)(char)uVar18;
    local_f8[0xd] = (FScriptContainerElement)(char)((uint)uVar18 >> 8);
    local_f8[0xe] = (FScriptContainerElement)(char)((uint)uVar18 >> 0x10);
    local_f8[0xf] = (FScriptContainerElement)(char)((uint)uVar18 >> 0x18);
    local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    local_c8 = (pTVar10->field0_0x0)._s_0.Z;
    uStack_c0 = 0;
    local_98 = 0;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
    ;
    local_88 = 0;
    uStack_80 = 0;
    if ((pFVar11 <= local_f8) && (local_f8 < pFVar11 + (longlong)param_3->ArrayMax * 0xa0)) {
      local_1e0 = (longlong)param_3->ArrayNum;
      local_1d8 = 0xa0;
      local_1f8 = local_f8;
      local_1f0 = pFVar11;
      local_1e8 = (longlong)param_3->ArrayMax;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
    }
    iVar7 = param_3->ArrayNum;
    if (iVar7 == param_3->ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10a0,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    pFVar11 = local_f8;
LAB_14d605a90:
    uVar3 = *(undefined8 *)pFVar11;
    uVar4 = *(undefined8 *)(pFVar11 + 8);
    param_3->ArrayNum = iVar7 + 1;
    pFVar14 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0xa0;
    *(undefined8 *)pFVar14 = uVar3;
    *(undefined8 *)(pFVar14 + 8) = uVar4;
    uVar3 = *(undefined8 *)(pFVar11 + 0x18);
    *(undefined8 *)(pFVar14 + 0x10) = *(undefined8 *)(pFVar11 + 0x10);
    *(undefined8 *)(pFVar14 + 0x18) = uVar3;
    uVar3 = *(undefined8 *)(pFVar11 + 0x28);
    *(undefined8 *)(pFVar14 + 0x20) = *(undefined8 *)(pFVar11 + 0x20);
    *(undefined8 *)(pFVar14 + 0x28) = uVar3;
    uVar3 = *(undefined8 *)(pFVar11 + 0x38);
    *(undefined8 *)(pFVar14 + 0x30) = *(undefined8 *)(pFVar11 + 0x30);
    *(undefined8 *)(pFVar14 + 0x38) = uVar3;
    uVar3 = *(undefined8 *)(pFVar11 + 0x48);
    *(undefined8 *)(pFVar14 + 0x40) = *(undefined8 *)(pFVar11 + 0x40);
    *(undefined8 *)(pFVar14 + 0x48) = uVar3;
    uVar3 = *(undefined8 *)(pFVar11 + 0x58);
    *(undefined8 *)(pFVar14 + 0x50) = *(undefined8 *)(pFVar11 + 0x50);
    *(undefined8 *)(pFVar14 + 0x58) = uVar3;
    uVar3 = *(undefined8 *)(pFVar11 + 0x68);
    *(undefined8 *)(pFVar14 + 0x60) = *(undefined8 *)(pFVar11 + 0x60);
    *(undefined8 *)(pFVar14 + 0x68) = uVar3;
    uVar3 = *(undefined8 *)(pFVar11 + 0x78);
    *(undefined8 *)(pFVar14 + 0x70) = *(undefined8 *)(pFVar11 + 0x70);
    *(undefined8 *)(pFVar14 + 0x78) = uVar3;
    uVar3 = *(undefined8 *)(pFVar11 + 0x88);
    *(undefined8 *)(pFVar14 + 0x80) = *(undefined8 *)(pFVar11 + 0x80);
    *(undefined8 *)(pFVar14 + 0x88) = uVar3;
    uVar3 = *(undefined8 *)(pFVar11 + 0x98);
    *(undefined8 *)(pFVar14 + 0x90) = *(undefined8 *)(pFVar11 + 0x90);
    *(undefined8 *)(pFVar14 + 0x98) = uVar3;
LAB_14d605af4:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar5 = true;
  }
  return bVar5;
}

// ComputeAnticipatedScreenTarget @ 14d60ec10

TVector2<double> * __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::ComputeAnticipatedScreenTarget
          (FBaseFramingCameraNodeEvaluator *this,TVector2<double> *__return_storage_ptr__,
          float param_1,TVector2<double> *param_2,TVector2<double> *param_3)

{
  TArray<TTuple<UE::Math::TVector2<double>,float>,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  uchar *puVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  TVector2<double> *pTVar14;
  ForElementType<TTuple<UE::Math::TVector2<double>,float>_> FVar15;
  ForElementType<TTuple<UE::Math::TVector2<double>,float>_> FVar16;
  ForElementType<TTuple<UE::Math::TVector2<double>,float>_> FVar17;
  uint uVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double local_78;
  double dStack_70;
  float local_68;
  undefined4 uStack_64;
  
  if (0.0 < (this->State).TargetMovementAnticipationTime) {
    if (param_1 <= 0.0) {
      dVar21 = (param_2->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar21;
      return __return_storage_ptr__;
    }
    iVar12 = (this->ScreenTargetHistory).History.ArrayNum;
    pTVar1 = &(this->ScreenTargetHistory).History;
    if (iVar12 == (this->ScreenTargetHistory).History.ArrayMax) {
      if ((iVar12 < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TVector2<double> *)(*pcVar7)();
        return pTVar14;
      }
      FVar16 = (this->ScreenTargetHistory).History.AllocatorInstance.SecondaryData;
      if (FVar16 == (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)0x0) {
        FVar16 = (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)pTVar1;
      }
      iVar12 = (this->ScreenTargetHistory).History.ArrayNum + -1;
      if (iVar12 != 0) {
        memmove((void *)FVar16,(uchar *)((longlong)FVar16 + 0x18),(longlong)iVar12 * 0x18);
      }
      piVar2 = &(this->ScreenTargetHistory).History.ArrayNum;
      *piVar2 = *piVar2 + -1;
    }
    FVar16 = (this->ScreenTargetHistory).History.AllocatorInstance.SecondaryData;
    local_78 = (param_3->field0_0x0)._s_0.X;
    dStack_70 = (param_3->field0_0x0)._s_0.Y;
    FVar15 = FVar16;
    if (FVar16 == (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)0x0) {
      FVar15 = (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)pTVar1;
    }
    local_68 = param_1;
    if ((ulonglong)FVar15 <= &local_78) {
      FVar15 = (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)pTVar1;
      if (FVar16 != (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)0x0) {
        FVar15 = FVar16;
      }
      if ((&local_78 <
           (double *)
           ((longlong)FVar15 + (longlong)(this->ScreenTargetHistory).History.ArrayMax * 0x18)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TVector2<double> *)(*pcVar7)();
        return pTVar14;
      }
    }
    iVar12 = (this->ScreenTargetHistory).History.ArrayNum;
    if (iVar12 == (this->ScreenTargetHistory).History.ArrayMax) {
      iVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TVector2<double>,float>_>_>
                         (0x818,&pTVar1->AllocatorInstance,
                          &(this->ScreenTargetHistory).History.ArrayMax);
    }
    dVar21 = __real_3ff0000000000000;
    dVar8 = 0.0;
    (this->ScreenTargetHistory).History.ArrayNum = iVar12 + 1;
    dVar9 = 0.0;
    FVar16 = (this->ScreenTargetHistory).History.AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)0x0) {
      FVar16 = (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)pTVar1;
    }
    uVar18 = 1;
    pdVar3 = (double *)((longlong)FVar16 + (longlong)iVar12 * 0x18);
    *pdVar3 = local_78;
    pdVar3[1] = dStack_70;
    *(ulonglong *)((uchar *)((longlong)FVar16 + 0x10) + (longlong)iVar12 * 0x18) =
         CONCAT44(uStack_64,local_68);
    iVar12 = (this->ScreenTargetHistory).History.ArrayNum;
    dVar10 = 0.0;
    dVar20 = 0.0;
    if (1 < iVar12) {
      lVar19 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar18 < iVar12) {
          uVar13 = ~uVar18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          pTVar14 = (TVector2<double> *)(*pcVar7)();
          return pTVar14;
        }
        FVar16 = (this->ScreenTargetHistory).History.AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)
                 &(this->ScreenTargetHistory).History;
        if (FVar16 != (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)0x0) {
          FVar15 = FVar16;
        }
        uVar13 = 0;
        if ((int)(uVar18 - 1) < (this->ScreenTargetHistory).History.ArrayNum) {
          uVar13 = -uVar18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          pTVar14 = (TVector2<double> *)(*pcVar7)();
          return pTVar14;
        }
        FVar16 = (this->ScreenTargetHistory).History.AllocatorInstance.SecondaryData;
        lVar4 = lVar19 + 0x18;
        iVar12 = (this->ScreenTargetHistory).History.ArrayNum;
        FVar17 = (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)
                 &(this->ScreenTargetHistory).History;
        if (FVar16 != (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)0x0) {
          FVar17 = FVar16;
        }
        uVar18 = uVar18 + 1;
        pdVar3 = (double *)((longlong)FVar17 + lVar19);
        dVar20 = dVar21 / (double)*(float *)(lVar19 + 0x28 + (longlong)FVar15);
        lVar5 = lVar19 + 0x20;
        puVar6 = (uchar *)((longlong)FVar17 + 8) + lVar19;
        lVar19 = lVar19 + 0x18;
        dVar8 = dVar8 + (*(double *)(lVar4 + (longlong)FVar15) - *pdVar3) * dVar20;
        dVar9 = dVar9 + (*(double *)(lVar5 + (longlong)FVar15) - *(double *)puVar6) * dVar20;
        dVar10 = dVar8;
        dVar20 = dVar9;
      } while ((int)uVar18 < iVar12);
    }
    dVar21 = dVar21 / (double)iVar12;
    dVar20 = dVar21 * dVar20;
    dVar21 = dVar21 * dVar10;
    if ((double)GFramingExtrapolationEpsilon <= SQRT(dVar20 * dVar20 + dVar21 * dVar21)) {
      dVar9 = (double)(this->State).TargetMovementAnticipationTime;
      dVar8 = (param_3->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar21 * dVar9 + (param_3->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar20 * dVar9 + dVar8;
      return __return_storage_ptr__;
    }
  }
  dVar21 = (param_3->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar21;
  return __return_storage_ptr__;
}

// ComputeCurrentState @ 14d60f800

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::ComputeCurrentState
          (FBaseFramingCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2,TTransform<double> *param_3)

{
  double *pdVar1;
  FState *pFVar2;
  FFramingZone *this_00;
  FFramingZone *this_01;
  FCameraVariableTable *this_02;
  float fVar3;
  float fVar4;
  double dVar5;
  ETargetFramingState EVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  bool bVar14;
  double dVar15;
  float fVar16;
  bool bVar17;
  TVector2<double> *pTVar18;
  float *pfVar19;
  FCameraFramingZone *pFVar20;
  TVector2<double> *pTVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined4 uVar32;
  undefined4 uVar33;
  TVector2<double>_u_0 local_208;
  TVector2<double>_u_0 local_1f8;
  TVector2<double>_u_0 local_1e8;
  TVector2<double> local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  TVector<double>_u_0 local_1a8;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  TTransform<double> local_118;
  TVector2<double> local_b8 [9];
  
  if (((this->Readers).IdealFramingLocation.DefaultValuePtr == (TVector2<double> *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("DefaultValuePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                          ,0x31,L"Parameter reader has no value pointer!"), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->Readers).IdealFramingLocation.VariableID.Value == 0xffffffff) ||
     (pTVar18 = FCameraVariableTable::FindValue<UE::Math::TVector2<double>_>
                          (&param_2->VariableTable,
                           (FCameraVariableID)(this->Readers).IdealFramingLocation.VariableID.Value)
     , pTVar18 == (TVector2<double> *)0x0)) {
    pTVar18 = (this->Readers).IdealFramingLocation.DefaultValuePtr;
  }
  dVar5 = (pTVar18->field0_0x0)._s_0.Y;
  pFVar2 = &this->State;
  (pFVar2->IdealTarget).field0_0x0._s_0.X = (pTVar18->field0_0x0)._s_0.X;
  (this->State).IdealTarget.field0_0x0._s_0.Y = dVar5;
  this_02 = &param_2->VariableTable;
  if (((this->Readers).ReframeDampingFactor.DefaultValuePtr == (float *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("DefaultValuePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                          ,0x31,L"Parameter reader has no value pointer!"), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->Readers).ReframeDampingFactor.VariableID.Value == 0xffffffff) ||
     (pfVar19 = FCameraVariableTable::FindValue<float>
                          (this_02,(FCameraVariableID)
                                   (this->Readers).ReframeDampingFactor.VariableID.Value),
     pfVar19 == (float *)0x0)) {
    pfVar19 = (this->Readers).ReframeDampingFactor.DefaultValuePtr;
  }
  (this->State).ReframeDampingFactor = *pfVar19;
  if (((this->Readers).LowReframeDampingFactor.DefaultValuePtr == (float *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("DefaultValuePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                          ,0x31,L"Parameter reader has no value pointer!"), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->Readers).LowReframeDampingFactor.VariableID.Value == 0xffffffff) ||
     (pfVar19 = FCameraVariableTable::FindValue<float>
                          (this_02,(FCameraVariableID)
                                   (this->Readers).LowReframeDampingFactor.VariableID.Value),
     pfVar19 == (float *)0x0)) {
    pfVar19 = (this->Readers).LowReframeDampingFactor.DefaultValuePtr;
  }
  (this->State).LowReframeDampingFactor = *pfVar19;
  if (((this->Readers).ReengageTime.DefaultValuePtr == (float *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("DefaultValuePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                          ,0x31,L"Parameter reader has no value pointer!"), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->Readers).ReengageTime.VariableID.Value == 0xffffffff) ||
     (pfVar19 = FCameraVariableTable::FindValue<float>
                          (this_02,(FCameraVariableID)(this->Readers).ReengageTime.VariableID.Value)
     , pfVar19 == (float *)0x0)) {
    pfVar19 = (this->Readers).ReengageTime.DefaultValuePtr;
  }
  (this->State).ReengageTime = *pfVar19;
  if (((this->Readers).DisengageTime.DefaultValuePtr == (float *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("DefaultValuePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                          ,0x31,L"Parameter reader has no value pointer!"), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->Readers).DisengageTime.VariableID.Value == 0xffffffff) ||
     (pfVar19 = FCameraVariableTable::FindValue<float>
                          (this_02,(FCameraVariableID)(this->Readers).DisengageTime.VariableID.Value
                          ), pfVar19 == (float *)0x0)) {
    pfVar19 = (this->Readers).DisengageTime.DefaultValuePtr;
  }
  (this->State).DisengageTime = *pfVar19;
  if (((this->Readers).TargetMovementAnticipationTime.DefaultValuePtr == (float *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("DefaultValuePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                          ,0x31,L"Parameter reader has no value pointer!"), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->Readers).TargetMovementAnticipationTime.VariableID.Value == 0xffffffff) ||
     (pfVar19 = FCameraVariableTable::FindValue<float>
                          (this_02,(FCameraVariableID)
                                   (this->Readers).TargetMovementAnticipationTime.VariableID.Value),
     pfVar19 == (float *)0x0)) {
    pfVar19 = (this->Readers).TargetMovementAnticipationTime.DefaultValuePtr;
  }
  (this->State).TargetMovementAnticipationTime = *pfVar19;
  pFVar20 = TCameraParameterReader<FCameraFramingZone>::Get(&(this->Readers).DeadZone,this_02);
  dVar29 = pFVar20->Left;
  dVar13 = pFVar20->Top;
  dVar22 = pFVar20->Right;
  dVar30 = pFVar20->Bottom;
  pFVar20 = TCameraParameterReader<FCameraFramingZone>::Get(&(this->Readers).SoftZone,this_02);
  dVar15 = __real_3ff0000000000000;
  this_00 = &(this->State).DeadZone;
  dVar5 = (pFVar2->IdealTarget).field0_0x0._s_0.X;
  uVar32 = SUB84(dVar5,0);
  uVar33 = (undefined4)((ulonglong)dVar5 >> 0x20);
  this_01 = &(this->State).SoftZone;
  dVar27 = (this->State).IdealTarget.field0_0x0._s_0.Y;
  dVar12 = pFVar20->Left;
  dVar28 = pFVar20->Top;
  dVar23 = pFVar20->Right;
  dVar24 = pFVar20->Bottom;
  dVar22 = dVar5 + dVar22;
  dVar29 = dVar5 - dVar29;
  dVar30 = dVar27 + dVar30;
  dVar27 = dVar27 - dVar13;
  if (__real_3ff0000000000000 <= dVar22) {
    dVar22 = __real_3ff0000000000000;
  }
  if (__real_3ff0000000000000 <= dVar29) {
    dVar29 = __real_3ff0000000000000;
  }
  if (__real_3ff0000000000000 <= dVar30) {
    dVar30 = __real_3ff0000000000000;
  }
  if (__real_3ff0000000000000 <= dVar27) {
    dVar27 = __real_3ff0000000000000;
  }
  if (dVar22 <= 0.0) {
    dVar22 = 0.0;
  }
  if (dVar29 <= 0.0) {
    dVar29 = 0.0;
  }
  if (dVar30 <= 0.0) {
    dVar30 = 0.0;
  }
  if (dVar27 <= 0.0) {
    dVar27 = 0.0;
  }
  this_00->LeftBound = dVar29;
  if (dVar22 <= dVar29) {
    dVar22 = dVar29;
  }
  (this->State).DeadZone.TopBound = dVar27;
  if (dVar15 <= dVar12) {
    dVar12 = dVar15;
  }
  if (dVar15 <= dVar28) {
    dVar28 = dVar15;
  }
  if (dVar30 <= dVar27) {
    dVar30 = dVar27;
  }
  (this->State).DeadZone.RightBound = dVar22;
  dVar23 = dVar15 - dVar23;
  if (dVar12 <= 0.0) {
    dVar12 = 0.0;
  }
  if (dVar28 <= 0.0) {
    dVar28 = 0.0;
  }
  (this->State).DeadZone.BottomBound = dVar30;
  if (dVar15 <= dVar23) {
    dVar23 = dVar15;
  }
  this_01->LeftBound = dVar12;
  (this->State).SoftZone.TopBound = dVar28;
  if (dVar23 <= 0.0) {
    dVar23 = 0.0;
  }
  if (dVar23 <= dVar12) {
    dVar23 = dVar12;
  }
  (this->State).SoftZone.RightBound = dVar23;
  dVar24 = dVar15 - dVar24;
  if (dVar15 <= dVar24) {
    dVar24 = dVar15;
  }
  if (dVar24 <= 0.0) {
    dVar24 = 0.0;
  }
  if (dVar24 <= dVar28) {
    dVar24 = dVar28;
  }
  (this->State).SoftZone.BottomBound = dVar24;
  dVar27 = this_00->LeftBound;
  if (dVar27 <= dVar5) {
    uVar32 = SUB84(dVar27,0);
    uVar33 = (undefined4)((ulonglong)dVar27 >> 0x20);
  }
  dVar27 = (this->State).DeadZone.TopBound;
  dVar5 = (this->State).DeadZone.BottomBound;
  if (dVar15 <= dVar5) {
    dVar5 = dVar15;
  }
  if ((double)CONCAT44(uVar33,uVar32) <= 0.0) {
    uVar32 = 0;
    uVar33 = 0;
  }
  this_00->LeftBound = (double)CONCAT44(uVar33,uVar32);
  dVar29 = (this->State).IdealTarget.field0_0x0._s_0.Y;
  if (dVar29 <= dVar27) {
    dVar27 = dVar29;
  }
  if (dVar27 <= 0.0) {
    dVar27 = 0.0;
  }
  (this->State).DeadZone.TopBound = dVar27;
  dVar27 = (this->State).DeadZone.RightBound;
  if (dVar15 <= dVar27) {
    dVar27 = dVar15;
  }
  dVar29 = (pFVar2->IdealTarget).field0_0x0._s_0.X;
  if (dVar27 <= dVar29) {
    dVar27 = dVar29;
  }
  (this->State).DeadZone.RightBound = dVar27;
  dVar27 = (this->State).IdealTarget.field0_0x0._s_0.Y;
  if (dVar5 <= dVar27) {
    dVar5 = dVar27;
  }
  (this->State).DeadZone.BottomBound = dVar5;
  dVar5 = this_01->LeftBound;
  if (dVar5 <= (double)CONCAT44(uVar33,uVar32)) {
    uVar32 = SUB84(dVar5,0);
    uVar33 = (undefined4)((ulonglong)dVar5 >> 0x20);
  }
  if ((double)CONCAT44(uVar33,uVar32) <= 0.0) {
    uVar32 = 0;
    uVar33 = 0;
  }
  this_01->LeftBound = (double)CONCAT44(uVar33,uVar32);
  dVar27 = (this->State).DeadZone.TopBound;
  dVar5 = (this->State).SoftZone.TopBound;
  if (dVar5 <= dVar27) {
    dVar27 = dVar5;
  }
  dVar5 = (this->State).SoftZone.BottomBound;
  if (dVar15 <= dVar5) {
    dVar5 = dVar15;
  }
  if (dVar27 <= 0.0) {
    dVar27 = 0.0;
  }
  (this->State).SoftZone.TopBound = dVar27;
  dVar27 = (this->State).SoftZone.RightBound;
  if (dVar15 <= dVar27) {
    dVar27 = dVar15;
  }
  dVar29 = (this->State).DeadZone.RightBound;
  if (dVar27 <= dVar29) {
    dVar27 = dVar29;
  }
  (this->State).SoftZone.RightBound = dVar27;
  dVar27 = (this->State).DeadZone.BottomBound;
  if (dVar5 <= dVar27) {
    dVar5 = dVar27;
  }
  (this->State).SoftZone.BottomBound = dVar5;
  local_1a8._s_0.X = (param_2->CameraPose).Location.field0_0x0._s_0.X;
  local_1a8._s_0.Y = (param_2->CameraPose).Location.field0_0x0._s_0.Y;
  local_1a8._s_0.Z = (param_2->CameraPose).Location.field0_0x0._s_0.Z;
  dStack_190 = (param_2->CameraPose).Rotation.Pitch;
  local_188 = (param_2->CameraPose).Rotation.Yaw;
  dStack_180 = (param_2->CameraPose).Rotation.Roll;
  local_178 = (param_2->CameraPose).TargetDistance;
  uStack_170._0_4_ = (param_2->CameraPose).FieldOfView;
  uStack_170._4_4_ = (param_2->CameraPose).FocalLength;
  local_168._0_4_ = (param_2->CameraPose).OrthographicWidth;
  local_168._4_4_ = (param_2->CameraPose).Aperture;
  uStack_160._0_4_ = (param_2->CameraPose).ShutterSpeed;
  uStack_160._4_4_ = (param_2->CameraPose).FocusDistance;
  local_158._0_4_ = (param_2->CameraPose).SensorWidth;
  local_158._4_4_ = (param_2->CameraPose).SensorHeight;
  uStack_150._0_4_ = (param_2->CameraPose).SensorHorizontalOffset;
  uStack_150._4_4_ = (param_2->CameraPose).SensorVerticalOffset;
  local_148._0_4_ = (param_2->CameraPose).ISO;
  local_148._4_4_ = (param_2->CameraPose).SqueezeFactor;
  uStack_140._0_4_ = (param_2->CameraPose).Overscan;
  uStack_140._4_4_ = (param_2->CameraPose).DiaphragmBladeCount;
  local_138._0_4_ = (param_2->CameraPose).NearClippingPlane;
  local_138._4_4_ = (param_2->CameraPose).FarClippingPlane;
  uStack_130._0_4_ = (param_2->CameraPose).PhysicalCameraBlendWeight;
  uStack_130._4_1_ = (param_2->CameraPose).EnablePhysicalCamera;
  uStack_130._5_1_ = (param_2->CameraPose).ConstrainAspectRatio;
  uStack_130._6_1_ = (param_2->CameraPose).OverrideAspectRatioAxisConstraint;
  uStack_130._7_1_ = (param_2->CameraPose).AspectRatioAxisConstraint;
  local_128._0_1_ = (param_2->CameraPose).ProjectionMode;
  local_128._1_4_ = (param_2->CameraPose).ChangedFlags;
  local_128._5_3_ = *(undefined3 *)&(param_2->CameraPose).field_0x85;
  local_118.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  local_118.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
  local_118.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  local_118.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
  local_118.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
  local_118.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
  local_118.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
  local_118.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
  local_118.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  local_118.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
  local_118.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  local_118.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
  FCameraPose::SetTransform((FCameraPose *)&local_1a8._s_0,&local_118,false);
  ComputeFinalTargetInfo
            (this,param_1,(FCameraPose *)&local_1a8._s_0,&(this->State).WorldTarget,&local_1d8,
             &(this->State).ScreenTargetBounds);
  pTVar18 = &(this->State).ScreenTarget;
  pTVar21 = ComputeAnticipatedScreenTarget(this,local_b8,param_1->DeltaTime,pTVar18,&local_1d8);
  dVar30 = __real_3f1a36e2eb1c432d;
  local_1b8 = (this->State).DeadZone.RightBound;
  dStack_1b0 = (this->State).DeadZone.BottomBound;
  dVar5 = (pTVar21->field0_0x0)._s_0.Y;
  (pTVar18->field0_0x0)._s_0.X = (pTVar21->field0_0x0)._s_0.X;
  (this->State).ScreenTarget.field0_0x0._s_0.Y = dVar5;
  fVar16 = __real_3f800000;
  local_1c8 = this_00->LeftBound;
  dStack_1c0 = (this->State).DeadZone.TopBound;
  dVar5 = (pTVar18->field0_0x0)._s_0.X;
  dVar27 = (pFVar2->IdealTarget).field0_0x0._s_0.X;
  dVar22 = dVar5 - (this->State).ScreenTargetBounds.LeftBound;
  dVar29 = (this->State).IdealTarget.field0_0x0._s_0.Y;
  if (dVar22 <= 0.0) {
    dVar22 = 0.0;
  }
  dVar23 = dVar22 + local_1c8;
  if (dVar27 - dVar30 <= dVar22 + local_1c8) {
    dVar23 = dVar27 - dVar30;
  }
  if (dVar23 <= 0.0) {
    dVar23 = 0.0;
  }
  dVar24 = (this->State).ScreenTarget.field0_0x0._s_0.Y - (this->State).ScreenTargetBounds.TopBound;
  dVar22 = (this->State).ScreenTargetBounds.BottomBound -
           (this->State).ScreenTarget.field0_0x0._s_0.Y;
  fVar26 = (this->State).LowReframeDampingFactor;
  if (dVar24 <= 0.0) {
    dVar24 = 0.0;
  }
  if (dVar22 <= 0.0) {
    dVar22 = 0.0;
  }
  dVar12 = dVar24 + dStack_1c0;
  if (dVar29 - dVar30 <= dVar24 + dStack_1c0) {
    dVar12 = dVar29 - dVar30;
  }
  dVar24 = (this->State).ScreenTargetBounds.RightBound - dVar5;
  dVar28 = dStack_1b0 - dVar22;
  if (dVar15 <= dStack_1b0 - dVar22) {
    dVar28 = dVar15;
  }
  if (dVar12 <= 0.0) {
    dVar12 = 0.0;
  }
  auVar31._8_8_ = 0;
  auVar31._0_8_ = dVar12;
  if (dVar24 <= 0.0) {
    dVar24 = 0.0;
  }
  auVar25._8_4_ = SUB84(dVar12,0);
  auVar25._0_8_ = dVar23;
  auVar25._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  (this->State).EffectiveDeadZone.LeftBound = dVar23;
  (this->State).EffectiveDeadZone.TopBound = (double)auVar25._8_8_;
  dVar22 = local_1b8 - dVar24;
  if (dVar15 <= local_1b8 - dVar24) {
    dVar22 = dVar15;
  }
  if (dVar22 <= dVar27 + dVar30) {
    dVar22 = dVar27 + dVar30;
  }
  if (dVar28 <= dVar29 + dVar30) {
    dVar28 = dVar29 + dVar30;
  }
  dVar30 = (pTVar18->field0_0x0)._s_0.X;
  dVar23 = (this->State).ScreenTarget.field0_0x0._s_0.Y;
  (this->State).DebugDeadZoneEdgePoint.field0_0x0._s_0.X = dVar30;
  (this->State).DebugDeadZoneEdgePoint.field0_0x0._s_0.Y = dVar23;
  auVar10._8_4_ = SUB84(dVar28,0);
  auVar10._0_8_ = dVar22;
  auVar10._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  (this->State).EffectiveDeadZone.RightBound = dVar22;
  (this->State).EffectiveDeadZone.BottomBound = (double)auVar10._8_8_;
  (this->State).DebugHardZoneEdgePoint.field0_0x0._s_0.X = dVar30;
  (this->State).DebugHardZoneEdgePoint.field0_0x0._s_0.Y = dVar23;
  if (0.0 < fVar26) {
    dVar5 = dVar5 - dVar27;
    dVar29 = (this->State).ScreenTarget.field0_0x0._s_0.Y - dVar29;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar29 * dVar29 + dVar5 * dVar5;
    auVar31 = sqrtpd(auVar31,auVar8);
    if (auVar31._0_8_ <= 0.0) {
      fVar26 = 0.0;
    }
    else {
      dVar27 = dVar15 / auVar31._0_8_;
      local_208._s_0.Y = dVar27 * dVar29;
      local_208._s_0.X = dVar27 * dVar5;
      FFramingZone::ComputeClosestIntersection
                (this_00,(TVector2<double> *)&local_1f8._s_0,&pFVar2->IdealTarget,
                 (TVector2<double> *)&local_208._s_0,true);
      FFramingZone::ComputeClosestIntersection
                (this_01,(TVector2<double> *)&local_1e8._s_0,&pFVar2->IdealTarget,
                 (TVector2<double> *)&local_208._s_0,true);
      dVar29 = (this->State).ScreenTarget.field0_0x0._s_0.Y - local_1f8._s_0.Y;
      dVar5 = (double)CONCAT44(local_1e8._12_4_,local_1e8._8_4_) - local_1f8._s_0.Y;
      dVar27 = (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_) - local_1f8._s_0.X;
      dVar22 = (pTVar18->field0_0x0)._s_0.X - local_1f8._s_0.X;
      (this->State).DebugDeadZoneEdgePoint.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)local_1f8;
      *(undefined4 *)&(this->State).DebugHardZoneEdgePoint.field0_0x0 = local_1e8._0_4_;
      *(undefined4 *)((longlong)&(this->State).DebugHardZoneEdgePoint.field0_0x0 + 4) =
           local_1e8._4_4_;
      *(undefined4 *)((longlong)&(this->State).DebugHardZoneEdgePoint.field0_0x0 + 8) =
           local_1e8._8_4_;
      *(undefined4 *)((longlong)&(this->State).DebugHardZoneEdgePoint.field0_0x0 + 0xc) =
           local_1e8._12_4_;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar5 * dVar5 + dVar27 * dVar27;
      auVar31 = sqrtpd((undefined1  [16])local_1f8,auVar9);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar29 * dVar29 + dVar22 * dVar22;
      auVar25 = sqrtpd(auVar31,auVar11);
      dVar5 = (dVar15 / auVar31._0_8_) * auVar25._0_8_;
      if (dVar15 <= dVar5) {
        dVar5 = dVar15;
      }
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      fVar26 = (float)dVar5;
    }
  }
  else {
    (this->State).ReframeDamper.W0 = (this->State).ReframeDampingFactor;
    fVar26 = fVar16;
  }
  (this->State).ReframeDampingFactorAlpha = fVar26;
  dVar5 = (pTVar18->field0_0x0)._s_0.X;
  if ((((dVar5 < this_01->LeftBound) ||
       (pdVar1 = &(this->State).SoftZone.RightBound, *pdVar1 <= dVar5 && dVar5 != *pdVar1)) ||
      (dVar27 = (this->State).ScreenTarget.field0_0x0._s_0.Y,
      dVar27 < (this->State).SoftZone.TopBound)) ||
     (pdVar1 = &(this->State).SoftZone.BottomBound, *pdVar1 <= dVar27 && dVar27 != *pdVar1)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  if (((dVar5 < (this->State).EffectiveDeadZone.LeftBound) ||
      (pdVar1 = &(this->State).EffectiveDeadZone.RightBound, *pdVar1 <= dVar5 && dVar5 != *pdVar1))
     || ((dVar5 = (this->State).ScreenTarget.field0_0x0._s_0.Y,
         dVar5 < (this->State).EffectiveDeadZone.TopBound ||
         (pdVar1 = &(this->State).EffectiveDeadZone.BottomBound,
         *pdVar1 <= dVar5 && dVar5 != *pdVar1)))) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if (bVar17) {
    EVar6 = (this->State).TargetFramingState;
    if (bVar14) {
      (this->State).TargetFramingState = InDeadZone;
      if (EVar6 == InSoftZone) {
        fVar26 = (this->State).ToggleEngageTimeLeft;
        if ((fVar26 <= 0.0) || (fVar3 = (this->State).ReengageTime, fVar3 <= 0.0)) {
          (this->State).ToggleEngageTimeLeft = (this->State).DisengageTime;
        }
        else {
          fVar4 = (this->State).DisengageTime;
          fVar26 = fVar26 / fVar3;
          if (fVar16 <= fVar26) {
            fVar26 = fVar16;
          }
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          fVar26 = (fVar16 - fVar26) * fVar4;
          (this->State).ToggleEngageTimeLeft = fVar26;
          if ((__real_38d1b717 <
               (float)((uint)((this->State).ToggleEngageAlpha - fVar26 / fVar4) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
             (bVar17 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<1026344703815057728>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Framing\\BaseFramingCameraNode.cpp"
                                  ,0x140,
                                  "FMath::IsNearlyEqual(PreviousAlpha, State.ToggleEngageTimeLeft / State.DisengageTime, 1.e-4f)"
                                 ), bVar17)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      fVar26 = (this->State).ToggleEngageTimeLeft;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      else {
        fVar26 = fVar26 - param_1->DeltaTime;
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        (this->State).ToggleEngageTimeLeft = fVar26;
        fVar26 = fVar26 / (this->State).DisengageTime;
        if (fVar16 <= fVar26) {
          fVar26 = fVar16;
        }
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
      }
      (this->State).ToggleEngageAlpha = fVar26;
      (this->State).bIsReframingTarget = 0.0 < fVar26;
    }
    else {
      (this->State).TargetFramingState = InSoftZone;
      if (EVar6 == InDeadZone) {
        fVar26 = (this->State).ToggleEngageTimeLeft;
        if ((fVar26 <= 0.0) || (fVar3 = (this->State).DisengageTime, fVar3 <= 0.0)) {
          (this->State).ToggleEngageTimeLeft = (this->State).ReengageTime;
        }
        else {
          fVar4 = (this->State).ReengageTime;
          fVar26 = fVar26 / fVar3;
          if (fVar16 <= fVar26) {
            fVar26 = fVar16;
          }
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          fVar26 = (fVar16 - fVar26) * fVar4;
          (this->State).ToggleEngageTimeLeft = fVar26;
          if ((__real_38d1b717 <
               (float)((uint)((this->State).ToggleEngageAlpha - (fVar16 - fVar26 / fVar4)) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
             (bVar17 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<1026344703815057688>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Framing\\BaseFramingCameraNode.cpp"
                                  ,0x118,
                                  "FMath::IsNearlyEqual(PreviousAlpha, 1.0f - State.ToggleEngageTimeLeft / State.ReengageTime, 1.e-4f)"
                                 ), bVar17)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      fVar26 = (this->State).ToggleEngageTimeLeft;
      if (fVar26 <= 0.0) {
        (this->State).ToggleEngageAlpha = fVar16;
        (this->State).bIsReframingTarget = true;
      }
      else {
        fVar26 = fVar26 - param_1->DeltaTime;
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        (this->State).ToggleEngageTimeLeft = fVar26;
        fVar26 = fVar26 / (this->State).ReengageTime;
        if (fVar16 <= fVar26) {
          fVar26 = fVar16;
        }
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        (this->State).ToggleEngageAlpha = fVar16 - fVar26;
        (this->State).bIsReframingTarget = true;
      }
    }
  }
  else {
    (this->State).TargetFramingState = InHardZone;
    (this->State).ToggleEngageTimeLeft = 0.0;
    (this->State).ToggleEngageAlpha = 1.0;
    (this->State).bIsReframingTarget = true;
  }
  return;
}

// ComputeDesiredState @ 14d6102b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::ComputeDesiredState
          (FBaseFramingCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCriticalDamper *this_00;
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  TVector2<double> TVar5;
  bool bVar6;
  bool *pbVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar12 [16];
  TVector2<double>_u_0 local_58;
  TVector2<double>_u_0 local_48;
  double dVar11;
  
  dVar3 = (this->State).ScreenTarget.field0_0x0._s_0.X - (this->State).IdealTarget.field0_0x0._s_0.X
  ;
  dVar4 = (this->State).ScreenTarget.field0_0x0._s_0.Y - (this->State).IdealTarget.field0_0x0._s_0.Y
  ;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar4 * dVar4 + dVar3 * dVar3;
  auVar12 = sqrtpd(unaff_XMM8,auVar12);
  dVar11 = auVar12._0_8_;
  if (((this->State).bIsReframingTarget == false) ||
     ((dVar11 <= (double)GFramingIdealReachedEpsilon &&
      ((this->State).ReframeDamper.X0Derivative <= GFramingIdealReachedEpsilon)))) {
    dVar3 = (this->State).ScreenTarget.field0_0x0._s_0.Y;
    (this->Desired).ScreenTarget.field0_0x0._s_0.X = (this->State).ScreenTarget.field0_0x0._s_0.X;
    (this->Desired).ScreenTarget.field0_0x0._s_0.Y = dVar3;
    TVar5 = UE::Math::TVector2<double>::ZeroVector;
    (this->Desired).bHasCorrection = false;
    (this->Desired).FramingCorrection.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar5.field0_0x0;
  }
  else {
    if ((param_1->bIsFirstFrame != false) &&
       (pbVar7 = TCameraParameterReader<bool>::Get
                           (&(this->Readers).InitializeWithIdealFraming,&param_2->VariableTable),
       *pbVar7 != false)) {
      dVar4 = (this->State).IdealTarget.field0_0x0._s_0.Y;
      (this->Desired).ScreenTarget.field0_0x0._s_0.X = (this->State).IdealTarget.field0_0x0._s_0.X;
      (this->Desired).ScreenTarget.field0_0x0._s_0.Y = dVar4;
      dVar3 = (this->State).ScreenTarget.field0_0x0._s_0.Y;
      (this->Desired).FramingCorrection.field0_0x0._s_0.X =
           (this->Desired).ScreenTarget.field0_0x0._s_0.X -
           (this->State).ScreenTarget.field0_0x0._s_0.X;
      (this->Desired).FramingCorrection.field0_0x0._s_0.Y = dVar4 - dVar3;
      (this->Desired).bHasCorrection = true;
      return;
    }
    if ((this->State).TargetFramingState == InHardZone) {
      local_58._s_0.X =
           (this->State).IdealTarget.field0_0x0._s_0.X -
           (this->State).ScreenTarget.field0_0x0._s_0.X;
      local_58._s_0.Y =
           (this->State).IdealTarget.field0_0x0._s_0.Y -
           (this->State).ScreenTarget.field0_0x0._s_0.Y;
      if ((local_58._s_0.X == 0.0) && (local_58._s_0.Y == 0.0)) {
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1026344703815057987>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Framing\\BaseFramingCameraNode.cpp"
                           ,0x243,"false");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_48._0_4_ = *(undefined4 *)&(this->State).ScreenTarget.field0_0x0;
        local_48._4_4_ = *(undefined4 *)((longlong)&(this->State).ScreenTarget.field0_0x0 + 4);
        local_48._8_4_ = *(undefined4 *)((longlong)&(this->State).ScreenTarget.field0_0x0 + 8);
        local_48._12_4_ = *(undefined4 *)((longlong)&(this->State).ScreenTarget.field0_0x0 + 0xc);
      }
      else {
        FFramingZone::ComputeClosestIntersection
                  (&(this->State).SoftZone,(TVector2<double> *)&local_48._s_0,
                   &(this->State).ScreenTarget,(TVector2<double> *)&local_58._s_0,false);
      }
      *(undefined4 *)&(this->Desired).ScreenTarget.field0_0x0 = local_48._0_4_;
      *(undefined4 *)((longlong)&(this->Desired).ScreenTarget.field0_0x0 + 4) = local_48._4_4_;
      *(undefined4 *)((longlong)&(this->Desired).ScreenTarget.field0_0x0 + 8) = local_48._8_4_;
      *(undefined4 *)((longlong)&(this->Desired).ScreenTarget.field0_0x0 + 0xc) = local_48._12_4_;
      dVar4 = (this->Desired).ScreenTarget.field0_0x0._s_0.Y -
              (this->State).IdealTarget.field0_0x0._s_0.Y;
      dVar3 = (double)CONCAT44(local_48._4_4_,local_48._0_4_) -
              (this->State).IdealTarget.field0_0x0._s_0.X;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = dVar4 * dVar4 + dVar3 * dVar3;
      auVar12 = sqrtpd(auVar12,auVar2);
      dVar11 = auVar12._0_8_;
    }
    fVar8 = (this->State).LowReframeDampingFactor;
    fVar9 = (this->State).ReframeDampingFactor;
    if (0.0 < fVar8) {
      fVar9 = (fVar9 - fVar8) * (this->State).ReframeDampingFactorAlpha + fVar8;
    }
    this_00 = &(this->State).ReframeDamper;
    if (fVar9 <= __real_3dcccccd) {
      fVar9 = __real_3dcccccd;
    }
    this_00->W0 = (fVar9 - __real_3dcccccd) * (this->State).ToggleEngageAlpha + __real_3dcccccd;
    fVar8 = FCriticalDamper::Update(this_00,(float)dVar11,param_1->DeltaTime);
    dVar10 = (__real_3ff0000000000000 / dVar11) * dVar4 * (double)fVar8 +
             (this->State).IdealTarget.field0_0x0._s_0.Y;
    dVar4 = (__real_3ff0000000000000 / dVar11) * dVar3 * (double)fVar8 +
            (this->State).IdealTarget.field0_0x0._s_0.X;
    (this->Desired).ScreenTarget.field0_0x0._s_0.X = dVar4;
    (this->Desired).ScreenTarget.field0_0x0._s_0.Y = dVar10;
    dVar3 = (this->State).ScreenTarget.field0_0x0._s_0.Y;
    (this->Desired).FramingCorrection.field0_0x0._s_0.X =
         dVar4 - (this->State).ScreenTarget.field0_0x0._s_0.X;
    (this->Desired).FramingCorrection.field0_0x0._s_0.Y = dVar10 - dVar3;
    (this->Desired).bHasCorrection = true;
  }
  return;
}

// ComputeEffectiveDeadZone @ 14d610590

FFramingZone * __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::ComputeEffectiveDeadZone
          (FBaseFramingCameraNodeEvaluator *this,FFramingZone *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = (this->State).DeadZone.TopBound;
  dVar3 = (this->State).DeadZone.RightBound;
  dVar4 = (this->State).DeadZone.BottomBound;
  dVar1 = (this->State).ScreenTarget.field0_0x0._s_0.X;
  dVar6 = (this->State).IdealTarget.field0_0x0._s_0.X;
  dVar5 = (this->State).IdealTarget.field0_0x0._s_0.Y;
  __return_storage_ptr__->LeftBound = (this->State).DeadZone.LeftBound;
  __return_storage_ptr__->TopBound = dVar2;
  __return_storage_ptr__->RightBound = dVar3;
  __return_storage_ptr__->BottomBound = dVar4;
  dVar3 = dVar1 - (this->State).ScreenTargetBounds.LeftBound;
  dVar2 = dVar6 - __real_3f1a36e2eb1c432d;
  dVar6 = dVar6 + __real_3f1a36e2eb1c432d;
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  dVar3 = dVar3 + __return_storage_ptr__->LeftBound;
  if (dVar2 <= dVar3) {
    dVar3 = dVar2;
  }
  dVar2 = dVar5 - __real_3f1a36e2eb1c432d;
  dVar5 = dVar5 + __real_3f1a36e2eb1c432d;
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  __return_storage_ptr__->LeftBound = dVar3;
  dVar3 = (this->State).ScreenTarget.field0_0x0._s_0.Y - (this->State).ScreenTargetBounds.TopBound;
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  dVar3 = dVar3 + __return_storage_ptr__->TopBound;
  if (dVar2 <= dVar3) {
    dVar3 = dVar2;
  }
  dVar1 = (this->State).ScreenTargetBounds.RightBound - dVar1;
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  __return_storage_ptr__->TopBound = dVar3;
  dVar1 = __return_storage_ptr__->RightBound - dVar1;
  dVar2 = (this->State).ScreenTargetBounds.BottomBound -
          (this->State).ScreenTarget.field0_0x0._s_0.Y;
  if (__real_3ff0000000000000 <= dVar1) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (dVar1 <= dVar6) {
    dVar1 = dVar6;
  }
  __return_storage_ptr__->RightBound = dVar1;
  dVar2 = __return_storage_ptr__->BottomBound - dVar2;
  if (__real_3ff0000000000000 <= dVar2) {
    dVar2 = __real_3ff0000000000000;
  }
  if (dVar2 <= dVar5) {
    dVar2 = dVar5;
  }
  __return_storage_ptr__->BottomBound = dVar2;
  return __return_storage_ptr__;
}

// ComputeFinalTargetInfo @ 14d6106a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::ComputeFinalTargetInfo
          (FBaseFramingCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraPose *param_2,TVector<double> *param_3,TVector2<double> *param_4,
          FFramingZone *param_5)

{
  TArray<UE::Cameras::FFramingZone,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1
  ;
  int *piVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ForAnyElementType FVar15;
  bool bVar16;
  undefined1 uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  TVector2<double>_u_0 *pTVar21;
  FFramingZone *pFVar22;
  ForElementType<UE::Cameras::FFramingZone> FVar23;
  void *_Dst;
  ForElementType<UE::Cameras::FFramingZone> FVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auStackY_308 [32];
  ForAnyElementType local_2c8;
  int local_2c0 [2];
  ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> local_2b8;
  longlong local_2b0;
  FCameraPose *local_2a8;
  TVector2<double>_u_0 local_2a0;
  double local_290;
  double dStack_288;
  double local_280;
  double dStack_278;
  TVector2<double> *local_270;
  FBaseFramingCameraNodeEvaluator *local_268;
  TVector<double> *local_260;
  FFramingZone *local_258;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_250;
  TVector<double>_u_0 local_240;
  TVector<double>_u_0 local_228;
  double local_210;
  double local_208;
  double local_200;
  TVector2<double>_u_0 local_1f8;
  TVector2<double>_u_0 local_1e8;
  char local_1d8;
  FFramingZone local_1d0;
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  uVar26 = (this->WorldTargets).TargetInfos.ArrayNum;
  local_270 = param_4;
  local_2b8 = (this->WorldTargets).TargetInfos.AllocatorInstance.SecondaryData;
  if (local_2b8 == (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)0x0) {
    local_2b8 = (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)&this->WorldTargets;
  }
  local_258 = param_5;
  local_2a8 = param_2;
  local_268 = this;
  local_260 = param_3;
  if (((int)uVar26 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar6 = (code *)swi(3);
    uVar17 = (*pcVar6)();
    return (bool)uVar17;
  }
  if (uVar26 == 0) {
    bVar16 = false;
  }
  else {
    local_250.Object = (param_1->EvaluationContext).Object;
    local_250.SharedReferenceCount.ReferenceController =
         (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (local_250.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_250.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_250.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    dVar7 = FCameraPoseMath::GetEffectiveAspectRatio(param_2,&local_250);
    local_2c8.Data = (FScriptContainerElement *)0x0;
    local_2c0[0] = 0;
    local_2c0[1] = 0;
    if ((int)uVar26 < 1) {
      if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
      }
    }
    else {
      iVar18 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x58,8,uVar26,&local_2c8,local_2c0,local_2c0 + 1);
      DefaultConstructItems<_UE::Cameras::FBaseFramingCameraNodeEvaluator::ComputeFinalTargetInfo_::__l2::FComputedTargetScreenInfo,int>
                (local_2c8.Data + (longlong)iVar18 * 0x58,uVar26);
    }
    pTVar1 = &(this->State).DebugAllScreenTargetBounds;
    piVar2 = &(this->State).DebugAllScreenTargetBounds.ArrayNum;
    iVar18 = *piVar2;
    if (iVar18 < (int)uVar26) {
      iVar19 = Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FFramingZone>_>
                         (0x20,8,uVar26 - iVar18,&pTVar1->AllocatorInstance,piVar2,
                          &(this->State).DebugAllScreenTargetBounds.ArrayMax);
      FVar23 = (this->State).DebugAllScreenTargetBounds.AllocatorInstance.SecondaryData;
      if (FVar23 == (ForElementType<UE::Cameras::FFramingZone>)0x0) {
        FVar23 = (ForElementType<UE::Cameras::FFramingZone>)pTVar1;
      }
      DefaultConstructItems<UE::Cameras::FFramingZone,int>
                ((void *)((longlong)FVar23 + (longlong)iVar19 * 0x20),uVar26 - iVar18);
    }
    else {
      if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
      }
      if ((int)uVar26 < iVar18) {
        uVar28 = iVar18 - uVar26;
        if (((int)(uVar28 | uVar26) < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          uVar17 = (*pcVar6)();
          return (bool)uVar17;
        }
        if (uVar28 != 0) {
          FVar23 = (this->State).DebugAllScreenTargetBounds.AllocatorInstance.SecondaryData;
          if (FVar23 == (ForElementType<UE::Cameras::FFramingZone>)0x0) {
            FVar23 = (ForElementType<UE::Cameras::FFramingZone>)pTVar1;
          }
          _Dst = (void *)((longlong)FVar23 + (longlong)(int)uVar26 * 0x20);
          iVar18 = (*piVar2 - uVar28) - uVar26;
          if (iVar18 != 0) {
            memmove(_Dst,(void *)((longlong)(int)uVar28 * 0x20 + (longlong)_Dst),
                    (longlong)iVar18 << 5);
          }
          *piVar2 = *piVar2 - uVar28;
          Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FFramingZone>_>
                    (0x20,8,&pTVar1->AllocatorInstance,*piVar2,
                     &(this->State).DebugAllScreenTargetBounds.ArrayMax);
        }
      }
    }
    dVar5 = _UNK_150689678;
    dVar8 = ___xmm_3fe00000000000003fe0000000000000;
    uVar28 = 0;
    if (0 < (int)uVar26) {
      lVar27 = 0;
      local_2b8 = (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)
                  ((longlong)local_2b8 + 0x60);
      local_2b0 = 0;
      do {
        uVar25 = ~uVar28 >> 0x1f;
        uVar20 = 0;
        if ((int)uVar28 < (int)uVar26) {
          uVar20 = uVar25;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          uVar17 = (*pcVar6)();
          return (bool)uVar17;
        }
        uVar20 = 0;
        if ((int)uVar28 < local_2c0[0]) {
          uVar20 = uVar25;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          uVar17 = (*pcVar6)();
          return (bool)uVar17;
        }
        FVar15.Data = local_2c8.Data;
        dVar37 = *(double *)((longlong)local_2b8 + -0x40);
        FVar23 = *(ForElementType<UE::Cameras::FFramingZone> *)((longlong)local_2b8 + -0x38);
        dVar4 = *(double *)((longlong)local_2b8 + -0x30);
        local_240._s_0.X = dVar37;
        local_240._s_0.Y = (double)FVar23;
        local_240._s_0.Z = dVar4;
        FCameraPoseMath::ProjectWorldToScreen
                  ((TOptional<UE::Math::TVector2<double>_> *)&local_1e8._s_0,local_2a8,dVar7,
                   (TVector<double> *)&local_240._s_0,true);
        local_1f8._s_0.X = dVar8;
        local_1f8._s_0.Y = dVar5;
        pTVar21 = &local_1e8;
        if (local_1d8 == '\0') {
          pTVar21 = &local_1f8;
        }
        *(double *)(FVar15.Data + local_2b0) = dVar37;
        *(ForElementType<UE::Cameras::FFramingZone> *)(FVar15.Data + local_2b0 + 8) = FVar23;
        dVar9 = (pTVar21->_s_0).X;
        dVar10 = (pTVar21->_s_0).Y;
        *(double *)(FVar15.Data + local_2b0 + 0x10) = dVar4;
        *(double *)(FVar15.Data + local_2b0 + 0x18) = dVar9;
        *(double *)(FVar15.Data + local_2b0 + 0x18 + 8) = dVar10;
        pFVar22 = ComputeScreenTargetBounds
                            (&local_1d0,local_2a8,(float)dVar7,
                             (TTransform<double> *)((longlong)local_2b8 + -0x60),
                             (TBoxSphereBounds<double,double> *)local_2b8);
        dVar4 = pFVar22->TopBound;
        *(double *)(FVar15.Data + local_2b0 + 0x28) = pFVar22->LeftBound;
        *(double *)(FVar15.Data + local_2b0 + 0x28 + 8) = dVar4;
        dVar4 = pFVar22->BottomBound;
        *(double *)(FVar15.Data + local_2b0 + 0x38) = pFVar22->RightBound;
        *(double *)(FVar15.Data + local_2b0 + 0x38 + 8) = dVar4;
        local_280 = (local_2a8->Location).field0_0x0._s_0.Z;
        dVar37 = dVar37 - (local_2a8->Location).field0_0x0._s_0.X;
        uVar11 = *(undefined8 *)(FVar15.Data + local_2b0 + 0x28);
        uVar12 = *(undefined8 *)(FVar15.Data + local_2b0 + 0x28 + 8);
        dVar4 = (double)FVar23 - (local_2a8->Location).field0_0x0._s_0.Y;
        uVar13 = *(undefined8 *)(FVar15.Data + local_2b0 + 0x38);
        uVar14 = *(undefined8 *)(FVar15.Data + local_2b0 + 0x38 + 8);
        *(double *)(FVar15.Data + local_2b0 + 0x48) =
             SQRT(dVar4 * dVar4 + dVar37 * dVar37 +
                  (local_240._s_0.Z - local_280) * (local_240._s_0.Z - local_280));
        *(undefined4 *)(FVar15.Data + local_2b0 + 0x50) =
             *(undefined4 *)((longlong)local_2b8 + 0x38);
        uVar20 = 0;
        if ((int)uVar28 < (local_268->State).DebugAllScreenTargetBounds.ArrayNum) {
          uVar20 = uVar25;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          uVar17 = (*pcVar6)();
          return (bool)uVar17;
        }
        FVar23 = (this->State).DebugAllScreenTargetBounds.AllocatorInstance.SecondaryData;
        FVar24 = (ForElementType<UE::Cameras::FFramingZone>)pTVar1;
        if (FVar23 != (ForElementType<UE::Cameras::FFramingZone>)0x0) {
          FVar24 = FVar23;
        }
        local_2b8 = (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)
                    ((longlong)local_2b8 + 0xa0);
        local_2b0 = local_2b0 + 0x58;
        uVar28 = uVar28 + 1;
        *(undefined8 *)(lVar27 + (longlong)FVar24) = uVar11;
        ((undefined8 *)(lVar27 + (longlong)FVar24))[1] = uVar12;
        puVar3 = (undefined8 *)(lVar27 + 0x10 + (longlong)FVar24);
        *puVar3 = uVar13;
        puVar3[1] = uVar14;
        lVar27 = lVar27 + 0x20;
        param_5 = local_258;
        param_3 = local_260;
      } while ((int)uVar28 < (int)uVar26);
    }
    if (uVar26 == 1) {
      if ((local_2c0[0] < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        uVar17 = (*pcVar6)();
        return (bool)uVar17;
      }
      dVar7 = *(double *)(local_2c8.Data + 0x20);
      (local_270->field0_0x0)._s_0.X = *(double *)(local_2c8.Data + 0x18);
      (local_270->field0_0x0)._s_0.Y = dVar7;
      dVar7 = *(double *)(local_2c8.Data + 0x30);
      param_5->LeftBound = *(double *)(local_2c8.Data + 0x28);
      param_5->TopBound = dVar7;
      dVar7 = *(double *)(local_2c8.Data + 0x40);
      param_5->RightBound = *(double *)(local_2c8.Data + 0x38);
      param_5->BottomBound = dVar7;
      dVar7 = *(double *)(local_2c8.Data + 8);
      (param_3->field0_0x0)._s_0.X = *(double *)local_2c8.Data;
      (param_3->field0_0x0)._s_0.Y = dVar7;
      (param_3->field0_0x0)._s_0.Z = *(double *)(local_2c8.Data + 0x10);
    }
    else {
      local_2a0._s_0.X = 0.0;
      local_2a0._s_0.Y = 0.0;
      if ((local_2c0[0] < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        uVar17 = (*pcVar6)();
        return (bool)uVar17;
      }
      uVar26 = 0;
      dVar8 = 0.0;
      uVar29 = *(undefined4 *)(local_2c8.Data + 0x28);
      uVar31 = *(undefined4 *)(local_2c8.Data + 0x2c);
      local_290 = *(double *)(local_2c8.Data + 0x28);
      uVar33 = *(undefined4 *)(local_2c8.Data + 0x30);
      uVar35 = *(undefined4 *)(local_2c8.Data + 0x34);
      dStack_288 = *(double *)(local_2c8.Data + 0x30);
      uVar30 = *(undefined4 *)(local_2c8.Data + 0x38);
      uVar32 = *(undefined4 *)(local_2c8.Data + 0x3c);
      local_280 = *(double *)(local_2c8.Data + 0x38);
      uVar34 = *(undefined4 *)(local_2c8.Data + 0x40);
      uVar36 = *(undefined4 *)(local_2c8.Data + 0x44);
      dStack_278 = *(double *)(local_2c8.Data + 0x40);
      dVar5 = 0.0;
      if (0 < local_2c0[0]) {
        lVar27 = 0;
        uVar38 = uVar34;
        uVar39 = uVar36;
        uVar40 = uVar30;
        uVar41 = uVar32;
        uVar42 = uVar33;
        uVar43 = uVar35;
        do {
          dVar5 = local_290;
          uVar28 = 0;
          if ((int)uVar26 < local_2c0[0]) {
            uVar28 = ~uVar26 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            uVar17 = (*pcVar6)();
            return (bool)uVar17;
          }
          uVar26 = uVar26 + 1;
          dVar37 = (double)*(float *)(local_2c8.Data + lVar27 + 0x50);
          local_2a0._s_0.X = local_2a0._s_0.X + dVar37 * *(double *)(local_2c8.Data + lVar27 + 0x18)
          ;
          local_2a0._s_0.Y = local_2a0._s_0.Y + dVar37 * *(double *)(local_2c8.Data + lVar27 + 0x20)
          ;
          dVar4 = *(double *)(local_2c8.Data + lVar27 + 0x28);
          uVar29 = SUB84(dVar4,0);
          uVar31 = (undefined4)((ulonglong)dVar4 >> 0x20);
          if (dVar5 <= dVar4) {
            uVar29 = SUB84(dVar5,0);
            uVar31 = (undefined4)((ulonglong)dVar5 >> 0x20);
          }
          dVar8 = dVar8 + dVar37 * *(double *)(local_2c8.Data + lVar27 + 0x48);
          dVar5 = *(double *)(local_2c8.Data + lVar27 + 0x30);
          uVar33 = SUB84(dVar5,0);
          uVar35 = (int)((ulonglong)dVar5 >> 0x20);
          if ((double)CONCAT44(uVar43,uVar42) <= dVar5) {
            uVar33 = uVar42;
            uVar35 = uVar43;
          }
          local_290 = (double)CONCAT44(uVar31,uVar29);
          dVar5 = *(double *)(local_2c8.Data + lVar27 + 0x38);
          uVar30 = SUB84(dVar5,0);
          uVar32 = (int)((ulonglong)dVar5 >> 0x20);
          if (dVar5 <= (double)CONCAT44(uVar41,uVar40)) {
            uVar30 = uVar40;
            uVar32 = uVar41;
          }
          dStack_288 = (double)CONCAT44(uVar35,uVar33);
          dVar5 = *(double *)(local_2c8.Data + lVar27 + 0x40);
          lVar27 = lVar27 + 0x58;
          uVar34 = SUB84(dVar5,0);
          uVar36 = (int)((ulonglong)dVar5 >> 0x20);
          if (dVar5 <= (double)CONCAT44(uVar39,uVar38)) {
            uVar34 = uVar38;
            uVar36 = uVar39;
          }
          local_280 = (double)CONCAT44(uVar32,uVar30);
          dStack_278 = (double)CONCAT44(uVar36,uVar34);
          uVar38 = uVar34;
          uVar39 = uVar36;
          uVar40 = uVar30;
          uVar41 = uVar32;
          uVar42 = uVar33;
          uVar43 = uVar35;
          dVar5 = dVar8;
        } while ((int)uVar26 < local_2c0[0]);
      }
      FCameraPoseMath::BuildViewProjectionMatrix(&local_1a8,local_2a8,dVar7);
      UE::Math::TMatrix<double>::InverseFast(&local_1a8,&local_128);
      FCameraPoseMath::UnprojectFromScreen
                ((TRay<double> *)&local_228._s_0,&local_128,(TVector2<double> *)&local_2a0._s_0);
      (local_270->field0_0x0)._s_0.X = local_2a0._s_0.X;
      (local_270->field0_0x0)._s_0.Y = local_2a0._s_0.Y;
      *(undefined4 *)&param_5->LeftBound = uVar29;
      *(undefined4 *)((longlong)&param_5->LeftBound + 4) = uVar31;
      *(undefined4 *)&param_5->TopBound = uVar33;
      *(undefined4 *)((longlong)&param_5->TopBound + 4) = uVar35;
      *(undefined4 *)&param_5->RightBound = uVar30;
      *(undefined4 *)((longlong)&param_5->RightBound + 4) = uVar32;
      *(undefined4 *)&param_5->BottomBound = uVar34;
      *(undefined4 *)((longlong)&param_5->BottomBound + 4) = uVar36;
      (param_3->field0_0x0)._s_0.X = local_210 * dVar5 + local_228._s_0.X;
      (param_3->field0_0x0)._s_0.Y = local_208 * dVar5 + local_228._s_0.Y;
      (param_3->field0_0x0)._s_0.Z = local_200 * dVar5 + local_228._s_0.Z;
    }
    if (local_2c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data);
    }
    bVar16 = true;
  }
  return bVar16;
}

// ComputeScreenTargetBounds @ 14d610eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FFramingZone * __cdecl
UE::Cameras::FBaseFramingCameraNodeEvaluator::ComputeScreenTargetBounds
          (FFramingZone *__return_storage_ptr__,FCameraPose *param_1,float param_2,
          TTransform<double> *param_3,TBoxSphereBounds<double,double> *param_4)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  bool bVar12;
  FFramingZone *pFVar13;
  int iVar14;
  double *pdVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar78;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  uint uVar100;
  uint uVar101;
  undefined1 auStack_3d8 [32];
  TVector2<double>_u_0 local_3a8;
  double local_398;
  float local_390;
  undefined1 local_388 [16];
  double local_378;
  TVector<double>_u_0 local_368;
  TVector<double>_u_0 local_350;
  TVector<double>_u_0 local_338;
  TVector<double>_u_0 local_320;
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2f0;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c0;
  undefined1 local_2a8 [16];
  double local_298;
  undefined1 local_290 [16];
  double local_280;
  uint local_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  double local_268;
  undefined1 local_260 [16];
  double local_250;
  undefined1 local_248 [16];
  double local_238;
  undefined1 local_230 [16];
  double local_220;
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  double local_208;
  undefined1 local_200 [16];
  double local_1f0;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined1 local_1d0 [16];
  double local_1c0;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined1 local_1a0 [16];
  double local_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined1 local_170 [16];
  double local_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  double local_138;
  double dStack_130;
  double local_128 [5];
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  auVar43 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
  dVar11 = (param_3->Rotation).ZW.m128d_f64[1];
  local_2a8 = *(undefined1 (*) [16])&(param_4->BoxExtent).field0_0x0;
  uStack_270 = local_2a8._8_4_;
  uStack_26c = local_2a8._12_4_;
  local_398 = (param_4->BoxExtent).field0_0x0._s_0.Z;
  auVar79._8_8_ = 0;
  auVar79._0_8_ = local_398;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  local_278 = local_2a8._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
  uStack_274 = local_2a8._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar78 = local_2a8._8_8_;
  dVar4 = auVar43._0_8_;
  dVar6 = local_2a8._0_8_;
  auVar41 = blendpd(auVar16,auVar43,2);
  auVar76._0_8_ = dVar78 * auVar16._0_8_ - auVar16._8_8_ * dVar6;
  auVar76._8_8_ = local_398 * auVar16._8_8_ - dVar4 * dVar78;
  auVar16 = blendpd(local_2a8,auVar79,2);
  dVar1 = auVar43._8_8_;
  auVar17._0_8_ = auVar16._0_8_ * dVar4 - auVar41._0_8_ * local_398;
  auVar17._8_8_ = auVar16._8_8_ * dVar1 - auVar41._8_8_ * 0.0;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar41 = blendpd(auVar76,auVar17,2);
  auVar77._0_8_ = auVar41._0_8_ + auVar41._0_8_;
  auVar77._8_8_ = auVar41._8_8_ + auVar41._8_8_;
  dVar3 = auVar76._8_8_ + auVar76._8_8_;
  dVar5 = auVar17._0_8_ + auVar17._0_8_;
  uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar60._8_4_ = SUB84(dVar5,0);
  auVar60._0_8_ = dVar3;
  auVar60._12_4_ = uVar39;
  auVar44._8_4_ = SUB84(dVar5,0);
  auVar44._0_8_ = dVar3;
  auVar44._12_4_ = uVar39;
  auVar41 = blendpd(auVar44,auVar77,2);
  auVar61._0_8_ = auVar60._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar3;
  auVar61._8_8_ = auVar77._0_8_ * auVar16._8_8_ - dVar4 * dVar5;
  auVar16 = blendpd(auVar16,auVar43,2);
  auVar18._8_4_ = SUB84(auVar61._8_8_,0);
  auVar18._0_8_ = auVar61._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
  auVar80._4_4_ = uStack_274;
  auVar80._0_4_ = local_278;
  auVar80._8_4_ = uStack_270;
  auVar80._12_4_ = uStack_26c;
  auVar45._0_8_ = auVar41._0_8_ * dVar4 - auVar16._0_8_ * auVar77._0_8_;
  auVar45._8_8_ = auVar41._8_8_ * dVar1 - auVar16._8_8_ * auVar77._8_8_;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  dVar3 = dVar3 * dVar11 + dVar6 + auVar18._8_8_ + (param_3->Translation).XY.m128d_f64[0];
  dVar5 = dVar5 * dVar11 + dVar78 + auVar45._0_8_ + (param_3->Translation).XY.m128d_f64[1];
  uVar39 = SUB84(dVar5,0);
  uVar40 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar41 = blendpd(auVar61,auVar45,2);
  local_368._s_0.Z =
       auVar77._0_8_ * dVar11 + local_398 + auVar41._0_8_ + (param_3->Translation).ZW.m128d_f64[0];
  local_290._8_4_ = uVar39;
  local_290._0_8_ = dVar3;
  local_290._12_4_ = uVar40;
  local_368._8_4_ = uVar39;
  local_368._0_8_ = dVar3;
  local_368._12_4_ = uVar40;
  auVar41 = blendpd(auVar16,auVar43,2);
  auVar81._0_8_ =
       auVar80._8_8_ * auVar16._0_8_ - auVar16._8_8_ * (double)CONCAT44(uStack_274,local_278);
  auVar81._8_8_ = local_398 * auVar16._8_8_ - dVar4 * dVar78;
  auVar19._4_4_ = uStack_274;
  auVar19._0_4_ = local_278;
  auVar19._8_4_ = uStack_270;
  auVar19._12_4_ = uStack_26c;
  uStack_210 = uStack_270 ^ (uint)__xmm_80000000000000008000000000000000;
  uStack_20c = uStack_26c ^ __xmm_80000000000000008000000000000000._4_4_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_398;
  auVar16 = blendpd(auVar19,auVar8,2);
  auVar20._0_8_ = auVar16._0_8_ * dVar4 - auVar41._0_8_ * local_398;
  auVar20._8_8_ = auVar16._8_8_ * dVar1 - auVar41._8_8_ * 0.0;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar41 = blendpd(auVar81,auVar20,2);
  auVar82._0_8_ = auVar41._0_8_ + auVar41._0_8_;
  auVar82._8_8_ = auVar41._8_8_ + auVar41._8_8_;
  dVar3 = auVar81._8_8_ + auVar81._8_8_;
  dVar5 = auVar20._0_8_ + auVar20._0_8_;
  uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar62._8_4_ = SUB84(dVar5,0);
  auVar62._0_8_ = dVar3;
  auVar62._12_4_ = uVar39;
  auVar46._8_4_ = SUB84(dVar5,0);
  auVar46._0_8_ = dVar3;
  auVar46._12_4_ = uVar39;
  auVar41 = blendpd(auVar46,auVar82,2);
  auVar63._0_8_ = auVar62._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar3;
  auVar63._8_8_ = auVar82._0_8_ * auVar16._8_8_ - dVar4 * dVar5;
  auVar21._8_4_ = SUB84(auVar63._8_8_,0);
  auVar21._0_8_ = auVar63._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
  auVar16 = blendpd(auVar16,auVar43,2);
  auVar47._0_8_ = auVar41._0_8_ * dVar4 - auVar16._0_8_ * auVar82._0_8_;
  auVar47._8_8_ = auVar41._8_8_ * dVar1 - auVar16._8_8_ * auVar82._8_8_;
  auVar16 = blendpd(auVar63,auVar47,2);
  dVar3 = dVar3 * dVar1 + (double)CONCAT44(uStack_274,local_278) + auVar21._8_8_ +
          (param_3->Translation).XY.m128d_f64[0];
  dVar5 = dVar5 * dVar1 + dVar78 + auVar47._0_8_ + (param_3->Translation).XY.m128d_f64[1];
  uVar39 = SUB84(dVar5,0);
  uVar40 = (undefined4)((ulonglong)dVar5 >> 0x20);
  local_260._8_4_ = uVar39;
  local_260._0_8_ = dVar3;
  local_260._12_4_ = uVar40;
  local_350._s_0.Z =
       auVar82._0_8_ * dVar1 + local_398 + auVar16._0_8_ + (param_3->Translation).ZW.m128d_f64[0];
  local_350._8_4_ = uVar39;
  local_350._0_8_ = dVar3;
  local_350._12_4_ = uVar40;
  auVar83._8_4_ = uStack_210;
  auVar83._0_8_ = dVar6;
  auVar83._12_4_ = uStack_20c;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar41 = blendpd(auVar16,auVar43,2);
  auVar84._0_8_ = auVar83._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar6;
  auVar84._8_8_ = local_398 * auVar16._8_8_ - dVar4 * (double)CONCAT44(uStack_20c,uStack_210);
  auVar22._8_4_ = uStack_210;
  auVar22._0_8_ = dVar6;
  auVar22._12_4_ = uStack_20c;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_398;
  auVar16 = blendpd(auVar22,auVar9,2);
  local_248._8_4_ = uStack_210;
  local_248._0_8_ = dVar6;
  local_248._12_4_ = uStack_20c;
  auVar23._0_8_ = auVar16._0_8_ * dVar4 - auVar41._0_8_ * local_398;
  auVar23._8_8_ = auVar16._8_8_ * dVar1 - auVar41._8_8_ * 0.0;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar41 = blendpd(auVar84,auVar23,2);
  dVar3 = auVar84._8_8_ + auVar84._8_8_;
  dVar5 = auVar23._0_8_ + auVar23._0_8_;
  uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar85._0_8_ = auVar41._0_8_ + auVar41._0_8_;
  auVar85._8_8_ = auVar41._8_8_ + auVar41._8_8_;
  auVar64._8_4_ = SUB84(dVar5,0);
  auVar64._0_8_ = dVar3;
  auVar64._12_4_ = uVar39;
  auVar48._8_4_ = SUB84(dVar5,0);
  auVar48._0_8_ = dVar3;
  auVar48._12_4_ = uVar39;
  auVar41 = blendpd(auVar48,auVar85,2);
  auVar65._0_8_ = auVar64._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar3;
  auVar65._8_8_ = auVar85._0_8_ * auVar16._8_8_ - dVar4 * dVar5;
  auVar16 = blendpd(auVar16,auVar43,2);
  auVar24._8_4_ = SUB84(auVar65._8_8_,0);
  auVar24._0_8_ = auVar65._0_8_;
  auVar24._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
  auVar49._0_8_ = auVar41._0_8_ * dVar4 - auVar16._0_8_ * auVar85._0_8_;
  auVar49._8_8_ = auVar41._8_8_ * dVar1 - auVar16._8_8_ * auVar85._8_8_;
  auVar16 = blendpd(auVar65,auVar49,2);
  dVar3 = dVar3 * dVar1 + dVar6 + auVar24._8_8_ + (param_3->Translation).XY.m128d_f64[0];
  dVar5 = dVar5 * dVar1 + (double)CONCAT44(uStack_20c,uStack_210) + auVar49._0_8_ +
          (param_3->Translation).XY.m128d_f64[1];
  uVar39 = SUB84(dVar5,0);
  uVar40 = (undefined4)((ulonglong)dVar5 >> 0x20);
  local_230._8_4_ = uVar39;
  local_230._0_8_ = dVar3;
  local_230._12_4_ = uVar40;
  local_338._s_0.Z =
       auVar85._0_8_ * dVar1 + local_398 + auVar16._0_8_ + (param_3->Translation).ZW.m128d_f64[0];
  local_338._8_4_ = uVar39;
  local_338._0_8_ = dVar3;
  local_338._12_4_ = uVar40;
  auVar86._4_4_ = uStack_274;
  auVar86._0_4_ = local_278;
  auVar86._8_4_ = uStack_210;
  auVar86._12_4_ = uStack_20c;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar41 = blendpd(auVar16,auVar43,2);
  auVar87._0_8_ =
       auVar86._8_8_ * auVar16._0_8_ - auVar16._8_8_ * (double)CONCAT44(uStack_274,local_278);
  auVar87._8_8_ = local_398 * auVar16._8_8_ - dVar4 * (double)CONCAT44(uStack_20c,uStack_210);
  auVar25._4_4_ = uStack_274;
  auVar25._0_4_ = local_278;
  auVar25._8_4_ = uStack_210;
  auVar25._12_4_ = uStack_20c;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_398;
  auVar16 = blendpd(auVar25,auVar10,2);
  auVar26._0_8_ = auVar16._0_8_ * dVar4 - auVar41._0_8_ * local_398;
  auVar26._8_8_ = auVar16._8_8_ * dVar1 - auVar41._8_8_ * 0.0;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar41 = blendpd(auVar87,auVar26,2);
  dVar3 = auVar87._8_8_ + auVar87._8_8_;
  dVar5 = auVar26._0_8_ + auVar26._0_8_;
  uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar88._0_8_ = auVar41._0_8_ + auVar41._0_8_;
  auVar88._8_8_ = auVar41._8_8_ + auVar41._8_8_;
  auVar66._8_4_ = SUB84(dVar5,0);
  auVar66._0_8_ = dVar3;
  auVar66._12_4_ = uVar39;
  auVar50._8_4_ = SUB84(dVar5,0);
  auVar50._0_8_ = dVar3;
  auVar50._12_4_ = uVar39;
  auVar41 = blendpd(auVar50,auVar88,2);
  auVar67._0_8_ = auVar66._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar3;
  auVar67._8_8_ = auVar88._0_8_ * auVar16._8_8_ - dVar4 * dVar5;
  auVar27._8_4_ = SUB84(auVar67._8_8_,0);
  auVar27._0_8_ = auVar67._0_8_;
  auVar27._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
  auVar16 = blendpd(auVar16,auVar43,2);
  uVar100 = SUB84(local_398,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar101 = (uint)((ulonglong)local_398 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  auVar51._0_8_ = auVar41._0_8_ * dVar4 - auVar16._0_8_ * auVar88._0_8_;
  auVar51._8_8_ = auVar41._8_8_ * dVar1 - auVar16._8_8_ * auVar88._8_8_;
  local_1d8 = CONCAT44(uVar101,uVar100);
  auVar16 = blendpd(auVar67,auVar51,2);
  dVar3 = dVar3 * dVar1 + (double)CONCAT44(uStack_274,local_278) + auVar27._8_8_ +
          (param_3->Translation).XY.m128d_f64[0];
  dVar5 = dVar5 * dVar1 + (double)CONCAT44(uStack_20c,uStack_210) + auVar51._0_8_ +
          (param_3->Translation).XY.m128d_f64[1];
  uVar39 = SUB84(dVar5,0);
  uVar40 = (undefined4)((ulonglong)dVar5 >> 0x20);
  local_200._8_4_ = uVar39;
  local_200._0_8_ = dVar3;
  local_200._12_4_ = uVar40;
  local_320._s_0.Z =
       auVar88._0_8_ * dVar1 + local_398 + auVar16._0_8_ + (param_3->Translation).ZW.m128d_f64[0];
  local_320._8_4_ = uVar39;
  local_320._0_8_ = dVar3;
  local_320._12_4_ = uVar40;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar41 = blendpd(auVar16,auVar43,2);
  local_1a8 = CONCAT44(uVar101,uVar100);
  auVar89._0_8_ = dVar78 * auVar16._0_8_ - auVar16._8_8_ * dVar6;
  auVar89._8_8_ = (double)CONCAT44(uVar101,uVar100) * auVar16._8_8_ - dVar4 * dVar78;
  auVar16._4_4_ = uVar101;
  auVar16._0_4_ = uVar100;
  auVar16._8_8_ = 0;
  auVar16 = blendpd(local_2a8,auVar16,2);
  auVar28._0_8_ = auVar16._0_8_ * dVar4 - auVar41._0_8_ * (double)CONCAT44(uVar101,uVar100);
  auVar28._8_8_ = auVar16._8_8_ * dVar1 - auVar41._8_8_ * 0.0;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar41 = blendpd(auVar89,auVar28,2);
  auVar90._0_8_ = auVar41._0_8_ + auVar41._0_8_;
  auVar90._8_8_ = auVar41._8_8_ + auVar41._8_8_;
  dVar3 = auVar89._8_8_ + auVar89._8_8_;
  dVar5 = auVar28._0_8_ + auVar28._0_8_;
  uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar68._8_4_ = SUB84(dVar5,0);
  auVar68._0_8_ = dVar3;
  auVar68._12_4_ = uVar39;
  auVar52._8_4_ = SUB84(dVar5,0);
  auVar52._0_8_ = dVar3;
  auVar52._12_4_ = uVar39;
  auVar41 = blendpd(auVar52,auVar90,2);
  auVar69._0_8_ = auVar68._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar3;
  auVar69._8_8_ = auVar90._0_8_ * auVar16._8_8_ - dVar4 * dVar5;
  auVar16 = blendpd(auVar16,auVar43,2);
  auVar29._8_4_ = SUB84(auVar69._8_8_,0);
  auVar29._0_8_ = auVar69._0_8_;
  auVar29._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
  auVar53._0_8_ = auVar41._0_8_ * dVar4 - auVar16._0_8_ * auVar90._0_8_;
  auVar53._8_8_ = auVar41._8_8_ * dVar1 - auVar16._8_8_ * auVar90._8_8_;
  auVar16 = blendpd(auVar69,auVar53,2);
  dVar3 = dVar3 * dVar1 + dVar6 + auVar29._8_8_ + (param_3->Translation).XY.m128d_f64[0];
  dVar5 = dVar5 * dVar1 + dVar78 + auVar53._0_8_ + (param_3->Translation).XY.m128d_f64[1];
  uVar39 = SUB84(dVar5,0);
  uVar40 = (undefined4)((ulonglong)dVar5 >> 0x20);
  local_1d0._8_4_ = uVar39;
  local_1d0._0_8_ = dVar3;
  local_1d0._12_4_ = uVar40;
  local_308._s_0.Z =
       auVar90._0_8_ * dVar1 + (double)CONCAT44(uVar101,uVar100) + auVar16._0_8_ +
       (param_3->Translation).ZW.m128d_f64[0];
  local_308._8_4_ = uVar39;
  local_308._0_8_ = dVar3;
  local_308._12_4_ = uVar40;
  auVar91._4_4_ = uStack_274;
  auVar91._0_4_ = local_278;
  auVar91._8_4_ = uStack_270;
  auVar91._12_4_ = uStack_26c;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar42 = blendpd(auVar16,auVar43,2);
  auVar92._0_8_ =
       auVar91._8_8_ * auVar16._0_8_ - auVar16._8_8_ * (double)CONCAT44(uStack_274,local_278);
  auVar92._8_8_ = (double)CONCAT44(uVar101,uVar100) * auVar16._8_8_ - dVar4 * dVar78;
  auVar30._4_4_ = uStack_274;
  auVar30._0_4_ = local_278;
  auVar30._8_4_ = uStack_270;
  auVar30._12_4_ = uStack_26c;
  auVar41._4_4_ = uVar101;
  auVar41._0_4_ = uVar100;
  auVar41._8_8_ = 0;
  auVar16 = blendpd(auVar30,auVar41,2);
  auVar31._0_8_ = auVar16._0_8_ * dVar4 - auVar42._0_8_ * (double)CONCAT44(uVar101,uVar100);
  auVar31._8_8_ = auVar16._8_8_ * dVar1 - auVar42._8_8_ * 0.0;
  dVar3 = auVar92._8_8_ + auVar92._8_8_;
  dVar5 = auVar31._0_8_ + auVar31._0_8_;
  uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar41 = blendpd(auVar92,auVar31,2);
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar70._8_4_ = SUB84(dVar5,0);
  auVar70._0_8_ = dVar3;
  auVar70._12_4_ = uVar39;
  auVar93._0_8_ = auVar41._0_8_ + auVar41._0_8_;
  auVar93._8_8_ = auVar41._8_8_ + auVar41._8_8_;
  auVar54._8_4_ = SUB84(dVar5,0);
  auVar54._0_8_ = dVar3;
  auVar54._12_4_ = uVar39;
  local_178 = CONCAT44(uVar101,uVar100);
  auVar41 = blendpd(auVar54,auVar93,2);
  auVar71._0_8_ = auVar70._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar3;
  auVar71._8_8_ = auVar93._0_8_ * auVar16._8_8_ - dVar4 * dVar5;
  auVar16 = blendpd(auVar16,auVar43,2);
  auVar32._8_4_ = SUB84(auVar71._8_8_,0);
  auVar32._0_8_ = auVar71._0_8_;
  auVar32._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
  auVar55._0_8_ = auVar41._0_8_ * dVar4 - auVar16._0_8_ * auVar93._0_8_;
  auVar55._8_8_ = auVar41._8_8_ * dVar1 - auVar16._8_8_ * auVar93._8_8_;
  auVar16 = blendpd(auVar71,auVar55,2);
  dVar3 = dVar3 * dVar1 + (double)CONCAT44(uStack_274,local_278) + auVar32._8_8_ +
          (param_3->Translation).XY.m128d_f64[0];
  dVar5 = dVar5 * dVar1 + dVar78 + auVar55._0_8_ + (param_3->Translation).XY.m128d_f64[1];
  uVar39 = SUB84(dVar5,0);
  uVar40 = (undefined4)((ulonglong)dVar5 >> 0x20);
  local_1a0._8_4_ = uVar39;
  local_1a0._0_8_ = dVar3;
  local_1a0._12_4_ = uVar40;
  local_2f0._s_0.Z =
       auVar93._0_8_ * dVar1 + (double)CONCAT44(uVar101,uVar100) + auVar16._0_8_ +
       (param_3->Translation).ZW.m128d_f64[0];
  local_2f0._8_4_ = uVar39;
  local_2f0._0_8_ = dVar3;
  local_2f0._12_4_ = uVar40;
  auVar94._8_4_ = uStack_210;
  auVar94._0_8_ = dVar6;
  auVar94._12_4_ = uStack_20c;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar41 = blendpd(auVar16,auVar43,2);
  auVar95._0_8_ = auVar94._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar6;
  auVar95._8_8_ =
       (double)CONCAT44(uVar101,uVar100) * auVar16._8_8_ -
       dVar4 * (double)CONCAT44(uStack_20c,uStack_210);
  auVar33._8_4_ = uStack_210;
  auVar33._0_8_ = dVar6;
  auVar33._12_4_ = uStack_20c;
  auVar42._4_4_ = uVar101;
  auVar42._0_4_ = uVar100;
  auVar42._8_8_ = 0;
  auVar16 = blendpd(auVar33,auVar42,2);
  local_188._8_4_ = uStack_210;
  local_188._0_8_ = dVar6;
  local_188._12_4_ = uStack_20c;
  auVar34._0_8_ = auVar16._0_8_ * dVar4 - auVar41._0_8_ * (double)CONCAT44(uVar101,uVar100);
  auVar34._8_8_ = auVar16._8_8_ * dVar1 - auVar41._8_8_ * 0.0;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  dVar3 = auVar95._8_8_ + auVar95._8_8_;
  dVar5 = auVar34._0_8_ + auVar34._0_8_;
  uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar41 = blendpd(auVar95,auVar34,2);
  auVar72._8_4_ = SUB84(dVar5,0);
  auVar72._0_8_ = dVar3;
  auVar72._12_4_ = uVar39;
  auVar56._8_4_ = SUB84(dVar5,0);
  auVar56._0_8_ = dVar3;
  auVar56._12_4_ = uVar39;
  auVar96._0_8_ = auVar41._0_8_ + auVar41._0_8_;
  auVar96._8_8_ = auVar41._8_8_ + auVar41._8_8_;
  auVar41 = blendpd(auVar56,auVar96,2);
  auVar73._0_8_ = auVar72._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar3;
  auVar73._8_8_ = auVar96._0_8_ * auVar16._8_8_ - dVar4 * dVar5;
  auVar16 = blendpd(auVar16,auVar43,2);
  auVar35._8_4_ = SUB84(auVar73._8_8_,0);
  auVar35._0_8_ = auVar73._0_8_;
  auVar35._12_4_ = (int)((ulonglong)auVar73._8_8_ >> 0x20);
  auVar57._0_8_ = auVar41._0_8_ * dVar4 - auVar16._0_8_ * auVar96._0_8_;
  auVar57._8_8_ = auVar41._8_8_ * dVar1 - auVar16._8_8_ * auVar96._8_8_;
  dVar3 = dVar3 * dVar1 + dVar6 + auVar35._8_8_ + (param_3->Translation).XY.m128d_f64[0];
  dVar5 = dVar5 * dVar1 + (double)CONCAT44(uStack_20c,uStack_210) + auVar57._0_8_ +
          (param_3->Translation).XY.m128d_f64[1];
  uVar39 = SUB84(dVar5,0);
  uVar40 = (undefined4)((ulonglong)dVar5 >> 0x20);
  local_170._8_4_ = uVar39;
  local_170._0_8_ = dVar3;
  local_170._12_4_ = uVar40;
  auVar16 = blendpd(auVar73,auVar57,2);
  local_2d8._8_4_ = uVar39;
  local_2d8._0_8_ = dVar3;
  local_2d8._12_4_ = uVar40;
  local_2d8._s_0.Z =
       auVar96._0_8_ * dVar1 + (double)CONCAT44(uVar101,uVar100) + auVar16._0_8_ +
       (param_3->Translation).ZW.m128d_f64[0];
  local_148 = CONCAT44(uVar101,uVar100);
  auVar97._4_4_ = uStack_274;
  auVar97._0_4_ = local_278;
  auVar97._8_4_ = uStack_210;
  auVar97._12_4_ = uStack_20c;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar41 = blendpd(auVar16,auVar43,2);
  auVar98._0_8_ =
       auVar97._8_8_ * auVar16._0_8_ - auVar16._8_8_ * (double)CONCAT44(uStack_274,local_278);
  auVar98._8_8_ =
       (double)CONCAT44(uVar101,uVar100) * auVar16._8_8_ -
       dVar4 * (double)CONCAT44(uStack_20c,uStack_210);
  auVar36._4_4_ = uStack_274;
  auVar36._0_4_ = local_278;
  auVar36._8_4_ = uStack_210;
  auVar36._12_4_ = uStack_20c;
  auVar7._4_4_ = uVar101;
  auVar7._0_4_ = uVar100;
  auVar7._8_8_ = 0;
  auVar16 = blendpd(auVar36,auVar7,2);
  auVar37._0_8_ = auVar16._0_8_ * dVar4 - auVar41._0_8_ * (double)CONCAT44(uVar101,uVar100);
  auVar37._8_8_ = auVar16._8_8_ * dVar1 - auVar41._8_8_ * 0.0;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar41 = blendpd(auVar98,auVar37,2);
  dVar3 = auVar98._8_8_ + auVar98._8_8_;
  dVar5 = auVar37._0_8_ + auVar37._0_8_;
  uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar99._0_8_ = auVar41._0_8_ + auVar41._0_8_;
  auVar99._8_8_ = auVar41._8_8_ + auVar41._8_8_;
  auVar74._8_4_ = SUB84(dVar5,0);
  auVar74._0_8_ = dVar3;
  auVar74._12_4_ = uVar39;
  auVar58._8_4_ = SUB84(dVar5,0);
  auVar58._0_8_ = dVar3;
  auVar58._12_4_ = uVar39;
  auVar41 = blendpd(auVar58,auVar99,2);
  auVar75._0_8_ = auVar74._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar3;
  auVar75._8_8_ = auVar99._0_8_ * auVar16._8_8_ - dVar4 * dVar5;
  auVar38._8_4_ = SUB84(auVar75._8_8_,0);
  auVar38._0_8_ = auVar75._0_8_;
  auVar38._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
  auVar43 = blendpd(auVar16,auVar43,2);
  auVar59._0_8_ = auVar41._0_8_ * dVar4 - auVar43._0_8_ * auVar99._0_8_;
  auVar59._8_8_ = auVar41._8_8_ * dVar1 - auVar43._8_8_ * auVar99._8_8_;
  dVar6 = (double)param_2;
  auVar43 = blendpd(auVar75,auVar59,2);
  dVar4 = dVar3 * dVar1 + (double)CONCAT44(uStack_274,local_278) + auVar38._8_8_ +
          (param_3->Translation).XY.m128d_f64[0];
  dVar3 = dVar5 * dVar1 + (double)CONCAT44(uStack_20c,uStack_210) + auVar59._0_8_ +
          (param_3->Translation).XY.m128d_f64[1];
  uVar39 = SUB84(dVar3,0);
  uVar40 = (undefined4)((ulonglong)dVar3 >> 0x20);
  local_378 = auVar99._0_8_ * dVar1 + (double)CONCAT44(uVar101,uVar100) + auVar43._0_8_ +
              (param_3->Translation).ZW.m128d_f64[0];
  local_388._8_4_ = uVar39;
  local_388._0_8_ = dVar4;
  local_388._12_4_ = uVar40;
  local_2c0._8_4_ = uVar39;
  local_2c0._0_8_ = dVar4;
  local_2c0._12_4_ = uVar40;
  local_390 = param_2;
  local_2c0._s_0.Z = local_378;
  local_298 = local_398;
  local_280 = local_368._s_0.Z;
  local_268 = local_398;
  local_250 = local_350._s_0.Z;
  local_238 = local_398;
  local_220 = local_338._s_0.Z;
  local_218 = local_278;
  uStack_214 = uStack_274;
  local_208 = local_398;
  local_1f0 = local_320._s_0.Z;
  local_1e8 = local_2a8;
  local_1c0 = local_308._s_0.Z;
  local_1b8 = local_278;
  uStack_1b4 = uStack_274;
  uStack_1b0 = uStack_270;
  uStack_1ac = uStack_26c;
  local_190 = local_2f0._s_0.Z;
  local_160 = local_2d8._s_0.Z;
  local_158 = local_278;
  uStack_154 = uStack_274;
  uStack_150 = uStack_210;
  uStack_14c = uStack_20c;
  FCameraPoseMath::ProjectWorldToScreen
            ((TOptional<UE::Math::TVector2<double>_> *)&local_3a8._s_0,param_1,dVar6,
             (TVector<double> *)&local_368._s_0,true);
  if (local_398._0_1_ == '\0') {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsSet()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                        ,0x1bd,
                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FFramingZone *)(*pcVar2)();
      return pFVar13;
    }
  }
  local_138 = local_3a8._s_0.X;
  dStack_130 = local_3a8._s_0.Y;
  FCameraPoseMath::ProjectWorldToScreen
            ((TOptional<UE::Math::TVector2<double>_> *)&local_3a8._s_0,param_1,dVar6,
             (TVector<double> *)&local_350._s_0,true);
  if (local_398._0_1_ == '\0') {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsSet()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                        ,0x1bd,
                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FFramingZone *)(*pcVar2)();
      return pFVar13;
    }
  }
  local_128[0] = local_3a8._s_0.X;
  local_128[1] = local_3a8._s_0.Y;
  FCameraPoseMath::ProjectWorldToScreen
            ((TOptional<UE::Math::TVector2<double>_> *)&local_3a8._s_0,param_1,dVar6,
             (TVector<double> *)&local_338._s_0,true);
  if (local_398._0_1_ == '\0') {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsSet()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                        ,0x1bd,
                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FFramingZone *)(*pcVar2)();
      return pFVar13;
    }
  }
  local_128[2] = local_3a8._s_0.X;
  local_128[3] = local_3a8._s_0.Y;
  FCameraPoseMath::ProjectWorldToScreen
            ((TOptional<UE::Math::TVector2<double>_> *)&local_3a8._s_0,param_1,dVar6,
             (TVector<double> *)&local_320._s_0,true);
  if (local_398._0_1_ == '\0') {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsSet()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                        ,0x1bd,
                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FFramingZone *)(*pcVar2)();
      return pFVar13;
    }
  }
  local_128[4] = local_3a8._s_0.X;
  dStack_100 = local_3a8._s_0.Y;
  FCameraPoseMath::ProjectWorldToScreen
            ((TOptional<UE::Math::TVector2<double>_> *)&local_3a8._s_0,param_1,dVar6,
             (TVector<double> *)&local_308._s_0,true);
  if (local_398._0_1_ == '\0') {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsSet()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                        ,0x1bd,
                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FFramingZone *)(*pcVar2)();
      return pFVar13;
    }
  }
  local_f8 = local_3a8._s_0.X;
  dStack_f0 = local_3a8._s_0.Y;
  FCameraPoseMath::ProjectWorldToScreen
            ((TOptional<UE::Math::TVector2<double>_> *)&local_3a8._s_0,param_1,dVar6,
             (TVector<double> *)&local_2f0._s_0,true);
  if (local_398._0_1_ == '\0') {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsSet()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                        ,0x1bd,
                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FFramingZone *)(*pcVar2)();
      return pFVar13;
    }
  }
  local_e8 = local_3a8._s_0.X;
  dStack_e0 = local_3a8._s_0.Y;
  FCameraPoseMath::ProjectWorldToScreen
            ((TOptional<UE::Math::TVector2<double>_> *)&local_3a8._s_0,param_1,dVar6,
             (TVector<double> *)&local_2d8._s_0,true);
  if (local_398._0_1_ == '\0') {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsSet()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                        ,0x1bd,
                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FFramingZone *)(*pcVar2)();
      return pFVar13;
    }
  }
  local_d8 = local_3a8._s_0.X;
  dStack_d0 = local_3a8._s_0.Y;
  FCameraPoseMath::ProjectWorldToScreen
            ((TOptional<UE::Math::TVector2<double>_> *)&local_3a8._s_0,param_1,dVar6,
             (TVector<double> *)&local_2c0._s_0,true);
  if (local_398._0_1_ == '\0') {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsSet()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                        ,0x1bd,
                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FFramingZone *)(*pcVar2)();
      return pFVar13;
    }
  }
  pdVar15 = local_128;
  iVar14 = 1;
  local_c8 = local_3a8._s_0.X;
  dStack_c0 = local_3a8._s_0.Y;
  __return_storage_ptr__->TopBound = dStack_130;
  __return_storage_ptr__->BottomBound = dStack_130;
  __return_storage_ptr__->LeftBound = local_138;
  __return_storage_ptr__->RightBound = local_138;
  do {
    if (iVar14 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar12) {
        pcVar2 = (code *)swi(3);
        pFVar13 = (FFramingZone *)(*pcVar2)();
        return pFVar13;
      }
    }
    iVar14 = iVar14 + 1;
    dVar4 = __return_storage_ptr__->LeftBound;
    if (*pdVar15 <= __return_storage_ptr__->LeftBound) {
      dVar4 = *pdVar15;
    }
    dVar1 = __return_storage_ptr__->TopBound;
    uVar39 = SUB84(dVar1,0);
    uVar40 = (undefined4)((ulonglong)dVar1 >> 0x20);
    __return_storage_ptr__->LeftBound = dVar4;
    dVar4 = pdVar15[1];
    if (dVar4 <= dVar1) {
      uVar39 = SUB84(dVar4,0);
      uVar40 = (undefined4)((ulonglong)dVar4 >> 0x20);
    }
    __return_storage_ptr__->TopBound = (double)CONCAT44(uVar40,uVar39);
    dVar4 = __return_storage_ptr__->RightBound;
    if (__return_storage_ptr__->RightBound <= *pdVar15) {
      dVar4 = *pdVar15;
    }
    dVar1 = __return_storage_ptr__->BottomBound;
    uVar39 = SUB84(dVar1,0);
    uVar40 = (undefined4)((ulonglong)dVar1 >> 0x20);
    __return_storage_ptr__->RightBound = dVar4;
    dVar4 = pdVar15[1];
    if (dVar1 <= dVar4) {
      uVar39 = SUB84(dVar4,0);
      uVar40 = (undefined4)((ulonglong)dVar4 >> 0x20);
    }
    pdVar15 = pdVar15 + 2;
    __return_storage_ptr__->BottomBound = (double)CONCAT44(uVar40,uVar39);
  } while (iVar14 < 8);
  return __return_storage_ptr__;
}

// DrawFramingState @ 14d614750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Cameras::FBaseFramingCameraNodeEvaluator::DrawFramingState
          (FState *param_1,FDesired *param_2,FCameraDebugRenderer *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  ForElementType<UE::Cameras::FFramingZone> FVar8;
  double *pdVar9;
  undefined1 local_res18 [16];
  FLinearColor_u_0 local_d8;
  TVector2<double>_u_0 local_c8;
  TVector2<double>_u_0 local_b8;
  TVector2<double>_u_0 local_a8;
  TVector2<double>_u_0 local_98;
  TVector2<double>_u_0 local_88 [5];
  
  fVar7 = __real_3b808081;
  fVar6 = __real_3f800000;
  if ((param_3->bIsExternalRendering == false) && (param_3->Canvas != (FCanvas *)0x0)) {
    dVar1 = (param_1->SoftZone).LeftBound;
    dVar2 = (param_1->SoftZone).TopBound;
    dVar4 = (param_3->CanvasSize).field0_0x0._s_0.X;
    dVar5 = (param_3->CanvasSize).field0_0x0._s_0.Y;
    local_b8._s_0.Y = ((param_1->SoftZone).BottomBound - dVar2) * dVar5;
    local_d8._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.R];
    local_a8._s_0.Y = dVar2 * dVar5;
    local_d8._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.G];
    local_d8._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.B];
    local_d8._s_0.A = (float)FColorList::Red.field0_0x0._3_1_ * __real_3b808081;
    local_a8._s_0.X = dVar1 * dVar4;
    local_b8._s_0.X = ((param_1->SoftZone).RightBound - dVar1) * dVar4;
    FCameraDebugRenderer::Draw2DBox
              (param_3,(TVector2<double> *)&local_a8._s_0,(TVector2<double> *)&local_b8._s_0,
               (FLinearColor *)&local_d8._s_0,__real_3f800000);
    dVar1 = (param_1->DeadZone).LeftBound;
    dVar2 = (param_1->DeadZone).TopBound;
    local_d8._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.R];
    local_b8._s_0.Y = dVar2 * dVar5;
    local_d8._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.G];
    local_a8._s_0.Y = ((param_1->DeadZone).BottomBound - dVar2) * dVar5;
    local_d8._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.B];
    local_d8._s_0.A = (float)FColorList::Green.field0_0x0._3_1_ * fVar7;
    local_b8._s_0.X = dVar1 * dVar4;
    local_a8._s_0.X = ((param_1->DeadZone).RightBound - dVar1) * dVar4;
    FCameraDebugRenderer::Draw2DBox
              (param_3,(TVector2<double> *)&local_b8._s_0,(TVector2<double> *)&local_a8._s_0,
               (FLinearColor *)&local_d8._s_0,fVar6);
    local_d8._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.R];
    dVar1 = (param_1->ScreenTargetBounds).LeftBound;
    dVar2 = (param_1->ScreenTargetBounds).TopBound;
    local_d8._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.G];
    local_b8._s_0.Y = dVar2 * dVar5;
    local_d8._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.B];
    local_a8._s_0.Y = ((param_1->ScreenTargetBounds).BottomBound - dVar2) * dVar5;
    local_d8._s_0.A = (float)FColorList::LightGrey.field0_0x0._3_1_ * fVar7;
    local_b8._s_0.X = dVar1 * dVar4;
    local_a8._s_0.X = ((param_1->ScreenTargetBounds).RightBound - dVar1) * dVar4;
    FCameraDebugRenderer::Draw2DBox
              (param_3,(TVector2<double> *)&local_b8._s_0,(TVector2<double> *)&local_a8._s_0,
               (FLinearColor *)&local_d8._s_0,fVar6);
    iVar3 = (param_1->DebugAllScreenTargetBounds).ArrayNum;
    if (1 < iVar3) {
      FVar8 = (param_1->DebugAllScreenTargetBounds).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<UE::Cameras::FFramingZone>)0x0) {
        FVar8 = (ForElementType<UE::Cameras::FFramingZone>)&param_1->DebugAllScreenTargetBounds;
      }
      pdVar9 = (double *)((longlong)FVar8 + 8);
      while( true ) {
        if ((param_1->DebugAllScreenTargetBounds).ArrayNum != iVar3) {
          `TCheckedPointerIterator<UE::Cameras::FFramingZone_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pdVar9 + -1 == (double *)((longlong)iVar3 * 0x20 + (longlong)FVar8)) break;
        dVar1 = pdVar9[-1];
        local_d8._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.R];
        local_b8._s_0.X = dVar1 * dVar4;
        local_d8._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.G];
        local_a8._s_0.X = (pdVar9[1] - dVar1) * dVar4;
        local_d8._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.B];
        local_d8._s_0.A = (float)FColorList::LightGrey.field0_0x0._3_1_ * fVar7;
        local_b8._s_0.Y = *pdVar9 * dVar5;
        local_a8._s_0.Y = (pdVar9[2] - *pdVar9) * dVar5;
        FCameraDebugRenderer::Draw2DBox
                  (param_3,(TVector2<double> *)&local_b8._s_0,(TVector2<double> *)&local_a8._s_0,
                   (FLinearColor *)&local_d8._s_0,fVar6);
        pdVar9 = pdVar9 + 4;
      }
    }
    if (GFramingShowEffectiveDeadZone != false) {
      dVar1 = (param_1->EffectiveDeadZone).LeftBound;
      dVar2 = (param_1->EffectiveDeadZone).TopBound;
      local_d8._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.R];
      local_b8._s_0.Y = dVar2 * dVar5;
      local_d8._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.G];
      local_a8._s_0.Y = ((param_1->EffectiveDeadZone).BottomBound - dVar2) * dVar5;
      local_d8._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.B];
      local_d8._s_0.A = (float)FColorList::LightGrey.field0_0x0._3_1_ * fVar7;
      local_b8._s_0.X = dVar1 * dVar4;
      local_a8._s_0.X = ((param_1->EffectiveDeadZone).RightBound - dVar1) * dVar4;
      FCameraDebugRenderer::Draw2DBox
                (param_3,(TVector2<double> *)&local_b8._s_0,(TVector2<double> *)&local_a8._s_0,
                 (FLinearColor *)&local_d8._s_0,fVar6);
    }
    if (0.0 < param_1->LowReframeDampingFactor) {
      local_d8._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.R];
      local_d8._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.G];
      local_d8._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.B];
      local_d8._s_0.A = (float)FColorList::LightGrey.field0_0x0._3_1_ * fVar7;
      FCameraDebugRenderer::Draw2DLine
                (param_3,&param_1->DebugDeadZoneEdgePoint,&param_1->DebugHardZoneEdgePoint,
                 (FLinearColor *)&local_d8._s_0,fVar6);
    }
    local_c8._s_0.X = dVar4 * (param_1->ScreenTarget).field0_0x0._s_0.X;
    local_c8._s_0.Y = dVar5 * (param_1->ScreenTarget).field0_0x0._s_0.Y;
    local_98._s_0.X = dVar4 * (param_2->ScreenTarget).field0_0x0._s_0.X;
    local_88[0]._0_8_ = dVar4 * (param_1->IdealTarget).field0_0x0._s_0.X;
    local_98._s_0.Y = dVar5 * (param_2->ScreenTarget).field0_0x0._s_0.Y;
    local_88[0]._8_8_ = dVar5 * (param_1->IdealTarget).field0_0x0._s_0.Y;
    local_d8._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::Salmon.field0_0x0._s_0.R];
    local_d8._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::Salmon.field0_0x0._s_0.G];
    local_d8._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::Salmon.field0_0x0._s_0.B];
    local_d8._s_0.A = (float)FColorList::Salmon.field0_0x0._3_1_ * fVar7;
    FCameraDebugRenderer::Draw2DLine
              (param_3,(TVector2<double> *)&local_c8._s_0,(TVector2<double> *)&local_98._s_0,
               (FLinearColor *)&local_d8._s_0,fVar6);
    fVar6 = __real_40000000;
    local_d8._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::Orange.field0_0x0._s_0.R];
    local_d8._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::Orange.field0_0x0._s_0.G];
    local_d8._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::Orange.field0_0x0._s_0.B];
    local_d8._s_0.A = (float)FColorList::Orange.field0_0x0._3_1_ * fVar7;
    FCameraDebugRenderer::Draw2DCircle
              (param_3,(TVector2<double> *)&local_c8._s_0,__real_40000000,
               (FLinearColor *)&local_d8._s_0,__real_40000000,0);
    FCameraDebugRenderer::Draw2DCircle
              (param_3,(TVector2<double> *)&local_88[0]._s_0,fVar6,&FLinearColor::Green,fVar6,0);
  }
  return;
}

// EndFramingUpdate @ 14d615290

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::EndFramingUpdate
          (FBaseFramingCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraPoseFlags *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool *pbVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((this->Readers).SetTargetDistance.DefaultValuePtr == (bool *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Readers).SetTargetDistance.VariableID.Value != 0xffffffff) {
    pbVar4 = FCameraVariableTable::FindValue<bool>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->Readers).SetTargetDistance.VariableID.Value);
    if (pbVar4 != (bool *)0x0) goto LAB_14d6152eb;
  }
  pbVar4 = (this->Readers).SetTargetDistance.DefaultValuePtr;
LAB_14d6152eb:
  if ((*pbVar4 != false) &&
     (dVar6 = (param_2->CameraPose).Location.field0_0x0._s_0.Z -
              (this->State).WorldTarget.field0_0x0._s_0.Z,
     dVar7 = (param_2->CameraPose).Location.field0_0x0._s_0.Y -
             (this->State).WorldTarget.field0_0x0._s_0.Y,
     dVar5 = (param_2->CameraPose).Location.field0_0x0._s_0.X -
             (this->State).WorldTarget.field0_0x0._s_0.X,
     dVar5 = SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6),
     dVar5 != (param_2->CameraPose).TargetDistance)) {
    pFVar1->TargetDistance = true;
    (param_2->CameraPose).TargetDistance = dVar5;
  }
  return;
}

// GetHardReframeCoords @ 14d61a830

TVector2<double> * __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::GetHardReframeCoords
          (FBaseFramingCameraNodeEvaluator *this,TVector2<double> *__return_storage_ptr__)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  TVector2<double>_u_0 local_18;
  
  pTVar4 = &(this->State).ScreenTarget;
  local_18._s_0.X = (this->State).IdealTarget.field0_0x0._s_0.X - (pTVar4->field0_0x0)._s_0.X;
  local_18._s_0.Y =
       (this->State).IdealTarget.field0_0x0._s_0.Y - (this->State).ScreenTarget.field0_0x0._s_0.Y;
  if ((local_18._s_0.X == 0.0) && (local_18._s_0.Y == 0.0)) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1026344703815057987>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Framing\\BaseFramingCameraNode.cpp"
                       ,0x243,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector2<double> *)(*pcVar1)();
      return pTVar4;
    }
    dVar2 = (this->State).ScreenTarget.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar4->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    return __return_storage_ptr__;
  }
  FFramingZone::ComputeClosestIntersection
            (&(this->State).SoftZone,__return_storage_ptr__,pTVar4,
             (TVector2<double> *)&local_18._s_0,false);
  return __return_storage_ptr__;
}

// GetInitialDesiredWorldTarget @ 14d61a8f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TOptional<UE::Math::TVector<double>_> * __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::GetInitialDesiredWorldTarget
          (FBaseFramingCameraNodeEvaluator *this,
          TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__,
          FCameraNodeEvaluationParams *param_1,FCameraNodeEvaluationResult *param_2)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  bool *pbVar9;
  ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> FVar10;
  float *pfVar11;
  double dVar12;
  undefined1 local_res18 [16];
  
  if (param_1->bIsFirstFrame != false) {
    pbVar9 = TCameraParameterReader<bool>::Get
                       (&(this->Readers).InitializeWithIdealFraming,&param_2->VariableTable);
    if (*pbVar9 != false) {
      iVar4 = (this->WorldTargets).TargetInfos.ArrayNum;
      if (iVar4 != 0) {
        FVar10 = (this->WorldTargets).TargetInfos.AllocatorInstance.SecondaryData;
        if (FVar10 == (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)0x0) {
          FVar10 = (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)&this->WorldTargets;
        }
        dVar5 = 0.0;
        dVar6 = 0.0;
        dVar7 = 0.0;
        pfVar11 = (float *)((longlong)FVar10 + 0x98);
        while( true ) {
          if ((this->WorldTargets).TargetInfos.ArrayNum != iVar4) {
            `TCheckedPointerIterator<UE::Cameras::FCameraActorComputedTargetInfo,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_res18);
          }
          if (pfVar11 + -0x26 == (float *)((longlong)iVar4 * 0xa0 + (longlong)FVar10)) break;
          pdVar1 = (double *)(pfVar11 + -0x1e);
          pdVar8 = (double *)(pfVar11 + -0x1c);
          fVar3 = *pfVar11;
          pdVar2 = (double *)(pfVar11 + -0x1a);
          pfVar11 = pfVar11 + 0x28;
          dVar12 = (double)fVar3;
          dVar5 = dVar5 + dVar12 * *pdVar1;
          dVar6 = dVar6 + dVar12 * *pdVar8;
          dVar7 = dVar7 + dVar12 * *pdVar2;
        }
        (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = dVar5;
        (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = dVar6;
        (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = dVar7;
        __return_storage_ptr__->bIsSet = true;
        return __return_storage_ptr__;
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// UpdateFramingState @ 14d63b430

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::UpdateFramingState
          (FBaseFramingCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2,TTransform<double> *param_3)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  bool bVar3;
  ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> _Dst;
  int iVar4;
  longlong lVar5;
  TArray<UE::Cameras::FCameraActorComputedTargetInfo,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_38.Object = (param_1->EvaluationContext).Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = AcquireTargetInfo(this,&local_38,param_2,&local_48);
  _Src.Data = local_48.AllocatorInstance.Data;
  iVar2 = local_48.ArrayNum;
  lVar5 = (longlong)local_48.ArrayNum;
  piVar1 = &(this->WorldTargets).TargetInfos.ArrayMax;
  iVar4 = *piVar1;
  (this->WorldTargets).TargetInfos.ArrayNum = local_48.ArrayNum;
  if ((local_48.ArrayNum == 0) && (iVar4 == 0)) {
    *piVar1 = 4;
    iVar4 = 0;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>_>
              (0xa0,0x10,local_48.ArrayNum,iVar4,
               (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> *)&this->WorldTargets,
               local_48.ArrayNum,piVar1);
    _Dst = (this->WorldTargets).TargetInfos.AllocatorInstance.SecondaryData;
    if (iVar2 != 0) {
      if (_Dst == (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)0x0) {
        _Dst = (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)&this->WorldTargets;
      }
      memcpy((void *)_Dst,_Src.Data,lVar5 * 0xa0);
    }
    iVar4 = local_48.ArrayNum;
  }
  if ((bVar3) && (0 < iVar4)) {
    ComputeCurrentState(this,param_1,param_2,param_3);
    ComputeDesiredState(this,param_1,param_2);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// FBaseFramingCameraNodeEvaluator @ 14d654fd0

FBaseFramingCameraNodeEvaluator * __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::FBaseFramingCameraNodeEvaluator
          (FBaseFramingCameraNodeEvaluator *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBaseFramingCameraNodeEvaluator_Cameras_UE__6B_;
  (this->Readers).TargetInfos.Readers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Readers).TargetInfos.Readers.ArrayNum = 0;
  (this->Readers).TargetInfos.Readers.ArrayMax = 0;
  (this->Readers).IdealFramingLocation.DefaultValuePtr = (TVector2<double> *)0x0;
  (this->Readers).InitializeWithIdealFraming.DefaultValuePtr = (bool *)0x0;
  (this->Readers).SetTargetDistance.DefaultValuePtr = (bool *)0x0;
  (this->Readers).ReframeDampingFactor.DefaultValuePtr = (float *)0x0;
  (this->Readers).LowReframeDampingFactor.DefaultValuePtr = (float *)0x0;
  (this->Readers).ReengageTime.DefaultValuePtr = (float *)0x0;
  (this->Readers).DisengageTime.DefaultValuePtr = (float *)0x0;
  (this->Readers).TargetMovementAnticipationTime.DefaultValuePtr = (float *)0x0;
  (this->Readers).DeadZone.DefaultValuePtr = (FCameraFramingZone *)0x0;
  (this->Readers).SoftZone.DefaultValuePtr = (FCameraFramingZone *)0x0;
  *(undefined4 *)&this->_padding_ = 7;
  (this->Readers).TargetInfos.DataID.Value = 0xffffffff;
  (this->Readers).IdealFramingLocation.VariableID.Value = 0xffffffff;
  (this->Readers).InitializeWithIdealFraming.VariableID.Value = 0xffffffff;
  (this->Readers).SetTargetDistance.VariableID.Value = 0xffffffff;
  (this->Readers).ReframeDampingFactor.VariableID.Value = 0xffffffff;
  (this->Readers).LowReframeDampingFactor.VariableID.Value = 0xffffffff;
  (this->Readers).ReengageTime.VariableID.Value = 0xffffffff;
  (this->Readers).DisengageTime.VariableID.Value = 0xffffffff;
  (this->Readers).TargetMovementAnticipationTime.VariableID.Value = 0xffffffff;
  (this->Readers).DeadZone.VariableID.Value = 0xffffffff;
  (this->Readers).SoftZone.VariableID.Value = 0xffffffff;
  FFramingZone::FFramingZone(&(this->State).DeadZone);
  FFramingZone::FFramingZone(&(this->State).SoftZone);
  FFramingZone::FFramingZone(&(this->State).ScreenTargetBounds);
  FFramingZone::FFramingZone(&(this->State).EffectiveDeadZone);
  (this->State).bIsReframingTarget = false;
  FCriticalDamper::FCriticalDamper(&(this->State).ReframeDamper);
  (this->State).DebugAllScreenTargetBounds.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FFramingZone>)0x0;
  (this->State).DebugAllScreenTargetBounds.ArrayNum = 0;
  (this->State).DebugAllScreenTargetBounds.ArrayMax = 4;
  (this->Desired).bHasCorrection = false;
  (this->WorldTargets).TargetInfos.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)0x0;
  (this->WorldTargets).TargetInfos.ArrayNum = 0;
  (this->WorldTargets).TargetInfos.ArrayMax = 4;
  (this->ScreenTargetHistory).History.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<UE::Math::TVector2<double>,float>_>)0x0;
  (this->ScreenTargetHistory).History.ArrayNum = 0;
  (this->ScreenTargetHistory).History.ArrayMax = 10;
  return this;
}

