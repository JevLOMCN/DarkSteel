// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e88f7a0

UScriptStruct * __cdecl FDistanceDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDistanceDataflowNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDistanceDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDistanceDataflowNode,(UObject *)pUVar1,
                         L"DistanceDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDistanceDataflowNode.OuterSingleton;
}

// GetType @ 14e88f890

FName __thiscall FDistanceDataflowNode::GetType(FDistanceDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDistanceDataflowNode");
  return in_RDX;
}

// IsA @ 14e88f8c0

bool __thiscall FDistanceDataflowNode::IsA(FDistanceDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDistanceDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e88f928;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e88f928:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e88f946;
      }
    }
  }
  bVar5 = true;
LAB_14e88f946:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e88f980

FStructOnScope * __thiscall FDistanceDataflowNode::NewStructOnScope(FDistanceDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDistanceDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FDistanceDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDistanceDataflowNode,(UObject *)pUVar2,
                           L"DistanceDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDistanceDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e88fa40

void __thiscall
FDistanceDataflowNode::SerializeInternal(FDistanceDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDistanceDataflowNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDistanceDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDistanceDataflowNode,(UObject *)pUVar1,
                         L"DistanceDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDistanceDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDistanceDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88fabd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e88fad0

FName __thiscall FDistanceDataflowNode::GetDisplayName(FDistanceDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Distance");
  return in_RDX;
}

// GetCategory @ 14e88fb00

FName __thiscall FDistanceDataflowNode::GetCategory(FDistanceDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Points");
  return in_RDX;
}

// GetTags @ 14e88fb30

FString * __thiscall
FDistanceDataflowNode::GetTags(FDistanceDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e88fb60

UScriptStruct * __thiscall FDistanceDataflowNode::TypedScriptStruct(FDistanceDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDistanceDataflowNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDistanceDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDistanceDataflowNode,(UObject *)pUVar1,
                         L"DistanceDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDistanceDataflowNode.OuterSingleton;
}

// Evaluate @ 14e88fbe0

void __thiscall
FDistanceDataflowNode::Evaluate
          (FDistanceDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *pFVar2;
  TVector<double> *pTVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float local_res8 [2];
  FConnectionReference local_48 [2];
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar1 == &this->ReturnValue) {
    local_48[0].Index = -1;
    local_48[0].ContainerReference = (void *)0x0;
    local_48[0].Reference = &this->PointA;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
    pTVar3 = FDataflowInput::GetValue<UE::Math::TVector<double>_>(pFVar2,param_1,&this->PointA);
    dVar4 = (pTVar3->field0_0x0)._s_0.X;
    dVar6 = (pTVar3->field0_0x0)._s_0.Y;
    dVar5 = (pTVar3->field0_0x0)._s_0.Z;
    local_48[0].Index = -1;
    local_48[0].ContainerReference = (void *)0x0;
    local_48[0].Reference = &this->PointB;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,local_48);
    pTVar3 = FDataflowInput::GetValue<UE::Math::TVector<double>_>(pFVar2,param_1,&this->PointB);
    dVar5 = (pTVar3->field0_0x0)._s_0.Z - dVar5;
    dVar4 = (pTVar3->field0_0x0)._s_0.X - dVar4;
    dVar6 = (pTVar3->field0_0x0)._s_0.Y - dVar6;
    local_res8[0] = (float)SQRT(dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5);
    FDataflowNode::SetValue<float_const_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

// FDistanceDataflowNode @ 14e91bb30

FDistanceDataflowNode * __thiscall
FDistanceDataflowNode::FDistanceDataflowNode
          (FDistanceDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FDistanceDataflowNode__6B_;
  local_58.Reference = &this->PointA;
  (this->PointB).field0_0x0._s_0.X = 0.0;
  (((TVector<double> *)local_58.Reference)->field0_0x0)._s_0.X = 0.0;
  (this->PointA).field0_0x0._s_0.Y = 0.0;
  (this->PointA).field0_0x0._s_0.Z = 0.0;
  (this->PointB).field0_0x0._s_0.Y = 0.0;
  (this->PointB).field0_0x0._s_0.Z = 0.0;
  this->ReturnValue = 0.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->PointB;
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

