// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8d2920

UScriptStruct * __cdecl FProximityDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FProximityDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FProximityDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProximityDataflowNode,(UObject *)pUVar1,
                         L"ProximityDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FProximityDataflowNode.OuterSingleton;
}

// GetType @ 14e8d2c60

FName __thiscall FProximityDataflowNode::GetType(FProximityDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FProximityDataflowNode");
  return in_RDX;
}

// IsA @ 14e8d2c90

bool __thiscall FProximityDataflowNode::IsA(FProximityDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FProximityDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8d2cf8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8d2cf8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8d2d16;
      }
    }
  }
  bVar5 = true;
LAB_14e8d2d16:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8d2d80

FStructOnScope * __thiscall FProximityDataflowNode::NewStructOnScope(FProximityDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FProximityDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FProximityDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FProximityDataflowNode,(UObject *)pUVar2,
                           L"ProximityDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FProximityDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8d39c0

void __thiscall
FProximityDataflowNode::SerializeInternal(FProximityDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FProximityDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FProximityDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProximityDataflowNode,(UObject *)pUVar1,
                         L"ProximityDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FProximityDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FProximityDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8d3a3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8d3a80

FName __thiscall FProximityDataflowNode::GetDisplayName(FProximityDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Proximity");
  return in_RDX;
}

// GetCategory @ 14e8d3ab0

FName __thiscall FProximityDataflowNode::GetCategory(FProximityDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8d3ba0

FString * __thiscall
FProximityDataflowNode::GetTags(FProximityDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8d3c80

UScriptStruct * __thiscall FProximityDataflowNode::TypedScriptStruct(FProximityDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FProximityDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FProximityDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProximityDataflowNode,(UObject *)pUVar1,
                         L"ProximityDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FProximityDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8d4240

void __thiscall
FProximityDataflowNode::Evaluate
          (FProximityDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  bool bVar2;
  undefined1 *puVar3;
  FManagedArrayCollection *this_00;
  FGeometryCollection *pFVar4;
  FDataflowInput *pFVar5;
  float *pfVar6;
  FConvexHulls *pFVar7;
  FGeometryCollectionProximityUtility local_res8;
  FProximityProperties local_88;
  FConnectionReference local_78;
  FConvexHulls local_60;
  
  pFVar1 = &this->Collection;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar3 == pFVar1) {
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1)
    ;
    pFVar4 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00);
    if (pFVar4 != (FGeometryCollection *)0x0) {
      FGeometryCollectionProximityPropertiesInterface::GetProximityProperties
                ((FGeometryCollectionProximityPropertiesInterface *)&pFVar4->_padding_,&local_88);
      local_88.Method = (EProximityMethod)this->ProximityMethod;
      local_88.ContactMethod = this->FilterContactMethod;
      local_78.Reference = &this->DistanceThreshold;
      local_78.Index = -1;
      local_78.ContainerReference = (void *)0x0;
      pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
      pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,local_78.Reference);
      local_88.DistanceThreshold = *pfVar6;
      local_88.bUseAsConnectionGraph = this->bUseAsConnectionGraph;
      local_88.ContactAreaMethod = this->ContactAreaMethod;
      local_78.Reference = &this->ContactThreshold;
      local_78.Index = -1;
      local_78.ContainerReference = (void *)0x0;
      pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
      pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,local_78.Reference);
      local_88.RequireContactAmount = *pfVar6;
      FGeometryCollectionProximityPropertiesInterface::SetProximityProperties
                ((FGeometryCollectionProximityPropertiesInterface *)&pFVar4->_padding_,&local_88);
      bVar2 = false;
      local_60.Hulls.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.Hulls.ArrayNum = 0;
      local_60.Hulls.ArrayMax = 0;
      local_60.TransformToHullsIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.TransformToHullsIndices.ArrayNum = 0;
      local_60.TransformToHullsIndices.ArrayMax = 0;
      local_60.Pivots.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.Pivots.ArrayNum = 0;
      local_60.Pivots.ArrayMax = 0;
      if (this->bRecomputeConvexHulls == false) {
        bVar2 = UE::GeometryCollectionConvexUtility::GetExistingConvexHullsInSharedSpace
                          ((FManagedArrayCollection *)pFVar4,&local_60,true);
      }
      FGeometryCollectionProximityUtility::FGeometryCollectionProximityUtility(&local_res8,pFVar4);
      FGeometryCollectionProximityUtility::InvalidateProximity(&local_res8);
      pFVar7 = &local_60;
      if (bVar2 == false) {
        pFVar7 = (FConvexHulls *)0x0;
      }
      FGeometryCollectionProximityUtility::UpdateProximity(&local_res8,pFVar7);
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar4,pFVar1);
      if (local_60.Pivots.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Pivots.AllocatorInstance.Data);
      }
      DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                 local_60.TransformToHullsIndices.AllocatorInstance.Data,
                 local_60.TransformToHullsIndices.ArrayNum);
      if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
          local_60.TransformToHullsIndices.AllocatorInstance.Data !=
          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
        FMemory::Free(local_60.TransformToHullsIndices.AllocatorInstance.Data);
      }
      DestructItems<TRefCountPtr<Chaos::FConvex>,int>
                ((TRefCountPtr<Chaos::FConvex> *)local_60.Hulls.AllocatorInstance.Data,
                 local_60.Hulls.ArrayNum);
      if (local_60.Hulls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Hulls.AllocatorInstance.Data);
      }
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  return;
}

// FProximityDataflowNode @ 14e9283a0

FProximityDataflowNode * __thiscall
FProximityDataflowNode::FProximityDataflowNode
          (FProximityDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FLinearColor FVar1;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->ProximityMethod = Dataflow_ProximityMethod_Precise;
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FProximityDataflowNode__6B_;
  this->FilterContactMethod = Dataflow_ProximityContactFilteringMethod_ProjectedBoundsOverlap;
  this->bUseAsConnectionGraph = false;
  this->ContactAreaMethod = Dataflow_ConnectionContactAreaMethod_None;
  this->bRecomputeConvexHulls = true;
  this->DistanceThreshold = 1.0;
  this->ContactThreshold = 0.0;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  FVar1 = FLinearColor::Yellow;
  this->LineWidthMultiplier = 2.0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FLinearColor::Blue;
  this->CenterSize = 12.0;
  this->bRandomizeColor = false;
  (this->CenterColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->ColorRandomSeed = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->DistanceThreshold;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->ContactThreshold;
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

// FProximityDataflowNode @ 14e928530

FProximityDataflowNode * __thiscall
FProximityDataflowNode::FProximityDataflowNode(FProximityDataflowNode *this)

{
  FLinearColor FVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->ProximityMethod = Dataflow_ProximityMethod_Precise;
  this->_padding_ = (longlong)&___7FProximityDataflowNode__6B_;
  this->DistanceThreshold = 1.0;
  this->ContactThreshold = 0.0;
  this->FilterContactMethod = Dataflow_ProximityContactFilteringMethod_ProjectedBoundsOverlap;
  this->bUseAsConnectionGraph = false;
  this->ContactAreaMethod = Dataflow_ConnectionContactAreaMethod_None;
  this->bRecomputeConvexHulls = true;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  FVar1 = FLinearColor::Yellow;
  this->LineWidthMultiplier = 2.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FLinearColor::Blue;
  this->CenterSize = 12.0;
  this->bRandomizeColor = false;
  (this->CenterColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->ColorRandomSeed = 0;
  return this;
}

