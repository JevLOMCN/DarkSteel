// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8ab9b0

UScriptStruct * __cdecl FMakeDataflowConvexDecompositionSettingsNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode,
                         (UObject *)pUVar1,L"MakeDataflowConvexDecompositionSettingsNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode.
         OuterSingleton;
}

// GetType @ 14e8ac180

FName __thiscall
FMakeDataflowConvexDecompositionSettingsNode::GetType
          (FMakeDataflowConvexDecompositionSettingsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeDataflowConvexDecompositionSettingsNode");
  return in_RDX;
}

// IsA @ 14e8ac1b0

bool __thiscall
FMakeDataflowConvexDecompositionSettingsNode::IsA
          (FMakeDataflowConvexDecompositionSettingsNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeDataflowConvexDecompositionSettingsNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8ac218;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8ac218:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8ac236;
      }
    }
  }
  bVar5 = true;
LAB_14e8ac236:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8ac2a0

FStructOnScope * __thiscall
FMakeDataflowConvexDecompositionSettingsNode::NewStructOnScope
          (FMakeDataflowConvexDecompositionSettingsNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode.OuterSingleton
           = GetStaticStruct(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode,
                             (UObject *)pUVar2,L"MakeDataflowConvexDecompositionSettingsNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8ac320

void __thiscall
FMakeDataflowConvexDecompositionSettingsNode::SerializeInternal
          (FMakeDataflowConvexDecompositionSettingsNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode,
                         (UObject *)pUVar1,L"MakeDataflowConvexDecompositionSettingsNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8ac39d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8ac3b0

FName __thiscall
FMakeDataflowConvexDecompositionSettingsNode::GetDisplayName
          (FMakeDataflowConvexDecompositionSettingsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeConvexDecompositionSettings");
  return in_RDX;
}

// GetCategory @ 14e8ac3e0

FName __thiscall
FMakeDataflowConvexDecompositionSettingsNode::GetCategory
          (FMakeDataflowConvexDecompositionSettingsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8ac410

FString * __thiscall
FMakeDataflowConvexDecompositionSettingsNode::GetTags
          (FMakeDataflowConvexDecompositionSettingsNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8ac440

UScriptStruct * __thiscall
FMakeDataflowConvexDecompositionSettingsNode::TypedScriptStruct
          (FMakeDataflowConvexDecompositionSettingsNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode,
                         (UObject *)pUVar1,L"MakeDataflowConvexDecompositionSettingsNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode.
         OuterSingleton;
}

// Evaluate @ 14e8ac5b0

void __thiscall
FMakeDataflowConvexDecompositionSettingsNode::Evaluate
          (FMakeDataflowConvexDecompositionSettingsNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uint uVar3;
  undefined1 *puVar4;
  FDataflowInput *pFVar5;
  float *pfVar6;
  int *piVar7;
  bool *pbVar8;
  FDataflowOutput *this_00;
  FTimestamp FVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  FContextCacheElementUStruct *pFVar12;
  FContextCacheElementUStruct *pFVar13;
  FContextCacheElementUStruct *local_res8;
  FConnectionReference local_98;
  FConnectionReference local_78;
  FDataflowConvexDecompositionSettings local_60;
  
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowConvexDecompositionSettings *)puVar4 == &this->DecompositionSettings) {
    local_78.Reference = &this->MinSizeToDecompose;
    pFVar13 = (FContextCacheElementUStruct *)0x0;
    local_78.ContainerReference = (void *)0x0;
    local_78.Index = -1;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
    pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,local_78.Reference);
    local_60.MinSizeToDecompose = *pfVar6;
    local_78.Reference = &this->MaxGeoToHullVolumeRatioToDecompose;
    local_78.Index = -1;
    local_78.ContainerReference = (void *)0x0;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
    pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,local_78.Reference);
    local_60.MaxGeoToHullVolumeRatioToDecompose = *pfVar6;
    local_78.Reference = &this->ErrorTolerance;
    local_78.Index = -1;
    local_78.ContainerReference = (void *)0x0;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
    pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,local_78.Reference);
    local_60.ErrorTolerance = *pfVar6;
    local_78.Reference = &this->MaxHullsPerGeometry;
    local_78.Index = -1;
    local_78.ContainerReference = (void *)0x0;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
    piVar7 = FDataflowInput::GetValue<int>(pFVar5,param_1,local_78.Reference);
    local_60.MaxHullsPerGeometry = *piVar7;
    local_78.Reference = &this->MinThicknessTolerance;
    local_78.Index = -1;
    local_78.ContainerReference = (void *)0x0;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
    pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,local_78.Reference);
    local_60.MinThicknessTolerance = *pfVar6;
    local_78.Reference = &this->NumAdditionalSplits;
    local_78.Index = -1;
    local_78.ContainerReference = (void *)0x0;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
    piVar7 = FDataflowInput::GetValue<int>(pFVar5,param_1,local_78.Reference);
    local_60.NumAdditionalSplits = *piVar7;
    local_78.Reference = &this->bProtectNegativeSpace;
    local_78.Index = -1;
    local_78.ContainerReference = (void *)0x0;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
    pbVar8 = FDataflowInput::GetValue<bool>(pFVar5,param_1,local_78.Reference);
    local_60.bProtectNegativeSpace = *pbVar8;
    local_78.Reference = &this->bOnlyConnectedToHull;
    local_78.Index = -1;
    local_78.ContainerReference = (void *)0x0;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
    pbVar8 = FDataflowInput::GetValue<bool>(pFVar5,param_1,local_78.Reference);
    local_60.bOnlyConnectedToHull = *pbVar8;
    local_78.Reference = &this->NegativeSpaceTolerance;
    local_78.Index = -1;
    local_78.ContainerReference = (void *)0x0;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
    pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,local_78.Reference);
    local_60.NegativeSpaceTolerance = *pfVar6;
    local_78.Reference = &this->NegativeSpaceMinRadius;
    local_78.Index = -1;
    local_78.ContainerReference = (void *)0x0;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
    pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,local_78.Reference);
    local_98.Index = -1;
    local_98.ContainerReference = (void *)0x0;
    local_60.NegativeSpaceMinRadius = *pfVar6;
    local_98.Reference = &this->DecompositionSettings;
    this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_98);
    if (this_00 == (FDataflowOutput *)0x0) {
      `FDataflowNode::
      SetValue<FDataflowConvexDecompositionSettings_&,FDataflowConvexDecompositionSettings>'::__l7::
      <lambda_1>::operator()(&local_res8);
    }
    else if (this_00->_padding_ != 0) {
      FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
      pFVar10 = FDataflowConnection::GetOwningNodeGuid
                          ((FDataflowConnection *)this_00,(FGuid *)&local_78);
      pFVar1 = (FProperty *)this_00->_padding_;
      uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res8 = (FContextCacheElementUStruct *)0x0;
      pFVar12 = ::operator_new(0x58);
      if (pFVar12 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
        local_98.Reference = *(void **)pFVar10;
        local_98.Index = pFVar10->C;
        local_98._12_4_ = pFVar10->D;
        pFVar13 = UE::Dataflow::FContextCacheElementUStruct::
                  FContextCacheElementUStruct<FDataflowConvexDecompositionSettings_&>
                            (pFVar12,(FGuid *)&local_98,pFVar1,&local_60,uVar3,
                             (FTimestamp)*FVar9.Value);
      }
      pFVar12 = local_res8;
      if (local_res8 != (FContextCacheElementUStruct *)0x0) {
        plVar2 = &local_res8->_padding_;
        local_res8 = pFVar13;
        (**(code **)*plVar2)(pFVar12,1);
        pFVar13 = local_res8;
      }
      local_res8 = pFVar13;
      if (local_res8 == (FContextCacheElementUStruct *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar11,pFVar1,pFVar10,uVar3,(FTimestamp *)FVar9.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar11 & 0xffffffff,&local_res8);
      }
      if (local_res8 != (FContextCacheElementUStruct *)0x0) {
        (**(code **)local_res8->_padding_)(local_res8,1);
      }
    }
  }
  return;
}

// FMakeDataflowConvexDecompositionSettingsNode @ 14e9224e0

FMakeDataflowConvexDecompositionSettingsNode * __thiscall
FMakeDataflowConvexDecompositionSettingsNode::FMakeDataflowConvexDecompositionSettingsNode
          (FMakeDataflowConvexDecompositionSettingsNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  byte *pbVar1;
  float *pfVar2;
  float *pfVar3;
  bool *pbVar4;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  bool *pbVar8;
  FName this_00;
  FDataflowInput *pFVar9;
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
  local_78.ContainerReference = (void *)0x0;
  *(undefined ***)local_res8 = &___7FMakeDataflowConvexDecompositionSettingsNode__6B_;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  ((FDataflowConvexDecompositionSettings *)((longlong)local_res8 + 0x26c))->MinSizeToDecompose = 0.0
  ;
  *(float *)((longlong)local_res8 + 0x27c) = 0.0;
  pfVar2 = (float *)((longlong)local_res8 + 0x250);
  pfVar3 = (float *)((longlong)local_res8 + 600);
  *(float *)local_78.Reference = 0.0;
  pbVar4 = (bool *)((longlong)local_res8 + 0x260);
  *pfVar2 = 0.0;
  pfVar5 = (float *)((longlong)local_res8 + 0x24c);
  *pfVar3 = 0.0;
  piVar6 = (int *)((longlong)local_res8 + 0x254);
  *pbVar4 = false;
  piVar7 = (int *)((longlong)local_res8 + 0x25c);
  *(undefined8 *)((longlong)local_res8 + 0x270) = 0x3f800000;
  pbVar8 = (bool *)((longlong)local_res8 + 0x261);
  *(int *)((longlong)local_res8 + 0x278) = -1;
  *(int *)((longlong)local_res8 + 0x280) = 4;
  *(undefined2 *)((longlong)local_res8 + 0x284) = 0x100;
  *(float *)((longlong)local_res8 + 0x288) = 2.0;
  *(float *)((longlong)local_res8 + 0x28c) = 10.0;
  *pfVar5 = 1.0;
  *piVar6 = -1;
  *piVar7 = 4;
  *pbVar8 = true;
  *(float *)((longlong)local_res8 + 0x264) = 2.0;
  *(float *)((longlong)local_res8 + 0x268) = 10.0;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar5;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)local_res8,&local_78,local_res18);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.ContainerReference = (void *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.Reference = pfVar2;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar6;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar3;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar7;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pbVar4;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pbVar8;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x264);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x268);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_58.Reference = (void *)((longlong)this_00 + 0x26c);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_78);
  }
  return (FMakeDataflowConvexDecompositionSettingsNode *)this_00;
}

// FMakeDataflowConvexDecompositionSettingsNode @ 14e9227d0

FMakeDataflowConvexDecompositionSettingsNode * __thiscall
FMakeDataflowConvexDecompositionSettingsNode::FMakeDataflowConvexDecompositionSettingsNode
          (FMakeDataflowConvexDecompositionSettingsNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->MaxGeoToHullVolumeRatioToDecompose = 1.0;
  this->ErrorTolerance = 0.0;
  this->_padding_ = (longlong)&___7FMakeDataflowConvexDecompositionSettingsNode__6B_;
  this->MinSizeToDecompose = 0.0;
  this->MinThicknessTolerance = 0.0;
  (this->DecompositionSettings).MinThicknessTolerance = 0.0;
  this->MaxHullsPerGeometry = -1;
  this->NumAdditionalSplits = 4;
  this->bProtectNegativeSpace = false;
  this->bOnlyConnectedToHull = true;
  this->NegativeSpaceTolerance = 2.0;
  this->NegativeSpaceMinRadius = 10.0;
  (this->DecompositionSettings).MinSizeToDecompose = 0.0;
  (this->DecompositionSettings).MaxGeoToHullVolumeRatioToDecompose = 1.0;
  (this->DecompositionSettings).ErrorTolerance = 0.0;
  (this->DecompositionSettings).MaxHullsPerGeometry = -1;
  (this->DecompositionSettings).NumAdditionalSplits = 4;
  (this->DecompositionSettings).bProtectNegativeSpace = false;
  (this->DecompositionSettings).bOnlyConnectedToHull = true;
  (this->DecompositionSettings).NegativeSpaceTolerance = 2.0;
  (this->DecompositionSettings).NegativeSpaceMinRadius = 10.0;
  return this;
}

