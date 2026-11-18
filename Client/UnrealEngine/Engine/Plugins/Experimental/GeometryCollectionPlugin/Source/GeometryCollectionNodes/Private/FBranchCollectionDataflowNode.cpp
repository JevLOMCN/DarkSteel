// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8c4cb0

UScriptStruct * __cdecl FBranchCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBranchCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBranchCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBranchCollectionDataflowNode,(UObject *)pUVar1,
                         L"BranchCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBranchCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e8c4da0

FName __thiscall FBranchCollectionDataflowNode::GetType(FBranchCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBranchCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e8c4dd0

bool __thiscall
FBranchCollectionDataflowNode::IsA(FBranchCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBranchCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8c4e38;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8c4e38:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8c4e56;
      }
    }
  }
  bVar5 = true;
LAB_14e8c4e56:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8c4e90

FStructOnScope * __thiscall
FBranchCollectionDataflowNode::NewStructOnScope(FBranchCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBranchCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBranchCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBranchCollectionDataflowNode,(UObject *)pUVar2
                           ,L"BranchCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBranchCollectionDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8c5020

void __thiscall
FBranchCollectionDataflowNode::SerializeInternal
          (FBranchCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBranchCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBranchCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBranchCollectionDataflowNode,(UObject *)pUVar1,
                         L"BranchCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FBranchCollectionDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FBranchCollectionDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8c509d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8c50b0

FName __thiscall FBranchCollectionDataflowNode::GetDisplayName(FBranchCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BranchCollection");
  return in_RDX;
}

// GetCategory @ 14e8c50e0

FName __thiscall FBranchCollectionDataflowNode::GetCategory(FBranchCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|FlowControl");
  return in_RDX;
}

// GetTags @ 14e8c5110

FString * __thiscall
FBranchCollectionDataflowNode::GetTags
          (FBranchCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8c5180

UScriptStruct * __thiscall
FBranchCollectionDataflowNode::TypedScriptStruct(FBranchCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBranchCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBranchCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBranchCollectionDataflowNode,(UObject *)pUVar1,
                         L"BranchCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBranchCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8c53e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBranchCollectionDataflowNode::Evaluate
          (FBranchCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  undefined1 *puVar2;
  FDataflowInput *pFVar3;
  bool *pbVar4;
  FManagedArrayCollection *pFVar5;
  undefined1 auStack_118 [32];
  FConnectionReference local_f8;
  FManagedArrayCollection local_d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar1 = &this->ChosenCollection;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar2 == pFVar1) {
    local_f8.Reference = &this->bCondition;
    local_f8.Index = -1;
    local_f8.ContainerReference = (void *)0x0;
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_f8);
    pbVar4 = FDataflowInput::GetValue<bool>(pFVar3,param_1,local_f8.Reference);
    local_f8.Index = -1;
    local_f8.ContainerReference = (void *)0x0;
    if (*pbVar4 == false) {
      local_f8.Reference = &this->FalseCollection;
      pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_f8);
      if (pFVar3->Connection != (FDataflowOutput *)0x0) {
        pFVar5 = FDataflowNode::GetValue<FManagedArrayCollection>
                           ((FDataflowNode *)this,param_1,&this->FalseCollection);
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,pFVar5,pFVar1);
        return;
      }
    }
    else {
      local_f8.Reference = &this->TrueCollection;
      pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_f8);
      if (pFVar3->Connection != (FDataflowOutput *)0x0) {
        pFVar5 = FDataflowNode::GetValue<FManagedArrayCollection>
                           ((FDataflowNode *)this,param_1,&this->TrueCollection);
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,pFVar5,pFVar1);
        return;
      }
    }
    pFVar5 = FManagedArrayCollection::FManagedArrayCollection(&local_d8);
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,pFVar5,pFVar1);
    FManagedArrayCollection::~FManagedArrayCollection(&local_d8);
  }
  return;
}

// FBranchCollectionDataflowNode @ 14e913060

FBranchCollectionDataflowNode * __thiscall
FBranchCollectionDataflowNode::FBranchCollectionDataflowNode
          (FBranchCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->_padding_ = (longlong)&___7FBranchCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->TrueCollection);
  FManagedArrayCollection::FManagedArrayCollection(&this->FalseCollection);
  this->bCondition = false;
  FManagedArrayCollection::FManagedArrayCollection(&this->ChosenCollection);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Index = -1;
  local_68.Reference = &this->TrueCollection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->FalseCollection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->bCondition;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->ChosenCollection;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  return this;
}

