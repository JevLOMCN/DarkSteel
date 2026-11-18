// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e893b90

UScriptStruct * __cdecl FRandomFloatInRangeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomFloatInRangeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomFloatInRangeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomFloatInRangeDataflowNode,(UObject *)pUVar1
                         ,L"RandomFloatInRangeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRandomFloatInRangeDataflowNode.OuterSingleton;
}

// GetType @ 14e893cf0

FName __thiscall FRandomFloatInRangeDataflowNode::GetType(FRandomFloatInRangeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FRandomFloatInRangeDataflowNode");
  return in_RDX;
}

// IsA @ 14e893d60

bool __thiscall
FRandomFloatInRangeDataflowNode::IsA(FRandomFloatInRangeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FRandomFloatInRangeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e893dc8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e893dc8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e893de6;
      }
    }
  }
  bVar5 = true;
LAB_14e893de6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e893e20

FStructOnScope * __thiscall
FRandomFloatInRangeDataflowNode::NewStructOnScope(FRandomFloatInRangeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FRandomFloatInRangeDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FRandomFloatInRangeDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRandomFloatInRangeDataflowNode,
                           (UObject *)pUVar2,L"RandomFloatInRangeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FRandomFloatInRangeDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e893ff0

void __thiscall
FRandomFloatInRangeDataflowNode::SerializeInternal
          (FRandomFloatInRangeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomFloatInRangeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomFloatInRangeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomFloatInRangeDataflowNode,(UObject *)pUVar1
                         ,L"RandomFloatInRangeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FRandomFloatInRangeDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FRandomFloatInRangeDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e89406d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8940c0

FName __thiscall
FRandomFloatInRangeDataflowNode::GetDisplayName(FRandomFloatInRangeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"RandomFloatInRange");
  return in_RDX;
}

// GetCategory @ 14e8940f0

FName __thiscall FRandomFloatInRangeDataflowNode::GetCategory(FRandomFloatInRangeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Random");
  return in_RDX;
}

// GetTags @ 14e894120

FString * __thiscall
FRandomFloatInRangeDataflowNode::GetTags
          (FRandomFloatInRangeDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e894150

UScriptStruct * __thiscall
FRandomFloatInRangeDataflowNode::TypedScriptStruct(FRandomFloatInRangeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomFloatInRangeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomFloatInRangeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomFloatInRangeDataflowNode,(UObject *)pUVar1
                         ,L"RandomFloatInRangeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRandomFloatInRangeDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8944f0

void __thiscall
FRandomFloatInRangeDataflowNode::Evaluate
          (FRandomFloatInRangeDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined1 *puVar4;
  FDataflowInput *pFVar5;
  float *pfVar6;
  float local_res8 [2];
  FConnectionReference local_48 [2];
  
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar4 == &this->ReturnValue) {
    local_48[0].Reference = &this->Min;
    local_48[0].Index = -1;
    local_48[0].ContainerReference = (void *)0x0;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
    pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,local_48[0].Reference);
    fVar1 = *pfVar6;
    local_48[0].Reference = &this->Max;
    local_48[0].Index = -1;
    local_48[0].ContainerReference = (void *)0x0;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
    pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,local_48[0].Reference);
    fVar2 = *pfVar6;
    if (this->bDeterministic == false) {
      uVar3 = rand();
      local_res8[0] = (float)(uVar3 & 0x7fff) * (fVar2 - fVar1) * __real_38000100;
    }
    else {
      local_48[0].Reference = &this->RandomSeed;
      local_48[0].Index = -1;
      local_48[0].ContainerReference = (void *)0x0;
      pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
      pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,local_48[0].Reference);
      local_res8[0] =
           ((float)((int)*pfVar6 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) - __real_3f800000) *
           (fVar2 - fVar1);
    }
    local_res8[0] = local_res8[0] + fVar1;
    FDataflowNode::SetValue<float,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

// FRandomFloatInRangeDataflowNode @ 14e929aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRandomFloatInRangeDataflowNode * __thiscall
FRandomFloatInRangeDataflowNode::FRandomFloatInRangeDataflowNode
          (FRandomFloatInRangeDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  float *pfVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->bDeterministic = false;
  pfVar1 = &this->RandomSeed;
  this->_padding_ = (longlong)&___7FRandomFloatInRangeDataflowNode__6B_;
  *pfVar1 = 0.0;
  this->Min = 0.0;
  this->Max = 1.0;
  this->ReturnValue = 0.0;
  uVar2 = rand();
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  *pfVar1 = (float)(uVar2 & 0x7fff) * ___real_40c35187 - __real_47c35000;
  local_68.Reference = pfVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Min;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Max;
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

