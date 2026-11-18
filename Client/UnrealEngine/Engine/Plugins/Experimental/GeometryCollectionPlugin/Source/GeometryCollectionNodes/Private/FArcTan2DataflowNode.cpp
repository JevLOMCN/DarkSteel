// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e884eb0

UScriptStruct * __cdecl FArcTan2DataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FArcTan2DataflowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FArcTan2DataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FArcTan2DataflowNode,(UObject *)pUVar1,
                         L"ArcTan2DataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FArcTan2DataflowNode.OuterSingleton;
}

// GetType @ 14e884f80

FName __thiscall FArcTan2DataflowNode::GetType(FArcTan2DataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FArcTan2DataflowNode");
  return in_RDX;
}

// IsA @ 14e885100

bool __thiscall FArcTan2DataflowNode::IsA(FArcTan2DataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FArcTan2DataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e885168;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e885168:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e885186;
      }
    }
  }
  bVar5 = true;
LAB_14e885186:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8851c0

FStructOnScope * __thiscall FArcTan2DataflowNode::NewStructOnScope(FArcTan2DataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FArcTan2DataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FArcTan2DataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FArcTan2DataflowNode,(UObject *)pUVar2,
                           L"ArcTan2DataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FArcTan2DataflowNode.OuterSingleton
                        ,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e885240

void __thiscall
FArcTan2DataflowNode::SerializeInternal(FArcTan2DataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FArcTan2DataflowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FArcTan2DataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FArcTan2DataflowNode,(UObject *)pUVar1,
                         L"ArcTan2DataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FArcTan2DataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FArcTan2DataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8852bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8852d0

FName __thiscall FArcTan2DataflowNode::GetDisplayName(FArcTan2DataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ArcTan2");
  return in_RDX;
}

// GetCategory @ 14e885740

FName __thiscall FArcTan2DataflowNode::GetCategory(FArcTan2DataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Trigonometry");
  return in_RDX;
}

// GetTags @ 14e885770

FString * __thiscall
FArcTan2DataflowNode::GetTags(FArcTan2DataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8857a0

UScriptStruct * __thiscall FArcTan2DataflowNode::TypedScriptStruct(FArcTan2DataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FArcTan2DataflowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FArcTan2DataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FArcTan2DataflowNode,(UObject *)pUVar1,
                         L"ArcTan2DataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FArcTan2DataflowNode.OuterSingleton;
}

// Evaluate @ 14e885820

void __thiscall
FArcTan2DataflowNode::Evaluate
          (FArcTan2DataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

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
    local_38[0].Reference = &this->Y;
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,local_38);
    pfVar4 = FDataflowInput::GetValue<float>(pFVar3,param_1,&this->Y);
    fVar1 = *pfVar4;
    local_38[0].Index = -1;
    local_38[0].ContainerReference = (void *)0x0;
    local_38[0].Reference = &this->X;
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,local_38);
    pfVar4 = FDataflowInput::GetValue<float>(pFVar3,param_1,&this->X);
    local_res8[0] = FGenericPlatformMath::Atan2(fVar1,*pfVar4);
    FDataflowNode::SetValue<float_const_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

// FArcTan2DataflowNode @ 14e910ce0

FArcTan2DataflowNode * __thiscall
FArcTan2DataflowNode::FArcTan2DataflowNode
          (FArcTan2DataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FArcTan2DataflowNode__6B_;
  local_58.Reference = &this->Y;
  this->X = 0.0;
  *(float *)local_58.Reference = 0.0;
  this->ReturnValue = 0.0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->X;
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

