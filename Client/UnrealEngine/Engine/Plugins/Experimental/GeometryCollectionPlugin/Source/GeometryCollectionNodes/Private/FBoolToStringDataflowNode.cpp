// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e82d1d0

UScriptStruct * __cdecl FBoolToStringDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoolToStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoolToStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolToStringDataflowNode,(UObject *)pUVar1,
                         L"BoolToStringDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoolToStringDataflowNode.OuterSingleton;
}

// GetType @ 14e82d400

FName __thiscall FBoolToStringDataflowNode::GetType(FBoolToStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBoolToStringDataflowNode");
  return in_RDX;
}

// IsA @ 14e82d430

bool __thiscall FBoolToStringDataflowNode::IsA(FBoolToStringDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBoolToStringDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e82d498;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e82d498:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e82d4b6;
      }
    }
  }
  bVar5 = true;
LAB_14e82d4b6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e82d4f0

FStructOnScope * __thiscall
FBoolToStringDataflowNode::NewStructOnScope(FBoolToStringDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBoolToStringDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBoolToStringDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBoolToStringDataflowNode,(UObject *)pUVar2,
                           L"BoolToStringDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBoolToStringDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e82d5d0

void __thiscall
FBoolToStringDataflowNode::SerializeInternal(FBoolToStringDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoolToStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoolToStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolToStringDataflowNode,(UObject *)pUVar1,
                         L"BoolToStringDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FBoolToStringDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FBoolToStringDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e82d64d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e82d660

FName __thiscall FBoolToStringDataflowNode::GetDisplayName(FBoolToStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BoolToString");
  return in_RDX;
}

// GetCategory @ 14e82d690

FName __thiscall FBoolToStringDataflowNode::GetCategory(FBoolToStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|String");
  return in_RDX;
}

// GetTags @ 14e82d730

FString * __thiscall
FBoolToStringDataflowNode::GetTags(FBoolToStringDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e82d760

UScriptStruct * __thiscall
FBoolToStringDataflowNode::TypedScriptStruct(FBoolToStringDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoolToStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoolToStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolToStringDataflowNode,(UObject *)pUVar1,
                         L"BoolToStringDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoolToStringDataflowNode.OuterSingleton;
}

// Evaluate @ 14e82da50

void __thiscall
FBoolToStringDataflowNode::Evaluate
          (FBoolToStringDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  FString local_38;
  FConnectionReference local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FString *)puVar1 == &this->String) {
    local_28.Reference = &this->Bool;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    FDataflowInput::GetValue<bool>(this_00,param_1,local_28.Reference);
    ::FString::PrintfImpl(&local_38,L"%s");
    FDataflowNode::SetValue<FString_&,FString>
              ((FDataflowNode *)this,param_1,&local_38,&this->String);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

