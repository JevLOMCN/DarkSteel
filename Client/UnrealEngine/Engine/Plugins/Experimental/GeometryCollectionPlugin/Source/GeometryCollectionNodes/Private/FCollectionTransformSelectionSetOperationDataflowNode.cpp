// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8c9250

UScriptStruct * __cdecl FCollectionTransformSelectionSetOperationDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionSetOperationDataflowNode")
    ;
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8c92f0

FName __thiscall
FCollectionTransformSelectionSetOperationDataflowNode::GetType
          (FCollectionTransformSelectionSetOperationDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionTransformSelectionSetOperationDataflowNode");
  return in_RDX;
}

// IsA @ 14e8c9320

bool __thiscall
FCollectionTransformSelectionSetOperationDataflowNode::IsA
          (FCollectionTransformSelectionSetOperationDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionTransformSelectionSetOperationDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8c9388;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8c9388:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8c93a6;
      }
    }
  }
  bVar5 = true;
LAB_14e8c93a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8c93e0

FStructOnScope * __thiscall
FCollectionTransformSelectionSetOperationDataflowNode::NewStructOnScope
          (FCollectionTransformSelectionSetOperationDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode
                           ,(UObject *)pUVar2,
                           L"CollectionTransformSelectionSetOperationDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8c9460

void __thiscall
FCollectionTransformSelectionSetOperationDataflowNode::SerializeInternal
          (FCollectionTransformSelectionSetOperationDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionSetOperationDataflowNode")
    ;
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode
             .OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode
             .OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8c94dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8c9520

FName __thiscall
FCollectionTransformSelectionSetOperationDataflowNode::GetDisplayName
          (FCollectionTransformSelectionSetOperationDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionTransformSelectionSetOperation");
  return in_RDX;
}

// GetCategory @ 14e8c9560

FName __thiscall
FCollectionTransformSelectionSetOperationDataflowNode::GetCategory
          (FCollectionTransformSelectionSetOperationDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e8c99f0

FString * __thiscall
FCollectionTransformSelectionSetOperationDataflowNode::GetTags
          (FCollectionTransformSelectionSetOperationDataflowNode *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8c9a20

UScriptStruct * __thiscall
FCollectionTransformSelectionSetOperationDataflowNode::TypedScriptStruct
          (FCollectionTransformSelectionSetOperationDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionSetOperationDataflowNode")
    ;
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8c9d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCollectionTransformSelectionSetOperationDataflowNode::Evaluate
          (FCollectionTransformSelectionSetOperationDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  ESetOperationEnum EVar1;
  undefined1 *puVar2;
  FDataflowSelection *this_00;
  FDataflowSelection *pFVar3;
  undefined1 auStack_78 [32];
  FString local_58;
  FDataflowSelection local_48;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowTransformSelection *)puVar2 == &this->TransformSelection) {
    this_00 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->TransformSelectionA);
    pFVar3 = (FDataflowSelection *)
             FDataflowNode::GetValue<FDataflowTransformSelection>
                       ((FDataflowNode *)this,param_1,&this->TransformSelectionB);
    local_48.GroupName = FDataflowTransformSelection::TransformGroupName;
    local_48.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_48.SelectionArray.NumBits = 0;
    local_48.SelectionArray.MaxBits = 0x80;
    if ((this_00->SelectionArray).NumBits == (pFVar3->SelectionArray).NumBits) {
      EVar1 = this->Operation;
      if (EVar1 == Dataflow_SetOperation_AND) {
        FDataflowSelection::AND(this_00,pFVar3,&local_48);
      }
      else if (EVar1 == Dataflow_SetOperation_OR) {
        FDataflowSelection::OR(this_00,pFVar3,&local_48);
      }
      else if (EVar1 == Dataflow_SetOperation_XOR) {
        FDataflowSelection::XOR(this_00,pFVar3,&local_48);
      }
      else if (EVar1 == Dataflow_SetOperation_Subtract) {
        FDataflowSelection::Subtract(this_00,pFVar3,&local_48);
      }
    }
    else {
      ::FString::FString(&local_58,"Input TransformSelections have different number of elements.");
      if (1 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
              ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_48,
               &this->TransformSelection);
    if (local_48.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_48.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FCollectionTransformSelectionSetOperationDataflowNode @ 14e919120

FCollectionTransformSelectionSetOperationDataflowNode * __thiscall
FCollectionTransformSelectionSetOperationDataflowNode::
FCollectionTransformSelectionSetOperationDataflowNode
          (FCollectionTransformSelectionSetOperationDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FDataflowTransformSelection *pFVar1;
  FDataflowTransformSelection *pFVar2;
  FDataflowTransformSelection *pFVar3;
  uint uVar4;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->Operation = Dataflow_SetOperation_AND;
  pFVar1 = &this->TransformSelectionA;
  pFVar2 = &this->TransformSelectionB;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar3 = &this->TransformSelection;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionSetOperationDataflowNode__6B_;
  uVar4 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar4;
  *(undefined8 *)&(this->TransformSelectionA).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelectionA).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelectionA).field_0x24 = 0x80;
  uVar4 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar2->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar4;
  *(undefined8 *)&(this->TransformSelectionB).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelectionB).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelectionB).field_0x24 = 0x80;
  uVar4 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar3->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar3->field_0x4 = uVar4;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  local_38.Reference = pFVar3;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FDataflowTransformSelection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FCollectionTransformSelectionSetOperationDataflowNode @ 14e919280

FCollectionTransformSelectionSetOperationDataflowNode * __thiscall
FCollectionTransformSelectionSetOperationDataflowNode::
FCollectionTransformSelectionSetOperationDataflowNode
          (FCollectionTransformSelectionSetOperationDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->Operation = Dataflow_SetOperation_AND;
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionSetOperationDataflowNode__6B_;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelectionA).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelectionA).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelectionA).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelectionA).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelectionA).field_0x24 = 0x80;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelectionB).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelectionB).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelectionB).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelectionB).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelectionB).field_0x24 = 0x80;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  return this;
}

