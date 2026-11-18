// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8c9c60

UScriptStruct * __cdecl FBrickCutterDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBrickCutterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBrickCutterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBrickCutterDataflowNode,(UObject *)pUVar1,
                         L"BrickCutterDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBrickCutterDataflowNode.OuterSingleton;
}

// GetType @ 14e8c9ea0

FName __thiscall FBrickCutterDataflowNode::GetType(FBrickCutterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBrickCutterDataflowNode");
  return in_RDX;
}

// IsA @ 14e8c9f10

bool __thiscall FBrickCutterDataflowNode::IsA(FBrickCutterDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBrickCutterDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8c9f78;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8c9f78:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8c9f96;
      }
    }
  }
  bVar5 = true;
LAB_14e8c9f96:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8ca030

FStructOnScope * __thiscall
FBrickCutterDataflowNode::NewStructOnScope(FBrickCutterDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBrickCutterDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBrickCutterDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBrickCutterDataflowNode,(UObject *)pUVar2,
                           L"BrickCutterDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBrickCutterDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8ca0f0

void __thiscall
FBrickCutterDataflowNode::SerializeInternal(FBrickCutterDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBrickCutterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBrickCutterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBrickCutterDataflowNode,(UObject *)pUVar1,
                         L"BrickCutterDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FBrickCutterDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FBrickCutterDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8ca16d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8ca180

FName __thiscall FBrickCutterDataflowNode::GetDisplayName(FBrickCutterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BrickCutter");
  return in_RDX;
}

// GetCategory @ 14e8ca1c0

FName __thiscall FBrickCutterDataflowNode::GetCategory(FBrickCutterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Fracture");
  return in_RDX;
}

// GetTags @ 14e8ca1f0

FString * __thiscall
FBrickCutterDataflowNode::GetTags(FBrickCutterDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8ca220

UScriptStruct * __thiscall
FBrickCutterDataflowNode::TypedScriptStruct(FBrickCutterDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBrickCutterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBrickCutterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBrickCutterDataflowNode,(UObject *)pUVar1,
                         L"BrickCutterDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBrickCutterDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8ca860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBrickCutterDataflowNode::Evaluate
          (FBrickCutterDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowTransformSelection *pFVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  EFractureBrickBondEnum EVar14;
  code *pcVar15;
  FName FVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  FDataflowTransformSelection *pFVar21;
  FDataflowInput *pFVar22;
  FManagedArrayCollection *pFVar23;
  TBox<double> *pTVar24;
  FManagedArrayCollection *pFVar25;
  float *pfVar26;
  int *piVar27;
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
  undefined1 auStackY_948 [32];
  FName local_8a0;
  FName local_898;
  FName local_890;
  TBitArray<FDefaultBitArrayAllocator> local_888;
  FConnectionReference local_868;
  FConnectionReference local_850;
  FConnectionReference local_838;
  FConnectionReference local_820;
  FConnectionReference local_808;
  FConnectionReference local_7f0;
  FConnectionReference local_7d8;
  FConnectionReference local_7c0;
  FConnectionReference local_7a8;
  FConnectionReference local_790;
  FConnectionReference local_778;
  FConnectionReference local_760;
  FConnectionReference local_748;
  FConnectionReference local_730;
  FConnectionReference local_718;
  TArray<int,TSizedDefaultAllocator<32>_> local_700;
  FConnectionReference local_6f0;
  FConnectionReference local_6d8;
  FConnectionReference local_6c0;
  FBoundsFacade local_6a8;
  FCollectionTransformSelectionFacade local_548;
  FDataflowSelection local_2d8;
  FDataflowSelection local_2b0;
  FDataflowSelection local_288;
  FDataflowSelection local_260;
  TVector<double>_u_0 local_238;
  double dStack_220;
  double local_218;
  double dStack_210;
  undefined8 local_208;
  FName local_200;
  void *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  TVector<double>_u_0 local_1d8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined8 local_1a8;
  FManagedArrayCollection local_198;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_948;
  pFVar25 = &this->Collection;
  puVar20 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((FManagedArrayCollection *)puVar20 == pFVar25) ||
      (puVar20 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (FDataflowTransformSelection *)puVar20 == &this->TransformSelection)) ||
     (puVar20 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FDataflowTransformSelection *)puVar20 == &this->NewGeometryTransformSelection)) {
    pFVar1 = &this->TransformSelection;
    pFVar21 = FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,pFVar1);
    iVar35 = 0;
    local_2d8.GroupName.ComparisonIndex.Value = *(uint *)&pFVar21->field_0x0;
    local_2d8.GroupName.Number = *(uint *)&pFVar21->field_0x4;
    local_2d8.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_2d8.SelectionArray.MaxBits = 0;
    local_2d8.SelectionArray.NumBits = 0;
    uVar30 = *(int *)&pFVar21->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar30) {
      local_2d8.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar30) {
        local_2d8.SelectionArray.MaxBits = uVar30;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2d8.SelectionArray,0);
    }
    local_2d8.SelectionArray.NumBits = *(int *)&pFVar21->field_0x20;
    if (local_2d8.SelectionArray.NumBits != 0) {
      _Src = *(void **)&pFVar21->field_0x18;
      if (*(void **)&pFVar21->field_0x18 == (void *)0x0) {
        _Src = &pFVar21->field_0x8;
      }
      FVar32 = (ForElementType<unsigned_int>)&local_2d8.SelectionArray;
      if (local_2d8.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar32 = local_2d8.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar32,_Src,(ulonglong)(local_2d8.SelectionArray.NumBits + 0x1fU >> 5) << 2);
    }
    local_6f0.Index = -1;
    local_6f0.ContainerReference = (void *)0x0;
    local_6f0.Reference = pFVar1;
    pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_6f0);
    if (pFVar22->Connection == (FDataflowOutput *)0x0) {
      pFVar23 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar25);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      FCollectionTransformSelectionFacade(&local_548,pFVar23);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectAll
                (&local_548,&local_700);
      local_2b0.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_2b0.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_2b0.SelectionArray.NumBits = 0;
      local_2b0.SelectionArray.MaxBits = 0x80;
      FDataflowSelection::InitializeFromCollection(&local_2b0,pFVar23,false);
      FDataflowSelection::SetFromArray(&local_2b0,&local_700);
      local_2d8.GroupName = local_2b0.GroupName;
      local_2d8.SelectionArray.NumBits = 0;
      uVar30 = local_2b0.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
      if ((local_2d8.SelectionArray.MaxBits < (int)uVar30) ||
         (0x80 < local_2d8.SelectionArray.MaxBits)) {
        local_2d8.SelectionArray.MaxBits = 0x80;
        if (0x80 < (int)uVar30) {
          local_2d8.SelectionArray.MaxBits = uVar30;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2d8.SelectionArray,0);
      }
      local_2d8.SelectionArray.NumBits = local_2b0.SelectionArray.NumBits;
      if (local_2b0.SelectionArray.NumBits != 0) {
        FVar32 = (ForElementType<unsigned_int>)&local_2b0.SelectionArray;
        if (local_2b0.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar32 = local_2b0.SelectionArray.AllocatorInstance.SecondaryData;
        }
        FVar31 = (ForElementType<unsigned_int>)&local_2d8.SelectionArray;
        if (local_2d8.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar31 = local_2d8.SelectionArray.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar31,(void *)FVar32,
               (ulonglong)(local_2b0.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      if (local_2b0.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_2b0.SelectionArray.AllocatorInstance.SecondaryData);
      }
      if (local_700.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_700.AllocatorInstance.Data);
      }
    }
    pTVar24 = FDataflowNode::GetValue<UE::Math::TBox<double>_>
                        ((FDataflowNode *)this,param_1,&this->BoundingBox);
    local_6d8.Index = -1;
    local_6d8.ContainerReference = (void *)0x0;
    local_238._s_0.X = (pTVar24->Min).field0_0x0._s_0.X;
    local_238._s_0.Y = (pTVar24->Min).field0_0x0._s_0.Y;
    local_238._s_0.Z = (pTVar24->Min).field0_0x0._s_0.Z;
    dStack_220 = (pTVar24->Max).field0_0x0._s_0.X;
    local_218 = (pTVar24->Max).field0_0x0._s_0.Y;
    dStack_210 = (pTVar24->Max).field0_0x0._s_0.Z;
    local_208._0_1_ = pTVar24->IsValid;
    local_208._1_1_ = pTVar24->Pad[0];
    local_208._2_1_ = pTVar24->Pad[1];
    local_208._3_1_ = pTVar24->Pad[2];
    local_208._4_1_ = pTVar24->Pad[3];
    local_208._5_1_ = pTVar24->Pad[4];
    local_208._6_1_ = pTVar24->Pad[5];
    local_208._7_1_ = pTVar24->Pad[6];
    local_6d8.Reference = &this->BoundingBox;
    pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_6d8);
    if (pFVar22->Connection == (FDataflowOutput *)0x0) {
      pFVar23 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar25);
      GeometryCollection::Facades::FBoundsFacade::FBoundsFacade(&local_6a8,pFVar23);
      GeometryCollection::Facades::FBoundsFacade::GetBoundingBoxInCollectionSpace
                (&local_6a8,(TBox<double> *)&local_1d8._s_0);
      local_238._s_0.X = local_1d8._s_0.X;
      local_238._s_0.Y = local_1d8._s_0.Y;
      local_238._s_0.Z = local_1d8._s_0.Z;
      dStack_220 = dStack_1c0;
      local_218 = local_1b8;
      dStack_210 = dStack_1b0;
      local_208 = local_1a8;
    }
    bVar17 = FDataflowSelection::AnySelected(&local_2d8);
    if (bVar17) {
      pFVar25 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar25);
      FManagedArrayCollection::FManagedArrayCollection(&local_198,pFVar25);
      local_850.Reference = &this->CollisionSampleSpacing;
      local_850.Index = -1;
      local_850.ContainerReference = (void *)0x0;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_850);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_850.Reference);
      bVar17 = this->AddSamplesForCollision;
      local_838.Index = -1;
      local_838.ContainerReference = (void *)0x0;
      fVar3 = *pfVar26;
      local_838.Reference = &this->PointSpacing;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_838);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_838.Reference);
      local_820.Index = -1;
      local_820.ContainerReference = (void *)0x0;
      fVar4 = *pfVar26;
      local_820.Reference = &this->OctaveNumber;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_820);
      piVar27 = FDataflowInput::GetValue<int>(pFVar22,param_1,local_820.Reference);
      local_808.Index = -1;
      local_808.ContainerReference = (void *)0x0;
      iVar18 = *piVar27;
      local_808.Reference = &this->Lacunarity;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_808);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_808.Reference);
      local_7f0.Index = -1;
      local_7f0.ContainerReference = (void *)0x0;
      fVar5 = *pfVar26;
      local_7f0.Reference = &this->Persistence;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7f0);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_7f0.Reference);
      local_7d8.Index = -1;
      fVar6 = *pfVar26;
      local_7d8.Reference = &this->Frequency;
      local_7d8.ContainerReference = (void *)0x0;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7d8);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_7d8.Reference);
      local_7c0.Index = -1;
      local_7c0.ContainerReference = (void *)0x0;
      fVar7 = *pfVar26;
      local_7c0.Reference = &this->Amplitude;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7c0);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_7c0.Reference);
      local_7a8.Index = -1;
      local_7a8.ContainerReference = (void *)0x0;
      fVar8 = *pfVar26;
      local_7a8.Reference = &this->Grout;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7a8);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_7a8.Reference);
      bVar13 = this->SplitIslands;
      local_790.Index = -1;
      local_790.ContainerReference = (void *)0x0;
      fVar9 = *pfVar26;
      local_790.Reference = &this->ChanceToFracture;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_790);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_790.Reference);
      local_778.Index = -1;
      local_778.ContainerReference = (void *)0x0;
      fVar10 = *pfVar26;
      local_778.Reference = &this->RandomSeed;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_778);
      piVar27 = FDataflowInput::GetValue<int>(pFVar22,param_1,local_778.Reference);
      local_760.Index = -1;
      local_760.ContainerReference = (void *)0x0;
      iVar19 = *piVar27;
      local_760.Reference = &this->BrickDepth;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_760);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_760.Reference);
      local_748.Index = -1;
      local_748.ContainerReference = (void *)0x0;
      fVar11 = *pfVar26;
      local_748.Reference = &this->BrickHeight;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_748);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_748.Reference);
      local_730.Index = -1;
      local_730.ContainerReference = (void *)0x0;
      fVar12 = *pfVar26;
      local_730.Reference = &this->BrickLength;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_730);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_730.Reference);
      local_718.Index = -1;
      local_718.ContainerReference = (void *)0x0;
      local_8a0.ComparisonIndex.Value = (uint)*pfVar26;
      EVar14 = this->Bond;
      local_718.Reference = &this->Transform;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_718);
      local_898 = (FName)FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                                   (pFVar22,param_1,local_718.Reference);
      local_890 = local_2d8.GroupName;
      local_888.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_888.NumBits = 0;
      local_888.MaxBits = 0;
      uVar30 = local_2d8.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar30) {
        uVar33 = 0x80;
        if (0x80 < (int)uVar30) {
          uVar33 = uVar30;
        }
        local_888._24_8_ = (ulonglong)uVar33 << 0x20;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_888,0);
      }
      local_888.NumBits = local_2d8.SelectionArray.NumBits;
      if (local_2d8.SelectionArray.NumBits != 0) {
        FVar32 = (ForElementType<unsigned_int>)&local_2d8.SelectionArray;
        if (local_2d8.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar32 = local_2d8.SelectionArray.AllocatorInstance.SecondaryData;
        }
        FVar31 = (ForElementType<unsigned_int>)&local_888;
        if (local_888.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar31 = local_888.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar31,(void *)FVar32,
               (ulonglong)(local_2d8.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      iVar18 = FFractureEngineFracturing::BrickCutter
                         (&local_198,(FDataflowTransformSelection *)&local_890,
                          (TBox<double> *)&local_238._s_0,(TTransform<double> *)local_898,EVar14,
                          (float)local_8a0.ComparisonIndex.Value,fVar12,fVar11,iVar19,fVar10,bVar13,
                          fVar9,fVar8,fVar7,fVar6,fVar5,iVar18,fVar4,bVar17,fVar3);
      FVar16 = FGeometryCollection::GeometryGroup;
      uVar34 = (ulonglong)iVar18;
      local_260.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_260.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_260.SelectionArray.NumBits = 0;
      local_260.SelectionArray.MaxBits = 0x80;
      local_288.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_288.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_288.SelectionArray.NumBits = 0;
      local_288.SelectionArray.MaxBits = 0x80;
      if (iVar18 != -1) {
        pFVar28 = ::FName::FName(&local_898,"TransformIndex");
        bVar17 = FManagedArrayCollection::HasAttribute(&local_198,*pFVar28,FVar16);
        FVar16 = FGeometryCollection::GeometryGroup;
        if (bVar17) {
          pFVar28 = ::FName::FName(&local_8a0,"TransformIndex");
          pTVar29 = FManagedArrayCollection::GetAttribute<int>(&local_198,*pFVar28,FVar16);
          FDataflowSelection::InitializeFromCollection(&local_260,&local_198,false);
          FDataflowSelection::InitializeFromCollection(&local_288,&local_198,false);
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
              if (((iVar18 < 0) || (local_260.SelectionArray.NumBits <= iVar18)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar17)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              FVar32 = (ForElementType<unsigned_int>)&local_260.SelectionArray;
              if (local_260.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar32 = local_260.SelectionArray.AllocatorInstance.SecondaryData;
              }
              iVar19 = iVar18;
              if (iVar18 < 0) {
                iVar19 = iVar18 + 0x1f;
              }
              uVar34 = (ulonglong)(uVar33 + 1);
              lVar36 = lVar36 + 4;
              puVar2 = (uint *)((longlong)FVar32 + (longlong)(iVar19 >> 5) * 4);
              *puVar2 = *puVar2 | 1 << ((byte)iVar18 & 0x1f);
              iVar18 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
            } while ((int)(uVar33 + 1) < iVar18);
          }
          if (0 < local_2d8.SelectionArray.NumBits) {
            do {
              if (((iVar35 < 0) || (local_2d8.SelectionArray.NumBits <= iVar35)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5c6,L""), bVar17)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              FVar32 = (ForElementType<unsigned_int>)&local_2d8.SelectionArray;
              if (local_2d8.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar32 = local_2d8.SelectionArray.AllocatorInstance.SecondaryData;
              }
              uVar30 = 1 << ((byte)iVar35 & 0x1f);
              iVar18 = iVar35;
              if (iVar35 < 0) {
                iVar18 = iVar35 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar32 + (longlong)(iVar18 >> 5) * 4) & uVar30) != 0) {
                if (((iVar35 < 0) || (local_288.SelectionArray.NumBits <= iVar35)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar17)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                FVar32 = (ForElementType<unsigned_int>)&local_288.SelectionArray;
                if (local_288.SelectionArray.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar32 = local_288.SelectionArray.AllocatorInstance.SecondaryData;
                }
                puVar2 = (uint *)((longlong)FVar32 + (longlong)(iVar18 >> 5) * 4);
                *puVar2 = *puVar2 | uVar30;
              }
              iVar35 = iVar35 + 1;
            } while (iVar35 < local_2d8.SelectionArray.NumBits);
          }
        }
      }
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,&local_198,&this->Collection);
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_288,
                 &this->TransformSelection);
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_260,
                 &this->NewGeometryTransformSelection);
      if (local_288.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_288.SelectionArray.AllocatorInstance.SecondaryData);
      }
      if (local_260.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_260.SelectionArray.AllocatorInstance.SecondaryData);
      }
      FManagedArrayCollection::~FManagedArrayCollection(&local_198);
    }
    else {
      local_868.Index = -1;
      local_868.ContainerReference = (void *)0x0;
      local_868.Reference = pFVar25;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_868);
      if (pFVar22->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_868.Reference,pFVar25);
      }
      else {
        local_6c0.Index = -1;
        local_6c0.ContainerReference = (void *)0x0;
        local_6c0.Reference = pFVar25;
        FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_868,&local_6c0);
      }
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_2d8,pFVar1);
      local_200 = FDataflowTransformSelection::TransformGroupName;
      local_1e8 = (void *)0x0;
      local_1e0 = 0;
      local_1dc = 0x80;
      FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_200,
                 &this->NewGeometryTransformSelection);
      if (local_1e8 != (void *)0x0) {
        FMemory::Free(local_1e8);
      }
    }
    if (local_2d8.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_2d8.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FBrickCutterDataflowNode @ 14e913940

FBrickCutterDataflowNode * __thiscall
FBrickCutterDataflowNode::FBrickCutterDataflowNode
          (FBrickCutterDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  uchar *puVar1;
  byte *pbVar2;
  TBox<double> *pTVar3;
  TTransform<double> *pTVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  float *pfVar9;
  __m128d _Var10;
  FName this_00;
  FDataflowInput *pFVar11;
  FDataflowOutput *pFVar12;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  *(undefined ***)this = &___7FBrickCutterDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_78.Index = -1;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  pTVar3 = (TBox<double> *)((longlong)local_res8 + 0x2f8);
  (pTVar3->Min).field0_0x0._s_0.X = 0.0;
  pTVar4 = (TTransform<double> *)((longlong)local_res8 + 0x360);
  *(undefined8 *)((longlong)local_res8 + 0x300) = 0;
  pfVar5 = (float *)((longlong)local_res8 + 0x3c4);
  *(undefined8 *)((longlong)local_res8 + 0x308) = 0;
  pfVar6 = (float *)((longlong)local_res8 + 0x3c8);
  (((TVector<double> *)((longlong)local_res8 + 0x310))->field0_0x0)._s_0.X = 0.0;
  pfVar7 = (float *)((longlong)local_res8 + 0x3cc);
  *(undefined8 *)((longlong)local_res8 + 0x318) = 0;
  piVar8 = (int *)((longlong)local_res8 + 0x3d0);
  *(undefined8 *)((longlong)local_res8 + 800) = 0;
  pfVar9 = (float *)((longlong)local_res8 + 0x3d4);
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
  *&(pTVar4->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&((__m128d *)((longlong)local_res8 + 0x370))->m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(((VectorRegister4Double *)((longlong)local_res8 + 0x380))->XY).m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&((__m128d *)((longlong)local_res8 + 0x390))->m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(((VectorRegister4Double *)((longlong)local_res8 + 0x3a0))->XY).m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var10 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *(EFractureBrickBondEnum *)((longlong)local_res8 + 0x3c0) = Dataflow_FractureBrickBond_Stretcher;
  *piVar8 = 0;
  *(undefined8 *)((longlong)local_res8 + 0x3dc) = 0;
  *(bool *)((longlong)local_res8 + 0x3f8) = false;
  *&((__m128d *)((longlong)local_res8 + 0x3b0))->m128d_f64 = _Var10.m128d_f64;
  *pfVar5 = 194.0;
  *pfVar6 = 57.0;
  *pfVar7 = 92.0;
  *pfVar9 = 1.0;
  *(bool *)((longlong)local_res8 + 0x3d8) = true;
  *(float *)((longlong)local_res8 + 0x3e4) = 0.1;
  *(float *)((longlong)local_res8 + 1000) = 0.5;
  *(float *)((longlong)local_res8 + 0x3ec) = 2.0;
  *(int *)((longlong)local_res8 + 0x3f0) = 4;
  *(float *)((longlong)local_res8 + 0x3f4) = 10.0;
  *(float *)((longlong)local_res8 + 0x3fc) = 50.0;
  *(FName *)((longlong)local_res8 + 0x400) = FDataflowTransformSelection::TransformGroupName;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *(undefined8 *)((longlong)local_res8 + 0x418) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x420) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x424) = 0x80;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Index = -1;
  local_78.Reference = pTVar3;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)((longlong)this_00 + 0x330);
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar4;
  pFVar11 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar11->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar5;
  pFVar11 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar11->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar6;
  pFVar11 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar11->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar7;
  pFVar11 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar11->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar8;
  pFVar11 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar11->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar9;
  pFVar11 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar11->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3dc);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar11->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3e0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar11->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3e4);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar11->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 1000);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar11->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3ec);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar11->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3f0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar11->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3f4);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar11->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3fc);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar2 = (byte *)((longlong)&pFVar11->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x248);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  pFVar12 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar12,&local_78);
  }
  local_78.Reference = (void *)((longlong)this_00 + 0x330);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  pFVar12 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (FDataflowTransformSelection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar12,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x400);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar12 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar12,&local_78);
  }
  return (FBrickCutterDataflowNode *)this_00;
}

// FBrickCutterDataflowNode @ 14e913ed0

FBrickCutterDataflowNode * __thiscall
FBrickCutterDataflowNode::FBrickCutterDataflowNode(FBrickCutterDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  *(undefined ***)this = &___7FBrickCutterDataflowNode__6B_;
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
  this->Bond = Dataflow_FractureBrickBond_Stretcher;
  this->BrickLength = 194.0;
  this->BrickHeight = 57.0;
  this->BrickDepth = 92.0;
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

