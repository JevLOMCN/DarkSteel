// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e828640

UScriptStruct * __cdecl FFloatToStringDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatToStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatToStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatToStringDataflowNode,(UObject *)pUVar1,
                         L"FloatToStringDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatToStringDataflowNode.OuterSingleton;
}

// GetType @ 14e828690

FName __thiscall FFloatToStringDataflowNode::GetType(FFloatToStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FFloatToStringDataflowNode");
  return in_RDX;
}

// IsA @ 14e828700

bool __thiscall FFloatToStringDataflowNode::IsA(FFloatToStringDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FFloatToStringDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e828768;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e828768:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e828786;
      }
    }
  }
  bVar5 = true;
LAB_14e828786:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8287c0

FStructOnScope * __thiscall
FFloatToStringDataflowNode::NewStructOnScope(FFloatToStringDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FFloatToStringDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FFloatToStringDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFloatToStringDataflowNode,(UObject *)pUVar2,
                           L"FloatToStringDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FFloatToStringDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e828840

void __thiscall
FFloatToStringDataflowNode::SerializeInternal(FFloatToStringDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatToStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatToStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatToStringDataflowNode,(UObject *)pUVar1,
                         L"FloatToStringDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FFloatToStringDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FFloatToStringDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8288bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8289e0

FName __thiscall FFloatToStringDataflowNode::GetDisplayName(FFloatToStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FloatToString");
  return in_RDX;
}

// GetCategory @ 14e828a70

FName __thiscall FFloatToStringDataflowNode::GetCategory(FFloatToStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|String");
  return in_RDX;
}

// GetTags @ 14e828aa0

FString * __thiscall
FFloatToStringDataflowNode::GetTags
          (FFloatToStringDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e828ad0

UScriptStruct * __thiscall
FFloatToStringDataflowNode::TypedScriptStruct(FFloatToStringDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatToStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatToStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatToStringDataflowNode,(UObject *)pUVar1,
                         L"FloatToStringDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatToStringDataflowNode.OuterSingleton;
}

// Evaluate @ 14e828bb0

void __thiscall
FFloatToStringDataflowNode::Evaluate
          (FFloatToStringDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  FString local_38;
  FConnectionReference local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FString *)puVar1 == &this->String) {
    local_28.Reference = &this->Float;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    FDataflowInput::GetValue<float>(this_00,param_1,local_28.Reference);
    ::FString::PrintfImpl(&local_38,L"%f");
    FDataflowNode::SetValue<FString_&,FString>
              ((FDataflowNode *)this,param_1,&local_38,&this->String);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

