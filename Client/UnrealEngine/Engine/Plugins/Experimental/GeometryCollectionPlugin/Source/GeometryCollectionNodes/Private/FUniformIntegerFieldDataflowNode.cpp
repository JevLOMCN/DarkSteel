// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8b32f0

UScriptStruct * __cdecl FUniformIntegerFieldDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformIntegerFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformIntegerFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode,
                         (UObject *)pUVar1,L"UniformIntegerFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FUniformIntegerFieldDataflowNode.OuterSingleton;
}

// GetType @ 14e8b3390

FName __thiscall FUniformIntegerFieldDataflowNode::GetType(FUniformIntegerFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FUniformIntegerFieldDataflowNode");
  return in_RDX;
}

// IsA @ 14e8b34e0

bool __thiscall
FUniformIntegerFieldDataflowNode::IsA(FUniformIntegerFieldDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FUniformIntegerFieldDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8b3548;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8b3548:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8b3566;
      }
    }
  }
  bVar5 = true;
LAB_14e8b3566:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8b35a0

FStructOnScope * __thiscall
FUniformIntegerFieldDataflowNode::NewStructOnScope(FUniformIntegerFieldDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FUniformIntegerFieldDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FUniformIntegerFieldDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode,
                           (UObject *)pUVar2,L"UniformIntegerFieldDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FUniformIntegerFieldDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8b3620

void __thiscall
FUniformIntegerFieldDataflowNode::SerializeInternal
          (FUniformIntegerFieldDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformIntegerFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformIntegerFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode,
                         (UObject *)pUVar1,L"UniformIntegerFieldDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FUniformIntegerFieldDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FUniformIntegerFieldDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8b369d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8b36b0

FName __thiscall
FUniformIntegerFieldDataflowNode::GetDisplayName(FUniformIntegerFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"UniformIntegerField");
  return in_RDX;
}

// GetCategory @ 14e8b36e0

FName __thiscall
FUniformIntegerFieldDataflowNode::GetCategory(FUniformIntegerFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Fields");
  return in_RDX;
}

// GetTags @ 14e8b3710

FString * __thiscall
FUniformIntegerFieldDataflowNode::GetTags
          (FUniformIntegerFieldDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8b3770

UScriptStruct * __thiscall
FUniformIntegerFieldDataflowNode::TypedScriptStruct(FUniformIntegerFieldDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformIntegerFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformIntegerFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode,
                         (UObject *)pUVar1,L"UniformIntegerFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FUniformIntegerFieldDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8b3e60

void __thiscall
FUniformIntegerFieldDataflowNode::Evaluate
          (FUniformIntegerFieldDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  undefined1 *puVar3;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  FDataflowVertexSelection *pFVar5;
  FDataflowInput *pFVar6;
  int *piVar7;
  int local_res8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  FConnectionReference local_48;
  
  pTVar1 = &this->FieldIntResult;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((TArray<int,TSizedDefaultAllocator<32>_> *)puVar3 == pTVar1) ||
      (puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<int,TSizedDefaultAllocator<32>_> *)puVar3 == &this->FieldRemap)) ||
     (puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (int *)puVar3 == &this->NumSamplePositions)) {
    pTVar4 = FDataflowNode::GetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,&this->SamplePositions);
    pFVar5 = FDataflowNode::GetValue<FDataflowVertexSelection>
                       ((FDataflowNode *)this,param_1,&this->SampleIndices);
    local_48.Reference = &this->Magnitude;
    local_48.Index = -1;
    local_48.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
    piVar7 = FDataflowInput::GetValue<int>(pFVar6,param_1,local_48.Reference);
    iVar2 = *piVar7;
    local_48.ContainerReference = (void *)0x0;
    local_48.Index = -1;
    local_48.Reference = &this->SampleIndices;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
    if (pFVar6->Connection == (FDataflowOutput *)0x0) {
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      UniformIntegerFieldProcess(pTVar4,iVar2,&local_68);
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_68,pTVar1);
      local_48.Reference = (void *)0x0;
      local_48.Index = 0;
      local_48._12_4_ = 0;
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_48,
                 &this->FieldRemap);
      if (local_48.Reference != (void *)0x0) {
        FMemory::Free(local_48.Reference);
      }
      local_res8[0] = pTVar4->ArrayNum;
      FDataflowNode::SetValue<int,int>
                ((FDataflowNode *)this,param_1,local_res8,&this->NumSamplePositions);
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
    }
    else {
      local_48.Reference = (void *)0x0;
      local_48.Index = 0;
      local_48._12_4_ = 0;
      if (pTVar4->ArrayNum == *(int *)&pFVar5->field_0x20) {
        local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.ArrayNum = 0;
        local_58.ArrayMax = 0;
        FieldComputeRemap(pTVar4,pFVar5,
                          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)&local_48,
                          &local_58);
        local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.ArrayNum = 0;
        local_68.ArrayMax = 0;
        UniformIntegerFieldProcess
                  ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)&local_48,iVar2,
                   &local_68);
        FDataflowNode::
        SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,&local_68,pTVar1);
        FDataflowNode::
        SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,&local_58,&this->FieldRemap);
        local_res8[0] = pTVar4->ArrayNum;
        FDataflowNode::SetValue<int,int>
                  ((FDataflowNode *)this,param_1,local_res8,&this->NumSamplePositions);
        if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
        if (local_48.Reference != (void *)0x0) {
          FMemory::Free(local_48.Reference);
        }
      }
      else {
        FDataflowNode::
        SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)&local_48,pTVar1);
        if (local_48.Reference != (void *)0x0) {
          FMemory::Free(local_48.Reference);
        }
        local_48.Reference = (void *)0x0;
        local_48.Index = 0;
        local_48._12_4_ = 0;
        FDataflowNode::
        SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)&local_48,&this->FieldRemap);
        if (local_48.Reference != (void *)0x0) {
          FMemory::Free(local_48.Reference);
        }
        local_res8[0] = 0;
        FDataflowNode::SetValue<int,int>
                  ((FDataflowNode *)this,param_1,local_res8,&this->NumSamplePositions);
      }
    }
  }
  return;
}

// FUniformIntegerFieldDataflowNode @ 14e930110

FUniformIntegerFieldDataflowNode * __thiscall
FUniformIntegerFieldDataflowNode::FUniformIntegerFieldDataflowNode
          (FUniformIntegerFieldDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FUniformIntegerFieldDataflowNode__6B_;
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
  this->Magnitude = 0;
  (this->FieldIntResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldIntResult).ArrayNum = 0;
  (this->FieldIntResult).ArrayMax = 0;
  (this->FieldRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemap).ArrayNum = 0;
  (this->FieldRemap).ArrayMax = 0;
  this->NumSamplePositions = 0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Magnitude;
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
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->NumSamplePositions;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  return this;
}

// FUniformIntegerFieldDataflowNode @ 14e930310

FUniformIntegerFieldDataflowNode * __thiscall
FUniformIntegerFieldDataflowNode::FUniformIntegerFieldDataflowNode
          (FUniformIntegerFieldDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FUniformIntegerFieldDataflowNode__6B_;
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
  (this->FieldIntResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldIntResult).ArrayNum = 0;
  (this->FieldIntResult).ArrayMax = 0;
  (this->FieldRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemap).ArrayNum = 0;
  (this->FieldRemap).ArrayMax = 0;
  this->NumSamplePositions = 0;
  return this;
}

