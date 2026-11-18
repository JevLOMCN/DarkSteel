// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e838790

UScriptStruct * __cdecl FCollectionTransformSelectionClusterDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode,
                         (UObject *)pUVar1,L"CollectionTransformSelectionClusterDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8388e0

FName __thiscall
FCollectionTransformSelectionClusterDataflowNode::GetType
          (FCollectionTransformSelectionClusterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionTransformSelectionClusterDataflowNode");
  return in_RDX;
}

// IsA @ 14e838910

bool __thiscall
FCollectionTransformSelectionClusterDataflowNode::IsA
          (FCollectionTransformSelectionClusterDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionTransformSelectionClusterDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e838978;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e838978:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e838996;
      }
    }
  }
  bVar5 = true;
LAB_14e838996:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8389d0

FStructOnScope * __thiscall
FCollectionTransformSelectionClusterDataflowNode::NewStructOnScope
          (FCollectionTransformSelectionClusterDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode
                           ,(UObject *)pUVar2,L"CollectionTransformSelectionClusterDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e838d30

void __thiscall
FCollectionTransformSelectionClusterDataflowNode::SerializeInternal
          (FCollectionTransformSelectionClusterDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode,
                         (UObject *)pUVar1,L"CollectionTransformSelectionClusterDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e838dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e838eb0

FName __thiscall
FCollectionTransformSelectionClusterDataflowNode::GetDisplayName
          (FCollectionTransformSelectionClusterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionTransformSelectCluster");
  return in_RDX;
}

// GetCategory @ 14e838ee0

FName __thiscall
FCollectionTransformSelectionClusterDataflowNode::GetCategory
          (FCollectionTransformSelectionClusterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e838f10

FString * __thiscall
FCollectionTransformSelectionClusterDataflowNode::GetTags
          (FCollectionTransformSelectionClusterDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e838f40

UScriptStruct * __thiscall
FCollectionTransformSelectionClusterDataflowNode::TypedScriptStruct
          (FCollectionTransformSelectionClusterDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode,
                         (UObject *)pUVar1,L"CollectionTransformSelectionClusterDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e838fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionTransformSelectionClusterDataflowNode::Evaluate
          (FCollectionTransformSelectionClusterDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FManagedArrayCollection *pFVar2;
  FDataflowInput *pFVar3;
  undefined1 auStack_308 [32];
  FConnectionReference local_2e8;
  FCollectionTransformSelectionFacade local_2c8;
  undefined1 local_58 [24];
  ForElementType<unsigned_int> local_40;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_308;
  pFVar2 = &this->Collection;
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowTransformSelection *)puVar1 == &this->TransformSelection) {
    pFVar2 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar2);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    FCollectionTransformSelectionFacade(&local_2c8,pFVar2);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectLeaf
              (&local_2c8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_2e8);
    local_58._0_4_ = FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
    local_58._4_4_ = FDataflowTransformSelection::TransformGroupName.Number;
    local_40 = (ForElementType<unsigned_int>)0x0;
    local_38 = 0;
    local_34 = 0x80;
    FDataflowSelection::InitializeFromCollection((FDataflowSelection *)local_58,pFVar2,false);
    FDataflowSelection::SetFromArray
              ((FDataflowSelection *)local_58,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_2e8)
    ;
    FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
              ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)local_58,
               &this->TransformSelection);
    if (local_40 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_40);
    }
    if (local_2e8.Reference != (void *)0x0) {
      FMemory::Free(local_2e8.Reference);
    }
  }
  else {
    puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar1 == pFVar2) {
      local_2e8.ContainerReference = (void *)0x0;
      local_2e8.Index = -1;
      local_2e8.Reference = pFVar2;
      pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2e8);
      if (pFVar3->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_2e8.Reference,pFVar2);
      }
      else {
        local_58._8_4_ = -1;
        local_58._16_8_ = (void *)0x0;
        local_58._0_8_ = pFVar2;
        FDataflowNode::ForwardInput
                  ((FDataflowNode *)this,param_1,&local_2e8,(FConnectionReference *)local_58);
      }
    }
  }
  return;
}

// FCollectionTransformSelectionClusterDataflowNode @ 14e917780

FCollectionTransformSelectionClusterDataflowNode * __thiscall
FCollectionTransformSelectionClusterDataflowNode::FCollectionTransformSelectionClusterDataflowNode
          (FCollectionTransformSelectionClusterDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FManagedArrayCollection *this_00;
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
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionClusterDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = pFVar1;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_58);
  }
  return this;
}

