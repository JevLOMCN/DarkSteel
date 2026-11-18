// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8b0750

UScriptStruct * __cdecl FNoiseFieldDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNoiseFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FNoiseFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode,(UObject *)pUVar1,
                         L"NoiseFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FNoiseFieldDataflowNode.OuterSingleton;
}

// GetType @ 14e8b07e0

FName __thiscall FNoiseFieldDataflowNode::GetType(FNoiseFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FNoiseFieldDataflowNode");
  return in_RDX;
}

// IsA @ 14e8b0810

bool __thiscall FNoiseFieldDataflowNode::IsA(FNoiseFieldDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FNoiseFieldDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8b0878;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8b0878:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8b0896;
      }
    }
  }
  bVar5 = true;
LAB_14e8b0896:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8b08d0

FStructOnScope * __thiscall FNoiseFieldDataflowNode::NewStructOnScope(FNoiseFieldDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FNoiseFieldDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FNoiseFieldDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode,(UObject *)pUVar2,
                           L"NoiseFieldDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FNoiseFieldDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8b09c0

void __thiscall
FNoiseFieldDataflowNode::SerializeInternal(FNoiseFieldDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNoiseFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FNoiseFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode,(UObject *)pUVar1,
                         L"NoiseFieldDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FNoiseFieldDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FNoiseFieldDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8b0a3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8b0a60

FName __thiscall FNoiseFieldDataflowNode::GetDisplayName(FNoiseFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"NoiseField");
  return in_RDX;
}

// GetCategory @ 14e8b0a90

FName __thiscall FNoiseFieldDataflowNode::GetCategory(FNoiseFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Fields");
  return in_RDX;
}

// GetTags @ 14e8b0ac0

FString * __thiscall
FNoiseFieldDataflowNode::GetTags(FNoiseFieldDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8b0b30

UScriptStruct * __thiscall FNoiseFieldDataflowNode::TypedScriptStruct(FNoiseFieldDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNoiseFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FNoiseFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode,(UObject *)pUVar1,
                         L"NoiseFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FNoiseFieldDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8b0f70

void __thiscall
FNoiseFieldDataflowNode::Evaluate
          (FNoiseFieldDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  float fVar3;
  undefined1 *puVar4;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  FDataflowVertexSelection *pFVar6;
  FDataflowInput *pFVar7;
  float *pfVar8;
  TTransform<double> *pTVar9;
  int local_res8 [2];
  FConnectionReference local_e8;
  TArray<float,TSizedDefaultAllocator<32>_> local_d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_c0;
  TTransform<double> local_a8;
  
  pTVar1 = &this->FieldFloatResult;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((TArray<float,TSizedDefaultAllocator<32>_> *)puVar4 == pTVar1) ||
      (puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<int,TSizedDefaultAllocator<32>_> *)puVar4 == &this->FieldRemap)) ||
     (puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (int *)puVar4 == &this->NumSamplePositions)) {
    pTVar5 = FDataflowNode::GetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,&this->SamplePositions);
    pFVar6 = FDataflowNode::GetValue<FDataflowVertexSelection>
                       ((FDataflowNode *)this,param_1,&this->SampleIndices);
    local_e8.Reference = &this->MinRange;
    local_e8.Index = -1;
    local_e8.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_e8);
    pfVar8 = FDataflowInput::GetValue<float>(pFVar7,param_1,local_e8.Reference);
    fVar2 = *pfVar8;
    local_e8.Reference = &this->MaxRange;
    local_e8.Index = -1;
    local_e8.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_e8);
    pfVar8 = FDataflowInput::GetValue<float>(pFVar7,param_1,local_e8.Reference);
    fVar3 = *pfVar8;
    local_e8.Reference = &this->Transform;
    local_e8.Index = -1;
    local_e8.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_e8);
    pTVar9 = FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                       (pFVar7,param_1,local_e8.Reference);
    local_a8.Rotation.XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
    local_a8.Rotation.XY.m128d_f64[1] = (pTVar9->Rotation).XY.m128d_f64[1];
    local_a8.Rotation.ZW.m128d_f64[0] = (pTVar9->Rotation).ZW.m128d_f64[0];
    local_a8.Rotation.ZW.m128d_f64[1] = (pTVar9->Rotation).ZW.m128d_f64[1];
    local_a8.Translation.XY.m128d_f64[0] = (pTVar9->Translation).XY.m128d_f64[0];
    local_a8.Translation.XY.m128d_f64[1] = (pTVar9->Translation).XY.m128d_f64[1];
    local_a8.Translation.ZW.m128d_f64[0] = (pTVar9->Translation).ZW.m128d_f64[0];
    local_a8.Translation.ZW.m128d_f64[1] = (pTVar9->Translation).ZW.m128d_f64[1];
    local_a8.Scale3D.XY.m128d_f64[0] = (pTVar9->Scale3D).XY.m128d_f64[0];
    local_a8.Scale3D.XY.m128d_f64[1] = (pTVar9->Scale3D).XY.m128d_f64[1];
    local_a8.Scale3D.ZW.m128d_f64[0] = (pTVar9->Scale3D).ZW.m128d_f64[0];
    local_a8.Scale3D.ZW.m128d_f64[1] = (pTVar9->Scale3D).ZW.m128d_f64[1];
    local_e8.Index = -1;
    local_e8.ContainerReference = (void *)0x0;
    local_e8.Reference = &this->SampleIndices;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_e8);
    if (pFVar7->Connection == (FDataflowOutput *)0x0) {
      local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.ArrayNum = 0;
      local_d0.ArrayMax = 0;
      NoiseFieldProcess(pTVar5,fVar2,fVar3,&local_a8,&local_d0);
      FDataflowNode::
      SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_d0,pTVar1);
      local_e8.Reference = (void *)0x0;
      local_e8.Index = 0;
      local_e8._12_4_ = 0;
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_e8,
                 &this->FieldRemap);
      if (local_e8.Reference != (void *)0x0) {
        FMemory::Free(local_e8.Reference);
      }
      local_res8[0] = pTVar5->ArrayNum;
      FDataflowNode::SetValue<int,int>
                ((FDataflowNode *)this,param_1,local_res8,&this->NumSamplePositions);
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
    }
    else {
      local_e8.Reference = (void *)0x0;
      local_e8.Index = 0;
      local_e8._12_4_ = 0;
      if (pTVar5->ArrayNum == *(int *)&pFVar6->field_0x20) {
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0.ArrayNum = 0;
        local_c0.ArrayMax = 0;
        FieldComputeRemap(pTVar5,pFVar6,
                          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)&local_e8,
                          &local_c0);
        local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.ArrayNum = 0;
        local_d0.ArrayMax = 0;
        NoiseFieldProcess((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)&local_e8,
                          fVar2,fVar3,&local_a8,&local_d0);
        FDataflowNode::
        SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,&local_d0,pTVar1);
        FDataflowNode::
        SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,&local_c0,&this->FieldRemap);
        local_res8[0] = pTVar5->ArrayNum;
        FDataflowNode::SetValue<int,int>
                  ((FDataflowNode *)this,param_1,local_res8,&this->NumSamplePositions);
        if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.AllocatorInstance.Data);
        }
        if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.AllocatorInstance.Data);
        }
        if (local_e8.Reference != (void *)0x0) {
          FMemory::Free(local_e8.Reference);
        }
      }
      else {
        FDataflowNode::
        SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,
                   (TArray<float,TSizedDefaultAllocator<32>_> *)&local_e8,pTVar1);
        if (local_e8.Reference != (void *)0x0) {
          FMemory::Free(local_e8.Reference);
        }
        local_e8.Reference = (void *)0x0;
        local_e8.Index = 0;
        local_e8._12_4_ = 0;
        FDataflowNode::
        SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)&local_e8,&this->FieldRemap);
        if (local_e8.Reference != (void *)0x0) {
          FMemory::Free(local_e8.Reference);
        }
        local_res8[0] = 0;
        FDataflowNode::SetValue<int,int>
                  ((FDataflowNode *)this,param_1,local_res8,&this->NumSamplePositions);
      }
    }
  }
  return;
}

// FNoiseFieldDataflowNode @ 14e9265a0

FNoiseFieldDataflowNode * __thiscall
FNoiseFieldDataflowNode::FNoiseFieldDataflowNode
          (FNoiseFieldDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowVertexSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *pFVar3;
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
  local_68.Reference = &this->SamplePositions;
  local_68.ContainerReference = (void *)0x0;
  pFVar1 = &this->SampleIndices;
  *(undefined ***)this = &___7FNoiseFieldDataflowNode__6B_;
  (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)local_68.Reference)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SamplePositions).ArrayNum = 0;
  (this->SamplePositions).ArrayMax = 0;
  uVar2 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->SampleIndices).field_0x18 = 0;
  *(undefined4 *)&(this->SampleIndices).field_0x20 = 0;
  *(undefined4 *)&(this->SampleIndices).field_0x24 = 0x80;
  this->MinRange = 0.0;
  this->MaxRange = 1.0;
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
  (this->FieldFloatResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldFloatResult).ArrayNum = 0;
  (this->FieldFloatResult).ArrayMax = 0;
  (this->FieldRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemap).ArrayNum = 0;
  (this->FieldRemap).ArrayMax = 0;
  this->NumSamplePositions = 0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MinRange;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MaxRange;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Transform;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->FieldFloatResult;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->FieldRemap;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  local_48.Reference = &this->NumSamplePositions;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  return this;
}

// FNoiseFieldDataflowNode @ 14e926850

FNoiseFieldDataflowNode * __thiscall
FNoiseFieldDataflowNode::FNoiseFieldDataflowNode(FNoiseFieldDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  *(undefined ***)this = &___7FNoiseFieldDataflowNode__6B_;
  (this->SamplePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SamplePositions).ArrayNum = 0;
  (this->SamplePositions).ArrayMax = 0;
  uVar1 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&(this->SampleIndices).field_0x0 =
       FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->SampleIndices).field_0x4 = uVar1;
  *(undefined8 *)&(this->SampleIndices).field_0x18 = 0;
  *(undefined4 *)&(this->SampleIndices).field_0x20 = 0;
  *(undefined8 *)&(this->SampleIndices).field_0x24 = 0x80;
  this->MaxRange = 1.0;
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
  (this->FieldFloatResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldFloatResult).ArrayNum = 0;
  (this->FieldFloatResult).ArrayMax = 0;
  (this->FieldRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemap).ArrayNum = 0;
  (this->FieldRemap).ArrayMax = 0;
  this->NumSamplePositions = 0;
  return this;
}

