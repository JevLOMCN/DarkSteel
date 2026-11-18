// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 22

// StartChildDebugBlock<UE::Cameras::FCameraDebugBlock> @ 14d542320

FCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockBuilder::StartChildDebugBlock<UE::Cameras::FCameraDebugBlock>
          (FCameraDebugBlockBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FCameraDebugBlock *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x28,8);
  pFVar1->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  (pFVar1->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Attachments).ArrayNum = 0;
  (pFVar1->Attachments).ArrayMax = 0;
  (pFVar1->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Children).ArrayNum = 0;
  (pFVar1->Children).ArrayMax = 0;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar1);
  OnStartChildDebugBlock(this,pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FCameraNodeEvaluationResultDebugBlock> @ 14d57ba00

FCameraNodeEvaluationResultDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockBuilder::
BuildDebugBlock<UE::Cameras::FCameraNodeEvaluationResultDebugBlock>(FCameraDebugBlockBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FCameraNodeEvaluationResultDebugBlock *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x30,8);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FCameraNodeEvaluationResultDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            (this_00,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FCameraPoseDebugBlock,FCameraPose_const_&> @ 14d57ba60

FCameraPoseDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockBuilder::
BuildDebugBlock<UE::Cameras::FCameraPoseDebugBlock,FCameraPose_const_&>
          (FCameraDebugBlockBuilder *this,FCameraPose *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar9;
  FCameraPoseDebugBlock *pFVar10;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this->Storage;
  pFVar10 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                      (this_00,200,8);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar10->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar10->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar10->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar10->_padding_ = 0;
  pFVar10->_padding_ = (longlong)&___7FCameraPoseDebugBlock_Cameras_UE__6B_;
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  (pFVar10->CameraPose).Location.field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (pFVar10->CameraPose).Location.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).Pitch;
  (pFVar10->CameraPose).Location.field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  (pFVar10->CameraPose).Rotation.Pitch = dVar1;
  dVar1 = (param_1->Rotation).Roll;
  (pFVar10->CameraPose).Rotation.Yaw = (param_1->Rotation).Yaw;
  (pFVar10->CameraPose).Rotation.Roll = dVar1;
  fVar2 = param_1->FieldOfView;
  fVar3 = param_1->FocalLength;
  (pFVar10->CameraPose).TargetDistance = param_1->TargetDistance;
  (pFVar10->CameraPose).FieldOfView = fVar2;
  (pFVar10->CameraPose).FocalLength = fVar3;
  fVar2 = param_1->Aperture;
  fVar3 = param_1->ShutterSpeed;
  fVar4 = param_1->FocusDistance;
  (pFVar10->CameraPose).OrthographicWidth = param_1->OrthographicWidth;
  (pFVar10->CameraPose).Aperture = fVar2;
  (pFVar10->CameraPose).ShutterSpeed = fVar3;
  (pFVar10->CameraPose).FocusDistance = fVar4;
  fVar2 = param_1->SensorHeight;
  fVar3 = param_1->SensorHorizontalOffset;
  fVar4 = param_1->SensorVerticalOffset;
  (pFVar10->CameraPose).SensorWidth = param_1->SensorWidth;
  (pFVar10->CameraPose).SensorHeight = fVar2;
  (pFVar10->CameraPose).SensorHorizontalOffset = fVar3;
  (pFVar10->CameraPose).SensorVerticalOffset = fVar4;
  fVar2 = param_1->SqueezeFactor;
  fVar3 = param_1->Overscan;
  iVar5 = param_1->DiaphragmBladeCount;
  (pFVar10->CameraPose).ISO = param_1->ISO;
  (pFVar10->CameraPose).SqueezeFactor = fVar2;
  (pFVar10->CameraPose).Overscan = fVar3;
  (pFVar10->CameraPose).DiaphragmBladeCount = iVar5;
  fVar2 = param_1->FarClippingPlane;
  fVar3 = param_1->PhysicalCameraBlendWeight;
  bVar6 = param_1->EnablePhysicalCamera;
  bVar7 = param_1->ConstrainAspectRatio;
  bVar8 = param_1->OverrideAspectRatioAxisConstraint;
  TVar9.Value = (param_1->AspectRatioAxisConstraint).Value;
  (pFVar10->CameraPose).NearClippingPlane = param_1->NearClippingPlane;
  (pFVar10->CameraPose).FarClippingPlane = fVar2;
  (pFVar10->CameraPose).PhysicalCameraBlendWeight = fVar3;
  (pFVar10->CameraPose).EnablePhysicalCamera = bVar6;
  (pFVar10->CameraPose).ConstrainAspectRatio = bVar7;
  (pFVar10->CameraPose).OverrideAspectRatioAxisConstraint = bVar8;
  (pFVar10->CameraPose).AspectRatioAxisConstraint =
       (TEnumAsByte<EAspectRatioAxisConstraint>)TVar9.Value;
  *(undefined8 *)&(pFVar10->CameraPose).ProjectionMode.Value =
       *(undefined8 *)&param_1->ProjectionMode;
  (pFVar10->ShowUnchangedCVarName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar10->ShowUnchangedCVarName).Data.ArrayNum = 0;
  (pFVar10->ShowUnchangedCVarName).Data.ArrayMax = 0;
  pFVar10->bDrawText = true;
  pFVar10->bDrawInExternalRendering = true;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            (this_00,(FCameraDebugBlock *)pFVar10);
  return pFVar10;
}

// BuildDebugBlock<UE::Cameras::FContextDataTableDebugBlock,UE::Cameras::FCameraContextDataTable_const_&> @ 14d57beb0

FContextDataTableDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockBuilder::
BuildDebugBlock<UE::Cameras::FContextDataTableDebugBlock,UE::Cameras::FCameraContextDataTable_const_&>
          (FCameraDebugBlockBuilder *this,FCameraContextDataTable *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FContextDataTableDebugBlock *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                      (this_00,0x48,8);
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  (this_01->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->Entries).ArrayNum = 0;
  (this_01->Entries).ArrayMax = 0;
  (this_01->ShowDataIDsCVarName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->ShowDataIDsCVarName).Data.ArrayNum = 0;
  (this_01->ShowDataIDsCVarName).Data.ArrayMax = 0;
  this_01->_padding_ = (longlong)&___7FContextDataTableDebugBlock_Cameras_UE__6B_;
  FContextDataTableDebugBlock::Initialize(this_01,param_1);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            (this_00,(FCameraDebugBlock *)this_01);
  return this_01;
}

// BuildDebugBlock<UE::Cameras::FPostProcessSettingsDebugBlock,UE::Cameras::FPostProcessSettingsCollection_const_&> @ 14d57c040

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPostProcessSettingsDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockBuilder::
BuildDebugBlock<UE::Cameras::FPostProcessSettingsDebugBlock,UE::Cameras::FPostProcessSettingsCollection_const_&>
          (FCameraDebugBlockBuilder *this,FPostProcessSettingsCollection *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FPostProcessSettingsDebugBlock *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x7a0,0x10);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FPostProcessSettingsDebugBlock_Cameras_UE__6B_;
  FPostProcessSettings::FPostProcessSettings
            (&(pFVar1->PostProcessSettings).PostProcessSettings,&param_1->PostProcessSettings);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            (this_00,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FVariableTableDebugBlock,UE::Cameras::FCameraVariableTable_const_&> @ 14d57c1b0

FVariableTableDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockBuilder::
BuildDebugBlock<UE::Cameras::FVariableTableDebugBlock,UE::Cameras::FCameraVariableTable_const_&>
          (FCameraDebugBlockBuilder *this,FCameraVariableTable *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FVariableTableDebugBlock *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                      (this_00,0x48,8);
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  (this_01->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->Entries).ArrayNum = 0;
  (this_01->Entries).ArrayMax = 0;
  (this_01->ShowVariableIDsCVarName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->ShowVariableIDsCVarName).Data.ArrayNum = 0;
  (this_01->ShowVariableIDsCVarName).Data.ArrayMax = 0;
  this_01->_padding_ = (longlong)&___7FVariableTableDebugBlock_Cameras_UE__6B_;
  FVariableTableDebugBlock::Initialize(this_01,param_1);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            (this_00,(FCameraDebugBlock *)this_01);
  return this_01;
}

// StartChildDebugBlock<UE::Cameras::FCameraDirectorTreeDebugBlock> @ 14d58ab30

FCameraDirectorTreeDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockBuilder::
StartChildDebugBlock<UE::Cameras::FCameraDirectorTreeDebugBlock>(FCameraDebugBlockBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FCameraDebugBlock *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x28,8);
  (pFVar1->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Attachments).ArrayNum = 0;
  (pFVar1->Attachments).ArrayMax = 0;
  (pFVar1->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Children).ArrayNum = 0;
  (pFVar1->Children).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FCameraDirectorTreeDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar1);
  OnStartChildDebugBlock(this,pFVar1);
  return (FCameraDirectorTreeDebugBlock *)pFVar1;
}

// StartChildDebugBlock<UE::Cameras::FCategoryTitleDebugBlock> @ 14d58abb0

FCategoryTitleDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockBuilder::StartChildDebugBlock<UE::Cameras::FCategoryTitleDebugBlock>
          (FCameraDebugBlockBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FCategoryTitleDebugBlock *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x50,8);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (pFVar1->Category).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Category).Data.ArrayNum = 0;
  (pFVar1->Category).Data.ArrayMax = 0;
  (pFVar1->Title).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Title).Data.ArrayNum = 0;
  (pFVar1->Title).Data.ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FCategoryTitleDebugBlock_Cameras_UE__6B_;
  pFVar1->bSkipAttachedBlocksIfInactive = true;
  pFVar1->bSkipChildrenBlocksIfInactive = true;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            (this_00,(FCameraDebugBlock *)pFVar1);
  OnStartChildDebugBlock(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// FCameraDebugBlockBuilder @ 14d58c1b0

FCameraDebugBlockBuilder * __thiscall
UE::Cameras::FCameraDebugBlockBuilder::FCameraDebugBlockBuilder
          (FCameraDebugBlockBuilder *this,FCameraDebugBlockStorage *param_1,
          FRootCameraDebugBlock *param_2)

{
  int *piVar1;
  int iVar2;
  
  this->RootBlock = param_2;
  this->Storage = param_1;
  (this->CurrentHierarchy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CurrentHierarchy).ArrayMax;
  (this->CurrentHierarchy).ArrayNum = 0;
  this->VisitFlags = None;
  this->HierarchyOverrideStart = -1;
  *piVar1 = 0;
  iVar2 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&(this->CurrentHierarchy).AllocatorInstance,piVar1);
  (this->CurrentHierarchy).ArrayNum = iVar2 + 1;
  *(FRootCameraDebugBlock **)((this->CurrentHierarchy).AllocatorInstance.Data + (longlong)iVar2 * 8)
       = param_2;
  return this;
}

// EndChildDebugBlock @ 14d5a2e90

void __thiscall
UE::Cameras::FCameraDebugBlockBuilder::EndChildDebugBlock(FCameraDebugBlockBuilder *this)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 local_res8 [32];
  
  if ((this->CurrentHierarchy).ArrayNum < 1) {
    local_res8[0] = 0;
    bVar5 = `UE::Cameras::FCameraDebugBlockBuilder::EndChildDebugBlock'::__l3::<lambda_1>::
            operator()(local_res8);
    if (!bVar5) {
      return;
    }
  }
  if (((this->CurrentHierarchy).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = (this->CurrentHierarchy).ArrayNum;
  uVar1 = iVar3 - 1;
  _Dst = (this->CurrentHierarchy).AllocatorInstance.Data + (longlong)(int)uVar1 * 8;
  iVar3 = ~uVar1 + iVar3;
  if (iVar3 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar3 << 3);
  }
  piVar2 = &(this->CurrentHierarchy).ArrayNum;
  *piVar2 = *piVar2 + -1;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(this->CurrentHierarchy).AllocatorInstance,(this->CurrentHierarchy).ArrayNum,
             &(this->CurrentHierarchy).ArrayMax);
  return;
}

// EndParentDebugBlockOverride @ 14d5a2f70

void __thiscall
UE::Cameras::FCameraDebugBlockBuilder::EndParentDebugBlockOverride(FCameraDebugBlockBuilder *this)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (this->HierarchyOverrideStart == -1) {
    local_res8[0] = 0;
    bVar5 = `UE::Cameras::FCameraDebugBlockBuilder::EndParentDebugBlockOverride'::__l3::<lambda_1>::
            operator()(local_res8);
    if (!bVar5) {
      return;
    }
  }
  if (this->HierarchyOverrideStart != (this->CurrentHierarchy).ArrayNum + -1) {
    local_res10[0] = 0;
    `UE::Cameras::FCameraDebugBlockBuilder::EndParentDebugBlockOverride'::__l5::<lambda_2>::
    operator()(local_res10);
  }
  if (this->HierarchyOverrideStart < (this->CurrentHierarchy).ArrayNum) {
    do {
      if (((this->CurrentHierarchy).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar3 = (this->CurrentHierarchy).ArrayNum;
      uVar1 = iVar3 - 1;
      _Dst = (this->CurrentHierarchy).AllocatorInstance.Data + (longlong)(int)uVar1 * 8;
      iVar3 = ~uVar1 + iVar3;
      if (iVar3 != 0) {
        memmove(_Dst,_Dst + 8,(longlong)iVar3 << 3);
      }
      piVar2 = &(this->CurrentHierarchy).ArrayNum;
      *piVar2 = *piVar2 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->CurrentHierarchy).AllocatorInstance,(this->CurrentHierarchy).ArrayNum,
                 &(this->CurrentHierarchy).ArrayMax);
    } while (this->HierarchyOverrideStart < (this->CurrentHierarchy).ArrayNum);
  }
  this->HierarchyOverrideStart = -1;
  return;
}

// OnAttachDebugBlock @ 14d5b7bc0

void __thiscall
UE::Cameras::FCameraDebugBlockBuilder::OnAttachDebugBlock
          (FCameraDebugBlockBuilder *this,FCameraDebugBlock *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  if ((this->CurrentHierarchy).ArrayNum < 1) {
    local_res8[0] = 0;
    bVar3 = `UE::Cameras::FCameraDebugBlockBuilder::OnAttachDebugBlock'::__l3::<lambda_1>::
            operator()(local_res8);
    if (!bVar3) {
      return;
    }
  }
  iVar1 = (this->CurrentHierarchy).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FCameraDebugBlock::Attach
            (*(FCameraDebugBlock **)
              ((this->CurrentHierarchy).AllocatorInstance.Data +
              (longlong)(this->CurrentHierarchy).ArrayNum * 8 + -8),param_1);
  return;
}

// OnStartChildDebugBlock @ 14d5c39b0

void __thiscall
UE::Cameras::FCameraDebugBlockBuilder::OnStartChildDebugBlock
          (FCameraDebugBlockBuilder *this,FCameraDebugBlock *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 local_res8 [8];
  FCameraDebugBlock *local_res10 [3];
  
  local_res10[0] = param_1;
  if ((this->CurrentHierarchy).ArrayNum < 1) {
    local_res8[0] = 0;
    bVar4 = `UE::Cameras::FCameraDebugBlockBuilder::OnStartChildDebugBlock'::__l3::<lambda_1>::
            operator()(local_res8);
    if (!bVar4) goto LAB_14d5c3a44;
  }
  iVar6 = (this->CurrentHierarchy).ArrayNum;
  uVar7 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar6) {
    uVar5 = ~uVar7 >> 0x1f;
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
  FCameraDebugBlock::AddChild
            (*(FCameraDebugBlock **)
              ((this->CurrentHierarchy).AllocatorInstance.Data +
              (longlong)(this->CurrentHierarchy).ArrayNum * 8 + -8),local_res10[0]);
LAB_14d5c3a44:
  pTVar8 = &this->CurrentHierarchy;
  pFVar2 = (pTVar8->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 <
       pFVar2 + (longlong)(this->CurrentHierarchy).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->CurrentHierarchy).ArrayNum;
  piVar1 = &(this->CurrentHierarchy).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar8->AllocatorInstance,piVar1);
    (this->CurrentHierarchy).ArrayNum = iVar6;
  }
  (this->CurrentHierarchy).ArrayNum = iVar6 + 1;
  *(FCameraDebugBlock **)((pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10[0];
  return;
}

// ResetVisitFlags @ 14d5cc130

void __thiscall
UE::Cameras::FCameraDebugBlockBuilder::ResetVisitFlags(FCameraDebugBlockBuilder *this)

{
  this->VisitFlags = None;
  return;
}

// SkipChildren @ 14d5cff90

void __thiscall UE::Cameras::FCameraDebugBlockBuilder::SkipChildren(FCameraDebugBlockBuilder *this)

{
  this->VisitFlags = this->VisitFlags | SkipChildren;
  return;
}

// StartParentDebugBlockOverride @ 14d5cffb0

void __thiscall
UE::Cameras::FCameraDebugBlockBuilder::StartParentDebugBlockOverride
          (FCameraDebugBlockBuilder *this,FCameraDebugBlock *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FCameraDebugBlock *local_18 [2];
  
  if (this->HierarchyOverrideStart != -1) {
    local_res8[0] = 0;
    bVar4 = `UE::Cameras::FCameraDebugBlockBuilder::StartParentDebugBlockOverride'::__l3::<lambda_1>
            ::operator()(local_res8);
    if (!bVar4) {
      return;
    }
  }
  this->HierarchyOverrideStart = (this->CurrentHierarchy).ArrayNum;
  pFVar2 = (this->CurrentHierarchy).AllocatorInstance.Data;
  local_18[0] = param_1;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->CurrentHierarchy).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->CurrentHierarchy).ArrayNum;
  piVar1 = &(this->CurrentHierarchy).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->CurrentHierarchy).AllocatorInstance,piVar1);
  }
  (this->CurrentHierarchy).ArrayNum = iVar5 + 1;
  *(FCameraDebugBlock **)((this->CurrentHierarchy).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_18[0];
  return;
}

// operator() @ 1505823f0

bool __thiscall
`UE::Cameras::FCameraDebugBlockBuilder::EndChildDebugBlock'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8161638718076092376>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8161638718076092376>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150582430

bool __thiscall
`UE::Cameras::FCameraDebugBlockBuilder::EndParentDebugBlockOverride'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8161638718076092349>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8161638718076092349>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505824b0

bool __thiscall
`UE::Cameras::FCameraDebugBlockBuilder::OnAttachDebugBlock'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8161638718076092393>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8161638718076092393>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505824f0

bool __thiscall
`UE::Cameras::FCameraDebugBlockBuilder::OnStartChildDebugBlock'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8161638718076092385>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8161638718076092385>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505825c0

bool __thiscall
`UE::Cameras::FCameraDebugBlockBuilder::StartParentDebugBlockOverride'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8161638718076092358>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8161638718076092358>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505837f0

bool __thiscall
`UE::Cameras::FCameraDebugBlockBuilder::EndParentDebugBlockOverride'::__l5::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8161638718076092344>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8161638718076092344>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

