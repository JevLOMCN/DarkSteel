// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 11

// StaticStruct @ 1462c4730

UScriptStruct * __cdecl FDataflowSubGraphGetCurrentIndexNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode,
                         (UObject *)pUVar1,L"DataflowSubGraphGetCurrentIndexNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton;
}

// GetType @ 1462c4770

FName __thiscall
FDataflowSubGraphGetCurrentIndexNode::GetType(FDataflowSubGraphGetCurrentIndexNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowSubGraphGetCurrentIndexNode");
  return in_RDX;
}

// IsA @ 1462c47a0

bool __thiscall
FDataflowSubGraphGetCurrentIndexNode::IsA(FDataflowSubGraphGetCurrentIndexNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowSubGraphGetCurrentIndexNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1462c4808;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1462c4808:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1462c4826;
      }
    }
  }
  bVar5 = true;
LAB_1462c4826:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1462c4860

FStructOnScope * __thiscall
FDataflowSubGraphGetCurrentIndexNode::NewStructOnScope(FDataflowSubGraphGetCurrentIndexNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
      Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode,
                           (UObject *)pUVar2,L"DataflowSubGraphGetCurrentIndexNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1462c4920

void __thiscall
FDataflowSubGraphGetCurrentIndexNode::SerializeInternal
          (FDataflowSubGraphGetCurrentIndexNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode,
                         (UObject *)pUVar1,L"DataflowSubGraphGetCurrentIndexNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001462c499d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1462c4a70

FName __thiscall
FDataflowSubGraphGetCurrentIndexNode::GetDisplayName(FDataflowSubGraphGetCurrentIndexNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetCurrentIndex");
  return in_RDX;
}

// GetCategory @ 1462c4aa0

FName __thiscall
FDataflowSubGraphGetCurrentIndexNode::GetCategory(FDataflowSubGraphGetCurrentIndexNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SubGraph");
  return in_RDX;
}

// GetTags @ 1462c4ad0

FString * __thiscall
FDataflowSubGraphGetCurrentIndexNode::GetTags
          (FDataflowSubGraphGetCurrentIndexNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1462c4b00

UScriptStruct * __thiscall
FDataflowSubGraphGetCurrentIndexNode::TypedScriptStruct(FDataflowSubGraphGetCurrentIndexNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode,
                         (UObject *)pUVar1,L"DataflowSubGraphGetCurrentIndexNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton;
}

// Evaluate @ 1462c4b40

void __thiscall
FDataflowSubGraphGetCurrentIndexNode::Evaluate
          (FDataflowSubGraphGetCurrentIndexNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  code *pcVar1;
  char cVar2;
  FDataflowOutput *this_00;
  FContext *pFVar3;
  FName local_res10;
  FConnectionReference local_28;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x18);
  ::FName::FName(&local_res10,"FContextSubGraph");
  cVar2 = (*pcVar1)(param_1,CONCAT44(local_res10.Number,local_res10.ComparisonIndex.Value));
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->Index;
  pFVar3 = param_1;
  if (cVar2 == '\0') {
    pFVar3 = (FContext *)0x0;
  }
  if (pFVar3 == (FContext *)0x0) {
    local_res10.ComparisonIndex.Value = 0;
  }
  else {
    local_res10.ComparisonIndex.Value = (uint)pFVar3[1]._padding_;
  }
  this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_28);
  if (this_00 != (FDataflowOutput *)0x0) {
    FDataflowOutput::SetValue<int>(this_00,(int *)&local_res10,param_1);
    return;
  }
  `FDataflowNode::SetValue<int,int>'::__l7::<lambda_1>::operator()(&local_res10);
  return;
}

// FDataflowSubGraphGetCurrentIndexNode @ 1462ce2d0

FDataflowSubGraphGetCurrentIndexNode * __thiscall
FDataflowSubGraphGetCurrentIndexNode::FDataflowSubGraphGetCurrentIndexNode
          (FDataflowSubGraphGetCurrentIndexNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8 [4];
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  local_48.Index = -1;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  this->_padding_ = (longlong)&___7FDataflowSubGraphGetCurrentIndexNode__6B_;
  local_28.Reference = &this->Index;
  local_48.Reference = (void *)0x0;
  *(int *)local_28.Reference = 0;
  local_48.ContainerReference = (void *)0x0;
  local_28.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

