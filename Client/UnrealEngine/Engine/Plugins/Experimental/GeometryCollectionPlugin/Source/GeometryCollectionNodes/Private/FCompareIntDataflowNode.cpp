// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8ba5f0

UScriptStruct * __cdecl FCompareIntDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCompareIntDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCompareIntDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCompareIntDataflowNode,(UObject *)pUVar1,
                         L"CompareIntDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCompareIntDataflowNode.OuterSingleton;
}

// GetType @ 14e8ba930

FName __thiscall FCompareIntDataflowNode::GetType(FCompareIntDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCompareIntDataflowNode");
  return in_RDX;
}

// IsA @ 14e8bb040

bool __thiscall FCompareIntDataflowNode::IsA(FCompareIntDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCompareIntDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8bb0a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8bb0a8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8bb0c6;
      }
    }
  }
  bVar5 = true;
LAB_14e8bb0c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8bb100

FStructOnScope * __thiscall FCompareIntDataflowNode::NewStructOnScope(FCompareIntDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCompareIntDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCompareIntDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCompareIntDataflowNode,(UObject *)pUVar2,
                           L"CompareIntDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCompareIntDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8bb1c0

void __thiscall
FCompareIntDataflowNode::SerializeInternal(FCompareIntDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCompareIntDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCompareIntDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCompareIntDataflowNode,(UObject *)pUVar1,
                         L"CompareIntDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FCompareIntDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FCompareIntDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8bb23d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8bb260

FName __thiscall FCompareIntDataflowNode::GetDisplayName(FCompareIntDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CompareInt");
  return in_RDX;
}

// GetCategory @ 14e8bb290

FName __thiscall FCompareIntDataflowNode::GetCategory(FCompareIntDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Compare");
  return in_RDX;
}

// GetTags @ 14e8bb2c0

FString * __thiscall
FCompareIntDataflowNode::GetTags(FCompareIntDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8bb2f0

UScriptStruct * __thiscall FCompareIntDataflowNode::TypedScriptStruct(FCompareIntDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCompareIntDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCompareIntDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCompareIntDataflowNode,(UObject *)pUVar1,
                         L"CompareIntDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCompareIntDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8bb5a0

void __thiscall
FCompareIntDataflowNode::Evaluate
          (FCompareIntDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  FDataflowInput *pFVar4;
  int *piVar5;
  bool local_res8 [8];
  bool *local_res18 [2];
  FConnectionReference local_38;
  
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((bool *)puVar3 == &this->Result) {
    local_38.Reference = &this->IntA;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
    piVar5 = FDataflowInput::GetValue<int>(pFVar4,param_1,local_38.Reference);
    iVar1 = *piVar5;
    local_38.Reference = &this->IntB;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
    piVar5 = FDataflowInput::GetValue<int>(pFVar4,param_1,local_38.Reference);
    iVar2 = *piVar5;
    local_res8[0] = (bool)this->Operation;
    switch(local_res8[0]) {
    case false:
      local_res8[0] = iVar1 == iVar2;
      break;
    case true:
      local_res8[0] = iVar1 < iVar2;
      break;
    case true:
      local_res8[0] = iVar1 <= iVar2;
      break;
    case true:
      local_res8[0] = iVar2 < iVar1;
      break;
    case true:
      local_res8[0] = iVar2 <= iVar1;
      break;
    case true:
      local_res8[0] = iVar1 != iVar2;
      break;
    default:
      local_res18[0] = local_res8;
      ``anonymous_namespace'::ApplyDataflowOperationComparison<int>'::__l4::<lambda_1>::operator()
                (local_res18);
      local_res8[0] = false;
    }
    FDataflowNode::SetValue<bool_const_&,bool>
              ((FDataflowNode *)this,param_1,local_res8,&this->Result);
  }
  return;
}

// FCompareIntDataflowNode @ 14e919cf0

FCompareIntDataflowNode * __thiscall
FCompareIntDataflowNode::FCompareIntDataflowNode
          (FCompareIntDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->Operation = Dataflow_Compare_Equal;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FCompareIntDataflowNode__6B_;
  local_58.Reference = &this->IntA;
  this->IntB = 0;
  *(int *)local_58.Reference = 0;
  this->Result = false;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->IntB;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Result;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

