// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 13

// AddCameraShake @ 14d65b760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FShakeEntry * __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::AddCameraShake
          (FCameraShakeServiceCameraNodeEvaluator *this,FStartCameraShakeParams *param_1)

{
  TArray<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::FShakeEntry,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FShakeEntry *pFVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStackY_c68 [32];
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_c18;
  undefined1 local_c08 [16];
  undefined1 local_bf8 [16];
  undefined1 local_be8 [32];
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> local_bc8;
  FBlendCameraNodeEvaluator *local_ba8;
  FShakeCameraNodeEvaluator *pFStack_ba0;
  undefined1 local_b98 [80];
  void *local_b48;
  undefined4 local_b40;
  FCameraNodeEvaluationResult local_b38;
  float local_138;
  undefined8 local_134;
  ECameraShakePlaySpace local_12c;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  bool local_a4;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_c68;
  if (param_1->CameraShake == (UCameraShakeAsset *)0x0) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6255406376684617943>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraShakeService.cpp"
                       ,0xd7,"Params.CameraShake");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FShakeEntry *)(*pcVar6)();
      return pFVar10;
    }
  }
  local_be8._0_4_ = 0xffffffff;
  local_be8._8_8_ = (FCameraEvaluationContext *)0x0;
  local_be8._16_8_ = (TReferenceControllerBase<1> *)0x0;
  local_be8._24_8_ = (UCameraShakeAsset *)0x0;
  local_bc8.Allocations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bc8.Allocations.ArrayNum = 0;
  local_bc8.Allocations.ArrayMax = 0;
  local_bc8.ObjectInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bc8.ObjectInfos.ArrayNum = 0;
  local_bc8.ObjectInfos.ArrayMax = 0;
  local_ba8 = (FBlendCameraNodeEvaluator *)0x0;
  pFStack_ba0 = (FShakeCameraNodeEvaluator *)0x0;
  FCameraNodeEvaluatorHierarchy::FCameraNodeEvaluatorHierarchy
            ((FCameraNodeEvaluatorHierarchy *)local_b98);
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult(&local_b38);
  local_c18.Object = (this->ShakeContext).Object;
  local_128 = UE::Math::TMatrix<double>::Identity.M[0][0];
  dStack_120 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_118 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dStack_110 = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_108 = UE::Math::TMatrix<double>::Identity.M[1][0];
  dStack_100 = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_f8 = UE::Math::TMatrix<double>::Identity.M[1][2];
  dStack_f0 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_c18.SharedReferenceCount.ReferenceController =
       (this->ShakeContext).SharedReferenceCount.ReferenceController;
  local_e8 = UE::Math::TMatrix<double>::Identity.M[2][0];
  dStack_e0 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_d8 = UE::Math::TMatrix<double>::Identity.M[2][2];
  dStack_d0 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_c8 = UE::Math::TMatrix<double>::Identity.M[3][0];
  dStack_c0 = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_b8 = UE::Math::TMatrix<double>::Identity.M[3][2];
  dStack_b0 = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_138 = 0.0;
  local_134._0_4_ = 1.0;
  local_134._4_4_ = None;
  local_12c = CameraLocal;
  local_a8._0_1_ = '\0';
  local_a8._1_1_ = false;
  local_a8._2_1_ = false;
  local_a8._3_1_ = false;
  local_a4 = false;
  if (local_c18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  InitializeEntry(this,(FShakeEntry *)local_be8,param_1->CameraShake,&local_c18);
  local_12c = param_1->PlaySpace;
  local_134._0_4_ = param_1->ShakeScale;
  local_128 = UE::Math::TMatrix<double>::Identity.M[0][0];
  dStack_120 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_118 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dStack_110 = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_108 = UE::Math::TMatrix<double>::Identity.M[1][0];
  dStack_100 = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_f8 = UE::Math::TMatrix<double>::Identity.M[1][2];
  dStack_f0 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_e8 = UE::Math::TMatrix<double>::Identity.M[2][0];
  dStack_e0 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_d8 = UE::Math::TMatrix<double>::Identity.M[2][2];
  dStack_d0 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_c8 = UE::Math::TMatrix<double>::Identity.M[3][0];
  dStack_c0 = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_b8 = UE::Math::TMatrix<double>::Identity.M[3][2];
  dStack_b0 = UE::Math::TMatrix<double>::Identity.M[3][3];
  if (local_12c == UserDefined) {
    dVar11 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
    dVar12 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
    __vdecl_sincos2();
    local_c08._8_4_ = SUB84(dVar12,0);
    local_c08._0_8_ = dVar11;
    local_c08._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    __vdecl_sincos2();
    local_bf8._8_4_ = SUB84(dVar12,0);
    local_bf8._0_8_ = dVar11;
    local_bf8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    local_128 = (double)local_c08._8_8_ * (double)local_c08._0_8_;
    local_118 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    dStack_110 = 0.0;
    dVar14 = dVar11 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    dVar13 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    dStack_120 = (double)local_c08._0_8_ * dVar13;
    dVar12 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
             (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    local_d8 = dVar11 * (double)local_c08._0_8_;
    dStack_f0 = 0.0;
    local_108 = (double)local_c08._8_8_ * dVar12 - dVar11 * dVar13;
    dStack_d0 = 0.0;
    dStack_100 = dVar11 * (double)local_c08._8_8_ +
                 (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * dVar12;
    dVar11 = (double)local_c08._0_8_ * (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    dVar12 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) * dVar13 +
             (double)local_c08._8_8_ * dVar14;
    local_f8 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar11,0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_e8 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar12,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dStack_e0 = (double)local_c08._8_8_ * (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00)
                - dVar13 * dVar14;
    local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dStack_b0 = __real_3ff0000000000000;
  }
  pFVar5 = (this->Entries).AllocatorInstance.Data;
  pTVar1 = &this->Entries;
  if ((pFVar5 <= (FScriptContainerElement *)local_be8) &&
     ((FScriptContainerElement *)local_be8 < pFVar5 + (longlong)(this->Entries).ArrayMax * 0xb50)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FShakeEntry *)(*pcVar6)();
      return pFVar10;
    }
  }
  uVar8 = (this->Entries).ArrayNum;
  piVar2 = &(this->Entries).ArrayMax;
  if (uVar8 == *piVar2) {
    uVar8 = Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xb50,0x10,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Entries).ArrayNum = uVar8 + 1;
  FShakeEntry::FShakeEntry
            ((FShakeEntry *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0xb50),
             (FShakeEntry *)local_be8);
  uVar9 = 0;
  if ((int)uVar8 < (this->Entries).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FShakeEntry *)(*pcVar6)();
      return pFVar10;
    }
  }
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  if (local_b38.CameraPoseLocationTrail.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b38.CameraPoseLocationTrail.AllocatorInstance.Data);
  }
  if (local_b38.PostProcessSettings.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b38.PostProcessSettings.PostProcessSettings.WeightedBlendables.Array.
                  AllocatorInstance.Data);
  }
  if (local_b38.CameraRigJoints.Joints.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    FMemory::Free((void *)local_b38.CameraRigJoints.Joints.AllocatorInstance.SecondaryData);
  }
  FCameraContextDataTable::~FCameraContextDataTable(&local_b38.ContextDataTable);
  FCameraVariableTable::~FCameraVariableTable(&local_b38.VariableTable);
  local_b40 = 0;
  if (local_b48 != (void *)0x0) {
    FMemory::Free(local_b48);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_b98 + 0x10));
  if ((FScriptContainerElement *)local_b98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b98._0_8_);
  }
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
  ~TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>(&local_bc8);
  if ((TReferenceControllerBase<1> *)local_be8._16_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = (atomic<int> *)(local_be8._16_8_ + 0xc);
    aVar4 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)local_be8._16_8_ + 8))(local_be8._16_8_,1);
    }
  }
  return (FShakeEntry *)(pFVar5 + (longlong)(int)uVar8 * 0xb50);
}

// GetTypeID @ 14d661b90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::GetTypeID
          (FCameraShakeServiceCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// InitializeEntry @ 14d6625e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::InitializeEntry
          (FCameraShakeServiceCameraNodeEvaluator *this,FShakeEntry *param_1,
          UCameraShakeAsset *param_2,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  UShakeCameraNode *pUVar4;
  USimpleFixedTimeBlendCameraNode *pUVar5;
  FCameraEvaluationContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  FSharedReferencer<1> FVar10;
  char cVar11;
  bool bVar12;
  FCameraNodeEvaluator *this_00;
  FCameraNodeEvaluator *pFVar13;
  FCameraNodeEvaluator *this_01;
  TObjectPtr<UShakeCameraNode>_u_0 local_128;
  longlong *local_120;
  TObjectPtr<USimpleFixedTimeBlendCameraNode>_u_0 local_118;
  undefined8 local_110;
  FCameraNodeEvaluatorInitializeParams local_108;
  FCameraNodeEvaluatorInitializeParams local_a8;
  undefined8 local_48;
  undefined8 uStack_40;
  FCameraEvaluationContext *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  if ((GC::GIsIncrementalReachabilityPending) &&
     (pUVar4 = (param_2->RootNode).field0_0x0.DebugPtr, pUVar4 != (UShakeCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_128 = (param_2->RootNode).field0_0x0;
  local_120 = &param_2->_padding_;
  this_00 = FCameraNodeEvaluatorStorage::BuildEvaluatorTree
                      (&param_1->EvaluatorStorage,
                       (FCameraNodeEvaluatorTreeBuildParams *)&local_128.ObjectPtr);
  pUVar5 = (param_2->BlendIn).field0_0x0.DebugPtr;
  this_01 = (FCameraNodeEvaluator *)0x0;
  if (pUVar5 != (USimpleFixedTimeBlendCameraNode *)0x0) {
    local_110 = 0;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    local_118 = (param_2->BlendIn).field0_0x0;
    pFVar13 = FCameraNodeEvaluatorStorage::BuildEvaluatorTree
                        (&param_1->EvaluatorStorage,
                         (FCameraNodeEvaluatorTreeBuildParams *)&local_118.ObjectPtr);
    cVar11 = (**(code **)(pFVar13->_padding_ + 8))
                       (pFVar13,&FBlendCameraNodeEvaluator::PrivateTypeID);
    this_01 = (FCameraNodeEvaluator *)0x0;
    if (cVar11 != '\0') {
      this_01 = pFVar13;
    }
  }
  FCameraVariableTable::Initialize
            (&(param_1->Result).VariableTable,
             (FCameraVariableTableAllocationInfo *)&param_2->_padding_);
  FCameraContextDataTable::Initialize
            (&(param_1->Result).ContextDataTable,
             (FCameraContextDataTableAllocationInfo *)&param_2->_padding_);
  if (param_3->Object == (FCameraEvaluationContext *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar6 = param_3->Object;
  FCameraVariableTable::OverrideAll
            (&(param_1->Result).VariableTable,&(pFVar6->InitialResult).VariableTable,true);
  FCameraContextDataTable::OverrideAll
            (&(param_1->Result).ContextDataTable,&(pFVar6->InitialResult).ContextDataTable);
  if (this_01 != (FCameraNodeEvaluator *)0x0) {
    local_108.Evaluator = this->OwningEvaluator;
    local_108.EvaluationContext.Object = param_3->Object;
    local_108.EvaluationContext.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    local_108.LastActiveCameraRigInfo.InstanceID.Value = 0xffffffff;
    local_108.LastActiveCameraRigInfo.InstanceID.Layer = None;
    local_108.LastActiveCameraRigInfo.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
    local_108.LastActiveCameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_108.LastActiveCameraRigInfo.CameraRig.field0_0x0.DebugPtr =
         (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0;
    local_108.LastActiveCameraRigInfo.LastResult = (FCameraNodeEvaluationResult *)0x0;
    local_108.LastActiveCameraRigInfo.RootEvaluator = (FCameraNodeEvaluator *)0x0;
    local_108.Hierarchy = (FCameraNodeEvaluatorHierarchy *)0x0;
    if (local_108.EvaluationContext.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_108.EvaluationContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_108.EvaluationContext.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = 0;
    uStack_40 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_108.Layer = Visual;
    FCameraNodeEvaluator::Initialize(this_01,&local_108,&param_1->Result);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.LastActiveCameraRigInfo.EvaluationContext.SharedReferenceCount.
               ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.EvaluationContext.SharedReferenceCount.ReferenceController);
  }
  if (this_00 != (FCameraNodeEvaluator *)0x0) {
    FCameraNodeEvaluatorInitializeParams::FCameraNodeEvaluatorInitializeParams
              (&local_a8,&param_1->EvaluatorHierarchy);
    FVar10.ReferenceController = local_a8.EvaluationContext.SharedReferenceCount.ReferenceController
    ;
    local_a8.Evaluator = this->OwningEvaluator;
    pFVar6 = param_3->Object;
    pTVar7 = (param_3->SharedReferenceCount).ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = local_a8.EvaluationContext.Object;
    pTStack_30 = local_a8.EvaluationContext.SharedReferenceCount.ReferenceController;
    local_a8.EvaluationContext.Object = pFVar6;
    local_a8.EvaluationContext.SharedReferenceCount.ReferenceController = pTVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar10.ReferenceController);
    local_a8.Layer = Visual;
    FCameraNodeEvaluator::Initialize(this_00,&local_a8,&param_1->Result);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.LastActiveCameraRigInfo.EvaluationContext.SharedReferenceCount.
               ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.EvaluationContext.SharedReferenceCount.ReferenceController);
  }
  uVar3 = this->NextEntryID;
  this->NextEntryID = uVar3 + 1;
  (param_1->EntryID).Value = uVar3;
  (param_1->EvaluationContext).Object = param_3->Object;
  pTVar7 = (param_3->SharedReferenceCount).ReferenceController;
  if (pTVar7 != (param_1->EvaluationContext).WeakReferenceCount.ReferenceController) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (param_1->EvaluationContext).WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar8->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
    }
    (param_1->EvaluationContext).WeakReferenceCount.ReferenceController = pTVar7;
  }
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  (param_1->CameraShake).field0_0x0.DebugPtr = param_2;
  param_1->BlendEvaluator = (FBlendCameraNodeEvaluator *)this_01;
  param_1->bIsFirstFrame = true;
  param_1->BlendStatus = (uint)(this_01 != (FCameraNodeEvaluator *)0x0);
  param_1->bIsBlendFull = this_01 == (FCameraNodeEvaluator *)0x0;
  param_1->bIsBlendFinished = this_01 == (FCameraNodeEvaluator *)0x0;
  if (this_00 != (FCameraNodeEvaluator *)0x0) {
    cVar11 = (**(code **)(this_00->_padding_ + 8))
                       (this_00,&FShakeCameraNodeEvaluator::PrivateTypeID);
    if (cVar11 == '\0') {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsKindOf<Type>()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                          ,0x123,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    param_1->RootEvaluator = (FShakeCameraNodeEvaluator *)this_00;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// InitializeEntryBlendOut @ 14d662940

/* WARNING: Removing unreachable block (ram,0x00014d662a74) */
/* WARNING: Removing unreachable block (ram,0x00014d662a85) */
/* WARNING: Removing unreachable block (ram,0x00014d662a97) */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::InitializeEntryBlendOut
          (FCameraShakeServiceCameraNodeEvaluator *this,FShakeEntry *param_1)

{
  FCameraNodeEvaluatorStorage *this_00;
  USimpleFixedTimeBlendCameraNode *pUVar1;
  FCameraEvaluationContext *pFVar2;
  FBlendCameraNodeEvaluator *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  atomic<int> aVar9;
  FInterruptedBlendCameraNodeEvaluator *this_01;
  FReverseBlendCameraNodeEvaluator *this_02;
  FInterruptedBlendCameraNodeEvaluator *this_03;
  FCameraEvaluationContext *pFVar10;
  FCameraEvaluationContext *pFVar11;
  FCameraNodeEvaluatorBuilder local_res10;
  FCameraNodeEvaluatorBuildParams local_res18;
  FCameraNodeBlendInterruptionParams local_res20;
  FCameraNodeEvaluatorInitializeParams local_88;
  
  pUVar1 = (((param_1->CameraShake).field0_0x0.DebugPtr)->BlendOut).field0_0x0.DebugPtr;
  if (pUVar1 == (USimpleFixedTimeBlendCameraNode *)0x0) {
    param_1->BlendStatus = BlendOut;
    param_1->BlendEvaluator = (FBlendCameraNodeEvaluator *)0x0;
    param_1->bIsBlendFull = true;
    param_1->bIsBlendFinished = true;
    return false;
  }
  if (param_1->BlendStatus != BlendOut) {
    local_res18.Builder = &local_res10;
    this_00 = &param_1->EvaluatorStorage;
    local_res10.Storage = this_00;
    this_01 = (FInterruptedBlendCameraNodeEvaluator *)
              FCameraNodeEvaluatorBuildParams::BuildEvaluator(&local_res18,(UCameraNode *)pUVar1);
    pFVar10 = (FCameraEvaluationContext *)0x0;
    if (this_01 == (FInterruptedBlendCameraNodeEvaluator *)0x0) {
      this_01 = (FInterruptedBlendCameraNodeEvaluator *)0x0;
    }
    else {
      cVar6 = (**(code **)(this_01->_padding_ + 8))
                        (this_01,&FBlendCameraNodeEvaluator::PrivateTypeID);
      if ((cVar6 == '\0') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsKindOf<Type>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                             ,0x123,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    pFVar2 = (FCameraEvaluationContext *)
             (param_1->EvaluationContext).WeakReferenceCount.ReferenceController;
    local_88.Evaluator = this->OwningEvaluator;
    local_88.EvaluationContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_88.LastActiveCameraRigInfo.InstanceID.Value = 0xffffffff;
    local_88.LastActiveCameraRigInfo.InstanceID.Layer = None;
    local_88.LastActiveCameraRigInfo.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
    local_88.LastActiveCameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_88.LastActiveCameraRigInfo.CameraRig.field0_0x0.DebugPtr =
         (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0;
    local_88.LastActiveCameraRigInfo.LastResult = (FCameraNodeEvaluationResult *)0x0;
    local_88.LastActiveCameraRigInfo.RootEvaluator = (FCameraNodeEvaluator *)0x0;
    local_88.Layer = Main;
    local_88.Hierarchy = (FCameraNodeEvaluatorHierarchy *)0x0;
    pFVar11 = pFVar2;
    if (pFVar2 != (FCameraEvaluationContext *)0x0) {
      aVar5 = *(atomic<int> *)&pFVar2->field_0x8;
      do {
        pFVar11 = pFVar10;
        if (aVar5 == (atomic<int>)0x0) goto LAB_14d662a55;
        LOCK();
        aVar9 = *(atomic<int> *)&pFVar2->field_0x8;
        bVar7 = aVar5 == aVar9;
        if (bVar7) {
          *(atomic<int> *)&pFVar2->field_0x8 = (atomic<int>)((int)aVar5 + 1);
          aVar9 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar9;
      } while (!bVar7);
      pFVar10 = (param_1->EvaluationContext).Object;
      pFVar11 = pFVar2;
    }
LAB_14d662a55:
    if (pFVar11 != (FCameraEvaluationContext *)0x0) {
      local_88.EvaluationContext.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pFVar11;
    }
    local_88.EvaluationContext.Object = pFVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_88.Layer = Visual;
    FCameraNodeEvaluator::Initialize((FCameraNodeEvaluator *)this_01,&local_88,&param_1->Result);
    bVar7 = FBlendCameraNodeEvaluator::SetReversed((FBlendCameraNodeEvaluator *)this_01,true);
    if (!bVar7) {
      this_02 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                          ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this_00,0x28,8
                          );
      this_01 = (FInterruptedBlendCameraNodeEvaluator *)
                FReverseBlendCameraNodeEvaluator::FReverseBlendCameraNodeEvaluator
                          (this_02,(FBlendCameraNodeEvaluator *)this_01);
      TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
                ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this_00,
                 (FCameraNodeEvaluator *)this_01);
    }
    if (param_1->BlendStatus == BlendIn) {
      pFVar3 = param_1->BlendEvaluator;
      if (pFVar3 == (FBlendCameraNodeEvaluator *)0x0) {
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6255406376684618189>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraShakeService.cpp"
                           ,0x1cd,"Entry.BlendEvaluator");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
      }
      else {
        local_res20.InterruptedBlend = pFVar3;
        bVar7 = FBlendCameraNodeEvaluator::InitializeFromInterruption
                          ((FBlendCameraNodeEvaluator *)this_01,&local_res20);
        if (!bVar7) {
          this_03 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
                    BuildObjectUninitialized
                              ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this_00,
                               0xa30,0x10);
          this_01 = FInterruptedBlendCameraNodeEvaluator::FInterruptedBlendCameraNodeEvaluator
                              (this_03,(FBlendCameraNodeEvaluator *)this_01,pFVar3);
          TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
                    ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this_00,
                     (FCameraNodeEvaluator *)this_01);
        }
      }
    }
    param_1->BlendEvaluator = (FBlendCameraNodeEvaluator *)this_01;
    param_1->BlendStatus = BlendOut;
    param_1->bIsBlendFull = false;
    param_1->bIsBlendFinished = false;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.LastActiveCameraRigInfo.EvaluationContext.SharedReferenceCount.
               ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.EvaluationContext.SharedReferenceCount.ReferenceController);
  }
  return true;
}

// IsCameraShakePlaying @ 14d662c70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::IsCameraShakePlaying
          (FCameraShakeServiceCameraNodeEvaluator *this,FCameraShakeInstanceID param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->Entries).ArrayNum * 0xb50;
  for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 0xb50) {
    if (*(uint *)pFVar1 == param_1.Value) goto LAB_14d662c98;
  }
  pFVar1 = (FScriptContainerElement *)0x0;
LAB_14d662c98:
  return pFVar1 != (FScriptContainerElement *)0x0;
}

// IsKindOf @ 14d662de0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::IsKindOf
          (FCameraShakeServiceCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnGetChildren @ 14d6671c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::OnGetChildren
          (FCameraShakeServiceCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar6;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_68 [8];
  undefined1 local_60 [40];
  void *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  (__return_storage_ptr__->Storage)._padding_ = 0;
  *(undefined4 *)&(__return_storage_ptr__->Storage)._padding_ = 0;
  (__return_storage_ptr__->Storage).TypeIndex = '\0';
  iVar2 = (this->Entries).ArrayNum;
  pFVar9 = (this->Entries).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar2 * 0xb50;
  do {
    if ((this->Entries).ArrayNum != iVar2) {
      local_68[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::FShakeEntry,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_68);
    }
    if (pFVar9 == pFVar8) {
      return __return_storage_ptr__;
    }
    local_60._0_8_ = *(undefined8 *)(pFVar9 + 0x48);
    if ((__return_storage_ptr__->Storage).TypeIndex != '\x01') {
      local_38 = (void *)0x0;
      local_30._0_1_ = '\0';
      local_30._1_3_ = 0;
      local_2c = 4;
      TVariant<TArrayView<UE::Cameras::FCameraNodeEvaluator_*,int>,TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
      ::
      Set<TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                (&__return_storage_ptr__->Storage,
                 (TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)(local_60 + 8));
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      if ((__return_storage_ptr__->Storage).TypeIndex != '\x01') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)(*pcVar3)();
          return pTVar6;
        }
      }
    }
    pTVar6 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)
             (__return_storage_ptr__->Storage)._padding_;
    pTVar7 = __return_storage_ptr__;
    if (pTVar6 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
      pTVar7 = pTVar6;
    }
    if (pTVar7 <= (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)local_60) {
      lVar10 = (longlong)*(int *)((longlong)&(__return_storage_ptr__->Storage)._padding_ + 4);
      pTVar7 = __return_storage_ptr__;
      if (pTVar6 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
        pTVar7 = pTVar6;
      }
      if (local_60 < &(pTVar7->Storage)._padding_ + lVar10) {
        local_80 = (longlong)(int)(__return_storage_ptr__->Storage)._padding_;
        local_78 = 8;
        local_90 = __return_storage_ptr__;
        if (pTVar6 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
          local_90 = pTVar6;
        }
        local_98 = local_60;
        local_88 = lVar10;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)(*pcVar3)();
          return pTVar6;
        }
      }
    }
    iVar5 = (int)(__return_storage_ptr__->Storage)._padding_;
    piVar1 = (int *)((longlong)&(__return_storage_ptr__->Storage)._padding_ + 4);
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraNodeEvaluator_*>_>
                        (0x808,(ForElementType<UE::Cameras::FCameraNodeEvaluator_*> *)
                               __return_storage_ptr__,piVar1);
    }
    *(int *)&(__return_storage_ptr__->Storage)._padding_ = iVar5 + 1;
    pTVar6 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)
             (__return_storage_ptr__->Storage)._padding_;
    pTVar7 = __return_storage_ptr__;
    if (pTVar6 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
      pTVar7 = pTVar6;
    }
    pFVar9 = pFVar9 + 0xb50;
    (&(pTVar7->Storage)._padding_)[iVar5] = local_60._0_8_;
  } while( true );
}

// OnInitialize @ 14d667ec0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::OnInitialize
          (FCameraShakeServiceCameraNodeEvaluator *this,
          FCameraNodeEvaluatorInitializeParams *param_1,FCameraNodeEvaluationResult *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FCameraEvaluationContext *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FCameraVariableTable *pFVar4;
  
  this->OwningEvaluator = param_1->Evaluator;
  pTVar1 = (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->EvaluationContext).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->ShakeContext).SharedReferenceCount.ReferenceController;
  (this->ShakeContext).Object = pFVar2;
  (this->ShakeContext).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar4 = FRootCameraNodeEvaluator::GetBlendedParameters(this->OwningEvaluator->RootEvaluator);
  this->BlendedParameters = pFVar4;
  return;
}

// OnRun @ 14d66be40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::OnRun
          (FCameraShakeServiceCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraNodeEvaluationResult *pFVar1;
  USimpleFixedTimeBlendCameraNode *pUVar2;
  code *pcVar3;
  double dVar4;
  atomic<int> aVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar9;
  FCameraPoseFlags FVar10;
  undefined3 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  atomic<int> aVar15;
  int iVar16;
  uint uVar17;
  FShakeEntry *pFVar18;
  longlong lVar19;
  TReferenceControllerBase<1> *pTVar20;
  uint *puVar21;
  FCameraEvaluationContext *pFVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_218 [32];
  uint *local_1f8;
  FScriptContainerElement *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  uint local_1c8 [2];
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  FCameraNodeEvaluationResult *local_1b0;
  FCameraNodeEvaluationParams local_1a8;
  FCameraNodeBlendResult local_180;
  FCameraNodeBlendParams local_170;
  FCameraNodeShakeResult local_158;
  FCameraEvaluationContext *local_108;
  TReferenceControllerBase<1> *pTStack_100;
  FCameraNodeShakeParams local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1b8._0_4_ = 0;
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8 = 0;
  local_1c8[0] = 0;
  local_1b0 = param_2;
  if (0 < (this->Entries).ArrayNum) {
    do {
      uVar17 = local_1c8[0];
      iVar16 = (this->Entries).ArrayNum;
      uVar13 = 0;
      if ((int)local_1c8[0] < iVar16) {
        uVar13 = ~local_1c8[0] >> 0x1f;
      }
      iVar14 = (int)local_1b8;
      if (uVar13 == 0) {
        local_1f8 = (uint *)(longlong)(int)local_1c8[0];
        local_1f0 = (FScriptContainerElement *)(longlong)iVar16;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar14 = (int)local_1b8;
      }
      pFVar18 = (FShakeEntry *)
                ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar17 * 0xb50);
      if ((pFVar18->bPersistentRequest == false) && (pFVar18->NumRequests == '\0')) {
        if (local_1c0.Data <= (FScriptContainerElement *)local_1c8) {
          if ((FScriptContainerElement *)local_1c8 < local_1c0.Data + (longlong)local_1b8._4_4_ * 4)
          {
            local_1e0 = (longlong)iVar14;
            local_1d8 = 4;
            local_1f8 = local_1c8;
            local_1f0 = local_1c0.Data;
            local_1e8 = (longlong)local_1b8._4_4_;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar14 = (int)local_1b8;
          }
        }
        if (iVar14 == local_1b8._4_4_) {
          iVar14 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_1c0,(int *)((longlong)&local_1b8 + 4));
        }
        local_1b8 = CONCAT44(local_1b8._4_4_,iVar14 + 1);
        *(uint *)(local_1c0.Data + (longlong)iVar14 * 4) = local_1c8[0];
      }
      else {
        pTVar20 = (pFVar18->EvaluationContext).WeakReferenceCount.ReferenceController;
        pFVar22 = (FCameraEvaluationContext *)0x0;
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          aVar5 = pTVar20->SharedReferenceCount;
          do {
            if (aVar5 == (atomic<int>)0x0) {
              pTVar20 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14d66c014;
            }
            LOCK();
            aVar15 = pTVar20->SharedReferenceCount;
            bVar12 = aVar5 == aVar15;
            if (bVar12) {
              pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
              aVar15 = aVar5;
            }
            UNLOCK();
            aVar5 = aVar15;
          } while (!bVar12);
          pFVar22 = (pFVar18->EvaluationContext).Object;
        }
LAB_14d66c014:
        local_1a8.Evaluator = param_1->Evaluator;
        local_108 = (param_1->EvaluationContext).Object;
        pTStack_100 = (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
        if (pTStack_100 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_100->SharedReferenceCount =
               (atomic<int>)((int)pTStack_100->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1a8.EvaluationType = param_1->EvaluationType;
        local_1a8.DeltaTime = param_1->DeltaTime;
        local_1a8.bIsFirstFrame = param_1->bIsFirstFrame;
        local_1a8.bIsActiveCameraRig = param_1->bIsActiveCameraRig;
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1a8.EvaluationContext.Object = pFVar22;
        local_1a8.EvaluationContext.SharedReferenceCount.ReferenceController = pTVar20;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_100);
        dVar4 = (param_2->CameraPose).Location.field0_0x0._s_0.Y;
        local_1a8.bIsFirstFrame = pFVar18->bIsFirstFrame;
        pFVar1 = &pFVar18->Result;
        (pFVar1->CameraPose).Location.field0_0x0._s_0.X =
             (param_2->CameraPose).Location.field0_0x0._s_0.X;
        (pFVar18->Result).CameraPose.Location.field0_0x0._s_0.Y = dVar4;
        dVar4 = (param_2->CameraPose).Rotation.Pitch;
        (pFVar18->Result).CameraPose.Location.field0_0x0._s_0.Z =
             (param_2->CameraPose).Location.field0_0x0._s_0.Z;
        (pFVar18->Result).CameraPose.Rotation.Pitch = dVar4;
        dVar4 = (param_2->CameraPose).Rotation.Roll;
        (pFVar18->Result).CameraPose.Rotation.Yaw = (param_2->CameraPose).Rotation.Yaw;
        (pFVar18->Result).CameraPose.Rotation.Roll = dVar4;
        fVar24 = (param_2->CameraPose).FieldOfView;
        fVar23 = (param_2->CameraPose).FocalLength;
        (pFVar18->Result).CameraPose.TargetDistance = (param_2->CameraPose).TargetDistance;
        (pFVar18->Result).CameraPose.FieldOfView = fVar24;
        (pFVar18->Result).CameraPose.FocalLength = fVar23;
        fVar24 = (param_2->CameraPose).Aperture;
        fVar23 = (param_2->CameraPose).ShutterSpeed;
        fVar6 = (param_2->CameraPose).FocusDistance;
        (pFVar18->Result).CameraPose.OrthographicWidth = (param_2->CameraPose).OrthographicWidth;
        (pFVar18->Result).CameraPose.Aperture = fVar24;
        (pFVar18->Result).CameraPose.ShutterSpeed = fVar23;
        (pFVar18->Result).CameraPose.FocusDistance = fVar6;
        fVar24 = (param_2->CameraPose).SensorHeight;
        fVar23 = (param_2->CameraPose).SensorHorizontalOffset;
        fVar6 = (param_2->CameraPose).SensorVerticalOffset;
        (pFVar18->Result).CameraPose.SensorWidth = (param_2->CameraPose).SensorWidth;
        (pFVar18->Result).CameraPose.SensorHeight = fVar24;
        (pFVar18->Result).CameraPose.SensorHorizontalOffset = fVar23;
        (pFVar18->Result).CameraPose.SensorVerticalOffset = fVar6;
        fVar24 = (param_2->CameraPose).SqueezeFactor;
        fVar23 = (param_2->CameraPose).Overscan;
        iVar16 = (param_2->CameraPose).DiaphragmBladeCount;
        (pFVar18->Result).CameraPose.ISO = (param_2->CameraPose).ISO;
        (pFVar18->Result).CameraPose.SqueezeFactor = fVar24;
        (pFVar18->Result).CameraPose.Overscan = fVar23;
        (pFVar18->Result).CameraPose.DiaphragmBladeCount = iVar16;
        fVar24 = (param_2->CameraPose).FarClippingPlane;
        fVar23 = (param_2->CameraPose).PhysicalCameraBlendWeight;
        bVar12 = (param_2->CameraPose).EnablePhysicalCamera;
        bVar7 = (param_2->CameraPose).ConstrainAspectRatio;
        bVar8 = (param_2->CameraPose).OverrideAspectRatioAxisConstraint;
        TVar9.Value = (param_2->CameraPose).AspectRatioAxisConstraint.Value;
        (pFVar18->Result).CameraPose.NearClippingPlane = (param_2->CameraPose).NearClippingPlane;
        (pFVar18->Result).CameraPose.FarClippingPlane = fVar24;
        (pFVar18->Result).CameraPose.PhysicalCameraBlendWeight = fVar23;
        (pFVar18->Result).CameraPose.EnablePhysicalCamera = bVar12;
        (pFVar18->Result).CameraPose.ConstrainAspectRatio = bVar7;
        (pFVar18->Result).CameraPose.OverrideAspectRatioAxisConstraint = bVar8;
        (pFVar18->Result).CameraPose.AspectRatioAxisConstraint =
             (TEnumAsByte<EAspectRatioAxisConstraint>)TVar9.Value;
        FVar10 = (param_2->CameraPose).ChangedFlags;
        uVar11 = *(undefined3 *)&(param_2->CameraPose).field_0x85;
        (pFVar18->Result).CameraPose.ProjectionMode =
             (TEnumAsByte<ECameraProjectionMode::Type>)(param_2->CameraPose).ProjectionMode.Value;
        (pFVar18->Result).CameraPose.ChangedFlags = FVar10;
        *(undefined3 *)&(pFVar18->Result).CameraPose.field_0x85 = uVar11;
        FCameraVariableTable::OverrideAll
                  (&(pFVar18->Result).VariableTable,&local_1b0->VariableTable,false);
        FCameraContextDataTable::OverrideAll
                  (&(pFVar18->Result).ContextDataTable,&local_1b0->ContextDataTable);
        FCameraRigJoints::OverrideAll
                  (&(pFVar18->Result).CameraRigJoints,&local_1b0->CameraRigJoints);
        FPostProcessSettingsCollection::OverrideAll
                  (&(pFVar18->Result).PostProcessSettings,&local_1b0->PostProcessSettings);
        if ((pFVar22 == (FCameraEvaluationContext *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((local_1b0->bIsCameraCut == false) && ((pFVar22->InitialResult).bIsCameraCut == false))
        {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        (pFVar18->Result).bIsCameraCut = bVar12;
        (pFVar18->Result).bIsValid = true;
        if (this->BlendedParameters != (FCameraVariableTable *)0x0) {
          FCameraVariableTable::Override
                    (&(pFVar18->Result).VariableTable,this->BlendedParameters,KnownOnly);
        }
        pFVar18->CurrentTime = param_1->DeltaTime + pFVar18->CurrentTime;
        if ((FCameraNodeEvaluator *)pFVar18->BlendEvaluator != (FCameraNodeEvaluator *)0x0) {
          FCameraNodeEvaluator::Run
                    ((FCameraNodeEvaluator *)pFVar18->BlendEvaluator,&local_1a8,pFVar1);
        }
        fVar24 = 0.0;
        if ((FCameraNodeEvaluator *)pFVar18->RootEvaluator != (FCameraNodeEvaluator *)0x0) {
          FCameraNodeEvaluator::Run
                    ((FCameraNodeEvaluator *)pFVar18->RootEvaluator,&local_1a8,pFVar1);
          local_f8.ShakeScale = pFVar18->ShakeScale;
          local_f8.ChildParams = &local_1a8;
          local_f8.UserPlaySpaceMatrix.M[0][2] = (pFVar18->UserPlaySpaceMatrix).M[0][2];
          local_f8.UserPlaySpaceMatrix.M[0][3] = (pFVar18->UserPlaySpaceMatrix).M[0][3];
          local_f8.UserPlaySpaceMatrix.M[0][0] = (pFVar18->UserPlaySpaceMatrix).M[0][0];
          local_f8.UserPlaySpaceMatrix.M[0][1] = (pFVar18->UserPlaySpaceMatrix).M[0][1];
          local_f8.PlaySpace = pFVar18->PlaySpace;
          local_f8.UserPlaySpaceMatrix.M[1][0] = (pFVar18->UserPlaySpaceMatrix).M[1][0];
          local_f8.UserPlaySpaceMatrix.M[1][1] = (pFVar18->UserPlaySpaceMatrix).M[1][1];
          local_f8.UserPlaySpaceMatrix.M[1][2] = (pFVar18->UserPlaySpaceMatrix).M[1][2];
          local_f8.UserPlaySpaceMatrix.M[1][3] = (pFVar18->UserPlaySpaceMatrix).M[1][3];
          local_f8.UserPlaySpaceMatrix.M[2][0] = (pFVar18->UserPlaySpaceMatrix).M[2][0];
          local_f8.UserPlaySpaceMatrix.M[2][1] = (pFVar18->UserPlaySpaceMatrix).M[2][1];
          local_158.ShakeDelta.FieldOfView = 0.0;
          local_f8.UserPlaySpaceMatrix.M[2][2] = (pFVar18->UserPlaySpaceMatrix).M[2][2];
          local_f8.UserPlaySpaceMatrix.M[2][3] = (pFVar18->UserPlaySpaceMatrix).M[2][3];
          local_158.ShakeTimeLeft = 0.0;
          local_f8.UserPlaySpaceMatrix.M[3][0] = (pFVar18->UserPlaySpaceMatrix).M[3][0];
          local_f8.UserPlaySpaceMatrix.M[3][1] = (pFVar18->UserPlaySpaceMatrix).M[3][1];
          local_f8.UserPlaySpaceMatrix.M[3][2] = (pFVar18->UserPlaySpaceMatrix).M[3][2];
          local_f8.UserPlaySpaceMatrix.M[3][3] = (pFVar18->UserPlaySpaceMatrix).M[3][3];
          local_158.ShakeDelta.Location.field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_158.ShakeDelta.Location.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_158.ShakeDelta.Location.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_158.ShakeDelta.Rotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
          local_158.ShakeDelta.Rotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
          local_158.ShakeDelta.Rotation.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
          local_158.ShakenResult = pFVar1;
          FShakeCameraNodeEvaluator::ShakeResult(pFVar18->RootEvaluator,&local_f8,&local_158);
          FCameraNodeShakeResult::ApplyDelta(&local_158,&local_f8);
          fVar24 = local_158.ShakeTimeLeft;
        }
        pFVar18->NumRequests = '\0';
        if (fVar24 == 0.0) {
          if (local_1c0.Data <= (FScriptContainerElement *)local_1c8) {
            if ((FScriptContainerElement *)local_1c8 <
                local_1c0.Data + (longlong)local_1b8._4_4_ * 4) {
              local_1e0 = (longlong)(int)local_1b8;
              local_1d8 = 4;
              local_1f8 = local_1c8;
              local_1f0 = local_1c0.Data;
              local_1e8 = (longlong)local_1b8._4_4_;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar12) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          iVar16 = (int)local_1b8;
          if ((int)local_1b8 == local_1b8._4_4_) {
            iVar16 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_1c0,(int *)((longlong)&local_1b8 + 4));
          }
          local_1b8 = CONCAT44(local_1b8._4_4_,iVar16 + 1);
          *(uint *)(local_1c0.Data + (longlong)iVar16 * 4) = local_1c8[0];
        }
        else {
          if ((((pFVar18->BlendStatus == BlendOut) ||
               (pUVar2 = (((pFVar18->CameraShake).field0_0x0.DebugPtr)->BlendOut).field0_0x0.
                         DebugPtr, pUVar2 == (USimpleFixedTimeBlendCameraNode *)0x0)) ||
              (fVar24 < 0.0)) ||
             ((fVar23 = FFloatCameraParameter::GetValue
                                  (&pUVar2->BlendTime,&(pFVar18->Result).VariableTable),
              fVar23 <= fVar24 || (bVar12 = InitializeEntryBlendOut(this,pFVar18), bVar12)))) {
            param_2 = local_1b0;
            if (pFVar18->BlendEvaluator == (FBlendCameraNodeEvaluator *)0x0) {
              FCameraNodeEvaluationResult::OverrideAll(local_1b0,pFVar1,false);
            }
            else {
              local_180.BlendedResult = local_1b0;
              local_180.bIsBlendFull = false;
              local_180.bIsBlendFinished = false;
              local_170.ChildParams = param_1;
              local_170.ChildResult = pFVar1;
              FBlendCameraNodeEvaluator::BlendResults(pFVar18->BlendEvaluator,&local_170,&local_180)
              ;
              pFVar18->bIsBlendFull = local_180.bIsBlendFull;
              pFVar18->bIsBlendFinished = local_180.bIsBlendFinished;
            }
            if (pFVar18->BlendStatus == BlendIn) {
              if ((pFVar18->bIsBlendFull != false) && (pFVar18->bIsBlendFinished != false)) {
                pFVar18->BlendStatus = None;
              }
            }
            else if (((pFVar18->BlendStatus == BlendOut) && (pFVar18->bIsBlendFull != false)) &&
                    (pFVar18->bIsBlendFinished != false)) {
              if (local_1c0.Data <= (FScriptContainerElement *)local_1c8) {
                if ((FScriptContainerElement *)local_1c8 <
                    local_1c0.Data + (longlong)local_1b8._4_4_ * 4) {
                  local_1e0 = (longlong)(int)local_1b8;
                  local_1d8 = 4;
                  local_1f8 = local_1c8;
                  local_1f0 = local_1c0.Data;
                  local_1e8 = (longlong)local_1b8._4_4_;
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar12) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
              }
              iVar16 = (int)local_1b8;
              if ((int)local_1b8 == local_1b8._4_4_) {
                iVar16 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_1c0,(int *)((longlong)&local_1b8 + 4));
              }
              local_1b8 = CONCAT44(local_1b8._4_4_,iVar16 + 1);
              *(uint *)(local_1c0.Data + (longlong)iVar16 * 4) = local_1c8[0];
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1a8.EvaluationContext.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar20);
            goto LAB_14d66c635;
          }
          if (local_1c0.Data <= (FScriptContainerElement *)local_1c8) {
            if ((FScriptContainerElement *)local_1c8 <
                local_1c0.Data + (longlong)local_1b8._4_4_ * 4) {
              local_1e0 = (longlong)(int)local_1b8;
              local_1d8 = 4;
              local_1f8 = local_1c8;
              local_1f0 = local_1c0.Data;
              local_1e8 = (longlong)local_1b8._4_4_;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar12) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          iVar16 = (int)local_1b8;
          if ((int)local_1b8 == local_1b8._4_4_) {
            iVar16 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_1c0,(int *)((longlong)&local_1b8 + 4));
          }
          local_1b8 = CONCAT44(local_1b8._4_4_,iVar16 + 1);
          *(uint *)(local_1c0.Data + (longlong)iVar16 * 4) = local_1c8[0];
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.EvaluationContext.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20)
        ;
        param_2 = local_1b0;
      }
LAB_14d66c635:
      local_1c8[0] = local_1c8[0] + 1;
    } while ((int)local_1c8[0] < (this->Entries).ArrayNum);
  }
  uVar17 = (int)local_1b8 - 1;
  if (-1 < (int)uVar17) {
    puVar21 = (uint *)(longlong)(int)uVar17;
    lVar19 = (longlong)puVar21 * 4;
    iVar16 = (int)local_1b8;
    while( true ) {
      uVar13 = 0;
      if ((int)uVar17 < iVar16) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_1f0 = (FScriptContainerElement *)(longlong)iVar16;
        local_1f8 = puVar21;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      PopEntry(this,*(int *)(local_1c0.Data + lVar19));
      puVar21 = (uint *)((longlong)puVar21 + -1);
      lVar19 = lVar19 + -4;
      uVar17 = uVar17 - 1;
      if ((int)uVar17 < 0) break;
      iVar16 = (int)local_1b8;
    }
  }
  if (local_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data);
  }
  return;
}

// PopEntry @ 14d66f230

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::PopEntry
          (FCameraShakeServiceCameraNodeEvaluator *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FShakeEntry *this_00;
  
  if ((-1 < param_1) && (param_1 < (this->Entries).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Entries).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = (FShakeEntry *)((this->Entries).AllocatorInstance.Data + (longlong)param_1 * 0xb50);
    FShakeEntry::~FShakeEntry(this_00);
    iVar5 = (this->Entries).ArrayNum + ~param_1;
    if (iVar5 != 0) {
      memmove(this_00,this_00 + 1,(longlong)iVar5 * 0xb50);
    }
    piVar1 = &(this->Entries).ArrayNum;
    *piVar1 = *piVar1 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb50,0x10,&(this->Entries).AllocatorInstance,(this->Entries).ArrayNum,
               &(this->Entries).ArrayMax);
    return;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6255406376684618226>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraShakeService.cpp"
                     ,0x1f2,"Entries.IsValidIndex(EntryIndex)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// RequestCameraShakeThisFrame @ 14d671330

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::RequestCameraShakeThisFrame
          (FCameraShakeServiceCameraNodeEvaluator *this,FStartCameraShakeParams *param_1)

{
  int iVar1;
  FShakeEntry *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 local_res10 [8];
  
  if (param_1->CameraShake != (UCameraShakeAsset *)0x0) {
    pFVar3 = (this->Entries).AllocatorInstance.Data;
    iVar1 = (this->Entries).ArrayNum;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0xb50;
    while( true ) {
      if ((this->Entries).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::FShakeEntry,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar3 == pFVar4) {
        pFVar2 = AddCameraShake(this,param_1);
        if (pFVar2 == (FShakeEntry *)0x0) {
          return;
        }
        pFVar2->NumRequests = '\x01';
        pFVar2->bPersistentRequest = false;
        return;
      }
      if (*(UCameraShakeAsset **)(pFVar3 + 0x18) == (UCameraShakeAsset *)0x0) {
        bVar5 = param_1->CameraShake == (UCameraShakeAsset *)0x0;
      }
      else {
        bVar5 = *(UCameraShakeAsset **)(pFVar3 + 0x18) == param_1->CameraShake;
      }
      if ((bVar5) && (pFVar3[0xb41] == (FScriptContainerElement)0x0)) break;
      pFVar3 = pFVar3 + 0xb50;
    }
    pFVar3[0xb40] = (FScriptContainerElement)((char)pFVar3[0xb40] + '\x01');
  }
  return;
}

// StartCameraShake @ 14d672420

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraShakeInstanceID __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::StartCameraShake
          (FCameraShakeServiceCameraNodeEvaluator *this,FStartCameraShakeParams *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  FShakeEntry *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FStartCameraShakeParams *in_R8;
  bool bVar7;
  undefined1 local_res18 [8];
  FCameraNodeShakeRestartParams local_res20 [8];
  
  if (in_R8->CameraShake != (UCameraShakeAsset *)0x0) {
    if (in_R8->CameraShake->bIsSingleInstance != false) {
      iVar1 = (this->Entries).ArrayNum;
      pFVar5 = (this->Entries).AllocatorInstance.Data;
      pFVar6 = pFVar5 + (longlong)iVar1 * 0xb50;
      while( true ) {
        if ((this->Entries).ArrayNum != iVar1) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::FShakeEntry,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar5 == pFVar6) goto LAB_14d6724dd;
        if (*(UCameraShakeAsset **)(pFVar5 + 0x18) == (UCameraShakeAsset *)0x0) {
          bVar7 = in_R8->CameraShake == (UCameraShakeAsset *)0x0;
        }
        else {
          bVar7 = *(UCameraShakeAsset **)(pFVar5 + 0x18) == in_R8->CameraShake;
        }
        if (bVar7) break;
        pFVar5 = pFVar5 + 0xb50;
      }
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        if (*(FShakeCameraNodeEvaluator **)(pFVar5 + 0x48) != (FShakeCameraNodeEvaluator *)0x0) {
          FShakeCameraNodeEvaluator::RestartShake
                    (*(FShakeCameraNodeEvaluator **)(pFVar5 + 0x48),local_res20);
          *(undefined4 *)&param_1->CameraShake = *(undefined4 *)pFVar5;
          goto LAB_14d672510;
        }
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6255406376684617856>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraShakeService.cpp"
                           ,0x80,"ExistingEntry->RootEvaluator");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          uVar3 = (*pcVar2)();
          return (FCameraShakeInstanceID)uVar3;
        }
      }
    }
LAB_14d6724dd:
    pFVar4 = AddCameraShake(this,in_R8);
    if (pFVar4 != (FShakeEntry *)0x0) {
      pFVar4->bPersistentRequest = true;
      *(uint *)&param_1->CameraShake = (pFVar4->EntryID).Value;
      goto LAB_14d672510;
    }
  }
  *(undefined4 *)&param_1->CameraShake = 0xffffffff;
LAB_14d672510:
  return (FCameraShakeInstanceID)(uint)param_1;
}

// StopCameraShake @ 14d673620

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::StopCameraShake
          (FCameraShakeServiceCameraNodeEvaluator *this,FCameraShakeInstanceID param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  iVar1 = (this->Entries).ArrayNum;
  pFVar8 = pFVar2;
  while( true ) {
    if (pFVar8 == pFVar2 + (longlong)iVar1 * 0xb50) {
      return false;
    }
    if (*(uint *)pFVar8 == param_1.Value) break;
    pFVar8 = pFVar8 + 0xb50;
  }
  uVar4 = (uint)(((longlong)pFVar8 - (longlong)pFVar2) / 0xb50);
  if (uVar4 == 0xffffffff) {
    return false;
  }
  if (!param_2) {
    uVar7 = 0;
    if ((int)uVar4 < iVar1) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    bVar5 = InitializeEntryBlendOut
                      (this,(FShakeEntry *)
                            ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar4 * 0xb50))
    ;
    if (bVar5) {
      return true;
    }
  }
  PopEntry(this,uVar4);
  return true;
}

