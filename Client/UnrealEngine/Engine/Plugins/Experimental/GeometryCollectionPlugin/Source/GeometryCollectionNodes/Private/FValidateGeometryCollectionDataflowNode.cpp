// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e8d18e0

UScriptStruct * __cdecl FValidateGeometryCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValidateGeometryCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FValidateGeometryCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode,
                         (UObject *)pUVar1,L"ValidateGeometryCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FValidateGeometryCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e8d1a60

FName __thiscall
FValidateGeometryCollectionDataflowNode::GetType(FValidateGeometryCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FValidateGeometryCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e8d1ac0

bool __thiscall
FValidateGeometryCollectionDataflowNode::IsA
          (FValidateGeometryCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FValidateGeometryCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8d1b28;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8d1b28:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8d1b46;
      }
    }
  }
  bVar5 = true;
LAB_14e8d1b46:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8d1b80

FStructOnScope * __thiscall
FValidateGeometryCollectionDataflowNode::NewStructOnScope
          (FValidateGeometryCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FValidateGeometryCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FValidateGeometryCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode,
                           (UObject *)pUVar2,L"ValidateGeometryCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FValidateGeometryCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8d1d40

void __thiscall
FValidateGeometryCollectionDataflowNode::SerializeInternal
          (FValidateGeometryCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValidateGeometryCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FValidateGeometryCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode,
                         (UObject *)pUVar1,L"ValidateGeometryCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FValidateGeometryCollectionDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FValidateGeometryCollectionDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8d1dbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8d1dd0

FName __thiscall
FValidateGeometryCollectionDataflowNode::GetDisplayName
          (FValidateGeometryCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ValidateGeometryCollection");
  return in_RDX;
}

// GetCategory @ 14e8d1e90

FName __thiscall
FValidateGeometryCollectionDataflowNode::GetCategory(FValidateGeometryCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Fracture|Utilities");
  return in_RDX;
}

// GetTags @ 14e8d1ef0

FString * __thiscall
FValidateGeometryCollectionDataflowNode::GetTags
          (FValidateGeometryCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8d1f50

UScriptStruct * __thiscall
FValidateGeometryCollectionDataflowNode::TypedScriptStruct
          (FValidateGeometryCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValidateGeometryCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FValidateGeometryCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode,
                         (UObject *)pUVar1,L"ValidateGeometryCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FValidateGeometryCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8d2210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FValidateGeometryCollectionDataflowNode::Evaluate
          (FValidateGeometryCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  undefined1 *puVar2;
  FManagedArrayCollection *pFVar3;
  undefined1 auStack_f8 [32];
  FManagedArrayCollection local_d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar1 = &this->Collection;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar2 == pFVar1) {
    pFVar3 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
    FManagedArrayCollection::FManagedArrayCollection(&local_d8,pFVar3);
    FFractureEngineUtility::ValidateGeometryCollection
              (&local_d8,this->bRemoveUnreferencedGeometry,this->bRemoveClustersOfOne,
               this->bRemoveDanglingClusters);
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_d8,pFVar1);
    FManagedArrayCollection::~FManagedArrayCollection(&local_d8);
  }
  return;
}

