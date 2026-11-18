// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e89c050

UScriptStruct * __cdecl FUniformScatterPointsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode,
                         (UObject *)pUVar1,L"UniformScatterPointsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode.OuterSingleton;
}

// GetType @ 14e89c1b0

FName __thiscall FUniformScatterPointsDataflowNode::GetType(FUniformScatterPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FUniformScatterPointsDataflowNode");
  return in_RDX;
}

// IsA @ 14e89c220

bool __thiscall
FUniformScatterPointsDataflowNode::IsA(FUniformScatterPointsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FUniformScatterPointsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e89c288;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e89c288:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e89c2a6;
      }
    }
  }
  bVar5 = true;
LAB_14e89c2a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e89c2e0

FStructOnScope * __thiscall
FUniformScatterPointsDataflowNode::NewStructOnScope(FUniformScatterPointsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode,
                           (UObject *)pUVar2,L"UniformScatterPointsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e89c360

void __thiscall
FUniformScatterPointsDataflowNode::SerializeInternal
          (FUniformScatterPointsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode,
                         (UObject *)pUVar1,L"UniformScatterPointsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e89c3dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e89c3f0

FName __thiscall
FUniformScatterPointsDataflowNode::GetDisplayName(FUniformScatterPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"UniformScatterPoints");
  return in_RDX;
}

// GetCategory @ 14e89c420

FName __thiscall
FUniformScatterPointsDataflowNode::GetCategory(FUniformScatterPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Point");
  return in_RDX;
}

// GetTags @ 14e89c450

FString * __thiscall
FUniformScatterPointsDataflowNode::GetTags
          (FUniformScatterPointsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e89c480

UScriptStruct * __thiscall
FUniformScatterPointsDataflowNode::TypedScriptStruct(FUniformScatterPointsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode,
                         (UObject *)pUVar1,L"UniformScatterPointsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e89c700

void __thiscall
FUniformScatterPointsDataflowNode::Evaluate
          (FUniformScatterPointsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  TBox<double> *pTVar16;
  FDataflowInput *pFVar17;
  float *pfVar18;
  int *piVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_c8;
  FConnectionReference local_b8 [6];
  
  pTVar1 = &this->Points;
  puVar15 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar15 == pTVar1) {
    pTVar16 = FDataflowNode::GetValue<UE::Math::TBox<double>_>
                        ((FDataflowNode *)this,param_1,&this->BoundingBox);
    if (((pTVar16->Max).field0_0x0._s_0.Y - (pTVar16->Min).field0_0x0._s_0.Y) *
        ((pTVar16->Max).field0_0x0._s_0.X - (pTVar16->Min).field0_0x0._s_0.X) *
        ((pTVar16->Max).field0_0x0._s_0.Z - (pTVar16->Min).field0_0x0._s_0.Z) <= 0.0) {
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_c8,pTVar1);
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
    }
    else {
      local_b8[0].Reference = &this->RandomSeed;
      local_b8[0].Index = -1;
      local_b8[0].ContainerReference = (void *)0x0;
      pFVar17 = FDataflowNode::FindInput((FDataflowNode *)this,local_b8);
      pfVar18 = FDataflowInput::GetValue<float>(pFVar17,param_1,local_b8[0].Reference);
      dVar2 = (pTVar16->Max).field0_0x0._s_0.X;
      dVar3 = (pTVar16->Max).field0_0x0._s_0.Y;
      dVar4 = (pTVar16->Max).field0_0x0._s_0.Z;
      uVar23 = (uint)*pfVar18;
      local_b8[0].Reference = &this->MaxNumberOfPoints;
      local_b8[0].Index = -1;
      local_b8[0].ContainerReference = (void *)0x0;
      dVar5 = (pTVar16->Min).field0_0x0._s_0.X;
      dVar6 = (pTVar16->Min).field0_0x0._s_0.Y;
      dVar7 = (pTVar16->Min).field0_0x0._s_0.Z;
      pFVar17 = FDataflowNode::FindInput((FDataflowNode *)this,local_b8);
      piVar19 = FDataflowInput::GetValue<int>(pFVar17,param_1,local_b8[0].Reference);
      iVar12 = *piVar19;
      local_b8[0].Reference = &this->MinNumberOfPoints;
      local_b8[0].Index = -1;
      local_b8[0].ContainerReference = (void *)0x0;
      pFVar17 = FDataflowNode::FindInput((FDataflowNode *)this,local_b8);
      piVar19 = FDataflowInput::GetValue<int>(pFVar17,param_1,local_b8[0].Reference);
      fVar11 = __real_3f800000;
      iVar21 = (iVar12 - *piVar19) + 1;
      iVar12 = 0;
      if (0 < iVar21) {
        uVar23 = uVar23 * 0xbb38435 + 0x3619636b;
        iVar12 = (int)(((float)(uVar23 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar21);
      }
      uVar13 = iVar12 + *piVar19;
      uVar22 = (ulonglong)uVar13;
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if (0 < (int)uVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar13,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
        do {
          uVar13 = uVar23 * 0xbb38435 + 0x3619636b;
          uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
          uVar23 = uVar14 * 0xbb38435 + 0x3619636b;
          dVar8 = (pTVar16->Min).field0_0x0._s_0.X;
          dVar9 = (pTVar16->Min).field0_0x0._s_0.Y;
          dVar10 = (pTVar16->Min).field0_0x0._s_0.Z;
          if (local_c8.ArrayNum == local_c8.ArrayMax) {
            local_c8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
          }
          iVar12 = local_c8.ArrayNum + 1;
          lVar20 = (longlong)local_c8.ArrayNum;
          *(double *)(local_c8.AllocatorInstance.Data + lVar20 * 0x18) =
               (double)((float)(uVar23 >> 9 | 0x3f800000) - fVar11) * (dVar2 - dVar5) + dVar8;
          *(double *)(local_c8.AllocatorInstance.Data + lVar20 * 0x18 + 8) =
               (double)((float)(uVar14 >> 9 | 0x3f800000) - fVar11) * (dVar3 - dVar6) + dVar9;
          *(double *)(local_c8.AllocatorInstance.Data + lVar20 * 0x18 + 0x10) =
               (double)((float)(uVar13 >> 9 | 0x3f800000) - fVar11) * (dVar4 - dVar7) + dVar10;
          uVar22 = uVar22 - 1;
          local_c8.ArrayNum = iVar12;
        } while (uVar22 != 0);
      }
      FDataflowNode::
      SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_c8,pTVar1);
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// FUniformScatterPointsDataflowNode @ 14e930960

FUniformScatterPointsDataflowNode * __thiscall
FUniformScatterPointsDataflowNode::FUniformScatterPointsDataflowNode
          (FUniformScatterPointsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FUniformScatterPointsDataflowNode__6B_;
  local_68.Reference = &this->BoundingBox;
  this->MinNumberOfPoints = 0x14;
  this->MaxNumberOfPoints = 0x14;
  this->RandomSeed = -1.0;
  (((TBox<double> *)local_68.Reference)->Min).field0_0x0._s_0.X = 0.0;
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
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MinNumberOfPoints;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MaxNumberOfPoints;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->RandomSeed;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Points;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  return this;
}

// FUniformScatterPointsDataflowNode @ 14e930af0

FUniformScatterPointsDataflowNode * __thiscall
FUniformScatterPointsDataflowNode::FUniformScatterPointsDataflowNode
          (FUniformScatterPointsDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->MinNumberOfPoints = 0x14;
  this->_padding_ = (longlong)&___7FUniformScatterPointsDataflowNode__6B_;
  this->MaxNumberOfPoints = 0x14;
  this->RandomSeed = -1.0;
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
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  return this;
}

