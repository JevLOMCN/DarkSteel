// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e88c730

UScriptStruct * __cdecl FNormalizeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNormalizeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FNormalizeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNormalizeDataflowNode,(UObject *)pUVar1,
                         L"NormalizeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FNormalizeDataflowNode.OuterSingleton;
}

// GetType @ 14e88c860

FName __thiscall FNormalizeDataflowNode::GetType(FNormalizeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FNormalizeDataflowNode");
  return in_RDX;
}

// IsA @ 14e88c890

bool __thiscall FNormalizeDataflowNode::IsA(FNormalizeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FNormalizeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e88c8f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e88c8f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e88c916;
      }
    }
  }
  bVar5 = true;
LAB_14e88c916:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e88c950

FStructOnScope * __thiscall FNormalizeDataflowNode::NewStructOnScope(FNormalizeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FNormalizeDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FNormalizeDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNormalizeDataflowNode,(UObject *)pUVar2,
                           L"NormalizeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FNormalizeDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e88c9d0

void __thiscall
FNormalizeDataflowNode::SerializeInternal(FNormalizeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNormalizeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FNormalizeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNormalizeDataflowNode,(UObject *)pUVar1,
                         L"NormalizeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FNormalizeDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FNormalizeDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88ca4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e88ca60

FName __thiscall FNormalizeDataflowNode::GetDisplayName(FNormalizeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Normalize");
  return in_RDX;
}

// GetCategory @ 14e88ca90

FName __thiscall FNormalizeDataflowNode::GetCategory(FNormalizeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Vector");
  return in_RDX;
}

// GetTags @ 14e88cac0

FString * __thiscall
FNormalizeDataflowNode::GetTags(FNormalizeDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e88caf0

UScriptStruct * __thiscall FNormalizeDataflowNode::TypedScriptStruct(FNormalizeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNormalizeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FNormalizeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNormalizeDataflowNode,(UObject *)pUVar1,
                         L"NormalizeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FNormalizeDataflowNode.OuterSingleton;
}

// Evaluate @ 14e88cdf0

void __thiscall
FNormalizeDataflowNode::Evaluate
          (FNormalizeDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 *puVar5;
  FDataflowInput *pFVar6;
  TVector<double> *pTVar7;
  double dVar8;
  TVector<double>_u_0 local_48 [2];
  
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TVector<double> *)puVar5 == &this->ReturnValue) {
    local_48[0]._8_4_ = 0xffffffff;
    local_48[0]._s_0.Z = 0.0;
    local_48[0]._0_8_ = &this->VectorA;
    pFVar6 = FDataflowNode::FindInput
                       ((FDataflowNode *)this,(FConnectionReference *)&local_48[0]._s_0);
    pTVar7 = FDataflowInput::GetValue<UE::Math::TVector<double>_>(pFVar6,param_1,&this->VectorA);
    pfVar1 = &this->Tolerance;
    dVar3 = (pTVar7->field0_0x0)._s_0.X;
    dVar4 = (pTVar7->field0_0x0)._s_0.Y;
    dVar2 = (pTVar7->field0_0x0)._s_0.Z;
    local_48[0]._8_4_ = 0xffffffff;
    local_48[0]._s_0.Z = 0.0;
    local_48[0]._0_8_ = pfVar1;
    pFVar6 = FDataflowNode::FindInput
                       ((FDataflowNode *)this,(FConnectionReference *)&local_48[0]._s_0);
    FDataflowInput::GetValue<float>(pFVar6,param_1,pfVar1);
    dVar8 = dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2;
    local_48[0]._0_8_ = dVar3;
    local_48[0]._8_8_ = dVar4;
    local_48[0]._16_8_ = dVar2;
    if (dVar8 != __real_3ff0000000000000) {
      if ((double)*pfVar1 <= dVar8) {
        dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
        local_48[0]._0_8_ = dVar3 * dVar8;
        local_48[0]._8_8_ = dVar4 * dVar8;
        local_48[0]._16_8_ = dVar2 * dVar8;
      }
      else {
        local_48[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_48[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_48[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    FDataflowNode::SetValue<UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_>
              ((FDataflowNode *)this,param_1,(TVector<double> *)&local_48[0]._s_0,&this->ReturnValue
              );
  }
  return;
}

// FNormalizeDataflowNode @ 14e926d50

FNormalizeDataflowNode * __thiscall
FNormalizeDataflowNode::FNormalizeDataflowNode
          (FNormalizeDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FNormalizeDataflowNode__6B_;
  local_58.Reference = &this->VectorA;
  this->Tolerance = 0.0001;
  (((TVector<double> *)local_58.Reference)->field0_0x0)._s_0.X = 0.0;
  (this->VectorA).field0_0x0._s_0.Y = 0.0;
  (this->VectorA).field0_0x0._s_0.Z = 0.0;
  (this->ReturnValue).field0_0x0._s_0.X = 0.0;
  (this->ReturnValue).field0_0x0._s_0.Y = 0.0;
  (this->ReturnValue).field0_0x0._s_0.Z = 0.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Tolerance;
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

