// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8bf4e0

UScriptStruct * __cdecl FPlaneCutterDataflowNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2,(UObject *)pUVar1,
                         L"PlaneCutterDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode_v2.OuterSingleton;
}

// GetType @ 14e8bf8c0

FName __thiscall FPlaneCutterDataflowNode_v2::GetType(FPlaneCutterDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FPlaneCutterDataflowNode_v2");
  return in_RDX;
}

// IsA @ 14e8bf990

bool __thiscall FPlaneCutterDataflowNode_v2::IsA(FPlaneCutterDataflowNode_v2 *this,FName param_1)

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
  ::FName::FName(local_res18,"FPlaneCutterDataflowNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8bf9f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8bf9f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8bfa16;
      }
    }
  }
  bVar5 = true;
LAB_14e8bfa16:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8bfa90

FStructOnScope * __thiscall
FPlaneCutterDataflowNode_v2::NewStructOnScope(FPlaneCutterDataflowNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode_v2.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode_v2.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2,(UObject *)pUVar2,
                           L"PlaneCutterDataflowNode_v2");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode_v2.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8bfb50

void __thiscall
FPlaneCutterDataflowNode_v2::SerializeInternal(FPlaneCutterDataflowNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2,(UObject *)pUVar1,
                         L"PlaneCutterDataflowNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode_v2.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode_v2.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8bfbcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8bfc30

FName __thiscall FPlaneCutterDataflowNode_v2::GetDisplayName(FPlaneCutterDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"PlaneCutter");
  return in_RDX;
}

// GetCategory @ 14e8bfc60

FName __thiscall FPlaneCutterDataflowNode_v2::GetCategory(FPlaneCutterDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Fracture");
  return in_RDX;
}

// GetTags @ 14e8bfc90

FString * __thiscall
FPlaneCutterDataflowNode_v2::GetTags
          (FPlaneCutterDataflowNode_v2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8bfd60

UScriptStruct * __thiscall
FPlaneCutterDataflowNode_v2::TypedScriptStruct(FPlaneCutterDataflowNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2,(UObject *)pUVar1,
                         L"PlaneCutterDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode_v2.OuterSingleton;
}

// Evaluate @ 14e8c06b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPlaneCutterDataflowNode_v2::Evaluate
          (FPlaneCutterDataflowNode_v2 *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  FDataflowTransformSelection *pFVar2;
  uint *puVar3;
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
  code *pcVar14;
  FName FVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  FManagedArrayCollection *pFVar20;
  TBox<double> *pTVar21;
  FDataflowInput *pFVar22;
  FDataflowTransformSelection *pFVar23;
  int *piVar24;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar25;
  float *pfVar26;
  TTransform<double> *pTVar27;
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
  undefined1 auStackY_938 [32];
  FName local_898;
  TBitArray<FDefaultBitArrayAllocator> local_890;
  FConnectionReference local_870;
  FConnectionReference local_858;
  FConnectionReference local_840;
  FConnectionReference local_828;
  FConnectionReference local_810;
  FConnectionReference local_7f8;
  FConnectionReference local_7e0;
  FConnectionReference local_7c8;
  FConnectionReference local_7b0;
  FConnectionReference local_798;
  FConnectionReference local_780;
  FConnectionReference local_768;
  FConnectionReference local_750;
  FConnectionReference local_738;
  TArray<int,TSizedDefaultAllocator<32>_> local_720;
  TTransform<double> *local_708;
  int iStack_700;
  undefined4 uStack_6fc;
  FConnectionReference local_6f8;
  FConnectionReference local_6e0;
  FConnectionReference local_6c8;
  FName local_6b0;
  FName local_6a8 [2];
  TArrayView<UE::Math::TTransform<double>_const_,int> local_698;
  FBoundsFacade local_688;
  FCollectionTransformSelectionFacade local_528;
  FDataflowSelection local_2b8;
  FDataflowSelection local_290;
  FDataflowSelection local_268;
  FDataflowSelection local_240;
  TVector<double>_u_0 local_218;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  FName local_1e0;
  ForElementType<unsigned_int> local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  TVector<double>_u_0 local_1b8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  FManagedArrayCollection local_178;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_938;
  pFVar1 = &this->Collection;
  puVar19 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((FManagedArrayCollection *)puVar19 == pFVar1) ||
      (puVar19 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (FDataflowTransformSelection *)puVar19 == &this->TransformSelection)) ||
     (puVar19 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FDataflowTransformSelection *)puVar19 == &this->NewGeometryTransformSelection)) {
    pFVar20 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1)
    ;
    FManagedArrayCollection::FManagedArrayCollection(&local_178,pFVar20);
    pTVar21 = FDataflowNode::GetValue<UE::Math::TBox<double>_>
                        ((FDataflowNode *)this,param_1,&this->BoundingBox);
    iVar35 = 0;
    local_6f8.Index = -1;
    local_6f8.ContainerReference = (void *)0x0;
    local_218._s_0.X = (pTVar21->Min).field0_0x0._s_0.X;
    local_218._s_0.Y = (pTVar21->Min).field0_0x0._s_0.Y;
    local_218._s_0.Z = (pTVar21->Min).field0_0x0._s_0.Z;
    dStack_200 = (pTVar21->Max).field0_0x0._s_0.X;
    local_1f8 = (pTVar21->Max).field0_0x0._s_0.Y;
    dStack_1f0 = (pTVar21->Max).field0_0x0._s_0.Z;
    local_1e8._0_1_ = pTVar21->IsValid;
    local_1e8._1_1_ = pTVar21->Pad[0];
    local_1e8._2_1_ = pTVar21->Pad[1];
    local_1e8._3_1_ = pTVar21->Pad[2];
    local_1e8._4_1_ = pTVar21->Pad[3];
    local_1e8._5_1_ = pTVar21->Pad[4];
    local_1e8._6_1_ = pTVar21->Pad[5];
    local_1e8._7_1_ = pTVar21->Pad[6];
    local_6f8.Reference = &this->BoundingBox;
    pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_6f8);
    if (pFVar22->Connection == (FDataflowOutput *)0x0) {
      GeometryCollection::Facades::FBoundsFacade::FBoundsFacade(&local_688,&local_178);
      GeometryCollection::Facades::FBoundsFacade::GetBoundingBoxInCollectionSpace
                (&local_688,(TBox<double> *)&local_1b8._s_0);
      local_218._s_0.X = local_1b8._s_0.X;
      local_218._s_0.Y = local_1b8._s_0.Y;
      local_218._s_0.Z = local_1b8._s_0.Z;
      dStack_200 = dStack_1a0;
      local_1f8 = local_198;
      dStack_1f0 = dStack_190;
      local_1e8 = local_188;
    }
    pFVar2 = &this->TransformSelection;
    pFVar23 = FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,pFVar2);
    local_2b8.GroupName.ComparisonIndex.Value = *(uint *)&pFVar23->field_0x0;
    local_2b8.GroupName.Number = *(uint *)&pFVar23->field_0x4;
    local_2b8.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_2b8.SelectionArray.MaxBits = 0;
    local_2b8.SelectionArray.NumBits = 0;
    uVar30 = *(int *)&pFVar23->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar30) {
      local_2b8.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar30) {
        local_2b8.SelectionArray.MaxBits = uVar30;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2b8.SelectionArray,0);
    }
    local_2b8.SelectionArray.NumBits = *(int *)&pFVar23->field_0x20;
    if (local_2b8.SelectionArray.NumBits != 0) {
      _Src = *(void **)&pFVar23->field_0x18;
      if (*(void **)&pFVar23->field_0x18 == (void *)0x0) {
        _Src = &pFVar23->field_0x8;
      }
      FVar32 = (ForElementType<unsigned_int>)&local_2b8.SelectionArray;
      if (local_2b8.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar32 = local_2b8.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar32,_Src,(ulonglong)(local_2b8.SelectionArray.NumBits + 0x1fU >> 5) << 2);
    }
    local_6e0.Index = -1;
    local_6e0.ContainerReference = (void *)0x0;
    local_6e0.Reference = pFVar2;
    pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_6e0);
    if (pFVar22->Connection == (FDataflowOutput *)0x0) {
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      FCollectionTransformSelectionFacade(&local_528,&local_178);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectAll
                (&local_528,&local_720);
      local_290.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_290.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_290.SelectionArray.NumBits = 0;
      local_290.SelectionArray.MaxBits = 0x80;
      FDataflowSelection::InitializeFromCollection(&local_290,&local_178,false);
      FDataflowSelection::SetFromArray(&local_290,&local_720);
      local_2b8.GroupName = local_290.GroupName;
      local_2b8.SelectionArray.NumBits = 0;
      uVar30 = local_290.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
      if ((local_2b8.SelectionArray.MaxBits < (int)uVar30) ||
         (0x80 < local_2b8.SelectionArray.MaxBits)) {
        local_2b8.SelectionArray.MaxBits = 0x80;
        if (0x80 < (int)uVar30) {
          local_2b8.SelectionArray.MaxBits = uVar30;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2b8.SelectionArray,0);
      }
      local_2b8.SelectionArray.NumBits = local_290.SelectionArray.NumBits;
      if (local_290.SelectionArray.NumBits != 0) {
        FVar32 = (ForElementType<unsigned_int>)&local_290.SelectionArray;
        if (local_290.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar32 = local_290.SelectionArray.AllocatorInstance.SecondaryData;
        }
        FVar31 = (ForElementType<unsigned_int>)&local_2b8.SelectionArray;
        if (local_2b8.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar31 = local_2b8.SelectionArray.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar31,(void *)FVar32,
               (ulonglong)(local_290.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      if (local_290.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_290.SelectionArray.AllocatorInstance.SecondaryData);
      }
      if (local_720.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_720.AllocatorInstance.Data);
      }
    }
    local_7f8.Reference = &this->NumPlanes;
    local_7f8.Index = -1;
    local_7f8.ContainerReference = (void *)0x0;
    pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7f8);
    piVar24 = FDataflowInput::GetValue<int>(pFVar22,param_1,local_7f8.Reference);
    local_7e0.Index = -1;
    local_7e0.ContainerReference = (void *)0x0;
    iVar17 = *piVar24;
    local_7e0.Reference = &this->CutPlanes;
    pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7e0);
    pTVar25 = FDataflowInput::
              GetValue<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                        (pFVar22,param_1,local_7e0.Reference);
    bVar16 = FDataflowSelection::AnySelected(&local_2b8);
    if (bVar16) {
      local_708 = (TTransform<double> *)(pTVar25->AllocatorInstance).Data;
      iVar18 = pTVar25->ArrayNum;
      if ((iVar18 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar16)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      local_7c8.Reference = &this->CollisionSampleSpacing;
      local_7c8.Index = -1;
      local_7c8.ContainerReference = (void *)0x0;
      iStack_700 = iVar18;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7c8);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_7c8.Reference);
      bVar16 = this->AddSamplesForCollision;
      local_7b0.Index = -1;
      local_7b0.ContainerReference = (void *)0x0;
      fVar4 = *pfVar26;
      local_7b0.Reference = &this->PointSpacing;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7b0);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_7b0.Reference);
      local_798.Index = -1;
      local_798.ContainerReference = (void *)0x0;
      fVar5 = *pfVar26;
      local_798.Reference = &this->OctaveNumber;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_798);
      piVar24 = FDataflowInput::GetValue<int>(pFVar22,param_1,local_798.Reference);
      local_780.Index = -1;
      local_780.ContainerReference = (void *)0x0;
      iVar18 = *piVar24;
      local_780.Reference = &this->Lacunarity;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_780);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_780.Reference);
      local_768.Index = -1;
      local_768.ContainerReference = (void *)0x0;
      fVar6 = *pfVar26;
      local_768.Reference = &this->Persistence;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_768);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_768.Reference);
      local_750.Index = -1;
      local_750.ContainerReference = (void *)0x0;
      fVar7 = *pfVar26;
      local_750.Reference = &this->Frequency;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_750);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_750.Reference);
      local_738.Index = -1;
      local_738.ContainerReference = (void *)0x0;
      fVar8 = *pfVar26;
      local_738.Reference = &this->Amplitude;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_738);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_738.Reference);
      local_858.Index = -1;
      local_858.ContainerReference = (void *)0x0;
      fVar9 = *pfVar26;
      local_858.Reference = &this->Grout;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_858);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_858.Reference);
      local_840.Index = -1;
      local_840.ContainerReference = (void *)0x0;
      fVar10 = *pfVar26;
      bVar12 = this->SplitIslands;
      local_840.Reference = &this->ChanceToFracture;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_840);
      pfVar26 = FDataflowInput::GetValue<float>(pFVar22,param_1,local_840.Reference);
      local_828.Index = -1;
      local_828.ContainerReference = (void *)0x0;
      fVar11 = *pfVar26;
      local_828.Reference = &this->RandomSeed;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_828);
      piVar24 = FDataflowInput::GetValue<int>(pFVar22,param_1,local_828.Reference);
      local_810.Index = -1;
      local_810.ContainerReference = (void *)0x0;
      iVar13 = *piVar24;
      local_810.Reference = &this->Transform;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_810);
      pTVar27 = FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                          (pFVar22,param_1,local_810.Reference);
      local_898 = local_2b8.GroupName;
      local_890.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_890.NumBits = 0;
      local_890.MaxBits = 0;
      uVar30 = local_2b8.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar30) {
        uVar33 = 0x80;
        if (0x80 < (int)uVar30) {
          uVar33 = uVar30;
        }
        local_890._24_8_ = (ulonglong)uVar33 << 0x20;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_890,0);
      }
      local_890.NumBits = local_2b8.SelectionArray.NumBits;
      if (local_2b8.SelectionArray.NumBits != 0) {
        FVar32 = (ForElementType<unsigned_int>)&local_2b8.SelectionArray;
        if (local_2b8.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar32 = local_2b8.SelectionArray.AllocatorInstance.SecondaryData;
        }
        FVar31 = (ForElementType<unsigned_int>)&local_890;
        if (local_890.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar31 = local_890.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar31,(void *)FVar32,
               (ulonglong)(local_2b8.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      local_698._12_4_ = uStack_6fc;
      local_698.ArrayNum = iStack_700;
      local_698.DataPtr = local_708;
      iVar17 = FFractureEngineFracturing::PlaneCutter
                         (&local_178,(FDataflowTransformSelection *)&local_898,
                          (TBox<double> *)&local_218._s_0,pTVar27,iVar17,iVar13,fVar11,bVar12,fVar10
                          ,fVar9,fVar8,fVar7,fVar6,iVar18,fVar5,bVar16,fVar4,&local_698);
      FVar15 = FGeometryCollection::GeometryGroup;
      uVar34 = (ulonglong)iVar17;
      local_240.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_240.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_240.SelectionArray.NumBits = 0;
      local_240.SelectionArray.MaxBits = 0x80;
      local_268.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_268.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_268.SelectionArray.NumBits = 0;
      local_268.SelectionArray.MaxBits = 0x80;
      if (iVar17 != -1) {
        pFVar28 = ::FName::FName(&local_6b0,"TransformIndex");
        bVar16 = FManagedArrayCollection::HasAttribute(&local_178,*pFVar28,FVar15);
        FVar15 = FGeometryCollection::GeometryGroup;
        if (bVar16) {
          pFVar28 = ::FName::FName(local_6a8,"TransformIndex");
          pTVar29 = FManagedArrayCollection::GetAttribute<int>(&local_178,*pFVar28,FVar15);
          FDataflowSelection::InitializeFromCollection(&local_240,&local_178,false);
          FDataflowSelection::InitializeFromCollection(&local_268,&local_178,false);
          iVar18 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
          if (iVar17 < iVar18) {
            lVar36 = uVar34 * 4;
            do {
              uVar33 = (uint)uVar34;
              uVar30 = 0;
              if ((int)uVar33 < *(int *)&pTVar29->field_0x18) {
                uVar30 = ~uVar33 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              iVar17 = *(int *)(lVar36 + *(longlong *)&pTVar29->field_0x10);
              if (((iVar17 < 0) || (local_240.SelectionArray.NumBits <= iVar17)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar16)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              FVar32 = (ForElementType<unsigned_int>)&local_240.SelectionArray;
              if (local_240.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar32 = local_240.SelectionArray.AllocatorInstance.SecondaryData;
              }
              iVar18 = iVar17;
              if (iVar17 < 0) {
                iVar18 = iVar17 + 0x1f;
              }
              uVar34 = (ulonglong)(uVar33 + 1);
              lVar36 = lVar36 + 4;
              puVar3 = (uint *)((longlong)FVar32 + (longlong)(iVar18 >> 5) * 4);
              *puVar3 = *puVar3 | 1 << ((byte)iVar17 & 0x1f);
              iVar17 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
            } while ((int)(uVar33 + 1) < iVar17);
          }
          if (0 < local_2b8.SelectionArray.NumBits) {
            do {
              if (((iVar35 < 0) || (local_2b8.SelectionArray.NumBits <= iVar35)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5c6,L""), bVar16)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              FVar32 = (ForElementType<unsigned_int>)&local_2b8.SelectionArray;
              if (local_2b8.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar32 = local_2b8.SelectionArray.AllocatorInstance.SecondaryData;
              }
              uVar30 = 1 << ((byte)iVar35 & 0x1f);
              iVar17 = iVar35;
              if (iVar35 < 0) {
                iVar17 = iVar35 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar32 + (longlong)(iVar17 >> 5) * 4) & uVar30) != 0) {
                if (((iVar35 < 0) || (local_268.SelectionArray.NumBits <= iVar35)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar16)) {
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                FVar32 = (ForElementType<unsigned_int>)&local_268.SelectionArray;
                if (local_268.SelectionArray.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar32 = local_268.SelectionArray.AllocatorInstance.SecondaryData;
                }
                puVar3 = (uint *)((longlong)FVar32 + (longlong)(iVar17 >> 5) * 4);
                *puVar3 = *puVar3 | uVar30;
              }
              iVar35 = iVar35 + 1;
            } while (iVar35 < local_2b8.SelectionArray.NumBits);
          }
        }
      }
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,&local_178,&this->Collection);
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_268,
                 &this->TransformSelection);
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_240,
                 &this->NewGeometryTransformSelection);
      FVar32 = local_240.SelectionArray.AllocatorInstance.SecondaryData;
      if (local_268.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_268.SelectionArray.AllocatorInstance.SecondaryData);
        FVar32 = local_240.SelectionArray.AllocatorInstance.SecondaryData;
      }
    }
    else {
      local_870.Index = -1;
      local_870.ContainerReference = (void *)0x0;
      local_870.Reference = pFVar1;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_870);
      if (pFVar22->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_870.Reference,pFVar1);
      }
      else {
        local_6c8.Index = -1;
        local_6c8.ContainerReference = (void *)0x0;
        local_6c8.Reference = pFVar1;
        FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_870,&local_6c8);
      }
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_2b8,pFVar2);
      local_1e0 = FDataflowTransformSelection::TransformGroupName;
      local_1c8 = (ForElementType<unsigned_int>)0x0;
      local_1c0 = 0;
      local_1bc = 0x80;
      FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_1e0,
                 &this->NewGeometryTransformSelection);
      FVar32 = local_1c8;
    }
    if (FVar32 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar32);
    }
    if (local_2b8.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_2b8.SelectionArray.AllocatorInstance.SecondaryData);
    }
    FManagedArrayCollection::~FManagedArrayCollection(&local_178);
  }
  return;
}

// FPlaneCutterDataflowNode_v2 @ 14e927440

FPlaneCutterDataflowNode_v2 * __thiscall
FPlaneCutterDataflowNode_v2::FPlaneCutterDataflowNode_v2
          (FPlaneCutterDataflowNode_v2 *this,FNodeParameters *param_1,FGuid *param_2)

{
  uchar *puVar1;
  byte *pbVar2;
  TBox<double> *pTVar3;
  TTransform<double> *pTVar4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  int *piVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
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
  this->_padding_ = (longlong)&___7FPlaneCutterDataflowNode_v2__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_78.Index = -1;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  pTVar3 = (TBox<double> *)((longlong)local_res8 + 0x2f8);
  (pTVar3->Min).field0_0x0._s_0.X = 0.0;
  pTVar4 = (TTransform<double> *)((longlong)local_res8 + 0x360);
  *(undefined8 *)((longlong)local_res8 + 0x300) = 0;
  pTVar5 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
           ((longlong)local_res8 + 0x3c0);
  *(undefined8 *)((longlong)local_res8 + 0x308) = 0;
  piVar6 = (int *)((longlong)local_res8 + 0x3d0);
  (((TVector<double> *)((longlong)local_res8 + 0x310))->field0_0x0)._s_0.X = 0.0;
  piVar7 = (int *)((longlong)local_res8 + 0x3d4);
  *(undefined8 *)((longlong)local_res8 + 0x318) = 0;
  pfVar8 = (float *)((longlong)local_res8 + 0x3d8);
  *(undefined8 *)((longlong)local_res8 + 800) = 0;
  pfVar9 = (float *)((longlong)local_res8 + 0x3e0);
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
  *&((__m128d *)((longlong)local_res8 + 0x3b0))->m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x3c8) = 0;
  *piVar6 = 0;
  *piVar7 = 0;
  *pfVar9 = 0.0;
  *(float *)((longlong)local_res8 + 0x3e4) = 0.0;
  *(bool *)((longlong)local_res8 + 0x3fc) = false;
  *(EDataflowDebugDrawRenderType *)((longlong)local_res8 + 0x404) = Wireframe;
  *(int *)((longlong)local_res8 + 0x410) = 0;
  *pfVar8 = 1.0;
  *(bool *)((longlong)local_res8 + 0x3dc) = true;
  *(float *)((longlong)local_res8 + 1000) = 0.1;
  *(float *)((longlong)local_res8 + 0x3ec) = 0.5;
  *(float *)((longlong)local_res8 + 0x3f0) = 2.0;
  *(int *)((longlong)local_res8 + 0x3f4) = 4;
  *(float *)((longlong)local_res8 + 0x3f8) = 20.0;
  *(float *)((longlong)local_res8 + 0x400) = 50.0;
  *(float *)((longlong)local_res8 + 0x408) = 2.2;
  *(undefined2 *)((longlong)local_res8 + 0x40c) = 0x101;
  *(float *)((longlong)local_res8 + 0x414) = 1.0;
  *(FName *)((longlong)local_res8 + 0x418) = FDataflowTransformSelection::TransformGroupName;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *(undefined8 *)((longlong)local_res8 + 0x430) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x438) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x43c) = 0x80;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
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
  local_78.Reference = pTVar5;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar7;
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
  local_78.Reference = pfVar9;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3e4);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 1000);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3ec);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3f0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3f4);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3f8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x400);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x248);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
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
  local_58.Reference = (void *)((longlong)this_00 + 0x418);
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
  return (FPlaneCutterDataflowNode_v2 *)this_00;
}

// FPlaneCutterDataflowNode_v2 @ 14e9279c0

FPlaneCutterDataflowNode_v2 * __thiscall
FPlaneCutterDataflowNode_v2::FPlaneCutterDataflowNode_v2(FPlaneCutterDataflowNode_v2 *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FPlaneCutterDataflowNode_v2__6B_;
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
  (this->CutPlanes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CutPlanes).ArrayNum = 0;
  (this->CutPlanes).ArrayMax = 0;
  this->NumPlanes = 0;
  this->RandomSeed = 0;
  this->ChanceToFracture = 1.0;
  this->SplitIslands = true;
  this->Grout = 0.0;
  this->Amplitude = 0.0;
  this->Frequency = 0.1;
  this->Persistence = 0.5;
  this->Lacunarity = 2.0;
  this->OctaveNumber = 4;
  this->PointSpacing = 20.0;
  this->AddSamplesForCollision = false;
  this->CollisionSampleSpacing = 50.0;
  this->RenderType = Wireframe;
  this->PlaneSizeMultiplier = 2.2;
  this->bTranslucent = true;
  this->bRandomizeColors = true;
  this->ColorRandomSeed = 0;
  this->LineWidthMultiplier = 1.0;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->NewGeometryTransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->NewGeometryTransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->NewGeometryTransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->NewGeometryTransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->NewGeometryTransformSelection).field_0x24 = 0x80;
  return this;
}

