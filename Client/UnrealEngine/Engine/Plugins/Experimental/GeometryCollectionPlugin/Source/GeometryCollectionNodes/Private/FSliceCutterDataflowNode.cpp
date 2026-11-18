// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8c5140

UScriptStruct * __cdecl FSliceCutterDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSliceCutterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSliceCutterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSliceCutterDataflowNode,(UObject *)pUVar1,
                         L"SliceCutterDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSliceCutterDataflowNode.OuterSingleton;
}

// GetType @ 14e8c51e0

FName __thiscall FSliceCutterDataflowNode::GetType(FSliceCutterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSliceCutterDataflowNode");
  return in_RDX;
}

// IsA @ 14e8c5250

bool __thiscall FSliceCutterDataflowNode::IsA(FSliceCutterDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSliceCutterDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8c52b8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8c52b8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8c52d6;
      }
    }
  }
  bVar5 = true;
LAB_14e8c52d6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8c5350

FStructOnScope * __thiscall
FSliceCutterDataflowNode::NewStructOnScope(FSliceCutterDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSliceCutterDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSliceCutterDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSliceCutterDataflowNode,(UObject *)pUVar2,
                           L"SliceCutterDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSliceCutterDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8c5540

void __thiscall
FSliceCutterDataflowNode::SerializeInternal(FSliceCutterDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSliceCutterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSliceCutterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSliceCutterDataflowNode,(UObject *)pUVar1,
                         L"SliceCutterDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FSliceCutterDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FSliceCutterDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8c55bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8c5650

FName __thiscall FSliceCutterDataflowNode::GetDisplayName(FSliceCutterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SliceCutter");
  return in_RDX;
}

// GetCategory @ 14e8c5680

FName __thiscall FSliceCutterDataflowNode::GetCategory(FSliceCutterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Fracture");
  return in_RDX;
}

// GetTags @ 14e8c56b0

FString * __thiscall
FSliceCutterDataflowNode::GetTags(FSliceCutterDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8c56e0

UScriptStruct * __thiscall
FSliceCutterDataflowNode::TypedScriptStruct(FSliceCutterDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSliceCutterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSliceCutterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSliceCutterDataflowNode,(UObject *)pUVar1,
                         L"SliceCutterDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSliceCutterDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8c6be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSliceCutterDataflowNode::Evaluate
          (FSliceCutterDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowTransformSelection *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  code *pcVar15;
  FName FVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  FDataflowTransformSelection *pFVar21;
  FDataflowInput *pFVar22;
  FManagedArrayCollection *pFVar23;
  FManagedArrayCollection *pFVar24;
  float *pfVar25;
  int *piVar26;
  uint *puVar27;
  FName *pFVar28;
  TManagedArray<int> *pTVar29;
  uint uVar30;
  ForElementType<unsigned_int> FVar31;
  ForElementType<unsigned_int> FVar32;
  void *_Src;
  uint uVar33;
  ulonglong uVar34;
  int iVar35;
  longlong lVar36;
  undefined1 auStackY_788 [32];
  FName local_6d8;
  FName local_6d0;
  FConnectionReference local_6c8;
  FName local_6b0;
  TBitArray<FDefaultBitArrayAllocator> local_6a8;
  FConnectionReference local_688;
  FConnectionReference local_670;
  FConnectionReference local_658;
  FConnectionReference local_640;
  FConnectionReference local_628;
  FConnectionReference local_610;
  FConnectionReference local_5f8;
  FConnectionReference local_5e0;
  FConnectionReference local_5c8;
  FConnectionReference local_5b0;
  FConnectionReference local_598;
  FConnectionReference local_580;
  FConnectionReference local_568;
  FConnectionReference local_550;
  FConnectionReference local_538;
  TArray<int,TSizedDefaultAllocator<32>_> local_520;
  FConnectionReference local_510;
  FConnectionReference local_4f8;
  FCollectionTransformSelectionFacade local_4d8;
  FDataflowSelection local_268;
  FDataflowSelection local_240;
  FDataflowSelection local_218;
  FDataflowSelection local_1f0;
  FName local_1c8;
  void *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  FManagedArrayCollection local_198;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_788;
  pFVar24 = &this->Collection;
  puVar20 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((FManagedArrayCollection *)puVar20 == pFVar24) ||
      (puVar20 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (FDataflowTransformSelection *)puVar20 == &this->TransformSelection)) ||
     (puVar20 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FDataflowTransformSelection *)puVar20 == &this->NewGeometryTransformSelection)) {
    pFVar1 = &this->TransformSelection;
    pFVar21 = FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,pFVar1);
    iVar35 = 0;
    local_268.GroupName.ComparisonIndex.Value = *(uint *)&pFVar21->field_0x0;
    local_268.GroupName.Number = *(uint *)&pFVar21->field_0x4;
    local_268.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_268.SelectionArray.MaxBits = 0;
    local_268.SelectionArray.NumBits = 0;
    uVar30 = *(int *)&pFVar21->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar30) {
      local_268.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar30) {
        local_268.SelectionArray.MaxBits = uVar30;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_268.SelectionArray,0);
    }
    local_268.SelectionArray.NumBits = *(int *)&pFVar21->field_0x20;
    if (local_268.SelectionArray.NumBits != 0) {
      _Src = *(void **)&pFVar21->field_0x18;
      if (*(void **)&pFVar21->field_0x18 == (void *)0x0) {
        _Src = &pFVar21->field_0x8;
      }
      FVar32 = (ForElementType<unsigned_int>)&local_268.SelectionArray;
      if (local_268.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar32 = local_268.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar32,_Src,(ulonglong)(local_268.SelectionArray.NumBits + 0x1fU >> 5) << 2);
    }
    local_510.Index = -1;
    local_510.ContainerReference = (void *)0x0;
    local_510.Reference = pFVar1;
    pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_510);
    if (pFVar22->Connection == (FDataflowOutput *)0x0) {
      pFVar23 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar24);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      FCollectionTransformSelectionFacade(&local_4d8,pFVar23);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectAll
                (&local_4d8,&local_520);
      local_240.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_240.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_240.SelectionArray.NumBits = 0;
      local_240.SelectionArray.MaxBits = 0x80;
      FDataflowSelection::InitializeFromCollection(&local_240,pFVar23,false);
      FDataflowSelection::SetFromArray(&local_240,&local_520);
      local_268.GroupName = local_240.GroupName;
      local_268.SelectionArray.NumBits = 0;
      uVar30 = local_240.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
      if ((local_268.SelectionArray.MaxBits < (int)uVar30) ||
         (0x80 < local_268.SelectionArray.MaxBits)) {
        local_268.SelectionArray.MaxBits = 0x80;
        if (0x80 < (int)uVar30) {
          local_268.SelectionArray.MaxBits = uVar30;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_268.SelectionArray,0);
      }
      local_268.SelectionArray.NumBits = local_240.SelectionArray.NumBits;
      if (local_240.SelectionArray.NumBits != 0) {
        FVar32 = (ForElementType<unsigned_int>)&local_240.SelectionArray;
        if (local_240.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar32 = local_240.SelectionArray.AllocatorInstance.SecondaryData;
        }
        FVar31 = (ForElementType<unsigned_int>)&local_268.SelectionArray;
        if (local_268.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar31 = local_268.SelectionArray.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar31,(void *)FVar32,
               (ulonglong)(local_240.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      if (local_240.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_240.SelectionArray.AllocatorInstance.SecondaryData);
      }
      if (local_520.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_520.AllocatorInstance.Data);
      }
    }
    bVar17 = FDataflowSelection::AnySelected(&local_268);
    if (bVar17) {
      pFVar24 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar24);
      FManagedArrayCollection::FManagedArrayCollection(&local_198,pFVar24);
      local_688.Reference = &this->CollisionSampleSpacing;
      local_688.Index = -1;
      local_688.ContainerReference = (void *)0x0;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_688);
      pfVar25 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_688.Reference);
      bVar17 = this->AddSamplesForCollision;
      local_670.Index = -1;
      local_670.ContainerReference = (void *)0x0;
      fVar2 = *pfVar25;
      local_670.Reference = &this->PointSpacing;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_670);
      pfVar25 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_670.Reference);
      local_658.Index = -1;
      local_658.ContainerReference = (void *)0x0;
      fVar3 = *pfVar25;
      local_658.Reference = &this->OctaveNumber;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_658);
      piVar26 = FDataflowInput::GetValue<int>(pFVar22,param_1,local_658.Reference);
      local_640.Index = -1;
      local_640.ContainerReference = (void *)0x0;
      iVar18 = *piVar26;
      local_640.Reference = &this->Lacunarity;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_640);
      pfVar25 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_640.Reference);
      local_628.Index = -1;
      local_628.ContainerReference = (void *)0x0;
      fVar4 = *pfVar25;
      local_628.Reference = &this->Persistence;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_628);
      pfVar25 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_628.Reference);
      local_610.Index = -1;
      fVar5 = *pfVar25;
      local_610.Reference = &this->Frequency;
      local_610.ContainerReference = (void *)0x0;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_610);
      pfVar25 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_610.Reference);
      local_5f8.Index = -1;
      local_5f8.ContainerReference = (void *)0x0;
      fVar6 = *pfVar25;
      local_5f8.Reference = &this->Amplitude;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5f8);
      pfVar25 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_5f8.Reference);
      local_5e0.Index = -1;
      local_5e0.ContainerReference = (void *)0x0;
      fVar7 = *pfVar25;
      local_5e0.Reference = &this->Grout;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5e0);
      pfVar25 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_5e0.Reference);
      bVar12 = this->SplitIslands;
      local_5c8.Index = -1;
      local_5c8.ContainerReference = (void *)0x0;
      fVar8 = *pfVar25;
      local_5c8.Reference = &this->ChanceToFracture;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5c8);
      pfVar25 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_5c8.Reference);
      local_5b0.Index = -1;
      local_5b0.ContainerReference = (void *)0x0;
      fVar9 = *pfVar25;
      local_5b0.Reference = &this->RandomSeed;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5b0);
      piVar26 = FDataflowInput::GetValue<int>(pFVar22,param_1,local_5b0.Reference);
      local_598.Index = -1;
      local_598.ContainerReference = (void *)0x0;
      iVar19 = *piVar26;
      local_598.Reference = &this->SliceOffsetVariation;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_598);
      pfVar25 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_598.Reference);
      local_580.Index = -1;
      local_580.ContainerReference = (void *)0x0;
      fVar10 = *pfVar25;
      local_580.Reference = &this->SliceAngleVariation;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_580);
      pfVar25 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_580.Reference);
      local_568.Index = -1;
      local_568.ContainerReference = (void *)0x0;
      fVar11 = *pfVar25;
      local_568.Reference = &this->SlicesZ;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_568);
      piVar26 = FDataflowInput::GetValue<int>(pFVar22,param_1,local_568.Reference);
      local_550.Index = -1;
      local_550.ContainerReference = (void *)0x0;
      iVar13 = *piVar26;
      local_550.Reference = &this->SlicesY;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_550);
      piVar26 = FDataflowInput::GetValue<int>(pFVar22,param_1,local_550.Reference);
      local_538.Index = -1;
      local_538.ContainerReference = (void *)0x0;
      iVar14 = *piVar26;
      local_538.Reference = &this->SlicesX;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_538);
      puVar27 = (uint *)FDataflowInput::GetValue<int>(pFVar22,param_1,local_538.Reference);
      local_6d8.ComparisonIndex.Value = *puVar27;
      local_6d0 = (FName)FDataflowNode::GetValue<UE::Math::TBox<double>_>
                                   ((FDataflowNode *)this,param_1,&this->BoundingBox);
      local_6b0 = local_268.GroupName;
      local_6a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_6a8.NumBits = 0;
      local_6a8.MaxBits = 0;
      uVar30 = local_268.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar30) {
        uVar33 = 0x80;
        if (0x80 < (int)uVar30) {
          uVar33 = uVar30;
        }
        local_6a8._24_8_ = (ulonglong)uVar33 << 0x20;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_6a8,0);
      }
      local_6a8.NumBits = local_268.SelectionArray.NumBits;
      if (local_268.SelectionArray.NumBits != 0) {
        FVar32 = (ForElementType<unsigned_int>)&local_268.SelectionArray;
        if (local_268.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar32 = local_268.SelectionArray.AllocatorInstance.SecondaryData;
        }
        FVar31 = (ForElementType<unsigned_int>)&local_6a8;
        if (local_6a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar31 = local_6a8.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar31,(void *)FVar32,
               (ulonglong)(local_268.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      iVar18 = FFractureEngineFracturing::SliceCutter
                         (&local_198,(FDataflowTransformSelection *)&local_6b0,
                          (TBox<double> *)local_6d0,local_6d8.ComparisonIndex.Value,iVar14,iVar13,
                          fVar11,fVar10,iVar19,fVar9,bVar12,fVar8,fVar7,fVar6,fVar5,fVar4,iVar18,
                          fVar3,bVar17,fVar2);
      FVar16 = FGeometryCollection::GeometryGroup;
      uVar34 = (ulonglong)iVar18;
      local_1f0.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_1f0.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_1f0.SelectionArray.NumBits = 0;
      local_1f0.SelectionArray.MaxBits = 0x80;
      local_218.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_218.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_218.SelectionArray.NumBits = 0;
      local_218.SelectionArray.MaxBits = 0x80;
      if (iVar18 != -1) {
        pFVar28 = ::FName::FName(&local_6d0,"TransformIndex");
        bVar17 = FManagedArrayCollection::HasAttribute(&local_198,*pFVar28,FVar16);
        FVar16 = FGeometryCollection::GeometryGroup;
        if (bVar17) {
          pFVar28 = ::FName::FName(&local_6d8,"TransformIndex");
          pTVar29 = FManagedArrayCollection::GetAttribute<int>(&local_198,*pFVar28,FVar16);
          FDataflowSelection::InitializeFromCollection(&local_1f0,&local_198,false);
          FDataflowSelection::InitializeFromCollection(&local_218,&local_198,false);
          iVar19 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
          if (iVar18 < iVar19) {
            lVar36 = uVar34 * 4;
            do {
              uVar33 = (uint)uVar34;
              uVar30 = 0;
              if ((int)uVar33 < *(int *)&pTVar29->field_0x18) {
                uVar30 = ~uVar33 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              iVar18 = *(int *)(lVar36 + *(longlong *)&pTVar29->field_0x10);
              if (((iVar18 < 0) || (local_1f0.SelectionArray.NumBits <= iVar18)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar17)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              FVar32 = (ForElementType<unsigned_int>)&local_1f0.SelectionArray;
              if (local_1f0.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar32 = local_1f0.SelectionArray.AllocatorInstance.SecondaryData;
              }
              iVar19 = iVar18;
              if (iVar18 < 0) {
                iVar19 = iVar18 + 0x1f;
              }
              uVar34 = (ulonglong)(uVar33 + 1);
              lVar36 = lVar36 + 4;
              puVar27 = (uint *)((longlong)FVar32 + (longlong)(iVar19 >> 5) * 4);
              *puVar27 = *puVar27 | 1 << ((byte)iVar18 & 0x1f);
              iVar18 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
            } while ((int)(uVar33 + 1) < iVar18);
          }
          if (0 < local_268.SelectionArray.NumBits) {
            do {
              if (((iVar35 < 0) || (local_268.SelectionArray.NumBits <= iVar35)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5c6,L""), bVar17)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              FVar32 = (ForElementType<unsigned_int>)&local_268.SelectionArray;
              if (local_268.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar32 = local_268.SelectionArray.AllocatorInstance.SecondaryData;
              }
              uVar30 = 1 << ((byte)iVar35 & 0x1f);
              iVar18 = iVar35;
              if (iVar35 < 0) {
                iVar18 = iVar35 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar32 + (longlong)(iVar18 >> 5) * 4) & uVar30) != 0) {
                if (((iVar35 < 0) || (local_218.SelectionArray.NumBits <= iVar35)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar17)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                FVar32 = (ForElementType<unsigned_int>)&local_218.SelectionArray;
                if (local_218.SelectionArray.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar32 = local_218.SelectionArray.AllocatorInstance.SecondaryData;
                }
                puVar27 = (uint *)((longlong)FVar32 + (longlong)(iVar18 >> 5) * 4);
                *puVar27 = *puVar27 | uVar30;
              }
              iVar35 = iVar35 + 1;
            } while (iVar35 < local_268.SelectionArray.NumBits);
          }
        }
      }
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,&local_198,&this->Collection);
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_218,
                 &this->TransformSelection);
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_1f0,
                 &this->NewGeometryTransformSelection);
      if (local_218.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_218.SelectionArray.AllocatorInstance.SecondaryData);
      }
      if (local_1f0.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_1f0.SelectionArray.AllocatorInstance.SecondaryData);
      }
      FManagedArrayCollection::~FManagedArrayCollection(&local_198);
    }
    else {
      local_6c8.Index = -1;
      local_6c8.ContainerReference = (void *)0x0;
      local_6c8.Reference = pFVar24;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_6c8);
      if (pFVar22->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_6c8.Reference,pFVar24);
      }
      else {
        local_4f8.Index = -1;
        local_4f8.ContainerReference = (void *)0x0;
        local_4f8.Reference = pFVar24;
        FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_6c8,&local_4f8);
      }
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_268,pFVar1);
      local_1c8 = FDataflowTransformSelection::TransformGroupName;
      local_1b0 = (void *)0x0;
      local_1a8 = 0;
      local_1a4 = 0x80;
      FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_1c8,
                 &this->NewGeometryTransformSelection);
      if (local_1b0 != (void *)0x0) {
        FMemory::Free(local_1b0);
      }
    }
    if (local_268.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_268.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FSliceCutterDataflowNode @ 14e92c690

FSliceCutterDataflowNode * __thiscall
FSliceCutterDataflowNode::FSliceCutterDataflowNode
          (FSliceCutterDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  uchar *puVar1;
  byte *pbVar2;
  TBox<double> *pTVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  FName this_00;
  FDataflowInput *pFVar10;
  FDataflowOutput *pFVar11;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  this->_padding_ = (longlong)&___7FSliceCutterDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_78.Index = -1;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  pTVar3 = (TBox<double> *)((longlong)local_res8 + 0x2f8);
  (pTVar3->Min).field0_0x0._s_0.X = 0.0;
  piVar4 = (int *)((longlong)local_res8 + 0x358);
  *(undefined8 *)((longlong)local_res8 + 0x300) = 0;
  piVar5 = (int *)((longlong)local_res8 + 0x35c);
  *(undefined8 *)((longlong)local_res8 + 0x308) = 0;
  piVar6 = (int *)((longlong)local_res8 + 0x360);
  (((TVector<double> *)((longlong)local_res8 + 0x310))->field0_0x0)._s_0.X = 0.0;
  pfVar7 = (float *)((longlong)local_res8 + 0x364);
  *(undefined8 *)((longlong)local_res8 + 0x318) = 0;
  pfVar8 = (float *)((longlong)local_res8 + 0x368);
  *(undefined8 *)((longlong)local_res8 + 800) = 0;
  piVar9 = (int *)((longlong)local_res8 + 0x36c);
  *(uchar *)((longlong)local_res8 + 0x328) = '\0';
  puVar1 = (uchar *)((longlong)local_res8 + 0x329);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  ((uchar *)((longlong)local_res8 + 0x32d))[0] = '\0';
  ((uchar *)((longlong)local_res8 + 0x32d))[1] = '\0';
  *(uchar *)((longlong)local_res8 + 0x32f) = '\0';
  *(FName *)((longlong)local_res8 + 0x330) = FDataflowTransformSelection::TransformGroupName;
  *(undefined8 *)((longlong)local_res8 + 0x348) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x350) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x354) = 0x80;
  *pfVar7 = 0.0;
  *pfVar8 = 0.0;
  *piVar9 = 0;
  *(undefined8 *)((longlong)local_res8 + 0x378) = 0;
  *(bool *)((longlong)local_res8 + 0x394) = false;
  *piVar4 = 3;
  *piVar5 = 3;
  *piVar6 = 1;
  *(float *)((longlong)local_res8 + 0x370) = 1.0;
  *(bool *)((longlong)local_res8 + 0x374) = true;
  *(float *)((longlong)local_res8 + 0x380) = 0.1;
  *(float *)((longlong)local_res8 + 900) = 0.5;
  *(float *)((longlong)local_res8 + 0x388) = 2.0;
  *(int *)((longlong)local_res8 + 0x38c) = 4;
  *(float *)((longlong)local_res8 + 0x390) = 10.0;
  *(float *)((longlong)local_res8 + 0x398) = 50.0;
  *(FName *)((longlong)local_res8 + 0x3a0) = FDataflowTransformSelection::TransformGroupName;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *(undefined8 *)((longlong)local_res8 + 0x3b8) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x3c0) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x3c4) = 0x80;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar3;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_78.Reference = (void *)((longlong)this_00 + 0x330);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar4;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar5;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar6;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar7;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar8;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar9;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x370);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x378);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x37c);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x380);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 900);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x388);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x38c);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x390);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x398);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x248);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  pFVar11 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar11,&local_78);
  }
  local_78.Reference = (void *)((longlong)this_00 + 0x330);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  pFVar11 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (FDataflowTransformSelection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar11,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x3a0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar11,&local_78);
  }
  return (FSliceCutterDataflowNode *)this_00;
}

// FSliceCutterDataflowNode @ 14e92cc10

FSliceCutterDataflowNode * __thiscall
FSliceCutterDataflowNode::FSliceCutterDataflowNode(FSliceCutterDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FSliceCutterDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->BoundingBox).Min.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  (this->BoundingBox).Pad[3] = '\0';
  (this->BoundingBox).Pad[4] = '\0';
  (this->BoundingBox).Pad[5] = '\0';
  (this->BoundingBox).Pad[6] = '\0';
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->SlicesX = 3;
  this->SlicesY = 3;
  this->SlicesZ = 1;
  this->SliceAngleVariation = 0.0;
  this->SliceOffsetVariation = 0.0;
  this->RandomSeed = 0;
  this->ChanceToFracture = 1.0;
  this->SplitIslands = true;
  this->Grout = 0.0;
  this->Amplitude = 0.0;
  this->Frequency = 0.1;
  this->Persistence = 0.5;
  this->Lacunarity = 2.0;
  this->OctaveNumber = 4;
  this->PointSpacing = 10.0;
  this->AddSamplesForCollision = false;
  this->CollisionSampleSpacing = 50.0;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->NewGeometryTransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->NewGeometryTransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->NewGeometryTransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->NewGeometryTransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->NewGeometryTransformSelection).field_0x24 = 0x80;
  return this;
}

