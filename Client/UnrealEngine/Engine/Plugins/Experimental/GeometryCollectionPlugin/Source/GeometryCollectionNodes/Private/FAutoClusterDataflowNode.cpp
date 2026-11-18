// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e83c9d0

UScriptStruct * __cdecl FAutoClusterDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutoClusterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAutoClusterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutoClusterDataflowNode,(UObject *)pUVar1,
                         L"AutoClusterDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAutoClusterDataflowNode.OuterSingleton;
}

// GetType @ 14e83ced0

FName __thiscall FAutoClusterDataflowNode::GetType(FAutoClusterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FAutoClusterDataflowNode");
  return in_RDX;
}

// IsA @ 14e83d020

bool __thiscall FAutoClusterDataflowNode::IsA(FAutoClusterDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FAutoClusterDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e83d088;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e83d088:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e83d0a6;
      }
    }
  }
  bVar5 = true;
LAB_14e83d0a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e83d0e0

FStructOnScope * __thiscall
FAutoClusterDataflowNode::NewStructOnScope(FAutoClusterDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAutoClusterDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FAutoClusterDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAutoClusterDataflowNode,(UObject *)pUVar2,
                           L"AutoClusterDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FAutoClusterDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e83d1f0

void __thiscall
FAutoClusterDataflowNode::SerializeInternal(FAutoClusterDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutoClusterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAutoClusterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutoClusterDataflowNode,(UObject *)pUVar1,
                         L"AutoClusterDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FAutoClusterDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FAutoClusterDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e83d26d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e83d280

FName __thiscall FAutoClusterDataflowNode::GetDisplayName(FAutoClusterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"AutoCluster");
  return in_RDX;
}

// GetCategory @ 14e83d2b0

FName __thiscall FAutoClusterDataflowNode::GetCategory(FAutoClusterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Cluster");
  return in_RDX;
}

// GetTags @ 14e83d2e0

FString * __thiscall
FAutoClusterDataflowNode::GetTags(FAutoClusterDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e83d350

UScriptStruct * __thiscall
FAutoClusterDataflowNode::TypedScriptStruct(FAutoClusterDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutoClusterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAutoClusterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutoClusterDataflowNode,(UObject *)pUVar1,
                         L"AutoClusterDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAutoClusterDataflowNode.OuterSingleton;
}

// Evaluate @ 14e83e110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoClusterDataflowNode::Evaluate
          (FAutoClusterDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  FManagedArrayCollection *this_00;
  FDataflowSelection *this_01;
  FGeometryCollection *this_02;
  FDataflowInput *pFVar12;
  uint *puVar13;
  float *pfVar14;
  int *piVar15;
  bool *pbVar16;
  int iVar17;
  FConnectionReference local_168;
  bool local_150;
  EFractureEngineClusterSizeMethod local_14f;
  int local_14c;
  int local_148;
  int local_144;
  uint local_140;
  FGeometryCollectionProximityUtility local_138 [2];
  FCollectionHierarchyFacade local_128;
  
  pFVar1 = &this->Collection;
  puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar11 == pFVar1) {
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1)
    ;
    this_01 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->TransformSelection);
    this_02 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00);
    if (this_02 != (FGeometryCollection *)0x0) {
      Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
                (&local_128,(FManagedArrayCollection *)this_02);
      Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_128);
      local_14f = this->ClusterSizeMethod;
      local_168.Reference = &this->ClusterSites;
      local_168.Index = -1;
      local_168.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
      puVar13 = (uint *)FDataflowInput::GetValue<int>(pFVar12,param_1,local_168.Reference);
      local_140 = *puVar13;
      local_168.Reference = &this->ClusterFraction;
      local_168.Index = -1;
      local_168.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
      pfVar14 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_168.Reference);
      fVar2 = *pfVar14;
      local_168.Reference = &this->SiteSize;
      local_168.Index = -1;
      local_168.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
      pfVar14 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_168.Reference);
      fVar3 = *pfVar14;
      local_150 = this->AutoCluster;
      bVar6 = this->EnforceSiteParameters;
      bVar7 = this->AvoidIsolated;
      local_168.Reference = &this->ClusterGridWidth;
      local_168.Index = -1;
      local_168.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
      piVar15 = FDataflowInput::GetValue<int>(pFVar12,param_1,local_168.Reference);
      local_144 = *piVar15;
      local_168.Reference = &this->ClusterGridDepth;
      local_168.Index = -1;
      local_168.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
      piVar15 = FDataflowInput::GetValue<int>(pFVar12,param_1,local_168.Reference);
      local_148 = *piVar15;
      local_168.Reference = &this->ClusterGridHeight;
      local_168.Index = -1;
      local_168.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
      piVar15 = FDataflowInput::GetValue<int>(pFVar12,param_1,local_168.Reference);
      local_14c = *piVar15;
      local_168.Reference = &this->MinimumSize;
      local_168.Index = -1;
      local_168.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
      pfVar14 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_168.Reference);
      fVar4 = *pfVar14;
      if (this->ClusterSizeMethod == Dataflow_ClusterSizeMethod_ByGrid) {
        iVar17 = this->DriftIterations;
      }
      else {
        iVar17 = 500;
      }
      local_168.Reference = &this->bPreferConvexity;
      local_168.Index = -1;
      local_168.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
      pbVar16 = FDataflowInput::GetValue<bool>(pFVar12,param_1,local_168.Reference);
      bVar8 = *pbVar16;
      local_168.Reference = &this->ConcavityTolerance;
      local_168.Index = -1;
      local_168.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
      pfVar14 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_168.Reference);
      iVar9 = (this_01->SelectionArray).NumBits;
      fVar5 = *pfVar14;
      iVar10 = FManagedArrayCollection::NumElements
                         ((FManagedArrayCollection *)this_02,FTransformCollection::TransformGroup);
      if (iVar9 == iVar10) {
        local_168.Reference = (float *)0x0;
        local_168.Index = 0;
        local_168._12_4_ = 0;
        FDataflowSelection::AsArray(this_01,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_168);
        FFractureEngineClustering::AutoCluster
                  (this_02,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_168,local_14f,local_140
                   ,fVar2,fVar3,local_150,bVar7,bVar6,local_144,local_148,local_14c,fVar4,iVar17,
                   bVar8,fVar5);
        FGeometryCollectionProximityUtility::FGeometryCollectionProximityUtility(local_138,this_02);
        FGeometryCollectionProximityUtility::UpdateProximity(local_138,(FConvexHulls *)0x0);
        if (local_168.Reference != (float *)0x0) {
          FMemory::Free(local_168.Reference);
        }
      }
      else if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)this_02,pFVar1);
      (**(code **)this_02->_padding_)(this_02,1);
    }
  }
  return;
}

// FAutoClusterDataflowNode @ 14e911080

FAutoClusterDataflowNode * __thiscall
FAutoClusterDataflowNode::FAutoClusterDataflowNode
          (FAutoClusterDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FLinearColor FVar2;
  uint uVar3;
  FName this_00;
  FDataflowInput *pFVar4;
  FDataflowOutput *this_01;
  FDataflowTransformSelection *pFVar5;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  this->ClusterSizeMethod = Dataflow_ClusterSizeMethod_ByNumber;
  this->DriftIterations = 0;
  this->MinimumSize = 0.0;
  this->bPreferConvexity = false;
  this->ConcavityTolerance = 0.0;
  this->_padding_ = (longlong)&___7FAutoClusterDataflowNode__6B_;
  this->ClusterSites = 10;
  this->ClusterFraction = 0.25;
  this->SiteSize = 1.0;
  this->ClusterGridWidth = 2;
  this->ClusterGridDepth = 2;
  this->ClusterGridHeight = 2;
  this->AutoCluster = true;
  this->EnforceSiteParameters = true;
  this->AvoidIsolated = true;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  pFVar5 = &this->TransformSelection;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Index = -1;
  uVar3 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar5->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar5->field_0x4 = uVar3;
  local_78.Reference = (void *)((longlong)local_res8 + 0x278);
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  FVar2 = FLinearColor::Yellow;
  *(float *)((longlong)local_res8 + 0x360) = 2.0;
  ((FLinearColor_u_0 *)((longlong)local_res8 + 0x350))->_s_0 =
       (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = FLinearColor::Blue;
  *(bool *)((longlong)local_res8 + 0x378) = false;
  *(int *)((longlong)local_res8 + 0x37c) = 0;
  ((FLinearColor_u_0 *)((longlong)local_res8 + 0x364))->_s_0 =
       (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  *(float *)((longlong)local_res8 + 0x374) = 12.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pFVar5;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->ClusterSites;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->ClusterFraction;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->SiteSize;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->ClusterGridWidth;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->ClusterGridDepth;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->ClusterGridHeight;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x268);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x26c);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x270);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x278);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_78);
  }
  return (FAutoClusterDataflowNode *)this_00;
}

// FAutoClusterDataflowNode @ 14e9113e0

FAutoClusterDataflowNode * __thiscall
FAutoClusterDataflowNode::FAutoClusterDataflowNode(FAutoClusterDataflowNode *this)

{
  FLinearColor FVar1;
  uint uVar2;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->ClusterSizeMethod = Dataflow_ClusterSizeMethod_ByNumber;
  this->ClusterSites = 10;
  this->_padding_ = (longlong)&___7FAutoClusterDataflowNode__6B_;
  this->ClusterFraction = 0.25;
  this->SiteSize = 1.0;
  this->ClusterGridWidth = 2;
  this->ClusterGridDepth = 2;
  this->ClusterGridHeight = 2;
  this->DriftIterations = 0;
  this->MinimumSize = 0.0;
  this->bPreferConvexity = false;
  this->ConcavityTolerance = 0.0;
  this->AutoCluster = true;
  this->EnforceSiteParameters = true;
  this->AvoidIsolated = true;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
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

