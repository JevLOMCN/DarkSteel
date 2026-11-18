// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8c13f0

UScriptStruct * __cdecl FBooleanOperationDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBooleanOperationDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBooleanOperationDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBooleanOperationDataflowNode,(UObject *)pUVar1,
                         L"BooleanOperationDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBooleanOperationDataflowNode.OuterSingleton;
}

// GetType @ 14e8c1540

FName __thiscall FBooleanOperationDataflowNode::GetType(FBooleanOperationDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBooleanOperationDataflowNode");
  return in_RDX;
}

// IsA @ 14e8c1600

bool __thiscall
FBooleanOperationDataflowNode::IsA(FBooleanOperationDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBooleanOperationDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8c1668;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8c1668:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8c1686;
      }
    }
  }
  bVar5 = true;
LAB_14e8c1686:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8c16c0

FStructOnScope * __thiscall
FBooleanOperationDataflowNode::NewStructOnScope(FBooleanOperationDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBooleanOperationDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBooleanOperationDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBooleanOperationDataflowNode,(UObject *)pUVar2
                           ,L"BooleanOperationDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBooleanOperationDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8c1890

void __thiscall
FBooleanOperationDataflowNode::SerializeInternal
          (FBooleanOperationDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBooleanOperationDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBooleanOperationDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBooleanOperationDataflowNode,(UObject *)pUVar1,
                         L"BooleanOperationDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FBooleanOperationDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FBooleanOperationDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8c190d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8c1980

FName __thiscall FBooleanOperationDataflowNode::GetDisplayName(FBooleanOperationDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BooleanOperation");
  return in_RDX;
}

// GetCategory @ 14e8c1a00

FName __thiscall FBooleanOperationDataflowNode::GetCategory(FBooleanOperationDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Boolean");
  return in_RDX;
}

// GetTags @ 14e8c1a40

FString * __thiscall
FBooleanOperationDataflowNode::GetTags
          (FBooleanOperationDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8c1ab0

UScriptStruct * __thiscall
FBooleanOperationDataflowNode::TypedScriptStruct(FBooleanOperationDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBooleanOperationDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBooleanOperationDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBooleanOperationDataflowNode,(UObject *)pUVar1,
                         L"BooleanOperationDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBooleanOperationDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8c1d40

void __thiscall
FBooleanOperationDataflowNode::Evaluate
          (FBooleanOperationDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  EBooleanOperationEnum EVar1;
  char cVar2;
  undefined1 *puVar3;
  FDataflowInput *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FBooleanOperationDataflowNode *local_res18;
  FConnectionReference local_28;
  
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((bool *)puVar3 != &this->bResult) {
    return;
  }
  EVar1 = this->Operation;
  local_res8[0] = false;
  if (EVar1 == Dataflow_And) {
    local_28.Reference = &this->bBoolA;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pbVar5 = FDataflowInput::GetValue<bool>(pFVar4,param_1,local_28.Reference);
    if (*pbVar5 != false) {
      pbVar5 = FDataflowNode::GetValue<bool>((FDataflowNode *)this,param_1,&this->bBoolB);
      cVar2 = *pbVar5;
joined_r0x00014e8c1ebb:
      if (cVar2 != '\0') goto LAB_14e8c1ebd;
    }
    local_res8[0] = false;
  }
  else {
    if (EVar1 != Dataflow_Or) {
      if (EVar1 == Dataflow_Not) {
        local_28.Reference = &this->bBoolA;
        local_28.Index = -1;
        local_28.ContainerReference = (void *)0x0;
        pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
        pbVar5 = FDataflowInput::GetValue<bool>(pFVar4,param_1,local_28.Reference);
        local_res8[0] = *pbVar5 == false;
      }
      else {
        local_res18 = this;
        `FBooleanOperationDataflowNode::Evaluate'::__l7::<lambda_1>::operator()(&local_res18);
      }
      goto LAB_14e8c1e44;
    }
    local_28.Reference = &this->bBoolA;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pbVar5 = FDataflowInput::GetValue<bool>(pFVar4,param_1,local_28.Reference);
    if (*pbVar5 == false) {
      pbVar5 = FDataflowNode::GetValue<bool>((FDataflowNode *)this,param_1,&this->bBoolB);
      cVar2 = *pbVar5;
      goto joined_r0x00014e8c1ebb;
    }
LAB_14e8c1ebd:
    local_res8[0] = true;
  }
LAB_14e8c1e44:
  FDataflowNode::SetValue<bool_&,bool>((FDataflowNode *)this,param_1,local_res8,&this->bResult);
  return;
}

// FBooleanOperationDataflowNode @ 14e912190

FBooleanOperationDataflowNode * __thiscall
FBooleanOperationDataflowNode::FBooleanOperationDataflowNode
          (FBooleanOperationDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->Operation = Dataflow_And;
  this->_padding_ = (longlong)&___7FBooleanOperationDataflowNode__6B_;
  local_58.Reference = &this->bBoolA;
  this->bBoolB = false;
  *(bool *)local_58.Reference = false;
  this->bResult = false;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->bBoolB;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->bResult;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// operator() @ 15059b480

bool __thiscall `FBooleanOperationDataflowNode::Evaluate'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4342096899851943079>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4342096899851943079>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

