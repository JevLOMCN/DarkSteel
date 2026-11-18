// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FNetworkPredictionData_Client_Character @ 1477ed590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FNetworkPredictionData_Client_Character * __thiscall
FNetworkPredictionData_Client_Character::FNetworkPredictionData_Client_Character
          (FNetworkPredictionData_Client_Character *this,UCharacterMovementComponent *param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  UObject *pUVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  ENetMode EVar9;
  longlong lVar10;
  UClass *this_00;
  float fVar11;
  
  this->bUpdatePosition = 0;
  piVar1 = &(this->SavedMoves).ArrayMax;
  piVar2 = &(this->FreeMoves).ArrayMax;
  (this->SavedMoves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  EVar9 = NM_Standalone;
  (this->SavedMoves).ArrayNum = 0;
  *piVar1 = 0;
  (this->FreeMoves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeMoves).ArrayNum = 0;
  *piVar2 = 0;
  (this->PendingMove).Object = (FSavedMove_Character *)0x0;
  (this->PendingMove).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->LastAckedMove).Object = (FSavedMove_Character *)0x0;
  (this->LastAckedMove).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->MaxFreeMoveCount = 0x60;
  this->MaxSavedMoveCount = 0x60;
  (this->OriginalMeshTranslationOffset).field0_0x0._s_0.X = 0.0;
  (this->OriginalMeshTranslationOffset).field0_0x0._s_0.Y = 0.0;
  (this->OriginalMeshTranslationOffset).field0_0x0._s_0.Z = 0.0;
  (this->MeshTranslationOffset).field0_0x0._s_0.X = 0.0;
  (this->MeshTranslationOffset).field0_0x0._s_0.Y = 0.0;
  (this->MeshTranslationOffset).field0_0x0._s_0.Z = 0.0;
  this->_padding_ = (longlong)&___7FNetworkPredictionData_Client_Character__6B_;
  this->ClientUpdateRealTime = 0.0;
  this->CurrentTimeStamp = 0.0;
  this->LastReceivedAckRealTime = 0.0;
  dVar7 = UE::Math::TQuat<double>::Identity.Y;
  (this->OriginalMeshRotationOffset).X = UE::Math::TQuat<double>::Identity.X;
  (this->OriginalMeshRotationOffset).Y = dVar7;
  dVar7 = UE::Math::TQuat<double>::Identity.W;
  (this->OriginalMeshRotationOffset).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->OriginalMeshRotationOffset).W = dVar7;
  dVar7 = UE::Math::TQuat<double>::Identity.Y;
  (this->MeshRotationOffset).X = UE::Math::TQuat<double>::Identity.X;
  (this->MeshRotationOffset).Y = dVar7;
  dVar7 = UE::Math::TQuat<double>::Identity.W;
  (this->MeshRotationOffset).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->MeshRotationOffset).W = dVar7;
  dVar7 = UE::Math::TQuat<double>::Identity.Y;
  (this->MeshRotationTarget).X = UE::Math::TQuat<double>::Identity.X;
  (this->MeshRotationTarget).Y = dVar7;
  dVar8 = UE::Math::TQuat<double>::Identity.W;
  dVar7 = UE::Math::TQuat<double>::Identity.Z;
  this->MaxSmoothNetUpdateDist = 0.0;
  this->NoSmoothNetUpdateDist = 0.0;
  (this->MeshRotationTarget).Z = dVar7;
  (this->MeshRotationTarget).W = dVar8;
  this->LastCorrectionDelta = 0.0;
  this->LastCorrectionTime = 0.0;
  this->MaxClientSmoothingDeltaTime = 0.5;
  this->SmoothingServerTimeStamp = 0.0;
  this->SmoothingClientTimeStamp = 0.0;
  this->SmoothNetUpdateTime = 0.0;
  this->SmoothNetUpdateRotationTime = 0.0;
  this->MaxMoveDeltaTime = 0.125;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastSmoothLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastSmoothLocation).field0_0x0._s_0.Y = (double)uVar6;
  (this->LastSmoothLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastServerLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastServerLocation).field0_0x0._s_0.Y = (double)uVar6;
  (this->LastServerLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->SimulatedDebugDrawTime = 0.0;
  this->DebugForcedPacketLossTimerStart = 0.0;
  this->MaxSmoothNetUpdateDist = param_1->NetworkMaxSmoothUpdateDistance;
  this->NoSmoothNetUpdateDist = param_1->NetworkNoSmoothUpdateDistance;
  if (*(AActor **)&param_1->field_0xa8 != (AActor *)0x0) {
    EVar9 = AActor::InternalGetNetMode(*(AActor **)&param_1->field_0xa8);
  }
  lVar10 = 0x414;
  if (EVar9 != NM_ListenServer) {
    lVar10 = 0x40c;
  }
  this->SmoothNetUpdateTime = *(float *)(&param_1->field_0x0 + lVar10);
  lVar10 = 0x418;
  if (EVar9 != NM_ListenServer) {
    lVar10 = 0x410;
  }
  this->SmoothNetUpdateRotationTime = *(float *)(&param_1->field_0x0 + lVar10);
  this_00 = Z_Construct_UClass_AGameNetworkManager_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar5 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar5 != (UObject *)0x0) {
    fVar3 = *(float *)(pUVar5 + 0x14);
    this->MaxMoveDeltaTime = fVar3;
    fVar11 = fVar3 + fVar3;
    if (fVar3 + fVar3 <= *(float *)&pUVar5[0x14].field_0x4) {
      fVar11 = *(float *)&pUVar5[0x14].field_0x4;
    }
    this->MaxClientSmoothingDeltaTime = fVar11;
  }
  if ((*(longlong *)&param_1->field_0xa8 != 0) &&
     (*(char *)(*(longlong *)&param_1->field_0xa8 + 0x168) == '\x02')) {
    uVar4 = this->MaxSavedMoveCount;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (*piVar1 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar4,&(this->SavedMoves).AllocatorInstance,(this->SavedMoves).ArrayNum,
                 piVar1);
    }
    uVar4 = this->MaxFreeMoveCount;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (*piVar2 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar4,&(this->FreeMoves).AllocatorInstance,(this->FreeMoves).ArrayNum,piVar2
                );
    }
  }
  return this;
}

// ~FNetworkPredictionData_Client_Character @ 1477f3840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNetworkPredictionData_Client_Character::~FNetworkPredictionData_Client_Character
          (FNetworkPredictionData_Client_Character *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&___7FNetworkPredictionData_Client_Character__6B_;
  DestructItems<TSharedPtr<FSavedMove_Character,1>,int>
            ((TSharedPtr<FSavedMove_Character,1> *)(this->SavedMoves).AllocatorInstance.Data,
             (this->SavedMoves).ArrayNum);
  piVar1 = &(this->SavedMoves).ArrayMax;
  (this->SavedMoves).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->SavedMoves).AllocatorInstance,0,piVar1);
  }
  DestructItems<TSharedPtr<FSavedMove_Character,1>,int>
            ((TSharedPtr<FSavedMove_Character,1> *)(this->FreeMoves).AllocatorInstance.Data,
             (this->FreeMoves).ArrayNum);
  piVar1 = &(this->FreeMoves).ArrayMax;
  (this->FreeMoves).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->FreeMoves).AllocatorInstance,0,piVar1);
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->PendingMove != (TSharedPtr<FSavedMove_Character,1> *)&local_28) {
    (this->PendingMove).Object = (FSavedMove_Character *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PendingMove).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LastAckedMove != (TSharedPtr<FSavedMove_Character,1> *)&local_18) {
    (this->LastAckedMove).Object = (FSavedMove_Character *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LastAckedMove).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastAckedMove).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PendingMove).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FSavedMove_Character,1>,int>
            ((TSharedPtr<FSavedMove_Character,1> *)(this->FreeMoves).AllocatorInstance.Data,
             (this->FreeMoves).ArrayNum);
  pFVar2 = (this->FreeMoves).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedPtr<FSavedMove_Character,1>,int>
            ((TSharedPtr<FSavedMove_Character,1> *)(this->SavedMoves).AllocatorInstance.Data,
             (this->SavedMoves).ArrayNum);
  pFVar2 = (this->SavedMoves).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FNetworkPredictionData_Client__6B_;
  return;
}

// AckMove @ 147803dc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNetworkPredictionData_Client_Character::AckMove
          (FNetworkPredictionData_Client_Character *this,int param_1,
          UCharacterMovementComponent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FSavedMove_Character *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  UWorld *pUVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  if (param_1 != -1) {
    uVar7 = 0;
    if (param_1 < (this->SavedMoves).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = (this->SavedMoves).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    if (6 < (byte)LogNetPlayerMovement._0_1_) {
      if ((*(longlong *)pFVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetPlayerMovement);
    }
    if ((this->LastAckedMove).Object != (FSavedMove_Character *)0x0) {
      (**(code **)(this->_padding_ + 0x18))(this);
    }
    pTVar1 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
    pFVar2 = *(FSavedMove_Character **)pFVar9;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->LastAckedMove).SharedReferenceCount.ReferenceController;
    (this->LastAckedMove).Object = pFVar2;
    (this->LastAckedMove).SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    uVar7 = 0;
    if (0 < param_1) {
      do {
        uVar8 = 0;
        if ((int)uVar7 < (this->SavedMoves).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(this->_padding_ + 0x18))(this);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < param_1);
    }
    uVar8 = param_1 + 1;
    uVar7 = 0;
    if ((int)uVar8 <= (this->SavedMoves).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      TArray<TSharedPtr<FSavedMove_Character,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (&this->SavedMoves,0,uVar8);
    }
  }
  pUVar6 = UActorComponent::GetWorld((UActorComponent *)param_2);
  if (pUVar6 != (UWorld *)0x0) {
    this->LastReceivedAckRealTime = (float)pUVar6->RealTimeSeconds;
  }
  return;
}

// AddStructReferencedObjects @ 1478053f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNetworkPredictionData_Client_Character::AddStructReferencedObjects
          (FNetworkPredictionData_Client_Character *this,FReferenceCollector *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  FSavedMove_Character *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->SavedMoves).AllocatorInstance.Data;
  iVar1 = (this->SavedMoves).ArrayNum;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->SavedMoves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FSavedMove_Character,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
    plVar3 = *(longlong **)pFVar5;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x68))(plVar3,param_1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar5 = pFVar5 + 0x10;
  }
  pFVar4 = (this->PendingMove).Object;
  if (pFVar4 != (FSavedMove_Character *)0x0) {
    (**(code **)(*(longlong *)pFVar4 + 0x68))(pFVar4,param_1);
  }
  pFVar4 = (this->LastAckedMove).Object;
  if (pFVar4 != (FSavedMove_Character *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478054a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar4 + 0x68))(pFVar4,param_1);
    return;
  }
  return;
}

// AllocateNewMove @ 1478066d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FSavedMove_Character,1> * __thiscall
FNetworkPredictionData_Client_Character::AllocateNewMove
          (FNetworkPredictionData_Client_Character *this,
          TSharedPtr<FSavedMove_Character,1> *__return_storage_ptr__)

{
  FFindFloorResult *pFVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  FSavedMove_Character *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  FSavedMove_Character *pFVar12;
  
  pFVar10 = ::operator_new(0x450);
  pFVar12 = (FSavedMove_Character *)0x0;
  if (pFVar10 != (FSavedMove_Character *)0x0) {
    pFVar1->bBlockingHit = 0;
    pFVar1->bLineTrace = 0;
    pFVar1->bWalkableFloor = 0;
    *(undefined ***)pFVar10 = &___7FSavedMove_Character__6B_;
    (pFVar10->StartFloor).FloorDist = 0.0;
    (pFVar10->StartFloor).LineDist = 0.0;
    memset(&(pFVar10->StartFloor).HitResult,0,0x100);
    (pFVar10->StartFloor).HitResult.MyItem = -1;
    (pFVar10->StartFloor).HitResult.Time = 1.0;
    (pFVar10->StartFloor).HitResult.HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
    (pFVar10->StartFloor).HitResult.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
         (FWeakObjectPtr)0x0;
    (pFVar10->StartFloor).HitResult.HitObjectHandle.ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    (pFVar10->StartFloor).HitResult.HitObjectHandle.InstanceIndex = -1;
    (pFVar10->StartFloor).HitResult.HitObjectHandle.ResolutionStatus = Invalid;
    *(undefined3 *)&(pFVar10->StartFloor).HitResult.HitObjectHandle.field_0x1d = 0;
    (pFVar10->StartBase).WeakPtr = (FWeakObjectPtr)0x0;
    (pFVar10->StartBoneName).ComparisonIndex = 0;
    (pFVar10->StartBoneName).Number = 0;
    (pFVar10->StartAttachParent).WeakPtr = (FWeakObjectPtr)0x0;
    (pFVar10->StartAttachSocketName).ComparisonIndex = 0;
    (pFVar10->StartAttachSocketName).Number = 0;
    (pFVar10->EndBase).WeakPtr = (FWeakObjectPtr)0x0;
    (pFVar10->EndBoneName).ComparisonIndex = 0;
    (pFVar10->EndBoneName).Number = 0;
    (pFVar10->EndAttachParent).WeakPtr = (FWeakObjectPtr)0x0;
    (pFVar10->EndAttachSocketName).ComparisonIndex = 0;
    (pFVar10->EndAttachSocketName).Number = 0;
    (pFVar10->RootMotionMontage).WeakPtr = (FWeakObjectPtr)0x0;
    (pFVar10->RootMotionMovement).bHasRootMotion = false;
    (pFVar10->RootMotionMovement).BlendWeight = 0.0;
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(pFVar10->RootMotionMovement).RootMotionTransform.Rotation.XY.m128d_f64 =
         auVar4;
    auVar5._8_4_ = SUB84((double)fVar3,0);
    auVar5._0_8_ = (double)fVar2;
    auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])(pFVar10->RootMotionMovement).RootMotionTransform.Rotation.ZW.m128d_f64 =
         auVar5;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(pFVar10->RootMotionMovement).RootMotionTransform.Translation.XY.m128d_f64
         = auVar6;
    auVar7._8_4_ = SUB84((double)fVar3,0);
    auVar7._0_8_ = (double)fVar2;
    auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])(pFVar10->RootMotionMovement).RootMotionTransform.Translation.ZW.m128d_f64
         = auVar7;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(pFVar10->RootMotionMovement).RootMotionTransform.Scale3D.XY.m128d_f64 =
         auVar8;
    auVar9._8_4_ = SUB84((double)fVar3,0);
    auVar9._0_8_ = (double)fVar2;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])(pFVar10->RootMotionMovement).RootMotionTransform.Scale3D.ZW.m128d_f64 =
         auVar9;
    FRootMotionSourceGroup::FRootMotionSourceGroup(&pFVar10->SavedRootMotion);
    pFVar10->AccelMagThreshold = 1.0;
    pFVar10->AccelDotThreshold = 0.9;
    pFVar10->AccelDotThresholdCombine = 0.996;
    pFVar10->MaxSpeedThresholdCombine = 10.0;
    pFVar12 = pFVar10;
  }
  __return_storage_ptr__->Object = pFVar12;
  pTVar11 = ::operator_new(0x18);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pTVar11->SharedReferenceCount = (atomic<int>)0x1;
  pTVar11->_padding_ =
       (longlong)
       &
       ___7__TReferenceControllerWithDeleter_VFSavedMove_Character__U__DefaultDeleter_VFSavedMove_Character___SharedPointerInternals___00_SharedPointerInternals__6B_
  ;
  pTVar11->WeakReferenceCount = (atomic<int>)0x1;
  pTVar11[1]._padding_ = (longlong)pFVar12;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
  return __return_storage_ptr__;
}

// CreateSavedMove @ 14781aa30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSharedPtr<FSavedMove_Character,1> * __thiscall
FNetworkPredictionData_Client_Character::CreateSavedMove
          (FNetworkPredictionData_Client_Character *this,
          TSharedPtr<FSavedMove_Character,1> *__return_storage_ptr__)

{
  TArray<TSharedPtr<FSavedMove_Character,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedPtr<FSavedMove_Character,1> *pTVar7;
  uint uVar8;
  
  if (this->MaxSavedMoveCount <= (this->SavedMoves).ArrayNum) {
    if (2 < (byte)LogNetPlayerMovement._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPlayerMovement);
    }
    pTVar1 = &this->SavedMoves;
    uVar8 = 0;
    if (0 < (this->SavedMoves).ArrayNum) {
      do {
        pcVar4 = *(code **)(this->_padding_ + 0x18);
        uVar6 = 0;
        if ((int)uVar8 < (this->SavedMoves).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FSavedMove_Character,1> *)(*pcVar4)();
          return pTVar7;
        }
        (*pcVar4)(this,(pTVar1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (this->SavedMoves).ArrayNum);
    }
    piVar2 = &(this->SavedMoves).ArrayMax;
    pTVar7 = (TSharedPtr<FSavedMove_Character,1> *)(pTVar1->AllocatorInstance).Data;
    iVar3 = (this->SavedMoves).ArrayNum;
    if (*piVar2 < 0) {
      DestructItems<TSharedPtr<FSavedMove_Character,1>,int>(pTVar7,iVar3);
      (this->SavedMoves).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<TSharedPtr<FSavedMove_Character,1>,int>(pTVar7,iVar3);
      (this->SavedMoves).ArrayNum = 0;
    }
  }
  if ((this->FreeMoves).ArrayNum == 0) {
    (**(code **)(this->_padding_ + 0x10))(this);
  }
  else {
    TArray<TSharedPtr<FSavedMove_Character,1>,TSizedDefaultAllocator<32>_>::Pop
              (&this->FreeMoves,__return_storage_ptr__,No);
  }
  if ((__return_storage_ptr__->Object == (FSavedMove_Character *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FSavedMove_Character,1> *)(*pcVar4)();
    return pTVar7;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 8))();
  return __return_storage_ptr__;
}

// FreeMove @ 1478245a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNetworkPredictionData_Client_Character::FreeMove
          (FNetworkPredictionData_Client_Character *this,TSharedPtr<FSavedMove_Character,1> *param_1
          )

{
  int *piVar1;
  TSharedPtr<FSavedMove_Character,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  if (param_1->Object != (FSavedMove_Character *)0x0) {
    if ((this->FreeMoves).ArrayNum < this->MaxFreeMoveCount) {
      pTVar2 = (TSharedPtr<FSavedMove_Character,1> *)(this->FreeMoves).AllocatorInstance.Data;
      if (((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->FreeMoves).ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->FreeMoves).ArrayNum;
      piVar1 = &(this->FreeMoves).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->FreeMoves).AllocatorInstance,piVar1);
      }
      (this->FreeMoves).ArrayNum = iVar6 + 1;
      pFVar7 = (this->FreeMoves).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      *(FSavedMove_Character **)pFVar7 = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    pTVar2 = &this->PendingMove;
    if (pTVar2->Object == param_1->Object) {
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar2 != (TSharedPtr<FSavedMove_Character,1> *)&local_28) {
        pTVar2->Object = (FSavedMove_Character *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->PendingMove).SharedReferenceCount,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    pTVar2 = &this->LastAckedMove;
    if (pTVar2->Object == param_1->Object) {
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar2 != (TSharedPtr<FSavedMove_Character,1> *)&local_18) {
        pTVar2->Object = (FSavedMove_Character *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->LastAckedMove).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
    }
  }
  return;
}

// GetSavedMoveIndex @ 14783d500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
FNetworkPredictionData_Client_Character::GetSavedMoveIndex
          (FNetworkPredictionData_Client_Character *this,float param_1)

{
  FSavedMove_Character *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((0 < (this->SavedMoves).ArrayNum) &&
     (((pFVar1 = (this->LastAckedMove).Object, pFVar1 == (FSavedMove_Character *)0x0 ||
       (pFVar1->bOldTimeStampBeforeReset != '\0')) ||
      (pFVar1->TimeStamp <= param_1 && param_1 != pFVar1->TimeStamp)))) {
    uVar6 = 0;
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->SavedMoves).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if (param_1 ==
          *(float *)(*(longlong *)((this->SavedMoves).AllocatorInstance.Data + lVar7) + 0x14)) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < (this->SavedMoves).ArrayNum);
  }
  return -1;
}

// UpdateTimeStampAndDeltaTime @ 14787e730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FNetworkPredictionData_Client_Character::UpdateTimeStampAndDeltaTime
          (FNetworkPredictionData_Client_Character *this,float param_1,ACharacter *param_2,
          UCharacterMovementComponent *param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  FSavedMove_Character *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  
  uVar9 = 0;
  if (param_3->MinTimeBetweenTimeStampResets <= this->CurrentTimeStamp &&
      this->CurrentTimeStamp != param_3->MinTimeBetweenTimeStampResets) {
    if (4 < (byte)LogNetPlayerMovement._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPlayerMovement);
    }
    iVar8 = (this->SavedMoves).ArrayNum;
    this->CurrentTimeStamp = this->CurrentTimeStamp - param_3->MinTimeBetweenTimeStampResets;
    uVar12 = uVar9;
    if (0 < iVar8) {
      do {
        uVar10 = (uint)uVar9;
        uVar7 = 0;
        if ((int)uVar10 < iVar8) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar13 = (float)(*pcVar5)();
          return fVar13;
        }
        uVar7 = 0;
        if ((int)uVar10 < (this->SavedMoves).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar13 = (float)(*pcVar5)();
          return fVar13;
        }
        pFVar3 = (this->SavedMoves).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar3 + uVar12) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar13 = (float)(*pcVar5)();
          return fVar13;
        }
        uVar9 = (ulonglong)(uVar10 + 1);
        pbVar1 = (byte *)(*(longlong *)(pFVar3 + uVar12) + 0x10);
        *pbVar1 = *pbVar1 | 0x10;
        iVar8 = (this->SavedMoves).ArrayNum;
        uVar12 = uVar12 + 0x10;
      } while ((int)(uVar10 + 1) < iVar8);
    }
    pFVar4 = (this->LastAckedMove).Object;
    if (pFVar4 != (FSavedMove_Character *)0x0) {
      pFVar4->bOldTimeStampBeforeReset = '\x01';
    }
    FRootMotionSourceGroup::ApplyTimeStampReset
              (&param_3->CurrentRootMotion,param_3->MinTimeBetweenTimeStampResets);
  }
  iVar8 = (this->SavedMoves).ArrayNum;
  this->CurrentTimeStamp = param_1 + this->CurrentTimeStamp;
  if (0 < iVar8) {
    uVar7 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar7 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      fVar13 = (float)(*pcVar5)();
      return fVar13;
    }
    lVar11 = (longlong)(this->SavedMoves).ArrayNum;
    pFVar3 = (this->SavedMoves).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar3 + lVar11 * 0x10 + -0x10) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      fVar13 = (float)(*pcVar5)();
      return fVar13;
    }
    if ((*(byte *)(*(longlong *)(pFVar3 + lVar11 * 0x10 + -0x10) + 0x10) & 0x10) == 0) {
      if ((*(longlong *)(pFVar3 + lVar11 * 0x10 + -0x10) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar13 = (float)(*pcVar5)();
        return fVar13;
      }
      param_1 = this->CurrentTimeStamp -
                *(float *)(*(longlong *)(pFVar3 + lVar11 * 0x10 + -0x10) + 0x14);
    }
  }
  fVar13 = this->MaxMoveDeltaTime;
  fVar14 = AActor::GetActorTimeDilation((AActor *)param_2);
  fVar14 = fVar14 * fVar13;
  if (param_1 <= fVar14) {
    fVar14 = param_1;
  }
  return fVar14;
}

