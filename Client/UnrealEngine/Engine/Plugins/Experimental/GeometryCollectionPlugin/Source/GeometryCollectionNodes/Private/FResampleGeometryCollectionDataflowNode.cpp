// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8ce8d0

UScriptStruct * __cdecl FResampleGeometryCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FResampleGeometryCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FResampleGeometryCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode,
                         (UObject *)pUVar1,L"ResampleGeometryCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FResampleGeometryCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e8ce9a0

FName __thiscall
FResampleGeometryCollectionDataflowNode::GetType(FResampleGeometryCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FResampleGeometryCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e8ceab0

bool __thiscall
FResampleGeometryCollectionDataflowNode::IsA
          (FResampleGeometryCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FResampleGeometryCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8ceb18;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8ceb18:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8ceb36;
      }
    }
  }
  bVar5 = true;
LAB_14e8ceb36:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8ceb70

FStructOnScope * __thiscall
FResampleGeometryCollectionDataflowNode::NewStructOnScope
          (FResampleGeometryCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FResampleGeometryCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FResampleGeometryCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode,
                           (UObject *)pUVar2,L"ResampleGeometryCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FResampleGeometryCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8cec00

void __thiscall
FResampleGeometryCollectionDataflowNode::SerializeInternal
          (FResampleGeometryCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FResampleGeometryCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FResampleGeometryCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode,
                         (UObject *)pUVar1,L"ResampleGeometryCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FResampleGeometryCollectionDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FResampleGeometryCollectionDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8cec7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8cecc0

FName __thiscall
FResampleGeometryCollectionDataflowNode::GetDisplayName
          (FResampleGeometryCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ResampleGeometryCollection");
  return in_RDX;
}

// GetCategory @ 14e8cecf0

FName __thiscall
FResampleGeometryCollectionDataflowNode::GetCategory(FResampleGeometryCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Fracture|Utilities");
  return in_RDX;
}

// GetTags @ 14e8cee50

FString * __thiscall
FResampleGeometryCollectionDataflowNode::GetTags
          (FResampleGeometryCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8cef00

UScriptStruct * __thiscall
FResampleGeometryCollectionDataflowNode::TypedScriptStruct
          (FResampleGeometryCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FResampleGeometryCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FResampleGeometryCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode,
                         (UObject *)pUVar1,L"ResampleGeometryCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FResampleGeometryCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8d0240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FResampleGeometryCollectionDataflowNode::Evaluate
          (FResampleGeometryCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  float fVar2;
  bool bVar3;
  undefined1 *puVar4;
  FDataflowTransformSelection *pFVar5;
  FDataflowInput *pFVar6;
  FManagedArrayCollection *pFVar7;
  float *pfVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  ForElementType<unsigned_int> FVar11;
  void *_Src;
  uint uVar12;
  undefined1 auStack_358 [32];
  FConnectionReference local_338;
  undefined1 local_320 [24];
  ForElementType<unsigned_int> local_308;
  longlong local_300;
  FDataflowSelection local_2f8;
  FCollectionTransformSelectionFacade local_2c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_358;
  pFVar1 = &this->Collection;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar4 == pFVar1) {
    pFVar5 = FDataflowNode::GetValue<FDataflowTransformSelection>
                       ((FDataflowNode *)this,param_1,&this->TransformSelection);
    local_2f8.GroupName.ComparisonIndex.Value = *(uint *)&pFVar5->field_0x0;
    local_2f8.GroupName.Number = *(uint *)&pFVar5->field_0x4;
    local_2f8.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_2f8.SelectionArray.MaxBits = 0;
    local_2f8.SelectionArray.NumBits = 0;
    uVar9 = *(int *)&pFVar5->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar9) {
      local_2f8.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar9) {
        local_2f8.SelectionArray.MaxBits = uVar9;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2f8.SelectionArray,0);
    }
    local_2f8.SelectionArray.NumBits = *(int *)&pFVar5->field_0x20;
    if (local_2f8.SelectionArray.NumBits != 0) {
      _Src = *(void **)&pFVar5->field_0x18;
      if (*(void **)&pFVar5->field_0x18 == (void *)0x0) {
        _Src = &pFVar5->field_0x8;
      }
      FVar10 = (ForElementType<unsigned_int>)&local_2f8.SelectionArray;
      if (local_2f8.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_2f8.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar10,_Src,(ulonglong)(local_2f8.SelectionArray.NumBits + 0x1fU >> 5) << 2);
    }
    local_338.Index = -1;
    local_338.ContainerReference = (void *)0x0;
    local_338.Reference = &this->TransformSelection;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_338);
    if (pFVar6->Connection == (FDataflowOutput *)0x0) {
      pFVar7 = FDataflowNode::GetValue<FManagedArrayCollection>
                         ((FDataflowNode *)this,param_1,pFVar1);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      FCollectionTransformSelectionFacade(&local_2c8,pFVar7);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectAll
                (&local_2c8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_338);
      local_320._0_4_ = FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
      local_320._4_4_ = FDataflowTransformSelection::TransformGroupName.Number;
      local_308 = (ForElementType<unsigned_int>)0x0;
      local_300._0_4_ = 0;
      local_300._4_4_ = 0x80;
      FDataflowSelection::InitializeFromCollection((FDataflowSelection *)local_320,pFVar7,false);
      FDataflowSelection::SetFromArray
                ((FDataflowSelection *)local_320,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)&local_338);
      local_2f8.GroupName.ComparisonIndex.Value = local_320._0_4_;
      local_2f8.GroupName.Number = local_320._4_4_;
      local_2f8.SelectionArray.NumBits = 0;
      uVar9 = (int)local_300 + 0x1fU & 0xffffffe0;
      if ((local_2f8.SelectionArray.MaxBits < (int)uVar9) ||
         (0x80 < local_2f8.SelectionArray.MaxBits)) {
        local_2f8.SelectionArray.MaxBits = 0x80;
        if (0x80 < (int)uVar9) {
          local_2f8.SelectionArray.MaxBits = uVar9;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2f8.SelectionArray,0);
      }
      local_2f8.SelectionArray.NumBits = (int)local_300;
      if ((int)local_300 != 0) {
        FVar10 = (ForElementType<unsigned_int>)((longlong)local_320 + 8);
        if (local_308 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = local_308;
        }
        FVar11 = (ForElementType<unsigned_int>)&local_2f8.SelectionArray;
        if (local_2f8.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_2f8.SelectionArray.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar11,(void *)FVar10,(ulonglong)((int)local_300 + 0x1fU >> 5) << 2);
      }
      if (local_308 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_308);
      }
      if (local_338.Reference != (FDataflowTransformSelection *)0x0) {
        FMemory::Free(local_338.Reference);
      }
    }
    bVar3 = FDataflowSelection::AnySelected(&local_2f8);
    if (bVar3) {
      pFVar7 = FDataflowNode::GetValue<FManagedArrayCollection>
                         ((FDataflowNode *)this,param_1,pFVar1);
      FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)&local_2c8,pFVar7)
      ;
      local_338.Reference = &this->CollisionSampleSpacing;
      local_338.Index = -1;
      local_338.ContainerReference = (void *)0x0;
      pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_338);
      pfVar8 = FDataflowInput::GetValue<float>(pFVar6,param_1,local_338.Reference);
      fVar2 = *pfVar8;
      local_320._0_4_ = local_2f8.GroupName.ComparisonIndex.Value;
      local_320._4_4_ = local_2f8.GroupName.Number;
      local_308 = (ForElementType<unsigned_int>)0x0;
      local_300 = 0;
      uVar9 = local_2f8.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar9) {
        uVar12 = 0x80;
        if (0x80 < (int)uVar9) {
          uVar12 = uVar9;
        }
        local_300 = (ulonglong)uVar12 << 0x20;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_320 + 8),0);
      }
      local_300 = CONCAT44(local_300._4_4_,local_2f8.SelectionArray.NumBits);
      if (local_2f8.SelectionArray.NumBits != 0) {
        FVar10 = (ForElementType<unsigned_int>)&local_2f8.SelectionArray;
        if (local_2f8.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar10 = local_2f8.SelectionArray.AllocatorInstance.SecondaryData;
        }
        FVar11 = (ForElementType<unsigned_int>)((longlong)local_320 + 8);
        if (local_308 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_308;
        }
        memcpy((void *)FVar11,(void *)FVar10,
               (ulonglong)(local_2f8.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      FFractureEngineUtility::ResampleGeometryCollection
                ((FManagedArrayCollection *)&local_2c8,(FDataflowTransformSelection *)local_320,
                 fVar2);
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)&local_2c8,pFVar1);
      FManagedArrayCollection::~FManagedArrayCollection((FManagedArrayCollection *)&local_2c8);
    }
    else {
      local_338.Index = -1;
      local_338.ContainerReference = (void *)0x0;
      local_338.Reference = pFVar1;
      pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_338);
      if (pFVar6->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_338.Reference,pFVar1);
      }
      else {
        local_320._8_4_ = -1;
        local_320._16_8_ = (void *)0x0;
        local_320._0_8_ = pFVar1;
        FDataflowNode::ForwardInput
                  ((FDataflowNode *)this,param_1,&local_338,(FConnectionReference *)local_320);
      }
    }
    if (local_2f8.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_2f8.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FResampleGeometryCollectionDataflowNode @ 14e92aab0

FResampleGeometryCollectionDataflowNode * __thiscall
FResampleGeometryCollectionDataflowNode::FResampleGeometryCollectionDataflowNode
          (FResampleGeometryCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FResampleGeometryCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->AddSamplesForCollision = false;
  this->CollisionSampleSpacing = 50.0;
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
  local_58.Reference = &this->CollisionSampleSpacing;
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

// FResampleGeometryCollectionDataflowNode @ 14e92ac00

FResampleGeometryCollectionDataflowNode * __thiscall
FResampleGeometryCollectionDataflowNode::FResampleGeometryCollectionDataflowNode
          (FResampleGeometryCollectionDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FResampleGeometryCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->AddSamplesForCollision = false;
  this->CollisionSampleSpacing = 50.0;
  return this;
}

