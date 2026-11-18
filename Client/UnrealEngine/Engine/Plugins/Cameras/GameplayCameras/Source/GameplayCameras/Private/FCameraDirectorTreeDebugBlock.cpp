// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// GetTypeID @ 14d5abb40

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraDirectorTreeDebugBlock::GetTypeID(FCameraDirectorTreeDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// Initialize @ 14d5ad9d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorTreeDebugBlock::Initialize
          (FCameraDirectorTreeDebugBlock *this,FCameraEvaluationContextStack *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  int *piVar1;
  atomic<int> aVar2;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  double dVar15;
  FName FVar16;
  bool bVar17;
  uint uVar18;
  atomic<int> aVar19;
  FCameraDebugBlock *this_00;
  FCameraObjectTypeRegistry *this_01;
  uint *puVar20;
  FCameraObjectTypeInfo *pFVar21;
  UObject *this_02;
  FScriptContainerElement *pFVar22;
  TQuat<double> *pTVar23;
  FCameraNodeEvaluationResultDebugBlock *this_03;
  FCameraPoseDebugBlock *pFVar24;
  FVariableTableDebugBlock *pFVar25;
  FContextDataTableDebugBlock *pFVar26;
  FCameraDirectorDebugBlock *this_04;
  ForAnyElementType FVar27;
  TReferenceControllerBase<1> *pTVar28;
  atomic<int> *paVar29;
  undefined8 *puVar30;
  TReferenceControllerBase<1> *pTVar31;
  undefined8 *puVar32;
  uint local_res20;
  FString local_f8;
  FName local_e8;
  TReferenceControllerBase<1> *local_e0;
  longlong local_d8;
  longlong local_d0;
  FString local_c8;
  FName local_b8;
  FCameraEvaluationContext *local_b0;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_a8;
  TQuat<double> local_98 [3];
  
  local_d0 = (longlong)(param_1->Entries).ArrayNum;
  local_res20 = 0;
  if (0 < local_d0) {
    local_d8 = 0;
    do {
      lVar4 = local_d8;
      pTVar28 = (TReferenceControllerBase<1> *)0x0;
      uVar18 = 0;
      if ((int)local_res20 < (param_1->Entries).ArrayNum) {
        uVar18 = ~local_res20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar22 = (param_1->Entries).AllocatorInstance.Data;
      pTVar31 = *(TReferenceControllerBase<1> **)(pFVar22 + lVar4 + 8);
      local_e0 = pTVar31;
      if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = pTVar31->SharedReferenceCount;
        do {
          local_e0 = pTVar28;
          if (aVar2 == (atomic<int>)0x0) goto LAB_14d5adacb;
          LOCK();
          aVar19 = pTVar31->SharedReferenceCount;
          bVar17 = aVar2 == aVar19;
          if (bVar17) {
            pTVar31->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar19 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar19;
        } while (!bVar17);
        pTVar28 = *(TReferenceControllerBase<1> **)(pFVar22 + lVar4);
        local_e0 = pTVar31;
      }
LAB_14d5adacb:
      pTVar31 = local_e0;
      pTVar3 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
      this_00 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                          (pTVar3,0xd0,0x10);
      this_00[2].Attachments.ArrayNum = 0;
      this_00[2].Attachments.ArrayMax = 0;
      this_00[2].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this_00[2].Children.ArrayNum = 0;
      this_00[2].Children.ArrayMax = 0;
      this_00[3]._padding_ = 0;
      this_00[3].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this_00[3].Attachments.ArrayNum = 0;
      this_00[3].Attachments.ArrayMax = 0;
      this_00[3].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this_00[3].Children.ArrayNum = 0;
      this_00[3].Children.ArrayMax = 0;
      this_00[4]._padding_ = 0;
      this_00[4].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this_00[4].Attachments.ArrayNum = 0;
      this_00[4].Attachments.ArrayMax = 0;
      this_00[4].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this_00[4].Children.ArrayNum = 0;
      this_00[4].Children.ArrayMax = 0;
      this_00[5]._padding_ = 0;
      this_00[1].Children.ArrayNum = 0;
      this_00[1].Children.ArrayMax = 0;
      (this_00->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->Attachments).ArrayNum = 0;
      (this_00->Attachments).ArrayMax = 0;
      (this_00->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->Children).ArrayNum = 0;
      (this_00->Children).ArrayMax = 0;
      this_00[1]._padding_ = 0;
      this_00[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this_00[1].Attachments.ArrayNum = 0;
      this_00[1].Attachments.ArrayMax = 0;
      this_00[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this_00[2]._padding_ = 0;
      this_00[2].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this_00->_padding_ = (longlong)&___7FCameraDirectorDebugBlock_Cameras_UE__6B_;
      piVar1 = &this_00[1].Children.ArrayNum;
      *(double (*) [2])&this_00[2].Attachments.ArrayNum =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *(double (*) [2])&this_00[2].Children.ArrayNum =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      this_00[3].Attachments =
           (TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_>)
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      this_00[3].Children =
           (TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_>)
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      dVar14 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      this_00[4]._padding_ =
           (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      this_00[4].Attachments.AllocatorInstance = (ForAnyElementType)dVar14;
      *(double (*) [2])&this_00[4].Attachments.ArrayNum =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      *(undefined1 *)&this_00[4].Children.ArrayNum = 0;
      TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
                (pTVar3,this_00);
      FCameraDebugBlockBuilder::OnStartChildDebugBlock(param_2,this_00);
      if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar28 == (TReferenceControllerBase<1> *)0x0) {
        *(undefined1 *)&this_00[4].Children.ArrayNum = 0;
      }
      else {
        this_01 = FCameraObjectTypeRegistry::Get();
        puVar20 = (uint *)(**(code **)pTVar28->_padding_)(pTVar28);
        if ((*puVar20 == 0xffffffff) ||
           (pFVar21 = FCameraObjectTypeRegistry::GetTypeInfo(this_01,(FCameraObjectTypeID)*puVar20),
           pFVar21 == (FCameraObjectTypeInfo *)0x0)) {
          local_e8.ComparisonIndex.Value = 0;
          local_e8.Number = 0;
        }
        else {
          local_e8 = pFVar21->TypeName;
        }
        FVar16 = local_e8;
        this_02 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pTVar28 + 2));
        lVar4 = *(longlong *)(pTVar28[0xa6]._padding_ + 0x20);
        this_00[1]._padding_ = (longlong)FVar16;
        if (this_02 == (UObject *)0x0) {
          ::FString::FString(&local_c8,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_02,&local_c8,(UObject *)0x0);
        }
        FVar27.Data = (FScriptContainerElement *)L"";
        if (local_c8.Data.ArrayNum != 0) {
          FVar27.Data = local_c8.Data.AllocatorInstance.Data;
        }
        ::FString::operator=((FString *)&this_00[1].Attachments.ArrayNum,(wchar_t *)FVar27.Data);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (this_02 == (UObject *)0x0) {
          pFVar22 = (FScriptContainerElement *)0x0;
        }
        else {
          pFVar22 = *(FScriptContainerElement **)(*(longlong *)&this_02->field_0x10 + 0x18);
        }
        this_00[1].Attachments.AllocatorInstance.Data = pFVar22;
        if (pTVar28[3]._padding_ == 0) {
          ::FString::FString(&local_f8,L"None");
        }
        else {
          local_b8 = *(FName *)(pTVar28[3]._padding_ + 0x18);
          ::FName::ToString(&local_b8,&local_f8);
        }
        if ((FString *)piVar1 != &local_f8) {
          if (*(void **)piVar1 != (void *)0x0) {
            FMemory::Free(*(void **)piVar1);
          }
          *(FScriptContainerElement **)piVar1 = local_f8.Data.AllocatorInstance.Data;
          *(int *)&this_00[2]._padding_ = local_f8.Data.ArrayNum;
          *(int *)((longlong)&this_00[2]._padding_ + 4) = local_f8.Data.ArrayMax;
          local_f8.Data.ArrayNum = 0;
          local_f8.Data.ArrayMax = 0;
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (lVar4 == 0) {
          pFVar22 = (FScriptContainerElement *)0x0;
        }
        else {
          pFVar22 = *(FScriptContainerElement **)(lVar4 + 0x18);
        }
        this_00[2].Attachments.AllocatorInstance.Data = pFVar22;
        fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
        fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
        fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar9 = GlobalVectorConstants::Float1110.m128_f32[3];
        pFVar12 = (FScriptContainerElement *)pTVar28[4]._padding_;
        aVar2 = pTVar28[4].SharedReferenceCount;
        aVar19 = pTVar28[4].WeakReferenceCount;
        pFVar22 = (FScriptContainerElement *)pTVar28[5]._padding_;
        pTVar23 = UE::Math::TRotator<double>::Quaternion
                            ((TRotator<double> *)&pTVar28[5].SharedReferenceCount,local_98);
        pFVar13 = (FScriptContainerElement *)pTVar23->Y;
        dVar14 = pTVar23->Z;
        dVar15 = pTVar23->W;
        *(double *)&this_00[2].Attachments.ArrayNum = pTVar23->X;
        this_00[2].Children.AllocatorInstance.Data = pFVar13;
        *(double *)&this_00[2].Children.ArrayNum = dVar14;
        this_00[3]._padding_ = (longlong)dVar15;
        this_00[3].Attachments.AllocatorInstance.Data = pFVar12;
        this_00[3].Attachments.ArrayNum = (int)aVar2;
        this_00[3].Attachments.ArrayMax = (int)aVar19;
        this_00[3].Children.AllocatorInstance.Data = pFVar22;
        this_00[3].Children.ArrayNum = 0;
        this_00[3].Children.ArrayMax = 0;
        auVar11._8_4_ = SUB84((double)fVar7,0);
        auVar11._0_8_ = (double)fVar6;
        auVar11._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
        this_00[4]._padding_ = (longlong)(double)fVar6;
        this_00[4].Attachments.AllocatorInstance = (ForAnyElementType)auVar11._8_8_;
        auVar10._8_4_ = SUB84((double)fVar9,0);
        auVar10._0_8_ = (double)fVar8;
        auVar10._12_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
        *(undefined1 (*) [16])&this_00[4].Attachments.ArrayNum = auVar10;
        *(undefined1 *)&this_00[4].Children.ArrayNum = 1;
        this_03 = FCameraDebugBlockBuilder::
                  BuildDebugBlock<UE::Cameras::FCameraNodeEvaluationResultDebugBlock>(param_2);
        FCameraNodeEvaluationResultDebugBlock::Initialize
                  (this_03,(FCameraNodeEvaluationResult *)(pTVar28 + 4),param_2);
        FCameraDebugBlock::AddChild(this_00,(FCameraDebugBlock *)this_03);
        pFVar24 = FCameraNodeEvaluationResultDebugBlock::GetCameraPoseDebugBlock(this_03);
        ::FString::operator=
                  (&pFVar24->ShowUnchangedCVarName,
                   L"GameplayCameras.Debug.ContextInitialResult.ShowUnchanged");
        pFVar25 = FCameraNodeEvaluationResultDebugBlock::GetVariableTableDebugBlock(this_03);
        ::FString::operator=
                  (&pFVar25->ShowVariableIDsCVarName,
                   L"GameplayCameras.Debug.ContextInitialResult.ShowVariableIDs");
        pFVar26 = FCameraNodeEvaluationResultDebugBlock::GetContextDataTableDebugBlock(this_03);
        ::FString::operator=
                  (&pFVar26->ShowDataIDsCVarName,
                   L"GameplayCameras.Debug.ContextInitialResult.ShowDataIDs");
        aVar2 = pTVar28[0xa8].SharedReferenceCount;
        puVar32 = (undefined8 *)pTVar28[0xa8]._padding_;
        if ((int)aVar2 < 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L"");
          if (bVar17) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else if (0 < (int)aVar2) {
          FCameraDebugBlockBuilder::StartChildDebugBlock<UE::Cameras::FCameraDirectorTreeDebugBlock>
                    (param_2);
          puVar30 = puVar32 + (longlong)(int)aVar2 * 2;
          for (; puVar32 != puVar30; puVar32 = puVar32 + 2) {
            pTVar28 = (TReferenceControllerBase<1> *)puVar32[1];
            local_b0 = (FCameraEvaluationContext *)*puVar32;
            if (pTVar28 == (TReferenceControllerBase<1> *)0x0) {
              paVar29 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar29 = &pTVar28->SharedReferenceCount;
              LOCK();
              *paVar29 = (atomic<int>)((int)*paVar29 + 1);
              UNLOCK();
            }
            pTVar3 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
            this_04 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                                (pTVar3,0xd0,0x10);
            (this_04->InitialContextTransform).Rotation.XY.m128d_f64[0] = 0.0;
            (this_04->InitialContextTransform).Rotation.XY.m128d_f64[1] = 0.0;
            (this_04->InitialContextTransform).Rotation.ZW.m128d_f64[0] = 0.0;
            (this_04->InitialContextTransform).Rotation.ZW.m128d_f64[1] = 0.0;
            (this_04->InitialContextTransform).Translation.XY.m128d_f64[0] = 0.0;
            (this_04->InitialContextTransform).Translation.XY.m128d_f64[1] = 0.0;
            (this_04->InitialContextTransform).Translation.ZW.m128d_f64[0] = 0.0;
            (this_04->InitialContextTransform).Translation.ZW.m128d_f64[1] = 0.0;
            (this_04->InitialContextTransform).Scale3D.XY.m128d_f64[0] = 0.0;
            (this_04->InitialContextTransform).Scale3D.XY.m128d_f64[1] = 0.0;
            (this_04->InitialContextTransform).Scale3D.ZW.m128d_f64[0] = 0.0;
            (this_04->InitialContextTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
            *(undefined8 *)&this_04->bIsValid = 0;
            *(undefined8 *)&this_04->field_0xc8 = 0;
            *(undefined ***)this_04 = &___7FCameraDirectorDebugBlock_Cameras_UE__6B_;
            *(undefined8 *)&this_04->field_0x8 = 0;
            *(undefined8 *)&this_04->field_0x10 = 0;
            *(undefined8 *)&this_04->field_0x18 = 0;
            *(undefined8 *)&this_04->field_0x20 = 0;
            (this_04->ContextClassName).ComparisonIndex = 0;
            (this_04->ContextClassName).Number = 0;
            (this_04->OwnerClassName).ComparisonIndex = 0;
            (this_04->OwnerClassName).Number = 0;
            (this_04->OwnerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (this_04->OwnerName).Data.ArrayNum = 0;
            (this_04->OwnerName).Data.ArrayMax = 0;
            (this_04->CameraAssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (this_04->CameraAssetName).Data.ArrayNum = 0;
            (this_04->CameraAssetName).Data.ArrayMax = 0;
            (this_04->CameraDirectorClassName).ComparisonIndex = 0;
            (this_04->CameraDirectorClassName).Number = 0;
            *&(this_04->InitialContextTransform).Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            *&(this_04->InitialContextTransform).Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            *&(this_04->InitialContextTransform).Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            *&(this_04->InitialContextTransform).Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            *&(this_04->InitialContextTransform).Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            *&(this_04->InitialContextTransform).Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            this_04->bIsValid = false;
            TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
                      (pTVar3,(FCameraDebugBlock *)this_04);
            FCameraDebugBlockBuilder::OnStartChildDebugBlock(param_2,(FCameraDebugBlock *)this_04);
            local_a8.Object = local_b0;
            if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar29 = (atomic<int>)((int)*paVar29 + 1);
              UNLOCK();
            }
            local_a8.SharedReferenceCount.ReferenceController = pTVar28;
            FCameraDirectorDebugBlock::Initialize(this_04,&local_a8,param_2);
            FCameraDebugBlockBuilder::EndChildDebugBlock(param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar28);
            pTVar31 = local_e0;
          }
          FCameraDebugBlockBuilder::EndChildDebugBlock(param_2);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
      FCameraDebugBlockBuilder::EndChildDebugBlock(param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
      local_res20 = local_res20 + 1;
      local_d8 = local_d8 + 0x10;
      local_d0 = local_d0 + -1;
    } while (local_d0 != 0);
  }
  return;
}

// Initialize @ 14d5ae0a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorTreeDebugBlock::Initialize
          (FCameraDirectorTreeDebugBlock *this,
          TArrayView<TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>_const_,int> *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FCameraEvaluationContext *pFVar2;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FCameraDirectorDebugBlock *this_01;
  atomic<int> *paVar3;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *pTVar4;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *pTVar5;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_38;
  
  pTVar4 = param_1->DataPtr;
  pTVar5 = pTVar4 + param_1->ArrayNum;
  for (; pTVar4 != pTVar5; pTVar4 = pTVar4 + 1) {
    pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar4->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar3 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar3 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar3 = (atomic<int>)((int)*paVar3 + 1);
      UNLOCK();
    }
    this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
    this_01 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                        (this_00,0xd0,0x10);
    (this_01->InitialContextTransform).Rotation.XY.m128d_f64[0] = 0.0;
    (this_01->InitialContextTransform).Rotation.XY.m128d_f64[1] = 0.0;
    (this_01->InitialContextTransform).Rotation.ZW.m128d_f64[0] = 0.0;
    (this_01->InitialContextTransform).Rotation.ZW.m128d_f64[1] = 0.0;
    (this_01->InitialContextTransform).Translation.XY.m128d_f64[0] = 0.0;
    (this_01->InitialContextTransform).Translation.XY.m128d_f64[1] = 0.0;
    (this_01->InitialContextTransform).Translation.ZW.m128d_f64[0] = 0.0;
    (this_01->InitialContextTransform).Translation.ZW.m128d_f64[1] = 0.0;
    (this_01->InitialContextTransform).Scale3D.XY.m128d_f64[0] = 0.0;
    (this_01->InitialContextTransform).Scale3D.XY.m128d_f64[1] = 0.0;
    (this_01->InitialContextTransform).Scale3D.ZW.m128d_f64[0] = 0.0;
    (this_01->InitialContextTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
    *(undefined8 *)&this_01->bIsValid = 0;
    *(undefined8 *)&this_01->field_0xc8 = 0;
    *(undefined ***)this_01 = &___7FCameraDirectorDebugBlock_Cameras_UE__6B_;
    *(undefined8 *)&this_01->field_0x8 = 0;
    *(undefined8 *)&this_01->field_0x10 = 0;
    *(undefined8 *)&this_01->field_0x18 = 0;
    *(undefined8 *)&this_01->field_0x20 = 0;
    (this_01->ContextClassName).ComparisonIndex = 0;
    (this_01->ContextClassName).Number = 0;
    (this_01->OwnerClassName).ComparisonIndex = 0;
    (this_01->OwnerClassName).Number = 0;
    (this_01->OwnerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->OwnerName).Data.ArrayNum = 0;
    (this_01->OwnerName).Data.ArrayMax = 0;
    (this_01->CameraAssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->CameraAssetName).Data.ArrayNum = 0;
    (this_01->CameraAssetName).Data.ArrayMax = 0;
    (this_01->CameraDirectorClassName).ComparisonIndex = 0;
    (this_01->CameraDirectorClassName).Number = 0;
    *&(this_01->InitialContextTransform).Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(this_01->InitialContextTransform).Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(this_01->InitialContextTransform).Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(this_01->InitialContextTransform).Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(this_01->InitialContextTransform).Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(this_01->InitialContextTransform).Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    this_01->bIsValid = false;
    TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
              (this_00,(FCameraDebugBlock *)this_01);
    FCameraDebugBlockBuilder::OnStartChildDebugBlock(param_2,(FCameraDebugBlock *)this_01);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar3 = (atomic<int>)((int)*paVar3 + 1);
      UNLOCK();
    }
    local_38.Object = pFVar2;
    local_38.SharedReferenceCount.ReferenceController = pTVar1;
    FCameraDirectorDebugBlock::Initialize(this_01,&local_38,param_2);
    FCameraDebugBlockBuilder::EndChildDebugBlock(param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0] =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1] =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0] =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1] =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0] =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1] =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0] =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1] =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0] =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1] =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0] =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1] =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  return;
}

// IsKindOf @ 14d5b46a0

bool __thiscall
UE::Cameras::FCameraDirectorTreeDebugBlock::IsKindOf
          (FCameraDirectorTreeDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraDirectorTreeDebugBlock>)param_1->ID != PrivateTypeID
      ) && ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
            FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5b9dc0

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
UE::Cameras::FCameraDirectorTreeDebugBlock::OnDebugDraw
          (FCameraDirectorTreeDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  FCameraDebugBlock *this_00;
  code *pcVar1;
  ulong64 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  size_t sVar12;
  void *pvVar13;
  int iVar14;
  ForAnyElementType FVar15;
  int iVar16;
  int iVar17;
  ForAnyElementType FVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 *local_res20;
  FLinearColor_u_0 local_128;
  FString local_118;
  FString local_108;
  FLinearColor_u_0 local_f8;
  FLinearColor_u_0 local_e8;
  FString local_d8;
  FLinearColor_u_0 local_c8;
  FString local_b8 [7];
  
  FCameraDebugRenderer::FlushText(param_2);
  (param_2->DrawColor).field0_0x0._s_0 =
       (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Notice.field0_0x0;
  ::FString::FString(&local_118,"Inactive Directors\n");
  FVar15.Data = local_118.Data.AllocatorInstance.Data;
  if (local_118.Data.ArrayNum == 0) {
    FVar18.Data = (FScriptContainerElement *)L"";
  }
  else {
    iVar14 = 0;
    FVar18.Data = local_118.Data.AllocatorInstance.Data;
    if (local_118.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14d5b9e37;
  }
  sVar12 = wcslen((wchar_t *)FVar18.Data);
  iVar14 = (int)sVar12;
LAB_14d5b9e37:
  uVar2 = (longlong)iVar14 * 2;
  if ((ulonglong)(param_2->LineBuilder)._padding_ < (param_2->LineBuilder)._padding_ + uVar2) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)&param_2->LineBuilder,(longlong)iVar14);
    FVar15.Data = local_118.Data.AllocatorInstance.Data;
  }
  if (iVar14 != 0) {
    pvVar13 = FGenericPlatformString::Memcpy
                        ((void *)(param_2->LineBuilder)._padding_,FVar18.Data,uVar2);
    (param_2->LineBuilder)._padding_ = (longlong)((longlong)pvVar13 + uVar2);
    FVar15.Data = local_118.Data.AllocatorInstance.Data;
  }
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  FCameraDebugRenderer::FlushText(param_2);
  (param_2->DrawColor).field0_0x0._s_0 =
       (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
  FCameraDebugRenderer::AddIndent(param_2);
  iVar14 = *(int *)&this->field_0x20;
  local_res20 = *(undefined8 **)&this->field_0x18;
  if ((iVar14 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar3 = __real_3b808081;
  iVar16 = 0;
  if (0 < iVar14) {
    do {
      uVar20 = FLinearColor::sRGBToLinearTable[FColorList::SlateBlue.field0_0x0._s_0.R];
      uVar21 = FLinearColor::sRGBToLinearTable[FColorList::SlateBlue.field0_0x0._s_0.G];
      uVar22 = FLinearColor::sRGBToLinearTable[FColorList::SlateBlue.field0_0x0._s_0.B];
      uVar10 = (uint)FColorList::SlateBlue.field0_0x0._s_0.A;
      if (iVar16 == iVar14 + -1) {
        FCameraDebugRenderer::RemoveIndent(param_2);
        FCameraDebugRenderer::FlushText(param_2);
        (param_2->DrawColor).field0_0x0._s_0 =
             (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Notice.field0_0x0;
        ::FString::FString(&local_108,"Active Director\n");
        FVar15.Data = local_108.Data.AllocatorInstance.Data;
        if (local_108.Data.ArrayNum == 0) {
          FVar18.Data = (FScriptContainerElement *)L"";
LAB_14d5b9fbe:
          sVar12 = wcslen((wchar_t *)FVar18.Data);
          iVar17 = (int)sVar12;
        }
        else {
          iVar17 = 0;
          FVar18.Data = local_108.Data.AllocatorInstance.Data;
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14d5b9fbe;
        }
        uVar2 = (longlong)iVar17 * 2;
        if ((ulonglong)(param_2->LineBuilder)._padding_ < (param_2->LineBuilder)._padding_ + uVar2)
        {
          TStringBuilderBase<wchar_t>::Extend
                    ((TStringBuilderBase<wchar_t> *)&param_2->LineBuilder,(longlong)iVar17);
          FVar15.Data = local_108.Data.AllocatorInstance.Data;
        }
        if (iVar17 != 0) {
          pvVar13 = FGenericPlatformString::Memcpy
                              ((void *)(param_2->LineBuilder)._padding_,FVar18.Data,uVar2);
          (param_2->LineBuilder)._padding_ = (longlong)((longlong)pvVar13 + uVar2);
          FVar15.Data = local_108.Data.AllocatorInstance.Data;
        }
        if (FVar15.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar15.Data);
        }
        FCameraDebugRenderer::FlushText(param_2);
        (param_2->DrawColor).field0_0x0._s_0 =
             (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
        FCameraDebugRenderer::AddIndent(param_2);
        uVar19 = (float)uVar10 * fVar3;
        uVar4 = local_128._s_0.R;
        uVar5 = local_128._s_0.G;
        uVar6 = local_128._s_0.B;
        uVar7 = local_128._s_0.A;
      }
      else {
        uVar20 = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.R];
        uVar21 = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.G];
        uVar22 = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.B];
        local_e8._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::DimGrey.field0_0x0._s_0.R];
        uVar19 = (float)FColorList::LightGrey.field0_0x0._3_1_ * fVar3;
        local_e8._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::DimGrey.field0_0x0._s_0.G];
        local_e8._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::DimGrey.field0_0x0._s_0.B];
        local_e8._s_0.A = (float)FColorList::DimGrey.field0_0x0._3_1_ * fVar3;
        uVar4 = uVar20;
        uVar5 = uVar21;
        uVar6 = uVar22;
        uVar7 = uVar19;
        local_f8._s_0.R = (float)uVar20;
        local_f8._s_0.G = (float)uVar21;
        local_f8._s_0.B = (float)uVar22;
        local_f8._s_0.A = (float)uVar19;
        if (iVar14 != 2) {
          FLinearColor::LerpUsingHSV
                    ((FLinearColor *)&local_128._s_0,(FLinearColor *)&local_e8._s_0,
                     (FLinearColor *)&local_f8._s_0,(float)iVar16 / (float)(iVar14 + -2));
          uVar20 = local_128._s_0.R;
          uVar21 = local_128._s_0.G;
          uVar22 = local_128._s_0.B;
          uVar19 = local_128._s_0.A;
          uVar4 = local_128._s_0.R;
          uVar5 = local_128._s_0.G;
          uVar6 = local_128._s_0.B;
          uVar7 = local_128._s_0.A;
        }
      }
      local_128._s_0.A = (float)uVar7;
      local_128._s_0.B = (float)uVar6;
      local_128._s_0.G = (float)uVar5;
      local_128._s_0.R = (float)uVar4;
      ::FString::PrintfImpl(local_b8,L"%d");
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      iVar17 = FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.ArrayNum + -1;
      if (FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.ArrayNum == 0) {
        iVar17 = 0;
      }
      ::FString::AssignRange
                (&local_d8,
                 (wchar_t *)FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.AllocatorInstance.Data
                 ,iVar17);
      FVar15.Data = local_b8[0].Data.AllocatorInstance.Data;
      iVar17 = (int)local_b8[0].Data._8_8_;
      local_c8 = FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0;
      FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.ArrayNum = iVar17;
      if ((iVar17 == 0) && (FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.ArrayMax == 0)) {
        FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar17,FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.ArrayMax,
                   (ForAnyElementType *)&FCameraPoseDebugBlock::GlobalCameraPoseLabel,iVar17,
                   &FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.ArrayMax);
        if (iVar17 != 0) {
          memcpy(FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.AllocatorInstance.Data,
                 FVar15.Data,(longlong)iVar17 * 2);
        }
      }
      iVar17 = iVar16 + 1;
      FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0._s_0.G = (float)uVar21;
      FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0._s_0.R = (float)uVar20;
      FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0._s_0.B = (float)uVar22;
      FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0._s_0.A = (float)uVar19;
      FCameraDebugRenderer::AddText(param_2,L"{cam_passive}[%d]{cam_default} ");
      if ((iVar16 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FCameraDebugBlock *)*local_res20;
      cVar9 = (**(code **)(this_00->_padding_ + 8))
                        (this_00,&FCameraDirectorDebugBlock::PrivateTypeID);
      if ((cVar9 == '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsKindOf<Type>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Debug\\CameraDebugBlock.h"
                             ,0x46,L""), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FCameraDebugBlock::DebugDraw(this_00,param_1,param_2);
      FCameraDebugRenderer::FlushText(param_2);
      iVar11 = param_2->IndentLevel * GGameplayCamerasDebugIndent + GGameplayCamerasDebugLeftMargin;
      iVar16 = local_d8.Data.ArrayNum + -1;
      if (local_d8.Data.ArrayNum == 0) {
        iVar16 = 0;
      }
      (param_2->NextDrawPosition).field0_0x0._s_0.Y =
           (float)param_2->MaxCharHeight + (param_2->NextDrawPosition).field0_0x0._s_0.Y;
      (param_2->NextDrawPosition).field0_0x0._s_0.X = (float)iVar11;
      ::FString::AssignRange
                (&FCameraPoseDebugBlock::GlobalCameraPoseLabel,
                 (wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar16);
      FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0 =
           (FLinearColor_u_0)(FLinearColor_u_0)local_c8._s_0;
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8[0].Data.AllocatorInstance.Data);
      }
      local_res20 = local_res20 + 1;
      iVar16 = iVar17;
    } while (iVar17 < iVar14);
  }
  FCameraDebugRenderer::RemoveIndent(param_2);
  FCameraDebugRenderer::FlushText(param_2);
  (param_2->DrawColor).field0_0x0._s_0 =
       (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
  param_2->VisitFlags = param_2->VisitFlags | (SkipChildrenBlocks|SkipAttachedBlocks);
  return;
}

