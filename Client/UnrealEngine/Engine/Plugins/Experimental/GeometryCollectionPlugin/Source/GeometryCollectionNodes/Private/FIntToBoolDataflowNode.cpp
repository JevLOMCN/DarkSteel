// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e83a650

UScriptStruct * __cdecl FIntToBoolDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIntToBoolDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIntToBoolDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIntToBoolDataflowNode,(UObject *)pUVar1,
                         L"IntToBoolDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FIntToBoolDataflowNode.OuterSingleton;
}

// GetType @ 14e83a960

FName __thiscall FIntToBoolDataflowNode::GetType(FIntToBoolDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FIntToBoolDataflowNode");
  return in_RDX;
}

// IsA @ 14e83a9d0

bool __thiscall FIntToBoolDataflowNode::IsA(FIntToBoolDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FIntToBoolDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e83aa38;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e83aa38:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e83aa56;
      }
    }
  }
  bVar5 = true;
LAB_14e83aa56:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e83aa90

FStructOnScope * __thiscall FIntToBoolDataflowNode::NewStructOnScope(FIntToBoolDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FIntToBoolDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FIntToBoolDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIntToBoolDataflowNode,(UObject *)pUVar2,
                           L"IntToBoolDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FIntToBoolDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e83afd0

void __thiscall
FIntToBoolDataflowNode::SerializeInternal(FIntToBoolDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIntToBoolDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIntToBoolDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIntToBoolDataflowNode,(UObject *)pUVar1,
                         L"IntToBoolDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FIntToBoolDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FIntToBoolDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e83b04d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e83b060

FName __thiscall FIntToBoolDataflowNode::GetDisplayName(FIntToBoolDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"IntToBool");
  return in_RDX;
}

// GetCategory @ 14e83b0d0

FName __thiscall FIntToBoolDataflowNode::GetCategory(FIntToBoolDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Conversions");
  return in_RDX;
}

// GetTags @ 14e83b100

FString * __thiscall
FIntToBoolDataflowNode::GetTags(FIntToBoolDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e83b130

UScriptStruct * __thiscall FIntToBoolDataflowNode::TypedScriptStruct(FIntToBoolDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIntToBoolDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIntToBoolDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIntToBoolDataflowNode,(UObject *)pUVar1,
                         L"IntToBoolDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FIntToBoolDataflowNode.OuterSingleton;
}

// Evaluate @ 14e83bb90

void __thiscall
FIntToBoolDataflowNode::Evaluate
          (FIntToBoolDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  int *piVar2;
  bool local_res8 [8];
  FConnectionReference local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((bool *)puVar1 == &this->Bool) {
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    local_28.Reference = &this->Int;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    piVar2 = FDataflowInput::GetValue<int>(this_00,param_1,&this->Int);
    local_res8[0] = *piVar2 != 0;
    FDataflowNode::SetValue<bool_&,bool>((FDataflowNode *)this,param_1,local_res8,&this->Bool);
  }
  return;
}

