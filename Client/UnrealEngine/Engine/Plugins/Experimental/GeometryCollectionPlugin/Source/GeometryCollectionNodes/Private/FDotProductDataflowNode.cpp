// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e888900

UScriptStruct * __cdecl FDotProductDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDotProductDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDotProductDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDotProductDataflowNode,(UObject *)pUVar1,
                         L"DotProductDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDotProductDataflowNode.OuterSingleton;
}

// GetType @ 14e888f30

FName __thiscall FDotProductDataflowNode::GetType(FDotProductDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDotProductDataflowNode");
  return in_RDX;
}

// IsA @ 14e888f60

bool __thiscall FDotProductDataflowNode::IsA(FDotProductDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDotProductDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e888fc8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e888fc8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e888fe6;
      }
    }
  }
  bVar5 = true;
LAB_14e888fe6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8890a0

FStructOnScope * __thiscall FDotProductDataflowNode::NewStructOnScope(FDotProductDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDotProductDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FDotProductDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDotProductDataflowNode,(UObject *)pUVar2,
                           L"DotProductDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDotProductDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e889120

void __thiscall
FDotProductDataflowNode::SerializeInternal(FDotProductDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDotProductDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDotProductDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDotProductDataflowNode,(UObject *)pUVar1,
                         L"DotProductDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDotProductDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDotProductDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88919d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8891f0

FName __thiscall FDotProductDataflowNode::GetDisplayName(FDotProductDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"DotProduct");
  return in_RDX;
}

// GetCategory @ 14e889260

FName __thiscall FDotProductDataflowNode::GetCategory(FDotProductDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Vector");
  return in_RDX;
}

// GetTags @ 14e889290

FString * __thiscall
FDotProductDataflowNode::GetTags(FDotProductDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e889420

UScriptStruct * __thiscall FDotProductDataflowNode::TypedScriptStruct(FDotProductDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDotProductDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDotProductDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDotProductDataflowNode,(UObject *)pUVar1,
                         L"DotProductDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDotProductDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8896c0

void __thiscall
FDotProductDataflowNode::Evaluate
          (FDotProductDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 *puVar4;
  FDataflowInput *pFVar5;
  TVector<double> *pTVar6;
  float local_res8 [2];
  FConnectionReference local_48 [2];
  
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar4 == &this->ReturnValue) {
    local_48[0].Index = -1;
    local_48[0].ContainerReference = (void *)0x0;
    local_48[0].Reference = &this->VectorA;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
    pTVar6 = FDataflowInput::GetValue<UE::Math::TVector<double>_>(pFVar5,param_1,&this->VectorA);
    dVar2 = (pTVar6->field0_0x0)._s_0.X;
    dVar3 = (pTVar6->field0_0x0)._s_0.Y;
    dVar1 = (pTVar6->field0_0x0)._s_0.Z;
    local_48[0].Index = -1;
    local_48[0].ContainerReference = (void *)0x0;
    local_48[0].Reference = &this->VectorB;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
    pTVar6 = FDataflowInput::GetValue<UE::Math::TVector<double>_>(pFVar5,param_1,&this->VectorB);
    local_res8[0] =
         (float)((pTVar6->field0_0x0)._s_0.Y * dVar3 + (pTVar6->field0_0x0)._s_0.X * dVar2 +
                (pTVar6->field0_0x0)._s_0.Z * dVar1);
    FDataflowNode::SetValue<float_const_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

// FDotProductDataflowNode @ 14e91bda0

FDotProductDataflowNode * __thiscall
FDotProductDataflowNode::FDotProductDataflowNode
          (FDotProductDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FDotProductDataflowNode__6B_;
  local_58.Reference = &this->VectorA;
  (this->VectorB).field0_0x0._s_0.X = 0.0;
  (((TVector<double> *)local_58.Reference)->field0_0x0)._s_0.X = 0.0;
  (this->VectorA).field0_0x0._s_0.Y = 0.0;
  (this->VectorA).field0_0x0._s_0.Z = 0.0;
  (this->VectorB).field0_0x0._s_0.Y = 0.0;
  (this->VectorB).field0_0x0._s_0.Z = 0.0;
  this->ReturnValue = 0.0;
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

