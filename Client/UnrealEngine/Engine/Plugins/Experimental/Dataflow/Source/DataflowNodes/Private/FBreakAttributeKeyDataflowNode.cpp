// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 12

// StaticStruct @ 14dab9790

UScriptStruct * __cdecl FBreakAttributeKeyDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode,(UObject *)pUVar1,
                         L"BreakAttributeKeyDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton;
}

// GetType @ 14dab97d0

FName __thiscall FBreakAttributeKeyDataflowNode::GetType(FBreakAttributeKeyDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBreakAttributeKeyDataflowNode");
  return in_RDX;
}

// IsA @ 14dab9800

bool __thiscall
FBreakAttributeKeyDataflowNode::IsA(FBreakAttributeKeyDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBreakAttributeKeyDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14dab9868;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14dab9868:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dab9886;
      }
    }
  }
  bVar5 = true;
LAB_14dab9886:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14dab98c0

FStructOnScope * __thiscall
FBreakAttributeKeyDataflowNode::NewStructOnScope(FBreakAttributeKeyDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode,
                           (UObject *)pUVar2,L"BreakAttributeKeyDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14dab9940

void __thiscall
FBreakAttributeKeyDataflowNode::SerializeInternal
          (FBreakAttributeKeyDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode,(UObject *)pUVar1,
                         L"BreakAttributeKeyDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dab99bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14dab99d0

FName __thiscall
FBreakAttributeKeyDataflowNode::GetDisplayName(FBreakAttributeKeyDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BreakAttributeKey");
  return in_RDX;
}

// GetCategory @ 14dab9a00

FName __thiscall FBreakAttributeKeyDataflowNode::GetCategory(FBreakAttributeKeyDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Dataflow");
  return in_RDX;
}

// GetTags @ 14dab9a30

FString * __thiscall
FBreakAttributeKeyDataflowNode::GetTags
          (FBreakAttributeKeyDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14dab9a60

UScriptStruct * __thiscall
FBreakAttributeKeyDataflowNode::TypedScriptStruct(FBreakAttributeKeyDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode,(UObject *)pUVar1,
                         L"BreakAttributeKeyDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton;
}

// Evaluate @ 14dab9aa0

void __thiscall
FBreakAttributeKeyDataflowNode::Evaluate
          (FBreakAttributeKeyDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowInput *this_00;
  FCollectionAttributeKey *pFVar1;
  FConnectionReference local_48;
  FString local_30;
  FString local_20;
  
  local_48.Index = -1;
  local_48.Reference = &this->AttributeKeyIn;
  local_48.ContainerReference = (void *)0x0;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
  pFVar1 = FDataflowInput::GetValue<FCollectionAttributeKey>(this_00,param_1,local_48.Reference);
  ::FString::FString(&local_30,&pFVar1->Attribute);
  ::FString::FString(&local_20,&pFVar1->Group);
  FDataflowNode::SetValue<FString_&,FString>
            ((FDataflowNode *)this,param_1,&local_30,&this->AttributeOut);
  FDataflowNode::SetValue<FString_&,FString>
            ((FDataflowNode *)this,param_1,&local_20,&this->GroupOut);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// FBreakAttributeKeyDataflowNode @ 14dacc860

FBreakAttributeKeyDataflowNode * __thiscall
FBreakAttributeKeyDataflowNode::FBreakAttributeKeyDataflowNode
          (FBreakAttributeKeyDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->_padding_ = (longlong)&___7FBreakAttributeKeyDataflowNode__6B_;
  ::FString::FString(&(this->AttributeKeyIn).Attribute,"");
  ::FString::FString(&(this->AttributeKeyIn).Group,"");
  ::FString::FString(&this->AttributeOut,"");
  ::FString::FString(&this->GroupOut,"");
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.Reference = &this->AttributeKeyIn;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->AttributeOut;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->GroupOut;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  return this;
}

// FBreakAttributeKeyDataflowNode @ 14dacc9c0

FBreakAttributeKeyDataflowNode * __thiscall
FBreakAttributeKeyDataflowNode::FBreakAttributeKeyDataflowNode(FBreakAttributeKeyDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FBreakAttributeKeyDataflowNode__6B_;
  ::FString::FString(&(this->AttributeKeyIn).Attribute,"");
  ::FString::FString(&(this->AttributeKeyIn).Group,"");
  ::FString::FString(&this->AttributeOut,"");
  ::FString::FString(&this->GroupOut,"");
  return this;
}

