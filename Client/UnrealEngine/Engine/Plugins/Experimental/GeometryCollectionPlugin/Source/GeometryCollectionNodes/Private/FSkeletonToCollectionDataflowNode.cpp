// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e8918e0

UScriptStruct * __cdecl FSkeletonToCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode,
                         (UObject *)pUVar1,L"SkeletonToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e891a40

FName __thiscall FSkeletonToCollectionDataflowNode::GetType(FSkeletonToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSkeletonToCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e891ab0

bool __thiscall
FSkeletonToCollectionDataflowNode::IsA(FSkeletonToCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSkeletonToCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e891b18;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e891b18:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e891b36;
      }
    }
  }
  bVar5 = true;
LAB_14e891b36:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e891bb0

FStructOnScope * __thiscall
FSkeletonToCollectionDataflowNode::NewStructOnScope(FSkeletonToCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode,
                           (UObject *)pUVar2,L"SkeletonToCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e891c60

void __thiscall
FSkeletonToCollectionDataflowNode::SerializeInternal
          (FSkeletonToCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode,
                         (UObject *)pUVar1,L"SkeletonToCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e891cdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e891cf0

FName __thiscall
FSkeletonToCollectionDataflowNode::GetDisplayName(FSkeletonToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SkeletonToCollection");
  return in_RDX;
}

// GetCategory @ 14e891d20

FName __thiscall
FSkeletonToCollectionDataflowNode::GetCategory(FSkeletonToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection");
  return in_RDX;
}

// GetTags @ 14e891d50

FString * __thiscall
FSkeletonToCollectionDataflowNode::GetTags
          (FSkeletonToCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e891d80

UScriptStruct * __thiscall
FSkeletonToCollectionDataflowNode::TypedScriptStruct(FSkeletonToCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode,
                         (UObject *)pUVar1,L"SkeletonToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e891dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkeletonToCollectionDataflowNode::Evaluate
          (FSkeletonToCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<USkeleton_const_> TVar1;
  undefined1 *puVar2;
  FDataflowInput *this_00;
  TObjectPtr<USkeleton_const_>_u_0 *pTVar3;
  undefined1 auStack_118 [32];
  FConnectionReference local_f8;
  FManagedArrayCollection local_d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar2 == &this->Collection) {
    FManagedArrayCollection::FManagedArrayCollection(&local_d8);
    local_f8.Reference = &this->Skeleton;
    local_f8.Index = -1;
    local_f8.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_f8);
    pTVar3 = &FDataflowInput::GetValue<TObjectPtr<USkeleton_const_>_>
                        (this_00,param_1,local_f8.Reference)->field0_0x0;
    TVar1.field0_0x0 = (TObjectPtr<USkeleton_const_>_u_0)pTVar3->DebugPtr;
    if (TVar1.field0_0x0 != (USkeleton *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      FGeometryCollectionEngineConversion::AppendSkeleton
                ((USkeleton *)TVar1.field0_0x0,&UE::Math::TTransform<double>::Identity,&local_d8);
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_d8,&this->Collection);
    FManagedArrayCollection::~FManagedArrayCollection(&local_d8);
  }
  return;
}

