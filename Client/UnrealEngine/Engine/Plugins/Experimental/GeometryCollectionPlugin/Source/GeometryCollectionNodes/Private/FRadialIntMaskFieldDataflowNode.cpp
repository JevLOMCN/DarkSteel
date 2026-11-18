// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8a21f0

UScriptStruct * __cdecl FRadialIntMaskFieldDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRadialIntMaskFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRadialIntMaskFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode,(UObject *)pUVar1
                         ,L"RadialIntMaskFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRadialIntMaskFieldDataflowNode.OuterSingleton;
}

// GetType @ 14e8a2b90

FName __thiscall FRadialIntMaskFieldDataflowNode::GetType(FRadialIntMaskFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FRadialIntMaskFieldDataflowNode");
  return in_RDX;
}

// IsA @ 14e8a2d00

bool __thiscall
FRadialIntMaskFieldDataflowNode::IsA(FRadialIntMaskFieldDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FRadialIntMaskFieldDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8a2d68;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8a2d68:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8a2d86;
      }
    }
  }
  bVar5 = true;
LAB_14e8a2d86:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8a2dc0

FStructOnScope * __thiscall
FRadialIntMaskFieldDataflowNode::NewStructOnScope(FRadialIntMaskFieldDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FRadialIntMaskFieldDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FRadialIntMaskFieldDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode,
                           (UObject *)pUVar2,L"RadialIntMaskFieldDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FRadialIntMaskFieldDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8a2f00

void __thiscall
FRadialIntMaskFieldDataflowNode::SerializeInternal
          (FRadialIntMaskFieldDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRadialIntMaskFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRadialIntMaskFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode,(UObject *)pUVar1
                         ,L"RadialIntMaskFieldDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FRadialIntMaskFieldDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FRadialIntMaskFieldDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8a2f7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8a2fc0

FName __thiscall
FRadialIntMaskFieldDataflowNode::GetDisplayName(FRadialIntMaskFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"RadialIntMaskField");
  return in_RDX;
}

// GetCategory @ 14e8a3020

FName __thiscall FRadialIntMaskFieldDataflowNode::GetCategory(FRadialIntMaskFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Fields");
  return in_RDX;
}

// GetTags @ 14e8a3090

FString * __thiscall
FRadialIntMaskFieldDataflowNode::GetTags
          (FRadialIntMaskFieldDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8a31d0

UScriptStruct * __thiscall
FRadialIntMaskFieldDataflowNode::TypedScriptStruct(FRadialIntMaskFieldDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRadialIntMaskFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRadialIntMaskFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode,(UObject *)pUVar1
                         ,L"RadialIntMaskFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRadialIntMaskFieldDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8a3560

void __thiscall
FRadialIntMaskFieldDataflowNode::Evaluate
          (FRadialIntMaskFieldDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined1 *puVar6;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar7;
  FDataflowVertexSelection *pFVar8;
  TSphere<double> *pTVar9;
  FDataflowInput *pFVar10;
  TVector<double> *pTVar11;
  int *piVar12;
  int local_res8 [2];
  TVector<double>_u_0 local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78 [2];
  
  pTVar1 = &this->FieldIntResult;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((TArray<int,TSizedDefaultAllocator<32>_> *)puVar6 == pTVar1) ||
      (puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<int,TSizedDefaultAllocator<32>_> *)puVar6 == &this->FieldRemap)) ||
     (puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (int *)puVar6 == &this->NumSamplePositions)) {
    pTVar7 = FDataflowNode::GetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,&this->SamplePositions);
    pFVar8 = FDataflowNode::GetValue<FDataflowVertexSelection>
                       ((FDataflowNode *)this,param_1,&this->SampleIndices);
    pTVar9 = FDataflowNode::GetValue<UE::Math::TSphere<double>_>
                       ((FDataflowNode *)this,param_1,&this->Sphere);
    local_e8._s_0.X = (double)&this->Translation;
    local_e8._8_4_ = 0xffffffff;
    local_e8._s_0.Z = 0.0;
    pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_e8._s_0)
    ;
    pTVar11 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar10,param_1,(TVector<double> *)local_e8._s_0.X);
    dVar4 = (pTVar11->field0_0x0)._s_0.X;
    dVar5 = (pTVar11->field0_0x0)._s_0.Y;
    dVar2 = (pTVar11->field0_0x0)._s_0.Z;
    local_e8._s_0.X = (double)&this->InteriorValue;
    local_e8._8_4_ = 0xffffffff;
    local_e8._s_0.Z = 0.0;
    pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_e8._s_0)
    ;
    piVar12 = FDataflowInput::GetValue<int>(pFVar10,param_1,(int *)local_e8._s_0.X);
    iVar3 = *piVar12;
    local_e8._s_0.X = (double)&this->ExteriorValue;
    local_e8._8_4_ = 0xffffffff;
    local_e8._s_0.Z = 0.0;
    pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_e8._s_0)
    ;
    piVar12 = FDataflowInput::GetValue<int>(pFVar10,param_1,(int *)local_e8._s_0.X);
    local_res8[0] = *piVar12;
    local_e8._s_0.Z = 0.0;
    local_e8._8_4_ = 0xffffffff;
    local_e8._s_0.X = (double)&this->SampleIndices;
    pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_e8._s_0)
    ;
    if (pFVar10->Connection == (FDataflowOutput *)0x0) {
      local_b8._s_0.Z = (pTVar9->Center).field0_0x0._s_0.Z;
      local_b8._s_0.X = (pTVar9->Center).field0_0x0._s_0.X;
      local_b8._s_0.Y = (pTVar9->Center).field0_0x0._s_0.Y;
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      local_e8._s_0.X = dVar4;
      local_e8._s_0.Y = dVar5;
      local_e8._s_0.Z = dVar2;
      RadialIntMaskFieldProcess
                (pTVar7,(float)pTVar9->W,(TVector<double> *)&local_b8._s_0,
                 (TVector<double> *)&local_e8._s_0,iVar3,local_res8[0],this->SetMaskConditionType,
                 &local_c8);
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_c8,pTVar1);
      local_e8._s_0.X = 0.0;
      local_e8._s_0.Y = 0.0;
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)&local_e8._s_0,&this->FieldRemap);
      if ((void *)local_e8._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_e8._s_0.X);
      }
      local_res8[0] = pTVar7->ArrayNum;
      FDataflowNode::SetValue<int,int>
                ((FDataflowNode *)this,param_1,local_res8,&this->NumSamplePositions);
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
    }
    else {
      local_e8._s_0.X = 0.0;
      local_e8._s_0.Y = 0.0;
      if (pTVar7->ArrayNum == *(int *)&pFVar8->field_0x20) {
        local_b8._s_0.X = 0.0;
        local_b8._s_0.Y = 0.0;
        FieldComputeRemap(pTVar7,pFVar8,
                          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                          &local_e8._s_0,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_b8._s_0);
        local_78[0]._16_8_ = (pTVar9->Center).field0_0x0._s_0.Z;
        local_78[0]._0_8_ = (pTVar9->Center).field0_0x0._s_0.X;
        local_78[0]._8_8_ = (pTVar9->Center).field0_0x0._s_0.Y;
        local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.ArrayNum = 0;
        local_c8.ArrayMax = 0;
        local_98._s_0.X = dVar4;
        local_98._s_0.Y = dVar5;
        local_98._s_0.Z = dVar2;
        RadialIntMaskFieldProcess
                  ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)&local_e8._s_0,
                   (float)pTVar9->W,(TVector<double> *)&local_78[0]._s_0,
                   (TVector<double> *)&local_98._s_0,iVar3,local_res8[0],this->SetMaskConditionType,
                   &local_c8);
        FDataflowNode::
        SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,&local_c8,pTVar1);
        FDataflowNode::
        SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)&local_b8._s_0,&this->FieldRemap);
        local_res8[0] = pTVar7->ArrayNum;
        FDataflowNode::SetValue<int,int>
                  ((FDataflowNode *)this,param_1,local_res8,&this->NumSamplePositions);
        if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.AllocatorInstance.Data);
        }
        if ((void *)local_b8._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_b8._s_0.X);
        }
        if ((void *)local_e8._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_e8._s_0.X);
        }
      }
      else {
        FDataflowNode::
        SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)&local_e8._s_0,pTVar1);
        if ((void *)local_e8._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_e8._s_0.X);
        }
        local_e8._s_0.X = 0.0;
        local_e8._s_0.Y = 0.0;
        FDataflowNode::
        SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)&local_e8._s_0,&this->FieldRemap);
        if ((void *)local_e8._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_e8._s_0.X);
        }
        local_res8[0] = 0;
        FDataflowNode::SetValue<int,int>
                  ((FDataflowNode *)this,param_1,local_res8,&this->NumSamplePositions);
      }
    }
  }
  return;
}

// FRadialIntMaskFieldDataflowNode @ 14e928b40

FRadialIntMaskFieldDataflowNode * __thiscall
FRadialIntMaskFieldDataflowNode::FRadialIntMaskFieldDataflowNode
          (FRadialIntMaskFieldDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  local_68.Reference = &this->SamplePositions;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar1 = &this->SampleIndices;
  local_68.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FRadialIntMaskFieldDataflowNode__6B_;
  (this->SamplePositions).ArrayNum = 0;
  (this->SamplePositions).ArrayMax = 0;
  (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)local_68.Reference)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar2 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->SampleIndices).field_0x18 = 0;
  *(undefined4 *)&(this->SampleIndices).field_0x20 = 0;
  *(undefined4 *)&(this->SampleIndices).field_0x24 = 0x80;
  (this->Sphere).Center.field0_0x0._s_0.X = 0.0;
  (this->Sphere).Center.field0_0x0._s_0.Y = 0.0;
  (this->Sphere).Center.field0_0x0._s_0.Z = 0.0;
  (this->Sphere).W = 0.0;
  (this->Translation).field0_0x0._s_0.X = 0.0;
  (this->Translation).field0_0x0._s_0.Y = 0.0;
  (this->Translation).field0_0x0._s_0.Z = 0.0;
  this->ExteriorValue = 0;
  this->SetMaskConditionType = Dataflow_SetMaskConditionType_Always;
  (this->FieldIntResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldIntResult).ArrayNum = 0;
  (this->FieldIntResult).ArrayMax = 0;
  (this->FieldRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemap).ArrayNum = 0;
  (this->FieldRemap).ArrayMax = 0;
  this->NumSamplePositions = 0;
  this->InteriorValue = 1;
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
  local_68.Reference = &this->Sphere;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Translation;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->InteriorValue;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->ExteriorValue;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->FieldIntResult;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  local_48.Reference = &this->FieldRemap;
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

// FRadialIntMaskFieldDataflowNode @ 14e928df0

FRadialIntMaskFieldDataflowNode * __thiscall
FRadialIntMaskFieldDataflowNode::FRadialIntMaskFieldDataflowNode
          (FRadialIntMaskFieldDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FRadialIntMaskFieldDataflowNode__6B_;
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
  (this->Sphere).Center.field0_0x0._s_0.X = 0.0;
  (this->Sphere).Center.field0_0x0._s_0.Y = 0.0;
  (this->Sphere).Center.field0_0x0._s_0.Z = 0.0;
  (this->Sphere).W = 0.0;
  (this->Translation).field0_0x0._s_0.X = 0.0;
  (this->Translation).field0_0x0._s_0.Y = 0.0;
  (this->Translation).field0_0x0._s_0.Z = 0.0;
  this->InteriorValue = 1;
  this->ExteriorValue = 0;
  this->SetMaskConditionType = Dataflow_SetMaskConditionType_Always;
  (this->FieldIntResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldIntResult).ArrayNum = 0;
  (this->FieldIntResult).ArrayMax = 0;
  (this->FieldRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemap).ArrayNum = 0;
  (this->FieldRemap).ArrayMax = 0;
  this->NumSamplePositions = 0;
  return this;
}

