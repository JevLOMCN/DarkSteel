// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e82c960

UScriptStruct * __cdecl FSelectionToVertexListDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSelectionToVertexListDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSelectionToVertexListDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSelectionToVertexListDataflowNode,
                         (UObject *)pUVar1,L"SelectionToVertexListDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSelectionToVertexListDataflowNode.OuterSingleton;
}

// GetType @ 14e82d010

FName __thiscall
FSelectionToVertexListDataflowNode::GetType(FSelectionToVertexListDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSelectionToVertexListDataflowNode");
  return in_RDX;
}

// IsA @ 14e82d040

bool __thiscall
FSelectionToVertexListDataflowNode::IsA(FSelectionToVertexListDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSelectionToVertexListDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e82d0a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e82d0a8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e82d0c6;
      }
    }
  }
  bVar5 = true;
LAB_14e82d0c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e82d140

FStructOnScope * __thiscall
FSelectionToVertexListDataflowNode::NewStructOnScope(FSelectionToVertexListDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSelectionToVertexListDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSelectionToVertexListDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSelectionToVertexListDataflowNode,
                           (UObject *)pUVar2,L"SelectionToVertexListDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSelectionToVertexListDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e82d210

void __thiscall
FSelectionToVertexListDataflowNode::SerializeInternal
          (FSelectionToVertexListDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSelectionToVertexListDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSelectionToVertexListDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSelectionToVertexListDataflowNode,
                         (UObject *)pUVar1,L"SelectionToVertexListDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSelectionToVertexListDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSelectionToVertexListDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e82d28d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e82d2a0

FName __thiscall
FSelectionToVertexListDataflowNode::GetDisplayName(FSelectionToVertexListDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SelectionToVertexList");
  return in_RDX;
}

// GetCategory @ 14e82d2d0

FName __thiscall
FSelectionToVertexListDataflowNode::GetCategory(FSelectionToVertexListDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Selection|Utility");
  return in_RDX;
}

// GetTags @ 14e82d340

FString * __thiscall
FSelectionToVertexListDataflowNode::GetTags
          (FSelectionToVertexListDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e82d3b0

UScriptStruct * __thiscall
FSelectionToVertexListDataflowNode::TypedScriptStruct(FSelectionToVertexListDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSelectionToVertexListDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSelectionToVertexListDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSelectionToVertexListDataflowNode,
                         (UObject *)pUVar1,L"SelectionToVertexListDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSelectionToVertexListDataflowNode.OuterSingleton;
}

// Evaluate @ 14e82d6c0

void __thiscall
FSelectionToVertexListDataflowNode::Evaluate
          (FSelectionToVertexListDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowSelection *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = (FDataflowSelection *)
            FDataflowNode::GetValue<FDataflowVertexSelection>
                      ((FDataflowNode *)this,param_1,&this->VertexSelection);
  pTVar1 = FDataflowSelection::AsArray(this_00,&local_18);
  FDataflowNode::
  SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,pTVar1,&this->VertexList);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FSelectionToVertexListDataflowNode @ 14e92afd0

FSelectionToVertexListDataflowNode * __thiscall
FSelectionToVertexListDataflowNode::FSelectionToVertexListDataflowNode
          (FSelectionToVertexListDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  uint uVar1;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  local_48.Reference = &this->VertexSelection;
  local_48.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FSelectionToVertexListDataflowNode__6B_;
  uVar1 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&((FDataflowVertexSelection *)local_48.Reference)->field_0x0 =
       FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&((FDataflowVertexSelection *)local_48.Reference)->field_0x4 = uVar1;
  *(undefined8 *)&(this->VertexSelection).field_0x18 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x20 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x24 = 0x80;
  (this->VertexList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexList).ArrayNum = 0;
  (this->VertexList).ArrayMax = 0;
  local_48.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->VertexList;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

