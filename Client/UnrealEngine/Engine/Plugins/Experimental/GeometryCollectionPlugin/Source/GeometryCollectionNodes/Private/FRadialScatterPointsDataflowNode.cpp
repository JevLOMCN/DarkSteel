// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8a45e0

UScriptStruct * __cdecl FRadialScatterPointsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode,
                         (UObject *)pUVar1,L"RadialScatterPointsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode.OuterSingleton;
}

// GetType @ 14e8a46b0

FName __thiscall FRadialScatterPointsDataflowNode::GetType(FRadialScatterPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FRadialScatterPointsDataflowNode");
  return in_RDX;
}

// IsA @ 14e8a4760

bool __thiscall
FRadialScatterPointsDataflowNode::IsA(FRadialScatterPointsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FRadialScatterPointsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8a47c8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8a47c8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8a47e6;
      }
    }
  }
  bVar5 = true;
LAB_14e8a47e6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8a4860

FStructOnScope * __thiscall
FRadialScatterPointsDataflowNode::NewStructOnScope(FRadialScatterPointsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode,
                           (UObject *)pUVar2,L"RadialScatterPointsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8a48e0

void __thiscall
FRadialScatterPointsDataflowNode::SerializeInternal
          (FRadialScatterPointsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode,
                         (UObject *)pUVar1,L"RadialScatterPointsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8a495d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8a4970

FName __thiscall
FRadialScatterPointsDataflowNode::GetDisplayName(FRadialScatterPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"RadialScatterPoints");
  return in_RDX;
}

// GetCategory @ 14e8a49a0

FName __thiscall
FRadialScatterPointsDataflowNode::GetCategory(FRadialScatterPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Point");
  return in_RDX;
}

// GetTags @ 14e8a49d0

FString * __thiscall
FRadialScatterPointsDataflowNode::GetTags
          (FRadialScatterPointsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8a4a00

UScriptStruct * __thiscall
FRadialScatterPointsDataflowNode::TypedScriptStruct(FRadialScatterPointsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode,
                         (UObject *)pUVar1,L"RadialScatterPointsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8a5010

void __thiscall
FRadialScatterPointsDataflowNode::Evaluate
          (FRadialScatterPointsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  int iVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined1 *puVar11;
  FDataflowInput *pFVar12;
  float *pfVar13;
  int *piVar14;
  TVector<double> *pTVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  double extraout_XMM0_Qa;
  double dVar19;
  double dVar20;
  double extraout_XMM0_Qb;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  FRandomStream local_res8;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_128;
  double local_118;
  TVector<double>_u_0 local_110;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  
  puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar11 == &this->Points) {
    local_140._s_0.X = (double)&this->Radius;
    local_140._8_4_ = 0xffffffff;
    local_140._s_0.Z = 0.0;
    pFVar12 = FDataflowNode::FindInput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_140._s_0);
    pfVar13 = FDataflowInput::GetValue<float>(pFVar12,param_1,(float *)local_140._s_0.X);
    local_158._8_4_ = 0xffffffff;
    local_158._s_0.Z = 0.0;
    local_158._s_0.X = (double)&this->RadialSteps;
    pFVar12 = FDataflowNode::FindInput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_158._s_0);
    piVar14 = FDataflowInput::GetValue<int>(pFVar12,param_1,(int *)local_158._s_0.X);
    piVar2 = &this->AngularSteps;
    iVar18 = 0;
    local_158._8_4_ = 0xffffffff;
    local_158._s_0.Z = 0.0;
    dVar6 = (double)(*pfVar13 / (float)*piVar14);
    local_158._0_8_ = piVar2;
    local_e0 = dVar6;
    pFVar12 = FDataflowNode::FindInput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_158._s_0);
    FDataflowInput::GetValue<int>(pFVar12,param_1,(int *)local_158._s_0.X);
    local_158._s_0.X = (double)&this->RandomSeed;
    local_158._8_4_ = 0xffffffff;
    local_158._s_0.Z = 0.0;
    pFVar12 = FDataflowNode::FindInput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_158._s_0);
    pfVar13 = FDataflowInput::GetValue<float>(pFVar12,param_1,(float *)local_158._s_0.X);
    local_res8.InitialSeed = (int)*pfVar13;
    local_158._s_0.X = (double)&this->Normal;
    local_158._8_4_ = 0xffffffff;
    local_158._s_0.Z = 0.0;
    local_res8.Seed = local_res8.InitialSeed;
    pFVar12 = FDataflowNode::FindInput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_158._s_0);
    pTVar15 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar12,param_1,(TVector<double> *)local_158._s_0.X);
    local_140._s_0.X = (pTVar15->field0_0x0)._s_0.X;
    local_140._s_0.Y = (pTVar15->field0_0x0)._s_0.Y;
    local_140._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
    dVar21 = local_140._s_0.Y * local_140._s_0.Y + local_140._s_0.X * local_140._s_0.X +
             local_140._s_0.Z * local_140._s_0.Z;
    if (__real_3e45798ee0000000 < dVar21) {
      dVar21 = __real_3ff0000000000000 / SQRT(dVar21);
      local_140._s_0.X = local_140._s_0.X * dVar21;
      local_140._s_0.Y = local_140._s_0.Y * dVar21;
      local_140._s_0.Z = local_140._s_0.Z * dVar21;
    }
    UE::Math::TVector<double>::FindBestAxisVectors
              ((TVector<double> *)&local_140._s_0,(TVector<double> *)&local_110._s_0,
               (TVector<double> *)&local_158._s_0);
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    dVar21 = dVar6 * __real_3fe0000000000000;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    local_140._8_4_ = 0xffffffff;
    local_140._s_0.Z = 0.0;
    local_140._s_0.X = (double)&this->RadialSteps;
    pFVar12 = FDataflowNode::FindInput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_140._s_0);
    piVar14 = FDataflowInput::GetValue<int>(pFVar12,param_1,(int *)local_140._s_0.X);
    uVar8 = local_110._s_0.Z;
    uVar7 = local_158._s_0.X;
    if (0 < *piVar14) {
      local_f0 = (double)CONCAT44(local_158._12_4_,local_158._8_4_);
      uVar24 = SUB84(local_110._s_0.X,0);
      uVar25 = (undefined4)((ulonglong)local_110._0_8_ >> 0x20);
      local_f8 = local_158._s_0.Z;
      local_e8 = local_110._s_0.Y;
      local_118 = local_110._s_0.X;
      do {
        iVar17 = 0;
        local_158._s_0.X = (double)&this->AngleOffset;
        local_158._8_4_ = 0xffffffff;
        local_158._s_0.Z = 0.0;
        pFVar12 = FDataflowNode::FindInput
                            ((FDataflowNode *)this,(FConnectionReference *)&local_158._s_0);
        FDataflowInput::GetValue<float>(pFVar12,param_1,(float *)local_158._s_0.X);
        dVar10 = local_f0;
        dVar9 = local_f8;
        if (0 < *piVar2) {
          do {
            __libm_sse2_sincos_();
            local_158._8_4_ = 0xffffffff;
            local_158._s_0.Z = 0.0;
            local_158._s_0.X = (double)&this->Center;
            pFVar12 = FDataflowNode::FindInput
                                ((FDataflowNode *)this,(FConnectionReference *)&local_158._s_0);
            pTVar15 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                                (pFVar12,param_1,(TVector<double> *)local_158._s_0.X);
            FRandomStream::GetUnitVector(&local_res8,(TVector<double> *)&local_110._s_0);
            local_res8.Seed = local_res8.Seed * 0xbb38435 + 0x3619636b;
            dVar22 = (double)this->Variability;
            dVar5 = local_e8 * extraout_XMM0_Qb;
            dVar23 = (double)((float)(local_res8.Seed >> 9 | 0x3f800000) - __real_3f800000);
            dVar6 = (pTVar15->field0_0x0)._s_0.X;
            dVar19 = dVar23 * local_110._s_0.X;
            dVar20 = dVar23 * local_110._s_0.Y;
            dVar23 = dVar23 * local_110._s_0.Z;
            dVar3 = (pTVar15->field0_0x0)._s_0.Y;
            dVar4 = (pTVar15->field0_0x0)._s_0.Z;
            if (local_128.ArrayNum == local_128.ArrayMax) {
              local_128.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_128.AllocatorInstance,&local_128.ArrayMax);
            }
            iVar1 = local_128.ArrayNum + 1;
            iVar17 = iVar17 + 1;
            lVar16 = (longlong)local_128.ArrayNum;
            *(double *)(local_128.AllocatorInstance.Data + lVar16 * 0x18) =
                 ((double)CONCAT44(uVar25,uVar24) * extraout_XMM0_Qb +
                 (double)uVar7 * extraout_XMM0_Qa) * dVar21 + dVar6 + dVar19 * dVar22;
            *(double *)(local_128.AllocatorInstance.Data + lVar16 * 0x18 + 8) =
                 (dVar5 + dVar10 * extraout_XMM0_Qa) * dVar21 + dVar3 + dVar20 * dVar22;
            *(double *)(local_128.AllocatorInstance.Data + lVar16 * 0x18 + 0x10) =
                 ((double)uVar8 * extraout_XMM0_Qb + dVar9 * extraout_XMM0_Qa) * dVar21 + dVar4 +
                 dVar23 * dVar22;
            uVar24 = SUB84(local_118,0);
            uVar25 = (undefined4)((ulonglong)local_118 >> 0x20);
            dVar6 = local_e0;
            local_128.ArrayNum = iVar1;
          } while (iVar17 < *piVar2);
        }
        local_140._s_0.X = (double)&this->RadialSteps;
        local_140._8_4_ = 0xffffffff;
        local_140._s_0.Z = 0.0;
        iVar18 = iVar18 + 1;
        dVar21 = dVar21 + dVar6;
        pFVar12 = FDataflowNode::FindInput
                            ((FDataflowNode *)this,(FConnectionReference *)&local_140._s_0);
        piVar14 = FDataflowInput::GetValue<int>(pFVar12,param_1,(int *)local_140._s_0.X);
      } while (iVar18 < *piVar14);
    }
    FDataflowNode::
    SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_128,&this->Points);
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
  }
  return;
}

// FRadialScatterPointsDataflowNode @ 14e928eb0

FRadialScatterPointsDataflowNode * __thiscall
FRadialScatterPointsDataflowNode::FRadialScatterPointsDataflowNode
          (FRadialScatterPointsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FName this_00;
  FDataflowOutput *this_01;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  local_78.Index = -1;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  this->_padding_ = (longlong)&___7FRadialScatterPointsDataflowNode__6B_;
  local_78.Reference = &this->Center;
  (this->Normal).field0_0x0._s_0.X = 0.0;
  (((TVector<double> *)local_78.Reference)->field0_0x0)._s_0.X = 0.0;
  (this->Center).field0_0x0._s_0.Y = 0.0;
  (this->Center).field0_0x0._s_0.Z = 0.0;
  (this->Normal).field0_0x0._s_0.Y = 0.0;
  this->AngleOffset = 0.0;
  (this->Normal).field0_0x0._s_0.Z = 1.0;
  this->Variability = 0.0;
  (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x290))
  ->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x298) = 0;
  local_78.ContainerReference = (void *)0x0;
  this->RandomSeed = -1.0;
  this->Radius = 50.0;
  this->AngularSteps = 5;
  this->RadialSteps = 5;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->Normal;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->Radius;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->AngularSteps;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->RadialSteps;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->AngleOffset;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->Variability;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->RandomSeed;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Reference = (void *)((longlong)this_00 + 0x290);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_78);
  }
  return (FRadialScatterPointsDataflowNode *)this_00;
}

// FRadialScatterPointsDataflowNode @ 14e929110

FRadialScatterPointsDataflowNode * __thiscall
FRadialScatterPointsDataflowNode::FRadialScatterPointsDataflowNode
          (FRadialScatterPointsDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->Radius = 50.0;
  this->AngularSteps = 5;
  this->_padding_ = (longlong)&___7FRadialScatterPointsDataflowNode__6B_;
  (this->Normal).field0_0x0._s_0.Z = 1.0;
  (this->Center).field0_0x0._s_0.X = 0.0;
  (this->Center).field0_0x0._s_0.Y = 0.0;
  (this->Center).field0_0x0._s_0.Z = 0.0;
  (this->Normal).field0_0x0._s_0.X = 0.0;
  (this->Normal).field0_0x0._s_0.Y = 0.0;
  this->RadialSteps = 5;
  this->AngleOffset = 0.0;
  this->Variability = 0.0;
  this->RandomSeed = -1.0;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  return this;
}

