// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e892380

UScriptStruct * __cdecl FRandomFloatDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomFloatDataflowNode,(UObject *)pUVar1,
                         L"RandomFloatDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRandomFloatDataflowNode.OuterSingleton;
}

// GetType @ 14e8924e0

FName __thiscall FRandomFloatDataflowNode::GetType(FRandomFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FRandomFloatDataflowNode");
  return in_RDX;
}

// IsA @ 14e892510

bool __thiscall FRandomFloatDataflowNode::IsA(FRandomFloatDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FRandomFloatDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e892578;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e892578:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e892596;
      }
    }
  }
  bVar5 = true;
LAB_14e892596:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8925d0

FStructOnScope * __thiscall
FRandomFloatDataflowNode::NewStructOnScope(FRandomFloatDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FRandomFloatDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FRandomFloatDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRandomFloatDataflowNode,(UObject *)pUVar2,
                           L"RandomFloatDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FRandomFloatDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e892660

void __thiscall
FRandomFloatDataflowNode::SerializeInternal(FRandomFloatDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomFloatDataflowNode,(UObject *)pUVar1,
                         L"RandomFloatDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FRandomFloatDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FRandomFloatDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8926dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8926f0

FName __thiscall FRandomFloatDataflowNode::GetDisplayName(FRandomFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"RandomFloat");
  return in_RDX;
}

// GetCategory @ 14e892720

FName __thiscall FRandomFloatDataflowNode::GetCategory(FRandomFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Random");
  return in_RDX;
}

// GetTags @ 14e892750

FString * __thiscall
FRandomFloatDataflowNode::GetTags(FRandomFloatDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e892780

UScriptStruct * __thiscall
FRandomFloatDataflowNode::TypedScriptStruct(FRandomFloatDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomFloatDataflowNode,(UObject *)pUVar1,
                         L"RandomFloatDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRandomFloatDataflowNode.OuterSingleton;
}

// Evaluate @ 14e892ab0

void __thiscall
FRandomFloatDataflowNode::Evaluate
          (FRandomFloatDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  FDataflowInput *this_00;
  float *pfVar3;
  float local_res8 [2];
  FConnectionReference local_28;
  
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar2 == &this->ReturnValue) {
    if (this->bDeterministic == false) {
      uVar1 = rand();
      local_res8[0] = (float)(uVar1 & 0x7fff) * __real_38000100;
    }
    else {
      local_28.Reference = &this->RandomSeed;
      local_28.Index = -1;
      local_28.ContainerReference = (void *)0x0;
      this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
      pfVar3 = FDataflowInput::GetValue<float>(this_00,param_1,local_28.Reference);
      local_res8[0] =
           (float)((int)*pfVar3 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) - __real_3f800000;
    }
    FDataflowNode::SetValue<float,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

// FRandomFloatDataflowNode @ 14e929990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRandomFloatDataflowNode * __thiscall
FRandomFloatDataflowNode::FRandomFloatDataflowNode
          (FRandomFloatDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  float *pfVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->bDeterministic = false;
  this->_padding_ = (longlong)&___7FRandomFloatDataflowNode__6B_;
  pfVar1 = &this->RandomSeed;
  *pfVar1 = 0.0;
  this->ReturnValue = 0.0;
  uVar2 = rand();
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  *pfVar1 = (float)(uVar2 & 0x7fff) * ___real_40c35187 - __real_47c35000;
  local_48.Reference = pfVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->ReturnValue;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

