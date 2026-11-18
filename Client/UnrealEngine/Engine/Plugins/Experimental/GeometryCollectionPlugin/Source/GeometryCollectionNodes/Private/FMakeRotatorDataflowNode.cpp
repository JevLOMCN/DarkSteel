// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e837280

UScriptStruct * __cdecl FMakeRotatorDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeRotatorDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeRotatorDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeRotatorDataflowNode,(UObject *)pUVar1,
                         L"MakeRotatorDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeRotatorDataflowNode.OuterSingleton;
}

// GetType @ 14e8373e0

FName __thiscall FMakeRotatorDataflowNode::GetType(FMakeRotatorDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeRotatorDataflowNode");
  return in_RDX;
}

// IsA @ 14e837460

bool __thiscall FMakeRotatorDataflowNode::IsA(FMakeRotatorDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeRotatorDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8374c8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8374c8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8374e6;
      }
    }
  }
  bVar5 = true;
LAB_14e8374e6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e837520

FStructOnScope * __thiscall
FMakeRotatorDataflowNode::NewStructOnScope(FMakeRotatorDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeRotatorDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeRotatorDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeRotatorDataflowNode,(UObject *)pUVar2,
                           L"MakeRotatorDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeRotatorDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8375a0

void __thiscall
FMakeRotatorDataflowNode::SerializeInternal(FMakeRotatorDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeRotatorDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeRotatorDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeRotatorDataflowNode,(UObject *)pUVar1,
                         L"MakeRotatorDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMakeRotatorDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMakeRotatorDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e83761d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e837740

FName __thiscall FMakeRotatorDataflowNode::GetDisplayName(FMakeRotatorDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeRotator");
  return in_RDX;
}

// GetCategory @ 14e837770

FName __thiscall FMakeRotatorDataflowNode::GetCategory(FMakeRotatorDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Transform");
  return in_RDX;
}

// GetTags @ 14e8377a0

FString * __thiscall
FMakeRotatorDataflowNode::GetTags(FMakeRotatorDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8377d0

UScriptStruct * __thiscall
FMakeRotatorDataflowNode::TypedScriptStruct(FMakeRotatorDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeRotatorDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeRotatorDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeRotatorDataflowNode,(UObject *)pUVar1,
                         L"MakeRotatorDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeRotatorDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8379a0

void __thiscall
FMakeRotatorDataflowNode::Evaluate
          (FMakeRotatorDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  FProperty *pFVar3;
  uint uVar4;
  undefined1 *puVar5;
  FDataflowInput *pFVar6;
  float *pfVar7;
  FDataflowOutput *this_00;
  FTimestamp FVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  undefined1 local_res8 [8];
  FConnectionReference local_98;
  FConnectionReference local_80;
  TRotator<double> local_68 [2];
  
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TRotator<double> *)puVar5 == &this->Rotator) {
    local_98.Reference = &this->Pitch;
    local_98.ContainerReference = (void *)0x0;
    local_98.Index = -1;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_98);
    pfVar7 = FDataflowInput::GetValue<float>(pFVar6,param_1,local_98.Reference);
    fVar1 = *pfVar7;
    local_98.Reference = &this->Yaw;
    local_98.Index = -1;
    local_98.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_98);
    pfVar7 = FDataflowInput::GetValue<float>(pFVar6,param_1,local_98.Reference);
    fVar2 = *pfVar7;
    local_98.Reference = &this->Roll;
    local_98.Index = -1;
    local_98.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_98);
    pfVar7 = FDataflowInput::GetValue<float>(pFVar6,param_1,local_98.Reference);
    local_68[0].Pitch = (double)fVar1;
    local_80.Index = -1;
    local_80.ContainerReference = (void *)0x0;
    local_68[0].Yaw = (double)fVar2;
    local_68[0].Roll = (double)*pfVar7;
    local_80.Reference = &this->Rotator;
    this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_80);
    if (this_00 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<UE::Math::TRotator<double>,UE::Math::TRotator<double>_>'::__l7::
      <lambda_1>::operator()(local_res8);
    }
    else if (this_00->_padding_ != 0) {
      FVar8 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
      uVar4 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
      pFVar9 = FDataflowConnection::GetOwningNodeGuid
                         ((FDataflowConnection *)this_00,(FGuid *)&local_98);
      pFVar3 = (FProperty *)this_00->_padding_;
      uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<UE::Math::TRotator<double>_>
                (param_1,(uint)uVar10,pFVar3,local_68,pFVar9,uVar4,(FTimestamp *)FVar8.Value);
    }
  }
  return;
}

// FMakeRotatorDataflowNode @ 14e923760

FMakeRotatorDataflowNode * __thiscall
FMakeRotatorDataflowNode::FMakeRotatorDataflowNode
          (FMakeRotatorDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FMakeRotatorDataflowNode__6B_;
  local_58.Reference = &this->Pitch;
  this->Yaw = 0.0;
  *(float *)local_58.Reference = 0.0;
  this->Roll = 0.0;
  (this->Rotator).Pitch = 0.0;
  (this->Rotator).Yaw = 0.0;
  (this->Rotator).Roll = 0.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Yaw;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Roll;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Rotator;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

