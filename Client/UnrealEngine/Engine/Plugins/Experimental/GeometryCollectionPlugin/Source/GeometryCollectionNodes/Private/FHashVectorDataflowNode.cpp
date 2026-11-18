// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e8a7d00

UScriptStruct * __cdecl FHashVectorDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHashVectorDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FHashVectorDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHashVectorDataflowNode,(UObject *)pUVar1,
                         L"HashVectorDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FHashVectorDataflowNode.OuterSingleton;
}

// GetType @ 14e8a8d30

FName __thiscall FHashVectorDataflowNode::GetType(FHashVectorDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FHashVectorDataflowNode");
  return in_RDX;
}

// IsA @ 14e8a8de0

bool __thiscall FHashVectorDataflowNode::IsA(FHashVectorDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FHashVectorDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8a8e48;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8a8e48:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8a8e66;
      }
    }
  }
  bVar5 = true;
LAB_14e8a8e66:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8a8ea0

FStructOnScope * __thiscall FHashVectorDataflowNode::NewStructOnScope(FHashVectorDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FHashVectorDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FHashVectorDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FHashVectorDataflowNode,(UObject *)pUVar2,
                           L"HashVectorDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FHashVectorDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8a8f20

void __thiscall
FHashVectorDataflowNode::SerializeInternal(FHashVectorDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHashVectorDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FHashVectorDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHashVectorDataflowNode,(UObject *)pUVar1,
                         L"HashVectorDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FHashVectorDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FHashVectorDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8a8f9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8a8ff0

FName __thiscall FHashVectorDataflowNode::GetDisplayName(FHashVectorDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"HashVector");
  return in_RDX;
}

// GetCategory @ 14e8a9020

FName __thiscall FHashVectorDataflowNode::GetCategory(FHashVectorDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Vector");
  return in_RDX;
}

// GetTags @ 14e8a9090

FString * __thiscall
FHashVectorDataflowNode::GetTags(FHashVectorDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8a90c0

UScriptStruct * __thiscall FHashVectorDataflowNode::TypedScriptStruct(FHashVectorDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHashVectorDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FHashVectorDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHashVectorDataflowNode,(UObject *)pUVar1,
                         L"HashVectorDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FHashVectorDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8a9500

void __thiscall
FHashVectorDataflowNode::Evaluate
          (FHashVectorDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  TVector<double> *pTVar2;
  uint local_res8 [2];
  FConnectionReference local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((int *)puVar1 == &this->Hash) {
    local_28.Reference = &this->Vector;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pTVar2 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                       (this_00,param_1,local_28.Reference);
    local_res8[0] = FCrc::MemCrc_DEPRECATED(pTVar2,0x18,0);
    FDataflowNode::SetValue<int,int>((FDataflowNode *)this,param_1,(int *)local_res8,&this->Hash);
  }
  return;
}

