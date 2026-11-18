// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e885e00

UScriptStruct * __cdecl FNormalizeToRangeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNormalizeToRangeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FNormalizeToRangeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNormalizeToRangeDataflowNode,(UObject *)pUVar1,
                         L"NormalizeToRangeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FNormalizeToRangeDataflowNode.OuterSingleton;
}

// GetType @ 14e885ed0

FName __thiscall FNormalizeToRangeDataflowNode::GetType(FNormalizeToRangeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FNormalizeToRangeDataflowNode");
  return in_RDX;
}

// IsA @ 14e885f00

bool __thiscall
FNormalizeToRangeDataflowNode::IsA(FNormalizeToRangeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FNormalizeToRangeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e885f68;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e885f68:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e885f86;
      }
    }
  }
  bVar5 = true;
LAB_14e885f86:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e886010

FStructOnScope * __thiscall
FNormalizeToRangeDataflowNode::NewStructOnScope(FNormalizeToRangeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FNormalizeToRangeDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FNormalizeToRangeDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNormalizeToRangeDataflowNode,(UObject *)pUVar2
                           ,L"NormalizeToRangeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FNormalizeToRangeDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e886090

void __thiscall
FNormalizeToRangeDataflowNode::SerializeInternal
          (FNormalizeToRangeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNormalizeToRangeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FNormalizeToRangeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNormalizeToRangeDataflowNode,(UObject *)pUVar1,
                         L"NormalizeToRangeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FNormalizeToRangeDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FNormalizeToRangeDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88610d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e886120

FName __thiscall FNormalizeToRangeDataflowNode::GetDisplayName(FNormalizeToRangeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"NormalizeToRange");
  return in_RDX;
}

// GetCategory @ 14e886190

FName __thiscall FNormalizeToRangeDataflowNode::GetCategory(FNormalizeToRangeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Float");
  return in_RDX;
}

// GetTags @ 14e8861c0

FString * __thiscall
FNormalizeToRangeDataflowNode::GetTags
          (FNormalizeToRangeDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e886220

UScriptStruct * __thiscall
FNormalizeToRangeDataflowNode::TypedScriptStruct(FNormalizeToRangeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNormalizeToRangeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FNormalizeToRangeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNormalizeToRangeDataflowNode,(UObject *)pUVar1,
                         L"NormalizeToRangeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FNormalizeToRangeDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8864d0

void __thiscall
FNormalizeToRangeDataflowNode::Evaluate
          (FNormalizeToRangeDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 *puVar3;
  FDataflowInput *pFVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float local_res8 [2];
  FConnectionReference local_48 [2];
  
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar3 == &this->ReturnValue) {
    local_48[0].Index = -1;
    local_48[0].ContainerReference = (void *)0x0;
    local_48[0].Reference = &this->Float;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
    pfVar5 = FDataflowInput::GetValue<float>(pFVar4,param_1,&this->Float);
    fVar1 = *pfVar5;
    local_48[0].Index = -1;
    local_48[0].ContainerReference = (void *)0x0;
    local_48[0].Reference = &this->RangeMin;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
    pfVar5 = FDataflowInput::GetValue<float>(pFVar4,param_1,&this->RangeMin);
    fVar2 = *pfVar5;
    local_48[0].Index = -1;
    local_48[0].ContainerReference = (void *)0x0;
    local_48[0].Reference = &this->RangeMax;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
    pfVar5 = FDataflowInput::GetValue<float>(pFVar4,param_1,&this->RangeMax);
    fVar6 = *pfVar5;
    fVar7 = fVar6;
    if (fVar6 <= fVar2) {
      fVar7 = fVar2;
    }
    if (fVar2 <= fVar6) {
      fVar6 = fVar2;
    }
    local_res8[0] = (fVar1 - fVar6) / (fVar7 - fVar6);
    FDataflowNode::SetValue<float_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

// FNormalizeToRangeDataflowNode @ 14e926e60

FNormalizeToRangeDataflowNode * __thiscall
FNormalizeToRangeDataflowNode::FNormalizeToRangeDataflowNode
          (FNormalizeToRangeDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FNormalizeToRangeDataflowNode__6B_;
  local_58.Reference = &this->Float;
  this->RangeMin = 0.0;
  *(float *)local_58.Reference = 0.0;
  this->RangeMax = 1.0;
  this->ReturnValue = 0.0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->RangeMin;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->RangeMax;
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

