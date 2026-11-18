// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e872ea0

UScriptStruct * __cdecl FLogeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLogeDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FLogeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLogeDataflowNode,(UObject *)pUVar1,
                         L"LogeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FLogeDataflowNode.OuterSingleton;
}

// GetType @ 14e873850

FName __thiscall FLogeDataflowNode::GetType(FLogeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FLogeDataflowNode");
  return in_RDX;
}

// IsA @ 14e8738f0

bool __thiscall FLogeDataflowNode::IsA(FLogeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FLogeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e873958;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e873958:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e873976;
      }
    }
  }
  bVar5 = true;
LAB_14e873976:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8739e0

FStructOnScope * __thiscall FLogeDataflowNode::NewStructOnScope(FLogeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FLogeDataflowNode.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FLogeDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FLogeDataflowNode,(UObject *)pUVar2,
                           L"LogeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FLogeDataflowNode.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e873aa0

void __thiscall FLogeDataflowNode::SerializeInternal(FLogeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLogeDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FLogeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLogeDataflowNode,(UObject *)pUVar1,
                         L"LogeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FLogeDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FLogeDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e873b1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e873dc0

FName __thiscall FLogeDataflowNode::GetDisplayName(FLogeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Loge");
  return in_RDX;
}

// GetCategory @ 14e873e00

FName __thiscall FLogeDataflowNode::GetCategory(FLogeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Float");
  return in_RDX;
}

// GetTags @ 14e873eb0

FString * __thiscall
FLogeDataflowNode::GetTags(FLogeDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e873ee0

UScriptStruct * __thiscall FLogeDataflowNode::TypedScriptStruct(FLogeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLogeDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FLogeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLogeDataflowNode,(UObject *)pUVar1,
                         L"LogeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FLogeDataflowNode.OuterSingleton;
}

// Evaluate @ 14e873f90

void __thiscall
FLogeDataflowNode::Evaluate(FLogeDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float *pfVar1;
  undefined1 *puVar2;
  FDataflowInput *this_00;
  float local_res8 [2];
  FConnectionReference local_28;
  
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar2 == &this->ReturnValue) {
    pfVar1 = &this->A;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    local_28.Reference = pfVar1;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    FDataflowInput::GetValue<float>(this_00,param_1,pfVar1);
    local_res8[0] = logf(*pfVar1);
    FDataflowNode::SetValue<float_const_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

