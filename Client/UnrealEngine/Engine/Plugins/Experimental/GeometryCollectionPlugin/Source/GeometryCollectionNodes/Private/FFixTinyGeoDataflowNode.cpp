// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8c8580

UScriptStruct * __cdecl FFixTinyGeoDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFixTinyGeoDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFixTinyGeoDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode,(UObject *)pUVar1,
                         L"FixTinyGeoDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFixTinyGeoDataflowNode.OuterSingleton;
}

// GetType @ 14e8c89a0

FName __thiscall FFixTinyGeoDataflowNode::GetType(FFixTinyGeoDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FFixTinyGeoDataflowNode");
  return in_RDX;
}

// IsA @ 14e8c8a00

bool __thiscall FFixTinyGeoDataflowNode::IsA(FFixTinyGeoDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FFixTinyGeoDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8c8a68;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8c8a68:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8c8a86;
      }
    }
  }
  bVar5 = true;
LAB_14e8c8a86:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8c8b80

FStructOnScope * __thiscall FFixTinyGeoDataflowNode::NewStructOnScope(FFixTinyGeoDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FFixTinyGeoDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FFixTinyGeoDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode,(UObject *)pUVar2,
                           L"FixTinyGeoDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FFixTinyGeoDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8c8c80

void __thiscall
FFixTinyGeoDataflowNode::SerializeInternal(FFixTinyGeoDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFixTinyGeoDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFixTinyGeoDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode,(UObject *)pUVar1,
                         L"FixTinyGeoDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FFixTinyGeoDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FFixTinyGeoDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8c8cfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8c8da0

FName __thiscall FFixTinyGeoDataflowNode::GetDisplayName(FFixTinyGeoDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FixTinyGeo");
  return in_RDX;
}

// GetCategory @ 14e8c8e00

FName __thiscall FFixTinyGeoDataflowNode::GetCategory(FFixTinyGeoDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Fracture|Utilities");
  return in_RDX;
}

// GetTags @ 14e8c8e60

FString * __thiscall
FFixTinyGeoDataflowNode::GetTags(FFixTinyGeoDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8c8ec0

UScriptStruct * __thiscall FFixTinyGeoDataflowNode::TypedScriptStruct(FFixTinyGeoDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFixTinyGeoDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFixTinyGeoDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode,(UObject *)pUVar1,
                         L"FixTinyGeoDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFixTinyGeoDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8c9590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FFixTinyGeoDataflowNode::Evaluate
          (FFixTinyGeoDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  float fVar2;
  float fVar3;
  EFixTinyGeoMergeType EVar4;
  bool bVar5;
  bool bVar6;
  EFixTinyGeoNeighborSelectionMethod EVar7;
  bool bVar8;
  EFixTinyGeoUseBoneSelection EVar9;
  EFixTinyGeoGeometrySelectionMethod EVar10;
  bool bVar11;
  bool bVar12;
  undefined1 *puVar13;
  FDataflowTransformSelection *pFVar14;
  FDataflowInput *pFVar15;
  FManagedArrayCollection *pFVar16;
  uint uVar17;
  ForElementType<unsigned_int> FVar18;
  ForElementType<unsigned_int> FVar19;
  void *_Src;
  uint uVar20;
  undefined1 auStackY_3b8 [32];
  FConnectionReference local_340;
  undefined1 local_328 [24];
  ForElementType<unsigned_int> local_310;
  longlong local_308;
  FDataflowSelection local_300;
  FCollectionTransformSelectionFacade local_2d8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  pFVar1 = &this->Collection;
  puVar13 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar13 == pFVar1) {
    pFVar14 = FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->TransformSelection);
    local_300.GroupName.ComparisonIndex.Value = *(uint *)&pFVar14->field_0x0;
    local_300.GroupName.Number = *(uint *)&pFVar14->field_0x4;
    local_300.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_300.SelectionArray.MaxBits = 0;
    local_300.SelectionArray.NumBits = 0;
    uVar17 = *(int *)&pFVar14->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar17) {
      local_300.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar17) {
        local_300.SelectionArray.MaxBits = uVar17;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_300.SelectionArray,0);
    }
    local_300.SelectionArray.NumBits = *(int *)&pFVar14->field_0x20;
    if (local_300.SelectionArray.NumBits != 0) {
      _Src = *(void **)&pFVar14->field_0x18;
      if (*(void **)&pFVar14->field_0x18 == (void *)0x0) {
        _Src = &pFVar14->field_0x8;
      }
      FVar18 = (ForElementType<unsigned_int>)&local_300.SelectionArray;
      if (local_300.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_300.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar18,_Src,(ulonglong)(local_300.SelectionArray.NumBits + 0x1fU >> 5) << 2);
    }
    local_340.Index = -1;
    local_340.ContainerReference = (void *)0x0;
    local_340.Reference = &this->TransformSelection;
    pFVar15 = FDataflowNode::FindInput((FDataflowNode *)this,&local_340);
    if (pFVar15->Connection == (FDataflowOutput *)0x0) {
      pFVar16 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar1);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      FCollectionTransformSelectionFacade(&local_2d8,pFVar16);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectAll
                (&local_2d8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_340);
      local_328._0_4_ = FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
      local_328._4_4_ = FDataflowTransformSelection::TransformGroupName.Number;
      local_310 = (ForElementType<unsigned_int>)0x0;
      local_308._0_4_ = 0;
      local_308._4_4_ = 0x80;
      FDataflowSelection::InitializeFromCollection((FDataflowSelection *)local_328,pFVar16,false);
      FDataflowSelection::SetFromArray
                ((FDataflowSelection *)local_328,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)&local_340);
      local_300.GroupName.ComparisonIndex.Value = local_328._0_4_;
      local_300.GroupName.Number = local_328._4_4_;
      local_300.SelectionArray.NumBits = 0;
      uVar17 = (int)local_308 + 0x1fU & 0xffffffe0;
      if ((local_300.SelectionArray.MaxBits < (int)uVar17) ||
         (0x80 < local_300.SelectionArray.MaxBits)) {
        local_300.SelectionArray.MaxBits = 0x80;
        if (0x80 < (int)uVar17) {
          local_300.SelectionArray.MaxBits = uVar17;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_300.SelectionArray,0);
      }
      local_300.SelectionArray.NumBits = (int)local_308;
      if ((int)local_308 != 0) {
        FVar18 = (ForElementType<unsigned_int>)((longlong)local_328 + 8);
        if (local_310 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = local_310;
        }
        FVar19 = (ForElementType<unsigned_int>)&local_300.SelectionArray;
        if (local_300.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar19 = local_300.SelectionArray.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar19,(void *)FVar18,(ulonglong)((int)local_308 + 0x1fU >> 5) << 2);
      }
      if (local_310 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_310);
      }
      if (local_340.Reference != (FManagedArrayCollection *)0x0) {
        FMemory::Free(local_340.Reference);
      }
    }
    bVar12 = FDataflowSelection::AnySelected(&local_300);
    if (bVar12) {
      pFVar16 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar1);
      FManagedArrayCollection::FManagedArrayCollection
                ((FManagedArrayCollection *)&local_2d8,pFVar16);
      EVar4 = this->MergeType;
      bVar12 = this->bUseCollectionProximityForConnections;
      fVar2 = this->RelativeVolume;
      fVar3 = this->MinVolumeCubeRoot;
      bVar5 = (&this->bOnlySameParent)[EVar4 != MergeClusters];
      bVar6 = this->bOnlyToConnected;
      EVar7 = this->NeighborSelection;
      bVar8 = this->bOnlyClusters;
      EVar9 = this->UseBoneSelection;
      EVar10 = this->SelectionMethod;
      bVar11 = this->bOnFractureLevel;
      local_328._0_4_ = local_300.GroupName.ComparisonIndex.Value;
      local_328._4_4_ = local_300.GroupName.Number;
      local_310 = (ForElementType<unsigned_int>)0x0;
      local_308 = 0;
      uVar17 = local_300.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar17) {
        uVar20 = 0x80;
        if (0x80 < (int)uVar17) {
          uVar20 = uVar17;
        }
        local_308 = (ulonglong)uVar20 << 0x20;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_328 + 8),0);
      }
      local_308 = CONCAT44(local_308._4_4_,local_300.SelectionArray.NumBits);
      if (local_300.SelectionArray.NumBits != 0) {
        FVar18 = (ForElementType<unsigned_int>)&local_300.SelectionArray;
        if (local_300.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar18 = local_300.SelectionArray.AllocatorInstance.SecondaryData;
        }
        FVar19 = (ForElementType<unsigned_int>)((longlong)local_328 + 8);
        if (local_310 != (ForElementType<unsigned_int>)0x0) {
          FVar19 = local_310;
        }
        memcpy((void *)FVar19,(void *)FVar18,
               (ulonglong)(local_300.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      FFractureEngineUtility::FixTinyGeo
                ((FManagedArrayCollection *)&local_2d8,(FDataflowTransformSelection *)local_328,
                 EVar4,bVar11,EVar10,fVar3,fVar2,EVar9,bVar8,EVar7,bVar6,bVar5,bVar12);
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)&local_2d8,pFVar1);
      FManagedArrayCollection::~FManagedArrayCollection((FManagedArrayCollection *)&local_2d8);
    }
    else {
      local_340.Index = -1;
      local_340.ContainerReference = (void *)0x0;
      local_340.Reference = pFVar1;
      pFVar15 = FDataflowNode::FindInput((FDataflowNode *)this,&local_340);
      if (pFVar15->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_340.Reference,pFVar1);
      }
      else {
        local_328._8_4_ = -1;
        local_328._16_8_ = (void *)0x0;
        local_328._0_8_ = pFVar1;
        FDataflowNode::ForwardInput
                  ((FDataflowNode *)this,param_1,&local_340,(FConnectionReference *)local_328);
      }
    }
    if (local_300.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_300.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FFixTinyGeoDataflowNode @ 14e91cef0

FFixTinyGeoDataflowNode * __thiscall
FFixTinyGeoDataflowNode::FFixTinyGeoDataflowNode
          (FFixTinyGeoDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FFixTinyGeoDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->MergeType = MergeGeometry;
  this->bOnFractureLevel = true;
  this->bOnlyClusters = false;
  this->bOnlySameParent = true;
  this->bGeometryOnlySameParent = false;
  this->bFractureLevelIsAll = false;
  this->NeighborSelection = LargestNeighbor;
  this->bOnlyToConnected = true;
  this->bUseCollectionProximityForConnections = false;
  this->UseBoneSelection = NoEffect;
  this->SelectionMethod = RelativeVolume;
  this->MinVolumeCubeRoot = 1.0;
  this->RelativeVolume = 0.01;
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

// FFixTinyGeoDataflowNode @ 14e91d080

FFixTinyGeoDataflowNode * __thiscall
FFixTinyGeoDataflowNode::FFixTinyGeoDataflowNode(FFixTinyGeoDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FFixTinyGeoDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->bUseCollectionProximityForConnections = false;
  this->UseBoneSelection = NoEffect;
  this->AddSamplesForCollision = false;
  this->MergeType = MergeGeometry;
  this->bOnFractureLevel = true;
  this->bOnlyClusters = false;
  this->bOnlySameParent = true;
  this->bGeometryOnlySameParent = false;
  this->bFractureLevelIsAll = false;
  this->NeighborSelection = LargestNeighbor;
  this->bOnlyToConnected = true;
  this->SelectionMethod = RelativeVolume;
  this->MinVolumeCubeRoot = 1.0;
  this->RelativeVolume = 0.01;
  this->CollisionSampleSpacing = 50.0;
  return this;
}

