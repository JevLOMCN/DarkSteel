// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e8c5720

UScriptStruct * __cdecl FMakeLiteralStringDataflowNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeLiteralStringDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeLiteralStringDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_v2,
                         (UObject *)pUVar1,L"MakeLiteralStringDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FMakeLiteralStringDataflowNode_v2.OuterSingleton;
}

// GetType @ 14e8c58e0

FName __thiscall FMakeLiteralStringDataflowNode_v2::GetType(FMakeLiteralStringDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeLiteralStringDataflowNode_v2");
  return in_RDX;
}

// IsA @ 14e8c5a10

bool __thiscall
FMakeLiteralStringDataflowNode_v2::IsA(FMakeLiteralStringDataflowNode_v2 *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeLiteralStringDataflowNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8c5a78;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8c5a78:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8c5a96;
      }
    }
  }
  bVar5 = true;
LAB_14e8c5a96:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8c5c20

FStructOnScope * __thiscall
FMakeLiteralStringDataflowNode_v2::NewStructOnScope(FMakeLiteralStringDataflowNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeLiteralStringDataflowNode_v2.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeLiteralStringDataflowNode_v2.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_v2,
                           (UObject *)pUVar2,L"MakeLiteralStringDataflowNode_v2");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeLiteralStringDataflowNode_v2.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8c6050

void __thiscall
FMakeLiteralStringDataflowNode_v2::SerializeInternal
          (FMakeLiteralStringDataflowNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeLiteralStringDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeLiteralStringDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_v2,
                         (UObject *)pUVar1,L"MakeLiteralStringDataflowNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeLiteralStringDataflowNode_v2.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeLiteralStringDataflowNode_v2.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8c60cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8c6120

FName __thiscall
FMakeLiteralStringDataflowNode_v2::GetDisplayName(FMakeLiteralStringDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeLiteralString");
  return in_RDX;
}

// GetCategory @ 14e8c6150

FName __thiscall
FMakeLiteralStringDataflowNode_v2::GetCategory(FMakeLiteralStringDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|String");
  return in_RDX;
}

// GetTags @ 14e8c6180

FString * __thiscall
FMakeLiteralStringDataflowNode_v2::GetTags
          (FMakeLiteralStringDataflowNode_v2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8c6210

UScriptStruct * __thiscall
FMakeLiteralStringDataflowNode_v2::TypedScriptStruct(FMakeLiteralStringDataflowNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeLiteralStringDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeLiteralStringDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_v2,
                         (UObject *)pUVar1,L"MakeLiteralStringDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FMakeLiteralStringDataflowNode_v2.OuterSingleton;
}

// Evaluate @ 14e8c6ab0

void __thiscall
FMakeLiteralStringDataflowNode_v2::Evaluate
          (FMakeLiteralStringDataflowNode_v2 *this,FContext *param_1,FDataflowOutput *param_2)

{
  FString *pFVar1;
  undefined1 *puVar2;
  
  pFVar1 = &this->String;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FString *)puVar2 == pFVar1) {
    FDataflowNode::SetValue<FString_const_&,FString>((FDataflowNode *)this,param_1,pFVar1,pFVar1);
  }
  return;
}

