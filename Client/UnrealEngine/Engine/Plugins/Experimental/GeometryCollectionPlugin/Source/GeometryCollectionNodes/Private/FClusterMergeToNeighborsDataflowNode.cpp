// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e84cd80

UScriptStruct * __cdecl FClusterMergeToNeighborsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterMergeToNeighborsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterMergeToNeighborsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode,
                         (UObject *)pUVar1,L"ClusterMergeToNeighborsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClusterMergeToNeighborsDataflowNode.OuterSingleton;
}

// GetType @ 14e84cfa0

FName __thiscall
FClusterMergeToNeighborsDataflowNode::GetType(FClusterMergeToNeighborsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FClusterMergeToNeighborsDataflowNode");
  return in_RDX;
}

// IsA @ 14e84d020

bool __thiscall
FClusterMergeToNeighborsDataflowNode::IsA(FClusterMergeToNeighborsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FClusterMergeToNeighborsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e84d088;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e84d088:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e84d0a6;
      }
    }
  }
  bVar5 = true;
LAB_14e84d0a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e84d0e0

FStructOnScope * __thiscall
FClusterMergeToNeighborsDataflowNode::NewStructOnScope(FClusterMergeToNeighborsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FClusterMergeToNeighborsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FClusterMergeToNeighborsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode,
                           (UObject *)pUVar2,L"ClusterMergeToNeighborsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FClusterMergeToNeighborsDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e84d470

void __thiscall
FClusterMergeToNeighborsDataflowNode::SerializeInternal
          (FClusterMergeToNeighborsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterMergeToNeighborsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterMergeToNeighborsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode,
                         (UObject *)pUVar1,L"ClusterMergeToNeighborsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FClusterMergeToNeighborsDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FClusterMergeToNeighborsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e84d4ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e84d500

FName __thiscall
FClusterMergeToNeighborsDataflowNode::GetDisplayName(FClusterMergeToNeighborsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ClusterMergeToNeighbors");
  return in_RDX;
}

// GetCategory @ 14e84d560

FName __thiscall
FClusterMergeToNeighborsDataflowNode::GetCategory(FClusterMergeToNeighborsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Cluster");
  return in_RDX;
}

// GetTags @ 14e84d590

FString * __thiscall
FClusterMergeToNeighborsDataflowNode::GetTags
          (FClusterMergeToNeighborsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e84d600

UScriptStruct * __thiscall
FClusterMergeToNeighborsDataflowNode::TypedScriptStruct(FClusterMergeToNeighborsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterMergeToNeighborsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterMergeToNeighborsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode,
                         (UObject *)pUVar1,L"ClusterMergeToNeighborsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClusterMergeToNeighborsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e84dc70

void __thiscall
FClusterMergeToNeighborsDataflowNode::Evaluate
          (FClusterMergeToNeighborsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  bool bVar2;
  EClusterNeighborSelectionMethodEnum EVar3;
  bool bVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  undefined1 *puVar9;
  FManagedArrayCollection *this_00;
  FDataflowSelection *this_01;
  FGeometryCollection *pFVar10;
  FDataflowInput *pFVar11;
  float *pfVar12;
  bool *pbVar13;
  TArray<double,TSizedDefaultAllocator<32>_> local_198;
  TArray<int,TSizedDefaultAllocator<32>_> local_188;
  FConnectionReference local_178;
  FConnectionReference local_160;
  FConnectionReference local_148;
  TArrayView<int_const_,int> local_130;
  TArrayView<int_const_,int> local_120;
  TArrayView<double_const_,int> local_110;
  FCollectionHierarchyFacade local_f8;
  
  pFVar1 = &this->Collection;
  puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar9 == pFVar1) {
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1)
    ;
    this_01 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->TransformSelection);
    iVar8 = FDataflowSelection::NumSelected(this_01);
    if ((iVar8 == 0) ||
       (pFVar10 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00),
       pFVar10 == (FGeometryCollection *)0x0)) {
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,this_00,pFVar1);
    }
    else {
      Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
                (&local_f8,(FManagedArrayCollection *)pFVar10);
      Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_f8);
      local_178.Reference = &this->MinVolumeCubeRoot;
      local_178.Index = -1;
      local_178.ContainerReference = (void *)0x0;
      pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_178);
      pfVar12 = FDataflowInput::GetValue<float>(pFVar11,param_1,local_178.Reference);
      local_160.Index = -1;
      local_160.ContainerReference = (void *)0x0;
      local_160.Reference = &this->bOnlyToConnected;
      dVar6 = (double)*pfVar12;
      pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_160);
      pbVar13 = FDataflowInput::GetValue<bool>(pFVar11,param_1,local_160.Reference);
      local_148.Index = -1;
      local_148.ContainerReference = (void *)0x0;
      bVar2 = *pbVar13;
      local_148.Reference = &this->bOnlySameParent;
      pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_148);
      pbVar13 = FDataflowInput::GetValue<bool>(pFVar11,param_1,local_148.Reference);
      EVar3 = this->NeighborSelectionMethod;
      bVar4 = *pbVar13;
      FDataflowSelection::AsArray(this_01,&local_188);
      local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.ArrayNum = 0;
      local_198.ArrayMax = 0;
      local_130.DataPtr = (int *)0x0;
      local_130.ArrayNum = 0;
      FindBoneVolumes(pFVar10,&local_130,&local_198,__real_3ff0000000000000,true);
      local_120.DataPtr = (int *)local_188.AllocatorInstance.Data;
      if ((local_188.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_120.ArrayNum = local_188.ArrayNum;
      iVar8 = local_198.ArrayNum;
      local_110.DataPtr = (double *)local_198.AllocatorInstance.Data;
      if ((local_198.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_110.ArrayNum = iVar8;
      MergeClusters(pFVar10,&local_110,dVar6 * dVar6 * dVar6,&local_120,
                    (uint)(EVar3 != Dataflow_ClusterNeighborSelectionMethod_LargestNeighbor),bVar2,
                    bVar4,true);
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar10,pFVar1);
      if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
      if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.AllocatorInstance.Data);
      }
      (**(code **)pFVar10->_padding_)(pFVar10,1);
    }
  }
  return;
}

// FClusterMergeToNeighborsDataflowNode @ 14e914740

FClusterMergeToNeighborsDataflowNode * __thiscall
FClusterMergeToNeighborsDataflowNode::FClusterMergeToNeighborsDataflowNode
          (FClusterMergeToNeighborsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FClusterMergeToNeighborsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->NeighborSelectionMethod = Dataflow_ClusterNeighborSelectionMethod_LargestNeighbor;
  this->MinVolumeCubeRoot = 0.0;
  this->bOnlyToConnected = true;
  this->bOnlySameParent = true;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MinVolumeCubeRoot;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->bOnlyToConnected;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->bOnlySameParent;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_68);
  }
  return this;
}

// FClusterMergeToNeighborsDataflowNode @ 14e914900

FClusterMergeToNeighborsDataflowNode * __thiscall
FClusterMergeToNeighborsDataflowNode::FClusterMergeToNeighborsDataflowNode
          (FClusterMergeToNeighborsDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FClusterMergeToNeighborsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->NeighborSelectionMethod = Dataflow_ClusterNeighborSelectionMethod_LargestNeighbor;
  this->MinVolumeCubeRoot = 0.0;
  this->bOnlyToConnected = true;
  this->bOnlySameParent = true;
  return this;
}

