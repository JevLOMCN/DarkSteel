// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8c34b0

UScriptStruct * __cdecl FBranchMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBranchMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBranchMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBranchMeshDataflowNode,(UObject *)pUVar1,
                         L"BranchMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBranchMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e8c3610

FName __thiscall FBranchMeshDataflowNode::GetType(FBranchMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBranchMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e8c3640

bool __thiscall FBranchMeshDataflowNode::IsA(FBranchMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBranchMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8c36a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8c36a8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8c36c6;
      }
    }
  }
  bVar5 = true;
LAB_14e8c36c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8c3730

FStructOnScope * __thiscall FBranchMeshDataflowNode::NewStructOnScope(FBranchMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBranchMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBranchMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBranchMeshDataflowNode,(UObject *)pUVar2,
                           L"BranchMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBranchMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8c3870

void __thiscall
FBranchMeshDataflowNode::SerializeInternal(FBranchMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBranchMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBranchMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBranchMeshDataflowNode,(UObject *)pUVar1,
                         L"BranchMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FBranchMeshDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FBranchMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8c38ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8c3990

FName __thiscall FBranchMeshDataflowNode::GetDisplayName(FBranchMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BranchMesh");
  return in_RDX;
}

// GetCategory @ 14e8c39c0

FName __thiscall FBranchMeshDataflowNode::GetCategory(FBranchMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|FlowControl");
  return in_RDX;
}

// GetTags @ 14e8c3a80

FString * __thiscall
FBranchMeshDataflowNode::GetTags(FBranchMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8c3ae0

UScriptStruct * __thiscall FBranchMeshDataflowNode::TypedScriptStruct(FBranchMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBranchMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBranchMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBranchMeshDataflowNode,(UObject *)pUVar1,
                         L"BranchMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBranchMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8c3c60

void __thiscall
FBranchMeshDataflowNode::Evaluate
          (FBranchMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<UDynamicMesh> *pTVar1;
  undefined1 *puVar2;
  FDataflowInput *this_00;
  bool *pbVar3;
  TObjectPtr<UDynamicMesh> *pTVar4;
  UObject *pUVar5;
  TObjectPtr<UDynamicMesh>_u_0 local_res8;
  FConnectionReference local_28;
  
  pTVar1 = &this->Mesh;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar2 == pTVar1) {
    local_28.Reference = &this->bCondition;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pbVar3 = FDataflowInput::GetValue<bool>(this_00,param_1,local_28.Reference);
    if (*pbVar3 == false) {
      pTVar4 = &this->MeshB;
    }
    else {
      pTVar4 = &this->MeshA;
    }
    pTVar4 = FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                       ((FDataflowNode *)this,param_1,pTVar4);
    local_res8.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar4->field0_0x0).DebugPtr;
    if (local_res8.DebugPtr != (UDynamicMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
      FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
                ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_res8.ObjectPtr,
                 pTVar1);
      return;
    }
    pUVar5 = GetTransientPackageAsObject();
    local_res8.DebugPtr = NewObject<UDynamicMesh>(pUVar5);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>_>
              ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_res8.ObjectPtr,
               pTVar1);
  }
  return;
}

// FBranchMeshDataflowNode @ 14e913420

FBranchMeshDataflowNode * __thiscall
FBranchMeshDataflowNode::FBranchMeshDataflowNode
          (FBranchMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FBranchMeshDataflowNode__6B_;
  local_58.Reference = &this->MeshA;
  (this->MeshB).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (((TObjectPtr<UDynamicMesh> *)local_58.Reference)->field0_0x0).DebugPtr = (UDynamicMesh *)0x0;
  this->bCondition = false;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->MeshB;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->bCondition;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Mesh;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

