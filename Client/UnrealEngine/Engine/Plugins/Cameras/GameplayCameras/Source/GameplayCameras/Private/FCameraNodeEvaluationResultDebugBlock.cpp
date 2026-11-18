// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 11

// FCameraNodeEvaluationResultDebugBlock @ 14d58c9a0

FCameraNodeEvaluationResultDebugBlock * __thiscall
UE::Cameras::FCameraNodeEvaluationResultDebugBlock::FCameraNodeEvaluationResultDebugBlock
          (FCameraNodeEvaluationResultDebugBlock *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCameraNodeEvaluationResultDebugBlock_Cameras_UE__6B_;
  return this;
}

// GetCameraPoseDebugBlock @ 14d5a6d80

FCameraPoseDebugBlock * __thiscall
UE::Cameras::FCameraNodeEvaluationResultDebugBlock::GetCameraPoseDebugBlock
          (FCameraNodeEvaluationResultDebugBlock *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FCameraPoseDebugBlock *pFVar5;
  FCameraPoseDebugBlock *pFVar6;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FCameraPoseDebugBlock *)(*pcVar2)();
      return pFVar5;
    }
  }
  else if (0 < iVar1) {
    pFVar5 = *(FCameraPoseDebugBlock **)this->_padding_;
    cVar4 = (**(code **)(pFVar5->_padding_ + 8))(pFVar5,&FCameraPoseDebugBlock::PrivateTypeID);
    pFVar6 = (FCameraPoseDebugBlock *)0x0;
    if (cVar4 != '\0') {
      pFVar6 = pFVar5;
    }
    return pFVar6;
  }
  return (FCameraPoseDebugBlock *)0x0;
}

// GetContextDataTableDebugBlock @ 14d5a7300

FContextDataTableDebugBlock * __thiscall
UE::Cameras::FCameraNodeEvaluationResultDebugBlock::GetContextDataTableDebugBlock
          (FCameraNodeEvaluationResultDebugBlock *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FContextDataTableDebugBlock *pFVar5;
  FContextDataTableDebugBlock *pFVar6;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FContextDataTableDebugBlock *)(*pcVar2)();
      return pFVar5;
    }
  }
  else if (2 < iVar1) {
    pFVar5 = *(FContextDataTableDebugBlock **)(this->_padding_ + 0x10);
    cVar4 = (**(code **)(pFVar5->_padding_ + 8))(pFVar5,&FContextDataTableDebugBlock::PrivateTypeID)
    ;
    pFVar6 = (FContextDataTableDebugBlock *)0x0;
    if (cVar4 != '\0') {
      pFVar6 = pFVar5;
    }
    return pFVar6;
  }
  return (FContextDataTableDebugBlock *)0x0;
}

// GetPostProcessSettingsDebugBlock @ 14d5a8a80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPostProcessSettingsDebugBlock * __thiscall
UE::Cameras::FCameraNodeEvaluationResultDebugBlock::GetPostProcessSettingsDebugBlock
          (FCameraNodeEvaluationResultDebugBlock *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FPostProcessSettingsDebugBlock *pFVar5;
  FPostProcessSettingsDebugBlock *pFVar6;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPostProcessSettingsDebugBlock *)(*pcVar2)();
      return pFVar5;
    }
  }
  else if (3 < iVar1) {
    pFVar5 = *(FPostProcessSettingsDebugBlock **)(this->_padding_ + 0x18);
    cVar4 = (**(code **)(pFVar5->_padding_ + 8))
                      (pFVar5,&FPostProcessSettingsDebugBlock::PrivateTypeID);
    pFVar6 = (FPostProcessSettingsDebugBlock *)0x0;
    if (cVar4 != '\0') {
      pFVar6 = pFVar5;
    }
    return pFVar6;
  }
  return (FPostProcessSettingsDebugBlock *)0x0;
}

// GetTypeID @ 14d5abb70

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraNodeEvaluationResultDebugBlock::GetTypeID
          (FCameraNodeEvaluationResultDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// GetVariableTableDebugBlock @ 14d5ac7d0

FVariableTableDebugBlock * __thiscall
UE::Cameras::FCameraNodeEvaluationResultDebugBlock::GetVariableTableDebugBlock
          (FCameraNodeEvaluationResultDebugBlock *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FVariableTableDebugBlock *pFVar5;
  FVariableTableDebugBlock *pFVar6;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FVariableTableDebugBlock *)(*pcVar2)();
      return pFVar5;
    }
  }
  else if (1 < iVar1) {
    pFVar5 = *(FVariableTableDebugBlock **)(this->_padding_ + 8);
    cVar4 = (**(code **)(pFVar5->_padding_ + 8))(pFVar5,&FVariableTableDebugBlock::PrivateTypeID);
    pFVar6 = (FVariableTableDebugBlock *)0x0;
    if (cVar4 != '\0') {
      pFVar6 = pFVar5;
    }
    return pFVar6;
  }
  return (FVariableTableDebugBlock *)0x0;
}

// Initialize @ 14d5ae250

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluationResultDebugBlock::Initialize
          (FCameraNodeEvaluationResultDebugBlock *this,FCameraNodeEvaluationResult *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  int iVar1;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  code *pcVar2;
  bool bVar3;
  FCameraPoseDebugBlock *pFVar4;
  FVariableTableDebugBlock *pFVar5;
  FContextDataTableDebugBlock *pFVar6;
  FPostProcessSettingsDebugBlock *pFVar7;
  FCameraDebugBlock *pFVar8;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar9;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar10;
  uchar *puVar11;
  FString local_90;
  TRotator<double> local_78;
  TQuat<double> local_58;
  undefined8 local_28;
  
  this->bIsCameraCut = param_1->bIsCameraCut;
  this->bIsValid = param_1->bIsValid;
  pFVar4 = FCameraDebugBlockBuilder::
           BuildDebugBlock<UE::Cameras::FCameraPoseDebugBlock,FCameraPose_const_&>
                     (param_2,&param_1->CameraPose);
  FCameraDebugBlock::AddChild((FCameraDebugBlock *)this,(FCameraDebugBlock *)pFVar4);
  pFVar5 = FCameraDebugBlockBuilder::
           BuildDebugBlock<UE::Cameras::FVariableTableDebugBlock,UE::Cameras::FCameraVariableTable_const_&>
                     (param_2,&param_1->VariableTable);
  FCameraDebugBlock::AddChild((FCameraDebugBlock *)this,(FCameraDebugBlock *)pFVar5);
  pFVar6 = FCameraDebugBlockBuilder::
           BuildDebugBlock<UE::Cameras::FContextDataTableDebugBlock,UE::Cameras::FCameraContextDataTable_const_&>
                     (param_2,&param_1->ContextDataTable);
  FCameraDebugBlock::AddChild((FCameraDebugBlock *)this,(FCameraDebugBlock *)pFVar6);
  pFVar7 = FCameraDebugBlockBuilder::
           BuildDebugBlock<UE::Cameras::FPostProcessSettingsDebugBlock,UE::Cameras::FPostProcessSettingsCollection_const_&>
                     (param_2,&param_1->PostProcessSettings);
  FCameraDebugBlock::AddChild((FCameraDebugBlock *)this,(FCameraDebugBlock *)pFVar7);
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar8 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,200,8);
  (pFVar8->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar8->Attachments).ArrayNum = 0;
  (pFVar8->Attachments).ArrayMax = 0;
  (pFVar8->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar8->Children).ArrayNum = 0;
  (pFVar8->Children).ArrayMax = 0;
  pFVar8->_padding_ = (longlong)&___7FCameraRigJointsDebugBlock_Cameras_UE__6B_;
  pFVar8[4].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].Children.ArrayNum = 0;
  pFVar8[4].Children.ArrayMax = 2;
  FVar9 = (param_1->CameraRigJoints).Joints.AllocatorInstance.SecondaryData;
  iVar1 = (param_1->CameraRigJoints).Joints.ArrayNum;
  if (FVar9 == (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    FVar9 = (ForElementType<UE::Cameras::FCameraRigJoint>)&param_1->CameraRigJoints;
  }
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar10 = (ForElementType<UE::Cameras::FCameraRigJoint>)((longlong)iVar1 * 0x70 + (longlong)FVar9);
  if (FVar9 != FVar10) {
    puVar11 = (uchar *)((longlong)FVar9 + 0x10);
    do {
      local_28 = *(undefined8 *)(puVar11 + 0x30);
      local_58.Z = *(double *)(puVar11 + 0x10);
      local_58.W = *(double *)(puVar11 + 0x18);
      local_58.X = *(double *)puVar11;
      local_58.Y = *(double *)(puVar11 + 8);
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.Data.ArrayNum = 0;
      local_90.Data.ArrayMax = 0;
      UE::Math::TQuat<double>::Rotator(&local_58,&local_78);
      ::FString::operator=(&local_90,L"<Unknown>");
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      FVar9 = (ForElementType<UE::Cameras::FCameraRigJoint>)((longlong)FVar9 + 0x70);
      puVar11 = puVar11 + 0x70;
    } while (FVar9 != FVar10);
  }
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar8);
  FCameraDebugBlock::AddChild((FCameraDebugBlock *)this,pFVar8);
  return;
}

// Initialize @ 14d5ae490

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluationResultDebugBlock::Initialize
          (FCameraNodeEvaluationResultDebugBlock *this,FCameraSystemEvaluationResult *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  FCameraPoseDebugBlock *pFVar1;
  FVariableTableDebugBlock *pFVar2;
  FContextDataTableDebugBlock *pFVar3;
  FPostProcessSettingsDebugBlock *pFVar4;
  
  this->bIsCameraCut = param_1->bIsCameraCut;
  this->bIsValid = param_1->bIsValid;
  pFVar1 = FCameraDebugBlockBuilder::
           BuildDebugBlock<UE::Cameras::FCameraPoseDebugBlock,FCameraPose_const_&>
                     (param_2,&param_1->CameraPose);
  FCameraDebugBlock::AddChild((FCameraDebugBlock *)this,(FCameraDebugBlock *)pFVar1);
  pFVar2 = FCameraDebugBlockBuilder::
           BuildDebugBlock<UE::Cameras::FVariableTableDebugBlock,UE::Cameras::FCameraVariableTable_const_&>
                     (param_2,&param_1->VariableTable);
  FCameraDebugBlock::AddChild((FCameraDebugBlock *)this,(FCameraDebugBlock *)pFVar2);
  pFVar3 = FCameraDebugBlockBuilder::
           BuildDebugBlock<UE::Cameras::FContextDataTableDebugBlock,UE::Cameras::FCameraContextDataTable_const_&>
                     (param_2,&param_1->ContextDataTable);
  FCameraDebugBlock::AddChild((FCameraDebugBlock *)this,(FCameraDebugBlock *)pFVar3);
  pFVar4 = FCameraDebugBlockBuilder::
           BuildDebugBlock<UE::Cameras::FPostProcessSettingsDebugBlock,UE::Cameras::FPostProcessSettingsCollection_const_&>
                     (param_2,&param_1->PostProcessSettings);
  FCameraDebugBlock::AddChild((FCameraDebugBlock *)this,(FCameraDebugBlock *)pFVar4);
  return;
}

// IsKindOf @ 14d5b4700

bool __thiscall
UE::Cameras::FCameraNodeEvaluationResultDebugBlock::IsKindOf
          (FCameraNodeEvaluationResultDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluationResultDebugBlock>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5ba430

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
UE::Cameras::FCameraNodeEvaluationResultDebugBlock::OnDebugDraw
          (FCameraNodeEvaluationResultDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  pwVar5 = L"Valid: {cam_good}YES";
  if (this->bIsValid == false) {
    pwVar5 = L"Valid: {cam_error}NO";
  }
  FCameraDebugRenderer::AddText(param_2,pwVar5);
  if (this->bIsCameraCut != false) {
    FCameraDebugRenderer::AddText(param_2,L"  {cam_warning}IsCameraCut");
  }
  FCameraDebugRenderer::FlushText(param_2);
  iVar4 = param_2->IndentLevel * GGameplayCamerasDebugIndent + GGameplayCamerasDebugLeftMargin;
  (param_2->NextDrawPosition).field0_0x0._s_0.Y =
       (float)param_2->MaxCharHeight + (param_2->NextDrawPosition).field0_0x0._s_0.Y;
  (param_2->NextDrawPosition).field0_0x0._s_0.X = (float)iVar4;
  FCameraDebugRenderer::FlushText(param_2);
  (param_2->DrawColor).field0_0x0._s_0 =
       (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
  puVar1 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (0 < iVar4) {
    FCameraDebugRenderer::AddText(param_2,L"{cam_title}Camera Pose:");
    FCameraDebugRenderer::AddIndent(param_2);
    FCameraDebugRenderer::FlushText(param_2);
    (param_2->DrawColor).field0_0x0._s_0 =
         (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
    FCameraDebugBlock::DebugDraw((FCameraDebugBlock *)*puVar1,param_1,param_2);
    FCameraDebugRenderer::RemoveIndent(param_2);
    if (1 < iVar4) {
      FCameraDebugRenderer::AddText(param_2,L"{cam_title}Variable Table:");
      FCameraDebugRenderer::AddIndent(param_2);
      FCameraDebugRenderer::FlushText(param_2);
      (param_2->DrawColor).field0_0x0._s_0 =
           (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
      FCameraDebugBlock::DebugDraw((FCameraDebugBlock *)puVar1[1],param_1,param_2);
      FCameraDebugRenderer::RemoveIndent(param_2);
      if (2 < iVar4) {
        FCameraDebugRenderer::AddText(param_2,L"{cam_title}Context Data Table:");
        FCameraDebugRenderer::AddIndent(param_2);
        FCameraDebugRenderer::FlushText(param_2);
        (param_2->DrawColor).field0_0x0._s_0 =
             (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
        FCameraDebugBlock::DebugDraw((FCameraDebugBlock *)puVar1[2],param_1,param_2);
        FCameraDebugRenderer::RemoveIndent(param_2);
        if (3 < iVar4) {
          FCameraDebugRenderer::AddText(param_2,L"{cam_title}Post-Process Settings:");
          FCameraDebugRenderer::AddIndent(param_2);
          FCameraDebugRenderer::FlushText(param_2);
          (param_2->DrawColor).field0_0x0._s_0 =
               (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
          FCameraDebugBlock::DebugDraw((FCameraDebugBlock *)puVar1[3],param_1,param_2);
          FCameraDebugRenderer::RemoveIndent(param_2);
          if (4 < iVar4) {
            FCameraDebugRenderer::AddText(param_2,L"{cam_title}Camera Rig Joints:");
            FCameraDebugRenderer::AddIndent(param_2);
            FCameraDebugRenderer::FlushText(param_2);
            (param_2->DrawColor).field0_0x0._s_0 =
                 (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
            FCameraDebugBlock::DebugDraw((FCameraDebugBlock *)puVar1[4],param_1,param_2);
            FCameraDebugRenderer::RemoveIndent(param_2);
          }
        }
      }
    }
  }
  param_2->VisitFlags = param_2->VisitFlags | (SkipChildrenBlocks|SkipAttachedBlocks);
  return;
}

// OnSerialize @ 14d5c3670

void __thiscall
UE::Cameras::FCameraNodeEvaluationResultDebugBlock::OnSerialize
          (FCameraNodeEvaluationResultDebugBlock *this,FArchive *param_1)

{
  ::operator<<(param_1,&this->bIsCameraCut);
  ::operator<<(param_1,&this->bIsValid);
  return;
}

