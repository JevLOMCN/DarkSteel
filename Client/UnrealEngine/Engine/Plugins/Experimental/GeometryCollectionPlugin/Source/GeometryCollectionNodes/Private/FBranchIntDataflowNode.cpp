// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e837960

UScriptStruct * __cdecl FBranchIntDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBranchIntDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBranchIntDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBranchIntDataflowNode,(UObject *)pUVar1,
                         L"BranchIntDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBranchIntDataflowNode.OuterSingleton;
}

// GetType @ 14e837bf0

FName __thiscall FBranchIntDataflowNode::GetType(FBranchIntDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBranchIntDataflowNode");
  return in_RDX;
}

// IsA @ 14e837c20

bool __thiscall FBranchIntDataflowNode::IsA(FBranchIntDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBranchIntDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e837c88;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e837c88:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e837ca6;
      }
    }
  }
  bVar5 = true;
LAB_14e837ca6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e837cf0

FStructOnScope * __thiscall FBranchIntDataflowNode::NewStructOnScope(FBranchIntDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBranchIntDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBranchIntDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBranchIntDataflowNode,(UObject *)pUVar2,
                           L"BranchIntDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBranchIntDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e837d70

void __thiscall
FBranchIntDataflowNode::SerializeInternal(FBranchIntDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBranchIntDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBranchIntDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBranchIntDataflowNode,(UObject *)pUVar1,
                         L"BranchIntDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FBranchIntDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FBranchIntDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e837ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e837e00

FName __thiscall FBranchIntDataflowNode::GetDisplayName(FBranchIntDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BranchInt");
  return in_RDX;
}

// GetCategory @ 14e837e70

FName __thiscall FBranchIntDataflowNode::GetCategory(FBranchIntDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|FlowControl");
  return in_RDX;
}

// GetTags @ 14e837ee0

FString * __thiscall
FBranchIntDataflowNode::GetTags(FBranchIntDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e837f20

UScriptStruct * __thiscall FBranchIntDataflowNode::TypedScriptStruct(FBranchIntDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBranchIntDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBranchIntDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBranchIntDataflowNode,(UObject *)pUVar1,
                         L"BranchIntDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBranchIntDataflowNode.OuterSingleton;
}

// Evaluate @ 14e838280

void __thiscall
FBranchIntDataflowNode::Evaluate
          (FBranchIntDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *pFVar2;
  bool *pbVar3;
  int *piVar4;
  int local_res8 [2];
  FConnectionReference local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((int *)puVar1 == &this->ReturnValue) {
    local_28.Reference = &this->bCondition;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pbVar3 = FDataflowInput::GetValue<bool>(pFVar2,param_1,local_28.Reference);
    piVar4 = &this->A;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    if (*pbVar3 == false) {
      piVar4 = &this->B;
    }
    local_28.Reference = piVar4;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    piVar4 = FDataflowInput::GetValue<int>(pFVar2,param_1,piVar4);
    local_res8[0] = *piVar4;
    FDataflowNode::SetValue<int_const_&,int>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

// FBranchIntDataflowNode @ 14e9132e0

FBranchIntDataflowNode * __thiscall
FBranchIntDataflowNode::FBranchIntDataflowNode
          (FBranchIntDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FBranchIntDataflowNode__6B_;
  local_58.Reference = &this->A;
  this->B = 0;
  *(int *)local_58.Reference = 0;
  this->bCondition = false;
  this->ReturnValue = 0;
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

