// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e82b890

UScriptStruct * __cdecl FDivisionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDivisionDataflowNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDivisionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDivisionDataflowNode,(UObject *)pUVar1,
                         L"DivisionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDivisionDataflowNode.OuterSingleton;
}

// GetType @ 14e82ba80

FName __thiscall FDivisionDataflowNode::GetType(FDivisionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDivisionDataflowNode");
  return in_RDX;
}

// IsA @ 14e82bbf0

bool __thiscall FDivisionDataflowNode::IsA(FDivisionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDivisionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e82bc58;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e82bc58:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e82bc76;
      }
    }
  }
  bVar5 = true;
LAB_14e82bc76:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e82bd40

FStructOnScope * __thiscall FDivisionDataflowNode::NewStructOnScope(FDivisionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDivisionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FDivisionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDivisionDataflowNode,(UObject *)pUVar2,
                           L"DivisionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDivisionDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e82be20

void __thiscall
FDivisionDataflowNode::SerializeInternal(FDivisionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDivisionDataflowNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDivisionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDivisionDataflowNode,(UObject *)pUVar1,
                         L"DivisionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDivisionDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDivisionDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e82be9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e82bee0

FName __thiscall FDivisionDataflowNode::GetDisplayName(FDivisionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Division (Whole and Remainder)");
  return in_RDX;
}

// GetCategory @ 14e82bf50

FName __thiscall FDivisionDataflowNode::GetCategory(FDivisionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Float");
  return in_RDX;
}

// GetTags @ 14e82bfd0

FString * __thiscall
FDivisionDataflowNode::GetTags(FDivisionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e82c040

UScriptStruct * __thiscall FDivisionDataflowNode::TypedScriptStruct(FDivisionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDivisionDataflowNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDivisionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDivisionDataflowNode,(UObject *)pUVar1,
                         L"DivisionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDivisionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e82c2b0

void __thiscall
FDivisionDataflowNode::Evaluate
          (FDivisionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 *puVar3;
  FDataflowInput *pFVar4;
  float *pfVar5;
  float local_res8 [2];
  int local_res18 [2];
  FConnectionReference local_48 [2];
  
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((float *)puVar3 != &this->Remainder) &&
     (puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (int *)puVar3 != &this->ReturnValue)) {
    return;
  }
  local_48[0].Index = -1;
  local_48[0].ContainerReference = (void *)0x0;
  local_48[0].Reference = &this->Dividend;
  pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
  pfVar5 = FDataflowInput::GetValue<float>(pFVar4,param_1,&this->Dividend);
  fVar1 = *pfVar5;
  local_48[0].Index = -1;
  local_48[0].ContainerReference = (void *)0x0;
  local_48[0].Reference = &this->Divisor;
  pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
  pfVar5 = FDataflowInput::GetValue<float>(pFVar4,param_1,&this->Divisor);
  local_res8[0] = 0.0;
  local_res18[0] = 0;
  fVar2 = *pfVar5;
  if (fVar2 != 0.0) {
    local_res18[0] = (int)(fVar1 / fVar2);
    local_res8[0] = fVar1 - (float)local_res18[0] * fVar2;
  }
  FDataflowNode::SetValue<float_&,float>((FDataflowNode *)this,param_1,local_res8,&this->Remainder);
  FDataflowNode::SetValue<int_&,int>((FDataflowNode *)this,param_1,local_res18,&this->ReturnValue);
  return;
}

// FDivisionDataflowNode @ 14e91bc40

FDivisionDataflowNode * __thiscall
FDivisionDataflowNode::FDivisionDataflowNode
          (FDivisionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
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
  this->_padding_ = (longlong)&___7FDivisionDataflowNode__6B_;
  local_58.Reference = &this->Dividend;
  this->Divisor = 0.0;
  *(float *)local_58.Reference = 0.0;
  this->Remainder = 0.0;
  this->ReturnValue = 0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Divisor;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Remainder;
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
  local_38.Reference = &this->ReturnValue;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  return this;
}

