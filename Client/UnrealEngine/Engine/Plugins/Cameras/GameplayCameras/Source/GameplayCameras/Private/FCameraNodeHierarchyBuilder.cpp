// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// FCameraNodeHierarchyBuilder @ 14d5434d0

FCameraNodeHierarchyBuilder * __thiscall
UE::Cameras::FCameraNodeHierarchyBuilder::FCameraNodeHierarchyBuilder
          (FCameraNodeHierarchyBuilder *this,FCameraBuildLog *param_1,UBaseCameraObject *param_2)

{
  this->BuildLog = param_1;
  this->CameraObject = param_2;
  FCameraNodeHierarchy::FCameraNodeHierarchy(&this->CameraNodeHierarchy);
  FCameraNodeHierarchy::Build(&this->CameraNodeHierarchy,this->CameraObject);
  return this;
}

// Build @ 14d5497d0

void __thiscall UE::Cameras::FCameraNodeHierarchyBuilder::Build(FCameraNodeHierarchyBuilder *this)

{
  int *piVar1;
  int iVar2;
  UBaseCameraObject *pUVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  UCameraNode **ppUVar7;
  FCameraVariableTableAllocationInfo *pFVar8;
  FCameraContextDataTableAllocationInfo *pFVar9;
  TObjectPtr<UCameraNode_const_>_u_0 local_88;
  undefined8 local_80;
  TArrayView<UCameraNode_*_const,int> local_78;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> local_68;
  FCameraObjectBuildContext local_48;
  
  local_48.BuildLog = this->BuildLog;
  local_48.AllocationInfo.EvaluatorInfo.TotalSizeof = 0;
  local_48.AllocationInfo.EvaluatorInfo.MaxAlignof = 0;
  local_48.AllocationInfo.VariableTableInfo.VariableDefinitions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_48.AllocationInfo.VariableTableInfo.VariableDefinitions.ArrayNum = 0;
  local_48.AllocationInfo.VariableTableInfo.VariableDefinitions.ArrayMax = 0;
  local_48.AllocationInfo.ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_48.AllocationInfo.ContextDataTableInfo.DataDefinitions.ArrayNum = 0;
  local_48.AllocationInfo.ContextDataTableInfo.DataDefinitions.ArrayMax = 0;
  local_80 = 0;
  local_88.DebugPtr = (UCameraNode *)(**(code **)(this->CameraObject->_padding_ + 0x2b0))();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_88.DebugPtr != (UCameraNode *)0x0))
  {
    GC::MarkAsReachable((UObject *)local_88.DebugPtr);
  }
  local_68.Allocations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Allocations.ArrayNum = 0;
  local_68.Allocations.ArrayMax = 0;
  local_68.ObjectInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ObjectInfos.ArrayNum = 0;
  local_68.ObjectInfos.ArrayMax = 0;
  FCameraNodeEvaluatorStorage::BuildEvaluatorTree
            ((FCameraNodeEvaluatorStorage *)&local_68,
             (FCameraNodeEvaluatorTreeBuildParams *)&local_88.ObjectPtr);
  FCameraNodeEvaluatorStorage::GetAllocationInfo
            ((FCameraNodeEvaluatorStorage *)&local_68,&local_48.AllocationInfo.EvaluatorInfo);
  FCameraNodeHierarchy::GetFlattenedHierarchy(&this->CameraNodeHierarchy,&local_78);
  for (ppUVar7 = local_78.DataPtr; ppUVar7 != local_78.DataPtr + local_78.ArrayNum;
      ppUVar7 = ppUVar7 + 1) {
    CallBuild(this,&local_48,*ppUVar7);
  }
  BuildParametersAllocationInfo(this,&local_48);
  pUVar3 = this->CameraObject;
  if (((pUVar3->AllocationInfo).EvaluatorInfo.TotalSizeof ==
       local_48.AllocationInfo.EvaluatorInfo.TotalSizeof) &&
     ((pUVar3->AllocationInfo).EvaluatorInfo.MaxAlignof ==
      local_48.AllocationInfo.EvaluatorInfo.MaxAlignof)) {
    iVar2 = (pUVar3->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum;
    if ((iVar2 == local_48.AllocationInfo.VariableTableInfo.VariableDefinitions.ArrayNum) &&
       (bVar6 = CompareItems<FCameraVariableDefinition,int>
                          ((FCameraVariableDefinition *)
                           (pUVar3->AllocationInfo).VariableTableInfo.VariableDefinitions.
                           AllocatorInstance.Data,
                           (FCameraVariableDefinition *)
                           local_48.AllocationInfo.VariableTableInfo.VariableDefinitions.
                           AllocatorInstance.Data,iVar2), bVar6)) {
      iVar2 = (pUVar3->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayNum;
      if ((iVar2 == local_48.AllocationInfo.ContextDataTableInfo.DataDefinitions.ArrayNum) &&
         (bVar6 = CompareItems<FCameraContextDataDefinition,int>
                            ((FCameraContextDataDefinition *)
                             (pUVar3->AllocationInfo).ContextDataTableInfo.DataDefinitions.
                             AllocatorInstance.Data,
                             (FCameraContextDataDefinition *)
                             local_48.AllocationInfo.ContextDataTableInfo.DataDefinitions.
                             AllocatorInstance.Data,iVar2), bVar6)) goto LAB_14d5499d8;
    }
  }
  FVar4.Data = local_48.AllocationInfo.VariableTableInfo.VariableDefinitions.AllocatorInstance.Data;
  pFVar8 = &(pUVar3->AllocationInfo).VariableTableInfo;
  (pUVar3->AllocationInfo).EvaluatorInfo = local_48.AllocationInfo.EvaluatorInfo;
  if (pFVar8 != &local_48.AllocationInfo.VariableTableInfo) {
    iVar5 = local_48.AllocationInfo.VariableTableInfo.VariableDefinitions.ArrayNum;
    piVar1 = &(pUVar3->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax;
    iVar2 = *piVar1;
    (pUVar3->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum =
         local_48.AllocationInfo.VariableTableInfo.VariableDefinitions.ArrayNum;
    if ((local_48.AllocationInfo.VariableTableInfo.VariableDefinitions.ArrayNum == 0) &&
       (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_48.AllocationInfo.VariableTableInfo.VariableDefinitions.ArrayNum,iVar2
                 ,(ForAnyElementType *)pFVar8,
                 local_48.AllocationInfo.VariableTableInfo.VariableDefinitions.ArrayNum,piVar1);
      ConstructItems<FCameraVariableDefinition,FCameraVariableDefinition,int>
                ((pFVar8->VariableDefinitions).AllocatorInstance.Data,
                 (FCameraVariableDefinition *)FVar4.Data,iVar5);
    }
  }
  FVar4.Data = local_48.AllocationInfo.ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data;
  pFVar9 = &(pUVar3->AllocationInfo).ContextDataTableInfo;
  if (pFVar9 != &local_48.AllocationInfo.ContextDataTableInfo) {
    iVar5 = local_48.AllocationInfo.ContextDataTableInfo.DataDefinitions.ArrayNum;
    piVar1 = &(pUVar3->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayMax;
    iVar2 = *piVar1;
    (pUVar3->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayNum =
         local_48.AllocationInfo.ContextDataTableInfo.DataDefinitions.ArrayNum;
    if ((local_48.AllocationInfo.ContextDataTableInfo.DataDefinitions.ArrayNum == 0) && (iVar2 == 0)
       ) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_48.AllocationInfo.ContextDataTableInfo.DataDefinitions.ArrayNum,iVar2,
                 (ForAnyElementType *)pFVar9,
                 local_48.AllocationInfo.ContextDataTableInfo.DataDefinitions.ArrayNum,piVar1);
      ConstructItems<FCameraContextDataDefinition,FCameraContextDataDefinition,int>
                ((pFVar9->DataDefinitions).AllocatorInstance.Data,
                 (FCameraContextDataDefinition *)FVar4.Data,iVar5);
    }
  }
LAB_14d5499d8:
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
  ~TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>(&local_68);
  if ((FCameraContextDataDefinition *)
      local_48.AllocationInfo.ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data !=
      (FCameraContextDataDefinition *)0x0) {
    FMemory::Free(local_48.AllocationInfo.ContextDataTableInfo.DataDefinitions.AllocatorInstance.
                  Data);
  }
  if ((FCameraVariableDefinition *)
      local_48.AllocationInfo.VariableTableInfo.VariableDefinitions.AllocatorInstance.Data !=
      (FCameraVariableDefinition *)0x0) {
    FMemory::Free(local_48.AllocationInfo.VariableTableInfo.VariableDefinitions.AllocatorInstance.
                  Data);
  }
  return;
}

// BuildParametersAllocationInfo @ 14d54f8f0

void __thiscall
UE::Cameras::FCameraNodeHierarchyBuilder::BuildParametersAllocationInfo
          (FCameraNodeHierarchyBuilder *this,FCameraObjectBuildContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  int iVar3;
  UBaseCameraObject *pUVar4;
  FCameraVariableDefinition *pFVar5;
  FCameraContextDataDefinition *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FCameraVariableDefinition local_78;
  FCameraContextDataDefinition local_60;
  
  pUVar4 = this->CameraObject;
  pFVar11 = (pUVar4->Interface).BlendableParameters.AllocatorInstance.Data;
  iVar3 = (pUVar4->Interface).BlendableParameters.ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar3 * 8;
  while( true ) {
    if ((pUVar4->Interface).BlendableParameters.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UCameraObjectInterfaceBlendableParameter>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar1) break;
    if (((*(UCameraObjectInterfaceBlendableParameter **)pFVar11)->PrivateVariableID).Value !=
        0xffffffff) {
      UCameraObjectInterfaceBlendableParameter::GetVariableDefinition
                (*(UCameraObjectInterfaceBlendableParameter **)pFVar11,&local_78);
      pFVar5 = (FCameraVariableDefinition *)
               (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.
               Data;
      if ((pFVar5 <= &local_78) &&
         (&local_78 <
          pFVar5 + (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar9 = (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum;
      piVar2 = &(param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax;
      if (iVar9 == *piVar2) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)&(param_1->AllocationInfo).VariableTableInfo,
                           piVar2);
      }
      (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum = iVar9 + 1;
      pFVar10 = (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.
                Data + (longlong)iVar9 * 0x18;
      *(uint *)pFVar10 = local_78.VariableID.Value;
      *(ECameraVariableType *)(pFVar10 + 4) = local_78.VariableType;
      ((TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar10 + 8))->DebugPtr =
           (UScriptStruct *)local_78.BlendableStructType.field0_0x0;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (local_78.BlendableStructType.field0_0x0.DebugPtr !=
          (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
        GC::MarkAsReachable((UObject *)local_78.BlendableStructType.field0_0x0);
      }
      pFVar10[0x10] = (FScriptContainerElement)local_78.bIsPrivate;
      pFVar10[0x11] = (FScriptContainerElement)local_78.bIsInput;
      pFVar10[0x12] = (FScriptContainerElement)local_78.bAutoReset;
    }
    pFVar11 = pFVar11 + 8;
  }
  pUVar4 = this->CameraObject;
  pFVar11 = (pUVar4->Interface).DataParameters.AllocatorInstance.Data;
  iVar3 = (pUVar4->Interface).DataParameters.ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar3 * 8;
  while( true ) {
    if ((pUVar4->Interface).DataParameters.ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UCameraObjectInterfaceDataParameter>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar11 == pFVar1) break;
    if (((*(UCameraObjectInterfaceDataParameter **)pFVar11)->PrivateDataID).Value != 0xffffffff) {
      UCameraObjectInterfaceDataParameter::GetDataDefinition
                (*(UCameraObjectInterfaceDataParameter **)pFVar11,&local_60);
      pFVar6 = (FCameraContextDataDefinition *)
               (param_1->AllocationInfo).ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data
      ;
      if ((pFVar6 <= &local_60) &&
         (&local_60 <
          pFVar6 + (param_1->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayMax)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar9 = (param_1->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayNum;
      piVar2 = &(param_1->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayMax;
      if (iVar9 == *piVar2) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,(ForAnyElementType *)
                                 &(param_1->AllocationInfo).ContextDataTableInfo,piVar2);
      }
      pFVar10 = (param_1->AllocationInfo).ContextDataTableInfo.DataDefinitions.AllocatorInstance.
                Data;
      (param_1->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayNum = iVar9 + 1;
      pFVar10 = pFVar10 + (longlong)iVar9 * 0x20;
      *(uint *)pFVar10 = local_60.DataID.Value;
      *(ECameraContextDataType *)(pFVar10 + 4) = local_60.DataType;
      *(ECameraContextDataContainerType *)(pFVar10 + 8) = local_60.DataContainerType;
      ((TObjectPtr<UObject_const_>_u_0 *)(pFVar10 + 0x10))->DebugPtr =
           (UObject *)local_60.DataTypeObject.field0_0x0;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (local_60.DataTypeObject.field0_0x0.DebugPtr != (TObjectPtr<UObject_const_>_u_0)0x0)) {
        GC::MarkAsReachable((UObject *)local_60.DataTypeObject.field0_0x0);
      }
      pFVar10[0x18] = (FScriptContainerElement)local_60.bAutoReset;
    }
    pFVar11 = pFVar11 + 8;
  }
  return;
}

// CallBuild @ 14d54fd80

void __thiscall
UE::Cameras::FCameraNodeHierarchyBuilder::CallBuild
          (FCameraNodeHierarchyBuilder *this,FCameraObjectBuildContext *param_1,UCameraNode *param_2
          )

{
  FProperty *this_00;
  longlong lVar1;
  undefined4 uVar2;
  UScriptStruct *pUVar3;
  void *pvVar4;
  UClass *pUVar5;
  longlong *plVar6;
  UCameraVariableAsset *pUVar7;
  ulonglong uVar8;
  UStruct *pUVar9;
  bool bVar10;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  void *local_28;
  undefined8 local_20;
  
  local_38._0_8_ = param_2->_padding_;
  if ((UStruct *)local_38._0_8_ == (UStruct *)0x0) {
    local_38._8_8_ = (FProperty *)0x0;
  }
  else {
    local_38._8_8_ = ((UStruct *)local_38._0_8_)->ChildProperties;
  }
  local_28 = (void *)CONCAT17(local_28._7_1_,0x101ffffffff);
  TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)local_38);
  this_00 = (FProperty *)local_38._8_8_;
  do {
    local_38._8_8_ = this_00;
    if (this_00 == (FProperty *)0x0) {
      pUVar5 = Z_Construct_UClass_UCustomCameraNodeParameterProvider_NoRegister();
      plVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar5);
      if (plVar6 != (longlong *)0x0) {
        local_38._0_8_ = (UStruct *)0x0;
        local_38._8_8_ = (FProperty *)0x0;
        local_28 = (void *)0x0;
        local_20 = 0;
        (**(code **)(*plVar6 + 0x10))(plVar6,local_38);
        uVar2 = local_38._8_4_;
        uVar8 = (ulonglong)(int)local_38._8_4_;
        plVar6 = (longlong *)local_38._0_8_;
        lVar1 = uVar8 * 6;
        pUVar9 = (UStruct *)local_38._0_8_;
        while( true ) {
          if ((int)uVar8 != uVar2) {
            `TCheckedPointerIterator<FCustomCameraNodeParameterInfos::FBlendableParameterInfo,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (pUVar9 == (UStruct *)(plVar6 + lVar1)) break;
          Cameras::Internal::AddVariableToAllocationInfo
                    ((UCameraVariableAsset *)pUVar9->_padding_,
                     &(param_1->AllocationInfo).VariableTableInfo);
          uVar8 = local_38._8_8_ & 0xffffffff;
          pUVar9 = (UStruct *)&pUVar9->_padding_;
        }
        if (local_28 != (void *)0x0) {
          FMemory::Free(local_28);
        }
        if ((UStruct *)local_38._0_8_ != (UStruct *)0x0) {
          FMemory::Free((void *)local_38._0_8_);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014d5502ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2->_padding_ + 0x2c0))(param_2,param_1);
      return;
    }
    if (((*(uint *)(this_00->_padding_ + 0x18) >> 0x14 & 1) != 0) && (this_00 != (FProperty *)0x0))
    {
      pUVar3 = FBooleanCameraParameter::StaticStruct();
      if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
        bVar10 = pUVar3 == (UScriptStruct *)0x0;
      }
      else {
        bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
      }
      if (bVar10) {
LAB_14d5501f9:
        pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)param_2,0);
        pUVar7 = *(UCameraVariableAsset **)((longlong)pvVar4 + 8);
      }
      else {
        pUVar3 = FBooleanCameraVariableReference::StaticStruct();
        if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
          bVar10 = pUVar3 == (UScriptStruct *)0x0;
        }
        else {
          bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
        }
        if (bVar10) goto LAB_14d5501f9;
        pUVar3 = FInteger32CameraParameter::StaticStruct();
        if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
          bVar10 = pUVar3 == (UScriptStruct *)0x0;
        }
        else {
          bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
        }
        if (bVar10) goto LAB_14d5501f9;
        pUVar3 = FInteger32CameraVariableReference::StaticStruct();
        if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
          bVar10 = pUVar3 == (UScriptStruct *)0x0;
        }
        else {
          bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
        }
        if (bVar10) goto LAB_14d5501f9;
        pUVar3 = FFloatCameraParameter::StaticStruct();
        if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
          bVar10 = pUVar3 == (UScriptStruct *)0x0;
        }
        else {
          bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
        }
        if (bVar10) goto LAB_14d5501f9;
        pUVar3 = FFloatCameraVariableReference::StaticStruct();
        if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
          bVar10 = pUVar3 == (UScriptStruct *)0x0;
        }
        else {
          bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
        }
        if (bVar10) goto LAB_14d5501f9;
        pUVar3 = FDoubleCameraParameter::StaticStruct();
        if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
          bVar10 = pUVar3 == (UScriptStruct *)0x0;
        }
        else {
          bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
        }
        if (!bVar10) {
          pUVar3 = FDoubleCameraVariableReference::StaticStruct();
          if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
            bVar10 = pUVar3 == (UScriptStruct *)0x0;
          }
          else {
            bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
          }
          if (!bVar10) {
            pUVar3 = FVector2fCameraParameter::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) goto LAB_14d54fee0;
            pUVar3 = FVector2fCameraVariableReference::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) goto LAB_14d5501f9;
            pUVar3 = FVector2dCameraParameter::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) {
LAB_14d54ff73:
              pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                 (this_00,(UObject *)param_2,0);
              pUVar7 = *(UCameraVariableAsset **)((longlong)pvVar4 + 0x18);
              goto LAB_14d55020b;
            }
            pUVar3 = FVector2dCameraVariableReference::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) goto LAB_14d5501f9;
            pUVar3 = FVector3fCameraParameter::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) goto LAB_14d54fee0;
            pUVar3 = FVector3fCameraVariableReference::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) goto LAB_14d5501f9;
            pUVar3 = FVector3dCameraParameter::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) {
LAB_14d55000a:
              pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                 (this_00,(UObject *)param_2,0);
              pUVar7 = *(UCameraVariableAsset **)((longlong)pvVar4 + 0x20);
              goto LAB_14d55020b;
            }
            pUVar3 = FVector3dCameraVariableReference::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) goto LAB_14d5501f9;
            pUVar3 = FVector4fCameraParameter::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) goto LAB_14d54ff73;
            pUVar3 = FVector4fCameraVariableReference::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) goto LAB_14d5501f9;
            pUVar3 = FVector4dCameraParameter::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) {
              pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                 (this_00,(UObject *)param_2,0);
              pUVar7 = *(UCameraVariableAsset **)((longlong)pvVar4 + 0x28);
              goto LAB_14d55020b;
            }
            pUVar3 = FVector4dCameraVariableReference::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) goto LAB_14d5501f9;
            pUVar3 = FRotator3fCameraParameter::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) goto LAB_14d54fee0;
            pUVar3 = FRotator3fCameraVariableReference::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) goto LAB_14d5501f9;
            pUVar3 = FRotator3dCameraParameter::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (bVar10) goto LAB_14d55000a;
            pUVar3 = FRotator3dCameraVariableReference::StaticStruct();
            if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
              bVar10 = pUVar3 == (UScriptStruct *)0x0;
            }
            else {
              bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
            }
            if (!bVar10) {
              pUVar3 = FTransform3fCameraParameter::StaticStruct();
              if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
                bVar10 = pUVar3 == (UScriptStruct *)0x0;
              }
              else {
                bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
              }
              if (bVar10) {
                pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                   (this_00,(UObject *)param_2,0);
                pUVar7 = *(UCameraVariableAsset **)((longlong)pvVar4 + 0x38);
                goto LAB_14d55020b;
              }
              pUVar3 = FTransform3fCameraVariableReference::StaticStruct();
              if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
                bVar10 = pUVar3 == (UScriptStruct *)0x0;
              }
              else {
                bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
              }
              if (!bVar10) {
                pUVar3 = FTransform3dCameraParameter::StaticStruct();
                if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
                  bVar10 = pUVar3 == (UScriptStruct *)0x0;
                }
                else {
                  bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
                }
                if (bVar10) {
                  pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                     (this_00,(UObject *)param_2,0);
                  pUVar7 = *(UCameraVariableAsset **)((longlong)pvVar4 + 0x68);
                  goto LAB_14d55020b;
                }
                pUVar3 = FTransform3dCameraVariableReference::StaticStruct();
                if ((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0) {
                  bVar10 = pUVar3 == (UScriptStruct *)0x0;
                }
                else {
                  bVar10 = (UScriptStruct *)this_00[1]._padding_ == pUVar3;
                }
                if (!bVar10) goto LAB_14d550214;
              }
            }
          }
          goto LAB_14d5501f9;
        }
LAB_14d54fee0:
        pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)param_2,0);
        pUVar7 = *(UCameraVariableAsset **)((longlong)pvVar4 + 0x10);
      }
LAB_14d55020b:
      Cameras::Internal::AddVariableToAllocationInfo
                (pUVar7,&(param_1->AllocationInfo).VariableTableInfo);
    }
LAB_14d550214:
    local_38._8_8_ = this_00->_padding_;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)local_38);
    this_00 = (FProperty *)local_38._8_8_;
  } while( true );
}

// PreBuild @ 14d55dea0

void __thiscall
UE::Cameras::FCameraNodeHierarchyBuilder::PreBuild(FCameraNodeHierarchyBuilder *this)

{
  UCameraNode **ppUVar1;
  TArrayView<UCameraNode_*_const,int> local_18;
  
  FCameraNodeHierarchy::GetFlattenedHierarchy(&this->CameraNodeHierarchy,&local_18);
  for (ppUVar1 = local_18.DataPtr; ppUVar1 != local_18.DataPtr + local_18.ArrayNum;
      ppUVar1 = ppUVar1 + 1) {
    (**(code **)((*ppUVar1)->_padding_ + 0x2b8))(*ppUVar1,this->BuildLog);
  }
  return;
}

