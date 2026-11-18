// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e831610

UScriptStruct * __cdecl FIntToDoubleDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIntToDoubleDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIntToDoubleDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIntToDoubleDataflowNode,(UObject *)pUVar1,
                         L"IntToDoubleDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FIntToDoubleDataflowNode.OuterSingleton;
}

// GetType @ 14e831910

FName __thiscall FIntToDoubleDataflowNode::GetType(FIntToDoubleDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FIntToDoubleDataflowNode");
  return in_RDX;
}

// IsA @ 14e8319a0

bool __thiscall FIntToDoubleDataflowNode::IsA(FIntToDoubleDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FIntToDoubleDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e831a08;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e831a08:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e831a26;
      }
    }
  }
  bVar5 = true;
LAB_14e831a26:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e831a60

FStructOnScope * __thiscall
FIntToDoubleDataflowNode::NewStructOnScope(FIntToDoubleDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FIntToDoubleDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FIntToDoubleDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIntToDoubleDataflowNode,(UObject *)pUVar2,
                           L"IntToDoubleDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FIntToDoubleDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e831ae0

void __thiscall
FIntToDoubleDataflowNode::SerializeInternal(FIntToDoubleDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIntToDoubleDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIntToDoubleDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIntToDoubleDataflowNode,(UObject *)pUVar1,
                         L"IntToDoubleDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FIntToDoubleDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FIntToDoubleDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e831b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e831b70

FName __thiscall FIntToDoubleDataflowNode::GetDisplayName(FIntToDoubleDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"IntToDouble");
  return in_RDX;
}

// GetCategory @ 14e831cc0

FName __thiscall FIntToDoubleDataflowNode::GetCategory(FIntToDoubleDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Conversions");
  return in_RDX;
}

// GetTags @ 14e831cf0

FString * __thiscall
FIntToDoubleDataflowNode::GetTags(FIntToDoubleDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e832120

UScriptStruct * __thiscall
FIntToDoubleDataflowNode::TypedScriptStruct(FIntToDoubleDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIntToDoubleDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIntToDoubleDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIntToDoubleDataflowNode,(UObject *)pUVar1,
                         L"IntToDoubleDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FIntToDoubleDataflowNode.OuterSingleton;
}

// Evaluate @ 14e832920

void __thiscall
FIntToDoubleDataflowNode::Evaluate
          (FIntToDoubleDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  int *piVar2;
  double local_res8;
  FConnectionReference local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((double *)puVar1 == &this->Double) {
    local_28.Reference = &this->Int;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    piVar2 = FDataflowInput::GetValue<int>(this_00,param_1,local_28.Reference);
    local_res8 = (double)*piVar2;
    FDataflowNode::SetValue<double_&,double>
              ((FDataflowNode *)this,param_1,&local_res8,&this->Double);
  }
  return;
}

