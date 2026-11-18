// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8dcc50

UScriptStruct * __cdecl FAddDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddDataflowNode,(UObject *)pUVar1,
                         L"AddDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAddDataflowNode.OuterSingleton;
}

// GetType @ 14e8dcdd0

FName __thiscall FAddDataflowNode::GetType(FAddDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FAddDataflowNode");
  return in_RDX;
}

// IsA @ 14e8dce00

bool __thiscall FAddDataflowNode::IsA(FAddDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FAddDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8dce68;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8dce68:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8dce86;
      }
    }
  }
  bVar5 = true;
LAB_14e8dce86:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8dcef0

FStructOnScope * __thiscall FAddDataflowNode::NewStructOnScope(FAddDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAddDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FAddDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAddDataflowNode,(UObject *)pUVar2,
                           L"AddDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FAddDataflowNode.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8dd060

void __thiscall FAddDataflowNode::SerializeInternal(FAddDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddDataflowNode,(UObject *)pUVar1,
                         L"AddDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FAddDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FAddDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8dd0dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8dd580

FName __thiscall FAddDataflowNode::GetDisplayName(FAddDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Add");
  return in_RDX;
}

// GetCategory @ 14e8dd630

FName __thiscall FAddDataflowNode::GetCategory(FAddDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Float");
  return in_RDX;
}

// GetTags @ 14e8dd6f0

FString * __thiscall
FAddDataflowNode::GetTags(FAddDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8dd7e0

UScriptStruct * __thiscall FAddDataflowNode::TypedScriptStruct(FAddDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddDataflowNode,(UObject *)pUVar1,
                         L"AddDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAddDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8dda60

void __thiscall
FAddDataflowNode::Evaluate(FAddDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  undefined1 *puVar2;
  FDataflowInput *pFVar3;
  float *pfVar4;
  float local_res8 [2];
  FConnectionReference local_38 [2];
  
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar2 == &this->ReturnValue) {
    local_38[0].Index = -1;
    local_38[0].ContainerReference = (void *)0x0;
    local_38[0].Reference = &this->FloatA;
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,local_38);
    pfVar4 = FDataflowInput::GetValue<float>(pFVar3,param_1,&this->FloatA);
    fVar1 = *pfVar4;
    local_38[0].Index = -1;
    local_38[0].ContainerReference = (void *)0x0;
    local_38[0].Reference = &this->FloatB;
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,local_38);
    pfVar4 = FDataflowInput::GetValue<float>(pFVar3,param_1,&this->FloatB);
    local_res8[0] = fVar1 + *pfVar4;
    FDataflowNode::SetValue<float_const_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

// FAddDataflowNode @ 14e90fda0

FAddDataflowNode * __thiscall
FAddDataflowNode::FAddDataflowNode(FAddDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FAddDataflowNode__6B_;
  local_58.Reference = &this->FloatA;
  this->FloatB = 0.0;
  *(float *)local_58.Reference = 0.0;
  this->ReturnValue = 0.0;
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
  local_38.Reference = &this->ReturnValue;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

