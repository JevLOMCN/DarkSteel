// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e891090

UScriptStruct * __cdecl FIsNearlyZeroDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIsNearlyZeroDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIsNearlyZeroDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIsNearlyZeroDataflowNode,(UObject *)pUVar1,
                         L"IsNearlyZeroDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FIsNearlyZeroDataflowNode.OuterSingleton;
}

// GetType @ 14e891130

FName __thiscall FIsNearlyZeroDataflowNode::GetType(FIsNearlyZeroDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FIsNearlyZeroDataflowNode");
  return in_RDX;
}

// IsA @ 14e891160

bool __thiscall FIsNearlyZeroDataflowNode::IsA(FIsNearlyZeroDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FIsNearlyZeroDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8911c8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8911c8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8911e6;
      }
    }
  }
  bVar5 = true;
LAB_14e8911e6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e891220

FStructOnScope * __thiscall
FIsNearlyZeroDataflowNode::NewStructOnScope(FIsNearlyZeroDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FIsNearlyZeroDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FIsNearlyZeroDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIsNearlyZeroDataflowNode,(UObject *)pUVar2,
                           L"IsNearlyZeroDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FIsNearlyZeroDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8912a0

void __thiscall
FIsNearlyZeroDataflowNode::SerializeInternal(FIsNearlyZeroDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIsNearlyZeroDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIsNearlyZeroDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIsNearlyZeroDataflowNode,(UObject *)pUVar1,
                         L"IsNearlyZeroDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FIsNearlyZeroDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FIsNearlyZeroDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e89131d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e891330

FName __thiscall FIsNearlyZeroDataflowNode::GetDisplayName(FIsNearlyZeroDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"IsNearlyZero");
  return in_RDX;
}

// GetCategory @ 14e891360

FName __thiscall FIsNearlyZeroDataflowNode::GetCategory(FIsNearlyZeroDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Utilities");
  return in_RDX;
}

// GetTags @ 14e891440

FString * __thiscall
FIsNearlyZeroDataflowNode::GetTags(FIsNearlyZeroDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e891470

UScriptStruct * __thiscall
FIsNearlyZeroDataflowNode::TypedScriptStruct(FIsNearlyZeroDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIsNearlyZeroDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIsNearlyZeroDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIsNearlyZeroDataflowNode,(UObject *)pUVar1,
                         L"IsNearlyZeroDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FIsNearlyZeroDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8914f0

void __thiscall
FIsNearlyZeroDataflowNode::Evaluate
          (FIsNearlyZeroDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  float *pfVar2;
  bool local_res8 [8];
  FConnectionReference local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((bool *)puVar1 == &this->ReturnValue) {
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    local_28.Reference = &this->Float;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pfVar2 = FDataflowInput::GetValue<float>(this_00,param_1,&this->Float);
    local_res8[0] =
         (float)((uint)*pfVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77;
    FDataflowNode::SetValue<bool_const_&,bool>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

