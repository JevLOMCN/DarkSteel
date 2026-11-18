// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8d2360

UScriptStruct * __cdecl FUniformFractureDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformFractureDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformFractureDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformFractureDataflowNode,(UObject *)pUVar1,
                         L"UniformFractureDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FUniformFractureDataflowNode.OuterSingleton;
}

// GetType @ 14e8d2560

FName __thiscall FUniformFractureDataflowNode::GetType(FUniformFractureDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FUniformFractureDataflowNode");
  return in_RDX;
}

// IsA @ 14e8d2590

bool __thiscall FUniformFractureDataflowNode::IsA(FUniformFractureDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FUniformFractureDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8d25f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8d25f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8d2616;
      }
    }
  }
  bVar5 = true;
LAB_14e8d2616:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8d2650

FStructOnScope * __thiscall
FUniformFractureDataflowNode::NewStructOnScope(FUniformFractureDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FUniformFractureDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FUniformFractureDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FUniformFractureDataflowNode,(UObject *)pUVar2,
                           L"UniformFractureDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FUniformFractureDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8d26e0

void __thiscall
FUniformFractureDataflowNode::SerializeInternal
          (FUniformFractureDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformFractureDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformFractureDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformFractureDataflowNode,(UObject *)pUVar1,
                         L"UniformFractureDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FUniformFractureDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FUniformFractureDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8d275d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8d2770

FName __thiscall FUniformFractureDataflowNode::GetDisplayName(FUniformFractureDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"UniformFracture");
  return in_RDX;
}

// GetCategory @ 14e8d27a0

FName __thiscall FUniformFractureDataflowNode::GetCategory(FUniformFractureDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Fracture");
  return in_RDX;
}

// GetTags @ 14e8d27d0

FString * __thiscall
FUniformFractureDataflowNode::GetTags
          (FUniformFractureDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8d2860

UScriptStruct * __thiscall
FUniformFractureDataflowNode::TypedScriptStruct(FUniformFractureDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformFractureDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformFractureDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformFractureDataflowNode,(UObject *)pUVar1,
                         L"UniformFractureDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FUniformFractureDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8d2e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUniformFractureDataflowNode::Evaluate
          (FUniformFractureDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowTransformSelection *pFVar1;
  uint *puVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  FDataflowTransformSelection *pFVar9;
  FDataflowInput *pFVar10;
  FManagedArrayCollection *pFVar11;
  FManagedArrayCollection *pFVar12;
  TTransform<double> *pTVar13;
  int *piVar14;
  float *pfVar15;
  FName *pFVar16;
  TManagedArray<int> *pTVar17;
  uint uVar18;
  ForElementType<unsigned_int> FVar19;
  ForElementType<unsigned_int> FVar20;
  void *_Src;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  undefined1 auStack_6d8 [32];
  longlong local_6b8;
  longlong local_6b0;
  FConnectionReference local_6a8;
  FName local_690;
  TBitArray<FDefaultBitArrayAllocator> local_688;
  FConnectionReference local_668;
  FConnectionReference local_650;
  FConnectionReference local_638;
  FConnectionReference local_620;
  FConnectionReference local_608;
  FConnectionReference local_5f0;
  FConnectionReference local_5d8;
  FConnectionReference local_5c0;
  FConnectionReference local_5a8;
  FConnectionReference local_590;
  FConnectionReference local_578;
  FConnectionReference local_560;
  FConnectionReference local_548;
  TArray<int,TSizedDefaultAllocator<32>_> local_530;
  FConnectionReference local_520;
  FConnectionReference local_508;
  FName local_4f0;
  FName local_4e8 [2];
  FCollectionTransformSelectionFacade local_4d8;
  FDataflowSelection local_268;
  FDataflowSelection local_240;
  FDataflowSelection local_218;
  FDataflowSelection local_1f0;
  FUniformFractureSettings local_1c8;
  FName local_128;
  void *local_110;
  undefined4 local_108;
  undefined4 local_104;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_6d8;
  pFVar12 = &this->Collection;
  puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((FManagedArrayCollection *)puVar8 == pFVar12) ||
      (puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (FDataflowTransformSelection *)puVar8 == &this->TransformSelection)) ||
     (puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FDataflowTransformSelection *)puVar8 == &this->NewGeometryTransformSelection)) {
    pFVar1 = &this->TransformSelection;
    pFVar9 = FDataflowNode::GetValue<FDataflowTransformSelection>
                       ((FDataflowNode *)this,param_1,pFVar1);
    iVar23 = 0;
    local_268.GroupName.ComparisonIndex.Value = *(uint *)&pFVar9->field_0x0;
    local_268.GroupName.Number = *(uint *)&pFVar9->field_0x4;
    local_268.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_268.SelectionArray.MaxBits = 0;
    local_268.SelectionArray.NumBits = 0;
    uVar18 = *(int *)&pFVar9->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar18) {
      local_268.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar18) {
        local_268.SelectionArray.MaxBits = uVar18;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_268.SelectionArray,0);
    }
    local_268.SelectionArray.NumBits = *(int *)&pFVar9->field_0x20;
    if (local_268.SelectionArray.NumBits != 0) {
      _Src = *(void **)&pFVar9->field_0x18;
      if (*(void **)&pFVar9->field_0x18 == (void *)0x0) {
        _Src = &pFVar9->field_0x8;
      }
      FVar20 = (ForElementType<unsigned_int>)&local_268.SelectionArray;
      if (local_268.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar20 = local_268.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar20,_Src,(ulonglong)(local_268.SelectionArray.NumBits + 0x1fU >> 5) << 2);
    }
    local_520.Index = -1;
    local_520.ContainerReference = (void *)0x0;
    local_520.Reference = pFVar1;
    pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_520);
    if (pFVar10->Connection == (FDataflowOutput *)0x0) {
      pFVar11 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar12);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      FCollectionTransformSelectionFacade(&local_4d8,pFVar11);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectAll
                (&local_4d8,&local_530);
      local_240.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_240.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_240.SelectionArray.NumBits = 0;
      local_240.SelectionArray.MaxBits = 0x80;
      FDataflowSelection::InitializeFromCollection(&local_240,pFVar11,false);
      FDataflowSelection::SetFromArray(&local_240,&local_530);
      local_268.GroupName = local_240.GroupName;
      local_268.SelectionArray.NumBits = 0;
      uVar18 = local_240.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
      if ((local_268.SelectionArray.MaxBits < (int)uVar18) ||
         (0x80 < local_268.SelectionArray.MaxBits)) {
        local_268.SelectionArray.MaxBits = 0x80;
        if (0x80 < (int)uVar18) {
          local_268.SelectionArray.MaxBits = uVar18;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_268.SelectionArray,0);
      }
      local_268.SelectionArray.NumBits = local_240.SelectionArray.NumBits;
      if (local_240.SelectionArray.NumBits != 0) {
        FVar20 = (ForElementType<unsigned_int>)&local_240.SelectionArray;
        if (local_240.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar20 = local_240.SelectionArray.AllocatorInstance.SecondaryData;
        }
        FVar19 = (ForElementType<unsigned_int>)&local_268.SelectionArray;
        if (local_268.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar19 = local_268.SelectionArray.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar19,(void *)FVar20,
               (ulonglong)(local_240.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      if (local_240.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_240.SelectionArray.AllocatorInstance.SecondaryData);
      }
      if (local_530.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_530.AllocatorInstance.Data);
      }
    }
    bVar5 = FDataflowSelection::AnySelected(&local_268);
    if (bVar5) {
      pFVar12 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar12);
      FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar12);
      local_668.Reference = &this->Transform;
      local_668.Index = -1;
      local_668.ContainerReference = (void *)0x0;
      local_1c8.Transform.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_1c8.Transform.Rotation.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1c8.Transform.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_1c8.Transform.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_1c8.Transform.Rotation.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1c8.Transform.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_1c8.Transform.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1c8.Transform.Translation.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1c8.Transform.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1c8.Transform.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_1c8.Transform.Translation.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1c8.Transform.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_1c8.Transform.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1c8.Transform.Scale3D.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1c8.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_1c8.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_1c8.Transform.Scale3D.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1c8.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_668);
      pTVar13 = FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                          (pFVar10,param_1,local_668.Reference);
      local_650.Index = -1;
      local_650.ContainerReference = (void *)0x0;
      local_1c8.Transform.Rotation.XY.m128d_f64 = *&(pTVar13->Rotation).XY.m128d_f64;
      local_1c8.Transform.Rotation.ZW.m128d_f64 = *&(pTVar13->Rotation).ZW.m128d_f64;
      local_1c8.Transform.Translation.XY.m128d_f64 = *&(pTVar13->Translation).XY.m128d_f64;
      local_1c8.Transform.Translation.ZW.m128d_f64 = *&(pTVar13->Translation).ZW.m128d_f64;
      local_1c8.Transform.Scale3D.XY.m128d_f64 = *&(pTVar13->Scale3D).XY.m128d_f64;
      local_1c8.Transform.Scale3D.ZW.m128d_f64 = *&(pTVar13->Scale3D).ZW.m128d_f64;
      local_650.Reference = &this->MinVoronoiSites;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_650);
      piVar14 = FDataflowInput::GetValue<int>(pFVar10,param_1,local_650.Reference);
      local_638.Index = -1;
      local_638.ContainerReference = (void *)0x0;
      local_1c8.MinVoronoiSites = *piVar14;
      local_638.Reference = &this->MaxVoronoiSites;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_638);
      piVar14 = FDataflowInput::GetValue<int>(pFVar10,param_1,local_638.Reference);
      local_620.Index = -1;
      local_620.ContainerReference = (void *)0x0;
      local_1c8.MaxVoronoiSites = *piVar14;
      local_1c8.InternalMaterialID = this->InternalMaterialID;
      local_620.Reference = &this->RandomSeed;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_620);
      piVar14 = FDataflowInput::GetValue<int>(pFVar10,param_1,local_620.Reference);
      local_608.Index = -1;
      local_608.ContainerReference = (void *)0x0;
      local_1c8.RandomSeed = *piVar14;
      local_608.Reference = &this->ChanceToFracture;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_608);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar10,param_1,local_608.Reference);
      local_5f0.Index = -1;
      local_5f0.ContainerReference = (void *)0x0;
      local_1c8.ChanceToFracture = *pfVar15;
      local_1c8.GroupFracture = this->GroupFracture;
      local_1c8.SplitIslands = this->SplitIslands;
      local_5f0.Reference = &this->Grout;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5f0);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar10,param_1,local_5f0.Reference);
      local_5d8.Index = -1;
      local_5d8.ContainerReference = (void *)0x0;
      local_1c8.Grout = *pfVar15;
      local_5d8.Reference = &this->Amplitude;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5d8);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar10,param_1,local_5d8.Reference);
      local_5c0.Index = -1;
      local_5c0.ContainerReference = (void *)0x0;
      local_1c8.NoiseSettings.Amplitude = *pfVar15;
      local_5c0.Reference = &this->Frequency;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5c0);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar10,param_1,local_5c0.Reference);
      local_5a8.Index = -1;
      local_5a8.ContainerReference = (void *)0x0;
      local_1c8.NoiseSettings.Frequency = *pfVar15;
      local_5a8.Reference = &this->Persistence;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5a8);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar10,param_1,local_5a8.Reference);
      local_590.Index = -1;
      local_590.ContainerReference = (void *)0x0;
      local_1c8.NoiseSettings.Persistence = *pfVar15;
      local_590.Reference = &this->Lacunarity;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_590);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar10,param_1,local_590.Reference);
      local_578.Index = -1;
      local_578.ContainerReference = (void *)0x0;
      local_1c8.NoiseSettings.Lacunarity = *pfVar15;
      local_578.Reference = &this->OctaveNumber;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_578);
      piVar14 = FDataflowInput::GetValue<int>(pFVar10,param_1,local_578.Reference);
      local_560.Index = -1;
      local_560.ContainerReference = (void *)0x0;
      local_1c8.NoiseSettings.Octaves = *piVar14;
      local_560.Reference = &this->PointSpacing;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_560);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar10,param_1,local_560.Reference);
      local_548.Index = -1;
      local_548.ContainerReference = (void *)0x0;
      local_1c8.NoiseSettings.PointSpacing = *pfVar15;
      local_1c8.AddSamplesForCollision = this->AddSamplesForCollision;
      local_548.Reference = &this->CollisionSampleSpacing;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_548);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar10,param_1,local_548.Reference);
      local_688.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_688.NumBits = 0;
      local_688.MaxBits = 0;
      local_1c8.CollisionSampleSpacing = *pfVar15;
      local_690 = local_268.GroupName;
      uVar18 = local_268.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar18) {
        uVar21 = 0x80;
        if (0x80 < (int)uVar18) {
          uVar21 = uVar18;
        }
        local_688._24_8_ = (ulonglong)uVar21 << 0x20;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_688,0);
      }
      local_688.NumBits = local_268.SelectionArray.NumBits;
      if (local_268.SelectionArray.NumBits != 0) {
        FVar20 = (ForElementType<unsigned_int>)&local_268.SelectionArray;
        if (local_268.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar20 = local_268.SelectionArray.AllocatorInstance.SecondaryData;
        }
        FVar19 = (ForElementType<unsigned_int>)&local_688;
        if (local_688.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar19 = local_688.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar19,(void *)FVar20,
               (ulonglong)(local_268.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      iVar6 = FFractureEngineFracturing::UniformFracture
                        (&local_f8,(FDataflowTransformSelection *)&local_690,&local_1c8);
      FVar4 = FGeometryCollection::GeometryGroup;
      uVar22 = (ulonglong)iVar6;
      local_1f0.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_1f0.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_1f0.SelectionArray.NumBits = 0;
      local_1f0.SelectionArray.MaxBits = 0x80;
      local_218.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_218.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_218.SelectionArray.NumBits = 0;
      local_218.SelectionArray.MaxBits = 0x80;
      if (iVar6 != -1) {
        pFVar16 = ::FName::FName(&local_4f0,"TransformIndex");
        bVar5 = FManagedArrayCollection::HasAttribute(&local_f8,*pFVar16,FVar4);
        FVar4 = FGeometryCollection::GeometryGroup;
        if (bVar5) {
          pFVar16 = ::FName::FName(local_4e8,"TransformIndex");
          pTVar17 = FManagedArrayCollection::GetAttribute<int>(&local_f8,*pFVar16,FVar4);
          FDataflowSelection::InitializeFromCollection(&local_1f0,&local_f8,false);
          FDataflowSelection::InitializeFromCollection(&local_218,&local_f8,false);
          iVar7 = (**(code **)(*(longlong *)pTVar17 + 0x60))(pTVar17);
          if (iVar6 < iVar7) {
            lVar24 = uVar22 * 4;
            do {
              uVar21 = (uint)uVar22;
              uVar18 = 0;
              if ((int)uVar21 < *(int *)&pTVar17->field_0x18) {
                uVar18 = ~uVar21 >> 0x1f;
              }
              if (uVar18 == 0) {
                local_6b8 = (longlong)(int)uVar21;
                local_6b0 = (longlong)*(int *)&pTVar17->field_0x18;
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              iVar6 = *(int *)(lVar24 + *(longlong *)&pTVar17->field_0x10);
              if (((iVar6 < 0) || (local_1f0.SelectionArray.NumBits <= iVar6)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar20 = (ForElementType<unsigned_int>)&local_1f0.SelectionArray;
              if (local_1f0.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar20 = local_1f0.SelectionArray.AllocatorInstance.SecondaryData;
              }
              iVar7 = iVar6;
              if (iVar6 < 0) {
                iVar7 = iVar6 + 0x1f;
              }
              uVar22 = (ulonglong)(uVar21 + 1);
              lVar24 = lVar24 + 4;
              puVar2 = (uint *)((longlong)FVar20 + (longlong)(iVar7 >> 5) * 4);
              *puVar2 = *puVar2 | 1 << ((byte)iVar6 & 0x1f);
              iVar6 = (**(code **)(*(longlong *)pTVar17 + 0x60))(pTVar17);
            } while ((int)(uVar21 + 1) < iVar6);
          }
          if (0 < local_268.SelectionArray.NumBits) {
            do {
              if (((iVar23 < 0) || (local_268.SelectionArray.NumBits <= iVar23)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5c6,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar20 = (ForElementType<unsigned_int>)&local_268.SelectionArray;
              if (local_268.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar20 = local_268.SelectionArray.AllocatorInstance.SecondaryData;
              }
              uVar18 = 1 << ((byte)iVar23 & 0x1f);
              iVar6 = iVar23;
              if (iVar23 < 0) {
                iVar6 = iVar23 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar20 + (longlong)(iVar6 >> 5) * 4) & uVar18) != 0) {
                if (((iVar23 < 0) || (local_218.SelectionArray.NumBits <= iVar23)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                FVar20 = (ForElementType<unsigned_int>)&local_218.SelectionArray;
                if (local_218.SelectionArray.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar20 = local_218.SelectionArray.AllocatorInstance.SecondaryData;
                }
                puVar2 = (uint *)((longlong)FVar20 + (longlong)(iVar6 >> 5) * 4);
                *puVar2 = *puVar2 | uVar18;
              }
              iVar23 = iVar23 + 1;
            } while (iVar23 < local_268.SelectionArray.NumBits);
          }
        }
      }
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,&local_f8,&this->Collection);
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
      FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
    }
    else {
      local_6a8.Index = -1;
      local_6a8.ContainerReference = (void *)0x0;
      local_6a8.Reference = pFVar12;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_6a8);
      if (pFVar10->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_6a8.Reference,pFVar12);
      }
      else {
        local_508.Index = -1;
        local_508.ContainerReference = (void *)0x0;
        local_508.Reference = pFVar12;
        FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_6a8,&local_508);
      }
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_268,pFVar1);
      local_128 = FDataflowTransformSelection::TransformGroupName;
      local_110 = (void *)0x0;
      local_108 = 0;
      local_104 = 0x80;
      FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_128,
                 &this->NewGeometryTransformSelection);
      if (local_110 != (void *)0x0) {
        FMemory::Free(local_110);
      }
    }
    if (local_268.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_268.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FUniformFractureDataflowNode @ 14e92fa90

FUniformFractureDataflowNode * __thiscall
FUniformFractureDataflowNode::FUniformFractureDataflowNode
          (FUniformFractureDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  TTransform<double> *pTVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  __m128d _Var9;
  FName this_00;
  FDataflowInput *pFVar10;
  FDataflowOutput *pFVar11;
  FName local_res8;
  FName local_res18;
  FName *local_res20;
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  *(undefined ***)this = &___7FUniformFractureDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Index = -1;
  local_res20 = (FName *)((longlong)local_res8 + 0x2f8);
  *local_res20 = FDataflowTransformSelection::TransformGroupName;
  pTVar2 = (TTransform<double> *)((longlong)local_res8 + 800);
  *(undefined8 *)((longlong)local_res8 + 0x310) = 0;
  piVar3 = (int *)((longlong)local_res8 + 0x380);
  *(undefined4 *)((longlong)local_res8 + 0x318) = 0;
  piVar4 = (int *)((longlong)local_res8 + 900);
  *(undefined4 *)((longlong)local_res8 + 0x31c) = 0x80;
  piVar5 = (int *)((longlong)local_res8 + 0x388);
  piVar6 = (int *)((longlong)local_res8 + 0x38c);
  *&(pTVar2->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  pfVar7 = (float *)((longlong)local_res8 + 0x390);
  pfVar8 = (float *)((longlong)local_res8 + 0x398);
  *&((__m128d *)((longlong)local_res8 + 0x330))->m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(((VectorRegister4Double *)((longlong)local_res8 + 0x340))->XY).m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&((__m128d *)((longlong)local_res8 + 0x350))->m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(((VectorRegister4Double *)((longlong)local_res8 + 0x360))->XY).m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var9 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *piVar5 = 0;
  *piVar6 = 0;
  *pfVar8 = 0.0;
  *(float *)((longlong)local_res8 + 0x39c) = 0.0;
  *(bool *)((longlong)local_res8 + 0x3b4) = false;
  *&((__m128d *)((longlong)local_res8 + 0x370))->m128d_f64 = _Var9.m128d_f64;
  *piVar3 = 0x14;
  *piVar4 = 0x14;
  *pfVar7 = 1.0;
  *(undefined2 *)((longlong)local_res8 + 0x394) = 0x101;
  *(float *)((longlong)local_res8 + 0x3a0) = 0.1;
  *(float *)((longlong)local_res8 + 0x3a4) = 0.5;
  *(float *)((longlong)local_res8 + 0x3a8) = 2.0;
  *(int *)((longlong)local_res8 + 0x3ac) = 4;
  *(float *)((longlong)local_res8 + 0x3b0) = 10.0;
  *(float *)((longlong)local_res8 + 0x3b8) = 50.0;
  *(FName *)((longlong)local_res8 + 0x3c0) = FDataflowTransformSelection::TransformGroupName;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *(undefined8 *)((longlong)local_res8 + 0x3d8) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x3e0) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x3e4) = 0x80;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,&local_res18)
  ;
  local_78.Reference = local_res20;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Index = -1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,&local_res18)
  ;
  this_00 = local_res8;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Index = -1;
  local_78.Reference = pTVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,&local_res18)
  ;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar3;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar4;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar5;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar6;
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
  local_78.Reference = (void *)((longlong)this_00 + 0x39c);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3a0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3a4);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3a8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
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
  local_78.Reference = (void *)((longlong)this_00 + 0x3b8);
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
  local_78.Reference = (void *)((longlong)this_00 + 0x2f8);
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
  return (FUniformFractureDataflowNode *)this_00;
}

// FUniformFractureDataflowNode @ 14e92ffc0

FUniformFractureDataflowNode * __thiscall
FUniformFractureDataflowNode::FUniformFractureDataflowNode(FUniformFractureDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  *(undefined ***)this = &___7FUniformFractureDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
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
  this->MinVoronoiSites = 0x14;
  this->MaxVoronoiSites = 0x14;
  this->InternalMaterialID = 0;
  this->RandomSeed = 0;
  this->ChanceToFracture = 1.0;
  this->GroupFracture = true;
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

