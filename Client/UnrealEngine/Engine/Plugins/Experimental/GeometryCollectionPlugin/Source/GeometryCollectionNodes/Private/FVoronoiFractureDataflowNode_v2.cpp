// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8b6bb0

UScriptStruct * __cdecl FVoronoiFractureDataflowNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2,(UObject *)pUVar1
                         ,L"VoronoiFractureDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode_v2.OuterSingleton;
}

// GetType @ 14e8b7130

FName __thiscall FVoronoiFractureDataflowNode_v2::GetType(FVoronoiFractureDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FVoronoiFractureDataflowNode_v2");
  return in_RDX;
}

// IsA @ 14e8b7220

bool __thiscall
FVoronoiFractureDataflowNode_v2::IsA(FVoronoiFractureDataflowNode_v2 *this,FName param_1)

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
  ::FName::FName(local_res18,"FVoronoiFractureDataflowNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8b7288;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8b7288:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8b72a6;
      }
    }
  }
  bVar5 = true;
LAB_14e8b72a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8b73a0

FStructOnScope * __thiscall
FVoronoiFractureDataflowNode_v2::NewStructOnScope(FVoronoiFractureDataflowNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode_v2.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode_v2.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2,
                           (UObject *)pUVar2,L"VoronoiFractureDataflowNode_v2");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode_v2.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8b74b0

void __thiscall
FVoronoiFractureDataflowNode_v2::SerializeInternal
          (FVoronoiFractureDataflowNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2,(UObject *)pUVar1
                         ,L"VoronoiFractureDataflowNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode_v2.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode_v2.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8b752d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8b75f0

FName __thiscall
FVoronoiFractureDataflowNode_v2::GetDisplayName(FVoronoiFractureDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"VoronoiFracture");
  return in_RDX;
}

// GetCategory @ 14e8b7650

FName __thiscall FVoronoiFractureDataflowNode_v2::GetCategory(FVoronoiFractureDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Fracture");
  return in_RDX;
}

// GetTags @ 14e8b7840

FString * __thiscall
FVoronoiFractureDataflowNode_v2::GetTags
          (FVoronoiFractureDataflowNode_v2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8b78f0

UScriptStruct * __thiscall
FVoronoiFractureDataflowNode_v2::TypedScriptStruct(FVoronoiFractureDataflowNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2,(UObject *)pUVar1
                         ,L"VoronoiFractureDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode_v2.OuterSingleton;
}

// Evaluate @ 14e8b81a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FVoronoiFractureDataflowNode_v2::Evaluate
          (FVoronoiFractureDataflowNode_v2 *this,FContext *param_1,FDataflowOutput *param_2)

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
  bool bVar10;
  FScriptContainerElement *_Src;
  code *pcVar11;
  FName FVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  FDataflowTransformSelection *pFVar17;
  FDataflowInput *pFVar18;
  FManagedArrayCollection *pFVar19;
  FManagedArrayCollection *pFVar20;
  float *pfVar21;
  uint *puVar22;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar23;
  FName *pFVar24;
  TManagedArray<int> *pTVar25;
  uint uVar26;
  ForElementType<unsigned_int> FVar27;
  ForElementType<unsigned_int> FVar28;
  void *_Src_00;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  int iVar32;
  undefined1 auStackY_6d8 [32];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_650;
  FName local_640;
  FName local_638;
  FConnectionReference local_630;
  FName local_618;
  TBitArray<FDefaultBitArrayAllocator> local_610;
  FConnectionReference local_5f0;
  FConnectionReference local_5d8;
  FConnectionReference local_5c0;
  FConnectionReference local_5a8;
  FConnectionReference local_590;
  FConnectionReference local_578;
  FConnectionReference local_560;
  FConnectionReference local_548;
  FConnectionReference local_530;
  FConnectionReference local_518;
  TArray<int,TSizedDefaultAllocator<32>_> local_500;
  FConnectionReference local_4f0;
  FConnectionReference local_4d8;
  FCollectionTransformSelectionFacade local_4b8;
  FDataflowSelection local_248;
  FDataflowSelection local_220;
  FDataflowSelection local_1f8;
  FDataflowSelection local_1d0;
  FName local_1a8;
  void *local_190;
  undefined4 local_188;
  undefined4 local_184;
  FManagedArrayCollection local_178;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_6d8;
  pFVar20 = &this->Collection;
  puVar16 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((FManagedArrayCollection *)puVar16 == pFVar20) ||
      (puVar16 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (FDataflowTransformSelection *)puVar16 == &this->TransformSelection)) ||
     (puVar16 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FDataflowTransformSelection *)puVar16 == &this->NewGeometryTransformSelection)) {
    pFVar1 = &this->TransformSelection;
    pFVar17 = FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,pFVar1);
    iVar32 = 0;
    local_248.GroupName.ComparisonIndex.Value = *(uint *)&pFVar17->field_0x0;
    local_248.GroupName.Number = *(uint *)&pFVar17->field_0x4;
    local_248.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_248.SelectionArray.MaxBits = 0;
    local_248.SelectionArray.NumBits = 0;
    uVar26 = *(int *)&pFVar17->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar26) {
      local_248.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar26) {
        local_248.SelectionArray.MaxBits = uVar26;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_248.SelectionArray,0);
    }
    local_248.SelectionArray.NumBits = *(int *)&pFVar17->field_0x20;
    if (local_248.SelectionArray.NumBits != 0) {
      _Src_00 = *(void **)&pFVar17->field_0x18;
      if (*(void **)&pFVar17->field_0x18 == (void *)0x0) {
        _Src_00 = &pFVar17->field_0x8;
      }
      FVar28 = (ForElementType<unsigned_int>)&local_248.SelectionArray;
      if (local_248.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar28 = local_248.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar28,_Src_00,(ulonglong)(local_248.SelectionArray.NumBits + 0x1fU >> 5) << 2)
      ;
    }
    local_4f0.Index = -1;
    local_4f0.ContainerReference = (void *)0x0;
    local_4f0.Reference = pFVar1;
    pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_4f0);
    if (pFVar18->Connection == (FDataflowOutput *)0x0) {
      pFVar19 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar20);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      FCollectionTransformSelectionFacade(&local_4b8,pFVar19);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectAll
                (&local_4b8,&local_500);
      local_220.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_220.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_220.SelectionArray.NumBits = 0;
      local_220.SelectionArray.MaxBits = 0x80;
      FDataflowSelection::InitializeFromCollection(&local_220,pFVar19,false);
      FDataflowSelection::SetFromArray(&local_220,&local_500);
      local_248.GroupName = local_220.GroupName;
      local_248.SelectionArray.NumBits = 0;
      uVar26 = local_220.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
      if ((local_248.SelectionArray.MaxBits < (int)uVar26) ||
         (0x80 < local_248.SelectionArray.MaxBits)) {
        local_248.SelectionArray.MaxBits = 0x80;
        if (0x80 < (int)uVar26) {
          local_248.SelectionArray.MaxBits = uVar26;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_248.SelectionArray,0);
      }
      local_248.SelectionArray.NumBits = local_220.SelectionArray.NumBits;
      if (local_220.SelectionArray.NumBits != 0) {
        FVar28 = (ForElementType<unsigned_int>)&local_220.SelectionArray;
        if (local_220.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar28 = local_220.SelectionArray.AllocatorInstance.SecondaryData;
        }
        FVar27 = (ForElementType<unsigned_int>)&local_248.SelectionArray;
        if (local_248.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar27 = local_248.SelectionArray.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar27,(void *)FVar28,
               (ulonglong)(local_220.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      if (local_220.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_220.SelectionArray.AllocatorInstance.SecondaryData);
      }
      if (local_500.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_500.AllocatorInstance.Data);
      }
    }
    bVar13 = FDataflowSelection::AnySelected(&local_248);
    if (bVar13) {
      pFVar20 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar20);
      FManagedArrayCollection::FManagedArrayCollection(&local_178,pFVar20);
      local_5f0.Reference = &this->CollisionSampleSpacing;
      local_5f0.Index = -1;
      local_5f0.ContainerReference = (void *)0x0;
      pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5f0);
      pfVar21 = FDataflowInput::GetValue<float>(pFVar18,param_1,local_5f0.Reference);
      bVar13 = this->AddSamplesForCollision;
      local_5d8.Index = -1;
      local_5d8.ContainerReference = (void *)0x0;
      fVar2 = *pfVar21;
      local_5d8.Reference = &this->PointSpacing;
      pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5d8);
      pfVar21 = FDataflowInput::GetValue<float>(pFVar18,param_1,local_5d8.Reference);
      local_5c0.Index = -1;
      local_5c0.ContainerReference = (void *)0x0;
      fVar3 = *pfVar21;
      local_5c0.Reference = &this->OctaveNumber;
      pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5c0);
      puVar22 = (uint *)FDataflowInput::GetValue<int>(pFVar18,param_1,local_5c0.Reference);
      local_5a8.Index = -1;
      local_5a8.ContainerReference = (void *)0x0;
      local_640.ComparisonIndex.Value = *puVar22;
      local_5a8.Reference = &this->Lacunarity;
      pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5a8);
      pfVar21 = FDataflowInput::GetValue<float>(pFVar18,param_1,local_5a8.Reference);
      local_590.Index = -1;
      local_590.ContainerReference = (void *)0x0;
      fVar4 = *pfVar21;
      local_590.Reference = &this->Persistence;
      pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_590);
      pfVar21 = FDataflowInput::GetValue<float>(pFVar18,param_1,local_590.Reference);
      local_578.Index = -1;
      local_578.ContainerReference = (void *)0x0;
      fVar5 = *pfVar21;
      local_578.Reference = &this->Frequency;
      pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_578);
      pfVar21 = FDataflowInput::GetValue<float>(pFVar18,param_1,local_578.Reference);
      local_560.Index = -1;
      local_560.ContainerReference = (void *)0x0;
      fVar6 = *pfVar21;
      local_560.Reference = &this->Amplitude;
      pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_560);
      pfVar21 = FDataflowInput::GetValue<float>(pFVar18,param_1,local_560.Reference);
      local_548.Index = -1;
      local_548.ContainerReference = (void *)0x0;
      fVar7 = *pfVar21;
      local_548.Reference = &this->Grout;
      pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_548);
      pfVar21 = FDataflowInput::GetValue<float>(pFVar18,param_1,local_548.Reference);
      local_530.Index = -1;
      local_530.ContainerReference = (void *)0x0;
      fVar8 = *pfVar21;
      bVar10 = this->SplitIslands;
      local_530.Reference = &this->ChanceToFracture;
      pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_530);
      pfVar21 = FDataflowInput::GetValue<float>(pFVar18,param_1,local_530.Reference);
      local_518.Index = -1;
      local_518.ContainerReference = (void *)0x0;
      fVar9 = *pfVar21;
      local_518.Reference = &this->Transform;
      pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_518);
      local_638 = (FName)FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                                   (pFVar18,param_1,local_518.Reference);
      pTVar23 = FDataflowNode::
                GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                          ((FDataflowNode *)this,param_1,&this->Points);
      local_650.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_650.ArrayNum = pTVar23->ArrayNum;
      lVar29 = (longlong)local_650.ArrayNum;
      _Src = (pTVar23->AllocatorInstance).Data;
      if (local_650.ArrayNum == 0) {
        local_650.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_650.ArrayNum,0,&local_650.AllocatorInstance,local_650.ArrayNum,
                   &local_650.ArrayMax);
        memcpy(local_650.AllocatorInstance.Data,_Src,lVar29 * 0x18);
      }
      local_618 = local_248.GroupName;
      local_610.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_610.NumBits = 0;
      local_610.MaxBits = 0;
      uVar26 = local_248.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar26) {
        uVar30 = 0x80;
        if (0x80 < (int)uVar26) {
          uVar30 = uVar26;
        }
        local_610._24_8_ = (ulonglong)uVar30 << 0x20;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_610,0);
      }
      local_610.NumBits = local_248.SelectionArray.NumBits;
      if (local_248.SelectionArray.NumBits != 0) {
        FVar28 = (ForElementType<unsigned_int>)&local_248.SelectionArray;
        if (local_248.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar28 = local_248.SelectionArray.AllocatorInstance.SecondaryData;
        }
        FVar27 = (ForElementType<unsigned_int>)&local_610;
        if (local_610.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar27 = local_610.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar27,(void *)FVar28,
               (ulonglong)(local_248.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      iVar14 = FFractureEngineFracturing::VoronoiFracture
                         (&local_178,(FDataflowTransformSelection *)&local_618,&local_650,
                          (TTransform<double> *)local_638,0,fVar9,bVar10,fVar8,fVar7,fVar6,fVar5,
                          fVar4,local_640.ComparisonIndex.Value,fVar3,bVar13,fVar2);
      FVar12 = FGeometryCollection::GeometryGroup;
      uVar31 = (ulonglong)iVar14;
      local_1d0.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_1d0.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_1d0.SelectionArray.NumBits = 0;
      local_1d0.SelectionArray.MaxBits = 0x80;
      local_1f8.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_1f8.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_1f8.SelectionArray.NumBits = 0;
      local_1f8.SelectionArray.MaxBits = 0x80;
      if (iVar14 != -1) {
        pFVar24 = ::FName::FName(&local_638,"TransformIndex");
        bVar13 = FManagedArrayCollection::HasAttribute(&local_178,*pFVar24,FVar12);
        FVar12 = FGeometryCollection::GeometryGroup;
        if (bVar13) {
          pFVar24 = ::FName::FName(&local_640,"TransformIndex");
          pTVar25 = FManagedArrayCollection::GetAttribute<int>(&local_178,*pFVar24,FVar12);
          FDataflowSelection::InitializeFromCollection(&local_1d0,&local_178,false);
          FDataflowSelection::InitializeFromCollection(&local_1f8,&local_178,false);
          iVar15 = (**(code **)(*(longlong *)pTVar25 + 0x60))(pTVar25);
          if (iVar14 < iVar15) {
            lVar29 = uVar31 * 4;
            do {
              uVar30 = (uint)uVar31;
              uVar26 = 0;
              if ((int)uVar30 < *(int *)&pTVar25->field_0x18) {
                uVar26 = ~uVar30 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              iVar14 = *(int *)(lVar29 + *(longlong *)&pTVar25->field_0x10);
              if (((iVar14 < 0) || (local_1d0.SelectionArray.NumBits <= iVar14)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar13)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              FVar28 = (ForElementType<unsigned_int>)&local_1d0.SelectionArray;
              if (local_1d0.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar28 = local_1d0.SelectionArray.AllocatorInstance.SecondaryData;
              }
              iVar15 = iVar14;
              if (iVar14 < 0) {
                iVar15 = iVar14 + 0x1f;
              }
              uVar31 = (ulonglong)(uVar30 + 1);
              lVar29 = lVar29 + 4;
              puVar22 = (uint *)((longlong)FVar28 + (longlong)(iVar15 >> 5) * 4);
              *puVar22 = *puVar22 | 1 << ((byte)iVar14 & 0x1f);
              iVar14 = (**(code **)(*(longlong *)pTVar25 + 0x60))(pTVar25);
            } while ((int)(uVar30 + 1) < iVar14);
          }
          if (0 < local_248.SelectionArray.NumBits) {
            do {
              if (((iVar32 < 0) || (local_248.SelectionArray.NumBits <= iVar32)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5c6,L""), bVar13)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              FVar28 = (ForElementType<unsigned_int>)&local_248.SelectionArray;
              if (local_248.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar28 = local_248.SelectionArray.AllocatorInstance.SecondaryData;
              }
              uVar26 = 1 << ((byte)iVar32 & 0x1f);
              iVar14 = iVar32;
              if (iVar32 < 0) {
                iVar14 = iVar32 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar28 + (longlong)(iVar14 >> 5) * 4) & uVar26) != 0) {
                if (((iVar32 < 0) || (local_1f8.SelectionArray.NumBits <= iVar32)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar13)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                FVar28 = (ForElementType<unsigned_int>)&local_1f8.SelectionArray;
                if (local_1f8.SelectionArray.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar28 = local_1f8.SelectionArray.AllocatorInstance.SecondaryData;
                }
                puVar22 = (uint *)((longlong)FVar28 + (longlong)(iVar14 >> 5) * 4);
                *puVar22 = *puVar22 | uVar26;
              }
              iVar32 = iVar32 + 1;
            } while (iVar32 < local_248.SelectionArray.NumBits);
          }
        }
      }
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,&local_178,&this->Collection);
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_1f8,
                 &this->TransformSelection);
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_1d0,
                 &this->NewGeometryTransformSelection);
      if (local_1f8.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_1f8.SelectionArray.AllocatorInstance.SecondaryData);
      }
      if (local_1d0.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_1d0.SelectionArray.AllocatorInstance.SecondaryData);
      }
      FManagedArrayCollection::~FManagedArrayCollection(&local_178);
    }
    else {
      local_630.Index = -1;
      local_630.ContainerReference = (void *)0x0;
      local_630.Reference = pFVar20;
      pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_630);
      if (pFVar18->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_630.Reference,pFVar20);
      }
      else {
        local_4d8.Index = -1;
        local_4d8.ContainerReference = (void *)0x0;
        local_4d8.Reference = pFVar20;
        FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_630,&local_4d8);
      }
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_248,pFVar1);
      local_1a8 = FDataflowTransformSelection::TransformGroupName;
      local_190 = (void *)0x0;
      local_188 = 0;
      local_184 = 0x80;
      FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_1a8,
                 &this->NewGeometryTransformSelection);
      if (local_190 != (void *)0x0) {
        FMemory::Free(local_190);
      }
    }
    if (local_248.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_248.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FVoronoiFractureDataflowNode_v2 @ 14e9322d0

FVoronoiFractureDataflowNode_v2 * __thiscall
FVoronoiFractureDataflowNode_v2::FVoronoiFractureDataflowNode_v2
          (FVoronoiFractureDataflowNode_v2 *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  TTransform<double> *pTVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  __m128d _Var9;
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
  *(undefined ***)this = &___7FVoronoiFractureDataflowNode_v2__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_78.Index = -1;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  pTVar2 = (TTransform<double> *)((longlong)local_res8 + 0x330);
  pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           ((longlong)local_res8 + 0x2f8);
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pfVar4 = (float *)((longlong)local_res8 + 0x394);
  *(undefined8 *)((longlong)local_res8 + 0x300) = 0;
  pfVar5 = (float *)((longlong)local_res8 + 0x39c);
  pfVar6 = (float *)((longlong)local_res8 + 0x3a0);
  *(FName *)((longlong)local_res8 + 0x308) = FDataflowTransformSelection::TransformGroupName;
  pfVar7 = (float *)((longlong)local_res8 + 0x3a4);
  *(undefined8 *)((longlong)local_res8 + 800) = 0;
  pfVar8 = (float *)((longlong)local_res8 + 0x3a8);
  *(undefined4 *)((longlong)local_res8 + 0x328) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x32c) = 0x80;
  *&(pTVar2->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&((__m128d *)((longlong)local_res8 + 0x340))->m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(((VectorRegister4Double *)((longlong)local_res8 + 0x350))->XY).m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&((__m128d *)((longlong)local_res8 + 0x360))->m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(((VectorRegister4Double *)((longlong)local_res8 + 0x370))->XY).m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var9 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *(int *)((longlong)local_res8 + 0x390) = 0;
  *pfVar5 = 0.0;
  *pfVar6 = 0.0;
  *(bool *)((longlong)local_res8 + 0x3b8) = false;
  *&((__m128d *)((longlong)local_res8 + 0x380))->m128d_f64 = _Var9.m128d_f64;
  *pfVar4 = 1.0;
  *(bool *)((longlong)local_res8 + 0x398) = true;
  *pfVar7 = 0.1;
  *pfVar8 = 0.5;
  *(float *)((longlong)local_res8 + 0x3ac) = 2.0;
  *(int *)((longlong)local_res8 + 0x3b0) = 4;
  *(float *)((longlong)local_res8 + 0x3b4) = 10.0;
  *(float *)((longlong)local_res8 + 0x3bc) = 50.0;
  *(FName *)((longlong)local_res8 + 0x3c0) = FDataflowTransformSelection::TransformGroupName;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *(undefined8 *)((longlong)local_res8 + 0x3d8) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x3e0) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x3e4) = 0x80;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar3;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_78.Reference = (void *)((longlong)this_00 + 0x308);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar2;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar4;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar5;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar6;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar7;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar8;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3ac);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3b0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3b4);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3bc);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
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
  local_78.Reference = (void *)((longlong)this_00 + 0x308);
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
  local_58.Reference = (void *)((longlong)this_00 + 0x3c0);
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
  return (FVoronoiFractureDataflowNode_v2 *)this_00;
}

// FVoronoiFractureDataflowNode_v2 @ 14e932760

FVoronoiFractureDataflowNode_v2 * __thiscall
FVoronoiFractureDataflowNode_v2::FVoronoiFractureDataflowNode_v2
          (FVoronoiFractureDataflowNode_v2 *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  *(undefined ***)this = &___7FVoronoiFractureDataflowNode_v2__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
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

