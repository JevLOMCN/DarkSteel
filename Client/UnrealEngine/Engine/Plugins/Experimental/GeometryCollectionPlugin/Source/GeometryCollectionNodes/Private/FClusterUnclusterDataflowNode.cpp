// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e846960

UScriptStruct * __cdecl FClusterUnclusterDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterUnclusterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterUnclusterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode,(UObject *)pUVar1,
                         L"ClusterUnclusterDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClusterUnclusterDataflowNode.OuterSingleton;
}

// GetType @ 14e8469b0

FName __thiscall FClusterUnclusterDataflowNode::GetType(FClusterUnclusterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FClusterUnclusterDataflowNode");
  return in_RDX;
}

// IsA @ 14e846a40

bool __thiscall
FClusterUnclusterDataflowNode::IsA(FClusterUnclusterDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FClusterUnclusterDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e846aa8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e846aa8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e846ac6;
      }
    }
  }
  bVar5 = true;
LAB_14e846ac6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e846b00

FStructOnScope * __thiscall
FClusterUnclusterDataflowNode::NewStructOnScope(FClusterUnclusterDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FClusterUnclusterDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FClusterUnclusterDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode,(UObject *)pUVar2
                           ,L"ClusterUnclusterDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FClusterUnclusterDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e846bd0

void __thiscall
FClusterUnclusterDataflowNode::SerializeInternal
          (FClusterUnclusterDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterUnclusterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterUnclusterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode,(UObject *)pUVar1,
                         L"ClusterUnclusterDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FClusterUnclusterDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FClusterUnclusterDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e846c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e846c60

FName __thiscall FClusterUnclusterDataflowNode::GetDisplayName(FClusterUnclusterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Uncluster");
  return in_RDX;
}

// GetCategory @ 14e846d10

FName __thiscall FClusterUnclusterDataflowNode::GetCategory(FClusterUnclusterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Cluster");
  return in_RDX;
}

// GetTags @ 14e846d40

FString * __thiscall
FClusterUnclusterDataflowNode::GetTags
          (FClusterUnclusterDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e846d70

UScriptStruct * __thiscall
FClusterUnclusterDataflowNode::TypedScriptStruct(FClusterUnclusterDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterUnclusterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterUnclusterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode,(UObject *)pUVar1,
                         L"ClusterUnclusterDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClusterUnclusterDataflowNode.OuterSingleton;
}

// Evaluate @ 14e846ee0

void __thiscall
FClusterUnclusterDataflowNode::Evaluate
          (FClusterUnclusterDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  int iVar2;
  undefined1 *puVar3;
  FManagedArrayCollection *this_00;
  FDataflowSelection *this_01;
  FGeometryCollection *pFVar4;
  TArray<int,TSizedDefaultAllocator<32>_> local_338;
  FCollectionHierarchyFacade local_328;
  FCollectionTransformSelectionFacade local_278;
  
  pFVar1 = &this->Collection;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar3 == pFVar1) {
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1)
    ;
    iVar2 = FManagedArrayCollection::NumElements(this_00,FTransformCollection::TransformAttribute);
    if (iVar2 < 1) {
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,this_00,pFVar1);
    }
    else {
      this_01 = (FDataflowSelection *)
                FDataflowNode::GetValue<FDataflowTransformSelection>
                          ((FDataflowNode *)this,param_1,&this->TransformSelection);
      pFVar4 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00);
      if (pFVar4 != (FGeometryCollection *)0x0) {
        Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
                  (&local_328,(FManagedArrayCollection *)pFVar4);
        Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_328);
        FDataflowSelection::AsArray(this_01,&local_338);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        FCollectionTransformSelectionFacade(&local_278,(FManagedArrayCollection *)pFVar4);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        ConvertSelectionToClusterNodes(&local_278,&local_338,false);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::RemoveRootNodes
                  (&local_278,&local_338);
        if (local_338.ArrayNum != 0) {
          FGeometryCollectionClusteringUtility::CollapseHierarchyOneLevel(pFVar4,&local_338);
          FGeometryCollectionClusteringUtility::RemoveDanglingClusters(pFVar4);
          Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_328);
        }
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar4,pFVar1);
        if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.AllocatorInstance.Data);
        }
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  return;
}

// FClusterUnclusterDataflowNode @ 14e914cf0

FClusterUnclusterDataflowNode * __thiscall
FClusterUnclusterDataflowNode::FClusterUnclusterDataflowNode
          (FClusterUnclusterDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FClusterUnclusterDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_58);
  }
  return this;
}

