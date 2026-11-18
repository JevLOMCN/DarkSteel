// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e853b30

UScriptStruct * __cdecl FClusterIsolatedRootsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterIsolatedRootsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterIsolatedRootsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode,
                         (UObject *)pUVar1,L"ClusterIsolatedRootsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClusterIsolatedRootsDataflowNode.OuterSingleton;
}

// GetType @ 14e853dc0

FName __thiscall FClusterIsolatedRootsDataflowNode::GetType(FClusterIsolatedRootsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FClusterIsolatedRootsDataflowNode");
  return in_RDX;
}

// IsA @ 14e853e40

bool __thiscall
FClusterIsolatedRootsDataflowNode::IsA(FClusterIsolatedRootsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FClusterIsolatedRootsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e853ea8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e853ea8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e853ec6;
      }
    }
  }
  bVar5 = true;
LAB_14e853ec6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e853f00

FStructOnScope * __thiscall
FClusterIsolatedRootsDataflowNode::NewStructOnScope(FClusterIsolatedRootsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FClusterIsolatedRootsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FClusterIsolatedRootsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode,
                           (UObject *)pUVar2,L"ClusterIsolatedRootsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FClusterIsolatedRootsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e853ff0

void __thiscall
FClusterIsolatedRootsDataflowNode::SerializeInternal
          (FClusterIsolatedRootsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterIsolatedRootsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterIsolatedRootsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode,
                         (UObject *)pUVar1,L"ClusterIsolatedRootsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FClusterIsolatedRootsDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FClusterIsolatedRootsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e85406d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8540c0

FName __thiscall
FClusterIsolatedRootsDataflowNode::GetDisplayName(FClusterIsolatedRootsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ClusterIsolatedRoots");
  return in_RDX;
}

// GetCategory @ 14e8540f0

FName __thiscall
FClusterIsolatedRootsDataflowNode::GetCategory(FClusterIsolatedRootsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Cluster");
  return in_RDX;
}

// GetTags @ 14e8541c0

FString * __thiscall
FClusterIsolatedRootsDataflowNode::GetTags
          (FClusterIsolatedRootsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e854ad0

UScriptStruct * __thiscall
FClusterIsolatedRootsDataflowNode::TypedScriptStruct(FClusterIsolatedRootsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterIsolatedRootsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterIsolatedRootsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode,
                         (UObject *)pUVar1,L"ClusterIsolatedRootsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClusterIsolatedRootsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e854eb0

void __thiscall
FClusterIsolatedRootsDataflowNode::Evaluate
          (FClusterIsolatedRootsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  int iVar2;
  undefined1 *puVar3;
  FManagedArrayCollection *this_00;
  FGeometryCollection *pFVar4;
  
  pFVar1 = &this->Collection;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar3 == pFVar1) {
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1)
    ;
    iVar2 = FManagedArrayCollection::NumElements(this_00,FTransformCollection::TransformGroup);
    if ((iVar2 == 1) &&
       (pFVar4 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00),
       pFVar4 != (FGeometryCollection *)0x0)) {
      FGeometryCollectionClusteringUtility::ClusterAllBonesUnderNewRoot(pFVar4,(FName)0x0,true);
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar4,pFVar1);
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    else {
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,this_00,pFVar1);
    }
  }
  return;
}

