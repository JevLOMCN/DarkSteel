// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 9

// StaticStruct @ 14e828fa0

UScriptStruct * __cdecl FDivideDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDivideDataflowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDivideDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDivideDataflowNode,(UObject *)pUVar1,
                         L"DivideDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDivideDataflowNode.OuterSingleton;
}

// GetType @ 14e829290

FName __thiscall FDivideDataflowNode::GetType(FDivideDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDivideDataflowNode");
  return in_RDX;
}

// IsA @ 14e8292d0

bool __thiscall FDivideDataflowNode::IsA(FDivideDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  bool bVar6;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_20);
  ::FName::FName(&local_res20,"FDivideDataflowNode");
  pFVar4 = ::FName::ToString(&local_res20,&local_30);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar6 = iVar2 == 0;
      goto LAB_14e829341;
    }
  }
  else {
    bVar6 = iVar1 + iVar2 == 1;
LAB_14e829341:
    if (!bVar6) {
      local_res18 = local_res10;
      pFVar3 = ::FName::ToString(&local_res18,&local_40);
      ::FName::FName(&local_58,"FSafeDivideDataflowNode");
      pFVar4 = ::FName::ToString(&local_58,&local_50);
      iVar2 = (pFVar3->Data).ArrayNum;
      iVar1 = (pFVar4->Data).ArrayNum;
      if (iVar2 == iVar1) {
        if (1 < iVar2) {
          iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
          bVar6 = iVar2 == 0;
          goto LAB_14e8293b5;
        }
LAB_14e8293d4:
        bVar6 = true;
      }
      else {
        bVar6 = iVar1 + iVar2 == 1;
LAB_14e8293b5:
        if (bVar6) goto LAB_14e8293d4;
        bVar6 = FDataflowNode::IsA((FDataflowNode *)this,local_res18);
        if (bVar6) goto LAB_14e8293d4;
        bVar6 = false;
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      bVar5 = false;
      if (!bVar6) goto LAB_14e8293fa;
    }
  }
  bVar5 = true;
LAB_14e8293fa:
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e829690

FStructOnScope * __thiscall FDivideDataflowNode::NewStructOnScope(FDivideDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDivideDataflowNode.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FDivideDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDivideDataflowNode,(UObject *)pUVar2,
                           L"DivideDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDivideDataflowNode.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8297d0

void __thiscall FDivideDataflowNode::SerializeInternal(FDivideDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDivideDataflowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDivideDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDivideDataflowNode,(UObject *)pUVar1,
                         L"DivideDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDivideDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDivideDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e82984d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8298e0

FName __thiscall FDivideDataflowNode::GetDisplayName(FDivideDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Divide");
  return in_RDX;
}

// GetCategory @ 14e829920

FName __thiscall FDivideDataflowNode::GetCategory(FDivideDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Float");
  return in_RDX;
}

// GetTags @ 14e8299e0

FString * __thiscall
FDivideDataflowNode::GetTags(FDivideDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e829a40

UScriptStruct * __thiscall FDivideDataflowNode::TypedScriptStruct(FDivideDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDivideDataflowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDivideDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDivideDataflowNode,(UObject *)pUVar1,
                         L"DivideDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDivideDataflowNode.OuterSingleton;
}

