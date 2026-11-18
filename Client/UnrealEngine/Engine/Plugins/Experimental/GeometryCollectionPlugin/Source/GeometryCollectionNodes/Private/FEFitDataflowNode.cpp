// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e86b0f0

UScriptStruct * __cdecl FEFitDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEFitDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FEFitDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEFitDataflowNode,(UObject *)pUVar1,
                         L"EFitDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FEFitDataflowNode.OuterSingleton;
}

// GetType @ 14e86b210

FName __thiscall FEFitDataflowNode::GetType(FEFitDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FEFitDataflowNode");
  return in_RDX;
}

// IsA @ 14e86b240

bool __thiscall FEFitDataflowNode::IsA(FEFitDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FEFitDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e86b2a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e86b2a8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e86b2c6;
      }
    }
  }
  bVar5 = true;
LAB_14e86b2c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e86b300

FStructOnScope * __thiscall FEFitDataflowNode::NewStructOnScope(FEFitDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FEFitDataflowNode.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FEFitDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FEFitDataflowNode,(UObject *)pUVar2,
                           L"EFitDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FEFitDataflowNode.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e86b510

void __thiscall FEFitDataflowNode::SerializeInternal(FEFitDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEFitDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FEFitDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEFitDataflowNode,(UObject *)pUVar1,
                         L"EFitDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FEFitDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FEFitDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86b58d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e86b5a0

FName __thiscall FEFitDataflowNode::GetDisplayName(FEFitDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"EFit");
  return in_RDX;
}

// GetCategory @ 14e86b5d0

FName __thiscall FEFitDataflowNode::GetCategory(FEFitDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Float");
  return in_RDX;
}

// GetTags @ 14e86b600

FString * __thiscall
FEFitDataflowNode::GetTags(FEFitDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e86b670

UScriptStruct * __thiscall FEFitDataflowNode::TypedScriptStruct(FEFitDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEFitDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FEFitDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEFitDataflowNode,(UObject *)pUVar1,
                         L"EFitDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FEFitDataflowNode.OuterSingleton;
}

// Evaluate @ 14e86be80

void __thiscall
FEFitDataflowNode::Evaluate(FEFitDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 *puVar5;
  FDataflowInput *pFVar6;
  float *pfVar7;
  float local_res8 [2];
  FConnectionReference local_78 [4];
  
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar5 == &this->ReturnValue) {
    local_78[0].Index = -1;
    local_78[0].ContainerReference = (void *)0x0;
    local_78[0].Reference = &this->Float;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,local_78);
    pfVar7 = FDataflowInput::GetValue<float>(pFVar6,param_1,&this->Float);
    fVar1 = *pfVar7;
    local_78[0].Index = -1;
    local_78[0].ContainerReference = (void *)0x0;
    local_78[0].Reference = &this->OldMin;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,local_78);
    pfVar7 = FDataflowInput::GetValue<float>(pFVar6,param_1,&this->OldMin);
    fVar2 = *pfVar7;
    local_78[0].Index = -1;
    local_78[0].ContainerReference = (void *)0x0;
    local_78[0].Reference = &this->OldMax;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,local_78);
    pfVar7 = FDataflowInput::GetValue<float>(pFVar6,param_1,&this->OldMax);
    fVar3 = *pfVar7;
    local_78[0].Index = -1;
    local_78[0].ContainerReference = (void *)0x0;
    local_78[0].Reference = &this->NewMin;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,local_78);
    pfVar7 = FDataflowInput::GetValue<float>(pFVar6,param_1,&this->NewMin);
    fVar4 = *pfVar7;
    local_78[0].Index = -1;
    local_78[0].ContainerReference = (void *)0x0;
    local_78[0].Reference = &this->NewMax;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,local_78);
    pfVar7 = FDataflowInput::GetValue<float>(pFVar6,param_1,&this->NewMax);
    local_res8[0] = fVar1;
    if ((fVar2 < fVar3) && (fVar4 < *pfVar7)) {
      local_res8[0] = ((fVar1 - fVar2) / (fVar3 - fVar2)) * (*pfVar7 - fVar4) + fVar4;
    }
    FDataflowNode::SetValue<float_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

// FEFitDataflowNode @ 14e91bfd0

FEFitDataflowNode * __thiscall
FEFitDataflowNode::FEFitDataflowNode
          (FEFitDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FEFitDataflowNode__6B_;
  local_68.Reference = &this->Float;
  this->OldMin = 0.0;
  *(float *)local_68.Reference = 0.0;
  this->OldMax = 1.0;
  this->NewMin = 0.0;
  this->NewMax = 1.0;
  this->ReturnValue = 0.0;
  local_68.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->OldMin;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->OldMax;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->NewMin;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->NewMax;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->ReturnValue;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  return this;
}

