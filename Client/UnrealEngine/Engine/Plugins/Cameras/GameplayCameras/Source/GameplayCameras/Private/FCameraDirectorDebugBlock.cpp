// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// GetTypeID @ 14d5abb30

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraDirectorDebugBlock::GetTypeID(FCameraDirectorDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// Initialize @ 14d5ad410

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorDebugBlock::Initialize
          (FCameraDirectorDebugBlock *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  FString *pFVar1;
  double dVar2;
  int iVar3;
  UCameraDirector *pUVar4;
  UCameraAsset *pUVar5;
  FCameraEvaluationContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  FCameraObjectTypeRegistry *this_01;
  uint *puVar21;
  FCameraObjectTypeInfo *pFVar22;
  UObject *this_02;
  FName FVar23;
  TQuat<double> *pTVar24;
  FCameraNodeEvaluationResultDebugBlock *this_03;
  FCameraPoseDebugBlock *pFVar25;
  FVariableTableDebugBlock *pFVar26;
  FContextDataTableDebugBlock *pFVar27;
  FCameraDirectorDebugBlock *this_04;
  FName FVar28;
  ForAnyElementType FVar29;
  atomic<int> *paVar30;
  FScriptContainerElement *pFVar31;
  FScriptContainerElement *pFVar32;
  FName local_d8;
  FString local_d0;
  FString local_c0;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_b0;
  TQuat<double> local_98 [3];
  
  if (param_1->Object == (FCameraEvaluationContext *)0x0) {
    this->bIsValid = false;
  }
  else {
    this_01 = FCameraObjectTypeRegistry::Get();
    if ((param_1->Object == (FCameraEvaluationContext *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    puVar21 = (uint *)(*(code *)**(undefined8 **)param_1->Object)();
    FVar23.ComparisonIndex.Value = 0;
    FVar23.Number = 0;
    FVar28 = FVar23;
    if ((*puVar21 != 0xffffffff) &&
       (pFVar22 = FCameraObjectTypeRegistry::GetTypeInfo(this_01,(FCameraObjectTypeID)*puVar21),
       pFVar22 != (FCameraObjectTypeInfo *)0x0)) {
      FVar28 = pFVar22->TypeName;
    }
    if ((param_1->Object == (FCameraEvaluationContext *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    this_02 = FWeakObjectPtr::Get(&(param_1->Object->WeakOwner).WeakPtr);
    if ((param_1->Object == (FCameraEvaluationContext *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pUVar4 = (param_1->Object->DirectorEvaluator->PrivateCameraDirector).field0_0x0.DebugPtr;
    this->ContextClassName = FVar28;
    if (this_02 == (UObject *)0x0) {
      ::FString::FString(&local_c0,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_02,&local_c0,(UObject *)0x0);
    }
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_c0.Data.ArrayNum != 0) {
      FVar29.Data = local_c0.Data.AllocatorInstance.Data;
    }
    ::FString::operator=(&this->OwnerName,(wchar_t *)FVar29.Data);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    FVar28 = FVar23;
    if (this_02 != (UObject *)0x0) {
      FVar28 = *(FName *)(*(longlong *)&this_02->field_0x10 + 0x18);
    }
    this->OwnerClassName = FVar28;
    if ((param_1->Object == (FCameraEvaluationContext *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pUVar5 = (param_1->Object->CameraAsset).field0_0x0.DebugPtr;
    if (pUVar5 == (UCameraAsset *)0x0) {
      ::FString::FString(&local_d0,L"None");
    }
    else {
      local_d8 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_d8,&local_d0);
    }
    pFVar1 = &this->CameraAssetName;
    if (pFVar1 != &local_d0) {
      pFVar32 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar32 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar32);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
      (this->CameraAssetName).Data.ArrayNum = local_d0.Data.ArrayNum;
      (this->CameraAssetName).Data.ArrayMax = local_d0.Data.ArrayMax;
      local_d0.Data.ArrayNum = 0;
      local_d0.Data.ArrayMax = 0;
      local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (pUVar4 != (UCameraDirector *)0x0) {
      FVar23 = (FName)pUVar4->_padding_;
    }
    this->CameraDirectorClassName = FVar23;
    if ((param_1->Object == (FCameraEvaluationContext *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = param_1->Object;
    fVar9 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar10 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
    dVar15 = (pFVar6->InitialResult).CameraPose.Location.field0_0x0._s_0.X;
    dVar16 = (pFVar6->InitialResult).CameraPose.Location.field0_0x0._s_0.Y;
    dVar2 = (pFVar6->InitialResult).CameraPose.Location.field0_0x0._s_0.Z;
    pTVar24 = UE::Math::TRotator<double>::Quaternion
                        (&(pFVar6->InitialResult).CameraPose.Rotation,local_98);
    dVar17 = pTVar24->Y;
    dVar18 = pTVar24->Z;
    dVar19 = pTVar24->W;
    (this->InitialContextTransform).Rotation.XY.m128d_f64[0] = pTVar24->X;
    (this->InitialContextTransform).Rotation.XY.m128d_f64[1] = dVar17;
    (this->InitialContextTransform).Rotation.ZW.m128d_f64[0] = dVar18;
    (this->InitialContextTransform).Rotation.ZW.m128d_f64[1] = dVar19;
    (this->InitialContextTransform).Translation.XY.m128d_f64[0] = dVar15;
    (this->InitialContextTransform).Translation.XY.m128d_f64[1] = dVar16;
    (this->InitialContextTransform).Translation.ZW.m128d_f64[0] = dVar2;
    (this->InitialContextTransform).Translation.ZW.m128d_f64[1] = 0.0;
    auVar14._8_4_ = SUB84((double)fVar10,0);
    auVar14._0_8_ = (double)fVar9;
    auVar14._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
    *(undefined1 (*) [16])(this->InitialContextTransform).Scale3D.XY.m128d_f64 = auVar14;
    auVar13._8_4_ = SUB84((double)fVar12,0);
    auVar13._0_8_ = (double)fVar11;
    auVar13._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
    *(undefined1 (*) [16])(this->InitialContextTransform).Scale3D.ZW.m128d_f64 = auVar13;
    this->bIsValid = true;
    if ((param_1->Object == (FCameraEvaluationContext *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = param_1->Object;
    this_03 = FCameraDebugBlockBuilder::
              BuildDebugBlock<UE::Cameras::FCameraNodeEvaluationResultDebugBlock>(param_2);
    FCameraNodeEvaluationResultDebugBlock::Initialize(this_03,&pFVar6->InitialResult,param_2);
    FCameraDebugBlock::AddChild((FCameraDebugBlock *)this,(FCameraDebugBlock *)this_03);
    pFVar25 = FCameraNodeEvaluationResultDebugBlock::GetCameraPoseDebugBlock(this_03);
    ::FString::operator=
              (&pFVar25->ShowUnchangedCVarName,
               L"GameplayCameras.Debug.ContextInitialResult.ShowUnchanged");
    pFVar26 = FCameraNodeEvaluationResultDebugBlock::GetVariableTableDebugBlock(this_03);
    ::FString::operator=
              (&pFVar26->ShowVariableIDsCVarName,
               L"GameplayCameras.Debug.ContextInitialResult.ShowVariableIDs");
    pFVar27 = FCameraNodeEvaluationResultDebugBlock::GetContextDataTableDebugBlock(this_03);
    ::FString::operator=
              (&pFVar27->ShowDataIDsCVarName,
               L"GameplayCameras.Debug.ContextInitialResult.ShowDataIDs");
    if ((param_1->Object == (FCameraEvaluationContext *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar3 = (param_1->Object->ChildrenContexts).ArrayNum;
    pFVar32 = (param_1->Object->ChildrenContexts).AllocatorInstance.Data;
    if (iVar3 < 0) {
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar20) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else if (0 < iVar3) {
      FCameraDebugBlockBuilder::StartChildDebugBlock<UE::Cameras::FCameraDirectorTreeDebugBlock>
                (param_2);
      pFVar31 = pFVar32 + (longlong)iVar3 * 0x10;
      for (; pFVar32 != pFVar31; pFVar32 = pFVar32 + 0x10) {
        pTVar7 = *(TReferenceControllerBase<1> **)(pFVar32 + 8);
        pFVar6 = *(FCameraEvaluationContext **)pFVar32;
        if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
          paVar30 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar30 = &pTVar7->SharedReferenceCount;
          LOCK();
          *paVar30 = (atomic<int>)((int)*paVar30 + 1);
          UNLOCK();
        }
        this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
        this_04 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                            (this_00,0xd0,0x10);
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
                  (this_00,(FCameraDebugBlock *)this_04);
        FCameraDebugBlockBuilder::OnStartChildDebugBlock(param_2,(FCameraDebugBlock *)this_04);
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar30 = (atomic<int>)((int)*paVar30 + 1);
          UNLOCK();
        }
        local_b0.Object = pFVar6;
        local_b0.SharedReferenceCount.ReferenceController = pTVar7;
        Initialize(this_04,&local_b0,param_2);
        FCameraDebugBlockBuilder::EndChildDebugBlock(param_2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      }
      FCameraDebugBlockBuilder::EndChildDebugBlock(param_2);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// IsKindOf @ 14d5b4680

bool __thiscall
UE::Cameras::FCameraDirectorDebugBlock::IsKindOf
          (FCameraDirectorDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraDirectorDebugBlock>)param_1->ID != PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5b9c40

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
UE::Cameras::FCameraDirectorDebugBlock::OnDebugDraw
          (FCameraDirectorDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  wchar_t *pwVar1;
  FString local_18;
  
  if (this->bIsValid == false) {
    FCameraDebugRenderer::AddText(param_2,L"{cam_error}Invalid context!{cam_default}\n");
  }
  else {
    ::FName::ToString(&this->CameraDirectorClassName,&local_18);
    FCameraDebugRenderer::AddText(param_2,L"{cam_passive}[%s]{cam_default}");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FCameraDebugRenderer::AddIndent(param_2);
    ::FName::ToString(&this->ContextClassName,&local_18);
    FCameraDebugRenderer::AddText(param_2,L"Context {cam_passive}[%s]{cam_default}\n");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FName::ToString(&this->OwnerClassName,&local_18);
    FCameraDebugRenderer::AddText(param_2,L"Owned by {cam_passive}[%s]{cam_default}\n");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FCameraDebugRenderer::AddIndent(param_2);
    if ((this->OwnerName).Data.ArrayNum == 0) {
      pwVar1 = L"";
    }
    else {
      pwVar1 = (wchar_t *)(this->OwnerName).Data.AllocatorInstance.Data;
    }
    FCameraDebugRenderer::AddText(param_2,pwVar1);
    FCameraDebugRenderer::RemoveIndent(param_2);
    FCameraDebugRenderer::AddText
              (param_2,L"{cam_passive}From camera asset {cam_notice}%s{cam_default}\n");
    FCameraDebugRenderer::RemoveIndent(param_2);
    if ((param_2->bIsExternalRendering != false) &&
       (GGameplayCamerasDebugContextInitialResultShowCoordinateSystem != false)) {
      FCameraDebugRenderer::DrawCoordinateSystem(param_2,&this->InitialContextTransform,0.0);
      return;
    }
  }
  return;
}

// OnSerialize @ 14d5c35c0

void __thiscall
UE::Cameras::FCameraDirectorDebugBlock::OnSerialize
          (FCameraDirectorDebugBlock *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->ContextClassName);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->OwnerClassName);
  ::operator<<(param_1,&this->OwnerName);
  ::operator<<(param_1,&this->CameraAssetName);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->CameraDirectorClassName);
  UE::Math::operator<<(param_1,&this->InitialContextTransform);
  ::operator<<(param_1,&this->bIsValid);
  return;
}

