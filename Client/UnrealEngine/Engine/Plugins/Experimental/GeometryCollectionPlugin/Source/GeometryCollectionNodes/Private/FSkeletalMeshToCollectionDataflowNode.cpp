// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e88b0f0

UScriptStruct * __cdecl FSkeletalMeshToCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode,
                         (UObject *)pUVar1,L"SkeletalMeshToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e88b2b0

FName __thiscall
FSkeletalMeshToCollectionDataflowNode::GetType(FSkeletalMeshToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSkeletalMeshToCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e88b4c0

bool __thiscall
FSkeletalMeshToCollectionDataflowNode::IsA
          (FSkeletalMeshToCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSkeletalMeshToCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e88b528;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e88b528:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e88b546;
      }
    }
  }
  bVar5 = true;
LAB_14e88b546:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e88b5b0

FStructOnScope * __thiscall
FSkeletalMeshToCollectionDataflowNode::NewStructOnScope(FSkeletalMeshToCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode,
                           (UObject *)pUVar2,L"SkeletalMeshToCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e88b6e0

void __thiscall
FSkeletalMeshToCollectionDataflowNode::SerializeInternal
          (FSkeletalMeshToCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode,
                         (UObject *)pUVar1,L"SkeletalMeshToCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88b75d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e88b7b0

FName __thiscall
FSkeletalMeshToCollectionDataflowNode::GetDisplayName(FSkeletalMeshToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SkeletalMeshToCollection");
  return in_RDX;
}

// GetCategory @ 14e88b7e0

FName __thiscall
FSkeletalMeshToCollectionDataflowNode::GetCategory(FSkeletalMeshToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection");
  return in_RDX;
}

// GetTags @ 14e88b850

FString * __thiscall
FSkeletalMeshToCollectionDataflowNode::GetTags
          (FSkeletalMeshToCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e88b880

UScriptStruct * __thiscall
FSkeletalMeshToCollectionDataflowNode::TypedScriptStruct
          (FSkeletalMeshToCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode,
                         (UObject *)pUVar1,L"SkeletalMeshToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e88d4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkeletalMeshToCollectionDataflowNode::Evaluate
          (FSkeletalMeshToCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<USkeletalMesh_const_> TVar1;
  undefined1 *puVar2;
  FDataflowInput *this_00;
  TObjectPtr<USkeletalMesh_const_>_u_0 *pTVar3;
  FManagedArrayCollection *pFVar4;
  undefined1 auStackY_5e8 [32];
  FLinearColor_u_0 local_5b8;
  undefined8 local_5a8;
  FManagedArrayCollection local_598;
  FGeometryCollection local_4e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar2 == &this->Collection) {
    local_5b8 = FLinearColor::White.field0_0x0;
    FGeometryCollection::FGeometryCollection
              (&local_4e8,(FGeometryCollectionDefaults *)&local_5b8._s_0);
    local_5b8._s_0.B = -NAN;
    local_5b8._0_8_ = &this->SkeletalMesh;
    local_5a8 = 0;
    this_00 = FDataflowNode::FindInput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_5b8._s_0);
    pTVar3 = &FDataflowInput::GetValue<TObjectPtr<USkeletalMesh_const_>_>
                        (this_00,param_1,(TObjectPtr<USkeletalMesh_const_> *)local_5b8._0_8_)->
              field0_0x0;
    TVar1.field0_0x0 = (TObjectPtr<USkeletalMesh_const_>_u_0)pTVar3->DebugPtr;
    if (TVar1.field0_0x0 != (USkeletalMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      FGeometryCollectionEngineConversion::AppendSkeletalMesh
                ((USkeletalMesh *)TVar1.field0_0x0,0,&UE::Math::TTransform<double>::Identity,
                 (FManagedArrayCollection *)&local_4e8,true,this->bImportTransformOnly);
    }
    pFVar4 = FManagedArrayCollection::FManagedArrayCollection
                       (&local_598,(FManagedArrayCollection *)&local_4e8);
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,pFVar4,&this->Collection);
    FManagedArrayCollection::~FManagedArrayCollection(&local_598);
    FGeometryCollection::~FGeometryCollection(&local_4e8);
  }
  return;
}

