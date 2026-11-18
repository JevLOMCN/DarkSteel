// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8cbda0

UScriptStruct * __cdecl FRecomputeNormalsInGeometryCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode
                         ,(UObject *)pUVar1,L"RecomputeNormalsInGeometryCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8cbf10

FName __thiscall
FRecomputeNormalsInGeometryCollectionDataflowNode::GetType
          (FRecomputeNormalsInGeometryCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FRecomputeNormalsInGeometryCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e8cc0c0

bool __thiscall
FRecomputeNormalsInGeometryCollectionDataflowNode::IsA
          (FRecomputeNormalsInGeometryCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FRecomputeNormalsInGeometryCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8cc128;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8cc128:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8cc146;
      }
    }
  }
  bVar5 = true;
LAB_14e8cc146:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8cc200

FStructOnScope * __thiscall
FRecomputeNormalsInGeometryCollectionDataflowNode::NewStructOnScope
          (FRecomputeNormalsInGeometryCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode
                           ,(UObject *)pUVar2,L"RecomputeNormalsInGeometryCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8cc310

void __thiscall
FRecomputeNormalsInGeometryCollectionDataflowNode::SerializeInternal
          (FRecomputeNormalsInGeometryCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode
                         ,(UObject *)pUVar1,L"RecomputeNormalsInGeometryCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8cc38d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8cc3d0

FName __thiscall
FRecomputeNormalsInGeometryCollectionDataflowNode::GetDisplayName
          (FRecomputeNormalsInGeometryCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"RecomputeNormalsInGeometryCollection");
  return in_RDX;
}

// GetCategory @ 14e8cc430

FName __thiscall
FRecomputeNormalsInGeometryCollectionDataflowNode::GetCategory
          (FRecomputeNormalsInGeometryCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Fracture|Utilities");
  return in_RDX;
}

// GetTags @ 14e8cc490

FString * __thiscall
FRecomputeNormalsInGeometryCollectionDataflowNode::GetTags
          (FRecomputeNormalsInGeometryCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8cc530

UScriptStruct * __thiscall
FRecomputeNormalsInGeometryCollectionDataflowNode::TypedScriptStruct
          (FRecomputeNormalsInGeometryCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode
                         ,(UObject *)pUVar1,L"RecomputeNormalsInGeometryCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8ccb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRecomputeNormalsInGeometryCollectionDataflowNode::Evaluate
          (FRecomputeNormalsInGeometryCollectionDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 *puVar6;
  FDataflowTransformSelection *pFVar7;
  FDataflowInput *pFVar8;
  FManagedArrayCollection *pFVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  ForElementType<unsigned_int> FVar12;
  void *_Src;
  uint uVar13;
  undefined1 auStackY_368 [32];
  FConnectionReference local_330;
  undefined1 local_318 [24];
  ForElementType<unsigned_int> local_300;
  longlong local_2f8;
  FDataflowSelection local_2f0;
  FCollectionTransformSelectionFacade local_2c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_368;
  pFVar1 = &this->Collection;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar6 == pFVar1) {
    pFVar7 = FDataflowNode::GetValue<FDataflowTransformSelection>
                       ((FDataflowNode *)this,param_1,&this->TransformSelection);
    local_2f0.GroupName.ComparisonIndex.Value = *(uint *)&pFVar7->field_0x0;
    local_2f0.GroupName.Number = *(uint *)&pFVar7->field_0x4;
    local_2f0.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_2f0.SelectionArray.MaxBits = 0;
    local_2f0.SelectionArray.NumBits = 0;
    uVar10 = *(int *)&pFVar7->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar10) {
      local_2f0.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar10) {
        local_2f0.SelectionArray.MaxBits = uVar10;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2f0.SelectionArray,0);
    }
    local_2f0.SelectionArray.NumBits = *(int *)&pFVar7->field_0x20;
    if (local_2f0.SelectionArray.NumBits != 0) {
      _Src = *(void **)&pFVar7->field_0x18;
      if (*(void **)&pFVar7->field_0x18 == (void *)0x0) {
        _Src = &pFVar7->field_0x8;
      }
      FVar11 = (ForElementType<unsigned_int>)&local_2f0.SelectionArray;
      if (local_2f0.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_2f0.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar11,_Src,(ulonglong)(local_2f0.SelectionArray.NumBits + 0x1fU >> 5) << 2);
    }
    local_330.Index = -1;
    local_330.ContainerReference = (void *)0x0;
    local_330.Reference = &this->TransformSelection;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_330);
    if (pFVar8->Connection == (FDataflowOutput *)0x0) {
      pFVar9 = FDataflowNode::GetValue<FManagedArrayCollection>
                         ((FDataflowNode *)this,param_1,pFVar1);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      FCollectionTransformSelectionFacade(&local_2c8,pFVar9);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectAll
                (&local_2c8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_330);
      local_318._0_4_ = FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
      local_318._4_4_ = FDataflowTransformSelection::TransformGroupName.Number;
      local_300 = (ForElementType<unsigned_int>)0x0;
      local_2f8._0_4_ = 0;
      local_2f8._4_4_ = 0x80;
      FDataflowSelection::InitializeFromCollection((FDataflowSelection *)local_318,pFVar9,false);
      FDataflowSelection::SetFromArray
                ((FDataflowSelection *)local_318,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)&local_330);
      local_2f0.GroupName.ComparisonIndex.Value = local_318._0_4_;
      local_2f0.GroupName.Number = local_318._4_4_;
      local_2f0.SelectionArray.NumBits = 0;
      uVar10 = (int)local_2f8 + 0x1fU & 0xffffffe0;
      if ((local_2f0.SelectionArray.MaxBits < (int)uVar10) ||
         (0x80 < local_2f0.SelectionArray.MaxBits)) {
        local_2f0.SelectionArray.MaxBits = 0x80;
        if (0x80 < (int)uVar10) {
          local_2f0.SelectionArray.MaxBits = uVar10;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2f0.SelectionArray,0);
      }
      local_2f0.SelectionArray.NumBits = (int)local_2f8;
      if ((int)local_2f8 != 0) {
        FVar11 = (ForElementType<unsigned_int>)((longlong)local_318 + 8);
        if (local_300 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_300;
        }
        FVar12 = (ForElementType<unsigned_int>)&local_2f0.SelectionArray;
        if (local_2f0.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar12 = local_2f0.SelectionArray.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar12,(void *)FVar11,(ulonglong)((int)local_2f8 + 0x1fU >> 5) << 2);
      }
      if (local_300 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_300);
      }
      if (local_330.Reference != (FManagedArrayCollection *)0x0) {
        FMemory::Free(local_330.Reference);
      }
    }
    bVar5 = FDataflowSelection::AnySelected(&local_2f0);
    if (bVar5) {
      pFVar9 = FDataflowNode::GetValue<FManagedArrayCollection>
                         ((FDataflowNode *)this,param_1,pFVar1);
      FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)&local_2c8,pFVar9)
      ;
      bVar5 = this->bOnlyTangents;
      bVar3 = this->bOnlyInternalSurfaces;
      fVar2 = this->SharpEdgeAngleThreshold;
      bVar4 = this->bRecomputeSharpEdges;
      local_318._0_4_ = local_2f0.GroupName.ComparisonIndex.Value;
      local_318._4_4_ = local_2f0.GroupName.Number;
      local_300 = (ForElementType<unsigned_int>)0x0;
      local_2f8 = 0;
      uVar10 = local_2f0.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar10) {
        uVar13 = 0x80;
        if (0x80 < (int)uVar10) {
          uVar13 = uVar10;
        }
        local_2f8 = (ulonglong)uVar13 << 0x20;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_318 + 8),0);
      }
      local_2f8 = CONCAT44(local_2f8._4_4_,local_2f0.SelectionArray.NumBits);
      if (local_2f0.SelectionArray.NumBits != 0) {
        FVar11 = (ForElementType<unsigned_int>)&local_2f0.SelectionArray;
        if (local_2f0.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_2f0.SelectionArray.AllocatorInstance.SecondaryData;
        }
        FVar12 = (ForElementType<unsigned_int>)((longlong)local_318 + 8);
        if (local_300 != (ForElementType<unsigned_int>)0x0) {
          FVar12 = local_300;
        }
        memcpy((void *)FVar12,(void *)FVar11,
               (ulonglong)(local_2f0.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      FFractureEngineUtility::RecomputeNormalsInGeometryCollection
                ((FManagedArrayCollection *)&local_2c8,(FDataflowTransformSelection *)local_318,
                 bVar5,bVar4,fVar2,bVar3);
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)&local_2c8,pFVar1);
      FManagedArrayCollection::~FManagedArrayCollection((FManagedArrayCollection *)&local_2c8);
    }
    else {
      local_330.Index = -1;
      local_330.ContainerReference = (void *)0x0;
      local_330.Reference = pFVar1;
      pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_330);
      if (pFVar8->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_330.Reference,pFVar1);
      }
      else {
        local_318._8_4_ = -1;
        local_318._16_8_ = (void *)0x0;
        local_318._0_8_ = pFVar1;
        FDataflowNode::ForwardInput
                  ((FDataflowNode *)this,param_1,&local_330,(FConnectionReference *)local_318);
      }
    }
    if (local_2f0.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_2f0.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FRecomputeNormalsInGeometryCollectionDataflowNode @ 14e92a5a0

FRecomputeNormalsInGeometryCollectionDataflowNode * __thiscall
FRecomputeNormalsInGeometryCollectionDataflowNode::FRecomputeNormalsInGeometryCollectionDataflowNode
          (FRecomputeNormalsInGeometryCollectionDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FRecomputeNormalsInGeometryCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->bOnlyTangents = false;
  this->bRecomputeSharpEdges = false;
  this->SharpEdgeAngleThreshold = 60.0;
  this->bOnlyInternalSurfaces = true;
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

// FRecomputeNormalsInGeometryCollectionDataflowNode @ 14e92a6d0

FRecomputeNormalsInGeometryCollectionDataflowNode * __thiscall
FRecomputeNormalsInGeometryCollectionDataflowNode::FRecomputeNormalsInGeometryCollectionDataflowNode
          (FRecomputeNormalsInGeometryCollectionDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FRecomputeNormalsInGeometryCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->bOnlyTangents = false;
  this->bRecomputeSharpEdges = false;
  this->SharpEdgeAngleThreshold = 60.0;
  this->bOnlyInternalSurfaces = true;
  return this;
}

