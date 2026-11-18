// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e887c30

UScriptStruct * __cdecl FGetCollectionFromAssetDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetCollectionFromAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetCollectionFromAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetCollectionFromAssetDataflowNode,
                         (UObject *)pUVar1,L"GetCollectionFromAssetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetCollectionFromAssetDataflowNode.OuterSingleton;
}

// GetType @ 14e887cb0

FName __thiscall
FGetCollectionFromAssetDataflowNode::GetType(FGetCollectionFromAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetCollectionFromAssetDataflowNode");
  return in_RDX;
}

// IsA @ 14e887ce0

bool __thiscall
FGetCollectionFromAssetDataflowNode::IsA(FGetCollectionFromAssetDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetCollectionFromAssetDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e887d48;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e887d48:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e887d66;
      }
    }
  }
  bVar5 = true;
LAB_14e887d66:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e887da0

FStructOnScope * __thiscall
FGetCollectionFromAssetDataflowNode::NewStructOnScope(FGetCollectionFromAssetDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetCollectionFromAssetDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetCollectionFromAssetDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetCollectionFromAssetDataflowNode,
                           (UObject *)pUVar2,L"GetCollectionFromAssetDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetCollectionFromAssetDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e887f10

void __thiscall
FGetCollectionFromAssetDataflowNode::SerializeInternal
          (FGetCollectionFromAssetDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetCollectionFromAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetCollectionFromAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetCollectionFromAssetDataflowNode,
                         (UObject *)pUVar1,L"GetCollectionFromAssetDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetCollectionFromAssetDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetCollectionFromAssetDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e887f8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e887fa0

FName __thiscall
FGetCollectionFromAssetDataflowNode::GetDisplayName(FGetCollectionFromAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetCollectionFromAsset");
  return in_RDX;
}

// GetCategory @ 14e887fd0

FName __thiscall
FGetCollectionFromAssetDataflowNode::GetCategory(FGetCollectionFromAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Asset");
  return in_RDX;
}

// GetTags @ 14e888000

FString * __thiscall
FGetCollectionFromAssetDataflowNode::GetTags
          (FGetCollectionFromAssetDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e888030

UScriptStruct * __thiscall
FGetCollectionFromAssetDataflowNode::TypedScriptStruct(FGetCollectionFromAssetDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetCollectionFromAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetCollectionFromAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetCollectionFromAssetDataflowNode,
                         (UObject *)pUVar1,L"GetCollectionFromAssetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetCollectionFromAssetDataflowNode.OuterSingleton;
}

// Evaluate @ 14e888300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGetCollectionFromAssetDataflowNode::Evaluate
          (FGetCollectionFromAssetDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  UGeometryCollection *pUVar2;
  FGeometryCollection *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 *puVar5;
  FManagedArrayCollection *pFVar6;
  undefined1 auStack_f8 [32];
  FManagedArrayCollection local_d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar1 = &this->Collection;
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar5 == pFVar1) {
    pUVar2 = (this->CollectionAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UGeometryCollection *)0x0) {
      pFVar6 = FManagedArrayCollection::FManagedArrayCollection(&local_d8);
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,pFVar6,pFVar1);
      FManagedArrayCollection::~FManagedArrayCollection(&local_d8);
    }
    else {
      pFVar3 = (pUVar2->GeometryCollection).Object;
      pTVar4 = (pUVar2->GeometryCollection).SharedReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 == (FGeometryCollection *)0x0) {
        pFVar6 = FManagedArrayCollection::FManagedArrayCollection(&local_d8);
        FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,pFVar6,pFVar1);
        FManagedArrayCollection::~FManagedArrayCollection(&local_d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
      else {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar3,pFVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
    }
  }
  return;
}

