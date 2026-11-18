// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e88ab80

UScriptStruct * __cdecl FCrossProductDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCrossProductDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCrossProductDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCrossProductDataflowNode,(UObject *)pUVar1,
                         L"CrossProductDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCrossProductDataflowNode.OuterSingleton;
}

// GetType @ 14e88abd0

FName __thiscall FCrossProductDataflowNode::GetType(FCrossProductDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCrossProductDataflowNode");
  return in_RDX;
}

// IsA @ 14e88ac10

bool __thiscall FCrossProductDataflowNode::IsA(FCrossProductDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCrossProductDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e88ac78;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e88ac78:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e88ac96;
      }
    }
  }
  bVar5 = true;
LAB_14e88ac96:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e88acd0

FStructOnScope * __thiscall
FCrossProductDataflowNode::NewStructOnScope(FCrossProductDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCrossProductDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCrossProductDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCrossProductDataflowNode,(UObject *)pUVar2,
                           L"CrossProductDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCrossProductDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e88ad50

void __thiscall
FCrossProductDataflowNode::SerializeInternal(FCrossProductDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCrossProductDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCrossProductDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCrossProductDataflowNode,(UObject *)pUVar1,
                         L"CrossProductDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FCrossProductDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FCrossProductDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88adcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e88ade0

FName __thiscall FCrossProductDataflowNode::GetDisplayName(FCrossProductDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CrossProduct");
  return in_RDX;
}

// GetCategory @ 14e88ae10

FName __thiscall FCrossProductDataflowNode::GetCategory(FCrossProductDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Vector");
  return in_RDX;
}

// GetTags @ 14e88af50

FString * __thiscall
FCrossProductDataflowNode::GetTags(FCrossProductDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e88af80

UScriptStruct * __thiscall
FCrossProductDataflowNode::TypedScriptStruct(FCrossProductDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCrossProductDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCrossProductDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCrossProductDataflowNode,(UObject *)pUVar1,
                         L"CrossProductDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCrossProductDataflowNode.OuterSingleton;
}

// Evaluate @ 14e88b2e0

void __thiscall
FCrossProductDataflowNode::Evaluate
          (FCrossProductDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 *puVar7;
  FDataflowInput *pFVar8;
  TVector<double> *pTVar9;
  TVector<double>_u_0 local_48 [2];
  
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TVector<double> *)puVar7 == &this->ReturnValue) {
    local_48[0]._8_4_ = 0xffffffff;
    local_48[0]._s_0.Z = 0.0;
    local_48[0]._0_8_ = &this->VectorA;
    pFVar8 = FDataflowNode::FindInput
                       ((FDataflowNode *)this,(FConnectionReference *)&local_48[0]._s_0);
    pTVar9 = FDataflowInput::GetValue<UE::Math::TVector<double>_>(pFVar8,param_1,&this->VectorA);
    dVar3 = (pTVar9->field0_0x0)._s_0.X;
    dVar4 = (pTVar9->field0_0x0)._s_0.Y;
    dVar1 = (pTVar9->field0_0x0)._s_0.Z;
    local_48[0]._8_4_ = 0xffffffff;
    local_48[0]._s_0.Z = 0.0;
    local_48[0]._0_8_ = &this->VectorB;
    pFVar8 = FDataflowNode::FindInput
                       ((FDataflowNode *)this,(FConnectionReference *)&local_48[0]._s_0);
    pTVar9 = FDataflowInput::GetValue<UE::Math::TVector<double>_>(pFVar8,param_1,&this->VectorB);
    dVar5 = (pTVar9->field0_0x0)._s_0.X;
    dVar6 = (pTVar9->field0_0x0)._s_0.Y;
    dVar2 = (pTVar9->field0_0x0)._s_0.Z;
    local_48[0]._0_8_ = dVar2 * dVar4 - dVar1 * dVar6;
    local_48[0]._8_8_ = dVar1 * dVar5 - dVar2 * dVar3;
    local_48[0]._16_8_ = dVar3 * dVar6 - dVar4 * dVar5;
    FDataflowNode::SetValue<UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_>
              ((FDataflowNode *)this,param_1,(TVector<double> *)&local_48[0]._s_0,&this->ReturnValue
              );
  }
  return;
}

// FCrossProductDataflowNode @ 14e91afd0

FCrossProductDataflowNode * __thiscall
FCrossProductDataflowNode::FCrossProductDataflowNode
          (FCrossProductDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
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
  this->_padding_ = (longlong)&___7FCrossProductDataflowNode__6B_;
  local_58.Reference = &this->VectorA;
  (this->VectorB).field0_0x0._s_0.X = 0.0;
  (((TVector<double> *)local_58.Reference)->field0_0x0)._s_0.X = 0.0;
  (this->VectorA).field0_0x0._s_0.Y = 0.0;
  (this->VectorA).field0_0x0._s_0.Z = 0.0;
  (this->VectorB).field0_0x0._s_0.Y = 0.0;
  (this->VectorB).field0_0x0._s_0.Z = 0.0;
  (this->ReturnValue).field0_0x0._s_0.X = 0.0;
  (this->ReturnValue).field0_0x0._s_0.Y = 0.0;
  (this->ReturnValue).field0_0x0._s_0.Z = 0.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->VectorB;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->ReturnValue;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FCrossProductDataflowNode @ 14e91b0f0

FCrossProductDataflowNode * __thiscall
FCrossProductDataflowNode::FCrossProductDataflowNode(FCrossProductDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCrossProductDataflowNode__6B_;
  (this->VectorA).field0_0x0._s_0.X = 0.0;
  (this->VectorA).field0_0x0._s_0.Y = 0.0;
  (this->VectorA).field0_0x0._s_0.Z = 0.0;
  (this->VectorB).field0_0x0._s_0.X = 0.0;
  (this->VectorB).field0_0x0._s_0.Y = 0.0;
  (this->VectorB).field0_0x0._s_0.Z = 0.0;
  (this->ReturnValue).field0_0x0._s_0.X = 0.0;
  (this->ReturnValue).field0_0x0._s_0.Y = 0.0;
  (this->ReturnValue).field0_0x0._s_0.Z = 0.0;
  return this;
}

