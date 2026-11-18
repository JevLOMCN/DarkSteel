// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e834020

UScriptStruct * __cdecl FBranchFloatDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBranchFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBranchFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBranchFloatDataflowNode,(UObject *)pUVar1,
                         L"BranchFloatDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBranchFloatDataflowNode.OuterSingleton;
}

// GetType @ 14e8345e0

FName __thiscall FBranchFloatDataflowNode::GetType(FBranchFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBranchFloatDataflowNode");
  return in_RDX;
}

// IsA @ 14e8346c0

bool __thiscall FBranchFloatDataflowNode::IsA(FBranchFloatDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBranchFloatDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e834728;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e834728:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e834746;
      }
    }
  }
  bVar5 = true;
LAB_14e834746:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e834810

FStructOnScope * __thiscall
FBranchFloatDataflowNode::NewStructOnScope(FBranchFloatDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBranchFloatDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBranchFloatDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBranchFloatDataflowNode,(UObject *)pUVar2,
                           L"BranchFloatDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBranchFloatDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e834a40

void __thiscall
FBranchFloatDataflowNode::SerializeInternal(FBranchFloatDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBranchFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBranchFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBranchFloatDataflowNode,(UObject *)pUVar1,
                         L"BranchFloatDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FBranchFloatDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FBranchFloatDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e834abd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e834b00

FName __thiscall FBranchFloatDataflowNode::GetDisplayName(FBranchFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BranchFloat");
  return in_RDX;
}

// GetCategory @ 14e834c00

FName __thiscall FBranchFloatDataflowNode::GetCategory(FBranchFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|FlowControl");
  return in_RDX;
}

// GetTags @ 14e834ca0

FString * __thiscall
FBranchFloatDataflowNode::GetTags(FBranchFloatDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e834d00

UScriptStruct * __thiscall
FBranchFloatDataflowNode::TypedScriptStruct(FBranchFloatDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBranchFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBranchFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBranchFloatDataflowNode,(UObject *)pUVar1,
                         L"BranchFloatDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBranchFloatDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8352e0

void __thiscall
FBranchFloatDataflowNode::Evaluate
          (FBranchFloatDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *pFVar2;
  bool *pbVar3;
  float *pfVar4;
  float local_res8 [2];
  FConnectionReference local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar1 == &this->ReturnValue) {
    local_28.Reference = &this->bCondition;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pbVar3 = FDataflowInput::GetValue<bool>(pFVar2,param_1,local_28.Reference);
    pfVar4 = &this->A;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    if (*pbVar3 == false) {
      pfVar4 = &this->B;
    }
    local_28.Reference = pfVar4;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pfVar4 = FDataflowInput::GetValue<float>(pFVar2,param_1,pfVar4);
    local_res8[0] = *pfVar4;
    FDataflowNode::SetValue<float_const_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

// FBranchFloatDataflowNode @ 14e9131a0

FBranchFloatDataflowNode * __thiscall
FBranchFloatDataflowNode::FBranchFloatDataflowNode
          (FBranchFloatDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FBranchFloatDataflowNode__6B_;
  local_58.Reference = &this->A;
  this->B = 0.0;
  *(float *)local_58.Reference = 0.0;
  this->bCondition = false;
  this->ReturnValue = 0.0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->B;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->bCondition;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->ReturnValue;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

