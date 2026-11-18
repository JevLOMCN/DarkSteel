// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8b5c30

UScriptStruct * __cdecl FWaveScalarFieldDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWaveScalarFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FWaveScalarFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode,(UObject *)pUVar1,
                         L"WaveScalarFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FWaveScalarFieldDataflowNode.OuterSingleton;
}

// GetType @ 14e8b5ee0

FName __thiscall FWaveScalarFieldDataflowNode::GetType(FWaveScalarFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FWaveScalarFieldDataflowNode");
  return in_RDX;
}

// IsA @ 14e8b5f50

bool __thiscall FWaveScalarFieldDataflowNode::IsA(FWaveScalarFieldDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FWaveScalarFieldDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8b5fb8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8b5fb8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8b5fd6;
      }
    }
  }
  bVar5 = true;
LAB_14e8b5fd6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8b6020

FStructOnScope * __thiscall
FWaveScalarFieldDataflowNode::NewStructOnScope(FWaveScalarFieldDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FWaveScalarFieldDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FWaveScalarFieldDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode,(UObject *)pUVar2,
                           L"WaveScalarFieldDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FWaveScalarFieldDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8b60a0

void __thiscall
FWaveScalarFieldDataflowNode::SerializeInternal
          (FWaveScalarFieldDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWaveScalarFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FWaveScalarFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode,(UObject *)pUVar1,
                         L"WaveScalarFieldDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FWaveScalarFieldDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FWaveScalarFieldDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8b611d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8b6130

FName __thiscall FWaveScalarFieldDataflowNode::GetDisplayName(FWaveScalarFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"WaveScalarField");
  return in_RDX;
}

// GetCategory @ 14e8b6160

FName __thiscall FWaveScalarFieldDataflowNode::GetCategory(FWaveScalarFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Fields");
  return in_RDX;
}

// GetTags @ 14e8b61d0

FString * __thiscall
FWaveScalarFieldDataflowNode::GetTags
          (FWaveScalarFieldDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8b6210

UScriptStruct * __thiscall
FWaveScalarFieldDataflowNode::TypedScriptStruct(FWaveScalarFieldDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWaveScalarFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FWaveScalarFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode,(UObject *)pUVar1,
                         L"WaveScalarFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FWaveScalarFieldDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8b6bf0

void __thiscall
FWaveScalarFieldDataflowNode::Evaluate
          (FWaveScalarFieldDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 *puVar11;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar12;
  FDataflowVertexSelection *pFVar13;
  FDataflowInput *pFVar14;
  float *pfVar15;
  TVector<double> *pTVar16;
  int local_res8 [2];
  TVector<double>_u_0 local_128;
  TArray<float,TSizedDefaultAllocator<32>_> local_108;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8 [6];
  
  pTVar1 = &this->FieldFloatResult;
  puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((TArray<float,TSizedDefaultAllocator<32>_> *)puVar11 == pTVar1) ||
      (puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<int,TSizedDefaultAllocator<32>_> *)puVar11 == &this->FieldRemap)) ||
     (puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (int *)puVar11 == &this->NumSamplePositions)) {
    pTVar12 = FDataflowNode::GetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,&this->SamplePositions);
    pFVar13 = FDataflowNode::GetValue<FDataflowVertexSelection>
                        ((FDataflowNode *)this,param_1,&this->SampleIndices);
    local_128._s_0.X = (double)&this->Magnitude;
    local_128._8_4_ = 0xffffffff;
    local_128._s_0.Z = 0.0;
    pFVar14 = FDataflowNode::FindInput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_128._s_0);
    pfVar15 = FDataflowInput::GetValue<float>(pFVar14,param_1,(float *)local_128._s_0.X);
    fVar2 = *pfVar15;
    local_128._s_0.X = (double)&this->Position;
    local_128._8_4_ = 0xffffffff;
    local_128._s_0.Z = 0.0;
    pFVar14 = FDataflowNode::FindInput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_128._s_0);
    pTVar16 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar14,param_1,(TVector<double> *)local_128._s_0.X);
    dVar7 = (pTVar16->field0_0x0)._s_0.X;
    dVar8 = (pTVar16->field0_0x0)._s_0.Y;
    dVar5 = (pTVar16->field0_0x0)._s_0.Z;
    local_128._s_0.X = (double)&this->Translation;
    local_128._8_4_ = 0xffffffff;
    local_128._s_0.Z = 0.0;
    pFVar14 = FDataflowNode::FindInput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_128._s_0);
    pTVar16 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar14,param_1,(TVector<double> *)local_128._s_0.X);
    dVar9 = (pTVar16->field0_0x0)._s_0.X;
    dVar10 = (pTVar16->field0_0x0)._s_0.Y;
    dVar6 = (pTVar16->field0_0x0)._s_0.Z;
    local_128._s_0.X = (double)&this->Wavelength;
    local_128._8_4_ = 0xffffffff;
    local_128._s_0.Z = 0.0;
    pFVar14 = FDataflowNode::FindInput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_128._s_0);
    pfVar15 = FDataflowInput::GetValue<float>(pFVar14,param_1,(float *)local_128._s_0.X);
    fVar3 = *pfVar15;
    local_128._s_0.X = (double)&this->Period;
    local_128._8_4_ = 0xffffffff;
    local_128._s_0.Z = 0.0;
    pFVar14 = FDataflowNode::FindInput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_128._s_0);
    pfVar15 = FDataflowInput::GetValue<float>(pFVar14,param_1,(float *)local_128._s_0.X);
    fVar4 = *pfVar15;
    local_128._8_4_ = 0xffffffff;
    local_128._s_0.Z = 0.0;
    local_128._s_0.X = (double)&this->SampleIndices;
    pFVar14 = FDataflowNode::FindInput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_128._s_0);
    if (pFVar14->Connection == (FDataflowOutput *)0x0) {
      local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.ArrayNum = 0;
      local_108.ArrayMax = 0;
      local_128._s_0.X = dVar9;
      local_128._s_0.Y = dVar10;
      local_128._s_0.Z = dVar6;
      local_f8._s_0.X = dVar7;
      local_f8._s_0.Y = dVar8;
      local_f8._s_0.Z = dVar5;
      WaveScalarFieldProcess
                (pTVar12,fVar2,(TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_128._s_0,
                 fVar3,fVar4,this->FunctionType,this->FalloffType,&local_108);
      FDataflowNode::
      SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_108,pTVar1);
      local_128._s_0.X = 0.0;
      local_128._s_0.Y = 0.0;
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)&local_128._s_0,&this->FieldRemap);
      if ((void *)local_128._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_128._s_0.X);
      }
      local_res8[0] = pTVar12->ArrayNum;
      FDataflowNode::SetValue<int,int>
                ((FDataflowNode *)this,param_1,local_res8,&this->NumSamplePositions);
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
    }
    else {
      local_128._s_0.X = 0.0;
      local_128._s_0.Y = 0.0;
      if (pTVar12->ArrayNum == *(int *)&pFVar13->field_0x20) {
        local_f8._s_0.X = 0.0;
        local_f8._s_0.Y = 0.0;
        FieldComputeRemap(pTVar12,pFVar13,
                          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                          &local_128._s_0,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_f8._s_0)
        ;
        local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.ArrayNum = 0;
        local_108.ArrayMax = 0;
        local_d8._s_0.X = dVar9;
        local_d8._s_0.Y = dVar10;
        local_d8._s_0.Z = dVar6;
        local_b8[0]._0_8_ = dVar7;
        local_b8[0]._8_8_ = dVar8;
        local_b8[0]._16_8_ = dVar5;
        WaveScalarFieldProcess
                  ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)&local_128._s_0,
                   fVar2,(TVector<double> *)&local_b8[0]._s_0,(TVector<double> *)&local_d8._s_0,
                   fVar3,fVar4,this->FunctionType,this->FalloffType,&local_108);
        FDataflowNode::
        SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,&local_108,pTVar1);
        FDataflowNode::
        SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)&local_f8._s_0,&this->FieldRemap);
        local_res8[0] = pTVar12->ArrayNum;
        FDataflowNode::SetValue<int,int>
                  ((FDataflowNode *)this,param_1,local_res8,&this->NumSamplePositions);
        if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
        if ((void *)local_f8._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_f8._s_0.X);
        }
        if ((void *)local_128._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_128._s_0.X);
        }
      }
      else {
        FDataflowNode::
        SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,
                   (TArray<float,TSizedDefaultAllocator<32>_> *)&local_128._s_0,pTVar1);
        if ((void *)local_128._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_128._s_0.X);
        }
        local_128._s_0.X = 0.0;
        local_128._s_0.Y = 0.0;
        FDataflowNode::
        SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)&local_128._s_0,&this->FieldRemap);
        if ((void *)local_128._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_128._s_0.X);
        }
        local_res8[0] = 0;
        FDataflowNode::SetValue<int,int>
                  ((FDataflowNode *)this,param_1,local_res8,&this->NumSamplePositions);
      }
    }
  }
  return;
}

// FWaveScalarFieldDataflowNode @ 14e9328b0

FWaveScalarFieldDataflowNode * __thiscall
FWaveScalarFieldDataflowNode::FWaveScalarFieldDataflowNode
          (FWaveScalarFieldDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FName *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  FName this_00;
  FDataflowOutput *pFVar8;
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
  local_78.ContainerReference = (void *)0x0;
  *(undefined ***)local_res8 = &___7FWaveScalarFieldDataflowNode__6B_;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *(undefined8 *)((longlong)local_res8 + 0x250) = 0;
  pFVar1 = (FName *)((longlong)local_res8 + 600);
  (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)local_78.Reference)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar2 = (TVector<double> *)((longlong)local_res8 + 0x288);
  pTVar3 = (TVector<double> *)((longlong)local_res8 + 0x2a0);
  *pFVar1 = FDataflowVertexSelection::VerticesGroupName;
  pTVar4 = (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x2c8);
  *(undefined8 *)((longlong)local_res8 + 0x270) = 0;
  pfVar5 = (float *)((longlong)local_res8 + 0x280);
  *(undefined4 *)((longlong)local_res8 + 0x278) = 0;
  pfVar6 = (float *)((longlong)local_res8 + 0x2b8);
  *(undefined4 *)((longlong)local_res8 + 0x27c) = 0x80;
  pfVar7 = (float *)((longlong)local_res8 + 700);
  (pTVar2->field0_0x0)._s_0.X = 0.0;
  *(undefined8 *)((longlong)local_res8 + 0x290) = 0;
  *(undefined8 *)((longlong)local_res8 + 0x298) = 0;
  (pTVar3->field0_0x0)._s_0.X = 0.0;
  *(undefined8 *)((longlong)local_res8 + 0x2a8) = 0;
  *(undefined8 *)((longlong)local_res8 + 0x2b0) = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x2d0) = 0;
  (((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x2d8))->AllocatorInstance).
  Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x2e0) = 0;
  *(int *)((longlong)local_res8 + 0x2e8) = 0;
  *pfVar5 = 1.0;
  *pfVar6 = 1000.0;
  *pfVar7 = 1.0;
  *(undefined2 *)((longlong)local_res8 + 0x2c0) = 0x100;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar5;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar3;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar6;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar7;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar4;
  pFVar8 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar8,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x2d8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar8 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar8,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x2e8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar8 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar8,&local_78);
  }
  return (FWaveScalarFieldDataflowNode *)this_00;
}

// FWaveScalarFieldDataflowNode @ 14e932b90

FWaveScalarFieldDataflowNode * __thiscall
FWaveScalarFieldDataflowNode::FWaveScalarFieldDataflowNode(FWaveScalarFieldDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FWaveScalarFieldDataflowNode__6B_;
  (this->SamplePositions).ArrayNum = 0;
  (this->SamplePositions).ArrayMax = 0;
  (this->SamplePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar1 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&(this->SampleIndices).field_0x0 =
       FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->SampleIndices).field_0x4 = uVar1;
  *(undefined8 *)&(this->SampleIndices).field_0x18 = 0;
  *(undefined4 *)&(this->SampleIndices).field_0x20 = 0;
  *(undefined4 *)&(this->SampleIndices).field_0x24 = 0x80;
  this->Magnitude = 1.0;
  (this->Position).field0_0x0._s_0.X = 0.0;
  (this->Position).field0_0x0._s_0.Y = 0.0;
  (this->Position).field0_0x0._s_0.Z = 0.0;
  (this->Translation).field0_0x0._s_0.X = 0.0;
  (this->Translation).field0_0x0._s_0.Y = 0.0;
  (this->Translation).field0_0x0._s_0.Z = 0.0;
  this->Wavelength = 1000.0;
  this->Period = 1.0;
  this->FunctionType = Dataflow_WaveFunctionType_Cosine;
  this->FalloffType = Dataflow_FieldFalloffType_Linear;
  (this->FieldFloatResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldFloatResult).ArrayNum = 0;
  (this->FieldFloatResult).ArrayMax = 0;
  (this->FieldRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemap).ArrayNum = 0;
  (this->FieldRemap).ArrayMax = 0;
  this->NumSamplePositions = 0;
  return this;
}

