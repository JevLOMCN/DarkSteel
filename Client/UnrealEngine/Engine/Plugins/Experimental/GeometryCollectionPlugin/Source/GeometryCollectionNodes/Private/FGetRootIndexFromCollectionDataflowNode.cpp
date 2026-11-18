// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e8acbd0

UScriptStruct * __cdecl FGetRootIndexFromCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetRootIndexFromCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetRootIndexFromCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetRootIndexFromCollectionDataflowNode,
                         (UObject *)pUVar1,L"GetRootIndexFromCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetRootIndexFromCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e8acc30

FName __thiscall
FGetRootIndexFromCollectionDataflowNode::GetType(FGetRootIndexFromCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetRootIndexFromCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e8acc60

bool __thiscall
FGetRootIndexFromCollectionDataflowNode::IsA
          (FGetRootIndexFromCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetRootIndexFromCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8accc8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8accc8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8acce6;
      }
    }
  }
  bVar5 = true;
LAB_14e8acce6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8acd20

FStructOnScope * __thiscall
FGetRootIndexFromCollectionDataflowNode::NewStructOnScope
          (FGetRootIndexFromCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetRootIndexFromCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetRootIndexFromCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetRootIndexFromCollectionDataflowNode,
                           (UObject *)pUVar2,L"GetRootIndexFromCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetRootIndexFromCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8acdb0

void __thiscall
FGetRootIndexFromCollectionDataflowNode::SerializeInternal
          (FGetRootIndexFromCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetRootIndexFromCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetRootIndexFromCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetRootIndexFromCollectionDataflowNode,
                         (UObject *)pUVar1,L"GetRootIndexFromCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetRootIndexFromCollectionDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetRootIndexFromCollectionDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8ace2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8ace40

FName __thiscall
FGetRootIndexFromCollectionDataflowNode::GetDisplayName
          (FGetRootIndexFromCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetRootIndexFromCollection");
  return in_RDX;
}

// GetCategory @ 14e8ace70

FName __thiscall
FGetRootIndexFromCollectionDataflowNode::GetCategory(FGetRootIndexFromCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8acea0

FString * __thiscall
FGetRootIndexFromCollectionDataflowNode::GetTags
          (FGetRootIndexFromCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8aced0

UScriptStruct * __thiscall
FGetRootIndexFromCollectionDataflowNode::TypedScriptStruct
          (FGetRootIndexFromCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetRootIndexFromCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetRootIndexFromCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetRootIndexFromCollectionDataflowNode,
                         (UObject *)pUVar1,L"GetRootIndexFromCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetRootIndexFromCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8ad260

void __thiscall
FGetRootIndexFromCollectionDataflowNode::Evaluate
          (FGetRootIndexFromCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FManagedArrayCollection *pFVar2;
  int local_res8 [2];
  FCollectionHierarchyFacade local_b8;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((int *)puVar1 == &this->RootIndex) {
    pFVar2 = FDataflowNode::GetValue<FManagedArrayCollection>
                       ((FDataflowNode *)this,param_1,&this->Collection);
    Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade(&local_b8,pFVar2);
    local_res8[0] = Chaos::Facades::FCollectionHierarchyFacade::GetRootIndex(&local_b8);
    FDataflowNode::SetValue<int,int>((FDataflowNode *)this,param_1,local_res8,&this->RootIndex);
  }
  return;
}

