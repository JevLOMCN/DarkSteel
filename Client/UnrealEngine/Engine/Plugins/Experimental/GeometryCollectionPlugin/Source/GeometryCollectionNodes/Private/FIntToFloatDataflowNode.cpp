// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e82f600

UScriptStruct * __cdecl FIntToFloatDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIntToFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIntToFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIntToFloatDataflowNode,(UObject *)pUVar1,
                         L"IntToFloatDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FIntToFloatDataflowNode.OuterSingleton;
}

// GetType @ 14e82f940

FName __thiscall FIntToFloatDataflowNode::GetType(FIntToFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FIntToFloatDataflowNode");
  return in_RDX;
}

// IsA @ 14e82f9d0

bool __thiscall FIntToFloatDataflowNode::IsA(FIntToFloatDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FIntToFloatDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e82fa38;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e82fa38:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e82fa56;
      }
    }
  }
  bVar5 = true;
LAB_14e82fa56:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e82fad0

FStructOnScope * __thiscall FIntToFloatDataflowNode::NewStructOnScope(FIntToFloatDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FIntToFloatDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FIntToFloatDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIntToFloatDataflowNode,(UObject *)pUVar2,
                           L"IntToFloatDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FIntToFloatDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e82fb50

void __thiscall
FIntToFloatDataflowNode::SerializeInternal(FIntToFloatDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIntToFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIntToFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIntToFloatDataflowNode,(UObject *)pUVar1,
                         L"IntToFloatDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FIntToFloatDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FIntToFloatDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e82fbcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e82fbe0

FName __thiscall FIntToFloatDataflowNode::GetDisplayName(FIntToFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"IntToFloat");
  return in_RDX;
}

// GetCategory @ 14e82fe30

FName __thiscall FIntToFloatDataflowNode::GetCategory(FIntToFloatDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Conversions");
  return in_RDX;
}

// GetTags @ 14e82fe60

FString * __thiscall
FIntToFloatDataflowNode::GetTags(FIntToFloatDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e82fe90

UScriptStruct * __thiscall FIntToFloatDataflowNode::TypedScriptStruct(FIntToFloatDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIntToFloatDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FIntToFloatDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIntToFloatDataflowNode,(UObject *)pUVar1,
                         L"IntToFloatDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FIntToFloatDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8300a0

void __thiscall
FIntToFloatDataflowNode::Evaluate
          (FIntToFloatDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  int *piVar2;
  float local_res8 [2];
  FConnectionReference local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar1 == &this->Float) {
    local_28.Reference = &this->Int;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    piVar2 = FDataflowInput::GetValue<int>(this_00,param_1,local_28.Reference);
    local_res8[0] = (float)*piVar2;
    FDataflowNode::SetValue<float_&,float>((FDataflowNode *)this,param_1,local_res8,&this->Float);
  }
  return;
}

