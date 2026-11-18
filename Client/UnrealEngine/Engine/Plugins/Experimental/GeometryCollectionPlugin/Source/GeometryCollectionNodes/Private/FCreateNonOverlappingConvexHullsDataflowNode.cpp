// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8b34a0

UScriptStruct * __cdecl FCreateNonOverlappingConvexHullsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode,
                         (UObject *)pUVar1,L"CreateNonOverlappingConvexHullsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8b3740

FName __thiscall
FCreateNonOverlappingConvexHullsDataflowNode::GetType
          (FCreateNonOverlappingConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCreateNonOverlappingConvexHullsDataflowNode");
  return in_RDX;
}

// IsA @ 14e8b37b0

bool __thiscall
FCreateNonOverlappingConvexHullsDataflowNode::IsA
          (FCreateNonOverlappingConvexHullsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCreateNonOverlappingConvexHullsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8b3818;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8b3818:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8b3836;
      }
    }
  }
  bVar5 = true;
LAB_14e8b3836:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8b3870

FStructOnScope * __thiscall
FCreateNonOverlappingConvexHullsDataflowNode::NewStructOnScope
          (FCreateNonOverlappingConvexHullsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode.OuterSingleton
           = GetStaticStruct(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode,
                             (UObject *)pUVar2,L"CreateNonOverlappingConvexHullsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8b3a60

void __thiscall
FCreateNonOverlappingConvexHullsDataflowNode::SerializeInternal
          (FCreateNonOverlappingConvexHullsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode,
                         (UObject *)pUVar1,L"CreateNonOverlappingConvexHullsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8b3add. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8b3af0

FName __thiscall
FCreateNonOverlappingConvexHullsDataflowNode::GetDisplayName
          (FCreateNonOverlappingConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CreateNonOverlappingConvexHulls");
  return in_RDX;
}

// GetCategory @ 14e8b3b20

FName __thiscall
FCreateNonOverlappingConvexHullsDataflowNode::GetCategory
          (FCreateNonOverlappingConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8b3b50

FString * __thiscall
FCreateNonOverlappingConvexHullsDataflowNode::GetTags
          (FCreateNonOverlappingConvexHullsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8b3b80

UScriptStruct * __thiscall
FCreateNonOverlappingConvexHullsDataflowNode::TypedScriptStruct
          (FCreateNonOverlappingConvexHullsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode,
                         (UObject *)pUVar1,L"CreateNonOverlappingConvexHullsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8b4200

void __thiscall
FCreateNonOverlappingConvexHullsDataflowNode::Evaluate
          (FCreateNonOverlappingConvexHullsDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 *puVar5;
  FDataflowInput *pFVar6;
  FManagedArrayCollection *this_00;
  FGeometryCollection *pFVar7;
  float *pfVar8;
  FGeometryCollectionConvexData local_78;
  FConnectionReference local_68 [3];
  
  pFVar1 = &this->Collection;
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar5 == pFVar1) {
    local_68[0].ContainerReference = (void *)0x0;
    local_68[0].Index = -1;
    local_68[0].Reference = pFVar1;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,local_68);
    if (pFVar6->Connection != (FDataflowOutput *)0x0) {
      this_00 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar1);
      pFVar7 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00);
      if (pFVar7 != (FGeometryCollection *)0x0) {
        local_68[0].Reference = &this->CanRemoveFraction;
        local_68[0].Index = -1;
        local_68[0].ContainerReference = (void *)0x0;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,local_68);
        pfVar8 = FDataflowInput::GetValue<float>(pFVar6,param_1,local_68[0].Reference);
        fVar2 = *pfVar8;
        local_68[0].Reference = &this->CanExceedFraction;
        local_68[0].Index = -1;
        local_68[0].ContainerReference = (void *)0x0;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,local_68);
        pfVar8 = FDataflowInput::GetValue<float>(pFVar6,param_1,local_68[0].Reference);
        fVar3 = *pfVar8;
        local_68[0].Reference = &this->SimplificationDistanceThreshold;
        local_68[0].Index = -1;
        local_68[0].ContainerReference = (void *)0x0;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,local_68);
        pfVar8 = FDataflowInput::GetValue<float>(pFVar6,param_1,local_68[0].Reference);
        fVar4 = *pfVar8;
        local_68[0].Reference = &this->OverlapRemovalShrinkPercent;
        local_68[0].Index = -1;
        local_68[0].ContainerReference = (void *)0x0;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,local_68);
        pfVar8 = FDataflowInput::GetValue<float>(pFVar6,param_1,local_68[0].Reference);
        FGeometryCollectionConvexUtility::CreateNonOverlappingConvexHullData
                  (&local_78,pFVar7,(double)fVar2,(double)fVar4,(double)fVar3,
                   (uint)this->OverlapRemovalMethod,(double)*pfVar8,(FConvexHulls *)0x0);
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar7,pFVar1);
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
  }
  return;
}

// FCreateNonOverlappingConvexHullsDataflowNode @ 14e91ad20

FCreateNonOverlappingConvexHullsDataflowNode * __thiscall
FCreateNonOverlappingConvexHullsDataflowNode::FCreateNonOverlappingConvexHullsDataflowNode
          (FCreateNonOverlappingConvexHullsDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  byte *pbVar1;
  FManagedArrayCollection *this_00;
  FLinearColor FVar2;
  FDataflowInput *pFVar3;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCreateNonOverlappingConvexHullsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  this->OverlapRemovalMethod = Dataflow_EConvexOverlapRemovalMethod_All;
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  (this->DebugDrawRenderSettings).bTranslucent = true;
  this->CanExceedFraction = 0.5;
  this->SimplificationDistanceThreshold = 10.0;
  this->OverlapRemovalShrinkPercent = 0.0;
  this->CanRemoveFraction = 0.3;
  FVar2 = FLinearColor::Gray;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 1.0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  this->bRandomizeColor = true;
  this->ColorRandomSeed = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->CanRemoveFraction;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->SimplificationDistanceThreshold;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->CanExceedFraction;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->OverlapRemovalShrinkPercent;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_68);
  }
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 2.0;
  return this;
}

// FCreateNonOverlappingConvexHullsDataflowNode @ 14e91af40

FCreateNonOverlappingConvexHullsDataflowNode * __thiscall
FCreateNonOverlappingConvexHullsDataflowNode::FCreateNonOverlappingConvexHullsDataflowNode
          (FCreateNonOverlappingConvexHullsDataflowNode *this)

{
  FLinearColor FVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCreateNonOverlappingConvexHullsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->CanExceedFraction = 0.5;
  this->OverlapRemovalShrinkPercent = 0.0;
  this->SimplificationDistanceThreshold = 10.0;
  this->OverlapRemovalMethod = Dataflow_EConvexOverlapRemovalMethod_All;
  this->CanRemoveFraction = 0.3;
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  FVar1 = FLinearColor::Gray;
  (this->DebugDrawRenderSettings).bTranslucent = true;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 1.0;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->ColorRandomSeed = 0;
  this->bRandomizeColor = true;
  return this;
}

