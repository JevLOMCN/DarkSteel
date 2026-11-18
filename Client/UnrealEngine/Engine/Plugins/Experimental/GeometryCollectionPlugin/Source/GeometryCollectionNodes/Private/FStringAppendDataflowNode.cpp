// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e897e30

UScriptStruct * __cdecl FStringAppendDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStringAppendDataflowNode,(UObject *)pUVar1,
                         L"StringAppendDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode.OuterSingleton;
}

// GetType @ 14e897f90

FName __thiscall FStringAppendDataflowNode::GetType(FStringAppendDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FStringAppendDataflowNode");
  return in_RDX;
}

// IsA @ 14e897fc0

bool __thiscall FStringAppendDataflowNode::IsA(FStringAppendDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FStringAppendDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e898028;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e898028:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e898046;
      }
    }
  }
  bVar5 = true;
LAB_14e898046:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e898080

FStructOnScope * __thiscall
FStringAppendDataflowNode::NewStructOnScope(FStringAppendDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStringAppendDataflowNode,(UObject *)pUVar2,
                           L"StringAppendDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e898100

void __thiscall
FStringAppendDataflowNode::SerializeInternal(FStringAppendDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStringAppendDataflowNode,(UObject *)pUVar1,
                         L"StringAppendDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e89817d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e898190

FName __thiscall FStringAppendDataflowNode::GetDisplayName(FStringAppendDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"StringAppend");
  return in_RDX;
}

// GetCategory @ 14e8981c0

FName __thiscall FStringAppendDataflowNode::GetCategory(FStringAppendDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|String");
  return in_RDX;
}

// GetTags @ 14e8981f0

FString * __thiscall
FStringAppendDataflowNode::GetTags(FStringAppendDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e898220

UScriptStruct * __thiscall
FStringAppendDataflowNode::TypedScriptStruct(FStringAppendDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStringAppendDataflowNode,(UObject *)pUVar1,
                         L"StringAppendDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode.OuterSingleton;
}

// Evaluate @ 14e898260

void __thiscall
FStringAppendDataflowNode::Evaluate
          (FStringAppendDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *pFVar2;
  FString *pFVar3;
  FString *pFVar4;
  FString local_48;
  FConnectionReference local_38;
  FConnectionReference local_20;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FString *)puVar1 == &this->String) {
    local_38.Reference = &this->String2;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
    pFVar3 = FDataflowInput::GetValue<FString>(pFVar2,param_1,local_38.Reference);
    local_20.Reference = &this->String1;
    local_20.Index = -1;
    local_20.ContainerReference = (void *)0x0;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_20);
    pFVar4 = FDataflowInput::GetValue<FString>(pFVar2,param_1,local_20.Reference);
    ::FString::ConcatFF(&local_48,pFVar4,pFVar3);
    FDataflowNode::SetValue<FString,FString>((FDataflowNode *)this,param_1,&local_48,&this->String);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FStringAppendDataflowNode @ 14e92d930

FStringAppendDataflowNode * __thiscall
FStringAppendDataflowNode::FStringAppendDataflowNode
          (FStringAppendDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->_padding_ = (longlong)&___7FStringAppendDataflowNode__6B_;
  ::FString::FString(&this->String1,"");
  ::FString::FString(&this->String2,"");
  ::FString::FString(&this->String,"");
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.Reference = &this->String1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->String2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->String;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

