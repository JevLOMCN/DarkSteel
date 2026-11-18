// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e8a0e30

UScriptStruct * __cdecl FMaterialsInfoDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialsInfoDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMaterialsInfoDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode,(UObject *)pUVar1,
                         L"MaterialsInfoDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialsInfoDataflowNode.OuterSingleton;
}

// GetType @ 14e8a0f70

FName __thiscall FMaterialsInfoDataflowNode::GetType(FMaterialsInfoDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMaterialsInfoDataflowNode");
  return in_RDX;
}

// IsA @ 14e8a0fa0

bool __thiscall FMaterialsInfoDataflowNode::IsA(FMaterialsInfoDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMaterialsInfoDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8a1008;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8a1008:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8a1026;
      }
    }
  }
  bVar5 = true;
LAB_14e8a1026:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8a1070

FStructOnScope * __thiscall
FMaterialsInfoDataflowNode::NewStructOnScope(FMaterialsInfoDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMaterialsInfoDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMaterialsInfoDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode,(UObject *)pUVar2,
                           L"MaterialsInfoDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMaterialsInfoDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8a10f0

void __thiscall
FMaterialsInfoDataflowNode::SerializeInternal(FMaterialsInfoDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialsInfoDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMaterialsInfoDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode,(UObject *)pUVar1,
                         L"MaterialsInfoDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMaterialsInfoDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMaterialsInfoDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8a116d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8a1180

FName __thiscall FMaterialsInfoDataflowNode::GetDisplayName(FMaterialsInfoDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MaterialsInfo");
  return in_RDX;
}

// GetCategory @ 14e8a11f0

FName __thiscall FMaterialsInfoDataflowNode::GetCategory(FMaterialsInfoDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Materials");
  return in_RDX;
}

// GetTags @ 14e8a1220

FString * __thiscall
FMaterialsInfoDataflowNode::GetTags
          (FMaterialsInfoDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8a1260

UScriptStruct * __thiscall
FMaterialsInfoDataflowNode::TypedScriptStruct(FMaterialsInfoDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialsInfoDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMaterialsInfoDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode,(UObject *)pUVar1,
                         L"MaterialsInfoDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialsInfoDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8a1330

void __thiscall
FMaterialsInfoDataflowNode::Evaluate
          (FMaterialsInfoDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined1 *puVar3;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FString *)puVar3 == &this->String) {
    pTVar4 = FDataflowNode::GetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,&this->Materials);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    ::FString::AppendfImpl(&local_48,L"\n----------------------------------------\n");
    ::FString::AppendfImpl(&local_48,L"Number of Materials: %d\n");
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    iVar2 = pTVar4->ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar4->ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMaterial>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)pFVar5,&local_38,(UObject *)0x0,None);
      ::FString::AppendfImpl(&local_48,L"%4d: %s\n");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      pFVar5 = pFVar5 + 8;
    }
    ::FString::AppendfImpl(&local_48,L"----------------------------------------\n");
    FDataflowNode::SetValue<FString_&,FString>
              ((FDataflowNode *)this,param_1,&local_48,&this->String);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

