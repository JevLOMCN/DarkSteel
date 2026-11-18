// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e82e9b0

UScriptStruct * __cdecl FMakeQuaternionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeQuaternionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeQuaternionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode,(UObject *)pUVar1,
                         L"MakeQuaternionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeQuaternionDataflowNode.OuterSingleton;
}

// GetType @ 14e82ead0

FName __thiscall FMakeQuaternionDataflowNode::GetType(FMakeQuaternionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeQuaternionDataflowNode");
  return in_RDX;
}

// IsA @ 14e82eb00

bool __thiscall FMakeQuaternionDataflowNode::IsA(FMakeQuaternionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeQuaternionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e82eb68;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e82eb68:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e82eb86;
      }
    }
  }
  bVar5 = true;
LAB_14e82eb86:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e82ecb0

FStructOnScope * __thiscall
FMakeQuaternionDataflowNode::NewStructOnScope(FMakeQuaternionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeQuaternionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeQuaternionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode,(UObject *)pUVar2,
                           L"MakeQuaternionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeQuaternionDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e82edf0

void __thiscall
FMakeQuaternionDataflowNode::SerializeInternal(FMakeQuaternionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeQuaternionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeQuaternionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode,(UObject *)pUVar1,
                         L"MakeQuaternionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMakeQuaternionDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMakeQuaternionDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e82ee6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e82ee80

FName __thiscall FMakeQuaternionDataflowNode::GetDisplayName(FMakeQuaternionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeQuaternion");
  return in_RDX;
}

// GetCategory @ 14e82eeb0

FName __thiscall FMakeQuaternionDataflowNode::GetCategory(FMakeQuaternionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Vector");
  return in_RDX;
}

// GetTags @ 14e82eee0

FString * __thiscall
FMakeQuaternionDataflowNode::GetTags
          (FMakeQuaternionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e82ef10

UScriptStruct * __thiscall
FMakeQuaternionDataflowNode::TypedScriptStruct(FMakeQuaternionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeQuaternionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeQuaternionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode,(UObject *)pUVar1,
                         L"MakeQuaternionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeQuaternionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e82f080

void __thiscall
FMakeQuaternionDataflowNode::Evaluate
          (FMakeQuaternionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 *puVar4;
  FDataflowInput *pFVar5;
  float *pfVar6;
  TQuat<double> local_58 [2];
  
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TQuat<double> *)puVar4 == &this->Quaternion) {
    local_58[0].Z = 0.0;
    local_58[0].Y._0_4_ = 0xffffffff;
    local_58[0].X = (double)&this->W;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_58);
    pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,&this->W);
    fVar1 = *pfVar6;
    local_58[0].Y._0_4_ = 0xffffffff;
    local_58[0].Z = 0.0;
    local_58[0].X = (double)&this->Z;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_58);
    pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,&this->Z);
    fVar2 = *pfVar6;
    local_58[0].Y._0_4_ = 0xffffffff;
    local_58[0].Z = 0.0;
    local_58[0].X = (double)&this->Y;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_58);
    pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,&this->Y);
    fVar3 = *pfVar6;
    local_58[0].Y = (double)CONCAT44(local_58[0].Y._4_4_,0xffffffff);
    local_58[0].Z = 0.0;
    local_58[0].X = (double)&this->X;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_58);
    pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,&this->X);
    local_58[0].X = (double)*pfVar6;
    local_58[0].Y = (double)fVar3;
    local_58[0].Z = (double)fVar2;
    local_58[0].W = (double)fVar1;
    FDataflowNode::SetValue<UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_>
              ((FDataflowNode *)this,param_1,local_58,&this->Quaternion);
  }
  return;
}

// FMakeQuaternionDataflowNode @ 14e923090

FMakeQuaternionDataflowNode * __thiscall
FMakeQuaternionDataflowNode::FMakeQuaternionDataflowNode
          (FMakeQuaternionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
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
  local_68.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FMakeQuaternionDataflowNode__6B_;
  local_68.Reference = &this->X;
  this->Y = 0.0;
  *(float *)local_68.Reference = 0.0;
  this->Z = 0.0;
  this->W = 0.0;
  (this->Quaternion).W = 0.0;
  (this->Quaternion).X = 0.0;
  (this->Quaternion).Y = 0.0;
  (this->Quaternion).Z = 0.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Y;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Z;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->W;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Quaternion;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  return this;
}

