// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e86d060

UScriptStruct * __cdecl FGetMaterialInterfaceArraySizeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode,
                         (UObject *)pUVar1,L"GetMaterialInterfaceArraySizeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode.OuterSingleton
  ;
}

// GetType @ 14e86d420

FName __thiscall
FGetMaterialInterfaceArraySizeDataflowNode::GetType
          (FGetMaterialInterfaceArraySizeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetMaterialInterfaceArraySizeDataflowNode");
  return in_RDX;
}

// IsA @ 14e86d5a0

bool __thiscall
FGetMaterialInterfaceArraySizeDataflowNode::IsA
          (FGetMaterialInterfaceArraySizeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetMaterialInterfaceArraySizeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e86d608;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e86d608:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e86d626;
      }
    }
  }
  bVar5 = true;
LAB_14e86d626:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e86d660

FStructOnScope * __thiscall
FGetMaterialInterfaceArraySizeDataflowNode::NewStructOnScope
          (FGetMaterialInterfaceArraySizeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode,
                           (UObject *)pUVar2,L"GetMaterialInterfaceArraySizeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e86d7a0

void __thiscall
FGetMaterialInterfaceArraySizeDataflowNode::SerializeInternal
          (FGetMaterialInterfaceArraySizeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode,
                         (UObject *)pUVar1,L"GetMaterialInterfaceArraySizeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86d81d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e86d860

FName __thiscall
FGetMaterialInterfaceArraySizeDataflowNode::GetDisplayName
          (FGetMaterialInterfaceArraySizeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetMaterialArraySize");
  return in_RDX;
}

// GetCategory @ 14e86d8c0

FName __thiscall
FGetMaterialInterfaceArraySizeDataflowNode::GetCategory
          (FGetMaterialInterfaceArraySizeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Materials");
  return in_RDX;
}

// GetTags @ 14e86d930

FString * __thiscall
FGetMaterialInterfaceArraySizeDataflowNode::GetTags
          (FGetMaterialInterfaceArraySizeDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e86d960

UScriptStruct * __thiscall
FGetMaterialInterfaceArraySizeDataflowNode::TypedScriptStruct
          (FGetMaterialInterfaceArraySizeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode,
                         (UObject *)pUVar1,L"GetMaterialInterfaceArraySizeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceArraySizeDataflowNode.OuterSingleton
  ;
}

// Evaluate @ 14e86dc80

void __thiscall
FGetMaterialInterfaceArraySizeDataflowNode::Evaluate
          (FGetMaterialInterfaceArraySizeDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *pFVar2;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar3;
  int local_res8 [2];
  FConnectionReference local_48;
  FConnectionReference local_30;
  
  pTVar3 = &this->MaterialArray;
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar1 == pTVar3) {
    local_48.ContainerReference = (void *)0x0;
    local_48.Index = -1;
    local_48.Reference = pTVar3;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
    if (pFVar2->Connection == (FDataflowOutput *)0x0) {
      FDataflowNode::
      SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,local_48.Reference,pTVar3);
    }
    else {
      local_30.Index = -1;
      local_30.ContainerReference = (void *)0x0;
      local_30.Reference = pTVar3;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_48,&local_30);
    }
  }
  else {
    puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((int *)puVar1 == &this->Size) {
      pTVar3 = FDataflowNode::
               GetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                         ((FDataflowNode *)this,param_1,pTVar3);
      local_res8[0] = pTVar3->ArrayNum;
      FDataflowNode::SetValue<int,int>((FDataflowNode *)this,param_1,local_res8,&this->Size);
    }
  }
  return;
}

// FGetMaterialInterfaceArraySizeDataflowNode @ 14e920d80

FGetMaterialInterfaceArraySizeDataflowNode * __thiscall
FGetMaterialInterfaceArraySizeDataflowNode::FGetMaterialInterfaceArraySizeDataflowNode
          (FGetMaterialInterfaceArraySizeDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowOutput *pFVar2;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  pTVar1 = &this->MaterialArray;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FGetMaterialInterfaceArraySizeDataflowNode__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MaterialArray).ArrayNum = 0;
  (this->MaterialArray).ArrayMax = 0;
  this->Size = 0;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  local_38.Reference = pTVar1;
  pFVar2 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference !=
      (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar2,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Size;
  pFVar2 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar2,&local_58);
  }
  return this;
}

