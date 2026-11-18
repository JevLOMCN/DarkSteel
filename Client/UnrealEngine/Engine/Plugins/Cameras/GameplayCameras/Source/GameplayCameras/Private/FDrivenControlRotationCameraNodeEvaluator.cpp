// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// FDrivenControlRotationCameraNodeEvaluator @ 14d655a10

FDrivenControlRotationCameraNodeEvaluator * __thiscall
UE::Cameras::FDrivenControlRotationCameraNodeEvaluator::FDrivenControlRotationCameraNodeEvaluator
          (FDrivenControlRotationCameraNodeEvaluator *this)

{
  double dVar1;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  (this->HelperService).Object = (FDrivenControlRotationHelperService *)0x0;
  (this->HelperService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined4 *)&this->_padding_ = 7;
  this->_padding_ = (longlong)&___7FDrivenControlRotationCameraNodeEvaluator_Cameras_UE__6B_;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->LastControlRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->LastControlRotation).Yaw = dVar1;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bLastWasActiveCameraRig = false;
  (this->LastControlRotation).Roll = dVar1;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags
            ((FCameraNodeEvaluator *)this,SupportsOperations|NeedsSerialize);
  return this;
}

// GetTypeID @ 14d661bd0

FCameraObjectTypeID * __thiscall
UE::Cameras::FDrivenControlRotationCameraNodeEvaluator::GetTypeID
          (FDrivenControlRotationCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662e80

bool __thiscall
UE::Cameras::FDrivenControlRotationCameraNodeEvaluator::IsKindOf
          (FDrivenControlRotationCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)
                FInput2DCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuildDebugBlocks @ 14d664980

void __thiscall
UE::Cameras::FDrivenControlRotationCameraNodeEvaluator::OnBuildDebugBlocks
          (FDrivenControlRotationCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FScriptContainerElement *pFVar1;
  FCameraDebugBlock *pFVar2;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar2 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x58,8);
  pFVar2[1]._padding_ = 0;
  pFVar2[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[1].Attachments.ArrayNum = 0;
  pFVar2[1].Attachments.ArrayMax = 0;
  pFVar2[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[1].Children.ArrayNum = 0;
  pFVar2[1].Children.ArrayMax = 0;
  pFVar2[2]._padding_ = 0;
  (pFVar2->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar2->Attachments).ArrayNum = 0;
  (pFVar2->Attachments).ArrayMax = 0;
  (pFVar2->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar2->Children).ArrayNum = 0;
  (pFVar2->Children).ArrayMax = 0;
  pFVar2->_padding_ = (longlong)&___7FDrivenControlRotationDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar2);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar2);
  pFVar1 = (FScriptContainerElement *)this->_padding_;
  pFVar2[1]._padding_ = this->_padding_;
  pFVar2[1].Attachments.AllocatorInstance.Data = pFVar1;
  pFVar1 = (FScriptContainerElement *)(this->LastDeltaControlRotation).Yaw;
  *(double *)&pFVar2[1].Attachments.ArrayNum = (this->LastDeltaControlRotation).Pitch;
  pFVar2[1].Children.AllocatorInstance.Data = pFVar1;
  *(double *)&pFVar2[1].Children.ArrayNum = (this->LastDeltaControlRotation).Roll;
  *(bool *)&pFVar2[2]._padding_ = this->bLastWasActiveCameraRig;
  return;
}

// OnExecuteOperation @ 14d666ed0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDrivenControlRotationCameraNodeEvaluator::OnExecuteOperation
          (FDrivenControlRotationCameraNodeEvaluator *this,FCameraOperationParams *param_1,
          FCameraOperation *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  double dVar5;
  double local_28;
  double local_20;
  
  if ((param_2->OperationTypeID).Value != 0) {
    param_2 = (FCameraOperation *)0x0;
  }
  if (param_2 != (FCameraOperation *)0x0) {
    if (((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = FWeakObjectPtr::Get(&(((param_1->EvaluationContext).Object)->WeakPlayerController).
                                  WeakPtr);
    if ((this->bLastWasActiveCameraRig != false) && (pUVar4 != (UObject *)0x0)) {
      (**(code **)(*(longlong *)pUVar4 + 0x7a8))(pUVar4,&local_28);
      dVar5 = local_20;
      if ((char)param_2[4].OperationTypeID.Value != '\0') {
        dVar5 = *(double *)(param_2 + 2);
        *(undefined8 *)(param_2 + 2) = 0;
        *(undefined1 *)&param_2[4].OperationTypeID.Value = 0;
        if (*(char *)((longlong)&param_2[4].OperationTypeID.Value + 1) != '\0') {
          dVar5 = dVar5 + local_20;
        }
      }
      local_20 = FGenericPlatformMath::Fmod(dVar5,__real_4076800000000000);
      if (local_20 < 0.0) {
        local_20 = local_20 + __real_4076800000000000;
      }
      dVar5 = local_28;
      if ((char)param_2[8].OperationTypeID.Value != '\0') {
        dVar5 = *(double *)(param_2 + 6);
        *(undefined8 *)(param_2 + 6) = 0;
        *(undefined1 *)&param_2[8].OperationTypeID.Value = 0;
        if (*(char *)((longlong)&param_2[8].OperationTypeID.Value + 1) != '\0') {
          dVar5 = dVar5 + local_28;
        }
      }
      local_28 = UE::Math::TRotator<double>::NormalizeAxis(dVar5);
      plVar1 = *(longlong **)&pUVar4[0x16].field_0x20;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x928))
                  (plVar1,&local_28,*(undefined4 *)((longlong)plVar1 + 0x2814),(int)plVar1[0x503]);
        (**(code **)(*plVar1 + 0x938))
                  (plVar1,&local_28,*(undefined4 *)((longlong)plVar1 + 0x281c),(int)plVar1[0x504]);
        (**(code **)(*plVar1 + 0x930))
                  (plVar1,&local_28,*(undefined4 *)((longlong)plVar1 + 0x2824),(int)plVar1[0x505]);
      }
      (**(code **)(*(longlong *)pUVar4 + 0x7b0))(pUVar4,&local_28);
    }
  }
  return;
}

// OnInitialize @ 14d667fb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FDrivenControlRotationCameraNodeEvaluator::OnInitialize
          (FDrivenControlRotationCameraNodeEvaluator *this,
          FCameraNodeEvaluatorInitializeParams *param_1,FCameraNodeEvaluationResult *param_2)

{
  TMap<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
  *this_00;
  FDrivenControlRotationHelperService *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TSharedRef<UE::Cameras::FDrivenControlRotationHelperService,1> *pTVar5;
  FMonitoredContext *pFVar6;
  UObject *pUVar7;
  undefined8 *puVar8;
  FCameraEvaluationContext *pFVar9;
  TSharedPtr<UE::Cameras::FDrivenControlRotationHelperService,1> *pTVar10;
  longlong lVar11;
  TKeyInitializer<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>_const_&> local_res8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *local_res10;
  UObject *local_res20;
  FName local_98 [2];
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_88;
  FDrivenControlRotationHelperService *local_78;
  FSharedReferencer<1> local_70;
  FString local_68;
  TSharedRef<UE::Cameras::FDrivenControlRotationHelperService,1> local_58;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_48;
  undefined1 local_38 [32];
  
  this->bLastWasActiveCameraRig = true;
  pTVar5 = FCameraSystemEvaluator::
           FindOrRegisterEvaluationService<UE::Cameras::FDrivenControlRotationHelperService>
                     (param_1->Evaluator,&local_58);
  local_70.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
  local_78 = pTVar5->Object;
  if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = &this->HelperService;
  if (pTVar10 != (TSharedPtr<UE::Cameras::FDrivenControlRotationHelperService,1> *)&local_78) {
    pTVar10->Object = local_78;
    local_78 = (FDrivenControlRotationHelperService *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->HelperService).SharedReferenceCount,&local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if ((pTVar10->Object == (FDrivenControlRotationHelperService *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_88.Object = (param_1->EvaluationContext).Object;
  pFVar1 = pTVar10->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &pFVar1->MonitoredContexts;
  local_48.Object = local_88.Object;
  local_48.SharedReferenceCount.ReferenceController =
       local_88.SharedReferenceCount.ReferenceController;
  pFVar6 = TMapBase<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
           ::Find((TMapBase<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
                   *)this_00,&local_48);
  if (pFVar6 == (FMonitoredContext *)0x0) {
    if ((local_88.Object == (FCameraEvaluationContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar7 = FWeakObjectPtr::Get(&((local_88.Object)->WeakPlayerController).WeakPtr);
    if (pUVar7 == (UObject *)0x0) {
      if (2 < (byte)LogCameraSystem._0_1_) {
        pFVar9 = TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>::operator->(&local_88);
        pUVar7 = FWeakObjectPtr::Get(&(pFVar9->WeakOwner).WeakPtr);
        if (pUVar7 == (UObject *)0x0) {
          ::FString::FString(&local_68,L"None");
        }
        else {
          local_98[0].ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
          local_98[0].Number = *(uint *)&pUVar7->field_0x1c;
          ::FName::ToString(local_98,&local_68);
        }
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      local_res10 = &local_88;
      TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
      ::
      Emplace<TKeyInitializer<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>_const_&>_>
                ((TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
                  *)this_00,&local_res8,(bool *)&local_res10);
      lVar11 = (longlong)(int)local_res8.Key * 0x40 + *(longlong *)&this_00->field_0x0;
      local_res20 = pUVar7;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar7);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar11 + 0x10),(FObjectPtr)&local_res20);
      puVar8 = (undefined8 *)(**(code **)(*(longlong *)pUVar7 + 0x7a8))(pUVar7,local_38);
      uVar3 = puVar8[1];
      *(undefined8 *)(lVar11 + 0x18) = *puVar8;
      *(undefined8 *)(lVar11 + 0x20) = uVar3;
      *(undefined8 *)(lVar11 + 0x28) = puVar8[2];
      *(undefined1 *)(lVar11 + 0x30) = 1;
    }
  }
  else {
    pFVar6->MonitoringRequests = pFVar6->MonitoringRequests + '\x01';
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return;
}

// OnRun @ 14d66cc20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDrivenControlRotationCameraNodeEvaluator::OnRun
          (FDrivenControlRotationCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  double dVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDrivenControlRotationHelperService *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [12];
  bool bVar9;
  UObject *pUVar10;
  FMonitoredContext *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  double dVar31;
  undefined4 uVar32;
  double dVar33;
  undefined1 auVar34 [16];
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_98;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  
  if ((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pUVar10 = FWeakObjectPtr::Get(&(((param_1->EvaluationContext).Object)->WeakPlayerController).
                                 WeakPtr);
  if (pUVar10 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar10 + 0x7a8))(pUVar10,&local_70);
    if (param_1->bIsActiveCameraRig == false) {
      if ((this->HelperService).Object == (FDrivenControlRotationHelperService *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pTVar3 = (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
      local_98.Object = (param_1->EvaluationContext).Object;
      pFVar4 = (this->HelperService).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_98.SharedReferenceCount.ReferenceController = pTVar3;
      pFVar11 = TMapBase<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
                ::Find((TMapBase<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
                        *)&pFVar4->MonitoredContexts,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar11 == (FMonitoredContext *)0x0) {
        uVar30 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Yaw,0);
        uVar32 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Yaw >> 0x20);
        dVar33 = UE::Math::TRotator<double>::ZeroRotator.Roll;
        dVar1 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      }
      else {
        dVar1 = (pFVar11->CachedControlRotation).Pitch;
        uVar2 = (pFVar11->CachedControlRotation).Yaw;
        uVar32 = (undefined4)((ulonglong)uVar2 >> 0x20);
        local_78 = (pFVar11->CachedControlRotation).Roll;
        uVar30 = (undefined4)uVar2;
        dVar33 = local_78;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      dVar1 = dVar1 - (this->LastControlRotation).Pitch;
      dVar27 = (double)CONCAT44(uVar32,uVar30) - (this->LastControlRotation).Yaw;
      dVar33 = dVar33 - (this->LastControlRotation).Roll;
      dVar29 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar15._8_4_ = SUB84(dVar27,0);
      auVar15._0_8_ = dVar1;
      auVar15._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      auVar16 = divpd(auVar15,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar16 = roundpd(in_XMM1,auVar16,3);
      auVar23._0_8_ = auVar16._0_8_ * dVar29;
      dVar31 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar23._8_8_ = auVar16._8_8_ * dVar31;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar33;
      auVar16 = divpd(auVar17,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      dVar1 = dVar1 - auVar23._0_8_;
      dVar27 = dVar27 - auVar23._8_8_;
      auVar16 = roundpd(auVar23,auVar16,3);
      dVar7 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      auVar18._8_4_ = SUB84(dVar27,0);
      auVar18._0_8_ = dVar1;
      auVar18._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      dVar22 = auVar18._8_8_ + dVar31;
      dVar33 = dVar33 - auVar16._0_8_ * dVar7;
      dVar28 = 0.0 - auVar16._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      uVar12 = -(ulonglong)(0.0 <= dVar1);
      uVar13 = -(ulonglong)(0.0 <= dVar27);
      auVar24._0_8_ = uVar12 & (ulonglong)dVar1;
      auVar24._8_4_ = (undefined4)(uVar13 & (ulonglong)dVar27);
      auVar24._12_4_ = (undefined4)((uVar13 & (ulonglong)dVar27) >> 0x20);
      auVar25._0_4_ = ~(uint)uVar12 & SUB84(dVar1 + dVar29,0);
      auVar25._4_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)(dVar1 + dVar29) >> 0x20);
      auVar25._8_4_ = ~(uint)uVar13 & SUB84(dVar22,0);
      auVar25._12_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)dVar22 >> 0x20);
      auVar19._8_4_ = SUB84(dVar28,0);
      auVar19._0_8_ = dVar33;
      auVar19._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      dVar1 = auVar19._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar25 = auVar25 | auVar24;
      uVar12 = -(ulonglong)(0.0 <= dVar33);
      uVar13 = -(ulonglong)(0.0 <= dVar28);
      auVar26._0_4_ = ~(uint)uVar12 & SUB84(dVar33 + dVar7,0);
      auVar26._4_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)(dVar33 + dVar7) >> 0x20);
      auVar26._8_4_ = ~(uint)uVar13 & SUB84(dVar1,0);
      auVar26._12_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)dVar1 >> 0x20);
      auVar16._8_4_ = (int)((ulonglong)dVar28 & uVar13);
      auVar16._0_8_ = (ulonglong)dVar33 & uVar12;
      auVar16._12_4_ = (int)(((ulonglong)dVar28 & uVar13) >> 0x20);
      auVar26 = auVar26 | auVar16;
      uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar25._0_8_);
      uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar25._8_8_);
      auVar34._0_8_ = uVar13 & (ulonglong)(auVar25._0_8_ - dVar29);
      uVar12 = uVar14 & (ulonglong)(auVar25._8_8_ - dVar31);
      auVar34._8_4_ = (undefined4)uVar12;
      auVar34._12_4_ = (undefined4)(uVar12 >> 0x20);
      uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar26._0_8_);
      auVar20._0_4_ = ~(uint)uVar13 & auVar25._0_4_;
      auVar20._4_4_ = ~(uint)(uVar13 >> 0x20) & auVar25._4_4_;
      auVar20._8_4_ = ~(uint)uVar14 & auVar25._8_4_;
      auVar20._12_4_ = ~(uint)(uVar14 >> 0x20) & auVar25._12_4_;
      auVar34 = auVar34 | auVar20;
      auVar8._4_8_ = auVar20._8_8_;
      auVar8._0_4_ = auVar34._4_4_;
      auVar21._0_8_ = auVar8._0_8_ << 0x20;
      auVar21._8_4_ = auVar34._8_4_;
      auVar21._12_4_ = auVar34._12_4_;
      local_80 = auVar21._8_8_ + (double)this->_padding_;
      local_88 = auVar34._0_8_ + (double)this->_padding_;
      this->_padding_ = (longlong)local_80;
      this->_padding_ = (longlong)local_88;
      plVar5 = *(longlong **)&pUVar10[0x16].field_0x20;
      if (plVar5 != (longlong *)0x0) {
        local_78 = 0.0;
        (**(code **)(*plVar5 + 0x928))(plVar5,&local_88,*(undefined4 *)((longlong)plVar5 + 0x2814));
        (**(code **)(*plVar5 + 0x938))(plVar5,&local_88,*(undefined4 *)((longlong)plVar5 + 0x281c));
        (**(code **)(*plVar5 + 0x930))(plVar5,&local_88,*(undefined4 *)((longlong)plVar5 + 0x2824));
        this->_padding_ = (longlong)local_80;
        this->_padding_ = (longlong)local_88;
      }
      (this->LastDeltaControlRotation).Pitch = (double)auVar34._0_8_;
      (this->LastDeltaControlRotation).Yaw = (double)auVar34._8_8_;
      (this->LastDeltaControlRotation).Roll =
           (double)(uVar12 & (ulonglong)(auVar26._0_8_ - dVar7) |
                   CONCAT44(~(uint)(uVar12 >> 0x20) & auVar26._4_4_,~(uint)uVar12 & auVar26._0_4_));
    }
    else {
      this->_padding_ = (longlong)dStack_68;
      this->_padding_ = (longlong)local_70;
    }
    (this->LastControlRotation).Pitch = local_70;
    (this->LastControlRotation).Yaw = dStack_68;
    (this->LastControlRotation).Roll = local_60;
  }
  this->bLastWasActiveCameraRig = param_1->bIsActiveCameraRig;
  return;
}

// OnSerialize @ 14d66e560

void __thiscall
UE::Cameras::FDrivenControlRotationCameraNodeEvaluator::OnSerialize
          (FDrivenControlRotationCameraNodeEvaluator *this,
          FCameraNodeEvaluatorSerializeParams *param_1,FArchive *param_2)

{
  UE::Math::operator<<(param_2,&this->LastControlRotation);
  ::operator<<(param_2,&this->bLastWasActiveCameraRig);
  return;
}

// OnTeardown @ 14d66ee90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDrivenControlRotationCameraNodeEvaluator::OnTeardown
          (FDrivenControlRotationCameraNodeEvaluator *this,
          FCameraNodeEvaluatorTeardownParams *param_1)

{
  FDrivenControlRotationHelperService *this_00;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_18;
  
  this_00 = (this->HelperService).Object;
  if (this_00 != (FDrivenControlRotationHelperService *)0x0) {
    local_18.Object = (param_1->EvaluationContext).Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FDrivenControlRotationHelperService::RemoveMonitoredContext(this_00,&local_18);
  }
  return;
}

