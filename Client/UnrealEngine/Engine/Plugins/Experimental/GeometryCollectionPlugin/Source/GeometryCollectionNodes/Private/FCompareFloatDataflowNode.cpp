// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8bcb60

UScriptStruct * __cdecl FCompareFloatDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCompareFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCompareFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCompareFloatDataflowNode,(UObject *)pUVar1,
                         L"CompareFloatDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCompareFloatDataflowNode.OuterSingleton;
}

// GetType @ 14e8bd0e0

FName __thiscall FCompareFloatDataflowNode::GetType(FCompareFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCompareFloatDataflowNode");
  return in_RDX;
}

// IsA @ 14e8bd180

bool __thiscall FCompareFloatDataflowNode::IsA(FCompareFloatDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCompareFloatDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8bd1e8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8bd1e8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8bd206;
      }
    }
  }
  bVar5 = true;
LAB_14e8bd206:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8bd2a0

FStructOnScope * __thiscall
FCompareFloatDataflowNode::NewStructOnScope(FCompareFloatDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCompareFloatDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCompareFloatDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCompareFloatDataflowNode,(UObject *)pUVar2,
                           L"CompareFloatDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCompareFloatDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8bd320

void __thiscall
FCompareFloatDataflowNode::SerializeInternal(FCompareFloatDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCompareFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCompareFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCompareFloatDataflowNode,(UObject *)pUVar1,
                         L"CompareFloatDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FCompareFloatDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FCompareFloatDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8bd39d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8bd3b0

FName __thiscall FCompareFloatDataflowNode::GetDisplayName(FCompareFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CompareFloat");
  return in_RDX;
}

// GetCategory @ 14e8bd3e0

FName __thiscall FCompareFloatDataflowNode::GetCategory(FCompareFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Compare");
  return in_RDX;
}

// GetTags @ 14e8bd410

FString * __thiscall
FCompareFloatDataflowNode::GetTags(FCompareFloatDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8bd520

UScriptStruct * __thiscall
FCompareFloatDataflowNode::TypedScriptStruct(FCompareFloatDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCompareFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCompareFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCompareFloatDataflowNode,(UObject *)pUVar1,
                         L"CompareFloatDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCompareFloatDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8bd5d0

void __thiscall
FCompareFloatDataflowNode::Evaluate
          (FCompareFloatDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 *puVar3;
  FDataflowInput *pFVar4;
  float *pfVar5;
  bool local_res8 [8];
  bool *local_res18;
  FConnectionReference local_38 [2];
  
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((bool *)puVar3 != &this->Result) {
    return;
  }
  local_38[0].Reference = &this->FloatA;
  local_38[0].Index = -1;
  local_38[0].ContainerReference = (void *)0x0;
  pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,local_38);
  pfVar5 = FDataflowInput::GetValue<float>(pFVar4,param_1,local_38[0].Reference);
  fVar1 = *pfVar5;
  local_38[0].Reference = &this->FloatB;
  local_38[0].Index = -1;
  local_38[0].ContainerReference = (void *)0x0;
  pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,local_38);
  pfVar5 = FDataflowInput::GetValue<float>(pFVar4,param_1,local_38[0].Reference);
  fVar2 = *pfVar5;
  local_res8[0] = (bool)this->Operation;
  switch(local_res8[0]) {
  case false:
    if (fVar1 == fVar2) {
      local_res8[0] = true;
      break;
    }
    goto LAB_14e8bd6e8;
  case true:
    local_res8[0] = fVar1 < fVar2;
    break;
  case true:
    local_res8[0] = fVar1 <= fVar2;
    break;
  case true:
    local_res8[0] = fVar2 < fVar1;
    break;
  case true:
    local_res8[0] = fVar2 <= fVar1;
    break;
  case true:
    if (fVar1 != fVar2) {
      local_res8[0] = true;
      break;
    }
    goto LAB_14e8bd6e8;
  default:
    local_res18 = local_res8;
    ``anonymous_namespace'::ApplyDataflowOperationComparison<float>'::__l4::<lambda_1>::operator()
              (&local_res18);
LAB_14e8bd6e8:
    local_res8[0] = false;
  }
  FDataflowNode::SetValue<bool_const_&,bool>((FDataflowNode *)this,param_1,local_res8,&this->Result)
  ;
  return;
}

// FCompareFloatDataflowNode @ 14e919be0

FCompareFloatDataflowNode * __thiscall
FCompareFloatDataflowNode::FCompareFloatDataflowNode
          (FCompareFloatDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FCompareFloatDataflowNode__6B_;
  local_58.Reference = &this->FloatA;
  this->FloatB = 0.0;
  *(float *)local_58.Reference = 0.0;
  this->Result = false;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->FloatB;
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

