// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e864810

UScriptStruct * __cdecl FClampDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClampDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClampDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClampDataflowNode,(UObject *)pUVar1,
                         L"ClampDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClampDataflowNode.OuterSingleton;
}

// GetType @ 14e8649b0

FName __thiscall FClampDataflowNode::GetType(FClampDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FClampDataflowNode");
  return in_RDX;
}

// IsA @ 14e8649f0

bool __thiscall FClampDataflowNode::IsA(FClampDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FClampDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e864a58;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e864a58:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e864a76;
      }
    }
  }
  bVar5 = true;
LAB_14e864a76:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e864ab0

FStructOnScope * __thiscall FClampDataflowNode::NewStructOnScope(FClampDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FClampDataflowNode.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FClampDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FClampDataflowNode,(UObject *)pUVar2,
                           L"ClampDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FClampDataflowNode.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e864ca0

void __thiscall FClampDataflowNode::SerializeInternal(FClampDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClampDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClampDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClampDataflowNode,(UObject *)pUVar1,
                         L"ClampDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FClampDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FClampDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e864d1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e864e40

FName __thiscall FClampDataflowNode::GetDisplayName(FClampDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Clamp");
  return in_RDX;
}

// GetCategory @ 14e864e70

FName __thiscall FClampDataflowNode::GetCategory(FClampDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Float");
  return in_RDX;
}

// GetTags @ 14e864eb0

FString * __thiscall
FClampDataflowNode::GetTags(FClampDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e864ee0

UScriptStruct * __thiscall FClampDataflowNode::TypedScriptStruct(FClampDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClampDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClampDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClampDataflowNode,(UObject *)pUVar1,
                         L"ClampDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClampDataflowNode.OuterSingleton;
}

// Evaluate @ 14e864fa0

void __thiscall
FClampDataflowNode::Evaluate(FClampDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 *puVar3;
  FDataflowInput *pFVar4;
  float *pfVar5;
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
    local_48[0].Reference = &this->Min;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
    pfVar5 = FDataflowInput::GetValue<float>(pFVar4,param_1,&this->Min);
    fVar2 = *pfVar5;
    local_48[0].Index = -1;
    local_48[0].ContainerReference = (void *)0x0;
    local_48[0].Reference = &this->Max;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
    pfVar5 = FDataflowInput::GetValue<float>(pFVar4,param_1,&this->Max);
    local_res8[0] = *pfVar5;
    if (fVar1 <= *pfVar5) {
      local_res8[0] = fVar1;
    }
    if (local_res8[0] <= fVar2) {
      local_res8[0] = fVar2;
    }
    FDataflowNode::SetValue<float_const_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

// FClampDataflowNode @ 14e914070

FClampDataflowNode * __thiscall
FClampDataflowNode::FClampDataflowNode
          (FClampDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FClampDataflowNode__6B_;
  local_58.Reference = &this->Float;
  this->Min = 0.0;
  *(float *)local_58.Reference = 0.0;
  this->Max = 1.0;
  this->ReturnValue = 0.0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Min;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Max;
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

