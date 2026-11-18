// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e85ddb0

UScriptStruct * __cdecl FFloatArrayComputeStatisticsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode,
                         (UObject *)pUVar1,L"FloatArrayComputeStatisticsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode.OuterSingleton;
}

// GetType @ 14e85dee0

FName __thiscall
FFloatArrayComputeStatisticsDataflowNode::GetType(FFloatArrayComputeStatisticsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FFloatArrayComputeStatisticsDataflowNode");
  return in_RDX;
}

// IsA @ 14e85df10

bool __thiscall
FFloatArrayComputeStatisticsDataflowNode::IsA
          (FFloatArrayComputeStatisticsDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FFloatArrayComputeStatisticsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e85df78;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e85df78:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e85df96;
      }
    }
  }
  bVar5 = true;
LAB_14e85df96:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e85e010

FStructOnScope * __thiscall
FFloatArrayComputeStatisticsDataflowNode::NewStructOnScope
          (FFloatArrayComputeStatisticsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode,
                           (UObject *)pUVar2,L"FloatArrayComputeStatisticsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e85e0e0

void __thiscall
FFloatArrayComputeStatisticsDataflowNode::SerializeInternal
          (FFloatArrayComputeStatisticsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode,
                         (UObject *)pUVar1,L"FloatArrayComputeStatisticsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e85e15d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e85e1c0

FName __thiscall
FFloatArrayComputeStatisticsDataflowNode::GetDisplayName
          (FFloatArrayComputeStatisticsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FloatArrayComputeStatistics");
  return in_RDX;
}

// GetCategory @ 14e85e1f0

FName __thiscall
FFloatArrayComputeStatisticsDataflowNode::GetCategory
          (FFloatArrayComputeStatisticsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Array");
  return in_RDX;
}

// GetTags @ 14e85e220

FString * __thiscall
FFloatArrayComputeStatisticsDataflowNode::GetTags
          (FFloatArrayComputeStatisticsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e85e2a0

UScriptStruct * __thiscall
FFloatArrayComputeStatisticsDataflowNode::TypedScriptStruct
          (FFloatArrayComputeStatisticsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode,
                         (UObject *)pUVar1,L"FloatArrayComputeStatisticsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e85e6c0

void __thiscall
FFloatArrayComputeStatisticsDataflowNode::Evaluate
          (FFloatArrayComputeStatisticsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2
          )

{
  code *pcVar1;
  float fVar2;
  ForAnyElementType _Src;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  FDataflowSelection *this_00;
  FDataflowInput *pFVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  float local_res8 [2];
  FContext *local_res10;
  TArray<float,TSizedDefaultAllocator<32>_> local_98;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  TArray<float,TSizedDefaultAllocator<32>_> local_78;
  FConnectionReference local_68 [2];
  
  local_res10 = param_1;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((float *)puVar6 == &this->Value) ||
     (puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (TArray<int,TSizedDefaultAllocator<32>_> *)puVar6 == &this->Indices)) {
    pTVar7 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,&this->FloatArray);
    this_00 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->TransformSelection);
    local_68[0].Index = -1;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_68[0].ContainerReference = (void *)0x0;
    local_68[0].Reference = &this->TransformSelection;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,local_68);
    if ((pFVar8->Connection == (FDataflowOutput *)0x0) ||
       ((this_00->SelectionArray).NumBits != pTVar7->ArrayNum)) {
      iVar5 = pTVar7->ArrayNum;
      uVar9 = 0;
      if (0 < iVar5) {
        lVar10 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar9 < iVar5) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar11 = (pTVar7->AllocatorInstance).Data + lVar10;
          if (((local_98.AllocatorInstance.Data <= pFVar11) &&
              (pFVar11 < local_98.AllocatorInstance.Data + (longlong)local_98.ArrayMax * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar5 = local_98.ArrayNum;
          if (local_98.ArrayNum == local_98.ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_98.AllocatorInstance,&local_98.ArrayMax);
          }
          uVar9 = uVar9 + 1;
          local_98.ArrayNum = iVar5 + 1;
          lVar10 = lVar10 + 4;
          *(undefined4 *)(local_98.AllocatorInstance.Data + (longlong)iVar5 * 4) =
               *(undefined4 *)pFVar11;
          iVar5 = pTVar7->ArrayNum;
          param_1 = local_res10;
        } while ((int)uVar9 < iVar5);
      }
    }
    else {
      uVar9 = 0;
      if (0 < pTVar7->ArrayNum) {
        lVar10 = 0;
        do {
          bVar3 = FDataflowSelection::IsSelected(this_00,uVar9);
          if (bVar3) {
            uVar4 = 0;
            if ((int)uVar9 < pTVar7->ArrayNum) {
              uVar4 = ~uVar9 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar11 = (pTVar7->AllocatorInstance).Data + lVar10;
            if (((local_98.AllocatorInstance.Data <= pFVar11) &&
                (pFVar11 < local_98.AllocatorInstance.Data + (longlong)local_98.ArrayMax * 4)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar5 = local_98.ArrayNum;
            if (local_98.ArrayNum == local_98.ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_98.AllocatorInstance,&local_98.ArrayMax);
            }
            local_98.ArrayNum = iVar5 + 1;
            *(undefined4 *)(local_98.AllocatorInstance.Data + (longlong)iVar5 * 4) =
                 *(undefined4 *)pFVar11;
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 4;
          param_1 = local_res10;
        } while ((int)uVar9 < pTVar7->ArrayNum);
      }
    }
    _Src.Data = local_98.AllocatorInstance.Data;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    switch(this->OperationName) {
    case Dataflow_EStatisticsOperationEnum_Min:
      local_res8[0] = ComputeMin(&local_98,&local_88);
      break;
    case Dataflow_EStatisticsOperationEnum_Max:
      local_res8[0] = ComputeMax(&local_98,&local_88);
      break;
    case Dataflow_EStatisticsOperationEnum_Mean:
      uVar9 = 0;
      fVar2 = 0.0;
      iVar5 = local_98.ArrayNum;
      if (0 < local_98.ArrayNum) {
        lVar10 = 0;
        fVar2 = 0.0;
        do {
          uVar4 = 0;
          if ((int)uVar9 < iVar5) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if (uVar4 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar5 = local_98.ArrayNum;
          }
          uVar9 = uVar9 + 1;
          pFVar11 = local_98.AllocatorInstance.Data + lVar10;
          lVar10 = lVar10 + 4;
          fVar2 = fVar2 + *(float *)pFVar11;
        } while ((int)uVar9 < iVar5);
      }
      local_res8[0] = fVar2 / (float)iVar5;
      break;
    case Dataflow_EStatisticsOperationEnum_Median:
      lVar10 = (longlong)local_98.ArrayNum;
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = local_98.ArrayNum;
      if (local_98.ArrayNum == 0) {
        local_78.ArrayMax = local_98.ArrayNum;
        local_res8[0] = ComputeMedian(&local_78,&local_88);
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_98.ArrayNum,0,&local_78.AllocatorInstance,local_98.ArrayNum,
                   &local_78.ArrayMax);
        memcpy(local_78.AllocatorInstance.Data,_Src.Data,lVar10 << 2);
        local_res8[0] = ComputeMedian(&local_78,&local_88);
      }
      break;
    case Dataflow_EStatisticsOperationEnum_Mode:
      local_res8[0] = ComputeMode(&local_98,&local_88);
      break;
    case Dataflow_EStatisticsOperationEnum_Sum:
      uVar9 = 0;
      fVar2 = 0.0;
      local_res8[0] = 0.0;
      if (0 < local_98.ArrayNum) {
        lVar10 = 0;
        iVar5 = local_98.ArrayNum;
        do {
          uVar4 = 0;
          if ((int)uVar9 < iVar5) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if (uVar4 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar5 = local_98.ArrayNum;
          }
          uVar9 = uVar9 + 1;
          pFVar11 = local_98.AllocatorInstance.Data + lVar10;
          lVar10 = lVar10 + 4;
          fVar2 = fVar2 + *(float *)pFVar11;
          local_res8[0] = fVar2;
        } while ((int)uVar9 < iVar5);
      }
    }
    FDataflowNode::SetValue<float_&,float>((FDataflowNode *)this,param_1,local_res8,&this->Value);
    FDataflowNode::
    SetValue<TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_88,&this->Indices);
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  return;
}

// FFloatArrayComputeStatisticsDataflowNode @ 14e91d120

FFloatArrayComputeStatisticsDataflowNode * __thiscall
FFloatArrayComputeStatisticsDataflowNode::FFloatArrayComputeStatisticsDataflowNode
          (FFloatArrayComputeStatisticsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *pFVar3;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_58.Reference = &this->FloatArray;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar1 = &this->TransformSelection;
  local_58.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FFloatArrayComputeStatisticsDataflowNode__6B_;
  (((TArray<float,TSizedDefaultAllocator<32>_> *)local_58.Reference)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->OperationName = Dataflow_EStatisticsOperationEnum_Min;
  this->Value = 0.0;
  (this->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Indices).ArrayNum = 0;
  (this->Indices).ArrayMax = 0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Value;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Indices;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_58);
  }
  return this;
}

// FFloatArrayComputeStatisticsDataflowNode @ 14e91d2a0

FFloatArrayComputeStatisticsDataflowNode * __thiscall
FFloatArrayComputeStatisticsDataflowNode::FFloatArrayComputeStatisticsDataflowNode
          (FFloatArrayComputeStatisticsDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FFloatArrayComputeStatisticsDataflowNode__6B_;
  (this->FloatArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->OperationName = Dataflow_EStatisticsOperationEnum_Min;
  this->Value = 0.0;
  (this->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Indices).ArrayNum = 0;
  (this->Indices).ArrayMax = 0;
  return this;
}

