// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e8d2c20

UScriptStruct * __cdecl FMakeLiteralFloatDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeLiteralFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeLiteralFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode,(UObject *)pUVar1,
                         L"MakeLiteralFloatDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeLiteralFloatDataflowNode.OuterSingleton;
}

// GetType @ 14e8d3a50

FName __thiscall FMakeLiteralFloatDataflowNode::GetType(FMakeLiteralFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeLiteralFloatDataflowNode");
  return in_RDX;
}

// IsA @ 14e8d3ae0

bool __thiscall
FMakeLiteralFloatDataflowNode::IsA(FMakeLiteralFloatDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeLiteralFloatDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8d3b48;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8d3b48:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8d3b66;
      }
    }
  }
  bVar5 = true;
LAB_14e8d3b66:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8d3bd0

FStructOnScope * __thiscall
FMakeLiteralFloatDataflowNode::NewStructOnScope(FMakeLiteralFloatDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeLiteralFloatDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeLiteralFloatDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode,(UObject *)pUVar2
                           ,L"MakeLiteralFloatDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeLiteralFloatDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8d3cc0

void __thiscall
FMakeLiteralFloatDataflowNode::SerializeInternal
          (FMakeLiteralFloatDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeLiteralFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeLiteralFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode,(UObject *)pUVar1,
                         L"MakeLiteralFloatDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeLiteralFloatDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeLiteralFloatDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8d3d3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8d3d50

FName __thiscall FMakeLiteralFloatDataflowNode::GetDisplayName(FMakeLiteralFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeLiteralFloat");
  return in_RDX;
}

// GetCategory @ 14e8d3d80

FName __thiscall FMakeLiteralFloatDataflowNode::GetCategory(FMakeLiteralFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Float");
  return in_RDX;
}

// GetTags @ 14e8d3db0

FString * __thiscall
FMakeLiteralFloatDataflowNode::GetTags
          (FMakeLiteralFloatDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8d3de0

UScriptStruct * __thiscall
FMakeLiteralFloatDataflowNode::TypedScriptStruct(FMakeLiteralFloatDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeLiteralFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeLiteralFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode,(UObject *)pUVar1,
                         L"MakeLiteralFloatDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeLiteralFloatDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8d40e0

void __thiscall
FMakeLiteralFloatDataflowNode::Evaluate
          (FMakeLiteralFloatDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar1 == &this->Float) {
    FDataflowNode::SetValue<float_const_&,float>
              ((FDataflowNode *)this,param_1,&this->Value,&this->Float);
  }
  return;
}

