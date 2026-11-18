// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e84bf40

UScriptStruct * __cdecl FMakePlaneDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakePlaneDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakePlaneDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakePlaneDataflowNode,(UObject *)pUVar1,
                         L"MakePlaneDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakePlaneDataflowNode.OuterSingleton;
}

// GetType @ 14e84c250

FName __thiscall FMakePlaneDataflowNode::GetType(FMakePlaneDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakePlaneDataflowNode");
  return in_RDX;
}

// IsA @ 14e84c2c0

bool __thiscall FMakePlaneDataflowNode::IsA(FMakePlaneDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakePlaneDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e84c328;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e84c328:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e84c346;
      }
    }
  }
  bVar5 = true;
LAB_14e84c346:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e84c380

FStructOnScope * __thiscall FMakePlaneDataflowNode::NewStructOnScope(FMakePlaneDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakePlaneDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakePlaneDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakePlaneDataflowNode,(UObject *)pUVar2,
                           L"MakePlaneDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakePlaneDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e84c460

void __thiscall
FMakePlaneDataflowNode::SerializeInternal(FMakePlaneDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakePlaneDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakePlaneDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakePlaneDataflowNode,(UObject *)pUVar1,
                         L"MakePlaneDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMakePlaneDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMakePlaneDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e84c4dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e84c4f0

FName __thiscall FMakePlaneDataflowNode::GetDisplayName(FMakePlaneDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakePlane");
  return in_RDX;
}

// GetCategory @ 14e84c520

FName __thiscall FMakePlaneDataflowNode::GetCategory(FMakePlaneDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Plane");
  return in_RDX;
}

// GetTags @ 14e84c550

FString * __thiscall
FMakePlaneDataflowNode::GetTags(FMakePlaneDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e84c5c0

UScriptStruct * __thiscall FMakePlaneDataflowNode::TypedScriptStruct(FMakePlaneDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakePlaneDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakePlaneDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakePlaneDataflowNode,(UObject *)pUVar1,
                         L"MakePlaneDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakePlaneDataflowNode.OuterSingleton;
}

// Evaluate @ 14e84c720

void __thiscall
FMakePlaneDataflowNode::Evaluate
          (FMakePlaneDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  double dVar1;
  FProperty *pFVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 *puVar7;
  FDataflowInput *pFVar8;
  TVector<double> *pTVar9;
  FDataflowOutput *this_00;
  FTimestamp FVar10;
  FGuid *pFVar11;
  ulong64 uVar12;
  FContextCacheElementUStruct *pFVar13;
  FContextCacheElementUStruct *pFVar14;
  FContextCacheElementUStruct *local_res8;
  FConnectionReference local_b8;
  FConnectionReference local_98;
  TPlane<double> local_78 [2];
  
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TPlane<double> *)puVar7 == &this->Plane) {
    local_98.Reference = &this->BasePoint;
    pFVar14 = (FContextCacheElementUStruct *)0x0;
    local_98.ContainerReference = (void *)0x0;
    local_98.Index = -1;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_98);
    pTVar9 = FDataflowInput::GetValue<UE::Math::TVector<double>_>(pFVar8,param_1,local_98.Reference)
    ;
    dVar3 = (pTVar9->field0_0x0)._s_0.X;
    dVar4 = (pTVar9->field0_0x0)._s_0.Y;
    dVar1 = (pTVar9->field0_0x0)._s_0.Z;
    local_98.Reference = &this->Normal;
    local_98.Index = -1;
    local_98.ContainerReference = (void *)0x0;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_98);
    pTVar9 = FDataflowInput::GetValue<UE::Math::TVector<double>_>(pFVar8,param_1,local_98.Reference)
    ;
    local_b8.Index = -1;
    local_78[0]._padding_ = (longlong)(pTVar9->field0_0x0)._s_0.X;
    local_78[0]._padding_ = (longlong)(pTVar9->field0_0x0)._s_0.Y;
    local_b8.ContainerReference = (void *)0x0;
    local_98.ContainerReference = (void *)(pTVar9->field0_0x0)._s_0.Z;
    local_78[0].W =
         dVar4 * (double)local_78[0]._padding_ + dVar3 * (double)local_78[0]._padding_ +
         dVar1 * (double)local_98.ContainerReference;
    local_b8.Reference = &this->Plane;
    local_78[0]._padding_ = (longlong)local_98.ContainerReference;
    this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_b8);
    if (this_00 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<UE::Math::TPlane<double>_const_&,UE::Math::TPlane<double>_>'::__l7::
      <lambda_1>::operator()(&local_res8);
    }
    else if (this_00->_padding_ != 0) {
      FVar10 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
      uVar6 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
      pFVar11 = FDataflowConnection::GetOwningNodeGuid
                          ((FDataflowConnection *)this_00,(FGuid *)&local_98);
      pFVar2 = (FProperty *)this_00->_padding_;
      uVar12 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res8 = (FContextCacheElementUStruct *)0x0;
      pFVar13 = ::operator_new(0x58);
      if (pFVar13 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
        local_b8.Reference = *(void **)pFVar11;
        local_b8.Index = pFVar11->C;
        local_b8._12_4_ = pFVar11->D;
        pFVar14 = UE::Dataflow::FContextCacheElementUStruct::
                  FContextCacheElementUStruct<UE::Math::TPlane<double>_const_&>
                            (pFVar13,(FGuid *)&local_b8,pFVar2,local_78,uVar6,
                             (FTimestamp)*FVar10.Value);
      }
      pFVar13 = local_res8;
      if (local_res8 != (FContextCacheElementUStruct *)0x0) {
        plVar5 = &local_res8->_padding_;
        local_res8 = pFVar14;
        (**(code **)*plVar5)(pFVar13,1);
        pFVar14 = local_res8;
      }
      local_res8 = pFVar14;
      if (local_res8 == (FContextCacheElementUStruct *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar12,pFVar2,pFVar11,uVar6,(FTimestamp *)FVar10.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar12 & 0xffffffff,&local_res8);
      }
      if (local_res8 != (FContextCacheElementUStruct *)0x0) {
        (**(code **)local_res8->_padding_)(local_res8,1);
      }
    }
  }
  return;
}

// FMakePlaneDataflowNode @ 14e922e80

FMakePlaneDataflowNode * __thiscall
FMakePlaneDataflowNode::FMakePlaneDataflowNode
          (FMakePlaneDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FLinearColor FVar2;
  undefined8 uVar3;
  FDataflowInput *pFVar4;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FMakePlaneDataflowNode__6B_;
  local_58.Reference = &this->BasePoint;
  (((TVector<double> *)local_58.Reference)->field0_0x0)._s_0.X = 0.0;
  (this->BasePoint).field0_0x0._s_0.Y = 0.0;
  (this->BasePoint).field0_0x0._s_0.Z = 0.0;
  uVar3 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->Normal).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->Normal).field0_0x0._s_0.Y = (double)uVar3;
  (this->Normal).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  FVar2 = FLinearColor::Gray;
  (this->DebugDrawRenderSettings).bTranslucent = true;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 1.0;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  this->PlaneSizeMultiplier = 1.0;
  (this->Plane)._padding_ = 0;
  (this->Plane)._padding_ = 0;
  (this->Plane)._padding_ = 0;
  (this->Plane).W = 0.0;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_58,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Normal;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_58,&local_res8);
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Plane;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FMakePlaneDataflowNode @ 14e922fe0

FMakePlaneDataflowNode * __thiscall
FMakePlaneDataflowNode::FMakePlaneDataflowNode(FMakePlaneDataflowNode *this)

{
  FLinearColor FVar1;
  undefined8 uVar2;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FMakePlaneDataflowNode__6B_;
  (this->BasePoint).field0_0x0._s_0.X = 0.0;
  (this->BasePoint).field0_0x0._s_0.Y = 0.0;
  (this->BasePoint).field0_0x0._s_0.Z = 0.0;
  uVar2 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->Normal).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->Normal).field0_0x0._s_0.Y = (double)uVar2;
  (this->Normal).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  FVar1 = FLinearColor::Gray;
  (this->DebugDrawRenderSettings).bTranslucent = true;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 1.0;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->Plane)._padding_ = 0;
  (this->Plane)._padding_ = 0;
  (this->Plane)._padding_ = 0;
  (this->Plane).W = 0.0;
  this->PlaneSizeMultiplier = 1.0;
  return this;
}

