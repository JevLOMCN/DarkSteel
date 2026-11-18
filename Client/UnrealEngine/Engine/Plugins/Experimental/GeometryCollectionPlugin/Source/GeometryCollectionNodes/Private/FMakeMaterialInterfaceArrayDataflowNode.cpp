// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e86acc0

UScriptStruct * __cdecl FMakeMaterialInterfaceArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode,
                         (UObject *)pUVar1,L"MakeMaterialInterfaceArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode.OuterSingleton;
}

// GetType @ 14e86add0

FName __thiscall
FMakeMaterialInterfaceArrayDataflowNode::GetType(FMakeMaterialInterfaceArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeMaterialInterfaceArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e86ae00

bool __thiscall
FMakeMaterialInterfaceArrayDataflowNode::IsA
          (FMakeMaterialInterfaceArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeMaterialInterfaceArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e86ae68;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e86ae68:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e86ae86;
      }
    }
  }
  bVar5 = true;
LAB_14e86ae86:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e86aec0

FStructOnScope * __thiscall
FMakeMaterialInterfaceArrayDataflowNode::NewStructOnScope
          (FMakeMaterialInterfaceArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode,
                           (UObject *)pUVar2,L"MakeMaterialInterfaceArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e86af40

void __thiscall
FMakeMaterialInterfaceArrayDataflowNode::SerializeInternal
          (FMakeMaterialInterfaceArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode,
                         (UObject *)pUVar1,L"MakeMaterialInterfaceArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86afbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e86afd0

FName __thiscall
FMakeMaterialInterfaceArrayDataflowNode::GetDisplayName
          (FMakeMaterialInterfaceArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeMaterialArray");
  return in_RDX;
}

// GetCategory @ 14e86b050

FName __thiscall
FMakeMaterialInterfaceArrayDataflowNode::GetCategory(FMakeMaterialInterfaceArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Materials");
  return in_RDX;
}

// GetTags @ 14e86b080

FString * __thiscall
FMakeMaterialInterfaceArrayDataflowNode::GetTags
          (FMakeMaterialInterfaceArrayDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e86b130

UScriptStruct * __thiscall
FMakeMaterialInterfaceArrayDataflowNode::TypedScriptStruct
          (FMakeMaterialInterfaceArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode,
                         (UObject *)pUVar1,L"MakeMaterialInterfaceArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeMaterialInterfaceArrayDataflowNode.OuterSingleton;
}

// Evaluate @ 14e86b1b0

void __thiscall
FMakeMaterialInterfaceArrayDataflowNode::Evaluate
          (FMakeMaterialInterfaceArrayDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  
  pTVar1 = &this->MaterialArray;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar2 == pTVar1) {
    FDataflowNode::
    SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,pTVar1,pTVar1);
  }
  return;
}

// FMakeMaterialInterfaceArrayDataflowNode @ 14e922de0

FMakeMaterialInterfaceArrayDataflowNode * __thiscall
FMakeMaterialInterfaceArrayDataflowNode::FMakeMaterialInterfaceArrayDataflowNode
          (FMakeMaterialInterfaceArrayDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8 [4];
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  local_48.Index = -1;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  this->_padding_ = (longlong)&___7FMakeMaterialInterfaceArrayDataflowNode__6B_;
  local_28.Reference = &this->MaterialArray;
  local_48.Reference = (void *)0x0;
  (((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)local_28.Reference)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MaterialArray).ArrayNum = 0;
  (this->MaterialArray).ArrayMax = 0;
  local_48.ContainerReference = (void *)0x0;
  local_28.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

