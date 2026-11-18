// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 61

// BuildEvaluator<UE::Cameras::FBlendStackRootCameraNodeEvaluator> @ 14d538ef0

FBlendStackRootCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FBlendStackRootCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FBlendStackRootCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x58,8);
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  pFVar1->BlendEvaluator = (FBlendCameraNodeEvaluator *)0x0;
  pFVar1->RootEvaluator = (FCameraNodeEvaluator *)0x0;
  (pFVar1->BlendablePrefabCameraRig).field0_0x0.DebugPtr = (UCameraRigAsset *)0x0;
  (pFVar1->BlendedParameterOverridesStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->BlendedParameterOverridesStack).ArrayNum = 0;
  (pFVar1->BlendedParameterOverridesStack).ArrayMax = 0;
  (pFVar1->CameraRigAssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->CameraRigAssetName).Data.ArrayNum = 0;
  (pFVar1->CameraRigAssetName).Data.ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FBlendStackRootCameraNodeEvaluator_Cameras_UE__6B_;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = NeedsParameterUpdate;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator> @ 14d539010

FPersistentBlendStackCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FPersistentBlendStackCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x70,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 2;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 4) = 0;
  *(bool *)&pFVar1->_padding_ = false;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  *(undefined4 *)&pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (pFVar1->EntryExtraInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->EntryExtraInfos).ArrayNum = 0;
  (pFVar1->EntryExtraInfos).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FPersistentBlendStackCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1->_padding_ = 2;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FTransientBlendStackCameraNodeEvaluator> @ 14d5391b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FTransientBlendStackCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FTransientBlendStackCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FTransientBlendStackCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0xf0,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 2;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  (pFVar1->PreBlendVariableTable).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->PreBlendVariableTable).Entries.ArrayNum = 0;
  (pFVar1->PreBlendVariableTable).Entries.ArrayMax = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x0 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x8 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x10 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x18 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x20 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x28 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x30 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x38 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x40 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x48 = 0;
  (pFVar1->PreBlendVariableTable).Memory = (uchar *)0x0;
  (pFVar1->PreBlendVariableTable).Capacity = 0;
  (pFVar1->PreBlendVariableTable).Used = 0;
  (pFVar1->ParameterSetterService).Object = (FCameraParameterSetterService *)0x0;
  (pFVar1->ParameterSetterService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 4) = 0;
  *(bool *)&pFVar1->_padding_ = false;
  pFVar1->_padding_ = (longlong)&___7FTransientBlendStackCameraNodeEvaluator_Cameras_UE__6B_;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  *(undefined4 *)&pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 2;
  (pFVar1->EntryExtraInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->EntryExtraInfos).ArrayNum = 0;
  (pFVar1->EntryExtraInfos).ArrayMax = 0;
  FCameraVariableTable::FCameraVariableTable(&pFVar1->PreBlendVariableTable);
  (pFVar1->ParameterSetterService).Object = (FCameraParameterSetterService *)0x0;
  (pFVar1->ParameterSetterService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FCalcCameraActorCameraNodeEvaluator> @ 14d57c590

FCalcCameraActorCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FCalcCameraActorCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x20,8);
  pFVar1->_padding_ = 0;
  *(undefined8 *)&pFVar1->bAutoCameraPoseMovementTrail = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1->PrivateFlags = 0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  pFVar1->_padding_ = (longlong)&___7FCalcCameraActorCameraNodeEvaluator_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,pFVar1);
  return (FCalcCameraActorCameraNodeEvaluator *)pFVar1;
}

// BuildEvaluator<UE::Cameras::FCameraComponentCameraNodeEvaluator> @ 14d57c660

FCameraComponentCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FCameraComponentCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x20,8);
  pFVar1->_padding_ = 0;
  *(undefined8 *)&pFVar1->bAutoCameraPoseMovementTrail = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1->PrivateFlags = 0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  pFVar1->_padding_ = (longlong)&___7FCameraComponentCameraNodeEvaluator_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,pFVar1);
  return (FCameraComponentCameraNodeEvaluator *)pFVar1;
}

// BuildEvaluator<UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator> @ 14d57c730

FCombinedCameraRigsCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FCombinedCameraRigsCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x30,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 7;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->CameraRigRootEvaluators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->CameraRigRootEvaluators).ArrayNum = 0;
  (pFVar1->CameraRigRootEvaluators).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FCombinedCameraRigsCameraNodeEvaluator_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FDefaultRootCameraNodeEvaluator> @ 14d57c800

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FDefaultRootCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FDefaultRootCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FDefaultRootCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0xa80,0x10);
  memset(pFVar1,0,0xa80);
  pFVar1 = FDefaultRootCameraNodeEvaluator::FDefaultRootCameraNodeEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FInterruptedBlendCameraNodeEvaluator,UE::Cameras::FBlendCameraNodeEvaluator_*_&,UE::Cameras::FBlendCameraNodeEvaluator_*_&> @ 14d57c860

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FInterruptedBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FInterruptedBlendCameraNodeEvaluator,UE::Cameras::FBlendCameraNodeEvaluator_*_&,UE::Cameras::FBlendCameraNodeEvaluator_*_&>
          (FCameraNodeEvaluatorStorage *this,FBlendCameraNodeEvaluator **param_1,
          FBlendCameraNodeEvaluator **param_2)

{
  FInterruptedBlendCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0xa30,0x10);
  pFVar1 = FInterruptedBlendCameraNodeEvaluator::FInterruptedBlendCameraNodeEvaluator
                     (pFVar1,*param_1,*param_2);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FReverseBlendCameraNodeEvaluator,UE::Cameras::FBlendCameraNodeEvaluator_*_&> @ 14d57cab0

FReverseBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FReverseBlendCameraNodeEvaluator,UE::Cameras::FBlendCameraNodeEvaluator_*_&>
          (FCameraNodeEvaluatorStorage *this,FBlendCameraNodeEvaluator **param_1)

{
  FReverseBlendCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x28,8);
  pFVar1 = FReverseBlendCameraNodeEvaluator::FReverseBlendCameraNodeEvaluator(pFVar1,*param_1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluatorTree @ 14d59ba60

FCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::BuildEvaluatorTree
          (FCameraNodeEvaluatorStorage *this,FCameraNodeEvaluatorTreeBuildParams *param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  FCameraNodeEvaluatorAllocationInfo *pFVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  void *pvVar8;
  FCameraNodeEvaluator *pFVar9;
  FCameraNodeEvaluatorBuilder local_res8;
  FCameraNodeEvaluatorBuildParams local_res10;
  
  pFVar4 = param_1->AllocationInfo;
  if (pFVar4 != (FCameraNodeEvaluatorAllocationInfo *)0x0) {
    uVar2 = pFVar4->TotalSizeof;
    if (uVar2 != 0) {
      uVar3 = pFVar4->MaxAlignof;
      if (uVar3 != 0) {
        iVar6 = *(int *)&this->field_0x8;
        if (iVar6 == *(int *)&this->field_0xc) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)this,(int *)&this->field_0xc);
        }
        *(int *)&this->field_0x8 = iVar6 + 1;
        lVar7 = (longlong)iVar6;
        lVar5 = *(longlong *)this;
        *(undefined8 *)(lVar5 + 0x10 + lVar7 * 0x18) = 0;
        *(undefined8 *)(lVar5 + lVar7 * 0x18) = 0;
        *(undefined8 *)(lVar5 + 8 + lVar7 * 0x18) = 0;
        puVar1 = (undefined8 *)(lVar5 + lVar7 * 0x18);
        pvVar8 = FMemory::Malloc((ulonglong)uVar2,(uint)uVar3);
        *(undefined4 *)(puVar1 + 2) = 0;
        *puVar1 = pvVar8;
        *(uint *)(puVar1 + 1) = (uint)uVar3;
        *(uint *)((longlong)puVar1 + 0xc) = (uint)uVar2;
      }
    }
  }
  local_res10.Builder = &local_res8;
  local_res8.Storage = this;
  pFVar9 = FCameraNodeEvaluatorBuildParams::BuildEvaluator
                     (&local_res10,(param_1->RootCameraNode).field0_0x0.DebugPtr);
  return pFVar9;
}

// DestroyEvaluatorTree @ 14d59d880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d59da22) */
/* WARNING: Removing unreachable block (ram,0x00014d59da47) */
/* WARNING: Removing unreachable block (ram,0x00014d59d9a0) */
/* WARNING: Removing unreachable block (ram,0x00014d59d9c5) */

void __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::DestroyEvaluatorTree
          (FCameraNodeEvaluatorStorage *this,FCameraNodeEvaluator *param_1,bool param_2)

{
  uchar uVar1;
  FCameraNodeEvaluator *this_00;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FCameraObjectTypeRegistry *this_01;
  uint *puVar8;
  FCameraObjectTypeInfo *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar12;
  uint uVar13;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  longlong local_98;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *local_90;
  uint local_88;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> local_80;
  ulonglong local_48;
  
  if (param_1 != (FCameraNodeEvaluator *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
    this_01 = FCameraObjectTypeRegistry::Get();
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_a8,(int *)((longlong)&local_a0 + 4));
    iVar7 = iVar5 + 1;
    local_a0 = CONCAT44(local_a0._4_4_,iVar7);
    *(FCameraNodeEvaluator **)(local_a8.Data + (longlong)iVar5 * 8) = param_1;
    if (0 < iVar7) {
LAB_14d59d910:
      iVar5 = iVar7 + -1;
      this_00 = *(FCameraNodeEvaluator **)(local_a8.Data + (longlong)iVar5 * 8);
      iVar6 = (iVar7 - iVar5) + -1;
      if (iVar6 != 0) {
        memmove(local_a8.Data + (longlong)iVar5 * 8,local_a8.Data + (longlong)iVar5 * 8 + 8,
                (longlong)iVar6 << 3);
        iVar7 = (int)local_a0;
      }
      local_a0 = CONCAT44(local_a0._4_4_,iVar7 + -1);
      FCameraNodeEvaluator::GetChildren(this_00,&local_80);
      std::rbegin<UE::Cameras::TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>_>
                ((FReverseIterator *)&local_90,&local_80);
LAB_14d59d961:
      do {
        pTVar12 = local_90;
        uVar13 = 0;
        if ((local_90 == &local_80) && (local_88 == 0xffffffff)) goto LAB_14d59db47;
        lVar10 = (longlong)(int)local_88;
        uVar1 = (local_90->Storage).TypeIndex;
        if (uVar1 == '\0') {
          uVar13 = 0;
          if ((int)local_88 < (int)(local_90->Storage)._padding_) {
            uVar13 = ~local_88 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_98 = *(longlong *)((pTVar12->Storage)._padding_ + lVar10 * 8);
        }
        else {
          if (uVar1 != '\x01') {
            local_88 = local_88 - 1;
            local_98 = 0;
            goto LAB_14d59d961;
          }
          if ((int)local_88 < (int)(local_90->Storage)._padding_) {
            uVar13 = ~local_88 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar2 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)
                   (pTVar12->Storage)._padding_;
          if (pTVar2 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
            pTVar12 = pTVar2;
          }
          local_98 = (&(pTVar12->Storage)._padding_)[lVar10];
        }
        if (local_98 != 0) {
          if (((local_a8.Data <= (FScriptContainerElement *)&local_98) &&
              ((FScriptContainerElement *)&local_98 < local_a8.Data + (longlong)local_a0._4_4_ * 8))
             && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = (int)local_a0;
          if ((int)local_a0 == local_a0._4_4_) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_a8,(int *)((longlong)&local_a0 + 4));
          }
          local_a0 = CONCAT44(local_a0._4_4_,iVar7 + 1);
          *(longlong *)(local_a8.Data + (longlong)iVar7 * 8) = local_98;
        }
        local_88 = local_88 - 1;
      } while( true );
    }
LAB_14d59dc03:
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
  }
  return;
LAB_14d59db47:
  puVar8 = (uint *)(**(code **)this_00->_padding_)(this_00);
  pFVar9 = FCameraObjectTypeRegistry::GetTypeInfo(this_01,(FCameraObjectTypeID)*puVar8);
  if (pFVar9 == (FCameraObjectTypeInfo *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2226250689623883714>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraNodeEvaluatorStorage.cpp"
                       ,0x3e,"TypeInfo");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (param_2) {
      uVar13 = pFVar9->Sizeof;
    }
    TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::DestroyObject
              ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,this_00,uVar13);
  }
  uVar11 = (ulonglong)local_80.Storage.TypeIndex;
  if ((1 < local_80.Storage.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar11])(&local_80);
  iVar7 = (int)local_a0;
  if ((int)local_a0 < 1) goto LAB_14d59dc03;
  goto LAB_14d59d910;
}

// DestroyEvaluatorTree @ 14d59dc50

void __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::DestroyEvaluatorTree
          (FCameraNodeEvaluatorStorage *this,bool param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStackX_10 [8];
  
  puVar3 = *(undefined8 **)&this->field_0x10;
  iVar2 = *(int *)&this->field_0x18;
  puVar1 = puVar3 + iVar2;
  while( true ) {
    if (*(int *)&this->field_0x18 != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::FObjectInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
    }
    if (puVar3 == puVar1) break;
    (**(code **)(*(longlong *)*puVar3 + 0x10))((longlong *)*puVar3,0);
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)&this->field_0x18 = 0;
  if (*(int *)&this->field_0x1c < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->field_0x10,0,(int *)&this->field_0x1c);
  }
  iVar2 = *(int *)&this->field_0x8;
  puVar3 = *(undefined8 **)this;
  puVar1 = puVar3 + (longlong)iVar2 * 3;
  if (param_1) {
    while( true ) {
      if (*(int *)&this->field_0x8 != iVar2) {
        `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::FAllocation,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
      }
      if (puVar3 == puVar1) break;
      FMemory::Free((void *)*puVar3);
      puVar3 = puVar3 + 3;
    }
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
  }
  else {
    while( true ) {
      if (*(int *)&this->field_0x8 != iVar2) {
        `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::FAllocation,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
      }
      if (puVar3 == puVar1) break;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3 = puVar3 + 3;
    }
  }
  return;
}

// GetAllocationInfo @ 14d5a6320

void __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::GetAllocationInfo
          (FCameraNodeEvaluatorStorage *this,FCameraNodeEvaluatorAllocationInfo *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  iVar7 = 0;
  if (*(int *)&this->field_0x8 == 0) {
    param_1->TotalSizeof = 0;
    param_1->MaxAlignof = 0;
    return;
  }
  if (*(int *)&this->field_0x8 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = *(int *)&this->field_0x8;
  lVar8 = *(longlong *)this;
  uVar3 = *(undefined4 *)(lVar8 + 8);
  lVar1 = lVar8 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (*(int *)&this->field_0x8 != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::FAllocation_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (lVar8 == lVar1) break;
    uVar6 = 0;
    if (iVar7 != 0) {
      uVar6 = iVar7 + -1 + *(int *)(lVar8 + 8) & -*(int *)(lVar8 + 8);
    }
    iVar7 = uVar6 + *(int *)(lVar8 + 0x10);
    lVar8 = lVar8 + 0x18;
  }
  param_1->MaxAlignof = (short)uVar3;
  param_1->TotalSizeof = (short)iVar7;
  return;
}

// BuildEvaluator<UE::Cameras::FArrayCameraNodeEvaluator> @ 14d5e9c20

FArrayCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::BuildEvaluator<UE::Cameras::FArrayCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FArrayCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x30,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_00->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_00->_padding_ = Default;
  (this_00->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Children).ArrayNum = 0;
  (this_00->Children).ArrayMax = 0;
  this_00->_padding_ = (longlong)&___7FArrayCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_00,None);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildEvaluator<UE::Cameras::FAttachToActorCameraNodeEvaluator> @ 14d5e9d60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAttachToActorCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FAttachToActorCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FAttachToActorCameraNodeEvaluator *_Dst;
  
  _Dst = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                   ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x120,0x10);
  memset(_Dst,0,0x120);
  _Dst->field_0x8 = true;
  *(undefined ***)_Dst = &___7FAttachToActorCameraNodeEvaluator_Cameras_UE__6B_;
  *(ECameraNodeEvaluatorFlags *)&_Dst->field_0x18 = Default;
  (_Dst->AttachmentReader).DefaultAttachmentInfo.Actor.field0_0x0.DebugPtr = (AActor *)0x0;
  (_Dst->AttachmentReader).DefaultAttachmentInfo.SocketName.ComparisonIndex = 0;
  (_Dst->AttachmentReader).DefaultAttachmentInfo.SocketName.Number = 0;
  (_Dst->AttachmentReader).DefaultAttachmentInfo.BoneName.ComparisonIndex = 0;
  (_Dst->AttachmentReader).DefaultAttachmentInfo.BoneName.Number = 0;
  (_Dst->AttachmentReader).CachedAttachmentInfo.Actor.field0_0x0.DebugPtr = (AActor *)0x0;
  (_Dst->AttachmentReader).CachedAttachmentInfo.SocketName.ComparisonIndex = 0;
  (_Dst->AttachmentReader).CachedAttachmentInfo.SocketName.Number = 0;
  (_Dst->AttachmentReader).CachedAttachmentInfo.BoneName.ComparisonIndex = 0;
  (_Dst->AttachmentReader).CachedAttachmentInfo.BoneName.Number = 0;
  (_Dst->AttachmentReader).CachedSkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
  (_Dst->AttachmentReader).CachedBoneName.ComparisonIndex = 0;
  (_Dst->AttachmentReader).CachedBoneName.Number = 0;
  (_Dst->AttachToLocationReader).DefaultValuePtr = (bool *)0x0;
  (_Dst->AttachToRotationReader).DefaultValuePtr = (bool *)0x0;
  (_Dst->LastAttachTransform).bIsSet = false;
  (_Dst->AttachmentReader).DefaultAttachmentInfo.Weight = 1.0;
  (_Dst->AttachmentReader).DataID.Value = 0xffffffff;
  (_Dst->AttachmentReader).CachedAttachmentInfo.Weight = 1.0;
  (_Dst->AttachToLocationReader).VariableID.Value = 0xffffffff;
  (_Dst->AttachToRotationReader).VariableID.Value = 0xffffffff;
  _Dst->bIsAttachValid = true;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)_Dst);
  return _Dst;
}

// BuildEvaluator<UE::Cameras::FAttachToActorGroupCameraNodeEvaluator> @ 14d5e9eb0

FAttachToActorGroupCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FAttachToActorGroupCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FAttachToActorGroupCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x38,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->AttachmentsReader).field_0x14 = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->AttachmentsReader).Readers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->AttachmentsReader).Readers.ArrayNum = 0;
  (pFVar1->AttachmentsReader).Readers.ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FAttachToActorGroupCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->AttachmentsReader).DataID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FAttachToPlayerPawnCameraNodeEvaluator> @ 14d5e9fd0

FAttachToPlayerPawnCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FAttachToPlayerPawnCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FAttachToPlayerPawnCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x58,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  pFVar1->CachedSkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
  (pFVar1->CachedBoneName).ComparisonIndex = 0;
  (pFVar1->CachedBoneName).Number = 0;
  (pFVar1->AttachToLocationReader).DefaultValuePtr = (bool *)0x0;
  *(undefined8 *)&(pFVar1->AttachToLocationReader).VariableID = 0;
  (pFVar1->AttachToRotationReader).DefaultValuePtr = (bool *)0x0;
  *(undefined8 *)&(pFVar1->AttachToRotationReader).VariableID = 0;
  *(undefined8 *)&pFVar1->bHasValidPlayerController = 0;
  pFVar1->_padding_ = (longlong)&___7FAttachToPlayerPawnCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1->CachedSkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
  (pFVar1->CachedBoneName).ComparisonIndex = 0;
  (pFVar1->CachedBoneName).Number = 0;
  (pFVar1->AttachToLocationReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->AttachToRotationReader).DefaultValuePtr = (bool *)0x0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  (pFVar1->AttachToLocationReader).VariableID.Value = 0xffffffff;
  (pFVar1->AttachToRotationReader).VariableID.Value = 0xffffffff;
  pFVar1->bHasValidPlayerController = true;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FAutoFocusCameraNodeEvaluator> @ 14d5ea100

FAutoFocusCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::BuildEvaluator<UE::Cameras::FAutoFocusCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FAutoFocusCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x60,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  (pFVar1->EnableAutoFocusReader).DefaultValue = false;
  *(undefined3 *)&(pFVar1->EnableAutoFocusReader).field_0x1 = 0;
  (pFVar1->EnableAutoFocusReader).VariableID = 0;
  (pFVar1->AutoFocusDampingFactorReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->AutoFocusDampingFactorReader).VariableID = 0;
  (pFVar1->AutoFocusDamper).W0 = 0.0;
  (pFVar1->AutoFocusDamper).X0 = 0.0;
  *(undefined8 *)&(pFVar1->AutoFocusDamper).X0Derivative = 0;
  pFVar1->LastUndampedFocusDistance = 0.0;
  pFVar1->LastDampedFocusDistance = 0.0;
  *(undefined8 *)&pFVar1->bLastEnableAutoFocus = 0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  pFVar1->_padding_ = (longlong)&___7FAutoFocusCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->AutoFocusDampingFactorReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->AutoFocusDamper).X0 = 0.0;
  (pFVar1->AutoFocusDamper).X0Derivative = 0.0;
  (pFVar1->EnableAutoFocusReader).VariableID.Value = 0xffffffff;
  (pFVar1->AutoFocusDampingFactorReader).VariableID.Value = 0xffffffff;
  (pFVar1->AutoFocusDamper).W0 = -1.0;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FBodyParametersCameraNodeEvaluator> @ 14d5ea220

FBodyParametersCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FBodyParametersCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FBodyParametersCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x40,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->ShutterSpeedReader).field_0xc = 0;
  *(undefined4 *)&(pFVar1->ISOReader).field_0xc = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->ShutterSpeedReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->ISOReader).DefaultValuePtr = (float *)0x0;
  pFVar1->_padding_ = (longlong)&___7FBodyParametersCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->ShutterSpeedReader).VariableID.Value = 0xffffffff;
  (pFVar1->ISOReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FBoomArmCameraNodeEvaluator> @ 14d5ea370

FBoomArmCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::BuildEvaluator<UE::Cameras::FBoomArmCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FBoomArmCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x98,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  (pFVar1->BoomOffsetReader).DefaultValuePtr = (TVector<double> *)0x0;
  *(undefined8 *)&(pFVar1->BoomOffsetReader).VariableID = 0;
  pFVar1->InputSlotEvaluator = (FInput2DCameraNodeEvaluator *)0x0;
  (pFVar1->BoomLengthInterpolator).Ptr = (TCameraValueInterpolator<double> *)0x0;
  (pFVar1->MaxForwardInterpolationFactorReader).DefaultValuePtr = (double *)0x0;
  *(undefined8 *)&(pFVar1->MaxForwardInterpolationFactorReader).VariableID = 0;
  (pFVar1->MaxBackwardInterpolationFactorReader).DefaultValuePtr = (double *)0x0;
  *(undefined8 *)&(pFVar1->MaxBackwardInterpolationFactorReader).VariableID = 0;
  (pFVar1->LastPivotLocation).field0_0x0._s_0.X = 0.0;
  (pFVar1->LastPivotLocation).field0_0x0._s_0.Y = 0.0;
  (pFVar1->LastPivotLocation).field0_0x0._s_0.Z = 0.0;
  pFVar1->CumulativePull = 0.0;
  (pFVar1->DebugYawPitch).field0_0x0._s_0.X = 0.0;
  (pFVar1->DebugYawPitch).field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&pFVar1->bDebugDidClampPull = 0;
  pFVar1->_padding_ = (longlong)&___7FBoomArmCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->BoomOffsetReader).DefaultValuePtr = (TVector<double> *)0x0;
  pFVar1->InputSlotEvaluator = (FInput2DCameraNodeEvaluator *)0x0;
  (pFVar1->BoomLengthInterpolator).Ptr = (TCameraValueInterpolator<double> *)0x0;
  (pFVar1->MaxForwardInterpolationFactorReader).DefaultValuePtr = (double *)0x0;
  (pFVar1->MaxBackwardInterpolationFactorReader).DefaultValuePtr = (double *)0x0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  (pFVar1->BoomOffsetReader).VariableID.Value = 0xffffffff;
  (pFVar1->MaxForwardInterpolationFactorReader).VariableID.Value = 0xffffffff;
  (pFVar1->MaxBackwardInterpolationFactorReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FCameraRigCameraNodeEvaluator> @ 14d5ea4a0

FCameraRigCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::BuildEvaluator<UE::Cameras::FCameraRigCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FCameraRigCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x28,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_00->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_00->_padding_ = Default;
  this_00->CameraRigRootEvaluator = (FCameraNodeEvaluator *)0x0;
  this_00->_padding_ = (longlong)&___7FCameraRigCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_00,NeedsParameterUpdate);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildEvaluator<UE::Cameras::FClippingPlanesCameraNodeEvaluator> @ 14d5ea5a0

FClippingPlanesCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FClippingPlanesCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FClippingPlanesCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x40,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->NearPlaneReader).field_0xc = 0;
  *(undefined4 *)&(pFVar1->FarPlaneReader).field_0xc = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->NearPlaneReader).DefaultValuePtr = (double *)0x0;
  (pFVar1->FarPlaneReader).DefaultValuePtr = (double *)0x0;
  pFVar1->_padding_ = (longlong)&___7FClippingPlanesCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->NearPlaneReader).VariableID.Value = 0xffffffff;
  (pFVar1->FarPlaneReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FCollisionPushCameraNodeEvaluator> @ 14d5ea6f0

FCollisionPushCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FCollisionPushCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FCollisionPushCameraNodeEvaluator *_Dst;
  
  _Dst = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                   ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0xc0,8);
  memset(_Dst,0,0xc0);
  *(bool *)&_Dst->_padding_ = true;
  _Dst->_padding_ = (longlong)&___7FCollisionPushCameraNodeEvaluator_Cameras_UE__6B_;
  *(ECameraNodeEvaluatorFlags *)&_Dst->_padding_ = Default;
  (_Dst->CollisionSphereRadiusReader).DefaultValuePtr = (float *)0x0;
  (_Dst->SafePositionOffsetReader).DefaultValuePtr = (TVector<double> *)0x0;
  (_Dst->PushInterpolator).Ptr = (TCameraValueInterpolator<double> *)0x0;
  (_Dst->PullInterpolator).Ptr = (TCameraValueInterpolator<double> *)0x0;
  (_Dst->CollisionTraceHandle).field0_0x0._Handle = 0;
  (_Dst->CollisionTraceHandle).bTransactional = false;
  _Dst->LastPushFactor = 0.0;
  _Dst->LastDampedPushFactor = 0.0;
  _Dst->LastDirection = Pushing;
  _Dst->bDebugCollisionEnabled = false;
  _Dst->bDebugFoundHit = false;
  _Dst->bDebugGotSafePosition = false;
  _Dst->bDebugGotSafePositionOffset = false;
  (_Dst->DebugHitObjectName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (_Dst->DebugHitObjectName).Data.ArrayNum = 0;
  (_Dst->DebugHitObjectName).Data.ArrayMax = 0;
  (_Dst->EnableCollisionReader).VariableID.Value = 0xffffffff;
  (_Dst->CustomSafePositionReader).VariableID.Value = 0xffffffff;
  (_Dst->CollisionSphereRadiusReader).VariableID.Value = 0xffffffff;
  (_Dst->SafePositionOffsetReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)_Dst);
  return _Dst;
}

// BuildEvaluator<UE::Cameras::FDampenPositionCameraNodeEvaluator> @ 14d5ea8b0

FDampenPositionCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FDampenPositionCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FDampenPositionCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0xf0,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->ForwardDampingFactorReader).field_0xc = 0;
  *(undefined4 *)&(pFVar1->LateralDampingFactorReader).field_0xc = 0;
  *(undefined4 *)&(pFVar1->VerticalDampingFactorReader).field_0xc = 0;
  *(undefined8 *)&pFVar1->field_0x74 = 0;
  *(undefined8 *)((longlong)&(pFVar1->PreviousLocation).field0_0x0._s_0.X + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->PreviousLocation).field0_0x0._s_0.Y + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->PreviousLocation).field0_0x0._s_0.Z + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->PreviousLagVector).field0_0x0._s_0.X + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->PreviousLagVector).field0_0x0._s_0.Y + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->PreviousLagVector).field0_0x0._s_0.Z + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastUndampedPosition).field0_0x0._s_0.X + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastUndampedPosition).field0_0x0._s_0.Y + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastUndampedPosition).field0_0x0._s_0.Z + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastDampedPosition).field0_0x0._s_0.X + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastDampedPosition).field0_0x0._s_0.Y + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastDampedPosition).field0_0x0._s_0.Z + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastDampingRotation).Pitch + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastDampingRotation).Yaw + 4) = 0;
  *(undefined4 *)((longlong)&(pFVar1->DebugLastDampingRotation).Roll + 4) = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  (pFVar1->ForwardDampingFactorReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->LateralDampingFactorReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->VerticalDampingFactorReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->ForwardDamper).X0 = 0.0;
  (pFVar1->ForwardDamper).X0Derivative = 0.0;
  (pFVar1->LateralDamper).X0 = 0.0;
  (pFVar1->LateralDamper).X0Derivative = 0.0;
  (pFVar1->VerticalDamper).X0 = 0.0;
  (pFVar1->VerticalDamper).X0Derivative = 0.0;
  pFVar1->_padding_ = (longlong)&___7FDampenPositionCameraNodeEvaluator_Cameras_UE__6B_;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->ForwardDampingFactorReader).VariableID.Value = 0xffffffff;
  (pFVar1->LateralDampingFactorReader).VariableID.Value = 0xffffffff;
  (pFVar1->VerticalDampingFactorReader).VariableID.Value = 0xffffffff;
  (pFVar1->ForwardDamper).W0 = -1.0;
  (pFVar1->LateralDamper).W0 = -1.0;
  (pFVar1->VerticalDamper).W0 = -1.0;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FDampenRotationCameraNodeEvaluator> @ 14d5eaa50

FDampenRotationCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FDampenRotationCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FDampenRotationCameraNodeEvaluator *_Dst;
  
  _Dst = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                   ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0xc0,8);
  memset(_Dst,0,0xc0);
  *(bool *)&_Dst->_padding_ = true;
  _Dst->_padding_ = (longlong)&___7FDampenRotationCameraNodeEvaluator_Cameras_UE__6B_;
  *(ECameraNodeEvaluatorFlags *)&_Dst->_padding_ = Default;
  (_Dst->YawDampingFactorReader).DefaultValuePtr = (float *)0x0;
  (_Dst->PitchDampingFactorReader).DefaultValuePtr = (float *)0x0;
  (_Dst->RollDampingFactorReader).DefaultValuePtr = (float *)0x0;
  (_Dst->YawDamper).X0 = 0.0;
  (_Dst->YawDamper).X0Derivative = 0.0;
  (_Dst->PitchDamper).X0 = 0.0;
  (_Dst->PitchDamper).X0Derivative = 0.0;
  (_Dst->RollDamper).X0 = 0.0;
  (_Dst->RollDamper).X0Derivative = 0.0;
  (_Dst->YawDampingFactorReader).VariableID.Value = 0xffffffff;
  (_Dst->PitchDampingFactorReader).VariableID.Value = 0xffffffff;
  (_Dst->RollDampingFactorReader).VariableID.Value = 0xffffffff;
  (_Dst->YawDamper).W0 = -1.0;
  (_Dst->PitchDamper).W0 = -1.0;
  (_Dst->RollDamper).W0 = -1.0;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)_Dst);
  return _Dst;
}

// BuildEvaluator<UE::Cameras::FFieldOfViewCameraNodeEvaluator> @ 14d5eab80

FFieldOfViewCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FFieldOfViewCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FFieldOfViewCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x30,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->FieldOfViewReader).field_0xc = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->FieldOfViewReader).DefaultValuePtr = (float *)0x0;
  pFVar1->_padding_ = (longlong)&___7FFieldOfViewCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->FieldOfViewReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FFilmbackCameraNodeEvaluator> @ 14d5eace0

FFilmbackCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::BuildEvaluator<UE::Cameras::FFilmbackCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FFilmbackCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x90,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  (pFVar1->SensorWidthReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->SensorWidthReader).VariableID = 0;
  (pFVar1->SensorHeightReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->SensorHeightReader).VariableID = 0;
  (pFVar1->SensorHorizontalOffsetReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->SensorHorizontalOffsetReader).VariableID = 0;
  (pFVar1->SensorVerticalOffsetReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->SensorVerticalOffsetReader).VariableID = 0;
  (pFVar1->OverscanReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->OverscanReader).VariableID = 0;
  (pFVar1->ConstrainAspectRatioReader).DefaultValuePtr = (bool *)0x0;
  *(undefined8 *)&(pFVar1->ConstrainAspectRatioReader).VariableID = 0;
  (pFVar1->OverrideAspectRatioAxisConstraintReader).DefaultValuePtr = (bool *)0x0;
  *(undefined8 *)&(pFVar1->OverrideAspectRatioAxisConstraintReader).VariableID = 0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  pFVar1->_padding_ = (longlong)&___7FFilmbackCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->SensorWidthReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->SensorHeightReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->SensorHorizontalOffsetReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->SensorVerticalOffsetReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->OverscanReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->ConstrainAspectRatioReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->OverrideAspectRatioAxisConstraintReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->SensorWidthReader).VariableID.Value = 0xffffffff;
  (pFVar1->SensorHeightReader).VariableID.Value = 0xffffffff;
  (pFVar1->SensorHorizontalOffsetReader).VariableID.Value = 0xffffffff;
  (pFVar1->SensorVerticalOffsetReader).VariableID.Value = 0xffffffff;
  (pFVar1->OverscanReader).VariableID.Value = 0xffffffff;
  (pFVar1->ConstrainAspectRatioReader).VariableID.Value = 0xffffffff;
  (pFVar1->OverrideAspectRatioAxisConstraintReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FLensParametersCameraNodeEvaluator> @ 14d5eae60

FLensParametersCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FLensParametersCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FLensParametersCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x60,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  (pFVar1->FocalLengthReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->FocalLengthReader).VariableID = 0;
  (pFVar1->FocusDistanceReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->FocusDistanceReader).VariableID = 0;
  (pFVar1->ApertureReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->ApertureReader).VariableID = 0;
  (pFVar1->EnablePhysicalCameraReader).DefaultValuePtr = (bool *)0x0;
  *(undefined8 *)&(pFVar1->EnablePhysicalCameraReader).VariableID = 0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  pFVar1->_padding_ = (longlong)&___7FLensParametersCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->FocalLengthReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->FocusDistanceReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->ApertureReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->EnablePhysicalCameraReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->FocalLengthReader).VariableID.Value = 0xffffffff;
  (pFVar1->FocusDistanceReader).VariableID.Value = 0xffffffff;
  (pFVar1->ApertureReader).VariableID.Value = 0xffffffff;
  (pFVar1->EnablePhysicalCameraReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FLinearBlendCameraNodeEvaluator> @ 14d5eaf70

FLinearBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FLinearBlendCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FSimpleFixedTimeBlendCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x40,8);
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->TotalTime = 0.0;
  this_00->CurrentTime = 0.0;
  FSimpleFixedTimeBlendCameraNodeEvaluator::FSimpleFixedTimeBlendCameraNodeEvaluator(this_00);
  this_00->_padding_ = (longlong)&___7FLinearBlendCameraNodeEvaluator_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)this_00);
  return (FLinearBlendCameraNodeEvaluator *)this_00;
}

// BuildEvaluator<UE::Cameras::FLocationRotationBlendCameraNodeEvaluator> @ 14d5eb060

FLocationRotationBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FLocationRotationBlendCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FLocationRotationBlendCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x38,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_00->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_00->_padding_ = Default;
  this_00->LocationBlendEvaluator = (FSimpleBlendCameraNodeEvaluator *)0x0;
  this_00->RotationBlendEvaluator = (FSimpleBlendCameraNodeEvaluator *)0x0;
  this_00->OtherBlendEvaluator = (FSimpleBlendCameraNodeEvaluator *)0x0;
  this_00->_padding_ = (longlong)&___7FLocationRotationBlendCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_00,None);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildEvaluator<UE::Cameras::FOcclusionMaterialCameraNodeEvaluator> @ 14d5eb130

FOcclusionMaterialCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FOcclusionMaterialCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FOcclusionMaterialCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0xf0,8);
  memset(pFVar1,0,0xf0);
  pFVar1 = FOcclusionMaterialCameraNodeEvaluator::FOcclusionMaterialCameraNodeEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FOffsetCameraNodeEvaluator> @ 14d5eb220

FOffsetCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::BuildEvaluator<UE::Cameras::FOffsetCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FOffsetCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x40,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->TranslationReader).field_0xc = 0;
  *(undefined4 *)&(pFVar1->RotationReader).field_0xc = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->TranslationReader).DefaultValuePtr = (TVector<double> *)0x0;
  (pFVar1->RotationReader).DefaultValuePtr = (TRotator<double> *)0x0;
  pFVar1->_padding_ = (longlong)&___7FOffsetCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->TranslationReader).VariableID.Value = 0xffffffff;
  (pFVar1->RotationReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FOrbitBlendCameraNodeEvaluator> @ 14d5eb300

FOrbitBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FOrbitBlendCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FOrbitBlendCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x60,8);
  pFVar1 = FOrbitBlendCameraNodeEvaluator::FOrbitBlendCameraNodeEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FOrthographicCameraNodeEvaluator> @ 14d5eb3e0

FOrthographicCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FOrthographicCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FOrthographicCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x40,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->EnableOrthographicModeReader).field_0xc = 0;
  *(undefined4 *)&(pFVar1->OrthographicWidthReader).field_0xc = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->EnableOrthographicModeReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->OrthographicWidthReader).DefaultValuePtr = (float *)0x0;
  pFVar1->_padding_ = (longlong)&___7FOrthographicCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->EnableOrthographicModeReader).VariableID.Value = 0xffffffff;
  (pFVar1->OrthographicWidthReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FPopBlendCameraNodeEvaluator> @ 14d5eb4e0

FPopBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::BuildEvaluator<UE::Cameras::FPopBlendCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x20,8);
  this_00->bAutoCameraPoseMovementTrail = true;
  (this_00->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_00->PrivateFlags = Default;
  this_00->_padding_ = (longlong)&___7FPopBlendCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags(this_00,None);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,this_00);
  return (FPopBlendCameraNodeEvaluator *)this_00;
}

// BuildEvaluator<UE::Cameras::FPostProcessCameraNodeEvaluator> @ 14d5eb5c0

FPostProcessCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FPostProcessCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x20,8);
  this_00->bAutoCameraPoseMovementTrail = true;
  (this_00->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_00->PrivateFlags = Default;
  this_00->_padding_ = (longlong)&___7FPostProcessCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags(this_00,None);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,this_00);
  return (FPostProcessCameraNodeEvaluator *)this_00;
}

// BuildEvaluator<UE::Cameras::FSetLocationCameraNodeEvaluator> @ 14d5eb6b0

FSetLocationCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FSetLocationCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FSetLocationCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x30,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->LocationReader).field_0xc = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->LocationReader).DefaultValuePtr = (TVector<double> *)0x0;
  pFVar1->_padding_ = (longlong)&___7FSetLocationCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->LocationReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FSetRotationCameraNodeEvaluator> @ 14d5eb7b0

FSetRotationCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FSetRotationCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FSetRotationCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x30,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->RotationReader).field_0xc = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->RotationReader).DefaultValuePtr = (TRotator<double> *)0x0;
  pFVar1->_padding_ = (longlong)&___7FSetRotationCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->RotationReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FSmoothBlendCameraNodeEvaluator> @ 14d5eb8a0

FSmoothBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FSmoothBlendCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FSimpleFixedTimeBlendCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x40,8);
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->TotalTime = 0.0;
  this_00->CurrentTime = 0.0;
  FSimpleFixedTimeBlendCameraNodeEvaluator::FSimpleFixedTimeBlendCameraNodeEvaluator(this_00);
  this_00->_padding_ = (longlong)&___7FSmoothBlendCameraNodeEvaluator_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)this_00);
  return (FSmoothBlendCameraNodeEvaluator *)this_00;
}

// BuildEvaluator<UE::Cameras::FSplineFieldOfViewCameraNodeEvaluator> @ 14d5eb9b0

FSplineFieldOfViewCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FSplineFieldOfViewCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FSplineFieldOfViewCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x50,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->SplineInputReader).field_0xc = 0;
  *(undefined4 *)&pFVar1->field_0x49 = 0;
  *(undefined2 *)&pFVar1->field_0x4d = 0;
  pFVar1->field_0x4f = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->SplineInputReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->FieldOfViewSpline).CompressedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (pFVar1->FieldOfViewSpline).CompressedKeys.ArrayNum = 0;
  (pFVar1->FieldOfViewSpline).CompressedKeys.ArrayMax = 0;
  pFVar1->bHasAnyValues = false;
  pFVar1->_padding_ = (longlong)&___7FSplineFieldOfViewCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->SplineInputReader).VariableID.Value = 0xffffffff;
  (pFVar1->FieldOfViewSpline).CompressionFormat = '\0';
  (pFVar1->FieldOfViewSpline).KeyTimeCompressionFormat = '\x01';
  (pFVar1->FieldOfViewSpline).PreInfinityExtrap = '\x05';
  (pFVar1->FieldOfViewSpline).PostInfinityExtrap = '\x05';
  (pFVar1->FieldOfViewSpline).ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FSplineOffsetCameraNodeEvaluator> @ 14d5ebaa0

FSplineOffsetCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FSplineOffsetCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FSplineOffsetCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,200,8);
  memset(pFVar1,0,200);
  pFVar1 = FSplineOffsetCameraNodeEvaluator::FSplineOffsetCameraNodeEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FSplineOrbitCameraNodeEvaluator> @ 14d5ebb60

FSplineOrbitCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FSplineOrbitCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FSplineOrbitCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x1e0,0x10);
  memset(pFVar1,0,0x1e0);
  pFVar1 = FSplineOrbitCameraNodeEvaluator::FSplineOrbitCameraNodeEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FTargetRayCastCameraNodeEvaluator> @ 14d5ebc60

FTargetRayCastCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FTargetRayCastCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FTargetRayCastCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x68,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  (pFVar1->AutoFocusReader).DefaultValuePtr = (bool *)0x0;
  *(undefined8 *)&(pFVar1->AutoFocusReader).VariableID = 0;
  pFVar1->LastHitResultDistance = 0.0;
  (pFVar1->LastHitResultLocation).field0_0x0._s_0.X = 0.0;
  (pFVar1->LastHitResultLocation).field0_0x0._s_0.Y = 0.0;
  (pFVar1->LastHitResultLocation).field0_0x0._s_0.Z = 0.0;
  (pFVar1->LastHitResultName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->LastHitResultName).Data.ArrayNum = 0;
  (pFVar1->LastHitResultName).Data.ArrayMax = 0;
  *(undefined8 *)&pFVar1->bGotLastHitResult = 0;
  pFVar1->_padding_ = (longlong)&___7FTargetRayCastCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->AutoFocusReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->LastHitResultName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->LastHitResultName).Data.ArrayNum = 0;
  (pFVar1->LastHitResultName).Data.ArrayMax = 0;
  pFVar1->LastHitResultDistance = 1000.0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  (pFVar1->AutoFocusReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FViewTargetTransitionParamsBlendCameraNodeEvaluator> @ 14d5ebdb0

FViewTargetTransitionParamsBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FViewTargetTransitionParamsBlendCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FViewTargetTransitionParamsBlendCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x40,8);
  *(undefined4 *)((longlong)&this_00->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&this_00->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&this_00->_padding_ + 7) = 0;
  this_00->_padding_ = 7;
  *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this_00->_padding_ + 6) = 0;
  *(undefined2 *)&this_00->field_0x3e = 0;
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_00->_padding_ = true;
  this_00->_padding_ = (longlong)&___7FSimpleBlendCameraNodeEvaluator_Cameras_UE__6B_;
  this_00->_padding_ = 0;
  *(undefined4 *)&this_00->_padding_ = 0xffffffff;
  *(undefined4 *)&this_00->_padding_ = 0;
  *(undefined2 *)((longlong)&this_00->_padding_ + 4) = 0;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_00,NeedsSerialize);
  this_00->CurrentTime = 0.0;
  this_00->_padding_ =
       (longlong)&___7FViewTargetTransitionParamsBlendCameraNodeEvaluator_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildEvaluator<UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator> @ 14d64c5e0

FAutoRotateInput2DCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FAutoRotateInput2DCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x108,8);
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  (pFVar1->WaitTimeReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->DeactivationThresholdReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->FreezeControlRotationReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->EnableAutoRotateReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->AutoRotateYawReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->AutoRotatePitchReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->Interpolator).Ptr = (TCameraValueInterpolator<double> *)0x0;
  pFVar1->InputNodeEvaluator = (FInput2DCameraNodeEvaluator *)0x0;
  pFVar1->RemainingWaitTime = 0.0;
  pFVar1->bIsAutoRotating = false;
  pFVar1->_padding_ = (longlong)&___7FAutoRotateInput2DCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->DirectionVectorReader).VariableID.Value = 0xffffffff;
  (pFVar1->WaitTimeReader).VariableID.Value = 0xffffffff;
  (pFVar1->DeactivationThresholdReader).VariableID.Value = 0xffffffff;
  (pFVar1->FreezeControlRotationReader).VariableID.Value = 0xffffffff;
  (pFVar1->EnableAutoRotateReader).VariableID.Value = 0xffffffff;
  (pFVar1->AutoRotateYawReader).VariableID.Value = 0xffffffff;
  (pFVar1->AutoRotatePitchReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FBlueprintCameraNodeEvaluator> @ 14d64c720

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlueprintCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::BuildEvaluator<UE::Cameras::FBlueprintCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FBlueprintCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x28,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 7;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->EvaluatorBlueprint).field0_0x0.DebugPtr = (UBlueprintCameraNodeEvaluator *)0x0;
  pFVar1->_padding_ = (longlong)&___7FBlueprintCameraNodeEvaluator_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FCameraRigInput1DSlotEvaluator> @ 14d64c820

FCameraRigInput1DSlotEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FCameraRigInput1DSlotEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FCameraRigInput1DSlotEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x58,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_00->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_00->_padding_ = Default;
  (this_00->RevertAxisReader).DefaultValuePtr = (bool *)0x0;
  (this_00->SpeedReader).DefaultValuePtr = (double *)0x0;
  this_00->DeltaInputValue = 0.0;
  this_00->_padding_ = (longlong)&___7FCameraRigInput1DSlotEvaluator_Cameras_UE__6B_;
  (this_00->RevertAxisReader).VariableID.Value = 0xffffffff;
  (this_00->SpeedReader).VariableID.Value = 0xffffffff;
  this_00->bIsAccumulated = true;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_00,Default);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildEvaluator<UE::Cameras::FCameraRigInput2DSlotEvaluator> @ 14d64c900

FCameraRigInput2DSlotEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FCameraRigInput2DSlotEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FCameraRigInput2DSlotEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x78,8);
  pFVar1 = FCameraRigInput2DSlotEvaluator::FCameraRigInput2DSlotEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FCameraShakeCameraNodeEvaluator> @ 14d64c9d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraShakeCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FCameraShakeCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FCameraShakeCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x40,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_00->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_00->_padding_ = Default;
  this_00->CameraShakeRootEvaluator = (FShakeCameraNodeEvaluator *)0x0;
  (this_00->CameraShakeService).Object = (FCameraShakeService *)0x0;
  (this_00->CameraShakeService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this_00->_padding_ = (longlong)&___7FCameraShakeCameraNodeEvaluator_Cameras_UE__6B_;
  this_00->EvaluationMode = VisualLayer;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_00,NeedsParameterUpdate);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildEvaluator<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator> @ 14d64cae0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraShakeServiceCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FCameraShakeServiceCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x58,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  pFVar1->OwningEvaluator = (FCameraSystemEvaluator *)0x0;
  (pFVar1->ShakeContext).Object = (FCameraEvaluationContext *)0x0;
  (pFVar1->ShakeContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1->BlendedParameters = (FCameraVariableTable *)0x0;
  (pFVar1->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Entries).ArrayNum = 0;
  (pFVar1->Entries).ArrayMax = 0;
  *(undefined8 *)&pFVar1->NextEntryID = 0;
  pFVar1->_padding_ = (longlong)&___7FCameraShakeServiceCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1->OwningEvaluator = (FCameraSystemEvaluator *)0x0;
  (pFVar1->ShakeContext).Object = (FCameraEvaluationContext *)0x0;
  (pFVar1->ShakeContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1->BlendedParameters = (FCameraVariableTable *)0x0;
  (pFVar1->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Entries).ArrayNum = 0;
  (pFVar1->Entries).ArrayMax = 0;
  pFVar1->NextEntryID = 0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FCompositeShakeCameraNodeEvaluator> @ 14d64cbe0

FCompositeShakeCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FCompositeShakeCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FCompositeShakeCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x30,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_00->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_00->_padding_ = Default;
  (this_00->ShakeEvaluators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->ShakeEvaluators).ArrayNum = 0;
  (this_00->ShakeEvaluators).ArrayMax = 0;
  this_00->_padding_ = (longlong)&___7FCompositeShakeCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_00,None);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildEvaluator<UE::Cameras::FDollyFramingCameraNodeEvaluator> @ 14d64cce0

FDollyFramingCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FDollyFramingCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FDollyFramingCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x6b0,0x10);
  memset(this_00,0,0x6b0);
  FBaseFramingCameraNodeEvaluator::FBaseFramingCameraNodeEvaluator
            ((FBaseFramingCameraNodeEvaluator *)this_00);
  *(undefined ***)this_00 = &___7FDollyFramingCameraNodeEvaluator_Cameras_UE__6B_;
  (this_00->CanMoveLaterallyReader).VariableID.Value = 0xffffffff;
  (this_00->CanMoveLaterallyReader).DefaultValuePtr = (bool *)0x0;
  (this_00->CanMoveVerticallyReader).DefaultValuePtr = (bool *)0x0;
  (this_00->CanMoveVerticallyReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildEvaluator<UE::Cameras::FDrivenControlRotationCameraNodeEvaluator> @ 14d64ce00

FDrivenControlRotationCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FDrivenControlRotationCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  double dVar1;
  FDrivenControlRotationCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x78,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  (this_00->HelperService).Object = (FDrivenControlRotationHelperService *)0x0;
  (this_00->HelperService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(bool *)&this_00->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_00->_padding_ = Default;
  this_00->_padding_ = (longlong)&___7FDrivenControlRotationCameraNodeEvaluator_Cameras_UE__6B_;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this_00->LastControlRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this_00->LastControlRotation).Yaw = dVar1;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this_00->bLastWasActiveCameraRig = false;
  (this_00->LastControlRotation).Roll = dVar1;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags
            ((FCameraNodeEvaluator *)this_00,SupportsOperations|NeedsSerialize);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildEvaluator<UE::Cameras::FEnvelopeShakeCameraNodeEvaluator> @ 14d64cf10

FEnvelopeShakeCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FEnvelopeShakeCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FEnvelopeShakeCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x38,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  pFVar1->EaseInTime = 0.0;
  pFVar1->EaseOutTime = 0.0;
  pFVar1->TotalTime = 0.0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  pFVar1->ShakeEvaluator = (FShakeCameraNodeEvaluator *)0x0;
  pFVar1->CurrentTime = 0.0;
  pFVar1->_padding_ = (longlong)&___7FEnvelopeShakeCameraNodeEvaluator_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FInputAccumulator2DCameraNodeEvaluator> @ 14d64d1d0

FInputAccumulator2DCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FInputAccumulator2DCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FInputAccumulator2DCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x80,8);
  FCameraRigInput2DSlotEvaluator::FCameraRigInput2DSlotEvaluator
            ((FCameraRigInput2DSlotEvaluator *)this_00);
  this_00->InputSlotEvaluator = (FInput2DCameraNodeEvaluator *)0x0;
  this_00->_padding_ = (longlong)&___7FInputAccumulator2DCameraNodeEvaluator_Cameras_UE__6B_;
  *(bool *)&this_00->_padding_ = true;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildEvaluator<UE::Cameras::FInputAxisBinding2DCameraNodeEvaluator> @ 14d64d2c0

FInputAxisBinding2DCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FInputAxisBinding2DCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FInputAxisBinding2DCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0xa0,8);
  memset(this_00,0,0xa0);
  FCameraRigInput2DSlotEvaluator::FCameraRigInput2DSlotEvaluator
            ((FCameraRigInput2DSlotEvaluator *)this_00);
  this_00->_padding_ = (longlong)&___7FInputAxisBinding2DCameraNodeEvaluator_Cameras_UE__6B_;
  (this_00->MultiplierReader).VariableID.Value = 0xffffffff;
  (this_00->MultiplierReader).DefaultValuePtr = (TVector2<double> *)0x0;
  (this_00->InputComponent).field0_0x0.DebugPtr = (UEnhancedInputComponent *)0x0;
  (this_00->AxisValueBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->AxisValueBindings).ArrayNum = 0;
  (this_00->AxisValueBindings).ArrayMax = 0;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildEvaluator<UE::Cameras::FPanningFramingCameraNodeEvaluator> @ 14d64d3e0

FPanningFramingCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FPanningFramingCameraNodeEvaluator>(FCameraNodeEvaluatorStorage *this)

{
  FPanningFramingCameraNodeEvaluator *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x6a0,0x10);
  memset(this_00,0,0x6a0);
  FBaseFramingCameraNodeEvaluator::FBaseFramingCameraNodeEvaluator
            ((FBaseFramingCameraNodeEvaluator *)this_00);
  this_00->_padding_ = (longlong)&___7FPanningFramingCameraNodeEvaluator_Cameras_UE__6B_;
  (this_00->CanPanLaterallyReader).VariableID.Value = 0xffffffff;
  (this_00->CanPanLaterallyReader).DefaultValuePtr = (bool *)0x0;
  (this_00->CanPanVerticallyReader).DefaultValuePtr = (bool *)0x0;
  (this_00->CanPanVerticallyReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildEvaluator<UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator> @ 14d64d4d0

FPerlinNoiseLocationShakeCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FPerlinNoiseLocationShakeCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x170,8);
  memset(pFVar1,0,0x170);
  pFVar1 = FPerlinNoiseLocationShakeCameraNodeEvaluator::
           FPerlinNoiseLocationShakeCameraNodeEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FPerlinNoiseRotationShakeCameraNodeEvaluator> @ 14d64d590

FPerlinNoiseRotationShakeCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FPerlinNoiseRotationShakeCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FPerlinNoiseRotationShakeCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x170,8);
  memset(pFVar1,0,0x170);
  pFVar1 = FPerlinNoiseRotationShakeCameraNodeEvaluator::
           FPerlinNoiseRotationShakeCameraNodeEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator> @ 14d64d680

FRawInputAxisBinding2DCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FRawInputAxisBinding2DCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x58,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (pFVar1->MultiplierReader).DefaultValuePtr = (TVector2<double> *)0x0;
  *(undefined8 *)&(pFVar1->MultiplierReader).VariableID = 0;
  (pFVar1->InputComponent).field0_0x0.DebugPtr = (UEnhancedInputComponent *)0x0;
  (pFVar1->AxisValueBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  pFVar1->_padding_ = (longlong)&___7FRawInputAxisBinding2DCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->MultiplierReader).DefaultValuePtr = (TVector2<double> *)0x0;
  (pFVar1->InputComponent).field0_0x0.DebugPtr = (UEnhancedInputComponent *)0x0;
  (pFVar1->AxisValueBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->AxisValueBindings).ArrayNum = 0;
  (pFVar1->AxisValueBindings).ArrayMax = 0;
  (pFVar1->MultiplierReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator> @ 14d64d780

FUpdateTrackerCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorStorage::
BuildEvaluator<UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator>
          (FCameraNodeEvaluatorStorage *this)

{
  FUpdateTrackerCameraNodeEvaluator *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,0x30,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 7;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->ReceivedUpdates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->ReceivedUpdates).ArrayNum = 0;
  (pFVar1->ReceivedUpdates).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FUpdateTrackerCameraNodeEvaluator_Test_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this,
             (FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

