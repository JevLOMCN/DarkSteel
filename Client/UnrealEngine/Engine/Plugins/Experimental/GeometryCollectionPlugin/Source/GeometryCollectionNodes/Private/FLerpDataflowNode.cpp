// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e875b20

UScriptStruct * __cdecl FLerpDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLerpDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FLerpDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLerpDataflowNode,(UObject *)pUVar1,
                         L"LerpDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FLerpDataflowNode.OuterSingleton;
}

// GetType @ 14e875fd0

FName __thiscall FLerpDataflowNode::GetType(FLerpDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FLerpDataflowNode");
  return in_RDX;
}

// IsA @ 14e8762b0

bool __thiscall FLerpDataflowNode::IsA(FLerpDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FLerpDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e876318;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e876318:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e876336;
      }
    }
  }
  bVar5 = true;
LAB_14e876336:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e876380

FStructOnScope * __thiscall FLerpDataflowNode::NewStructOnScope(FLerpDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FLerpDataflowNode.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FLerpDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FLerpDataflowNode,(UObject *)pUVar2,
                           L"LerpDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FLerpDataflowNode.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e876540

void __thiscall FLerpDataflowNode::SerializeInternal(FLerpDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLerpDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FLerpDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLerpDataflowNode,(UObject *)pUVar1,
                         L"LerpDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FLerpDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FLerpDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8765bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8765d0

FName __thiscall FLerpDataflowNode::GetDisplayName(FLerpDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Lerp");
  return in_RDX;
}

// GetCategory @ 14e876600

FName __thiscall FLerpDataflowNode::GetCategory(FLerpDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Float");
  return in_RDX;
}

// GetTags @ 14e876670

FString * __thiscall
FLerpDataflowNode::GetTags(FLerpDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8766a0

UScriptStruct * __thiscall FLerpDataflowNode::TypedScriptStruct(FLerpDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLerpDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FLerpDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLerpDataflowNode,(UObject *)pUVar1,
                         L"LerpDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FLerpDataflowNode.OuterSingleton;
}

// Evaluate @ 14e876760

void __thiscall
FLerpDataflowNode::Evaluate(FLerpDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

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
    local_48[0].Reference = &this->A;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
    pfVar5 = FDataflowInput::GetValue<float>(pFVar4,param_1,&this->A);
    fVar1 = *pfVar5;
    local_48[0].Index = -1;
    local_48[0].ContainerReference = (void *)0x0;
    local_48[0].Reference = &this->B;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
    pfVar5 = FDataflowInput::GetValue<float>(pFVar4,param_1,&this->B);
    fVar2 = *pfVar5;
    local_48[0].Index = -1;
    local_48[0].ContainerReference = (void *)0x0;
    local_48[0].Reference = &this->Alpha;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
    pfVar5 = FDataflowInput::GetValue<float>(pFVar4,param_1,&this->Alpha);
    local_res8[0] = (fVar2 - fVar1) * *pfVar5 + fVar1;
    FDataflowNode::SetValue<float_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

// FLerpDataflowNode @ 14e921d00

FLerpDataflowNode * __thiscall
FLerpDataflowNode::FLerpDataflowNode
          (FLerpDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FLerpDataflowNode__6B_;
  local_58.Reference = &this->A;
  this->B = 1.0;
  *(float *)local_58.Reference = 0.0;
  this->Alpha = 0.0;
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
  local_58.Reference = &this->Alpha;
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

