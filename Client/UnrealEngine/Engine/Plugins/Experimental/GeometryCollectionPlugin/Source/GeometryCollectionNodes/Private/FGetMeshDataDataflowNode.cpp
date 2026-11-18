// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e884030

UScriptStruct * __cdecl FGetMeshDataDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMeshDataDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMeshDataDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode,(UObject *)pUVar1,
                         L"GetMeshDataDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetMeshDataDataflowNode.OuterSingleton;
}

// GetType @ 14e8840b0

FName __thiscall FGetMeshDataDataflowNode::GetType(FGetMeshDataDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetMeshDataDataflowNode");
  return in_RDX;
}

// IsA @ 14e884170

bool __thiscall FGetMeshDataDataflowNode::IsA(FGetMeshDataDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetMeshDataDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8841d8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8841d8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8841f6;
      }
    }
  }
  bVar5 = true;
LAB_14e8841f6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8842b0

FStructOnScope * __thiscall
FGetMeshDataDataflowNode::NewStructOnScope(FGetMeshDataDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetMeshDataDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetMeshDataDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode,(UObject *)pUVar2,
                           L"GetMeshDataDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetMeshDataDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e884330

void __thiscall
FGetMeshDataDataflowNode::SerializeInternal(FGetMeshDataDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMeshDataDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMeshDataDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode,(UObject *)pUVar1,
                         L"GetMeshDataDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FGetMeshDataDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FGetMeshDataDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8843ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8843c0

FName __thiscall FGetMeshDataDataflowNode::GetDisplayName(FGetMeshDataDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetMeshData");
  return in_RDX;
}

// GetCategory @ 14e884450

FName __thiscall FGetMeshDataDataflowNode::GetCategory(FGetMeshDataDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e884480

FString * __thiscall
FGetMeshDataDataflowNode::GetTags(FGetMeshDataDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8844b0

UScriptStruct * __thiscall
FGetMeshDataDataflowNode::TypedScriptStruct(FGetMeshDataDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMeshDataDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMeshDataDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode,(UObject *)pUVar1,
                         L"GetMeshDataDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetMeshDataDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8845a0

void __thiscall
FGetMeshDataDataflowNode::Evaluate
          (FGetMeshDataDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<UDynamicMesh> TVar1;
  undefined1 *puVar2;
  TObjectPtr<UDynamicMesh>_u_0 *pTVar3;
  int *piVar4;
  int local_res8 [2];
  
  piVar4 = &this->VertexCount;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((int *)puVar2 == piVar4) {
    pTVar3 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                        ((FDataflowNode *)this,param_1,&this->Mesh)->field0_0x0;
    TVar1.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar3->DebugPtr;
    if (TVar1.field0_0x0 != (UDynamicMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      local_res8[0] = *(int *)(*(longlong *)((longlong)TVar1.field0_0x0 + 0xb8) + 0x50);
      goto LAB_14e8846c2;
    }
  }
  else {
    piVar4 = &this->EdgeCount;
    puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((int *)puVar2 == piVar4) {
      pTVar3 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                          ((FDataflowNode *)this,param_1,&this->Mesh)->field0_0x0;
      TVar1.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar3->DebugPtr;
      if (TVar1.field0_0x0 != (UDynamicMesh *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
        }
        local_res8[0] = *(int *)(*(longlong *)((longlong)TVar1.field0_0x0 + 0xb8) + 0x200);
        goto LAB_14e8846c2;
      }
    }
    else {
      piVar4 = &this->TriangleCount;
      puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
      if ((int *)puVar2 != piVar4) {
        return;
      }
      pTVar3 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                          ((FDataflowNode *)this,param_1,&this->Mesh)->field0_0x0;
      TVar1.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar3->DebugPtr;
      if (TVar1.field0_0x0 != (UDynamicMesh *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
        }
        local_res8[0] = *(int *)(*(longlong *)((longlong)TVar1.field0_0x0 + 0xb8) + 0x170);
        goto LAB_14e8846c2;
      }
    }
  }
  local_res8[0] = 0;
LAB_14e8846c2:
  FDataflowNode::SetValue<int,int>((FDataflowNode *)this,param_1,local_res8,piVar4);
  return;
}

// FGetMeshDataDataflowNode @ 14e9211c0

FGetMeshDataDataflowNode * __thiscall
FGetMeshDataDataflowNode::FGetMeshDataDataflowNode
          (FGetMeshDataDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
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
  this->_padding_ = (longlong)&___7FGetMeshDataDataflowNode__6B_;
  local_58.Reference = &this->Mesh;
  this->VertexCount = 0;
  (((TObjectPtr<UDynamicMesh> *)local_58.Reference)->field0_0x0).DebugPtr = (UDynamicMesh *)0x0;
  this->EdgeCount = 0;
  this->TriangleCount = 0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->VertexCount;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->EdgeCount;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->TriangleCount;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  return this;
}

