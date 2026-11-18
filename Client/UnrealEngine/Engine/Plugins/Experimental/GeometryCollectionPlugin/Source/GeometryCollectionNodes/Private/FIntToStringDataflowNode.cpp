// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e82b320

UScriptStruct * __cdecl FIntToStringDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIntToStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIntToStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIntToStringDataflowNode,(UObject *)pUVar1,
                         L"IntToStringDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FIntToStringDataflowNode.OuterSingleton;
}

// GetType @ 14e82b500

FName __thiscall FIntToStringDataflowNode::GetType(FIntToStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FIntToStringDataflowNode");
  return in_RDX;
}

// IsA @ 14e82b530

bool __thiscall FIntToStringDataflowNode::IsA(FIntToStringDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FIntToStringDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e82b598;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e82b598:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e82b5b6;
      }
    }
  }
  bVar5 = true;
LAB_14e82b5b6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e82b5f0

FStructOnScope * __thiscall
FIntToStringDataflowNode::NewStructOnScope(FIntToStringDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FIntToStringDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FIntToStringDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIntToStringDataflowNode,(UObject *)pUVar2,
                           L"IntToStringDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FIntToStringDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e82b670

void __thiscall
FIntToStringDataflowNode::SerializeInternal(FIntToStringDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIntToStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIntToStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIntToStringDataflowNode,(UObject *)pUVar1,
                         L"IntToStringDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FIntToStringDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FIntToStringDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e82b6ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e82b700

FName __thiscall FIntToStringDataflowNode::GetDisplayName(FIntToStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"IntToString");
  return in_RDX;
}

// GetCategory @ 14e82b730

FName __thiscall FIntToStringDataflowNode::GetCategory(FIntToStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|String");
  return in_RDX;
}

// GetTags @ 14e82b7a0

FString * __thiscall
FIntToStringDataflowNode::GetTags(FIntToStringDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e82b7d0

UScriptStruct * __thiscall
FIntToStringDataflowNode::TypedScriptStruct(FIntToStringDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIntToStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIntToStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIntToStringDataflowNode,(UObject *)pUVar1,
                         L"IntToStringDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FIntToStringDataflowNode.OuterSingleton;
}

// Evaluate @ 14e82b8d0

void __thiscall
FIntToStringDataflowNode::Evaluate
          (FIntToStringDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  FString local_38;
  FConnectionReference local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FString *)puVar1 == &this->String) {
    local_28.Reference = &this->Int;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    FDataflowInput::GetValue<int>(this_00,param_1,local_28.Reference);
    ::FString::PrintfImpl(&local_38,L"%d");
    FDataflowNode::SetValue<FString_&,FString>
              ((FDataflowNode *)this,param_1,&local_38,&this->String);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

