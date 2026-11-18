// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e86f370

UScriptStruct * __cdecl FGetMaterialInterfaceAssetDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode,
                         (UObject *)pUVar1,L"GetMaterialInterfaceAssetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode.OuterSingleton;
}

// GetType @ 14e86fde0

FName __thiscall
FGetMaterialInterfaceAssetDataflowNode::GetType(FGetMaterialInterfaceAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetMaterialInterfaceAssetDataflowNode");
  return in_RDX;
}

// IsA @ 14e86fe90

bool __thiscall
FGetMaterialInterfaceAssetDataflowNode::IsA
          (FGetMaterialInterfaceAssetDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetMaterialInterfaceAssetDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e86fef8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e86fef8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e86ff16;
      }
    }
  }
  bVar5 = true;
LAB_14e86ff16:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e86ff50

FStructOnScope * __thiscall
FGetMaterialInterfaceAssetDataflowNode::NewStructOnScope
          (FGetMaterialInterfaceAssetDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode,
                           (UObject *)pUVar2,L"GetMaterialInterfaceAssetDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e870160

void __thiscall
FGetMaterialInterfaceAssetDataflowNode::SerializeInternal
          (FGetMaterialInterfaceAssetDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode,
                         (UObject *)pUVar1,L"GetMaterialInterfaceAssetDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8701dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e870200

FName __thiscall
FGetMaterialInterfaceAssetDataflowNode::GetDisplayName(FGetMaterialInterfaceAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetMaterialAsset");
  return in_RDX;
}

// GetCategory @ 14e870230

FName __thiscall
FGetMaterialInterfaceAssetDataflowNode::GetCategory(FGetMaterialInterfaceAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Materials");
  return in_RDX;
}

// GetTags @ 14e870270

FString * __thiscall
FGetMaterialInterfaceAssetDataflowNode::GetTags
          (FGetMaterialInterfaceAssetDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8702a0

UScriptStruct * __thiscall
FGetMaterialInterfaceAssetDataflowNode::TypedScriptStruct
          (FGetMaterialInterfaceAssetDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode,
                         (UObject *)pUVar1,L"GetMaterialInterfaceAssetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetMaterialInterfaceAssetDataflowNode.OuterSingleton;
}

// Evaluate @ 14e870560

void __thiscall
FGetMaterialInterfaceAssetDataflowNode::Evaluate
          (FGetMaterialInterfaceAssetDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<UMaterialInterface> *pTVar1;
  undefined1 *puVar2;
  
  pTVar1 = &this->Material;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UMaterialInterface> *)puVar2 == pTVar1) {
    FDataflowNode::SetValue<TObjectPtr<UMaterialInterface>_const_&,TObjectPtr<UMaterialInterface>_>
              ((FDataflowNode *)this,param_1,pTVar1,pTVar1);
  }
  return;
}

// SupportsAssetProperty @ 14e8705c0

bool __thiscall
FGetMaterialInterfaceAssetDataflowNode::SupportsAssetProperty
          (FGetMaterialInterfaceAssetDataflowNode *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14e8705f3;
  }
  param_1 = (UObject *)0x0;
LAB_14e8705f3:
  return param_1 != (UObject *)0x0;
}

// SetAssetProperty @ 14e870610

void __thiscall
FGetMaterialInterfaceAssetDataflowNode::SetAssetProperty
          (FGetMaterialInterfaceAssetDataflowNode *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)param_1;
    }
  }
  return;
}

// FGetMaterialInterfaceAssetDataflowNode @ 14e920ea0

FGetMaterialInterfaceAssetDataflowNode * __thiscall
FGetMaterialInterfaceAssetDataflowNode::FGetMaterialInterfaceAssetDataflowNode
          (FGetMaterialInterfaceAssetDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FGetMaterialInterfaceAssetDataflowNode__6B_;
  local_28.Reference = &this->Material;
  local_48.Reference = (void *)0x0;
  (((TObjectPtr<UMaterialInterface> *)local_28.Reference)->field0_0x0).DebugPtr =
       (UMaterialInterface *)0x0;
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

