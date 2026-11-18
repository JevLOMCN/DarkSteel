// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e8a7110

UScriptStruct * __cdecl FMakeMaterialDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeMaterialDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeMaterialDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode,(UObject *)pUVar1,
                         L"MakeMaterialDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeMaterialDataflowNode.OuterSingleton;
}

// GetType @ 14e8a73a0

FName __thiscall FMakeMaterialDataflowNode::GetType(FMakeMaterialDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeMaterialDataflowNode");
  return in_RDX;
}

// IsA @ 14e8a74f0

bool __thiscall FMakeMaterialDataflowNode::IsA(FMakeMaterialDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeMaterialDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8a7558;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8a7558:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8a7576;
      }
    }
  }
  bVar5 = true;
LAB_14e8a7576:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8a75e0

FStructOnScope * __thiscall
FMakeMaterialDataflowNode::NewStructOnScope(FMakeMaterialDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeMaterialDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeMaterialDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode,(UObject *)pUVar2,
                           L"MakeMaterialDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeMaterialDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8a76a0

void __thiscall
FMakeMaterialDataflowNode::SerializeInternal(FMakeMaterialDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeMaterialDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeMaterialDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode,(UObject *)pUVar1,
                         L"MakeMaterialDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMakeMaterialDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMakeMaterialDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8a771d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8a7730

FName __thiscall FMakeMaterialDataflowNode::GetDisplayName(FMakeMaterialDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeMaterial");
  return in_RDX;
}

// GetCategory @ 14e8a79d0

FName __thiscall FMakeMaterialDataflowNode::GetCategory(FMakeMaterialDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Material");
  return in_RDX;
}

// GetTags @ 14e8a7a00

FString * __thiscall
FMakeMaterialDataflowNode::GetTags(FMakeMaterialDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8a7a30

UScriptStruct * __thiscall
FMakeMaterialDataflowNode::TypedScriptStruct(FMakeMaterialDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeMaterialDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeMaterialDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode,(UObject *)pUVar1,
                         L"MakeMaterialDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeMaterialDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8a7ba0

void __thiscall
FMakeMaterialDataflowNode::Evaluate
          (FMakeMaterialDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UMaterial> *)puVar1 == &this->Material) {
    FDataflowNode::SetValue<TObjectPtr<UMaterial>_const_&,TObjectPtr<UMaterial>_>
              ((FDataflowNode *)this,param_1,&this->InMaterial,&this->Material);
  }
  return;
}

