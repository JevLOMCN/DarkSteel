// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e83e0c0

UScriptStruct * __cdecl FBoolToIntDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoolToIntDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoolToIntDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolToIntDataflowNode,(UObject *)pUVar1,
                         L"BoolToIntDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoolToIntDataflowNode.OuterSingleton;
}

// GetType @ 14e83e570

FName __thiscall FBoolToIntDataflowNode::GetType(FBoolToIntDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBoolToIntDataflowNode");
  return in_RDX;
}

// IsA @ 14e83e5e0

bool __thiscall FBoolToIntDataflowNode::IsA(FBoolToIntDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBoolToIntDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e83e648;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e83e648:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e83e666;
      }
    }
  }
  bVar5 = true;
LAB_14e83e666:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e83e6a0

FStructOnScope * __thiscall FBoolToIntDataflowNode::NewStructOnScope(FBoolToIntDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBoolToIntDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBoolToIntDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBoolToIntDataflowNode,(UObject *)pUVar2,
                           L"BoolToIntDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBoolToIntDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e83e720

void __thiscall
FBoolToIntDataflowNode::SerializeInternal(FBoolToIntDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoolToIntDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoolToIntDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolToIntDataflowNode,(UObject *)pUVar1,
                         L"BoolToIntDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FBoolToIntDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FBoolToIntDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e83e79d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e83e810

FName __thiscall FBoolToIntDataflowNode::GetDisplayName(FBoolToIntDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BoolToInt");
  return in_RDX;
}

// GetCategory @ 14e83e840

FName __thiscall FBoolToIntDataflowNode::GetCategory(FBoolToIntDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Conversions");
  return in_RDX;
}

// GetTags @ 14e83e870

FString * __thiscall
FBoolToIntDataflowNode::GetTags(FBoolToIntDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e83e910

UScriptStruct * __thiscall FBoolToIntDataflowNode::TypedScriptStruct(FBoolToIntDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoolToIntDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoolToIntDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolToIntDataflowNode,(UObject *)pUVar1,
                         L"BoolToIntDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoolToIntDataflowNode.OuterSingleton;
}

// Evaluate @ 14e83ed40

void __thiscall
FBoolToIntDataflowNode::Evaluate
          (FBoolToIntDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  bool *pbVar2;
  uint local_res8 [2];
  FConnectionReference local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((int *)puVar1 == &this->Int) {
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    local_28.Reference = &this->Bool;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pbVar2 = FDataflowInput::GetValue<bool>(this_00,param_1,&this->Bool);
    local_res8[0] = (uint)*pbVar2;
    FDataflowNode::SetValue<int_&,int>((FDataflowNode *)this,param_1,(int *)local_res8,&this->Int);
  }
  return;
}

