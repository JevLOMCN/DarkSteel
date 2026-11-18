// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 12

// GetFinalSafePosition @ 14d61a310

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TOptional<UE::Math::TVector<double>_> * __thiscall
UE::Cameras::FCollisionPushCameraNodeEvaluator::GetFinalSafePosition
          (FCollisionPushCameraNodeEvaluator *this,
          TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__,
          FCameraNodeEvaluationParams *param_1,FCameraNodeEvaluationResult *param_2)

{
  char cVar1;
  ECollisionSafePositionOffsetSpace EVar2;
  FCameraVariableID FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TOptional<UE::Math::TVector<double>_> *pTVar7;
  UClass *pUVar8;
  TVector<double> *pTVar9;
  UCollisionPushCameraNode *pUVar10;
  atomic<unsigned_char> *paVar11;
  ECameraNodeOriginPosition EVar12;
  ECameraNodeSpace EVar13;
  longlong lVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  FCameraNodeSpaceParams local_88;
  FCameraNodeSpaceParams local_78;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TVector<double>_u_0 local_38;
  
  if (param_1->Evaluator == (FCameraSystemEvaluator *)0x0) {
    iVar15 = 0xad;
    pcVar18 = "Params.Evaluator";
    paVar11 = &bGEnsureHasExecuted<_6694508044727877459>;
  }
  else {
    if ((param_1->EvaluationContext).Object != (FCameraEvaluationContext *)0x0) {
      if (this->_padding_ == 0) {
LAB_14d61a3e6:
        lVar14 = 0;
      }
      else {
        pUVar8 = UCollisionPushCameraNode::StaticClass();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
        if (!bVar5) goto LAB_14d61a3e6;
        lVar14 = this->_padding_;
      }
      this->bDebugGotSafePosition = false;
      FVar3.Value = (this->CustomSafePositionReader).VariableID.Value;
      if ((FVar3.Value == 0xffffffff) ||
         (pTVar9 = FCameraVariableTable::FindValue<UE::Math::TVector<double>_>
                             (&param_2->VariableTable,FVar3), pTVar9 == (TVector<double> *)0x0)) {
        cVar1 = *(char *)(lVar14 + 0x38);
        if (cVar1 == '\0') {
          EVar12 = ActiveContext;
        }
        else if (cVar1 == '\x01') {
          EVar12 = OwningContext;
        }
        else {
          if (cVar1 != '\x02') {
            if (cVar1 == '\x03') {
              EVar12 = Pawn;
              goto LAB_14d61a47c;
            }
            bVar5 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6694508044727877365>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Collision\\CollisionPushCameraNode.cpp"
                               ,0x10b,"false");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pTVar7 = (TOptional<UE::Math::TVector<double>_> *)(*pcVar4)();
              return pTVar7;
            }
          }
          EVar12 = Pivot;
        }
LAB_14d61a47c:
        local_88.EvaluationParams = param_1;
        local_88.EvaluationResult = param_2;
        bVar5 = FCameraNodeSpaceMath::GetCameraNodeOriginPosition
                          (&local_88,EVar12,(TVector<double> *)&local_50._s_0);
        this->bDebugGotSafePosition = bVar5;
        if (!bVar5) goto LAB_14d61a370;
        uVar16 = SUB84(local_50._s_0.Z,0);
        uVar17 = (undefined4)((ulonglong)local_50._16_8_ >> 0x20);
      }
      else {
        local_50._0_4_ = *(undefined4 *)&pTVar9->field0_0x0;
        local_50._4_4_ = *(undefined4 *)((longlong)&pTVar9->field0_0x0 + 4);
        local_50._8_4_ = *(undefined4 *)((longlong)&pTVar9->field0_0x0 + 8);
        local_50._12_4_ = *(undefined4 *)((longlong)&pTVar9->field0_0x0 + 0xc);
        local_50._s_0.Z = *(double *)((longlong)&pTVar9->field0_0x0 + 0x10);
        uVar16 = SUB84(local_50._s_0.Z,0);
        uVar17 = (undefined4)((ulonglong)local_50._s_0.Z >> 0x20);
        this->bDebugGotSafePosition = false;
      }
      bVar5 = true;
      local_68._s_0.Z = (double)CONCAT44(uVar17,uVar16);
      local_68._0_4_ = local_50._0_4_;
      local_68._4_4_ = local_50._4_4_;
      local_68._8_4_ = local_50._8_4_;
      local_68._12_4_ = local_50._12_4_;
      if (((this->SafePositionOffsetReader).DefaultValuePtr == (TVector<double> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("DefaultValuePtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                             ,0x31,L"Parameter reader has no value pointer!"), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TOptional<UE::Math::TVector<double>_> *)(*pcVar4)();
        return pTVar7;
      }
      if (((this->SafePositionOffsetReader).VariableID.Value == 0xffffffff) ||
         (pTVar9 = FCameraVariableTable::FindValue<UE::Math::TVector<double>_>
                             (&param_2->VariableTable,
                              (FCameraVariableID)(this->SafePositionOffsetReader).VariableID.Value),
         pTVar9 == (TVector<double> *)0x0)) {
        pTVar9 = (this->SafePositionOffsetReader).DefaultValuePtr;
      }
      local_38._s_0.X = (pTVar9->field0_0x0)._s_0.X;
      local_38._s_0.Y = (pTVar9->field0_0x0)._s_0.Y;
      local_38._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
      if (((local_38._s_0.X == 0.0) && (local_38._s_0.Y == 0.0)) && (local_38._s_0.Z == 0.0))
      goto LAB_14d61a5d9;
      pUVar10 = FCameraNodeEvaluator::GetCameraNodeAs<UCollisionPushCameraNode>
                          ((FCameraNodeEvaluator *)this);
      EVar2 = pUVar10->SafePositionOffsetSpace;
      if (EVar2 == ActiveContext) {
        EVar13 = ActiveContext;
      }
      else if (EVar2 == OwningContext) {
        EVar13 = OwningContext;
      }
      else if (EVar2 == Pivot) {
LAB_14d61a593:
        EVar13 = Pivot;
      }
      else if (EVar2 == CameraPose) {
        EVar13 = CameraPose;
      }
      else {
        if (EVar2 != Pawn) {
          bVar5 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6694508044727877416>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Collision\\CollisionPushCameraNode.cpp"
                             ,0xd8,"false");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TOptional<UE::Math::TVector<double>_> *)(*pcVar4)();
            return pTVar7;
          }
          goto LAB_14d61a593;
        }
        EVar13 = Pawn;
      }
      local_78.EvaluationParams = param_1;
      local_78.EvaluationResult = param_2;
      bVar5 = FCameraNodeSpaceMath::OffsetCameraNodeSpacePosition
                        (&local_78,(TVector<double> *)&local_68._s_0,
                         (TVector<double> *)&local_38._s_0,EVar13,(TVector<double> *)&local_68._s_0)
      ;
LAB_14d61a5d9:
      this->bDebugGotSafePositionOffset = bVar5;
      (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X =
           (double)CONCAT44(local_68._4_4_,local_68._0_4_);
      (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y =
           (double)CONCAT44(local_68._12_4_,local_68._8_4_);
      __return_storage_ptr__->bIsSet = true;
      (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = local_68._s_0.Z;
      return __return_storage_ptr__;
    }
    iVar15 = 0xb2;
    pcVar18 = "Params.EvaluationContext";
    paVar11 = &bGEnsureHasExecuted<_6694508044727877454>;
  }
  bVar5 = Assert::Private::ExecCheckImplInternal
                    (paVar11,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Collision\\CollisionPushCameraNode.cpp"
                     ,iVar15,pcVar18);
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TOptional<UE::Math::TVector<double>_> *)(*pcVar4)();
    return pTVar7;
  }
LAB_14d61a370:
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetSafePosition @ 14d61db60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TOptional<UE::Math::TVector<double>_> * __thiscall
UE::Cameras::FCollisionPushCameraNodeEvaluator::GetSafePosition
          (FCollisionPushCameraNodeEvaluator *this,
          TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__,
          FCameraNodeEvaluationParams *param_1,FCameraNodeEvaluationResult *param_2)

{
  double dVar1;
  char cVar2;
  FCameraVariableID FVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  UClass *pUVar7;
  TVector<double> *pTVar8;
  TOptional<UE::Math::TVector<double>_> *pTVar9;
  ECameraNodeOriginPosition EVar10;
  longlong lVar11;
  FCameraNodeSpaceParams local_38;
  TVector<double>_u_0 local_28;
  
  if (this->_padding_ == 0) {
LAB_14d61dba8:
    lVar11 = 0;
  }
  else {
    pUVar7 = UCollisionPushCameraNode::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar7);
    if (!bVar6) goto LAB_14d61dba8;
    lVar11 = this->_padding_;
  }
  this->bDebugGotSafePosition = false;
  FVar3.Value = (this->CustomSafePositionReader).VariableID.Value;
  if ((FVar3.Value != 0xffffffff) &&
     (pTVar8 = FCameraVariableTable::FindValue<UE::Math::TVector<double>_>
                         (&param_2->VariableTable,FVar3), pTVar8 != (TVector<double> *)0x0)) {
    dVar5 = (pTVar8->field0_0x0)._s_0.Y;
    dVar1 = (pTVar8->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = dVar5;
    this->bDebugGotSafePosition = false;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = dVar1;
    goto LAB_14d61dc72;
  }
  cVar2 = *(char *)(lVar11 + 0x38);
  if (cVar2 == '\0') {
    EVar10 = ActiveContext;
  }
  else if (cVar2 == '\x01') {
    EVar10 = OwningContext;
  }
  else {
    if (cVar2 != '\x02') {
      if (cVar2 == '\x03') {
        EVar10 = Pawn;
        goto LAB_14d61dc38;
      }
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6694508044727877365>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Collision\\CollisionPushCameraNode.cpp"
                         ,0x10b,"false");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TOptional<UE::Math::TVector<double>_> *)(*pcVar4)();
        return pTVar9;
      }
    }
    EVar10 = Pivot;
  }
LAB_14d61dc38:
  local_38.EvaluationParams = param_1;
  local_38.EvaluationResult = param_2;
  bVar6 = FCameraNodeSpaceMath::GetCameraNodeOriginPosition
                    (&local_38,EVar10,(TVector<double> *)&local_28._s_0);
  this->bDebugGotSafePosition = bVar6;
  __return_storage_ptr__->bIsSet = false;
  if (!bVar6) {
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = local_28._s_0.X;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = local_28._s_0.Y;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = local_28._s_0.Z;
LAB_14d61dc72:
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetTypeID @ 14d61e560

FCameraObjectTypeID * __thiscall
UE::Cameras::FCollisionPushCameraNodeEvaluator::GetTypeID(FCollisionPushCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// HandleAsyncCollisionTraceResult @ 14d61e7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCollisionPushCameraNodeEvaluator::HandleAsyncCollisionTraceResult
          (FCollisionPushCameraNodeEvaluator *this,UWorld *param_1,TVector<double> *param_2,
          FCameraNodeEvaluationParams *param_3,FCameraNodeEvaluationResult *param_4)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  undefined1 auStackY_1e8 [32];
  TArrayView<FHitResult_const_,int> local_1a8;
  FTraceDatum local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if (this->_padding_ != 0) {
    pUVar4 = UCollisionPushCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar3) {
      lVar5 = this->_padding_;
      goto LAB_14d61e7fd;
    }
  }
  lVar5 = 0;
LAB_14d61e7fd:
  if ((*(char *)(lVar5 + 0xb8) != '\0') && ((this->CollisionTraceHandle).field0_0x0._Handle != 0)) {
    FTraceDatum::FTraceDatum(&local_198);
    bVar3 = UWorld::QueryTraceData(param_1,&this->CollisionTraceHandle,&local_198);
    FVar2.Data = local_198.OutHits.AllocatorInstance.Data;
    if (bVar3) {
      if (local_198.OutHits.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_1a8.DataPtr = (FHitResult *)FVar2.Data;
      HandleCollisionTraceResult(this,param_1,&local_1a8,param_2,param_3,param_4);
    }
    if (local_198.OutHits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.OutHits.AllocatorInstance.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_198.Delegate);
    if ((void *)local_198._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_198._padding_);
    }
    if ((void *)local_198._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_198._padding_);
    }
  }
  return;
}

// HandleCollisionTraceResult @ 14d61e910

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCollisionPushCameraNodeEvaluator::HandleCollisionTraceResult
          (FCollisionPushCameraNodeEvaluator *this,UWorld *param_1,
          TArrayView<FHitResult_const_,int> *param_2,TVector<double> *param_3,
          FCameraNodeEvaluationParams *param_4,FCameraNodeEvaluationResult *param_5)

{
  FString *this_00;
  double dVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  bool bVar9;
  UObject *pUVar10;
  FHitResult *pFVar11;
  FHitResult *pFVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 unaff_XMM6 [16];
  float fVar17;
  FName local_res8;
  FString local_68 [3];
  
  this_00 = &this->DebugHitObjectName;
  fVar17 = 0.0;
  ::FString::Empty(this_00);
  pFVar12 = param_2->DataPtr;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  iVar3 = param_2->ArrayNum;
  (this->DebugSafePosition).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->DebugSafePosition).field0_0x0._s_0.Y = dVar1;
  pFVar11 = pFVar12 + iVar3;
  (this->DebugSafePosition).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  do {
    bVar9 = false;
    if (pFVar12 == pFVar11) {
LAB_14d61eb06:
      UpdatePushFactor(this,bVar9,fVar17,param_3,param_4,param_5);
      return;
    }
    if (pFVar12->bBlockingHit != 0) {
      dVar1 = *(double *)&(pFVar12->TraceEnd).field_0x8;
      dVar13 = *(double *)&pFVar12->TraceEnd - *(double *)&pFVar12->TraceStart;
      dVar2 = *(double *)&(pFVar12->TraceEnd).field_0x10;
      dVar8 = dVar1 - *(double *)&(pFVar12->TraceStart).field_0x8;
      dVar6 = dVar2 - *(double *)&(pFVar12->TraceStart).field_0x10;
      dVar14 = *(double *)&pFVar12->Location - *(double *)&pFVar12->TraceEnd;
      auVar15._0_8_ = dVar14 * dVar14;
      auVar15._8_8_ = 0;
      dVar2 = *(double *)&(pFVar12->Location).field_0x10 - dVar2;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar8 * dVar8 + dVar13 * dVar13 + dVar6 * dVar6;
      unaff_XMM6 = sqrtpd(unaff_XMM6,auVar16);
      dVar1 = *(double *)&(pFVar12->Location).field_0x8 - dVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar1 * dVar1 + auVar15._0_8_ + dVar2 * dVar2;
      auVar16 = sqrtpd(auVar15,auVar7);
      if (0.0 < unaff_XMM6._0_8_) {
        bVar9 = true;
        fVar17 = (float)(auVar16._0_8_ / unaff_XMM6._0_8_);
        pUVar10 = FWeakObjectPtr::Get(&(pFVar12->PhysicsObjectOwner).WeakPtr);
        if (pUVar10 == (UObject *)0x0) {
          ::FString::operator=(this_00,L"<no physics object owner>");
        }
        else {
          local_res8.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
          local_res8.Number = *(uint *)&pUVar10->field_0x1c;
          ::FName::ToString(&local_res8,local_68);
          if (this_00 != local_68) {
            pFVar4 = (this_00->Data).AllocatorInstance.Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            (this_00->Data).AllocatorInstance.Data = local_68[0].Data.AllocatorInstance.Data;
            (this->DebugHitObjectName).Data.ArrayNum = local_68[0].Data.ArrayNum;
            (this->DebugHitObjectName).Data.ArrayMax = local_68[0].Data.ArrayMax;
            local_68[0].Data.ArrayNum = 0;
            local_68[0].Data.ArrayMax = 0;
            local_68[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14d61eb06;
      }
      bVar9 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6694508044727877250>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Collision\\CollisionPushCameraNode.cpp"
                         ,0x17e,"TraceLength > 0");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// HandleDisabledCollision @ 14d61eb40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCollisionPushCameraNodeEvaluator::HandleDisabledCollision
          (FCollisionPushCameraNodeEvaluator *this,TVector<double> *param_1,
          FCameraNodeEvaluationParams *param_2,FCameraNodeEvaluationResult *param_3)

{
  double dVar1;
  
  ::FString::Empty(&this->DebugHitObjectName);
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->DebugSafePosition).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->DebugSafePosition).field0_0x0._s_0.Y = dVar1;
  (this->DebugSafePosition).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UpdatePushFactor(this,false,0.0,param_1,param_2,param_3);
  return;
}

// IsKindOf @ 14d621140

bool __thiscall
UE::Cameras::FCollisionPushCameraNodeEvaluator::IsKindOf
          (FCollisionPushCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCollisionPushCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuildDebugBlocks @ 14d6245b0

void __thiscall
UE::Cameras::FCollisionPushCameraNodeEvaluator::OnBuildDebugBlocks
          (FCollisionPushCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  int iVar1;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FCameraDebugBlock *pFVar4;
  UClass *pUVar5;
  longlong lVar6;
  int iVar7;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar4 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x68,8);
  pFVar4->_padding_ = 0;
  (pFVar4->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar4->Attachments).ArrayNum = 0;
  (pFVar4->Attachments).ArrayMax = 0;
  (pFVar4->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar4->Children).ArrayNum = 0;
  (pFVar4->Children).ArrayMax = 0;
  pFVar4[1]._padding_ = 0;
  pFVar4[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4[1].Attachments.ArrayNum = 0;
  pFVar4[1].Attachments.ArrayMax = 0;
  pFVar4[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4[1].Children.ArrayNum = 0;
  pFVar4[1].Children.ArrayMax = 0;
  pFVar4[2]._padding_ = 0;
  pFVar4[2].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4[2].Attachments.ArrayNum = 0;
  pFVar4[2].Attachments.ArrayMax = 0;
  pFVar4->_padding_ = (longlong)&___7FCollisionPushCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar4);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar4);
  lVar6 = 0;
  *(bool *)&pFVar4[1]._padding_ = this->bDebugCollisionEnabled;
  if (this->_padding_ != 0) {
    pUVar5 = UCollisionPushCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar5);
    if (bVar3) {
      lVar6 = this->_padding_;
    }
  }
  *(bool *)((longlong)&pFVar4[1]._padding_ + 1) = this->bDebugGotSafePosition;
  *(bool *)((longlong)&pFVar4[1]._padding_ + 2) = this->bDebugGotSafePositionOffset;
  *(undefined1 *)((longlong)&pFVar4[1]._padding_ + 3) = *(undefined1 *)(lVar6 + 0x38);
  *(undefined1 *)((longlong)&pFVar4[1]._padding_ + 4) = *(undefined1 *)(lVar6 + 0x78);
  *(bool *)((longlong)&pFVar4[1].Attachments.ArrayNum + 1) = this->bDebugFoundHit;
  iVar1 = (this->DebugHitObjectName).Data.ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange
            ((FString *)&pFVar4[1].Children,
             (wchar_t *)(this->DebugHitObjectName).Data.AllocatorInstance.Data,iVar7);
  pFVar2 = (FScriptContainerElement *)(this->DebugSafePosition).field0_0x0._s_0.Y;
  pFVar4[2]._padding_ = (longlong)(this->DebugSafePosition).field0_0x0._s_0.X;
  pFVar4[2].Attachments.AllocatorInstance.Data = pFVar2;
  *(double *)&pFVar4[2].Attachments.ArrayNum = (this->DebugSafePosition).field0_0x0._s_0.Z;
  *(bool *)&pFVar4[1].Attachments.ArrayNum = this->LastDirection == Pulling;
  *(float *)&pFVar4[1].Attachments.AllocatorInstance.Data = this->LastPushFactor;
  *(float *)((longlong)&pFVar4[1].Attachments.AllocatorInstance.Data + 4) =
       this->LastDampedPushFactor;
  return;
}

// OnInitialize @ 14d628030

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCollisionPushCameraNodeEvaluator::OnInitialize
          (FCollisionPushCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  TCameraValueInterpolator<double> *pTVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FCameraVariableID FVar8;
  UClass *pUVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
  *pTVar15;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 *local_58;
  undefined8 *local_50 [3];
  undefined8 local_38;
  uint *puVar10;
  
  puVar14 = (undefined8 *)0x0;
  local_res8 = 0;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  puVar13 = puVar14;
  if (this->_padding_ != 0) {
    pUVar9 = UCollisionPushCameraNode::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar9);
    if (bVar7) {
      puVar13 = (undefined8 *)this->_padding_;
    }
  }
  puVar10 = (uint *)(puVar13 + 0x10);
  if (puVar13[0x11] == 0) {
    (this->EnableCollisionReader).DefaultValue = true;
  }
  else {
    (this->EnableCollisionReader).DefaultValue = *(bool *)(puVar13[0x11] + 0x40);
    FVar8 = UCameraVariableAsset::GetVariableID((UCameraVariableAsset *)puVar13[0x11]);
    puVar10 = (uint *)CONCAT44(extraout_var,FVar8.Value);
  }
  (this->EnableCollisionReader).VariableID.Value = *puVar10;
  puVar10 = (uint *)(puVar13 + 8);
  local_38 = 0;
  lVar1 = puVar13[9];
  if (lVar1 == 0) {
    (this->CustomSafePositionReader).DefaultValue.field0_0x0._s_0.X = 0.0;
    (this->CustomSafePositionReader).DefaultValue.field0_0x0._s_0.Y = 0.0;
    (this->CustomSafePositionReader).DefaultValue.field0_0x0._s_0.Z = 0.0;
  }
  else {
    dVar4 = *(double *)(lVar1 + 0x48);
    (this->CustomSafePositionReader).DefaultValue.field0_0x0._s_0.X = *(double *)(lVar1 + 0x40);
    (this->CustomSafePositionReader).DefaultValue.field0_0x0._s_0.Y = dVar4;
    (this->CustomSafePositionReader).DefaultValue.field0_0x0._s_0.Z = *(double *)(lVar1 + 0x50);
    FVar8 = UCameraVariableAsset::GetVariableID((UCameraVariableAsset *)puVar13[9]);
    puVar10 = (uint *)CONCAT44(extraout_var_00,FVar8.Value);
  }
  (this->CustomSafePositionReader).VariableID.Value = *puVar10;
  (this->CollisionSphereRadiusReader).DefaultValuePtr = (float *)(puVar13 + 0x12);
  (this->CollisionSphereRadiusReader).VariableID.Value = *(uint *)((longlong)puVar13 + 0x94);
  (this->SafePositionOffsetReader).DefaultValuePtr = (TVector<double> *)(puVar13 + 10);
  (this->SafePositionOffsetReader).VariableID.Value = *(uint *)(puVar13 + 0xd);
  plVar2 = (longlong *)puVar13[0x15];
  if (plVar2 == (longlong *)0x0) {
    puVar12 = ::operator_new(0x28);
    local_58 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      *(undefined1 *)(puVar12 + 4) = 0;
      *puVar12 = &___7__TPopValueInterpolator_N_Cameras_UE__6B_;
      local_58 = puVar12;
    }
    ppuVar11 = &local_58;
    bVar6 = false;
    bVar5 = true;
    bVar7 = true;
    puVar12 = puVar14;
  }
  else {
    ppuVar11 = (undefined8 **)(**(code **)(*plVar2 + 0x2b0))(plVar2,&local_res8);
    bVar6 = true;
    bVar5 = false;
    bVar7 = false;
    puVar12 = (undefined8 *)CONCAT44(uStackX_c,local_res8);
  }
  pTVar15 = &this->PushInterpolator;
  if (pTVar15 !=
      (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
       *)ppuVar11) {
    pTVar3 = pTVar15->Ptr;
    pTVar15->Ptr = (TCameraValueInterpolator<double> *)*ppuVar11;
    *ppuVar11 = (undefined8 *)0x0;
    if (pTVar3 != (TCameraValueInterpolator<double> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if ((bVar7) && (local_58 != (undefined8 *)0x0)) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((bVar5) && (puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)(puVar12,1);
  }
  if ((bVar6) &&
     (puVar12 = (undefined8 *)CONCAT44(uStackX_c,local_res8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)(puVar12,1);
  }
  plVar2 = (longlong *)puVar13[0x16];
  if (plVar2 == (longlong *)0x0) {
    puVar13 = ::operator_new(0x28);
    local_50[0] = puVar14;
    if (puVar13 != (undefined8 *)0x0) {
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      *(undefined1 *)(puVar13 + 4) = 0;
      *puVar13 = &___7__TPopValueInterpolator_N_Cameras_UE__6B_;
      local_50[0] = puVar13;
    }
    ppuVar11 = local_50;
    bVar6 = false;
    bVar5 = true;
    bVar7 = true;
  }
  else {
    ppuVar11 = (undefined8 **)(**(code **)(*plVar2 + 0x2b0))(plVar2,&local_res8);
    puVar14 = (undefined8 *)CONCAT44(uStackX_c,local_res8);
    bVar6 = true;
    bVar5 = false;
    bVar7 = false;
  }
  pTVar15 = &this->PullInterpolator;
  if (pTVar15 !=
      (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
       *)ppuVar11) {
    pTVar3 = pTVar15->Ptr;
    pTVar15->Ptr = (TCameraValueInterpolator<double> *)*ppuVar11;
    *ppuVar11 = (undefined8 *)0x0;
    if (pTVar3 != (TCameraValueInterpolator<double> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if ((bVar7) && (local_50[0] != (undefined8 *)0x0)) {
    (**(code **)*local_50[0])(local_50[0],1);
  }
  if ((bVar5) && (puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)(puVar14,1);
  }
  if ((bVar6) &&
     (puVar14 = (undefined8 *)CONCAT44(uStackX_c,local_res8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)(puVar14,1);
  }
  return;
}

// OnRun @ 14d62a430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCollisionPushCameraNodeEvaluator::OnRun
          (FCollisionPushCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraPoseFlags *pFVar1;
  FCameraEvaluationContext *this_00;
  code *pcVar2;
  bool bVar3;
  UWorld *this_01;
  APlayerController *pAVar4;
  TCameraVariableReferenceReader<bool> *pTVar5;
  UClass *pUVar6;
  longlong lVar7;
  TCameraVariableReferenceReader<bool> *pTVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStackY_228 [32];
  TVector<double>_u_0 local_1f8;
  char local_1e0;
  FHitResult *local_1d8;
  int iStack_1d0;
  TArrayView<FHitResult_const_,int> local_1c8 [2];
  FTraceDatum local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  this_00 = (param_1->EvaluationContext).Object;
  if (this_00 == (FCameraEvaluationContext *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6694508044727877509>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Collision\\CollisionPushCameraNode.cpp"
                       ,0x7b,"Params.EvaluationContext");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_01 = FCameraEvaluationContext::GetWorld(this_00);
  if (((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar4 = (APlayerController *)
           FWeakObjectPtr::Get(&(((param_1->EvaluationContext).Object)->WeakPlayerController).
                                WeakPtr);
  if (this_01 == (UWorld *)0x0) {
    return;
  }
  if (pAVar4 == (APlayerController *)0x0) {
    return;
  }
  GetFinalSafePosition
            (this,(TOptional<UE::Math::TVector<double>_> *)&local_1f8._s_0,param_1,param_2);
  if (local_1e0 == '\0') {
    return;
  }
  pTVar8 = &this->EnableCollisionReader;
  if (((this->EnableCollisionReader).VariableID.Value != 0xffffffff) &&
     (pTVar5 = (TCameraVariableReferenceReader<bool> *)
               FCameraVariableTable::FindValue<bool>
                         (&param_2->VariableTable,
                          (FCameraVariableID)(this->EnableCollisionReader).VariableID.Value),
     pTVar5 != (TCameraVariableReferenceReader<bool> *)0x0)) {
    pTVar8 = pTVar5;
  }
  bVar3 = pTVar8->DefaultValue;
  this->bDebugCollisionEnabled = bVar3;
  if (bVar3 == false) {
    ::FString::Empty(&this->DebugHitObjectName);
    (this->DebugSafePosition).field0_0x0._s_0.X = local_1f8._s_0.X;
    (this->DebugSafePosition).field0_0x0._s_0.Y = local_1f8._s_0.Y;
    (this->DebugSafePosition).field0_0x0._s_0.Z = local_1f8._s_0.Z;
    UpdatePushFactor(this,false,0.0,(TVector<double> *)&local_1f8._s_0,param_1,param_2);
    return;
  }
  if (param_1->EvaluationType != Standard) {
    dVar12 = (param_2->CameraPose).Location.field0_0x0._s_0.X;
    dVar10 = (param_2->CameraPose).Location.field0_0x0._s_0.Y;
    dVar9 = (double)this->LastDampedPushFactor;
    dVar12 = (local_1f8._s_0.X - dVar12) * dVar9 + dVar12;
    dVar11 = (local_1f8._s_0.Z - (param_2->CameraPose).Location.field0_0x0._s_0.Z) * dVar9 +
             (param_2->CameraPose).Location.field0_0x0._s_0.Z;
    dVar10 = (local_1f8._s_0.Y - dVar10) * dVar9 + dVar10;
    if (((dVar12 == (param_2->CameraPose).Location.field0_0x0._s_0.X) &&
        (dVar10 == (param_2->CameraPose).Location.field0_0x0._s_0.Y)) &&
       (dVar11 == (param_2->CameraPose).Location.field0_0x0._s_0.Z)) {
      return;
    }
    pFVar1->Location = true;
    (param_2->CameraPose).Location.field0_0x0._s_0.X = dVar12;
    (param_2->CameraPose).Location.field0_0x0._s_0.Y = dVar10;
    (param_2->CameraPose).Location.field0_0x0._s_0.Z = dVar11;
    return;
  }
  if (this->_padding_ != 0) {
    pUVar6 = UCollisionPushCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar6);
    if (bVar3) {
      lVar7 = this->_padding_;
      goto LAB_14d62a651;
    }
  }
  lVar7 = 0;
LAB_14d62a651:
  if ((*(char *)(lVar7 + 0xb8) != '\0') && ((this->CollisionTraceHandle).field0_0x0._Handle != 0)) {
    FTraceDatum::FTraceDatum(&local_1a8);
    bVar3 = UWorld::QueryTraceData(this_01,&this->CollisionTraceHandle,&local_1a8);
    if (bVar3) {
      local_1d8 = (FHitResult *)local_1a8.OutHits.AllocatorInstance.Data;
      if ((local_1a8.OutHits.ArrayNum < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iStack_1d0 = local_1a8.OutHits.ArrayNum;
      local_1c8[0].DataPtr = local_1d8;
      HandleCollisionTraceResult
                (this,this_01,local_1c8,(TVector<double> *)&local_1f8._s_0,param_1,param_2);
    }
    if (local_1a8.OutHits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.OutHits.AllocatorInstance.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1a8.Delegate);
    if ((void *)local_1a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1a8._padding_);
    }
    if ((void *)local_1a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1a8._padding_);
    }
  }
  if ((local_1e0 == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RunCollisionTrace(this,this_01,pAVar4,(TVector<double> *)&local_1f8._s_0,param_1,param_2);
  return;
}

// RunCollisionTrace @ 14d6338a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCollisionPushCameraNodeEvaluator::RunCollisionTrace
          (FCollisionPushCameraNodeEvaluator *this,UWorld *param_1,APlayerController *param_2,
          TVector<double> *param_3,FCameraNodeEvaluationParams *param_4,
          FCameraNodeEvaluationResult *param_5)

{
  float fVar1;
  byte bVar2;
  AActor *pAVar3;
  longlong lVar4;
  code *pcVar5;
  undefined7 uVar6;
  bool bVar7;
  UClass *pUVar8;
  float *pfVar9;
  FName *pFVar10;
  FTraceHandle *pFVar11;
  longlong lVar12;
  undefined1 auStackY_1f8 [32];
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_198;
  TVector<double> *local_188;
  TStatId local_180;
  FCameraNodeEvaluationParams *local_178;
  FCollisionShape local_170;
  FHitResult *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  FName local_118;
  FName local_110;
  TArrayView<FHitResult_const_,int> local_108;
  FTraceHandle local_f8;
  FCollisionQueryParams local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_178 = param_4;
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_188 = param_3;
  if ((*(int *)(lVar12 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&CollisionTraceTag,L"CameraCollision");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar12 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&CollisionTraceOwnerTag,L"CollisionPushCameraNode");
    _Init_thread_footer(&::_TSS1);
  }
  if (this->_padding_ != 0) {
    pUVar8 = UCollisionPushCameraNode::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (bVar7) {
      lVar12 = this->_padding_;
      goto LAB_14d6339b6;
    }
  }
  lVar12 = 0;
LAB_14d6339b6:
  bVar2 = *(byte *)(lVar12 + 0xa0);
  if (((this->CollisionSphereRadiusReader).DefaultValuePtr == (float *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->CollisionSphereRadiusReader).VariableID.Value == 0xffffffff) ||
     (pfVar9 = FCameraVariableTable::FindValue<float>
                         (&param_5->VariableTable,
                          (FCameraVariableID)(this->CollisionSphereRadiusReader).VariableID.Value),
     pfVar9 == (float *)0x0)) {
    pfVar9 = (this->CollisionSphereRadiusReader).DefaultValuePtr;
  }
  fVar1 = *pfVar9;
  if (((this->SafePositionOffsetReader).DefaultValuePtr == (TVector<double> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->SafePositionOffsetReader).VariableID.Value != 0xffffffff) {
    FCameraVariableTable::FindValue<UE::Math::TVector<double>_>
              (&param_5->VariableTable,
               (FCameraVariableID)(this->SafePositionOffsetReader).VariableID.Value);
  }
  local_148._s_0.X = (param_5->CameraPose).Location.field0_0x0._s_0.X;
  local_148._s_0.Y = (param_5->CameraPose).Location.field0_0x0._s_0.Y;
  local_148._s_0.Z = (param_5->CameraPose).Location.field0_0x0._s_0.Z;
  local_130._s_0.X = (local_188->field0_0x0)._s_0.X;
  local_130._s_0.Y = (local_188->field0_0x0)._s_0.Y;
  local_130._s_0.Z = (local_188->field0_0x0)._s_0.Z;
  if (0.0 < SQRT((local_148._s_0.Y - local_130._s_0.Y) * (local_148._s_0.Y - local_130._s_0.Y) +
                 (local_148._s_0.X - local_130._s_0.X) * (local_148._s_0.X - local_130._s_0.X) +
                 (local_148._s_0.Z - local_130._s_0.Z) * (local_148._s_0.Z - local_130._s_0.Z))) {
    pAVar3 = (AActor *)param_2->_padding_;
    local_170.ShapeType = Sphere;
    local_170.field1_0x4.Box.HalfExtentX = fVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (AActor *)0x0)) {
      GC::MarkAsReachable((UObject *)pAVar3);
    }
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_StartCollisionSweep =
           (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UE::Cameras::FCollisionPushCameraNodeEvaluator::RunCollisionTrace(UWorld_*,APlayerController_*,UE::Math::TVector<double>_const_&,UE::Cameras::FCameraNodeEvaluationParams_const_&,UE::Cameras::FCameraNodeEvaluationResult_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_StartCollisionSweep>
            )0x0;
      pFVar10 = ::FName::FName(&local_118,"StartCollisionSweep");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_StartCollisionSweep,*pFVar10,
                 L"StartCollisionSweep","STATGROUP_CollisionTags","STATCAT_Advanced",
                 L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_180.StatIdPtr = (TStatIdData *)StatPtr_StartCollisionSweep;
    if (StatPtr_StartCollisionSweep ==
        (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UE::Cameras::FCollisionPushCameraNodeEvaluator::RunCollisionTrace(UWorld_*,APlayerController_*,UE::Math::TVector<double>_const_&,UE::Cameras::FCameraNodeEvaluationParams_const_&,UE::Cameras::FCameraNodeEvaluationResult_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_StartCollisionSweep>
         )0x0) {
      pFVar10 = ::FName::FName(&local_110,"StartCollisionSweep");
      local_180.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_StartCollisionSweep,*pFVar10,
                      L"StartCollisionSweep","STATGROUP_CollisionTags","STATCAT_Advanced",
                      L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"StartCollisionSweep");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams(&local_e8,::StaticName,&local_180,false,pAVar3);
    local_e8.TraceTag = CollisionTraceTag;
    local_e8.OwnerTag = CollisionTraceOwnerTag;
    if (*(char *)(lVar12 + 0xb8) == '\0') {
      local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.ArrayNum = 0;
      local_198.ArrayMax = 0;
      UWorld::SweepMultiByChannel
                (param_1,&local_198,(TVector<double> *)&local_130._s_0,
                 (TVector<double> *)&local_148._s_0,&UE::Math::TQuat<double>::Identity,(uint)bVar2,
                 &local_170,&local_e8,&FCollisionResponseParams::DefaultResponseParam);
      iStack_150 = local_198.ArrayNum;
      local_158 = (FHitResult *)local_198.AllocatorInstance.Data;
      if ((local_198.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_108._12_4_ = uStack_14c;
      local_108.ArrayNum = iStack_150;
      local_108.DataPtr = local_158;
      HandleCollisionTraceResult(this,param_1,&local_108,local_188,local_178,param_5);
      if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
    }
    else {
      pFVar11 = UWorld::AsyncSweepByChannel
                          (param_1,&local_f8,Single,(TVector<double> *)&local_130._s_0,
                           (TVector<double> *)&local_148._s_0,&UE::Math::TQuat<double>::Identity,
                           (uint)bVar2,&local_170,&local_e8,
                           &FCollisionResponseParams::DefaultResponseParam,
                           (TDelegate<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
                            *)0x0,0);
      bVar7 = pFVar11->bTransactional;
      uVar6 = *(undefined7 *)&pFVar11->field_0x9;
      (this->CollisionTraceHandle).field0_0x0 = pFVar11->field0_0x0;
      (this->CollisionTraceHandle).bTransactional = bVar7;
      *(undefined7 *)&(this->CollisionTraceHandle).field_0x9 = uVar6;
    }
    if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_e8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// UpdatePushFactor @ 14d63b850

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCollisionPushCameraNodeEvaluator::UpdatePushFactor
          (FCollisionPushCameraNodeEvaluator *this,bool param_1,float param_2,
          TVector<double> *param_3,FCameraNodeEvaluationParams *param_4,
          FCameraNodeEvaluationResult *param_5)

{
  float *pfVar1;
  FCameraPoseFlags *pFVar2;
  double dVar3;
  ECameraCollisionDirection EVar4;
  TCameraValueInterpolator<double> *pTVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float local_res8;
  undefined1 local_resc;
  FCameraVariableTable *local_58 [8];
  
  this->bDebugFoundHit = param_1;
  pfVar1 = &this->LastDampedPushFactor;
  if ((!param_1) && (*pfVar1 <= __real_322bcc77 && __real_322bcc77 != *pfVar1)) {
    fVar7 = 0.0;
    param_2 = 0.0;
    EVar4 = Pushing;
    goto LAB_14d63ba39;
  }
  EVar4 = this->LastDirection;
  if (param_2 <= this->LastPushFactor) {
    if (param_2 < this->LastPushFactor) {
      EVar4 = Pulling;
    }
  }
  else {
    EVar4 = Pushing;
  }
  fVar7 = *pfVar1;
  local_resc = param_4->bIsFirstFrame;
  local_res8 = param_4->DeltaTime;
  local_58[0] = &param_5->VariableTable;
  if (EVar4 == Pushing) {
    pTVar5 = (this->PushInterpolator).Ptr;
    dVar3 = pTVar5->CurrentValue;
    dVar8 = pTVar5->TargetValue;
    pTVar5->CurrentValue = (double)fVar7;
    pTVar5->TargetValue = (double)param_2;
    (**(code **)(pTVar5->_padding_ + 8))(pTVar5,dVar3,dVar8);
    pTVar5 = (this->PushInterpolator).Ptr;
LAB_14d63b97c:
    if (local_res8 != 0.0) {
      (**(code **)(pTVar5->_padding_ + 0x10))(pTVar5,&local_res8,local_58);
    }
    fVar7 = (float)pTVar5->CurrentValue;
  }
  else if (EVar4 == Pulling) {
    pTVar5 = (this->PullInterpolator).Ptr;
    dVar3 = pTVar5->CurrentValue;
    dVar8 = pTVar5->TargetValue;
    pTVar5->CurrentValue = (double)fVar7;
    pTVar5->TargetValue = (double)param_2;
    (**(code **)(pTVar5->_padding_ + 8))(pTVar5,dVar3,dVar8);
    pTVar5 = (this->PullInterpolator).Ptr;
    goto LAB_14d63b97c;
  }
  if (0.0 < fVar7) {
    dVar3 = (param_5->CameraPose).Location.field0_0x0._s_0.X;
    dVar8 = (param_5->CameraPose).Location.field0_0x0._s_0.Y;
    dVar6 = (double)fVar7;
    dVar3 = ((param_3->field0_0x0)._s_0.X - dVar3) * dVar6 + dVar3;
    dVar9 = ((param_3->field0_0x0)._s_0.Z - (param_5->CameraPose).Location.field0_0x0._s_0.Z) *
            dVar6 + (param_5->CameraPose).Location.field0_0x0._s_0.Z;
    dVar8 = ((param_3->field0_0x0)._s_0.Y - dVar8) * dVar6 + dVar8;
    if (((dVar3 != (param_5->CameraPose).Location.field0_0x0._s_0.X) ||
        (dVar8 != (param_5->CameraPose).Location.field0_0x0._s_0.Y)) ||
       (dVar9 != (param_5->CameraPose).Location.field0_0x0._s_0.Z)) {
      pFVar2->Location = true;
      (param_5->CameraPose).Location.field0_0x0._s_0.X = dVar3;
      (param_5->CameraPose).Location.field0_0x0._s_0.Y = dVar8;
      (param_5->CameraPose).Location.field0_0x0._s_0.Z = dVar9;
    }
  }
LAB_14d63ba39:
  this->LastDirection = EVar4;
  this->LastPushFactor = param_2;
  this->LastDampedPushFactor = fVar7;
  return;
}

