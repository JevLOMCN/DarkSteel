// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e860d10

UScriptStruct * __cdecl FMeshInfoDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshInfoDataflowNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshInfoDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshInfoDataflowNode,(UObject *)pUVar1,
                         L"MeshInfoDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMeshInfoDataflowNode.OuterSingleton;
}

// GetType @ 14e860dd0

FName __thiscall FMeshInfoDataflowNode::GetType(FMeshInfoDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMeshInfoDataflowNode");
  return in_RDX;
}

// IsA @ 14e860f40

bool __thiscall FMeshInfoDataflowNode::IsA(FMeshInfoDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMeshInfoDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e860fa8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e860fa8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e860fc6;
      }
    }
  }
  bVar5 = true;
LAB_14e860fc6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e861080

FStructOnScope * __thiscall FMeshInfoDataflowNode::NewStructOnScope(FMeshInfoDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMeshInfoDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMeshInfoDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMeshInfoDataflowNode,(UObject *)pUVar2,
                           L"MeshInfoDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMeshInfoDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e861190

void __thiscall
FMeshInfoDataflowNode::SerializeInternal(FMeshInfoDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshInfoDataflowNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshInfoDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshInfoDataflowNode,(UObject *)pUVar1,
                         L"MeshInfoDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMeshInfoDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMeshInfoDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86120d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e861250

FName __thiscall FMeshInfoDataflowNode::GetDisplayName(FMeshInfoDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MeshInfo");
  return in_RDX;
}

// GetCategory @ 14e861310

FName __thiscall FMeshInfoDataflowNode::GetCategory(FMeshInfoDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e861370

FString * __thiscall
FMeshInfoDataflowNode::GetTags(FMeshInfoDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8613e0

UScriptStruct * __thiscall FMeshInfoDataflowNode::TypedScriptStruct(FMeshInfoDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshInfoDataflowNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshInfoDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshInfoDataflowNode,(UObject *)pUVar1,
                         L"MeshInfoDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMeshInfoDataflowNode.OuterSingleton;
}

// Evaluate @ 14e861480

void __thiscall
FMeshInfoDataflowNode::Evaluate
          (FMeshInfoDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<UDynamicMesh> TVar1;
  undefined1 *puVar2;
  TObjectPtr<UDynamicMesh>_u_0 *pTVar3;
  FString *pFVar4;
  FString local_18;
  
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FString *)puVar2 == &this->InfoString) {
    pTVar3 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                        ((FDataflowNode *)this,param_1,&this->Mesh)->field0_0x0;
    TVar1.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar3->DebugPtr;
    if (TVar1.field0_0x0 == (UDynamicMesh *)0x0) {
      pFVar4 = ::FString::FString(&local_18,"");
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      pFVar4 = (FString *)
               (**(code **)(**(longlong **)((longlong)TVar1.field0_0x0 + 0xb8) + 0xc0))
                         (*(longlong **)((longlong)TVar1.field0_0x0 + 0xb8),&local_18);
    }
    FDataflowNode::SetValue<FString,FString>((FDataflowNode *)this,param_1,pFVar4,&this->InfoString)
    ;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

